// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/ActorComponent/Attribute/ManaComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTCP_API UClass* Z_Construct_UClass_UManaComponent();
PROJECTCP_API UClass* Z_Construct_UClass_UManaComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class UManaComponent
void UManaComponent::StaticRegisterNativesUManaComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManaComponent);
UClass* Z_Construct_UClass_UManaComponent_NoRegister()
{
	return UManaComponent::StaticClass();
}
struct Z_Construct_UClass_UManaComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActorComponent/Attribute/ManaComponent.h" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[] = {
		{ "Category", "Mana Attributes" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMana_MetaData[] = {
		{ "Category", "Mana Attributes" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManaComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponent, MaxMana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMana_MetaData), NewProp_MaxMana_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_CurrentMana = { "CurrentMana", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponent, CurrentMana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMana_MetaData), NewProp_CurrentMana_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManaComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_MaxMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_CurrentMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UManaComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UManaComponent_Statics::ClassParams = {
	&UManaComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UManaComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UManaComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UManaComponent()
{
	if (!Z_Registration_Info_UClass_UManaComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManaComponent.OuterSingleton, Z_Construct_UClass_UManaComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UManaComponent.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UManaComponent>()
{
	return UManaComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UManaComponent);
UManaComponent::~UManaComponent() {}
// End Class UManaComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Attribute_ManaComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UManaComponent, UManaComponent::StaticClass, TEXT("UManaComponent"), &Z_Registration_Info_UClass_UManaComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManaComponent), 4143192238U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Attribute_ManaComponent_h_1614343644(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Attribute_ManaComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Attribute_ManaComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
