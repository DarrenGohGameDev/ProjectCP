// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/GameInstance/GameInstanceManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameInstanceManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
PROJECTCP_API UClass* Z_Construct_UClass_ABullet_NoRegister();
PROJECTCP_API UClass* Z_Construct_UClass_UGameInstanceManager();
PROJECTCP_API UClass* Z_Construct_UClass_UGameInstanceManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class UGameInstanceManager
void UGameInstanceManager::StaticRegisterNativesUGameInstanceManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameInstanceManager);
UClass* Z_Construct_UClass_UGameInstanceManager_NoRegister()
{
	return UGameInstanceManager::StaticClass();
}
struct Z_Construct_UClass_UGameInstanceManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameInstance/GameInstanceManager.h" },
		{ "ModuleRelativePath", "Public/GameInstance/GameInstanceManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mSpawningBullet_MetaData[] = {
		{ "Category", "Bullet" },
		{ "ModuleRelativePath", "Public/GameInstance/GameInstanceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_mSpawningBullet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameInstanceManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameInstanceManager_Statics::NewProp_mSpawningBullet = { "mSpawningBullet", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameInstanceManager, mSpawningBullet), Z_Construct_UClass_UClass, Z_Construct_UClass_ABullet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mSpawningBullet_MetaData), NewProp_mSpawningBullet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameInstanceManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstanceManager_Statics::NewProp_mSpawningBullet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameInstanceManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameInstanceManager_Statics::ClassParams = {
	&UGameInstanceManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameInstanceManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceManager_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameInstanceManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameInstanceManager()
{
	if (!Z_Registration_Info_UClass_UGameInstanceManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameInstanceManager.OuterSingleton, Z_Construct_UClass_UGameInstanceManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameInstanceManager.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UGameInstanceManager>()
{
	return UGameInstanceManager::StaticClass();
}
UGameInstanceManager::UGameInstanceManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameInstanceManager);
UGameInstanceManager::~UGameInstanceManager() {}
// End Class UGameInstanceManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_GameInstance_GameInstanceManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameInstanceManager, UGameInstanceManager::StaticClass, TEXT("UGameInstanceManager"), &Z_Registration_Info_UClass_UGameInstanceManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameInstanceManager), 1478751713U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_GameInstance_GameInstanceManager_h_1441035400(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_GameInstance_GameInstanceManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_GameInstance_GameInstanceManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
