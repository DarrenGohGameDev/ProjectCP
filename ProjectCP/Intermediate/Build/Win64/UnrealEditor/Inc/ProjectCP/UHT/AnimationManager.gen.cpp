// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/Managers/AnimationManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTCP_API UClass* Z_Construct_UClass_UAnimationManager();
PROJECTCP_API UClass* Z_Construct_UClass_UAnimationManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class UAnimationManager
void UAnimationManager::StaticRegisterNativesUAnimationManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationManager);
UClass* Z_Construct_UClass_UAnimationManager_NoRegister()
{
	return UAnimationManager::StaticClass();
}
struct Z_Construct_UClass_UAnimationManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Managers/AnimationManager.h" },
		{ "ModuleRelativePath", "Public/Managers/AnimationManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimationManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationManager_Statics::ClassParams = {
	&UAnimationManager::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimationManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimationManager()
{
	if (!Z_Registration_Info_UClass_UAnimationManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationManager.OuterSingleton, Z_Construct_UClass_UAnimationManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimationManager.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UAnimationManager>()
{
	return UAnimationManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationManager);
UAnimationManager::~UAnimationManager() {}
// End Class UAnimationManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_AnimationManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationManager, UAnimationManager::StaticClass, TEXT("UAnimationManager"), &Z_Registration_Info_UClass_UAnimationManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationManager), 761300104U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_AnimationManager_h_1494287004(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_AnimationManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_AnimationManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
