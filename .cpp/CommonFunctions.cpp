// Fill out your copyright notice in the Description page of Project Settings.

/*#include "CoreMinimal.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Math/Rotator.h"
#include "Curves/CurveFloat.h"
#include "CommonFunctions.generated.h"*/


#include "CommonFunctions.h"

void UCommonFunctions::InterpolateActor(AActor* Actor, FVector TargetLocation, FRotator TargetRotation, float DeltaTime, float InterpSpeed, bool& isCompleted)
{
    FVector NewLocation = UKismetMathLibrary::VInterpTo(Actor->GetActorLocation(), TargetLocation, DeltaTime, InterpSpeed);
    FRotator NewRotation = UKismetMathLibrary::RInterpTo(Actor->GetActorRotation(), TargetRotation, DeltaTime, InterpSpeed);

    Actor->SetActorRelativeLocation(NewLocation);
    Actor->SetActorRelativeRotation(NewRotation);

    //threshold 
    float LocationThreshold = 1.0f;
    float RotationThreshold = .5f;

    // Check within threshold
    if (FVector::Dist(NewLocation, TargetLocation) <= LocationThreshold &&
        NewRotation.Equals(TargetRotation, RotationThreshold)){
        isCompleted = true;
    }
    else
        isCompleted = false;

}
FRotator UCommonFunctions::ClampRotation(FRotator InRotation, FRotator ReferenceRotation, FRotator MinAxisValues, FRotator MaxAxisValues)
{
    FRotator DifferenceRotation = InRotation - ReferenceRotation;

    FRotator ClampedDifferenceRotation;
    ClampedDifferenceRotation.Pitch = FMath::ClampAngle(DifferenceRotation.Pitch, MinAxisValues.Pitch, MaxAxisValues.Pitch);
    ClampedDifferenceRotation.Yaw = FMath::ClampAngle(DifferenceRotation.Yaw, MinAxisValues.Yaw, MaxAxisValues.Yaw);
    ClampedDifferenceRotation.Roll = FMath::ClampAngle(DifferenceRotation.Roll, MinAxisValues.Roll, MaxAxisValues.Roll);

    FRotator ClampedRotation = ReferenceRotation + ClampedDifferenceRotation;

    return ClampedRotation;
}
FRotator UCommonFunctions::ClampRotationWithRadius(FRotator InRotation, float Radius)
{
    //vector of inrot
    FVector2D v = FVector2D(InRotation.Yaw, InRotation.Pitch);

    //return if within bounds
    if (v.Size() < Radius)
        return InRotation;

    FRotator ClampedRotation = InRotation;

    //normalize and set to max radius
    FVector2D v2 = v.GetSafeNormal() * Radius;
    ClampedRotation.Yaw = v2.X;
    ClampedRotation.Pitch = v2.Y;

    return ClampedRotation;
}
FRotator UCommonFunctions::SmoothClampRotation(FRotator InRotator, float DeltaTime, UPARAM(ref) double& Alpha, float& OutClampStrength, float InnerRadius = 15, float OuterRadius = 25, float ClampStrengthMultiplier = 1)
{

    OutClampStrength = 0;
    //vector of inrot
    FVector v = InRotator.Quaternion().Euler();//FVector(InRotator.Yaw, InRotator.Pitch, InRotator.Roll);

    //within bounds
    if (v.Size() <= InnerRadius) {
        return InRotator;
    }

    float factor = (OuterRadius - InnerRadius) / FMath::Clamp(OuterRadius - v.Size(), 1, 100);


    FQuat QuatInRotator = InRotator.Quaternion();
    FQuat QuatInverseIn = QuatInRotator.Inverse().GetNormalized();
    FQuat QuatScaledToMinRadius = FQuat(QuatInRotator.GetRotationAxis(), FMath::DegreesToRadians(InnerRadius));
    FQuat QuatScaledToMaxRadius = FQuat(QuatInRotator.GetRotationAxis(), FMath::DegreesToRadians(OuterRadius));

    //Recalculate InverseLerp
    Alpha = UKismetMathLibrary::NormalizeToRange(v.Size(), InnerRadius, OuterRadius);

    //Interp To Target
    Alpha = FMath::Clamp(FMath::FInterpTo(Alpha, 0, DeltaTime, ClampStrengthMultiplier),0,1);

    //for use to ex. scale input speed
    OutClampStrength = Alpha;

    //Slerped from outer towards inner
    FQuat T = FQuat::Slerp(QuatScaledToMinRadius, QuatScaledToMaxRadius, Alpha);

    return T.Rotator();
}
FRotator UCommonFunctions::SmoothClampRotationPerAxis(FRotator InRotation,  FRotator MinAngles, FRotator MaxAngles, float AngleThreshHold, float DeltaTime, float& OutClampStrength, float ClampStrengthMultiplier = 1)
{
    InRotation = UCommonFunctions::ClampRotation(InRotation, FRotator::ZeroRotator, MinAngles, MaxAngles);

    // Calculate factors for each axis
    float PitchFactor = (MaxAngles.Pitch - MinAngles.Pitch) / FMath::Clamp(MaxAngles.Pitch - InRotation.Pitch, 1.f, 100.f);
    float YawFactor = (MaxAngles.Yaw - MinAngles.Yaw) / FMath::Clamp(MaxAngles.Yaw - InRotation.Yaw, 1.f, 100.f);
    float RollFactor = (MaxAngles.Roll - MinAngles.Roll) / FMath::Clamp(MaxAngles.Roll - InRotation.Roll, 1.f, 100.f);

    // Interpolate if outside threshold
    if (FMath::Abs(InRotation.Pitch) > AngleThreshHold)
        InRotation.Pitch = FMath::FInterpTo(InRotation.Pitch, 0, DeltaTime, (PitchFactor * ClampStrengthMultiplier) - 1.f);
    if (FMath::Abs(InRotation.Yaw) > AngleThreshHold)
        InRotation.Yaw = FMath::FInterpTo(InRotation.Yaw, 0, DeltaTime, (YawFactor * ClampStrengthMultiplier) - 1.f);
    if (FMath::Abs(InRotation.Roll) > AngleThreshHold)
        InRotation.Roll = FMath::FInterpTo(InRotation.Roll, 0, DeltaTime, (RollFactor * ClampStrengthMultiplier) - 1.f);

    return InRotation;
}


FRotator UCommonFunctions::NormalizeRotator(FRotator Rotator) {
    return Rotator.GetNormalized();
}
FVector UCommonFunctions::LocationFromDistanceAndRotation(FVector ReferencePoint, FRotator Rotation, float Distance)
{
  
    //convert
    float Roll = FMath::DegreesToRadians(Rotation.Roll);
    float Pitch = FMath::DegreesToRadians(Rotation.Pitch);
    float Yaw = FMath::DegreesToRadians(Rotation.Yaw);

    //delta for each axis
    float Dx = Distance * cos(Yaw) * cos(Pitch);
    float Dy = Distance * cos(Pitch) * sin(Yaw);
    float Dz = Distance * sin(Pitch);

    return ReferencePoint + FVector(Dx, Dy, Dz);
}
FRotator UCommonFunctions::QuickAddRotation(FRotator Rotation, FVector Add)
{
    FRotator r;

    //Because this is correct for 1st person mouse control
    r.Roll = Rotation.Roll + Add.Z;
    r.Pitch = Rotation.Pitch - Add.Y;
    r.Yaw = Rotation.Yaw + Add.X;

    return r;
}
FRotator UCommonFunctions::QuickSubtractRotation(FRotator Rotation, FVector Sub)
{
    FRotator r;

    //Because this is correct for 1st person mouse control
    r.Roll = Rotation.Roll - Sub.Z;
    r.Pitch = Rotation.Pitch + Sub.Y;
    r.Yaw = Rotation.Yaw - Sub.X;

    return r;
}
FVector UCommonFunctions::FastClampVectorAxis(FVector Vector, FVector MaxVector, FVector MinVector) 
{
    FVector rv;

    rv.X = FMath::Clamp(Vector.X, MinVector.X, MaxVector.X);
    rv.Y = FMath::Clamp(Vector.Y, MinVector.Y, MaxVector.Y);
    rv.Z = FMath::Clamp(Vector.Z, MinVector.Z, MaxVector.Z);


    return rv;
}
FRotator UCommonFunctions::RSphericalInterp(FRotator Current, FRotator Target, float DeltaTime, float Speed, UPARAM(ref)float& Alpha)
{
    if (DeltaTime == 0.f || Current == Target)
    {
        return Current;
    }

    if (Speed <= 0.f)
    {
        return Target;
    }

    Alpha = FMath::Clamp(FMath::FInterpTo(Alpha,1,DeltaTime,Speed),0.f,1.f);

    const FQuat Delta = FQuat::Slerp(Current.Quaternion(), Target.Quaternion(), Alpha);

    return Delta.Rotator();

}

