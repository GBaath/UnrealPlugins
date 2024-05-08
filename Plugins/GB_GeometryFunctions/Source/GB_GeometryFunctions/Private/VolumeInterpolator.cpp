// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "VolumeInterpolator.h"
#include "Components/BrushComponent.h"

#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "KismetProceduralMeshLibrary.h"
#include "ProceduralMeshComponent.h"

#include "GeometryAlgorithmsModule.h"
#include "MinVolumeBox3.h"
#include "OrientedBoxTypes.h"

using namespace UE::Geometry;

// Sets default values for this component's properties
UVolumeInterpolator::UVolumeInterpolator()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


void UVolumeInterpolator::StartInterpolatePoints(bool ConstantDistance,float Time,FVector Start1, FVector End1, FVector Start2, FVector End2)
{

    TotalInterpSeconds = Time;
    InterpSeconds = 0;
	DoInterp = true;
	Alpha = 0;

    if (ConstantDistance) {
        MaintainDist = true;
        StartDist = (Start1 - Start2).Length();
    }

    SourceStart = Start1;
    TrackStart = Start2;
    SourceEnd = End1;
    TrackEnd = End2;
}
void UVolumeInterpolator::TickInterpolate(float DeltaTime, FVector& CurrentLoc, FVector& TrackingPoint,FRotator& CurrentLookAtRot,float&outAlpha, UCurveFloat* CustomAlphaCurve = nullptr)
{
    InterpSeconds += DeltaTime;

    //0->1 in totalinterptime

    if (CustomAlphaCurve != nullptr)
        Alpha = CustomAlphaCurve->GetFloatValue(FMath::Clamp(UKismetMathLibrary::NormalizeToRange(InterpSeconds,0,TotalInterpSeconds), 0, 1));
    else
        Alpha = FMath::Clamp(UKismetMathLibrary::NormalizeToRange(InterpSeconds, 0, TotalInterpSeconds), 0, 1);

    outAlpha = Alpha;


    FVector sourceTemp = FMath::Lerp(SourceStart, SourceEnd, Alpha);
    FVector trackTemp = FMath::Lerp(TrackStart, TrackEnd, Alpha);


    if (MaintainDist)
    {
        FVector direction = (sourceTemp - trackTemp);
        direction.Normalize();

        FVector offset = direction * StartDist;
        sourceTemp = trackTemp + offset;
    }
    
    if (Alpha >= 1) {
        DoInterp = false;
        InterpCompletedEvent.Broadcast();
    }

    CurrentLoc = sourceTemp;
    TrackingPoint = trackTemp;

    CurrentLookAtRot = UKismetMathLibrary::FindLookAtRotation(sourceTemp, trackTemp);
}

// Called when the game starts
void UVolumeInterpolator::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UVolumeInterpolator::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}




//-------------------------------------//

TArray<FVector> UVolumeInterpolator::GetOBoxCorners(FOrientedBox source)
{
    FVector Center = source.Center;
    FVector HalfAxisLengths = { source.ExtentX / 2,source.ExtentY / 2,source.ExtentZ / 2 };
    FVector UnitVectorX = source.AxisX;
    FVector UnitVectorY = source.AxisY;
    FVector UnitVectorZ = source.AxisZ;
    TArray<FVector> ret = {
        FVector(Center + HalfAxisLengths.X * UnitVectorX + HalfAxisLengths.Y * UnitVectorY + HalfAxisLengths.Z * UnitVectorZ),
        FVector(Center - HalfAxisLengths.X * UnitVectorX + HalfAxisLengths.Y * UnitVectorY + HalfAxisLengths.Z * UnitVectorZ),
        FVector(Center + HalfAxisLengths.X * UnitVectorX - HalfAxisLengths.Y * UnitVectorY + HalfAxisLengths.Z * UnitVectorZ),
        FVector(Center - HalfAxisLengths.X * UnitVectorX - HalfAxisLengths.Y * UnitVectorY + HalfAxisLengths.Z * UnitVectorZ),
        FVector(Center + HalfAxisLengths.X * UnitVectorX + HalfAxisLengths.Y * UnitVectorY - HalfAxisLengths.Z * UnitVectorZ),
        FVector(Center - HalfAxisLengths.X * UnitVectorX + HalfAxisLengths.Y * UnitVectorY - HalfAxisLengths.Z * UnitVectorZ),
        FVector(Center + HalfAxisLengths.X * UnitVectorX - HalfAxisLengths.Y * UnitVectorY - HalfAxisLengths.Z * UnitVectorZ),
        FVector(Center - HalfAxisLengths.X * UnitVectorX - HalfAxisLengths.Y * UnitVectorY - HalfAxisLengths.Z * UnitVectorZ)
    };

    return ret;
}

FOrientedBox ConvertFrom3f(UE::Geometry::FOrientedBox3f InBox) {

    FOrientedBox OutBox;


    OutBox.AxisX = (FVector)InBox.AxisX();
    OutBox.AxisY = (FVector)InBox.AxisY();
    OutBox.AxisZ = (FVector)InBox.AxisZ();

    OutBox.Center = (FVector)InBox.Center();

    OutBox.ExtentX = InBox.Extents.X * 2;
    OutBox.ExtentY = InBox.Extents.Y * 2;
    OutBox.ExtentZ = InBox.Extents.Z * 2;

    return OutBox;

}

void UVolumeInterpolator::DrawOrientedBox(FOrientedBox& Box, UObject* ContextOb, FColor Color, float Duration, float Thickness) {
    TArray<FVector> corners = GetOBoxCorners(Box);

    // Draw lines between corners
    for (int i = 0; i < corners.Num(); i++) {
        int nextIndex = (i + 1) % corners.Num();
        DrawDebugLine(GetWorld(), corners[i], corners[nextIndex], Color, false, Duration);
    }
}

int UVolumeInterpolator::RayMeshIntersectionCount(UStaticMeshComponent* Mesh, FVector RayStart, FVector RayVector, const FTransform WT, TArray<FVector>& OutIntersectionPoints)
{
    constexpr float ep = std::numeric_limits<float>::epsilon();
    int loopIndex = 0;
    int intersections = 0;

    FJsonSerializableArrayInt triangleIndecies;
    TArray<FVector> meshVerticies;
    TArray<FVector> normals;

    //unused
    TArray<FVector2D> uv;
    TArray<FProcMeshTangent> tangents;

    UKismetProceduralMeshLibrary::GetSectionFromStaticMesh(Mesh->GetStaticMesh(), 0, 0, meshVerticies, triangleIndecies, normals, uv, tangents);

    FVector intersectionPoint;
    OutIntersectionPoints.Empty();

    //UKismetSystemLibrary::DrawDebugArrow(GetWorld(), RayStart, RayStart + RayVector, 2.f, FLinearColor::Red, 1.f, 1.f);

    //iterate triangles
    while (loopIndex < triangleIndecies.Num() - 2) {

        TArray<FVector> TriangleToRayCheck;

        for (int8 VertIndex = 0; VertIndex < 3; VertIndex++)
        {
            FVector WorldSpaceNormal = ((normals[triangleIndecies[loopIndex + VertIndex]]));
            TransformVector(WorldSpaceNormal, WT, false);
            double dotPr = UKismetMathLibrary::Dot_VectorVector(RayVector, WorldSpaceNormal);

            //triangle cant be intersected
            if (FMath::Abs(dotPr) < ep)
                break;

            FVector WorldSpaceVertex = TransformedVertecies[triangleIndecies[loopIndex + VertIndex]];
            TriangleToRayCheck.Add(WorldSpaceVertex);
        }

        if (TriangleToRayCheck.Num() == 3) {

            if (RayIntersectsTriangle(RayStart, RayVector, TriangleToRayCheck, intersectionPoint)) {

                intersections++; 
                OutIntersectionPoints.Add(intersectionPoint);
            
                ////Draw Ray 
                //UKismetSystemLibrary::DrawDebugLine(GetWorld(), RayStart, intersectionPoint, FLinearColor::White, .5f, .1f);

                ////Draw checked triangle
                //FLinearColor r = FLinearColor::MakeRandomColor();

                //UKismetSystemLibrary::DrawDebugLine(GetWorld(), TriangleToRayCheck[0], TriangleToRayCheck[1],  r, 4.f, 1.f);
                //UKismetSystemLibrary::DrawDebugLine(GetWorld(), TriangleToRayCheck[0], TriangleToRayCheck[2],  r, 4.f, 1.f);
                //UKismetSystemLibrary::DrawDebugLine(GetWorld(), TriangleToRayCheck[1], TriangleToRayCheck[2],  r, 4.f, 1.f);
                //UKismetSystemLibrary::DrawDebugPoint(GetWorld(), intersectionPoint, 4.f, r, 5.f);
            }
        }

        TriangleToRayCheck.Empty();
        loopIndex+=3;
    }

    return intersections;
}

//Möller Trumbore alg
bool UVolumeInterpolator::RayIntersectsTriangle(FVector RayOrigin, FVector RayVector, const TArray<FVector>Triangle, FVector& OutIntersectionPoint)
{
    constexpr float ep = std::numeric_limits<float>::epsilon();

    FVector TriVert0 = Triangle[0];
    FVector TriVert1 = Triangle[1];
    FVector TriVert2 = Triangle[2];

    FVector edge1 = TriVert1 - TriVert0;
    FVector edge2 = TriVert2 - TriVert0;
    FVector RayCrossEdge2 = UKismetMathLibrary::Cross_VectorVector(RayVector, edge2);
    float DotEdge1 = UKismetMathLibrary::Dot_VectorVector(edge1, RayCrossEdge2);

    if (DotEdge1 > -ep && DotEdge1 < ep)
        return false;    // This ray is parallel to this triangle.

    float InverseDotEdge1 = 1.0 / DotEdge1;
    FVector s = RayOrigin - TriVert0;
    float u = InverseDotEdge1 * UKismetMathLibrary::Dot_VectorVector(s, RayCrossEdge2);

    if (u < 0 || u > 1)
        return false;

    FVector s_cross_e1 = UKismetMathLibrary::Cross_VectorVector(s, edge1);
    float v = InverseDotEdge1 * UKismetMathLibrary::Dot_VectorVector(RayVector, s_cross_e1);

    if (v < 0 || u + v > 1)
        return false;

    // At this stage we can compute t to find out where the intersection point is on the line.
    float t = InverseDotEdge1 * UKismetMathLibrary::Dot_VectorVector(edge2, s_cross_e1);

    if (t > ep) // ray intersection
    {
        OutIntersectionPoint = RayOrigin + RayVector * t;
        return true;
    }
    else // This means that there is a line intersection but not a ray intersection.
        return false;
}
//-------------------------------------------------//


void UVolumeInterpolator::GetDataFromVerticies(UStaticMeshComponent* Mesh, const FTransform WT, TArray<FVector>& Verts, FJsonSerializableArrayInt& TriangleIndexes, TArray<FVector>& Normals,
    float& OutAvgRadiusToCenter, float& OutMaxRadiusToCenter, bool& bBoxIsSmallestBoundingShape) {

    OutMaxRadiusToCenter = 0;
    OutAvgRadiusToCenter = 0;

    TArray<FVector2D> uv;
    TArray<FProcMeshTangent> Tangents;
    int outNum;
    UKismetProceduralMeshLibrary::GetSectionFromStaticMesh(Mesh->GetStaticMesh(), 0, 0, Verts, TriangleIndexes, Normals, uv, Tangents);
    float magnitudeValues = 0;
    float radius = 0;

    //verts are localspace
    UVolumeInterpolator::GetSmallestBoundingShape(WT, Verts, radius, bBoxIsSmallestBoundingShape, outNum);
    UE_LOG(LogTemp, Warning, TEXT("%d"), radius);

    //Randomize point using radius or box depening on smallest error margin 
    if (bBoxIsSmallestBoundingShape) {
        return;
    }
    else {
        //find avarageradius
        for (FVector& vert : TransformedVertecies) {
            float magnitude = (vert - WT.GetLocation()).Length();
            magnitudeValues += magnitude;
        }
        if (Verts.Num() <= 0) {
            UE_LOG(LogTemp, Warning, TEXT("Verticies Array is 0"));
            return;
        }

        OutAvgRadiusToCenter = magnitudeValues / Verts.Num();
        OutAvgRadiusToCenter;
        OutMaxRadiusToCenter = radius;
        OutMaxRadiusToCenter;
    }
    return;
}

void UVolumeInterpolator::GetSmallestBoundingShape(const FTransform WT, TArray<FVector>& Verts, float& OutRadius , bool& BoxIsSmallest,int& outNumVertecies) {

    TransformedVertecies.Empty();
    TMinVolumeBox3<float> box;


    

    int j = 0;
    for (FVector& V : Verts) {
        TransformVector(V, WT, true, j);
        j++;
    }

    TFunctionRef<FVector3f(int32)> GetVertexInWorldSpace =
        [Verts,WT,this](int32 i) {

        FVector V = TransformedVertecies[FMath::Clamp(i, 0, Verts.Num() - 1)];

        return (FVector3f)V;
        };

    //get smallest boundingbox
    FOrientedBox3f OBox;

    //Solve is somewhat unreliable
    int i = 0;
    int maxTries = 10;
    box.Solve(Verts.Num(), GetVertexInWorldSpace, false);

    if (box.IsSolutionAvailable()) {
        box.GetResult(OBox);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Failed To Solve BoxVolume"));

        BoxIsSmallest = false;
        //return SphereData
        //largest radius is smallest boundingbox
        float LRadius = 0.f;
        for (FVector& vert : TransformedVertecies) {
            FVector V = vert;
           
            LRadius = FMath::Max((V-WT.GetLocation()).Length(), LRadius);
        }

       BoxvolumeIsSmallest = false;
       OutRadius = LRadius;
       LargestRadius = LRadius;
       outNumVertecies = TransformedVertecies.Num();
       

        return;
    }
    //largest radius is smallest bounding
    float LRadius = 0.f;
    for (FVector& vert : TransformedVertecies) {
        FVector V = vert;
        
        LRadius = FMath::Max((V-WT.GetLocation()).Length(), LRadius);
    }

    LargestRadius = LRadius;

    float boxVol = OBox.Volume();
    float radVol = ((4 / 3) * UKismetMathLibrary::GetPI() * FMath::Cube(LRadius));
    //compare volumes
    if (OBox.Volume() > ((4 / 3) * UKismetMathLibrary::GetPI() * FMath::Cube(LRadius))) {
        BoxIsSmallest = false;
        OutRadius = LRadius;

        BoxvolumeIsSmallest = BoxIsSmallest;

        return;
    }

    BoxIsSmallest = true;


    SavedOrientedBoxes.Add(ConvertFrom3f(OBox));
    BoxvolumeIsSmallest = BoxIsSmallest;

    return;
}


void UVolumeInterpolator::GetPointInOrientedBoxBounds(FVector& point, FOrientedBox& boundingBox, int& i, UStaticMeshComponent* Mesh, const FTransform& WT, TArray<FVector>& intersectionPoints, int maxiterations)
{
    do
    {
        point = boundingBox.Center;
        FVector AddVector = FVector::Zero();

        AddVector += boundingBox.AxisX * FMath::Lerp(boundingBox.ExtentX * -.5f, boundingBox.ExtentX * .5f, FMath::FRand());
        AddVector += boundingBox.AxisY * FMath::Lerp(boundingBox.ExtentY * -.5f, boundingBox.ExtentY * .5f, FMath::FRand());
        AddVector += boundingBox.AxisZ * FMath::Lerp(boundingBox.ExtentZ * -.5f, boundingBox.ExtentZ * .5f, FMath::FRand());

        point += AddVector;

        i++;
    } //point in polygon intersections always odd
    while (RayMeshIntersectionCount(Mesh, point, FVector(10000, 0, 1), WT, intersectionPoints) % 2 == 0 && i < maxiterations);

    //debug
   /* for (FVector V : intersectionPoints)
    {
    UKismetSystemLibrary::DrawDebugPoint(GetWorld(), V, 5.f, FLinearColor::White, 3.f);
    }
    UE_LOG(LogTemp, Warning, TEXT("%d"), intersectionPoints.Num());
    UE_LOG(LogTemp, Warning, TEXT("%d"), i);*/
}

void UVolumeInterpolator::GetPointInSphereBounds(int& i, FVector& point, const FTransform& WT, UStaticMeshComponent* Mesh, TArray<FVector>& intersectionPoints, int maxiterations)
{

    //clearify this shitt TODO

    do {
        //less range for every iteration
        float AlphaMinus = FMath::Min((i * 0.005f), .5f);
        point = UKismetMathLibrary::RandomUnitVector();

        //1 is toward maxradius, -1 is toward 0
        Alpha = FMath::FRandRange(FMath::Min(0, -1.0f + AlphaMinus), 1.0f - AlphaMinus);

        if (Alpha > 0)
            point *= FMath::Lerp(AvarageRadius, LargestRadius, Alpha);
        else
            point *= FMath::Lerp(0, AvarageRadius, FMath::Abs(Alpha));

        TransformVector(point, WT, false);

        i++;
    } //point in polygon intersections always odd
    while (RayMeshIntersectionCount(Mesh, point, FVector(1, 0, 1), WT, intersectionPoints) % 2 == 0 && i < maxiterations);


    //debug
    /*/for (FVector V : IntersectionPoints)
    {
    UKismetSystemLibrary::DrawDebugPoint(GetWorld(), V, 5.f, FLinearColor::White, 3.f);
    }
    UE_LOG(LogTemp, Warning, TEXT("%d"), i);
    */
}

FVector UVolumeInterpolator::GetRandomPointsInMeshBounds(UStaticMeshComponent* Mesh, const FTransform WT, float& OutAvgRadius, float& OutMaxRadius, bool& OutTryBox, TArray<FVector> CachedTransformedVData, int SavedOBoxIndex = 0)
{


    FOrientedBox boundingBox = SavedOrientedBoxes[SavedOBoxIndex];
    FVector point;
    TArray<FVector> intersectionPoints;
    int maxiterations = 1000;
    int i = 0;

    if (CachedTransformedVData.Num() > 0) {
        MeshVertecies = CachedTransformedVData;
        TransformedVertecies = CachedTransformedVData;
    }

    if (MeshVertecies.Num() > MAX_ALLOWED_VERTECIES) {

        UE_LOG(LogTemp,Warning,TEXT("Vertecies of provided mesh exceeds maximim allowed count, aborting..."))
        return FVector::Zero();
    }

    //Spherebounds were bigger than Boxbounds, use box
    if (BoxvolumeIsSmallest) {
         DrawOrientedBox(boundingBox, Mesh, FColor::Green, .1f, 3.f);

         GetPointInOrientedBoxBounds(point, boundingBox, i, Mesh, WT, intersectionPoints, maxiterations);
    }
    //Úsing radius
    else {
        GetPointInSphereBounds(i, point, WT, Mesh, intersectionPoints, maxiterations);
    }

    OutAvgRadius = AvarageRadius;
    OutMaxRadius = LargestRadius;
    OutTryBox = BoxvolumeIsSmallest;

    return point;
}

void UVolumeInterpolator::Init(UStaticMeshComponent* Mesh, const FTransform WT, TArray<FVector>& outTransformedVertecies, bool ClearCacheArray)
{
    FJsonSerializableArrayInt triangles;
    TArray<FVector> normals;


    if (ClearCacheArray)
        SavedOrientedBoxes.Empty();


    //save vertex data for point in polygon alg
    GetDataFromVerticies(Mesh, WT, MeshVertecies, triangles, normals, AvarageRadius, LargestRadius, BoxvolumeIsSmallest);
    outTransformedVertecies = MeshVertecies;

}