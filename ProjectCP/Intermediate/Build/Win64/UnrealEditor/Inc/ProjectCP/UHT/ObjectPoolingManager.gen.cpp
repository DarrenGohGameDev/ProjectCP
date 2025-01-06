// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/Managers/ObjectPoolingManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectPoolingManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PROJECTCP_API UClass* Z_Construct_UClass_UObjectPoolingManager();
PROJECTCP_API UClass* Z_Construct_UClass_UObjectPoolingManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class UObjectPoolingManager
void UObjectPoolingManager::StaticRegisterNativesUObjectPoolingManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectPoolingManager);
UClass* Z_Construct_UClass_UObjectPoolingManager_NoRegister()
{
	return UObjectPoolingManager::StaticClass();
}
struct Z_Construct_UClass_UObjectPoolingManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Managers/ObjectPoolingManager.h" },
		{ "ModuleRelativePath", "Public/Managers/ObjectPoolingManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectPoolingManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UObjectPoolingManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolingManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectPoolingManager_Statics::ClassParams = {
	&UObjectPoolingManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolingManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectPoolingManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObjectPoolingManager()
{
	if (!Z_Registration_Info_UClass_UObjectPoolingManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectPoolingManager.OuterSingleton, Z_Construct_UClass_UObjectPoolingManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObjectPoolingManager.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UObjectPoolingManager>()
{
	return UObjectPoolingManager::StaticClass();
}
UObjectPoolingManager::UObjectPoolingManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectPoolingManager);
UObjectPoolingManager::~UObjectPoolingManager() {}
// End Class UObjectPoolingManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_ObjectPoolingManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UObjectPoolingManager, UObjectPoolingManager::StaticClass, TEXT("UObjectPoolingManager"), &Z_Registration_Info_UClass_UObjectPoolingManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectPoolingManager), 689487423U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_ObjectPoolingManager_h_3238264397(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_ObjectPoolingManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_ObjectPoolingManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
