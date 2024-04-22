// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonVectorFunctionsBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef COMMONVECTORFUNCTIONS_CommonVectorFunctionsBPLibrary_generated_h
#error "CommonVectorFunctionsBPLibrary.generated.h already included, missing '#pragma once' in CommonVectorFunctionsBPLibrary.h"
#endif
#define COMMONVECTORFUNCTIONS_CommonVectorFunctionsBPLibrary_generated_h

#define FID_Users_gustav_baath_Build_PluginBuild_CommonVectorFunctions_HostProject_Plugins_CommonVectorFunctions_Source_CommonVectorFunctions_Public_CommonVectorFunctionsBPLibrary_h_30_SPARSE_DATA
#define FID_Users_gustav_baath_Build_PluginBuild_CommonVectorFunctions_HostProject_Plugins_CommonVectorFunctions_Source_CommonVectorFunctions_Public_CommonVectorFunctionsBPLibrary_h_30_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_gustav_baath_Build_PluginBuild_CommonVectorFunctions_HostProject_Plugins_CommonVectorFunctions_Source_CommonVectorFunctions_Public_CommonVectorFunctionsBPLibrary_h_30_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_gustav_baath_Build_PluginBuild_CommonVectorFunctions_HostProject_Plugins_CommonVectorFunctions_Source_CommonVectorFunctions_Public_CommonVectorFunctionsBPLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTransformVector); \
	DECLARE_FUNCTION(execRSphericalInterp); \
	DECLARE_FUNCTION(execClampVectorMax); \
	DECLARE_FUNCTION(execClampVectorMin); \
	DECLARE_FUNCTION(execFastClampVectorAxes); \
	DECLARE_FUNCTION(execQuickSubtractRotation); \
	DECLARE_FUNCTION(execQuickAddRotation); \
	DECLARE_FUNCTION(execRot2Vec); \
	DECLARE_FUNCTION(execNormalizeRotator); \
	DECLARE_FUNCTION(execLocationFromDistanceAndRotation); \
	DECLARE_FUNCTION(execClampToEllipsoid); \
	DECLARE_FUNCTION(execSmoothClampRotationPerAxis); \
	DECLARE_FUNCTION(execSmoothClampRotation); \
	DECLARE_FUNCTION(execClampRotationWithRadius); \
	DECLARE_FUNCTION(execClampRotation); \
	DECLARE_FUNCTION(execInterpolateActor);


#define FID_Users_gustav_baath_Build_PluginBuild_CommonVectorFunctions_HostProject_Plugins_CommonVectorFunctions_Source_CommonVectorFunctions_Public_CommonVectorFunctionsBPLibrary_h_30_ACCESSORS
#define FID_Users_gustav_baath_Build_PluginBuild_CommonVectorFunctions_HostProject_Plugins_CommonVectorFunctions_Source_CommonVectorFunctions_Public_CommonVectorFunctionsBPLibrary_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonVectorFunctionsBPLibrary(); \
	friend struct Z_Construct_UClass_UCommonVectorFunctionsBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UCommonVectorFunctionsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonVectorFunctions"), NO_API) \
	DECLARE_SERIALIZER(UCommonVectorFunctionsBPLibrary)


#define FID_Users_gustav_baath_Build_PluginBuild_CommonVectorFunctions_HostProject_Plugins_CommonVectorFunctions_Source_CommonVectorFunctions_Public_CommonVectorFunctionsBPLibrary_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonVectorFunctionsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonVectorFunctionsBPLibrary(UCommonVectorFunctionsBPLibrary&&); \
	NO_API UCommonVectorFunctionsBPLibrary(const UCommonVectorFunctionsBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonVectorFunctionsBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonVectorFunctionsBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonVectorFunctionsBPLibrary) \
	NO_API virtual ~UCommonVectorFunctionsBPLibrary();


#define FID_Users_gustav_baath_Build_PluginBuild_CommonVectorFunctions_HostProject_Plugins_CommonVectorFunctions_Source_CommonVectorFunctions_Public_CommonVectorFunctionsBPLibrary_h_27_PROLOG
#define FID_Users_gustav_baath_Build_PluginBuild_CommonVectorFunctions_HostProject_Plugins_CommonVectorFunctions_Source_CommonVectorFunctions_Public_CommonVectorFunctionsBPLibrary_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_gustav_baath_Build_PluginBuild_CommonVectorFunctions_HostProject_Plugins_CommonVectorFunctions_Source_CommonVectorFunctions_Public_CommonVectorFunctionsBPLibrary_h_30_SPARSE_DATA \
	FID_Users_gustav_baath_Build_PluginBuild_CommonVectorFunctions_HostProject_Plugins_CommonVectorFunctions_Source_CommonVectorFunctions_Public_CommonVectorFunctionsBPLibrary_h_30_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_gustav_baath_Build_PluginBuild_CommonVectorFunctions_HostProject_Plugins_CommonVectorFunctions_Source_CommonVectorFunctions_Public_CommonVectorFunctionsBPLibrary_h_30_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_gustav_baath_Build_PluginBuild_CommonVectorFunctions_HostProject_Plugins_CommonVectorFunctions_Source_CommonVectorFunctions_Public_CommonVectorFunctionsBPLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_gustav_baath_Build_PluginBuild_CommonVectorFunctions_HostProject_Plugins_CommonVectorFunctions_Source_CommonVectorFunctions_Public_CommonVectorFunctionsBPLibrary_h_30_ACCESSORS \
	FID_Users_gustav_baath_Build_PluginBuild_CommonVectorFunctions_HostProject_Plugins_CommonVectorFunctions_Source_CommonVectorFunctions_Public_CommonVectorFunctionsBPLibrary_h_30_INCLASS_NO_PURE_DECLS \
	FID_Users_gustav_baath_Build_PluginBuild_CommonVectorFunctions_HostProject_Plugins_CommonVectorFunctions_Source_CommonVectorFunctions_Public_CommonVectorFunctionsBPLibrary_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONVECTORFUNCTIONS_API UClass* StaticClass<class UCommonVectorFunctionsBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_gustav_baath_Build_PluginBuild_CommonVectorFunctions_HostProject_Plugins_CommonVectorFunctions_Source_CommonVectorFunctions_Public_CommonVectorFunctionsBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
