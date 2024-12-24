// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectCP_init() {}
	PROJECTCP_API UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ProjectCP;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ProjectCP()
	{
		if (!Z_Registration_Info_UPackage__Script_ProjectCP.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ProjectCP",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x0A9648CB,
				0xB5EC9F3E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ProjectCP.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ProjectCP.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ProjectCP(Z_Construct_UPackage__Script_ProjectCP, TEXT("/Script/ProjectCP"), Z_Registration_Info_UPackage__Script_ProjectCP, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0A9648CB, 0xB5EC9F3E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
