// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/Managers/InputManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
PROJECTCP_API UClass* Z_Construct_UClass_UCharacterMovementManager_NoRegister();
PROJECTCP_API UClass* Z_Construct_UClass_UInputManager();
PROJECTCP_API UClass* Z_Construct_UClass_UInputManager_NoRegister();
PROJECTCP_API UClass* Z_Construct_UClass_UInventoryManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class UInputManager
void UInputManager::StaticRegisterNativesUInputManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputManager);
UClass* Z_Construct_UClass_UInputManager_NoRegister()
{
	return UInputManager::StaticClass();
}
struct Z_Construct_UClass_UInputManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Managers/InputManager.h" },
		{ "ModuleRelativePath", "Public/Managers/InputManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IMC_player_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Managers/InputManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_walkIA_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Managers/InputManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shootIA_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Managers/InputManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_jumpIA_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Managers/InputManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lookIA_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Managers/InputManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_interactIA_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Managers/InputManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_reloadIA_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Managers/InputManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_characterMovementManager_MetaData[] = {
		{ "Category", "InputManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Managers/InputManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_characterInventoryManager_MetaData[] = {
		{ "Category", "InputManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Managers/InputManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IMC_player;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_walkIA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_shootIA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_jumpIA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_lookIA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_interactIA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_reloadIA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_characterMovementManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_characterInventoryManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputManager_Statics::NewProp_IMC_player = { "IMC_player", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputManager, IMC_player), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IMC_player_MetaData), NewProp_IMC_player_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputManager_Statics::NewProp_walkIA = { "walkIA", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputManager, walkIA), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_walkIA_MetaData), NewProp_walkIA_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputManager_Statics::NewProp_shootIA = { "shootIA", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputManager, shootIA), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shootIA_MetaData), NewProp_shootIA_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputManager_Statics::NewProp_jumpIA = { "jumpIA", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputManager, jumpIA), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jumpIA_MetaData), NewProp_jumpIA_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputManager_Statics::NewProp_lookIA = { "lookIA", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputManager, lookIA), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lookIA_MetaData), NewProp_lookIA_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputManager_Statics::NewProp_interactIA = { "interactIA", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputManager, interactIA), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_interactIA_MetaData), NewProp_interactIA_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputManager_Statics::NewProp_reloadIA = { "reloadIA", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputManager, reloadIA), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reloadIA_MetaData), NewProp_reloadIA_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputManager_Statics::NewProp_characterMovementManager = { "characterMovementManager", nullptr, (EPropertyFlags)0x00200800000a0809, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputManager, characterMovementManager), Z_Construct_UClass_UCharacterMovementManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_characterMovementManager_MetaData), NewProp_characterMovementManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputManager_Statics::NewProp_characterInventoryManager = { "characterInventoryManager", nullptr, (EPropertyFlags)0x00200800000a0809, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputManager, characterInventoryManager), Z_Construct_UClass_UInventoryManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_characterInventoryManager_MetaData), NewProp_characterInventoryManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputManager_Statics::NewProp_IMC_player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputManager_Statics::NewProp_walkIA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputManager_Statics::NewProp_shootIA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputManager_Statics::NewProp_jumpIA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputManager_Statics::NewProp_lookIA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputManager_Statics::NewProp_interactIA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputManager_Statics::NewProp_reloadIA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputManager_Statics::NewProp_characterMovementManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputManager_Statics::NewProp_characterInventoryManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputManager_Statics::ClassParams = {
	&UInputManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputManager_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputManager()
{
	if (!Z_Registration_Info_UClass_UInputManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputManager.OuterSingleton, Z_Construct_UClass_UInputManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputManager.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UInputManager>()
{
	return UInputManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputManager);
UInputManager::~UInputManager() {}
// End Class UInputManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InputManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputManager, UInputManager::StaticClass, TEXT("UInputManager"), &Z_Registration_Info_UClass_UInputManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputManager), 2112691774U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InputManager_h_91308299(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InputManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InputManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
