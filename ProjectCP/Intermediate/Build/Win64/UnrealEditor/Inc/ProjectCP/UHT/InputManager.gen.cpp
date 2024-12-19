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
PROJECTCP_API UClass* Z_Construct_UClass_UInputManager();
PROJECTCP_API UClass* Z_Construct_UClass_UInputManager_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_walk_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Managers/InputManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_shoot_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Managers/InputManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_jump_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Managers/InputManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_look_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Managers/InputManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IMC_player;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_walk;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_shoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_jump;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_look;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputManager_Statics::NewProp_IMC_player = { "IMC_player", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputManager, IMC_player), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IMC_player_MetaData), NewProp_IMC_player_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputManager_Statics::NewProp_IA_walk = { "IA_walk", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputManager, IA_walk), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_walk_MetaData), NewProp_IA_walk_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputManager_Statics::NewProp_IA_shoot = { "IA_shoot", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputManager, IA_shoot), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_shoot_MetaData), NewProp_IA_shoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputManager_Statics::NewProp_IA_jump = { "IA_jump", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputManager, IA_jump), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_jump_MetaData), NewProp_IA_jump_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputManager_Statics::NewProp_IA_look = { "IA_look", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputManager, IA_look), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_look_MetaData), NewProp_IA_look_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputManager_Statics::NewProp_IMC_player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputManager_Statics::NewProp_IA_walk,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputManager_Statics::NewProp_IA_shoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputManager_Statics::NewProp_IA_jump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputManager_Statics::NewProp_IA_look,
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
		{ Z_Construct_UClass_UInputManager, UInputManager::StaticClass, TEXT("UInputManager"), &Z_Registration_Info_UClass_UInputManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputManager), 2393426610U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InputManager_h_2606766783(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InputManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InputManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
