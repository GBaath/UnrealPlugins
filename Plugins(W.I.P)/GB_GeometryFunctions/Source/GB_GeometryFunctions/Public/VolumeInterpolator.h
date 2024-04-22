// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//#include "CommonVectorFunctions.h"
//#include "CommonVectorFunctionsBPLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/ActorComponent.h"
#include "LocationVolume.h"
#include "Serialization/JsonSerializerMacros.h"
#include "Components/StaticMeshComponent.h"
#include "VolumeInterpolator.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInterpCompleted);
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GB_GEOMETRYFUNCTIONS_API UVolumeInterpolator : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UVolumeInterpolator();

	UPROPERTY(BlueprintReadOnly, Category = "GB Geo")
	FRotator LookatRotation;

	FVector SourceEnd, SourceCurrent, SourceStart, TrackEnd, TrackCurrent, TrackStart;
	FQuat StartRotation,TargetRotation;
	float StartDist, EndDist;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GB Geo")
	TArray<ALocationVolume*> SrcVolumes;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GB Geo")
	TArray<ALocationVolume*> TrackVolumes;

	UPROPERTY(BlueprintReadWrite, Category = "GB Geo")
	bool DoInterp = false;

	float Alpha = 0;
	float InterpSpeed = 1;

	const int MAX_ALLOWED_VERTECIES = 1000;

	float LargestRadius;
	float AvarageRadius;
	bool BoxvolumeIsSmallest;
	TArray<FVector> Vertecies;
	TArray<FVector> TransformedVertecies;

	FOrientedBox OrientedBox;

	

	UFUNCTION(BlueprintCallable, Category = "GB Geo")
	void GenerateNewPoints(float MaxMovementLength, FVector P1Start, FVector P1End, FVector P2Start, FVector P2End);
	UFUNCTION(BlueprintCallable, Category = "GB Geo")
	void StartInterpolatePoints(bool MainTainDistance);

	UFUNCTION(BlueprintCallable, Category = "GB Geo")
	void TickInterpolate(float DeltaTime, float& outDist, FVector& CurrentLoc, FVector& TrackingPoint, FRotator& CurrentRot);

	UPROPERTY(BlueprintAssignable, Category = "GB Geo")
	FInterpCompleted InterpCompletedEvent;

	UFUNCTION()
	void TransformVector(UPARAM(ref)FVector& V, const FTransform T, bool Cache = true, int VertexIndex = 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("T Call"));
		FTransform InT = FTransform(V);
		FTransform NewT = UKismetMathLibrary::ComposeTransforms(InT, T);

		V = NewT.GetLocation();
		
		if (Cache) {
			//if (TransformedVertecies.Num() < VertexIndex - 1)
				TransformedVertecies.Add(V);
			//else
				//TransformedVertecies[VertexIndex] = V;
		}
	}

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void DrawOrientedBox(FOrientedBox& Box, UObject* ContextOb, FColor Color, float Duration, float Thickness);
	void GetDataFromVerticies(UStaticMeshComponent* Mesh, const FTransform WorldTransform, TArray<FVector>& Verts, FJsonSerializableArrayInt& TriangleIndexes, TArray<FVector>& Normals, float& OutAvgRadiusToCenter, float& OutMaxRadiusToCenter, bool& bBoxIsSmallestBoundingShape);

	bool RayIntersectsTriangle(FVector RayOrigin, FVector RayVector, const TArray<FVector> Triangle, FVector& OutIntersectionPoint);
	int RayMeshIntersectionCount(UStaticMeshComponent* Mesh, FVector RayStart, FVector RayVector, const FTransform WT, TArray<FVector>& OutIntersectionPoints);


	UFUNCTION(BlueprintCallable, Category = "GB Geo")
	FVector GetRandomPointsInMeshBounds(UStaticMeshComponent* Mesh, const FTransform WT, float& OutAvgRadius, float& OutMaxRadius, bool& OutTryBox, TArray<FVector> CahchedTransformeDVData);
	


	UFUNCTION()
	void GetSmallestBoundingShape(const FTransform WT, TArray<FVector> Verts, float& OutRadius, bool& BoxIsSmallest, int& outNumVertecies);
	


	UFUNCTION(BlueprintCallable, Category = "GB Geo")
	void Init(UStaticMeshComponent* Mesh, const FTransform WT, TArray<FVector>& outTransformedVertecies);
	
	
};

