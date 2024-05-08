// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VolumeInterpolator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCurveFloat;
class UStaticMeshComponent;
struct FOrientedBox;
#ifdef GB_GEOMETRYFUNCTIONS_VolumeInterpolator_generated_h
#error "VolumeInterpolator.generated.h already included, missing '#pragma once' in VolumeInterpolator.h"
#endif
#define GB_GEOMETRYFUNCTIONS_VolumeInterpolator_generated_h

#define FID_Users_gustav_baath_intern_realtime_automotive_configurator_Plugins_GB_GeometryFunctions_Source_GB_GeometryFunctions_Public_VolumeInterpolator_h_16_DELEGATE \
GB_GEOMETRYFUNCTIONS_API void FInterpCompleted_DelegateWrapper(const FMulticastScriptDelegate& InterpCompleted);


#define FID_Users_gustav_baath_intern_realtime_automotive_configurator_Plugins_GB_GeometryFunctions_Source_GB_GeometryFunctions_Public_VolumeInterpolator_h_20_SPARSE_DATA
#define FID_Users_gustav_baath_intern_realtime_automotive_configurator_Plugins_GB_GeometryFunctions_Source_GB_GeometryFunctions_Public_VolumeInterpolator_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_gustav_baath_intern_realtime_automotive_configurator_Plugins_GB_GeometryFunctions_Source_GB_GeometryFunctions_Public_VolumeInterpolator_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_gustav_baath_intern_realtime_automotive_configurator_Plugins_GB_GeometryFunctions_Source_GB_GeometryFunctions_Public_VolumeInterpolator_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRandomPointsInMeshBounds); \
	DECLARE_FUNCTION(execGetOBoxCorners); \
	DECLARE_FUNCTION(execGetSmallestBoundingShape); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execTransformVector); \
	DECLARE_FUNCTION(execTickInterpolate); \
	DECLARE_FUNCTION(execStartInterpolatePoints);


#define FID_Users_gustav_baath_intern_realtime_automotive_configurator_Plugins_GB_GeometryFunctions_Source_GB_GeometryFunctions_Public_VolumeInterpolator_h_20_ACCESSORS
#define FID_Users_gustav_baath_intern_realtime_automotive_configurator_Plugins_GB_GeometryFunctions_Source_GB_GeometryFunctions_Public_VolumeInterpolator_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVolumeInterpolator(); \
	friend struct Z_Construct_UClass_UVolumeInterpolator_Statics; \
public: \
	DECLARE_CLASS(UVolumeInterpolator, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GB_GeometryFunctions"), NO_API) \
	DECLARE_SERIALIZER(UVolumeInterpolator)


#define FID_Users_gustav_baath_intern_realtime_automotive_configurator_Plugins_GB_GeometryFunctions_Source_GB_GeometryFunctions_Public_VolumeInterpolator_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVolumeInterpolator(UVolumeInterpolator&&); \
	NO_API UVolumeInterpolator(const UVolumeInterpolator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVolumeInterpolator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVolumeInterpolator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVolumeInterpolator) \
	NO_API virtual ~UVolumeInterpolator();


#define FID_Users_gustav_baath_intern_realtime_automotive_configurator_Plugins_GB_GeometryFunctions_Source_GB_GeometryFunctions_Public_VolumeInterpolator_h_17_PROLOG
#define FID_Users_gustav_baath_intern_realtime_automotive_configurator_Plugins_GB_GeometryFunctions_Source_GB_GeometryFunctions_Public_VolumeInterpolator_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_gustav_baath_intern_realtime_automotive_configurator_Plugins_GB_GeometryFunctions_Source_GB_GeometryFunctions_Public_VolumeInterpolator_h_20_SPARSE_DATA \
	FID_Users_gustav_baath_intern_realtime_automotive_configurator_Plugins_GB_GeometryFunctions_Source_GB_GeometryFunctions_Public_VolumeInterpolator_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_gustav_baath_intern_realtime_automotive_configurator_Plugins_GB_GeometryFunctions_Source_GB_GeometryFunctions_Public_VolumeInterpolator_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_gustav_baath_intern_realtime_automotive_configurator_Plugins_GB_GeometryFunctions_Source_GB_GeometryFunctions_Public_VolumeInterpolator_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_gustav_baath_intern_realtime_automotive_configurator_Plugins_GB_GeometryFunctions_Source_GB_GeometryFunctions_Public_VolumeInterpolator_h_20_ACCESSORS \
	FID_Users_gustav_baath_intern_realtime_automotive_configurator_Plugins_GB_GeometryFunctions_Source_GB_GeometryFunctions_Public_VolumeInterpolator_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_gustav_baath_intern_realtime_automotive_configurator_Plugins_GB_GeometryFunctions_Source_GB_GeometryFunctions_Public_VolumeInterpolator_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GB_GEOMETRYFUNCTIONS_API UClass* StaticClass<class UVolumeInterpolator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_gustav_baath_intern_realtime_automotive_configurator_Plugins_GB_GeometryFunctions_Source_GB_GeometryFunctions_Public_VolumeInterpolator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
