// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GB_GeometryFunctions/Public/VolumeInterpolator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVolumeInterpolator() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FOrientedBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ALocationVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GB_GEOMETRYFUNCTIONS_API UClass* Z_Construct_UClass_UVolumeInterpolator();
	GB_GEOMETRYFUNCTIONS_API UClass* Z_Construct_UClass_UVolumeInterpolator_NoRegister();
	GB_GEOMETRYFUNCTIONS_API UFunction* Z_Construct_UDelegateFunction_GB_GeometryFunctions_InterpCompleted__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GB_GeometryFunctions();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GB_GeometryFunctions_InterpCompleted__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GB_GeometryFunctions_InterpCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VolumeInterpolator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GB_GeometryFunctions_InterpCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GB_GeometryFunctions, nullptr, "InterpCompleted__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GB_GeometryFunctions_InterpCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GB_GeometryFunctions_InterpCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_GB_GeometryFunctions_InterpCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GB_GeometryFunctions_InterpCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FInterpCompleted_DelegateWrapper(const FMulticastScriptDelegate& InterpCompleted)
{
	InterpCompleted.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UVolumeInterpolator::execGetRandomPointsInMeshBounds)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_Mesh);
		P_GET_STRUCT(FTransform,Z_Param_WT);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutAvgRadius);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutMaxRadius);
		P_GET_UBOOL_REF(Z_Param_Out_OutTryBox);
		P_GET_TARRAY(FVector,Z_Param_Optional_CachedTransformedVData);
		P_GET_PROPERTY(FIntProperty,Z_Param_Optional_SavedOBoxIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetRandomPointsInMeshBounds(Z_Param_Mesh,Z_Param_WT,Z_Param_Out_OutAvgRadius,Z_Param_Out_OutMaxRadius,Z_Param_Out_OutTryBox,Z_Param_Optional_CachedTransformedVData,Z_Param_Optional_SavedOBoxIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVolumeInterpolator::execGetOBoxCorners)
	{
		P_GET_STRUCT(FOrientedBox,Z_Param_source);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetOBoxCorners(Z_Param_source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVolumeInterpolator::execGetSmallestBoundingShape)
	{
		P_GET_STRUCT(FTransform,Z_Param_WT);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Verts);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutRadius);
		P_GET_UBOOL_REF(Z_Param_Out_BoxIsSmallest);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_outNumVertecies);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSmallestBoundingShape(Z_Param_WT,Z_Param_Out_Verts,Z_Param_Out_OutRadius,Z_Param_Out_BoxIsSmallest,Z_Param_Out_outNumVertecies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVolumeInterpolator::execInit)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_Mesh);
		P_GET_STRUCT(FTransform,Z_Param_WT);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_outTransformedVertecies);
		P_GET_UBOOL(Z_Param_ClearArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_Mesh,Z_Param_WT,Z_Param_Out_outTransformedVertecies,Z_Param_ClearArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVolumeInterpolator::execTransformVector)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_V);
		P_GET_STRUCT(FTransform,Z_Param_T);
		P_GET_UBOOL(Z_Param_Cache);
		P_GET_PROPERTY(FIntProperty,Z_Param_VertexIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TransformVector(Z_Param_Out_V,Z_Param_T,Z_Param_Cache,Z_Param_VertexIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVolumeInterpolator::execTickInterpolate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_CurrentLoc);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TrackingPoint);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_CurrentLookAtRot);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_outAlpha);
		P_GET_OBJECT(UCurveFloat,Z_Param_OptionalCustomAlphaCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickInterpolate(Z_Param_DeltaTime,Z_Param_Out_CurrentLoc,Z_Param_Out_TrackingPoint,Z_Param_Out_CurrentLookAtRot,Z_Param_Out_outAlpha,Z_Param_OptionalCustomAlphaCurve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVolumeInterpolator::execStartInterpolatePoints)
	{
		P_GET_UBOOL(Z_Param_ConstantDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_STRUCT(FVector,Z_Param_Start1);
		P_GET_STRUCT(FVector,Z_Param_End1);
		P_GET_STRUCT(FVector,Z_Param_Start2);
		P_GET_STRUCT(FVector,Z_Param_End2);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartInterpolatePoints(Z_Param_ConstantDistance,Z_Param_Time,Z_Param_Start1,Z_Param_End1,Z_Param_Start2,Z_Param_End2);
		P_NATIVE_END;
	}
	void UVolumeInterpolator::StaticRegisterNativesUVolumeInterpolator()
	{
		UClass* Class = UVolumeInterpolator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOBoxCorners", &UVolumeInterpolator::execGetOBoxCorners },
			{ "GetRandomPointsInMeshBounds", &UVolumeInterpolator::execGetRandomPointsInMeshBounds },
			{ "GetSmallestBoundingShape", &UVolumeInterpolator::execGetSmallestBoundingShape },
			{ "Init", &UVolumeInterpolator::execInit },
			{ "StartInterpolatePoints", &UVolumeInterpolator::execStartInterpolatePoints },
			{ "TickInterpolate", &UVolumeInterpolator::execTickInterpolate },
			{ "TransformVector", &UVolumeInterpolator::execTransformVector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVolumeInterpolator_GetOBoxCorners_Statics
	{
		struct VolumeInterpolator_eventGetOBoxCorners_Parms
		{
			FOrientedBox source;
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_source;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVolumeInterpolator_GetOBoxCorners_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumeInterpolator_eventGetOBoxCorners_Parms, source), Z_Construct_UScriptStruct_FOrientedBox, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVolumeInterpolator_GetOBoxCorners_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVolumeInterpolator_GetOBoxCorners_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumeInterpolator_eventGetOBoxCorners_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumeInterpolator_GetOBoxCorners_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_GetOBoxCorners_Statics::NewProp_source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_GetOBoxCorners_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_GetOBoxCorners_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVolumeInterpolator_GetOBoxCorners_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VolumeInterpolator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumeInterpolator_GetOBoxCorners_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumeInterpolator, nullptr, "GetOBoxCorners", nullptr, nullptr, Z_Construct_UFunction_UVolumeInterpolator_GetOBoxCorners_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumeInterpolator_GetOBoxCorners_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVolumeInterpolator_GetOBoxCorners_Statics::VolumeInterpolator_eventGetOBoxCorners_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumeInterpolator_GetOBoxCorners_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVolumeInterpolator_GetOBoxCorners_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumeInterpolator_GetOBoxCorners_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVolumeInterpolator_GetOBoxCorners_Statics::VolumeInterpolator_eventGetOBoxCorners_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVolumeInterpolator_GetOBoxCorners()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVolumeInterpolator_GetOBoxCorners_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics
	{
		struct VolumeInterpolator_eventGetRandomPointsInMeshBounds_Parms
		{
			UStaticMeshComponent* Mesh;
			FTransform WT;
			float OutAvgRadius;
			float OutMaxRadius;
			bool OutTryBox;
			TArray<FVector> Optional_CachedTransformedVData;
			int32 Optional_SavedOBoxIndex;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WT_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WT;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutAvgRadius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutMaxRadius;
		static void NewProp_OutTryBox_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OutTryBox;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Optional_CachedTransformedVData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Optional_CachedTransformedVData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Optional_SavedOBoxIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumeInterpolator_eventGetRandomPointsInMeshBounds_Parms, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::NewProp_Mesh_MetaData), Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::NewProp_Mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::NewProp_WT_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::NewProp_WT = { "WT", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumeInterpolator_eventGetRandomPointsInMeshBounds_Parms, WT), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::NewProp_WT_MetaData), Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::NewProp_WT_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::NewProp_OutAvgRadius = { "OutAvgRadius", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumeInterpolator_eventGetRandomPointsInMeshBounds_Parms, OutAvgRadius), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::NewProp_OutMaxRadius = { "OutMaxRadius", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumeInterpolator_eventGetRandomPointsInMeshBounds_Parms, OutMaxRadius), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::NewProp_OutTryBox_SetBit(void* Obj)
	{
		((VolumeInterpolator_eventGetRandomPointsInMeshBounds_Parms*)Obj)->OutTryBox = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::NewProp_OutTryBox = { "OutTryBox", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VolumeInterpolator_eventGetRandomPointsInMeshBounds_Parms), &Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::NewProp_OutTryBox_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::NewProp_Optional_CachedTransformedVData_Inner = { "Optional_CachedTransformedVData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::NewProp_Optional_CachedTransformedVData = { "Optional_CachedTransformedVData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumeInterpolator_eventGetRandomPointsInMeshBounds_Parms, Optional_CachedTransformedVData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::NewProp_Optional_SavedOBoxIndex = { "Optional_SavedOBoxIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumeInterpolator_eventGetRandomPointsInMeshBounds_Parms, Optional_SavedOBoxIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumeInterpolator_eventGetRandomPointsInMeshBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::NewProp_WT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::NewProp_OutAvgRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::NewProp_OutMaxRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::NewProp_OutTryBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::NewProp_Optional_CachedTransformedVData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::NewProp_Optional_CachedTransformedVData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::NewProp_Optional_SavedOBoxIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "GB Geo" },
		{ "ModuleRelativePath", "Public/VolumeInterpolator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumeInterpolator, nullptr, "GetRandomPointsInMeshBounds", nullptr, nullptr, Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::VolumeInterpolator_eventGetRandomPointsInMeshBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::VolumeInterpolator_eventGetRandomPointsInMeshBounds_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVolumeInterpolator_GetSmallestBoundingShape_Statics
	{
		struct VolumeInterpolator_eventGetSmallestBoundingShape_Parms
		{
			FTransform WT;
			TArray<FVector> Verts;
			float OutRadius;
			bool BoxIsSmallest;
			int32 outNumVertecies;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WT_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WT;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Verts_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Verts;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutRadius;
		static void NewProp_BoxIsSmallest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BoxIsSmallest;
		static const UECodeGen_Private::FIntPropertyParams NewProp_outNumVertecies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVolumeInterpolator_GetSmallestBoundingShape_Statics::NewProp_WT_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVolumeInterpolator_GetSmallestBoundingShape_Statics::NewProp_WT = { "WT", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumeInterpolator_eventGetSmallestBoundingShape_Parms, WT), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumeInterpolator_GetSmallestBoundingShape_Statics::NewProp_WT_MetaData), Z_Construct_UFunction_UVolumeInterpolator_GetSmallestBoundingShape_Statics::NewProp_WT_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVolumeInterpolator_GetSmallestBoundingShape_Statics::NewProp_Verts_Inner = { "Verts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVolumeInterpolator_GetSmallestBoundingShape_Statics::NewProp_Verts = { "Verts", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumeInterpolator_eventGetSmallestBoundingShape_Parms, Verts), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumeInterpolator_GetSmallestBoundingShape_Statics::NewProp_OutRadius = { "OutRadius", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumeInterpolator_eventGetSmallestBoundingShape_Parms, OutRadius), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVolumeInterpolator_GetSmallestBoundingShape_Statics::NewProp_BoxIsSmallest_SetBit(void* Obj)
	{
		((VolumeInterpolator_eventGetSmallestBoundingShape_Parms*)Obj)->BoxIsSmallest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVolumeInterpolator_GetSmallestBoundingShape_Statics::NewProp_BoxIsSmallest = { "BoxIsSmallest", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VolumeInterpolator_eventGetSmallestBoundingShape_Parms), &Z_Construct_UFunction_UVolumeInterpolator_GetSmallestBoundingShape_Statics::NewProp_BoxIsSmallest_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVolumeInterpolator_GetSmallestBoundingShape_Statics::NewProp_outNumVertecies = { "outNumVertecies", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumeInterpolator_eventGetSmallestBoundingShape_Parms, outNumVertecies), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumeInterpolator_GetSmallestBoundingShape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_GetSmallestBoundingShape_Statics::NewProp_WT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_GetSmallestBoundingShape_Statics::NewProp_Verts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_GetSmallestBoundingShape_Statics::NewProp_Verts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_GetSmallestBoundingShape_Statics::NewProp_OutRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_GetSmallestBoundingShape_Statics::NewProp_BoxIsSmallest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_GetSmallestBoundingShape_Statics::NewProp_outNumVertecies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVolumeInterpolator_GetSmallestBoundingShape_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VolumeInterpolator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumeInterpolator_GetSmallestBoundingShape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumeInterpolator, nullptr, "GetSmallestBoundingShape", nullptr, nullptr, Z_Construct_UFunction_UVolumeInterpolator_GetSmallestBoundingShape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumeInterpolator_GetSmallestBoundingShape_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVolumeInterpolator_GetSmallestBoundingShape_Statics::VolumeInterpolator_eventGetSmallestBoundingShape_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumeInterpolator_GetSmallestBoundingShape_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVolumeInterpolator_GetSmallestBoundingShape_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumeInterpolator_GetSmallestBoundingShape_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVolumeInterpolator_GetSmallestBoundingShape_Statics::VolumeInterpolator_eventGetSmallestBoundingShape_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVolumeInterpolator_GetSmallestBoundingShape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVolumeInterpolator_GetSmallestBoundingShape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVolumeInterpolator_Init_Statics
	{
		struct VolumeInterpolator_eventInit_Parms
		{
			UStaticMeshComponent* Mesh;
			FTransform WT;
			TArray<FVector> outTransformedVertecies;
			bool ClearArray;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WT_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WT;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outTransformedVertecies_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_outTransformedVertecies;
		static void NewProp_ClearArray_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ClearArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVolumeInterpolator_Init_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVolumeInterpolator_Init_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumeInterpolator_eventInit_Parms, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumeInterpolator_Init_Statics::NewProp_Mesh_MetaData), Z_Construct_UFunction_UVolumeInterpolator_Init_Statics::NewProp_Mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVolumeInterpolator_Init_Statics::NewProp_WT_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVolumeInterpolator_Init_Statics::NewProp_WT = { "WT", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumeInterpolator_eventInit_Parms, WT), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumeInterpolator_Init_Statics::NewProp_WT_MetaData), Z_Construct_UFunction_UVolumeInterpolator_Init_Statics::NewProp_WT_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVolumeInterpolator_Init_Statics::NewProp_outTransformedVertecies_Inner = { "outTransformedVertecies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVolumeInterpolator_Init_Statics::NewProp_outTransformedVertecies = { "outTransformedVertecies", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumeInterpolator_eventInit_Parms, outTransformedVertecies), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVolumeInterpolator_Init_Statics::NewProp_ClearArray_SetBit(void* Obj)
	{
		((VolumeInterpolator_eventInit_Parms*)Obj)->ClearArray = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVolumeInterpolator_Init_Statics::NewProp_ClearArray = { "ClearArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VolumeInterpolator_eventInit_Parms), &Z_Construct_UFunction_UVolumeInterpolator_Init_Statics::NewProp_ClearArray_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumeInterpolator_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_Init_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_Init_Statics::NewProp_WT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_Init_Statics::NewProp_outTransformedVertecies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_Init_Statics::NewProp_outTransformedVertecies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_Init_Statics::NewProp_ClearArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVolumeInterpolator_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "GB Geo" },
		{ "ModuleRelativePath", "Public/VolumeInterpolator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumeInterpolator_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumeInterpolator, nullptr, "Init", nullptr, nullptr, Z_Construct_UFunction_UVolumeInterpolator_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumeInterpolator_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVolumeInterpolator_Init_Statics::VolumeInterpolator_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumeInterpolator_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVolumeInterpolator_Init_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumeInterpolator_Init_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVolumeInterpolator_Init_Statics::VolumeInterpolator_eventInit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVolumeInterpolator_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVolumeInterpolator_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVolumeInterpolator_StartInterpolatePoints_Statics
	{
		struct VolumeInterpolator_eventStartInterpolatePoints_Parms
		{
			bool ConstantDistance;
			float Time;
			FVector Start1;
			FVector End1;
			FVector Start2;
			FVector End2;
		};
		static void NewProp_ConstantDistance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ConstantDistance;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_End1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_End2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVolumeInterpolator_StartInterpolatePoints_Statics::NewProp_ConstantDistance_SetBit(void* Obj)
	{
		((VolumeInterpolator_eventStartInterpolatePoints_Parms*)Obj)->ConstantDistance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVolumeInterpolator_StartInterpolatePoints_Statics::NewProp_ConstantDistance = { "ConstantDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VolumeInterpolator_eventStartInterpolatePoints_Parms), &Z_Construct_UFunction_UVolumeInterpolator_StartInterpolatePoints_Statics::NewProp_ConstantDistance_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumeInterpolator_StartInterpolatePoints_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumeInterpolator_eventStartInterpolatePoints_Parms, Time), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVolumeInterpolator_StartInterpolatePoints_Statics::NewProp_Start1 = { "Start1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumeInterpolator_eventStartInterpolatePoints_Parms, Start1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVolumeInterpolator_StartInterpolatePoints_Statics::NewProp_End1 = { "End1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumeInterpolator_eventStartInterpolatePoints_Parms, End1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVolumeInterpolator_StartInterpolatePoints_Statics::NewProp_Start2 = { "Start2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumeInterpolator_eventStartInterpolatePoints_Parms, Start2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVolumeInterpolator_StartInterpolatePoints_Statics::NewProp_End2 = { "End2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumeInterpolator_eventStartInterpolatePoints_Parms, End2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumeInterpolator_StartInterpolatePoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_StartInterpolatePoints_Statics::NewProp_ConstantDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_StartInterpolatePoints_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_StartInterpolatePoints_Statics::NewProp_Start1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_StartInterpolatePoints_Statics::NewProp_End1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_StartInterpolatePoints_Statics::NewProp_Start2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_StartInterpolatePoints_Statics::NewProp_End2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVolumeInterpolator_StartInterpolatePoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "GB Geo" },
		{ "ModuleRelativePath", "Public/VolumeInterpolator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumeInterpolator_StartInterpolatePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumeInterpolator, nullptr, "StartInterpolatePoints", nullptr, nullptr, Z_Construct_UFunction_UVolumeInterpolator_StartInterpolatePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumeInterpolator_StartInterpolatePoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVolumeInterpolator_StartInterpolatePoints_Statics::VolumeInterpolator_eventStartInterpolatePoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumeInterpolator_StartInterpolatePoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVolumeInterpolator_StartInterpolatePoints_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumeInterpolator_StartInterpolatePoints_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVolumeInterpolator_StartInterpolatePoints_Statics::VolumeInterpolator_eventStartInterpolatePoints_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVolumeInterpolator_StartInterpolatePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVolumeInterpolator_StartInterpolatePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVolumeInterpolator_TickInterpolate_Statics
	{
		struct VolumeInterpolator_eventTickInterpolate_Parms
		{
			float DeltaTime;
			FVector CurrentLoc;
			FVector TrackingPoint;
			FRotator CurrentLookAtRot;
			float outAlpha;
			UCurveFloat* OptionalCustomAlphaCurve;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentLoc;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackingPoint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentLookAtRot;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_outAlpha;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalCustomAlphaCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumeInterpolator_TickInterpolate_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumeInterpolator_eventTickInterpolate_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVolumeInterpolator_TickInterpolate_Statics::NewProp_CurrentLoc = { "CurrentLoc", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumeInterpolator_eventTickInterpolate_Parms, CurrentLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVolumeInterpolator_TickInterpolate_Statics::NewProp_TrackingPoint = { "TrackingPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumeInterpolator_eventTickInterpolate_Parms, TrackingPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVolumeInterpolator_TickInterpolate_Statics::NewProp_CurrentLookAtRot = { "CurrentLookAtRot", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumeInterpolator_eventTickInterpolate_Parms, CurrentLookAtRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumeInterpolator_TickInterpolate_Statics::NewProp_outAlpha = { "outAlpha", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumeInterpolator_eventTickInterpolate_Parms, outAlpha), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVolumeInterpolator_TickInterpolate_Statics::NewProp_OptionalCustomAlphaCurve = { "OptionalCustomAlphaCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumeInterpolator_eventTickInterpolate_Parms, OptionalCustomAlphaCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumeInterpolator_TickInterpolate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_TickInterpolate_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_TickInterpolate_Statics::NewProp_CurrentLoc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_TickInterpolate_Statics::NewProp_TrackingPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_TickInterpolate_Statics::NewProp_CurrentLookAtRot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_TickInterpolate_Statics::NewProp_outAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_TickInterpolate_Statics::NewProp_OptionalCustomAlphaCurve,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVolumeInterpolator_TickInterpolate_Statics::Function_MetaDataParams[] = {
		{ "Category", "GB Geo" },
		{ "ModuleRelativePath", "Public/VolumeInterpolator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumeInterpolator_TickInterpolate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumeInterpolator, nullptr, "TickInterpolate", nullptr, nullptr, Z_Construct_UFunction_UVolumeInterpolator_TickInterpolate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumeInterpolator_TickInterpolate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVolumeInterpolator_TickInterpolate_Statics::VolumeInterpolator_eventTickInterpolate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumeInterpolator_TickInterpolate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVolumeInterpolator_TickInterpolate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumeInterpolator_TickInterpolate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVolumeInterpolator_TickInterpolate_Statics::VolumeInterpolator_eventTickInterpolate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVolumeInterpolator_TickInterpolate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVolumeInterpolator_TickInterpolate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVolumeInterpolator_TransformVector_Statics
	{
		struct VolumeInterpolator_eventTransformVector_Parms
		{
			FVector V;
			FTransform T;
			bool Cache;
			int32 VertexIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_V;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_T_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_T;
		static void NewProp_Cache_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Cache;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VertexIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVolumeInterpolator_TransformVector_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumeInterpolator_eventTransformVector_Parms, V), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVolumeInterpolator_TransformVector_Statics::NewProp_T_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVolumeInterpolator_TransformVector_Statics::NewProp_T = { "T", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumeInterpolator_eventTransformVector_Parms, T), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumeInterpolator_TransformVector_Statics::NewProp_T_MetaData), Z_Construct_UFunction_UVolumeInterpolator_TransformVector_Statics::NewProp_T_MetaData) };
	void Z_Construct_UFunction_UVolumeInterpolator_TransformVector_Statics::NewProp_Cache_SetBit(void* Obj)
	{
		((VolumeInterpolator_eventTransformVector_Parms*)Obj)->Cache = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVolumeInterpolator_TransformVector_Statics::NewProp_Cache = { "Cache", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VolumeInterpolator_eventTransformVector_Parms), &Z_Construct_UFunction_UVolumeInterpolator_TransformVector_Statics::NewProp_Cache_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVolumeInterpolator_TransformVector_Statics::NewProp_VertexIndex = { "VertexIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumeInterpolator_eventTransformVector_Parms, VertexIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumeInterpolator_TransformVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_TransformVector_Statics::NewProp_V,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_TransformVector_Statics::NewProp_T,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_TransformVector_Statics::NewProp_Cache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumeInterpolator_TransformVector_Statics::NewProp_VertexIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVolumeInterpolator_TransformVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VolumeInterpolator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumeInterpolator_TransformVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumeInterpolator, nullptr, "TransformVector", nullptr, nullptr, Z_Construct_UFunction_UVolumeInterpolator_TransformVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumeInterpolator_TransformVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVolumeInterpolator_TransformVector_Statics::VolumeInterpolator_eventTransformVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumeInterpolator_TransformVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVolumeInterpolator_TransformVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumeInterpolator_TransformVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVolumeInterpolator_TransformVector_Statics::VolumeInterpolator_eventTransformVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVolumeInterpolator_TransformVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVolumeInterpolator_TransformVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVolumeInterpolator);
	UClass* Z_Construct_UClass_UVolumeInterpolator_NoRegister()
	{
		return UVolumeInterpolator::StaticClass();
	}
	struct Z_Construct_UClass_UVolumeInterpolator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookatRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookatRotation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SrcVolumes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SrcVolumes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SrcVolumes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackVolumes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackVolumes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackVolumes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoInterp_MetaData[];
#endif
		static void NewProp_DoInterp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoInterp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SavedOrientedBoxes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedOrientedBoxes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedOrientedBoxes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpCompletedEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_InterpCompletedEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVolumeInterpolator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GB_GeometryFunctions,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeInterpolator_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVolumeInterpolator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVolumeInterpolator_GetOBoxCorners, "GetOBoxCorners" }, // 952565457
		{ &Z_Construct_UFunction_UVolumeInterpolator_GetRandomPointsInMeshBounds, "GetRandomPointsInMeshBounds" }, // 2064129698
		{ &Z_Construct_UFunction_UVolumeInterpolator_GetSmallestBoundingShape, "GetSmallestBoundingShape" }, // 282029664
		{ &Z_Construct_UFunction_UVolumeInterpolator_Init, "Init" }, // 1746909505
		{ &Z_Construct_UFunction_UVolumeInterpolator_StartInterpolatePoints, "StartInterpolatePoints" }, // 1295062304
		{ &Z_Construct_UFunction_UVolumeInterpolator_TickInterpolate, "TickInterpolate" }, // 2907219883
		{ &Z_Construct_UFunction_UVolumeInterpolator_TransformVector, "TransformVector" }, // 1337186708
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeInterpolator_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeInterpolator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "VolumeInterpolator.h" },
		{ "ModuleRelativePath", "Public/VolumeInterpolator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_LookatRotation_MetaData[] = {
		{ "Category", "GB Geo" },
		{ "ModuleRelativePath", "Public/VolumeInterpolator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_LookatRotation = { "LookatRotation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumeInterpolator, LookatRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_LookatRotation_MetaData), Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_LookatRotation_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_SrcVolumes_Inner = { "SrcVolumes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ALocationVolume_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_SrcVolumes_MetaData[] = {
		{ "Category", "GB Geo" },
		{ "ModuleRelativePath", "Public/VolumeInterpolator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_SrcVolumes = { "SrcVolumes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumeInterpolator, SrcVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_SrcVolumes_MetaData), Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_SrcVolumes_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_TrackVolumes_Inner = { "TrackVolumes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ALocationVolume_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_TrackVolumes_MetaData[] = {
		{ "Category", "GB Geo" },
		{ "ModuleRelativePath", "Public/VolumeInterpolator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_TrackVolumes = { "TrackVolumes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumeInterpolator, TrackVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_TrackVolumes_MetaData), Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_TrackVolumes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_DoInterp_MetaData[] = {
		{ "Category", "GB Geo" },
		{ "ModuleRelativePath", "Public/VolumeInterpolator.h" },
	};
#endif
	void Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_DoInterp_SetBit(void* Obj)
	{
		((UVolumeInterpolator*)Obj)->DoInterp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_DoInterp = { "DoInterp", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVolumeInterpolator), &Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_DoInterp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_DoInterp_MetaData), Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_DoInterp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_SavedOrientedBoxes_Inner = { "SavedOrientedBoxes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOrientedBox, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_SavedOrientedBoxes_MetaData[] = {
		{ "ModuleRelativePath", "Public/VolumeInterpolator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_SavedOrientedBoxes = { "SavedOrientedBoxes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumeInterpolator, SavedOrientedBoxes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_SavedOrientedBoxes_MetaData), Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_SavedOrientedBoxes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_InterpCompletedEvent_MetaData[] = {
		{ "Category", "GB Geo" },
		{ "ModuleRelativePath", "Public/VolumeInterpolator.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_InterpCompletedEvent = { "InterpCompletedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumeInterpolator, InterpCompletedEvent), Z_Construct_UDelegateFunction_GB_GeometryFunctions_InterpCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_InterpCompletedEvent_MetaData), Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_InterpCompletedEvent_MetaData) }; // 2225624544
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVolumeInterpolator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_LookatRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_SrcVolumes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_SrcVolumes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_TrackVolumes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_TrackVolumes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_DoInterp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_SavedOrientedBoxes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_SavedOrientedBoxes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeInterpolator_Statics::NewProp_InterpCompletedEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVolumeInterpolator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVolumeInterpolator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVolumeInterpolator_Statics::ClassParams = {
		&UVolumeInterpolator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVolumeInterpolator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeInterpolator_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeInterpolator_Statics::Class_MetaDataParams), Z_Construct_UClass_UVolumeInterpolator_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeInterpolator_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVolumeInterpolator()
	{
		if (!Z_Registration_Info_UClass_UVolumeInterpolator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVolumeInterpolator.OuterSingleton, Z_Construct_UClass_UVolumeInterpolator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVolumeInterpolator.OuterSingleton;
	}
	template<> GB_GEOMETRYFUNCTIONS_API UClass* StaticClass<UVolumeInterpolator>()
	{
		return UVolumeInterpolator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVolumeInterpolator);
	UVolumeInterpolator::~UVolumeInterpolator() {}
	struct Z_CompiledInDeferFile_FID_Users_gustav_baath_intern_realtime_automotive_configurator_Plugins_GB_GeometryFunctions_Source_GB_GeometryFunctions_Public_VolumeInterpolator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gustav_baath_intern_realtime_automotive_configurator_Plugins_GB_GeometryFunctions_Source_GB_GeometryFunctions_Public_VolumeInterpolator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVolumeInterpolator, UVolumeInterpolator::StaticClass, TEXT("UVolumeInterpolator"), &Z_Registration_Info_UClass_UVolumeInterpolator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVolumeInterpolator), 3568746212U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gustav_baath_intern_realtime_automotive_configurator_Plugins_GB_GeometryFunctions_Source_GB_GeometryFunctions_Public_VolumeInterpolator_h_3369561723(TEXT("/Script/GB_GeometryFunctions"),
		Z_CompiledInDeferFile_FID_Users_gustav_baath_intern_realtime_automotive_configurator_Plugins_GB_GeometryFunctions_Source_GB_GeometryFunctions_Public_VolumeInterpolator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_gustav_baath_intern_realtime_automotive_configurator_Plugins_GB_GeometryFunctions_Source_GB_GeometryFunctions_Public_VolumeInterpolator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
