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
#include "Curves/CurveFloat.h"
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

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GB Geo")
	TArray<ALocationVolume*> SrcVolumes;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GB Geo")
	TArray<ALocationVolume*> TrackVolumes;

	UPROPERTY(BlueprintReadWrite, Category = "GB Geo")
	bool DoInterp = false;


	FVector SourceEnd, SourceCurrent, SourceStart, TrackEnd, TrackCurrent, TrackStart;
	FRotator CurrentRotation;

	bool MaintainDist;


	float StartDist, EndDist;
	float TotalInterpSeconds,InterpSeconds;

	float Alpha = 0;


	//---------------------------------------------------//


	const int MAX_ALLOWED_VERTECIES = 1000;

	float LargestRadius;
	float AvarageRadius;
	bool BoxvolumeIsSmallest;
	TArray<FVector> MeshVertecies;
	TArray<FVector> TransformedVertecies;

	UPROPERTY()
	TArray<FOrientedBox> SavedOrientedBoxes;


	UFUNCTION(BlueprintCallable, Category = "GB Geo")
	void StartInterpolatePoints(bool ConstantDistance, float Time, FVector Start1, FVector End1, FVector Start2, FVector End2);




	UFUNCTION(BlueprintCallable, Category = "GB Geo")
	void TickInterpolate(float DeltaTime, FVector& CurrentLoc, FVector& TrackingPoint, FRotator& CurrentLookAtRot, float& outAlpha, UCurveFloat* OptionalCustomAlphaCurve);
	

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
			TransformedVertecies.Add(V);
		}
	}

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	void DrawOrientedBox(FOrientedBox& Box, UObject* ContextOb, FColor Color, float Duration, float Thickness);
	void GetDataFromVerticies(UStaticMeshComponent* Mesh, const FTransform WT, TArray<FVector>& Verts, FJsonSerializableArrayInt& TriangleIndexes, TArray<FVector>& Normals, 
		float& OutAvgRadiusToCenter, float& OutMaxRadiusToCenter, bool& bBoxIsSmallestBoundingShape);


	bool RayIntersectsTriangle(FVector RayOrigin, FVector RayVector, const TArray<FVector> Triangle, FVector& OutIntersectionPoint);
	int RayMeshIntersectionCount(UStaticMeshComponent* Mesh, FVector RayStart, FVector RayVector, const FTransform WT, TArray<FVector>& OutIntersectionPoints);


	UFUNCTION(BlueprintCallable, Category = "GB Geo")
	void Init(UStaticMeshComponent* Mesh, const FTransform WT, TArray<FVector>& outTransformedVertecies, bool ClearArray);
		

	UFUNCTION()
	void GetSmallestBoundingShape(const FTransform WT, TArray<FVector>& Verts, float& OutRadius, bool& BoxIsSmallest, int& outNumVertecies);
	

	UFUNCTION()
	TArray<FVector> GetOBoxCorners(FOrientedBox source);
	


	UFUNCTION(BlueprintCallable, Category = "GB Geo")
	FVector GetRandomPointsInMeshBounds(UStaticMeshComponent* Mesh, const FTransform WT, float& OutAvgRadius, float& OutMaxRadius, bool& OutTryBox, TArray<FVector> Optional_CachedTransformedVData, int Optional_SavedOBoxIndex);

private:
	void GetPointInOrientedBoxBounds(FVector& point, FOrientedBox& boundingBox, int& i, UStaticMeshComponent* Mesh, const FTransform& WT, TArray<FVector>& intersectionPoints, int maxiterations);
	void GetPointInSphereBounds(int& i, FVector& point, const FTransform& WT, UStaticMeshComponent* Mesh, TArray<FVector>& intersectionPoints, int maxiterations);

};

