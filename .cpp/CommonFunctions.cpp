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
FRotator UCommonFunctions::ClampRotationWithRadius(FRotator InRotation, FRotator ReferenceRotation, float Radius)
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
FRotator UCommonFunctions::SmoothClampRotation(FRotator InRotation, FRotator ReferenceRotation, float DeltaTime, float InnerRadius = 15, float OuterRadius=25, float ClampStrengthMultiplier=1)
{
    //vector of inrot
    FVector v = FVector(InRotation.Yaw, InRotation.Pitch, InRotation.Roll);

    //within bounds
    if (v.Size() < InnerRadius)
        return InRotation;

    float factor = (OuterRadius - InnerRadius) / FMath::Clamp(OuterRadius - v.Size(), 1, 100);

    FRotator ClampedRotation = FMath::RInterpTo(InRotation, ReferenceRotation, DeltaTime, (factor * ClampStrengthMultiplier) - 1);


    return ClampedRotation;
}
FRotator UCommonFunctions::SmoothClampRotationPerAxis(FRotator InRotation, FRotator ReferenceRotation, FRotator MinAngles, FRotator MaxAngles, float AngleThreshHold, float DeltaTime, float ClampStrengthMultiplier = 1)
{
    InRotation = UCommonFunctions::ClampRotation(InRotation, ReferenceRotation, MinAngles, MaxAngles);

    // Calculate factors for each axis
    float PitchFactor = (MaxAngles.Pitch - MinAngles.Pitch) / FMath::Clamp(MaxAngles.Pitch - InRotation.Pitch, 1.f, 100.f);
    float YawFactor = (MaxAngles.Yaw - MinAngles.Yaw) / FMath::Clamp(MaxAngles.Yaw - InRotation.Yaw, 1.f, 100.f);
    float RollFactor = (MaxAngles.Roll - MinAngles.Roll) / FMath::Clamp(MaxAngles.Roll - InRotation.Roll, 1.f, 100.f);

    // Interpolate if outside threshold
    if (FMath::Abs(InRotation.Pitch - ReferenceRotation.Pitch) > AngleThreshHold)
        InRotation.Pitch = FMath::FInterpTo(InRotation.Pitch, ReferenceRotation.Pitch, DeltaTime, (PitchFactor * ClampStrengthMultiplier) - 1.f);
    if (FMath::Abs(InRotation.Yaw - ReferenceRotation.Yaw) > AngleThreshHold)
        InRotation.Yaw = FMath::FInterpTo(InRotation.Yaw, ReferenceRotation.Yaw, DeltaTime, (YawFactor * ClampStrengthMultiplier) - 1.f);
    if (FMath::Abs(InRotation.Roll - ReferenceRotation.Roll) > AngleThreshHold)
        InRotation.Roll = FMath::FInterpTo(InRotation.Roll, ReferenceRotation.Roll, DeltaTime, (RollFactor * ClampStrengthMultiplier) - 1.f);

    return InRotation;
}

FVector UCommonFunctions::ClampToEllipsoid(FVector InV, FVector ReferenceV, float wr, float hr, float& outDebugRadius)
{
    float length = InV.Size();

    //hypothenuse/2 always shorter than elipse radius
    if (length <= ((wr*wr*hr*hr)/2)) {
        return InV;
    }

    //ellipsoid radius at angle of normalized vector
    float ellipseRadius = (wr * hr) / FMath::Sqrt(wr * wr * (InV.Y / length) * (InV.Y / length) + hr * hr * (InV.X / length) * (InV.X / length));
    outDebugRadius = ellipseRadius;

    //clamp to edge
    if (length > ellipseRadius) {
        InV = InV.GetSafeNormal() * ellipseRadius;
    }

    return InV;
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


