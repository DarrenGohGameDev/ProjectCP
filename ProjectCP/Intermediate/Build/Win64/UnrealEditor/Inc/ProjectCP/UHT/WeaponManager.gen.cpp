// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/Managers/WeaponManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTCP_API UClass* Z_Construct_UClass_ABaseRangeWeapon_NoRegister();
PROJECTCP_API UClass* Z_Construct_UClass_UWeaponManager();
PROJECTCP_API UClass* Z_Construct_UClass_UWeaponManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class UWeaponManager
void UWeaponManager::StaticRegisterNativesUWeaponManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponManager);
UClass* Z_Construct_UClass_UWeaponManager_NoRegister()
{
	return UWeaponManager::StaticClass();
}
struct Z_Construct_UClass_UWeaponManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Managers/WeaponManager.h" },
		{ "ModuleRelativePath", "Public/Managers/WeaponManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_primaryWeapon_MetaData[] = {
		{ "Category", "WeaponManager" },
		{ "ModuleRelativePath", "Public/Managers/WeaponManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_primaryWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponManager_Statics::NewProp_primaryWeapon = { "primaryWeapon", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponManager, primaryWeapon), Z_Construct_UClass_ABaseRangeWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_primaryWeapon_MetaData), NewProp_primaryWeapon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponManager_Statics::NewProp_primaryWeapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeaponManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponManager_Statics::ClassParams = {
	&UWeaponManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWeaponManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponManager_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponManager()
{
	if (!Z_Registration_Info_UClass_UWeaponManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponManager.OuterSingleton, Z_Construct_UClass_UWeaponManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponManager.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UWeaponManager>()
{
	return UWeaponManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponManager);
UWeaponManager::~UWeaponManager() {}
// End Class UWeaponManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_WeaponManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponManager, UWeaponManager::StaticClass, TEXT("UWeaponManager"), &Z_Registration_Info_UClass_UWeaponManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponManager), 582206521U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_WeaponManager_h_4066796178(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_WeaponManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_WeaponManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
