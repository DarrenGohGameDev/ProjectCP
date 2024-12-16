// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/ActorComponent/Attribute/AttributeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTCP_API UClass* Z_Construct_UClass_UAttributeComponent();
PROJECTCP_API UClass* Z_Construct_UClass_UAttributeComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class UAttributeComponent
void UAttributeComponent::StaticRegisterNativesUAttributeComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeComponent);
UClass* Z_Construct_UClass_UAttributeComponent_NoRegister()
{
	return UAttributeComponent::StaticClass();
}
struct Z_Construct_UClass_UAttributeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActorComponent/Attribute/AttributeComponent.h" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHp_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHp_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStamina_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMana_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Evasion_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageReduction_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalDamageReduction_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementalDamageReduction_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireResistance_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColdResistance_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightningResistance_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/AttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentMana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Armor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Evasion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageReduction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PhysicalDamageReduction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ElementalDamageReduction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireResistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ColdResistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningResistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_MaxHp = { "MaxHp", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeComponent, MaxHp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHp_MetaData), NewProp_MaxHp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_CurrentHp = { "CurrentHp", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeComponent, CurrentHp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHp_MetaData), NewProp_CurrentHp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeComponent, MaxStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_CurrentStamina = { "CurrentStamina", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeComponent, CurrentStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStamina_MetaData), NewProp_CurrentStamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeComponent, MaxMana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMana_MetaData), NewProp_MaxMana_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_CurrentMana = { "CurrentMana", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeComponent, CurrentMana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMana_MetaData), NewProp_CurrentMana_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_Armor = { "Armor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeComponent, Armor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Armor_MetaData), NewProp_Armor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_Evasion = { "Evasion", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeComponent, Evasion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Evasion_MetaData), NewProp_Evasion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_DamageReduction = { "DamageReduction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeComponent, DamageReduction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageReduction_MetaData), NewProp_DamageReduction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_PhysicalDamageReduction = { "PhysicalDamageReduction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeComponent, PhysicalDamageReduction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalDamageReduction_MetaData), NewProp_PhysicalDamageReduction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_ElementalDamageReduction = { "ElementalDamageReduction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeComponent, ElementalDamageReduction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementalDamageReduction_MetaData), NewProp_ElementalDamageReduction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_FireResistance = { "FireResistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeComponent, FireResistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireResistance_MetaData), NewProp_FireResistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_ColdResistance = { "ColdResistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeComponent, ColdResistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColdResistance_MetaData), NewProp_ColdResistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_LightningResistance = { "LightningResistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeComponent, LightningResistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightningResistance_MetaData), NewProp_LightningResistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_MaxHp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_CurrentHp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_MaxStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_CurrentStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_MaxMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_CurrentMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_Armor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_Evasion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_DamageReduction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_PhysicalDamageReduction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_ElementalDamageReduction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_FireResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_ColdResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_LightningResistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAttributeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeComponent_Statics::ClassParams = {
	&UAttributeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAttributeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttributeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAttributeComponent()
{
	if (!Z_Registration_Info_UClass_UAttributeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeComponent.OuterSingleton, Z_Construct_UClass_UAttributeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttributeComponent.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UAttributeComponent>()
{
	return UAttributeComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeComponent);
UAttributeComponent::~UAttributeComponent() {}
// End Class UAttributeComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Attribute_AttributeComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAttributeComponent, UAttributeComponent::StaticClass, TEXT("UAttributeComponent"), &Z_Registration_Info_UClass_UAttributeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeComponent), 1092132545U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Attribute_AttributeComponent_h_4254968991(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Attribute_AttributeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Attribute_AttributeComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
