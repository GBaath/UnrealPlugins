// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CommonVectorFunctionsBPLibrary.generated.h"

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/
UCLASS()
class COMMONVECTORFUNCTIONS_API UCommonVectorFunctionsBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable,Category = "VectorFunctions")
	static void InterpolateActor(UPARAM(ref)AActor* Actor, FVector TargetLocation, FRotator TargetRotation, float DeltaTime, float InterpSpeed, bool& isCompleted);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "VectorFunctions")
	static FRotator ClampRotation(FRotator InRotation, FRotator ReferenceRotation, FRotator MinAxisValues, FRotator MaxAxisValues);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "VectorFunctions")
	static FRotator ClampRotationWithRadius(FRotator InRotation, float Radius);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "VectorFunctions")
	static FRotator SmoothClampRotation(FRotator InRotation, FRotator ReferenceRotation, float DeltaTime, UPARAM(ref) double Alpha, float& OutClampStrength, FVector& DirClampVector, float InnerRadius, float OuterRadius, float ClampStrengthMultiplier);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "VectorFunctions")
	static FRotator SmoothClampRotationPerAxis(FRotator InRotation, FRotator ReferenceRotation, FRotator MinAngles, FRotator MaxAngles, float AngleThreshHold, float DeltaTime, float& OutClampStrength, float ClampStrengthMultiplier);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "VectorFunctions")
	static FVector ClampToEllipsoid(FVector InV, FVector ReferenceV, float wr, float hr, float& outDebugRadius);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "VectorFunctions")
	static FVector LocationFromDistanceAndRotation(FVector ReferencePoint, FRotator EulerAngle, float Distance);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "VectorFunctions",meta = (CompactNodeTitle = "norm"))
	static FRotator NormalizeRotator(FRotator Rotator);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "VectorFunctions",meta = (CompactNodeTitle = "R->V"))
	static FVector Rot2Vec(FRotator Rotator);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "VectorFunctions",meta = (CompactNodeTitle = "r+"))
	static FRotator QuickAddRotation(FRotator Rotation, FVector Add);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "VectorFunctions",meta = (CompactNodeTitle = "r-"))
	static FRotator QuickSubtractRotation(FRotator Rotation, FVector Sub);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "VectorFunctions")
	static FVector FastClampVectorAxes(FVector VectorToClamp, FVector MaxVector, FVector MinVector);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "VectorFunctions",meta = (CompactNodeTitle = "VMin"))
	static FVector ClampVectorMin(FVector VectorToClamp, FVector MinValues);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "VectorFunctions",meta = (CompactNodeTitle = "VMax"))
	static FVector ClampVectorMax(FVector VectorToClamp, FVector MaxValues);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "VectorFunctions")
	static FRotator RSphericalInterp(FRotator Current, FRotator Target, float DeltaTime, float Speed, UPARAM(ref)float& Alpha);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "VectorFunctions")
	static FVector ClampVectorInDirection(FVector Input, FVector Scaler);

	UFUNCTION(BlueprintCallable, Category = "VectorFunctions")
	static void TransformVector(UPARAM(ref)FVector& V, const FTransform T);
};
