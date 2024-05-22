// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonVectorFunctions/Public/CommonVectorFunctionsBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonVectorFunctionsBPLibrary() {}
// Cross Module References
	COMMONVECTORFUNCTIONS_API UClass* Z_Construct_UClass_UCommonVectorFunctionsBPLibrary();
	COMMONVECTORFUNCTIONS_API UClass* Z_Construct_UClass_UCommonVectorFunctionsBPLibrary_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CommonVectorFunctions();
// End Cross Module References
	DEFINE_FUNCTION(UCommonVectorFunctionsBPLibrary::execTransformVector)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_V);
		P_GET_STRUCT(FTransform,Z_Param_T);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCommonVectorFunctionsBPLibrary::TransformVector(Z_Param_Out_V,Z_Param_T);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonVectorFunctionsBPLibrary::execGetDistanceAlphaFromBoxEdge)
	{
		P_GET_STRUCT(FVector,Z_Param_Point);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_STRUCT(FVector,Z_Param_Extent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InnerOuterEdgeDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UCommonVectorFunctionsBPLibrary::GetDistanceAlphaFromBoxEdge(Z_Param_Point,Z_Param_Center,Z_Param_Extent,Z_Param_InnerOuterEdgeDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonVectorFunctionsBPLibrary::execClampVectorInDirection)
	{
		P_GET_STRUCT(FVector,Z_Param_Input);
		P_GET_STRUCT(FVector,Z_Param_Scaler);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UCommonVectorFunctionsBPLibrary::ClampVectorInDirection(Z_Param_Input,Z_Param_Scaler);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonVectorFunctionsBPLibrary::execRSphericalInterp)
	{
		P_GET_STRUCT(FRotator,Z_Param_Current);
		P_GET_STRUCT(FRotator,Z_Param_Target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UCommonVectorFunctionsBPLibrary::RSphericalInterp(Z_Param_Current,Z_Param_Target,Z_Param_DeltaTime,Z_Param_Speed,Z_Param_Out_Alpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonVectorFunctionsBPLibrary::execClampVectorMax)
	{
		P_GET_STRUCT(FVector,Z_Param_VectorToClamp);
		P_GET_STRUCT(FVector,Z_Param_MaxValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UCommonVectorFunctionsBPLibrary::ClampVectorMax(Z_Param_VectorToClamp,Z_Param_MaxValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonVectorFunctionsBPLibrary::execClampVectorMin)
	{
		P_GET_STRUCT(FVector,Z_Param_VectorToClamp);
		P_GET_STRUCT(FVector,Z_Param_MinValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UCommonVectorFunctionsBPLibrary::ClampVectorMin(Z_Param_VectorToClamp,Z_Param_MinValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonVectorFunctionsBPLibrary::execFastClampVectorAxes)
	{
		P_GET_STRUCT(FVector,Z_Param_VectorToClamp);
		P_GET_STRUCT(FVector,Z_Param_MaxVector);
		P_GET_STRUCT(FVector,Z_Param_MinVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UCommonVectorFunctionsBPLibrary::FastClampVectorAxes(Z_Param_VectorToClamp,Z_Param_MaxVector,Z_Param_MinVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonVectorFunctionsBPLibrary::execQuickSubtractRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_STRUCT(FVector,Z_Param_Sub);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UCommonVectorFunctionsBPLibrary::QuickSubtractRotation(Z_Param_Rotation,Z_Param_Sub);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonVectorFunctionsBPLibrary::execQuickAddRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_STRUCT(FVector,Z_Param_Add);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UCommonVectorFunctionsBPLibrary::QuickAddRotation(Z_Param_Rotation,Z_Param_Add);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonVectorFunctionsBPLibrary::execRot2Vec)
	{
		P_GET_STRUCT(FRotator,Z_Param_Rotator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UCommonVectorFunctionsBPLibrary::Rot2Vec(Z_Param_Rotator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonVectorFunctionsBPLibrary::execNormalizeRotator)
	{
		P_GET_STRUCT(FRotator,Z_Param_Rotator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UCommonVectorFunctionsBPLibrary::NormalizeRotator(Z_Param_Rotator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonVectorFunctionsBPLibrary::execLocationFromDistanceAndRotation)
	{
		P_GET_STRUCT(FVector,Z_Param_ReferencePoint);
		P_GET_STRUCT(FRotator,Z_Param_EulerAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UCommonVectorFunctionsBPLibrary::LocationFromDistanceAndRotation(Z_Param_ReferencePoint,Z_Param_EulerAngle,Z_Param_Distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonVectorFunctionsBPLibrary::execClampToEllipsoid)
	{
		P_GET_STRUCT(FVector,Z_Param_InV);
		P_GET_STRUCT(FVector,Z_Param_ReferenceV);
		P_GET_PROPERTY(FFloatProperty,Z_Param_wr);
		P_GET_PROPERTY(FFloatProperty,Z_Param_hr);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_outDebugRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UCommonVectorFunctionsBPLibrary::ClampToEllipsoid(Z_Param_InV,Z_Param_ReferenceV,Z_Param_wr,Z_Param_hr,Z_Param_Out_outDebugRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonVectorFunctionsBPLibrary::execSmoothClampRotationPerAxis)
	{
		P_GET_STRUCT(FRotator,Z_Param_InRotation);
		P_GET_STRUCT(FRotator,Z_Param_ReferenceRotation);
		P_GET_STRUCT(FRotator,Z_Param_MinAngles);
		P_GET_STRUCT(FRotator,Z_Param_MaxAngles);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AngleThreshHold);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutClampStrength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ClampStrengthMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UCommonVectorFunctionsBPLibrary::SmoothClampRotationPerAxis(Z_Param_InRotation,Z_Param_ReferenceRotation,Z_Param_MinAngles,Z_Param_MaxAngles,Z_Param_AngleThreshHold,Z_Param_DeltaTime,Z_Param_Out_OutClampStrength,Z_Param_ClampStrengthMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonVectorFunctionsBPLibrary::execSmoothClampRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_InRotation);
		P_GET_STRUCT(FRotator,Z_Param_ReferenceRotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Alpha);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutClampStrength);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_DirClampVector);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InnerRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OuterRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ClampStrengthMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UCommonVectorFunctionsBPLibrary::SmoothClampRotation(Z_Param_InRotation,Z_Param_ReferenceRotation,Z_Param_DeltaTime,Z_Param_Out_Alpha,Z_Param_Out_OutClampStrength,Z_Param_Out_DirClampVector,Z_Param_InnerRadius,Z_Param_OuterRadius,Z_Param_ClampStrengthMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonVectorFunctionsBPLibrary::execClampRotationWithRadius)
	{
		P_GET_STRUCT(FRotator,Z_Param_InRotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UCommonVectorFunctionsBPLibrary::ClampRotationWithRadius(Z_Param_InRotation,Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonVectorFunctionsBPLibrary::execClampRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_InRotation);
		P_GET_STRUCT(FRotator,Z_Param_ReferenceRotation);
		P_GET_STRUCT(FRotator,Z_Param_MinAxisValues);
		P_GET_STRUCT(FRotator,Z_Param_MaxAxisValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UCommonVectorFunctionsBPLibrary::ClampRotation(Z_Param_InRotation,Z_Param_ReferenceRotation,Z_Param_MinAxisValues,Z_Param_MaxAxisValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonVectorFunctionsBPLibrary::execInterpolateActor)
	{
		P_GET_OBJECT_REF(AActor,Z_Param_Out_Actor);
		P_GET_STRUCT(FVector,Z_Param_TargetLocation);
		P_GET_STRUCT(FRotator,Z_Param_TargetRotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InterpSpeed);
		P_GET_UBOOL_REF(Z_Param_Out_isCompleted);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCommonVectorFunctionsBPLibrary::InterpolateActor(Z_Param_Out_Actor,Z_Param_TargetLocation,Z_Param_TargetRotation,Z_Param_DeltaTime,Z_Param_InterpSpeed,Z_Param_Out_isCompleted);
		P_NATIVE_END;
	}
	void UCommonVectorFunctionsBPLibrary::StaticRegisterNativesUCommonVectorFunctionsBPLibrary()
	{
		UClass* Class = UCommonVectorFunctionsBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClampRotation", &UCommonVectorFunctionsBPLibrary::execClampRotation },
			{ "ClampRotationWithRadius", &UCommonVectorFunctionsBPLibrary::execClampRotationWithRadius },
			{ "ClampToEllipsoid", &UCommonVectorFunctionsBPLibrary::execClampToEllipsoid },
			{ "ClampVectorInDirection", &UCommonVectorFunctionsBPLibrary::execClampVectorInDirection },
			{ "ClampVectorMax", &UCommonVectorFunctionsBPLibrary::execClampVectorMax },
			{ "ClampVectorMin", &UCommonVectorFunctionsBPLibrary::execClampVectorMin },
			{ "FastClampVectorAxes", &UCommonVectorFunctionsBPLibrary::execFastClampVectorAxes },
			{ "GetDistanceAlphaFromBoxEdge", &UCommonVectorFunctionsBPLibrary::execGetDistanceAlphaFromBoxEdge },
			{ "InterpolateActor", &UCommonVectorFunctionsBPLibrary::execInterpolateActor },
			{ "LocationFromDistanceAndRotation", &UCommonVectorFunctionsBPLibrary::execLocationFromDistanceAndRotation },
			{ "NormalizeRotator", &UCommonVectorFunctionsBPLibrary::execNormalizeRotator },
			{ "QuickAddRotation", &UCommonVectorFunctionsBPLibrary::execQuickAddRotation },
			{ "QuickSubtractRotation", &UCommonVectorFunctionsBPLibrary::execQuickSubtractRotation },
			{ "Rot2Vec", &UCommonVectorFunctionsBPLibrary::execRot2Vec },
			{ "RSphericalInterp", &UCommonVectorFunctionsBPLibrary::execRSphericalInterp },
			{ "SmoothClampRotation", &UCommonVectorFunctionsBPLibrary::execSmoothClampRotation },
			{ "SmoothClampRotationPerAxis", &UCommonVectorFunctionsBPLibrary::execSmoothClampRotationPerAxis },
			{ "TransformVector", &UCommonVectorFunctionsBPLibrary::execTransformVector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotation_Statics
	{
		struct CommonVectorFunctionsBPLibrary_eventClampRotation_Parms
		{
			FRotator InRotation;
			FRotator ReferenceRotation;
			FRotator MinAxisValues;
			FRotator MaxAxisValues;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceRotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinAxisValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxAxisValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotation_Statics::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventClampRotation_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotation_Statics::NewProp_ReferenceRotation = { "ReferenceRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventClampRotation_Parms, ReferenceRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotation_Statics::NewProp_MinAxisValues = { "MinAxisValues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventClampRotation_Parms, MinAxisValues), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotation_Statics::NewProp_MaxAxisValues = { "MaxAxisValues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventClampRotation_Parms, MaxAxisValues), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventClampRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotation_Statics::NewProp_InRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotation_Statics::NewProp_ReferenceRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotation_Statics::NewProp_MinAxisValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotation_Statics::NewProp_MaxAxisValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "VectorFunctions" },
		{ "ModuleRelativePath", "Public/CommonVectorFunctionsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonVectorFunctionsBPLibrary, nullptr, "ClampRotation", nullptr, nullptr, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotation_Statics::CommonVectorFunctionsBPLibrary_eventClampRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotation_Statics::CommonVectorFunctionsBPLibrary_eventClampRotation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotationWithRadius_Statics
	{
		struct CommonVectorFunctionsBPLibrary_eventClampRotationWithRadius_Parms
		{
			FRotator InRotation;
			float Radius;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRotation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotationWithRadius_Statics::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventClampRotationWithRadius_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotationWithRadius_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventClampRotationWithRadius_Parms, Radius), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotationWithRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventClampRotationWithRadius_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotationWithRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotationWithRadius_Statics::NewProp_InRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotationWithRadius_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotationWithRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotationWithRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "VectorFunctions" },
		{ "ModuleRelativePath", "Public/CommonVectorFunctionsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotationWithRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonVectorFunctionsBPLibrary, nullptr, "ClampRotationWithRadius", nullptr, nullptr, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotationWithRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotationWithRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotationWithRadius_Statics::CommonVectorFunctionsBPLibrary_eventClampRotationWithRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotationWithRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotationWithRadius_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotationWithRadius_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotationWithRadius_Statics::CommonVectorFunctionsBPLibrary_eventClampRotationWithRadius_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotationWithRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotationWithRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampToEllipsoid_Statics
	{
		struct CommonVectorFunctionsBPLibrary_eventClampToEllipsoid_Parms
		{
			FVector InV;
			FVector ReferenceV;
			float wr;
			float hr;
			float outDebugRadius;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InV;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceV;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wr;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_hr;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_outDebugRadius;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampToEllipsoid_Statics::NewProp_InV = { "InV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventClampToEllipsoid_Parms, InV), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampToEllipsoid_Statics::NewProp_ReferenceV = { "ReferenceV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventClampToEllipsoid_Parms, ReferenceV), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampToEllipsoid_Statics::NewProp_wr = { "wr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventClampToEllipsoid_Parms, wr), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampToEllipsoid_Statics::NewProp_hr = { "hr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventClampToEllipsoid_Parms, hr), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampToEllipsoid_Statics::NewProp_outDebugRadius = { "outDebugRadius", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventClampToEllipsoid_Parms, outDebugRadius), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampToEllipsoid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventClampToEllipsoid_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampToEllipsoid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampToEllipsoid_Statics::NewProp_InV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampToEllipsoid_Statics::NewProp_ReferenceV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampToEllipsoid_Statics::NewProp_wr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampToEllipsoid_Statics::NewProp_hr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampToEllipsoid_Statics::NewProp_outDebugRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampToEllipsoid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampToEllipsoid_Statics::Function_MetaDataParams[] = {
		{ "Category", "VectorFunctions" },
		{ "ModuleRelativePath", "Public/CommonVectorFunctionsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampToEllipsoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonVectorFunctionsBPLibrary, nullptr, "ClampToEllipsoid", nullptr, nullptr, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampToEllipsoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampToEllipsoid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampToEllipsoid_Statics::CommonVectorFunctionsBPLibrary_eventClampToEllipsoid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampToEllipsoid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampToEllipsoid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampToEllipsoid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampToEllipsoid_Statics::CommonVectorFunctionsBPLibrary_eventClampToEllipsoid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampToEllipsoid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampToEllipsoid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorInDirection_Statics
	{
		struct CommonVectorFunctionsBPLibrary_eventClampVectorInDirection_Parms
		{
			FVector Input;
			FVector Scaler;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scaler;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorInDirection_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventClampVectorInDirection_Parms, Input), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorInDirection_Statics::NewProp_Scaler = { "Scaler", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventClampVectorInDirection_Parms, Scaler), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorInDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventClampVectorInDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorInDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorInDirection_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorInDirection_Statics::NewProp_Scaler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorInDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorInDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "VectorFunctions" },
		{ "ModuleRelativePath", "Public/CommonVectorFunctionsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorInDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonVectorFunctionsBPLibrary, nullptr, "ClampVectorInDirection", nullptr, nullptr, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorInDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorInDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorInDirection_Statics::CommonVectorFunctionsBPLibrary_eventClampVectorInDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorInDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorInDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorInDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorInDirection_Statics::CommonVectorFunctionsBPLibrary_eventClampVectorInDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorInDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorInDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMax_Statics
	{
		struct CommonVectorFunctionsBPLibrary_eventClampVectorMax_Parms
		{
			FVector VectorToClamp;
			FVector MaxValues;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorToClamp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMax_Statics::NewProp_VectorToClamp = { "VectorToClamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventClampVectorMax_Parms, VectorToClamp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMax_Statics::NewProp_MaxValues = { "MaxValues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventClampVectorMax_Parms, MaxValues), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMax_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventClampVectorMax_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMax_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMax_Statics::NewProp_VectorToClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMax_Statics::NewProp_MaxValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMax_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMax_Statics::Function_MetaDataParams[] = {
		{ "Category", "VectorFunctions" },
		{ "CompactNodeTitle", "VMax" },
		{ "ModuleRelativePath", "Public/CommonVectorFunctionsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonVectorFunctionsBPLibrary, nullptr, "ClampVectorMax", nullptr, nullptr, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMax_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMax_Statics::CommonVectorFunctionsBPLibrary_eventClampVectorMax_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMax_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMax_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMax_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMax_Statics::CommonVectorFunctionsBPLibrary_eventClampVectorMax_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMin_Statics
	{
		struct CommonVectorFunctionsBPLibrary_eventClampVectorMin_Parms
		{
			FVector VectorToClamp;
			FVector MinValues;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorToClamp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMin_Statics::NewProp_VectorToClamp = { "VectorToClamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventClampVectorMin_Parms, VectorToClamp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMin_Statics::NewProp_MinValues = { "MinValues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventClampVectorMin_Parms, MinValues), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventClampVectorMin_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMin_Statics::NewProp_VectorToClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMin_Statics::NewProp_MinValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMin_Statics::Function_MetaDataParams[] = {
		{ "Category", "VectorFunctions" },
		{ "CompactNodeTitle", "VMin" },
		{ "ModuleRelativePath", "Public/CommonVectorFunctionsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonVectorFunctionsBPLibrary, nullptr, "ClampVectorMin", nullptr, nullptr, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMin_Statics::CommonVectorFunctionsBPLibrary_eventClampVectorMin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMin_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMin_Statics::CommonVectorFunctionsBPLibrary_eventClampVectorMin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_FastClampVectorAxes_Statics
	{
		struct CommonVectorFunctionsBPLibrary_eventFastClampVectorAxes_Parms
		{
			FVector VectorToClamp;
			FVector MaxVector;
			FVector MinVector;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorToClamp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxVector;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinVector;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_FastClampVectorAxes_Statics::NewProp_VectorToClamp = { "VectorToClamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventFastClampVectorAxes_Parms, VectorToClamp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_FastClampVectorAxes_Statics::NewProp_MaxVector = { "MaxVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventFastClampVectorAxes_Parms, MaxVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_FastClampVectorAxes_Statics::NewProp_MinVector = { "MinVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventFastClampVectorAxes_Parms, MinVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_FastClampVectorAxes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventFastClampVectorAxes_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_FastClampVectorAxes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_FastClampVectorAxes_Statics::NewProp_VectorToClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_FastClampVectorAxes_Statics::NewProp_MaxVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_FastClampVectorAxes_Statics::NewProp_MinVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_FastClampVectorAxes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_FastClampVectorAxes_Statics::Function_MetaDataParams[] = {
		{ "Category", "VectorFunctions" },
		{ "ModuleRelativePath", "Public/CommonVectorFunctionsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_FastClampVectorAxes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonVectorFunctionsBPLibrary, nullptr, "FastClampVectorAxes", nullptr, nullptr, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_FastClampVectorAxes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_FastClampVectorAxes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_FastClampVectorAxes_Statics::CommonVectorFunctionsBPLibrary_eventFastClampVectorAxes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_FastClampVectorAxes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_FastClampVectorAxes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_FastClampVectorAxes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_FastClampVectorAxes_Statics::CommonVectorFunctionsBPLibrary_eventFastClampVectorAxes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_FastClampVectorAxes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_FastClampVectorAxes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_GetDistanceAlphaFromBoxEdge_Statics
	{
		struct CommonVectorFunctionsBPLibrary_eventGetDistanceAlphaFromBoxEdge_Parms
		{
			FVector Point;
			FVector Center;
			FVector Extent;
			float InnerOuterEdgeDistance;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerOuterEdgeDistance;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_GetDistanceAlphaFromBoxEdge_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventGetDistanceAlphaFromBoxEdge_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_GetDistanceAlphaFromBoxEdge_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventGetDistanceAlphaFromBoxEdge_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_GetDistanceAlphaFromBoxEdge_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventGetDistanceAlphaFromBoxEdge_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_GetDistanceAlphaFromBoxEdge_Statics::NewProp_InnerOuterEdgeDistance = { "InnerOuterEdgeDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventGetDistanceAlphaFromBoxEdge_Parms, InnerOuterEdgeDistance), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_GetDistanceAlphaFromBoxEdge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventGetDistanceAlphaFromBoxEdge_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_GetDistanceAlphaFromBoxEdge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_GetDistanceAlphaFromBoxEdge_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_GetDistanceAlphaFromBoxEdge_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_GetDistanceAlphaFromBoxEdge_Statics::NewProp_Extent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_GetDistanceAlphaFromBoxEdge_Statics::NewProp_InnerOuterEdgeDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_GetDistanceAlphaFromBoxEdge_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_GetDistanceAlphaFromBoxEdge_Statics::Function_MetaDataParams[] = {
		{ "Category", "VectorFunctions" },
		{ "ModuleRelativePath", "Public/CommonVectorFunctionsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_GetDistanceAlphaFromBoxEdge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonVectorFunctionsBPLibrary, nullptr, "GetDistanceAlphaFromBoxEdge", nullptr, nullptr, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_GetDistanceAlphaFromBoxEdge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_GetDistanceAlphaFromBoxEdge_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_GetDistanceAlphaFromBoxEdge_Statics::CommonVectorFunctionsBPLibrary_eventGetDistanceAlphaFromBoxEdge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_GetDistanceAlphaFromBoxEdge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_GetDistanceAlphaFromBoxEdge_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_GetDistanceAlphaFromBoxEdge_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_GetDistanceAlphaFromBoxEdge_Statics::CommonVectorFunctionsBPLibrary_eventGetDistanceAlphaFromBoxEdge_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_GetDistanceAlphaFromBoxEdge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_GetDistanceAlphaFromBoxEdge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_InterpolateActor_Statics
	{
		struct CommonVectorFunctionsBPLibrary_eventInterpolateActor_Parms
		{
			AActor* Actor;
			FVector TargetLocation;
			FRotator TargetRotation;
			float DeltaTime;
			float InterpSpeed;
			bool isCompleted;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
		static void NewProp_isCompleted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isCompleted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_InterpolateActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventInterpolateActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_InterpolateActor_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventInterpolateActor_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_InterpolateActor_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventInterpolateActor_Parms, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_InterpolateActor_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventInterpolateActor_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_InterpolateActor_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventInterpolateActor_Parms, InterpSpeed), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_InterpolateActor_Statics::NewProp_isCompleted_SetBit(void* Obj)
	{
		((CommonVectorFunctionsBPLibrary_eventInterpolateActor_Parms*)Obj)->isCompleted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_InterpolateActor_Statics::NewProp_isCompleted = { "isCompleted", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CommonVectorFunctionsBPLibrary_eventInterpolateActor_Parms), &Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_InterpolateActor_Statics::NewProp_isCompleted_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_InterpolateActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_InterpolateActor_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_InterpolateActor_Statics::NewProp_TargetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_InterpolateActor_Statics::NewProp_TargetRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_InterpolateActor_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_InterpolateActor_Statics::NewProp_InterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_InterpolateActor_Statics::NewProp_isCompleted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_InterpolateActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "VectorFunctions" },
		{ "ModuleRelativePath", "Public/CommonVectorFunctionsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_InterpolateActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonVectorFunctionsBPLibrary, nullptr, "InterpolateActor", nullptr, nullptr, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_InterpolateActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_InterpolateActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_InterpolateActor_Statics::CommonVectorFunctionsBPLibrary_eventInterpolateActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_InterpolateActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_InterpolateActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_InterpolateActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_InterpolateActor_Statics::CommonVectorFunctionsBPLibrary_eventInterpolateActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_InterpolateActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_InterpolateActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_LocationFromDistanceAndRotation_Statics
	{
		struct CommonVectorFunctionsBPLibrary_eventLocationFromDistanceAndRotation_Parms
		{
			FVector ReferencePoint;
			FRotator EulerAngle;
			float Distance;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencePoint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EulerAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_LocationFromDistanceAndRotation_Statics::NewProp_ReferencePoint = { "ReferencePoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventLocationFromDistanceAndRotation_Parms, ReferencePoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_LocationFromDistanceAndRotation_Statics::NewProp_EulerAngle = { "EulerAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventLocationFromDistanceAndRotation_Parms, EulerAngle), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_LocationFromDistanceAndRotation_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventLocationFromDistanceAndRotation_Parms, Distance), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_LocationFromDistanceAndRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventLocationFromDistanceAndRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_LocationFromDistanceAndRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_LocationFromDistanceAndRotation_Statics::NewProp_ReferencePoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_LocationFromDistanceAndRotation_Statics::NewProp_EulerAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_LocationFromDistanceAndRotation_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_LocationFromDistanceAndRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_LocationFromDistanceAndRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "VectorFunctions" },
		{ "ModuleRelativePath", "Public/CommonVectorFunctionsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_LocationFromDistanceAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonVectorFunctionsBPLibrary, nullptr, "LocationFromDistanceAndRotation", nullptr, nullptr, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_LocationFromDistanceAndRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_LocationFromDistanceAndRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_LocationFromDistanceAndRotation_Statics::CommonVectorFunctionsBPLibrary_eventLocationFromDistanceAndRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_LocationFromDistanceAndRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_LocationFromDistanceAndRotation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_LocationFromDistanceAndRotation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_LocationFromDistanceAndRotation_Statics::CommonVectorFunctionsBPLibrary_eventLocationFromDistanceAndRotation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_LocationFromDistanceAndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_LocationFromDistanceAndRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_NormalizeRotator_Statics
	{
		struct CommonVectorFunctionsBPLibrary_eventNormalizeRotator_Parms
		{
			FRotator Rotator;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotator;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_NormalizeRotator_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventNormalizeRotator_Parms, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_NormalizeRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventNormalizeRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_NormalizeRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_NormalizeRotator_Statics::NewProp_Rotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_NormalizeRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_NormalizeRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "VectorFunctions" },
		{ "CompactNodeTitle", "norm" },
		{ "ModuleRelativePath", "Public/CommonVectorFunctionsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_NormalizeRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonVectorFunctionsBPLibrary, nullptr, "NormalizeRotator", nullptr, nullptr, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_NormalizeRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_NormalizeRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_NormalizeRotator_Statics::CommonVectorFunctionsBPLibrary_eventNormalizeRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_NormalizeRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_NormalizeRotator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_NormalizeRotator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_NormalizeRotator_Statics::CommonVectorFunctionsBPLibrary_eventNormalizeRotator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_NormalizeRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_NormalizeRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickAddRotation_Statics
	{
		struct CommonVectorFunctionsBPLibrary_eventQuickAddRotation_Parms
		{
			FRotator Rotation;
			FVector Add;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Add;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickAddRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventQuickAddRotation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickAddRotation_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventQuickAddRotation_Parms, Add), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickAddRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventQuickAddRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickAddRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickAddRotation_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickAddRotation_Statics::NewProp_Add,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickAddRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickAddRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "VectorFunctions" },
		{ "CompactNodeTitle", "r+" },
		{ "ModuleRelativePath", "Public/CommonVectorFunctionsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickAddRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonVectorFunctionsBPLibrary, nullptr, "QuickAddRotation", nullptr, nullptr, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickAddRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickAddRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickAddRotation_Statics::CommonVectorFunctionsBPLibrary_eventQuickAddRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickAddRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickAddRotation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickAddRotation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickAddRotation_Statics::CommonVectorFunctionsBPLibrary_eventQuickAddRotation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickAddRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickAddRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickSubtractRotation_Statics
	{
		struct CommonVectorFunctionsBPLibrary_eventQuickSubtractRotation_Parms
		{
			FRotator Rotation;
			FVector Sub;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sub;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickSubtractRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventQuickSubtractRotation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickSubtractRotation_Statics::NewProp_Sub = { "Sub", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventQuickSubtractRotation_Parms, Sub), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickSubtractRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventQuickSubtractRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickSubtractRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickSubtractRotation_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickSubtractRotation_Statics::NewProp_Sub,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickSubtractRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickSubtractRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "VectorFunctions" },
		{ "CompactNodeTitle", "r-" },
		{ "ModuleRelativePath", "Public/CommonVectorFunctionsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickSubtractRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonVectorFunctionsBPLibrary, nullptr, "QuickSubtractRotation", nullptr, nullptr, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickSubtractRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickSubtractRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickSubtractRotation_Statics::CommonVectorFunctionsBPLibrary_eventQuickSubtractRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickSubtractRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickSubtractRotation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickSubtractRotation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickSubtractRotation_Statics::CommonVectorFunctionsBPLibrary_eventQuickSubtractRotation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickSubtractRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickSubtractRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_Rot2Vec_Statics
	{
		struct CommonVectorFunctionsBPLibrary_eventRot2Vec_Parms
		{
			FRotator Rotator;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotator;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_Rot2Vec_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventRot2Vec_Parms, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_Rot2Vec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventRot2Vec_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_Rot2Vec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_Rot2Vec_Statics::NewProp_Rotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_Rot2Vec_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_Rot2Vec_Statics::Function_MetaDataParams[] = {
		{ "Category", "VectorFunctions" },
		{ "CompactNodeTitle", "R->V" },
		{ "ModuleRelativePath", "Public/CommonVectorFunctionsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_Rot2Vec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonVectorFunctionsBPLibrary, nullptr, "Rot2Vec", nullptr, nullptr, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_Rot2Vec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_Rot2Vec_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_Rot2Vec_Statics::CommonVectorFunctionsBPLibrary_eventRot2Vec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_Rot2Vec_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_Rot2Vec_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_Rot2Vec_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_Rot2Vec_Statics::CommonVectorFunctionsBPLibrary_eventRot2Vec_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_Rot2Vec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_Rot2Vec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_RSphericalInterp_Statics
	{
		struct CommonVectorFunctionsBPLibrary_eventRSphericalInterp_Parms
		{
			FRotator Current;
			FRotator Target;
			float DeltaTime;
			float Speed;
			float Alpha;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Current;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_RSphericalInterp_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventRSphericalInterp_Parms, Current), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_RSphericalInterp_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventRSphericalInterp_Parms, Target), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_RSphericalInterp_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventRSphericalInterp_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_RSphericalInterp_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventRSphericalInterp_Parms, Speed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_RSphericalInterp_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventRSphericalInterp_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_RSphericalInterp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventRSphericalInterp_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_RSphericalInterp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_RSphericalInterp_Statics::NewProp_Current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_RSphericalInterp_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_RSphericalInterp_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_RSphericalInterp_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_RSphericalInterp_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_RSphericalInterp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_RSphericalInterp_Statics::Function_MetaDataParams[] = {
		{ "Category", "VectorFunctions" },
		{ "ModuleRelativePath", "Public/CommonVectorFunctionsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_RSphericalInterp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonVectorFunctionsBPLibrary, nullptr, "RSphericalInterp", nullptr, nullptr, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_RSphericalInterp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_RSphericalInterp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_RSphericalInterp_Statics::CommonVectorFunctionsBPLibrary_eventRSphericalInterp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_RSphericalInterp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_RSphericalInterp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_RSphericalInterp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_RSphericalInterp_Statics::CommonVectorFunctionsBPLibrary_eventRSphericalInterp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_RSphericalInterp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_RSphericalInterp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics
	{
		struct CommonVectorFunctionsBPLibrary_eventSmoothClampRotation_Parms
		{
			FRotator InRotation;
			FRotator ReferenceRotation;
			float DeltaTime;
			double Alpha;
			float OutClampStrength;
			FVector DirClampVector;
			float InnerRadius;
			float OuterRadius;
			float ClampStrengthMultiplier;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceRotation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Alpha;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutClampStrength;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirClampVector;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerRadius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterRadius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampStrengthMultiplier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventSmoothClampRotation_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics::NewProp_ReferenceRotation = { "ReferenceRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventSmoothClampRotation_Parms, ReferenceRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventSmoothClampRotation_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventSmoothClampRotation_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics::NewProp_OutClampStrength = { "OutClampStrength", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventSmoothClampRotation_Parms, OutClampStrength), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics::NewProp_DirClampVector = { "DirClampVector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventSmoothClampRotation_Parms, DirClampVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics::NewProp_InnerRadius = { "InnerRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventSmoothClampRotation_Parms, InnerRadius), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics::NewProp_OuterRadius = { "OuterRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventSmoothClampRotation_Parms, OuterRadius), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics::NewProp_ClampStrengthMultiplier = { "ClampStrengthMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventSmoothClampRotation_Parms, ClampStrengthMultiplier), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventSmoothClampRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics::NewProp_InRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics::NewProp_ReferenceRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics::NewProp_OutClampStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics::NewProp_DirClampVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics::NewProp_InnerRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics::NewProp_OuterRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics::NewProp_ClampStrengthMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "VectorFunctions" },
		{ "ModuleRelativePath", "Public/CommonVectorFunctionsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonVectorFunctionsBPLibrary, nullptr, "SmoothClampRotation", nullptr, nullptr, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics::CommonVectorFunctionsBPLibrary_eventSmoothClampRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics::CommonVectorFunctionsBPLibrary_eventSmoothClampRotation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis_Statics
	{
		struct CommonVectorFunctionsBPLibrary_eventSmoothClampRotationPerAxis_Parms
		{
			FRotator InRotation;
			FRotator ReferenceRotation;
			FRotator MinAngles;
			FRotator MaxAngles;
			float AngleThreshHold;
			float DeltaTime;
			float OutClampStrength;
			float ClampStrengthMultiplier;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceRotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinAngles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxAngles;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleThreshHold;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutClampStrength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampStrengthMultiplier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis_Statics::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventSmoothClampRotationPerAxis_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis_Statics::NewProp_ReferenceRotation = { "ReferenceRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventSmoothClampRotationPerAxis_Parms, ReferenceRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis_Statics::NewProp_MinAngles = { "MinAngles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventSmoothClampRotationPerAxis_Parms, MinAngles), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis_Statics::NewProp_MaxAngles = { "MaxAngles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventSmoothClampRotationPerAxis_Parms, MaxAngles), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis_Statics::NewProp_AngleThreshHold = { "AngleThreshHold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventSmoothClampRotationPerAxis_Parms, AngleThreshHold), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventSmoothClampRotationPerAxis_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis_Statics::NewProp_OutClampStrength = { "OutClampStrength", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventSmoothClampRotationPerAxis_Parms, OutClampStrength), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis_Statics::NewProp_ClampStrengthMultiplier = { "ClampStrengthMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventSmoothClampRotationPerAxis_Parms, ClampStrengthMultiplier), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventSmoothClampRotationPerAxis_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis_Statics::NewProp_InRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis_Statics::NewProp_ReferenceRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis_Statics::NewProp_MinAngles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis_Statics::NewProp_MaxAngles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis_Statics::NewProp_AngleThreshHold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis_Statics::NewProp_OutClampStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis_Statics::NewProp_ClampStrengthMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "VectorFunctions" },
		{ "ModuleRelativePath", "Public/CommonVectorFunctionsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonVectorFunctionsBPLibrary, nullptr, "SmoothClampRotationPerAxis", nullptr, nullptr, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis_Statics::CommonVectorFunctionsBPLibrary_eventSmoothClampRotationPerAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis_Statics::CommonVectorFunctionsBPLibrary_eventSmoothClampRotationPerAxis_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_TransformVector_Statics
	{
		struct CommonVectorFunctionsBPLibrary_eventTransformVector_Parms
		{
			FVector V;
			FTransform T;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_V;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_T_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_T;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_TransformVector_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventTransformVector_Parms, V), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_TransformVector_Statics::NewProp_T_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_TransformVector_Statics::NewProp_T = { "T", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonVectorFunctionsBPLibrary_eventTransformVector_Parms, T), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_TransformVector_Statics::NewProp_T_MetaData), Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_TransformVector_Statics::NewProp_T_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_TransformVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_TransformVector_Statics::NewProp_V,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_TransformVector_Statics::NewProp_T,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_TransformVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "VectorFunctions" },
		{ "ModuleRelativePath", "Public/CommonVectorFunctionsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_TransformVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonVectorFunctionsBPLibrary, nullptr, "TransformVector", nullptr, nullptr, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_TransformVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_TransformVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_TransformVector_Statics::CommonVectorFunctionsBPLibrary_eventTransformVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_TransformVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_TransformVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_TransformVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_TransformVector_Statics::CommonVectorFunctionsBPLibrary_eventTransformVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_TransformVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_TransformVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonVectorFunctionsBPLibrary);
	UClass* Z_Construct_UClass_UCommonVectorFunctionsBPLibrary_NoRegister()
	{
		return UCommonVectorFunctionsBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCommonVectorFunctionsBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonVectorFunctionsBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonVectorFunctions,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonVectorFunctionsBPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonVectorFunctionsBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotation, "ClampRotation" }, // 2658420287
		{ &Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampRotationWithRadius, "ClampRotationWithRadius" }, // 1031458361
		{ &Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampToEllipsoid, "ClampToEllipsoid" }, // 2246322820
		{ &Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorInDirection, "ClampVectorInDirection" }, // 273558096
		{ &Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMax, "ClampVectorMax" }, // 3308699583
		{ &Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_ClampVectorMin, "ClampVectorMin" }, // 3218081227
		{ &Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_FastClampVectorAxes, "FastClampVectorAxes" }, // 1029035288
		{ &Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_GetDistanceAlphaFromBoxEdge, "GetDistanceAlphaFromBoxEdge" }, // 3829449480
		{ &Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_InterpolateActor, "InterpolateActor" }, // 1066824368
		{ &Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_LocationFromDistanceAndRotation, "LocationFromDistanceAndRotation" }, // 1169544903
		{ &Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_NormalizeRotator, "NormalizeRotator" }, // 250062330
		{ &Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickAddRotation, "QuickAddRotation" }, // 3098976680
		{ &Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_QuickSubtractRotation, "QuickSubtractRotation" }, // 3938673973
		{ &Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_Rot2Vec, "Rot2Vec" }, // 2267448117
		{ &Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_RSphericalInterp, "RSphericalInterp" }, // 2031569081
		{ &Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotation, "SmoothClampRotation" }, // 1849650755
		{ &Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_SmoothClampRotationPerAxis, "SmoothClampRotationPerAxis" }, // 3223572574
		{ &Z_Construct_UFunction_UCommonVectorFunctionsBPLibrary_TransformVector, "TransformVector" }, // 23265558
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonVectorFunctionsBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonVectorFunctionsBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "CommonVectorFunctionsBPLibrary.h" },
		{ "ModuleRelativePath", "Public/CommonVectorFunctionsBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonVectorFunctionsBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonVectorFunctionsBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonVectorFunctionsBPLibrary_Statics::ClassParams = {
		&UCommonVectorFunctionsBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonVectorFunctionsBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UCommonVectorFunctionsBPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCommonVectorFunctionsBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UCommonVectorFunctionsBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonVectorFunctionsBPLibrary.OuterSingleton, Z_Construct_UClass_UCommonVectorFunctionsBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonVectorFunctionsBPLibrary.OuterSingleton;
	}
	template<> COMMONVECTORFUNCTIONS_API UClass* StaticClass<UCommonVectorFunctionsBPLibrary>()
	{
		return UCommonVectorFunctionsBPLibrary::StaticClass();
	}
	UCommonVectorFunctionsBPLibrary::UCommonVectorFunctionsBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonVectorFunctionsBPLibrary);
	UCommonVectorFunctionsBPLibrary::~UCommonVectorFunctionsBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_gvb7m_Documents_Unreal_Projects_Build_CommonVectorFunctions_HostProject_Plugins_CommonVectorFunctions_Source_CommonVectorFunctions_Public_CommonVectorFunctionsBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gvb7m_Documents_Unreal_Projects_Build_CommonVectorFunctions_HostProject_Plugins_CommonVectorFunctions_Source_CommonVectorFunctions_Public_CommonVectorFunctionsBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonVectorFunctionsBPLibrary, UCommonVectorFunctionsBPLibrary::StaticClass, TEXT("UCommonVectorFunctionsBPLibrary"), &Z_Registration_Info_UClass_UCommonVectorFunctionsBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonVectorFunctionsBPLibrary), 2818577711U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gvb7m_Documents_Unreal_Projects_Build_CommonVectorFunctions_HostProject_Plugins_CommonVectorFunctions_Source_CommonVectorFunctions_Public_CommonVectorFunctionsBPLibrary_h_2833502325(TEXT("/Script/CommonVectorFunctions"),
		Z_CompiledInDeferFile_FID_Users_gvb7m_Documents_Unreal_Projects_Build_CommonVectorFunctions_HostProject_Plugins_CommonVectorFunctions_Source_CommonVectorFunctions_Public_CommonVectorFunctionsBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_gvb7m_Documents_Unreal_Projects_Build_CommonVectorFunctions_HostProject_Plugins_CommonVectorFunctions_Source_CommonVectorFunctions_Public_CommonVectorFunctionsBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
