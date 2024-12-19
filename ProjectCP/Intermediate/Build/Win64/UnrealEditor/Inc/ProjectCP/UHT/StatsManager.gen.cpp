// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/Managers/StatsManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatsManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTCP_API UClass* Z_Construct_UClass_UStatsManager();
PROJECTCP_API UClass* Z_Construct_UClass_UStatsManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class UStatsManager
void UStatsManager::StaticRegisterNativesUStatsManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatsManager);
UClass* Z_Construct_UClass_UStatsManager_NoRegister()
{
	return UStatsManager::StaticClass();
}
struct Z_Construct_UClass_UStatsManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Managers/StatsManager.h" },
		{ "ModuleRelativePath", "Public/Managers/StatsManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatsManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStatsManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatsManager_Statics::ClassParams = {
	&UStatsManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatsManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatsManager()
{
	if (!Z_Registration_Info_UClass_UStatsManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatsManager.OuterSingleton, Z_Construct_UClass_UStatsManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatsManager.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UStatsManager>()
{
	return UStatsManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatsManager);
UStatsManager::~UStatsManager() {}
// End Class UStatsManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_StatsManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatsManager, UStatsManager::StaticClass, TEXT("UStatsManager"), &Z_Registration_Info_UClass_UStatsManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatsManager), 1749180979U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_StatsManager_h_1687493040(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_StatsManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_StatsManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
