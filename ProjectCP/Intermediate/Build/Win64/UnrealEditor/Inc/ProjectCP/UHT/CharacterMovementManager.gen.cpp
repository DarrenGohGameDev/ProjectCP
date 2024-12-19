// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/Managers/CharacterMovementManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterMovementManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTCP_API UClass* Z_Construct_UClass_UCharacterMovementManager();
PROJECTCP_API UClass* Z_Construct_UClass_UCharacterMovementManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class UCharacterMovementManager
void UCharacterMovementManager::StaticRegisterNativesUCharacterMovementManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterMovementManager);
UClass* Z_Construct_UClass_UCharacterMovementManager_NoRegister()
{
	return UCharacterMovementManager::StaticClass();
}
struct Z_Construct_UClass_UCharacterMovementManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Managers/CharacterMovementManager.h" },
		{ "ModuleRelativePath", "Public/Managers/CharacterMovementManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterMovementManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCharacterMovementManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterMovementManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterMovementManager_Statics::ClassParams = {
	&UCharacterMovementManager::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterMovementManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterMovementManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterMovementManager()
{
	if (!Z_Registration_Info_UClass_UCharacterMovementManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterMovementManager.OuterSingleton, Z_Construct_UClass_UCharacterMovementManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterMovementManager.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UCharacterMovementManager>()
{
	return UCharacterMovementManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterMovementManager);
UCharacterMovementManager::~UCharacterMovementManager() {}
// End Class UCharacterMovementManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_CharacterMovementManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterMovementManager, UCharacterMovementManager::StaticClass, TEXT("UCharacterMovementManager"), &Z_Registration_Info_UClass_UCharacterMovementManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterMovementManager), 650113255U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_CharacterMovementManager_h_3398135452(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_CharacterMovementManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_CharacterMovementManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
