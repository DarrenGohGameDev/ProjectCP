// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/ActorComponent/Attribute/DefenceComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefenceComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTCP_API UClass* Z_Construct_UClass_UDefenceComponent();
PROJECTCP_API UClass* Z_Construct_UClass_UDefenceComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class UDefenceComponent
void UDefenceComponent::StaticRegisterNativesUDefenceComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDefenceComponent);
UClass* Z_Construct_UClass_UDefenceComponent_NoRegister()
{
	return UDefenceComponent::StaticClass();
}
struct Z_Construct_UClass_UDefenceComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActorComponent/Attribute/DefenceComponent.h" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/DefenceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[] = {
		{ "Category", "Defence Attributes" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/DefenceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Evasion_MetaData[] = {
		{ "Category", "Defence Attributes" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/DefenceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageReduction_MetaData[] = {
		{ "Category", "Defence Attributes" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/DefenceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalDamageReduction_MetaData[] = {
		{ "Category", "Defence Attributes" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/DefenceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementalDamageReduction_MetaData[] = {
		{ "Category", "Defence Attributes" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/DefenceComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Armor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Evasion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageReduction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PhysicalDamageReduction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ElementalDamageReduction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDefenceComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDefenceComponent_Statics::NewProp_Armor = { "Armor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDefenceComponent, Armor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Armor_MetaData), NewProp_Armor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDefenceComponent_Statics::NewProp_Evasion = { "Evasion", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDefenceComponent, Evasion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Evasion_MetaData), NewProp_Evasion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDefenceComponent_Statics::NewProp_DamageReduction = { "DamageReduction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDefenceComponent, DamageReduction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageReduction_MetaData), NewProp_DamageReduction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDefenceComponent_Statics::NewProp_PhysicalDamageReduction = { "PhysicalDamageReduction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDefenceComponent, PhysicalDamageReduction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalDamageReduction_MetaData), NewProp_PhysicalDamageReduction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDefenceComponent_Statics::NewProp_ElementalDamageReduction = { "ElementalDamageReduction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDefenceComponent, ElementalDamageReduction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementalDamageReduction_MetaData), NewProp_ElementalDamageReduction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDefenceComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefenceComponent_Statics::NewProp_Armor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefenceComponent_Statics::NewProp_Evasion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefenceComponent_Statics::NewProp_DamageReduction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefenceComponent_Statics::NewProp_PhysicalDamageReduction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefenceComponent_Statics::NewProp_ElementalDamageReduction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDefenceComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDefenceComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDefenceComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDefenceComponent_Statics::ClassParams = {
	&UDefenceComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDefenceComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDefenceComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDefenceComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDefenceComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDefenceComponent()
{
	if (!Z_Registration_Info_UClass_UDefenceComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDefenceComponent.OuterSingleton, Z_Construct_UClass_UDefenceComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDefenceComponent.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UDefenceComponent>()
{
	return UDefenceComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDefenceComponent);
UDefenceComponent::~UDefenceComponent() {}
// End Class UDefenceComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Attribute_DefenceComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDefenceComponent, UDefenceComponent::StaticClass, TEXT("UDefenceComponent"), &Z_Registration_Info_UClass_UDefenceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDefenceComponent), 1794843105U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Attribute_DefenceComponent_h_1186520688(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Attribute_DefenceComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Attribute_DefenceComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
