// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "VolumeInterpolator.h"
#include "Components/BrushComponent.h"

//#include <CommonVectorFunctionsBPLibrary.h>
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


void UVolumeInterpolator::GenerateNewPoints(float MaxMovementLength, FVector P1Start, FVector P1End, FVector P2Start, FVector P2End)
{

	//new startpoints
    SourceStart = P1Start;
    TrackStart = P2Start;

	//new endpoints to interp to
    SourceEnd = P1End;
    TrackEnd = P2End;

	StartRotation = UKismetMathLibrary::FindLookAtRotation(TrackStart, SourceStart).Quaternion();
	StartDist = (SourceStart - TrackStart).Length();
	EndDist = StartDist - FMath::FRandRange(-MaxMovementLength, MaxMovementLength);

	TargetRotation = UKismetMathLibrary::FindLookAtRotation(TrackEnd, SourceEnd).Quaternion();


    TransformedVertecies.Empty();
}

void UVolumeInterpolator::StartInterpolatePoints(bool ConstantDistance)
{
	DoInterp = true;
	Alpha = 0;
}

void UVolumeInterpolator::TickInterpolate(float DeltaTime,float& outDist, FVector& CurrentLoc, FVector& TrackingPoint,FRotator& CurrentRot)
{

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


	//if(DoInterp)
	//	TickInterpolate(DeltaTime);

}
FOrientedBox ConvertFrom3f(UE::Geometry::FOrientedBox3f InBox) {

    FOrientedBox OutBox;


    OutBox.AxisX = (FVector)InBox.AxisX();
    OutBox.AxisY = (FVector)InBox.AxisY();
    OutBox.AxisZ = (FVector)InBox.AxisZ();

    OutBox.Center = (FVector)InBox.Center();

    OutBox.ExtentX = InBox.Extents.X*2;
    OutBox.ExtentY = InBox.Extents.Y*2;
    OutBox.ExtentZ = InBox.Extents.Z*2;

    return OutBox;

}

void UVolumeInterpolator::GetSmallestBoundingShape(const FTransform WT, TArray<FVector> Verts, float& OutRadius , bool& BoxIsSmallest,int& outNumVertecies) {

    TransformedVertecies.Empty();
    TMinVolumeBox3<float> box;

    //Vertecies = Verts;

    int j = 0;
    for (FVector V : Verts) {
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
  /*  do {
        i++;
    } while (i < maxTries || !box.IsSolutionAvailable());*/

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
           
            //UKismetSystemLibrary::DrawDebugPoint(GetWorld(), V, 5.f, FLinearColor::White, 1.f);
            LRadius = FMath::Max((V-WT.GetLocation()).Length(), LRadius);
        }

       BoxvolumeIsSmallest = BoxIsSmallest;
       OutRadius = LRadius;
       LargestRadius = LRadius;
       outNumVertecies = TransformedVertecies.Num();

        return;
    }
    //largest radius is smallest bounding
    float LRadius = 0.f;
    for (FVector& vert : TransformedVertecies) {
        FVector V = vert;
        
        //UKismetSystemLibrary::DrawDebugPoint(GetWorld(), V, 5.f, FLinearColor::White, 1.f);
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


    OrientedBox = ConvertFrom3f(OBox);
    BoxvolumeIsSmallest = BoxIsSmallest;

    return;
}
void UVolumeInterpolator::GetDataFromVerticies(UStaticMeshComponent* Mesh, const FTransform WT, TArray<FVector>& Verts, FJsonSerializableArrayInt& TriangleIndexes, TArray<FVector>& Normals,
    float& OutAvgRadiusToCenter, float& OutMaxRadiusToCenter, bool& bBoxIsSmallestBoundingShape) {

    OutMaxRadiusToCenter = 0;
    OutAvgRadiusToCenter = 0;

    TArray<FVector2D> UV;
    TArray<FProcMeshTangent> Tangents;
    int outNum;
    UKismetProceduralMeshLibrary::GetSectionFromStaticMesh(Mesh->GetStaticMesh(), 0, 0, Verts, TriangleIndexes, Normals, UV, Tangents);
    float MagnitudeValues = 0;
    float Radius = 0;

    FOrientedBox Box;

    //verts are localspace
    UVolumeInterpolator::GetSmallestBoundingShape(WT, Verts, Radius ,bBoxIsSmallestBoundingShape, outNum);
    UE_LOG(LogTemp, Warning, TEXT("%d"), Radius);

    //Randomize point using radius or box depening on smallest error margin 
    if (bBoxIsSmallestBoundingShape) {
        return;
    }
    else {
        //find avarageradius
        for (FVector& vert : TransformedVertecies) {

            
            //UKismetSystemLibrary::DrawDebugPoint(Mesh, vert, 3.f, FLinearColor::Red, 5.f

            float Magnitude = (vert - WT.GetLocation()).Length();
            MagnitudeValues += Magnitude;
        }
        if (Verts.Num() <= 0) {
            UE_LOG(LogTemp, Warning, TEXT("Verticies Array is 0"));
            return;
        }

        OutAvgRadiusToCenter = MagnitudeValues / Verts.Num();
        OutAvgRadiusToCenter;
        OutMaxRadiusToCenter = Radius;
        OutMaxRadiusToCenter;
    }
    return;
}
int UVolumeInterpolator::RayMeshIntersectionCount(UStaticMeshComponent* Mesh, FVector RayStart, FVector RayVector, const FTransform WT, TArray<FVector>& OutIntersectionPoints)
{
    constexpr float ep = std::numeric_limits<float>::epsilon();
    int LoopIndex = 0;
    int Intersections = 0;

    FJsonSerializableArrayInt TriangleIndecies;
    TArray<FVector> MeshVerticies;
    TArray<FVector> Normals;

    //unused
    TArray<FVector2D> UV;
    TArray<FProcMeshTangent> Tangents;

    UKismetProceduralMeshLibrary::GetSectionFromStaticMesh(Mesh->GetStaticMesh(), 0, 0, MeshVerticies, TriangleIndecies, Normals, UV, Tangents);

    FVector IntersectionPoint;
    OutIntersectionPoints.Empty();

    //iterate triangles
    while (LoopIndex < TriangleIndecies.Num() - 2) {

        TArray<FVector> TriangleToRayCheck;

        for (int8 VertIndex = 0; VertIndex < 3; VertIndex++)
        {
            FVector WorldSpaceNormal = ((Normals[TriangleIndecies[LoopIndex + VertIndex]]));
            TransformVector(WorldSpaceNormal, WT, false);
            double dotPr = UKismetMathLibrary::Dot_VectorVector(RayVector, WorldSpaceNormal);

            //triangle cant be intersected
            if (FMath::Abs(dotPr) < ep)
                break;

            FVector WorldSpaceVertex = TransformedVertecies[TriangleIndecies[LoopIndex + VertIndex]];
            TriangleToRayCheck.Add(WorldSpaceVertex);
        }

        if (TriangleToRayCheck.Num() == 3) {

            if (RayIntersectsTriangle(RayStart, RayVector, TriangleToRayCheck, IntersectionPoint)) {

                Intersections++; 
                OutIntersectionPoints.Add(IntersectionPoint);
            
                //Draw Ray 
                /*UKismetSystemLibrary::DrawDebugLine(GetWorld(), RayStart, IntersectionPoint, FLinearColor::White, .5f, .1f);

                //Draw checked triangle
                FLinearColor r = FLinearColor::MakeRandomColor();

                UKismetSystemLibrary::DrawDebugLine(GetWorld(), TriangleToRayCheck[0], TriangleToRayCheck[1],  r, 4.f, 1.f);
                UKismetSystemLibrary::DrawDebugLine(GetWorld(), TriangleToRayCheck[0], TriangleToRayCheck[2],  r, 4.f, 1.f);
                UKismetSystemLibrary::DrawDebugLine(GetWorld(), TriangleToRayCheck[1], TriangleToRayCheck[2],  r, 4.f, 1.f);
                UKismetSystemLibrary::DrawDebugPoint(GetWorld(), IntersectionPoint, 4.f, r, 5.f);*/
            }
        }

        TriangleToRayCheck.Empty();
        LoopIndex+=3;
    }

    return Intersections;
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

FVector UVolumeInterpolator::GetRandomPointsInMeshBounds(UStaticMeshComponent* Mesh, const FTransform WT, float& OutAvgRadius, float& OutMaxRadius, bool& OutTryBox, TArray<FVector> CachedTransformeDVData)
{
    FJsonSerializableArrayInt Triangles;
    TArray<FVector> Normals;
    FOrientedBox BoundingBox = OrientedBox;

    FVector Point;
    TArray<FVector> IntersectionPoints;
    int maxiterations = 1000;
    int i = 0;

    Vertecies = CachedTransformeDVData;


    if (Vertecies.Num() > MAX_ALLOWED_VERTECIES) {

        UE_LOG(LogTemp,Warning,TEXT("Vertecies of provided mesh exceeds maximim allowed count, aborting..."))
        return FVector::Zero();
    }

    //Spherebounds were bigger than Boxbounds, use box
    if (BoxvolumeIsSmallest) {
         DrawOrientedBox(OrientedBox, Mesh, FColor::Green, .1f, 3.f);
        do
        {
            Point = BoundingBox.Center;
            FVector AddVector = FVector::Zero();

            AddVector += BoundingBox.AxisX * FMath::Lerp(BoundingBox.ExtentX * -.5f, BoundingBox.ExtentX * .5f, FMath::FRand());
            AddVector += BoundingBox.AxisY * FMath::Lerp(BoundingBox.ExtentY * -.5f, BoundingBox.ExtentY * .5f, FMath::FRand());
            AddVector += BoundingBox.AxisZ * FMath::Lerp(BoundingBox.ExtentZ * -.5f, BoundingBox.ExtentZ * .5f, FMath::FRand());

            Point += AddVector;

            i++;
        } //point in polygon intersections always odd
        while (RayMeshIntersectionCount(Mesh, Point, FVector(1, 0, 1), WT, IntersectionPoints) % 2 == 0 && i < maxiterations);



        //debug
        /*for (FVector V : IntersectionPoints)
        {
            UKismetSystemLibrary::DrawDebugPoint(GetWorld(), V, 5.f, FLinearColor::White, 3.f);
        }
        UE_LOG(LogTemp, Warning, TEXT("%d"), IntersectionPoints.Num());
        UE_LOG(LogTemp, Warning, TEXT("%d"), i);*/
    }
    //Úsing radius
    else {
        do {
            //less range for every iteration
            float AlphaMinus = FMath::Min((i * 0.005f), .5f);
            Point = UKismetMathLibrary::RandomUnitVector();

            //1 is toward maxradius, -1 is toward 0
            Alpha = FMath::FRandRange(FMath::Min(0, -1.0f + AlphaMinus), 1.0f - AlphaMinus);

            if (Alpha > 0)
                Point *= FMath::Lerp(AvarageRadius, LargestRadius, Alpha);
            else
                Point *= FMath::Lerp(0, AvarageRadius, FMath::Abs(Alpha));

            TransformVector(Point, WT,false);
     
            i++;
        } //point in polygon intersections always odd
        while (RayMeshIntersectionCount(Mesh, Point, FVector(1, 0, 1), WT, IntersectionPoints) % 2 == 0 && i < maxiterations);


        //debug
        /*/for (FVector V : IntersectionPoints)
        {
            UKismetSystemLibrary::DrawDebugPoint(GetWorld(), V, 5.f, FLinearColor::White, 3.f);
        }
        UE_LOG(LogTemp, Warning, TEXT("%d"), i);
        */
    }

    OutAvgRadius = AvarageRadius;
    OutMaxRadius = LargestRadius;
    OutTryBox = BoxvolumeIsSmallest;

    return Point;
}
void UVolumeInterpolator::Init(UStaticMeshComponent* Mesh, const FTransform WT, TArray<FVector>& outTransformedVertecies)
{
    FJsonSerializableArrayInt Triangles;
    TArray<FVector> Normals;

    //save vertex data for point in polygon alg
    GetDataFromVerticies(Mesh, WT, Vertecies, Triangles, Normals, AvarageRadius, LargestRadius, BoxvolumeIsSmallest);

    outTransformedVertecies = Vertecies;
}
void UVolumeInterpolator::DrawOrientedBox(FOrientedBox& Box, UObject* ContextOb, FColor Color, float Duration, float Thickness) {
        //FVector Center = Box.Center;
        //FVector HalfAxisLengths(Box.ExtentX * .5f, Box.ExtentY * .5f, Box.ExtentZ * .5f);

        //FVector UnitVectorX = Box.AxisX;
        //FVector UnitVectorY = Box.AxisY;
        //FVector UnitVectorZ = Box.AxisZ;

        //FVector Corner1 = Center + HalfAxisLengths.X * UnitVectorX + HalfAxisLengths.Y * UnitVectorY + HalfAxisLengths.Z * UnitVectorZ;
        //FVector Corner2 = Center - HalfAxisLengths.X * UnitVectorX + HalfAxisLengths.Y * UnitVectorY + HalfAxisLengths.Z * UnitVectorZ;
        //FVector Corner3 = Center + HalfAxisLengths.X * UnitVectorX - HalfAxisLengths.Y * UnitVectorY + HalfAxisLengths.Z * UnitVectorZ;
        //FVector Corner4 = Center - HalfAxisLengths.X * UnitVectorX - HalfAxisLengths.Y * UnitVectorY + HalfAxisLengths.Z * UnitVectorZ;
        //FVector Corner5 = Center + HalfAxisLengths.X * UnitVectorX + HalfAxisLengths.Y * UnitVectorY - HalfAxisLengths.Z * UnitVectorZ;
        //FVector Corner6 = Center - HalfAxisLengths.X * UnitVectorX + HalfAxisLengths.Y * UnitVectorY - HalfAxisLengths.Z * UnitVectorZ;
        //FVector Corner7 = Center + HalfAxisLengths.X * UnitVectorX - HalfAxisLengths.Y * UnitVectorY - HalfAxisLengths.Z * UnitVectorZ;
        //FVector Corner8 = Center - HalfAxisLengths.X * UnitVectorX - HalfAxisLengths.Y * UnitVectorY - HalfAxisLengths.Z * UnitVectorZ;

        //// Draw lines between corners to form the box edges
        //DrawDebugLine(GetWorld(), Corner1, Corner2, Color, false, Duration);
        //DrawDebugLine(GetWorld(), Corner1, Corner3, Color, false, Duration);
        //DrawDebugLine(GetWorld(), Corner1, Corner5, Color, false, Duration);
        //DrawDebugLine(GetWorld(), Corner2, Corner4, Color, false, Duration);
        //DrawDebugLine(GetWorld(), Corner2, Corner6, Color, false, Duration);
        //DrawDebugLine(GetWorld(), Corner3, Corner4, Color, false, Duration);
        //DrawDebugLine(GetWorld(), Corner3, Corner7, Color, false, Duration);
        //DrawDebugLine(GetWorld(), Corner4, Corner8, Color, false, Duration);
        //DrawDebugLine(GetWorld(), Corner5, Corner6, Color, false, Duration);
        //DrawDebugLine(GetWorld(), Corner5, Corner7, Color, false, Duration);
        //DrawDebugLine(GetWorld(), Corner6, Corner8, Color, false, Duration);
        //DrawDebugLine(GetWorld(), Corner7, Corner8, Color, false, Duration);
}




