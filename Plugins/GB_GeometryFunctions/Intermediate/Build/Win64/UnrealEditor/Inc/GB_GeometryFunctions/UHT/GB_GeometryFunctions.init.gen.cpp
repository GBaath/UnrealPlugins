// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGB_GeometryFunctions_init() {}
	GB_GEOMETRYFUNCTIONS_API UFunction* Z_Construct_UDelegateFunction_GB_GeometryFunctions_InterpCompleted__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GB_GeometryFunctions;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GB_GeometryFunctions()
	{
		if (!Z_Registration_Info_UPackage__Script_GB_GeometryFunctions.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GB_GeometryFunctions_InterpCompleted__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GB_GeometryFunctions",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x95921654,
				0x029069B2,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GB_GeometryFunctions.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GB_GeometryFunctions.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GB_GeometryFunctions(Z_Construct_UPackage__Script_GB_GeometryFunctions, TEXT("/Script/GB_GeometryFunctions"), Z_Registration_Info_UPackage__Script_GB_GeometryFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x95921654, 0x029069B2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
