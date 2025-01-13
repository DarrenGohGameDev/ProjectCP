// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/Character/Enemy/BaseEnemyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseEnemyCharacter() {}

// Begin Cross Module References
PROJECTCP_API UClass* Z_Construct_UClass_ABaseCharacter();
PROJECTCP_API UClass* Z_Construct_UClass_ABaseEnemyCharacter();
PROJECTCP_API UClass* Z_Construct_UClass_ABaseEnemyCharacter_NoRegister();
PROJECTCP_API UClass* Z_Construct_UClass_UEnemyHpBarWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class ABaseEnemyCharacter
void ABaseEnemyCharacter::StaticRegisterNativesABaseEnemyCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseEnemyCharacter);
UClass* Z_Construct_UClass_ABaseEnemyCharacter_NoRegister()
{
	return ABaseEnemyCharacter::StaticClass();
}
struct Z_Construct_UClass_ABaseEnemyCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Enemy/BaseEnemyCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/Enemy/BaseEnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mHpBarWidget_MetaData[] = {
		{ "Category", "BaseEnemyCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/Enemy/BaseEnemyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mHpBarWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseEnemyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEnemyCharacter_Statics::NewProp_mHpBarWidget = { "mHpBarWidget", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemyCharacter, mHpBarWidget), Z_Construct_UClass_UEnemyHpBarWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mHpBarWidget_MetaData), NewProp_mHpBarWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseEnemyCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemyCharacter_Statics::NewProp_mHpBarWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemyCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseEnemyCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemyCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseEnemyCharacter_Statics::ClassParams = {
	&ABaseEnemyCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABaseEnemyCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemyCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseEnemyCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseEnemyCharacter()
{
	if (!Z_Registration_Info_UClass_ABaseEnemyCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseEnemyCharacter.OuterSingleton, Z_Construct_UClass_ABaseEnemyCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseEnemyCharacter.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<ABaseEnemyCharacter>()
{
	return ABaseEnemyCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseEnemyCharacter);
ABaseEnemyCharacter::~ABaseEnemyCharacter() {}
// End Class ABaseEnemyCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Character_Enemy_BaseEnemyCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseEnemyCharacter, ABaseEnemyCharacter::StaticClass, TEXT("ABaseEnemyCharacter"), &Z_Registration_Info_UClass_ABaseEnemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseEnemyCharacter), 3187346736U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Character_Enemy_BaseEnemyCharacter_h_2542946637(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Character_Enemy_BaseEnemyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Character_Enemy_BaseEnemyCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
