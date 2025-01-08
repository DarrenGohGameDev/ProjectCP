// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectCP_init() {}
	PROJECTCP_API UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnChangeHpBarPercent__DelegateSignature();
	PROJECTCP_API UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnEquipWeapon__DelegateSignature();
	PROJECTCP_API UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnHitActor__DelegateSignature();
	PROJECTCP_API UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature();
	PROJECTCP_API UFunction* Z_Construct_UDelegateFunction_ProjectCP_SetAmmoText__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ProjectCP;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ProjectCP()
	{
		if (!Z_Registration_Info_UPackage__Script_ProjectCP.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectCP_OnChangeHpBarPercent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectCP_OnEquipWeapon__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectCP_OnHitActor__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectCP_SetAmmoText__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ProjectCP",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE04D7DD2,
				0xEE67485D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ProjectCP.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ProjectCP.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ProjectCP(Z_Construct_UPackage__Script_ProjectCP, TEXT("/Script/ProjectCP"), Z_Registration_Info_UPackage__Script_ProjectCP, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE04D7DD2, 0xEE67485D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
