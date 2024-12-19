// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/ActorComponent/Attribute/ResistanceComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResistanceComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTCP_API UClass* Z_Construct_UClass_UResistanceComponent();
PROJECTCP_API UClass* Z_Construct_UClass_UResistanceComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class UResistanceComponent
void UResistanceComponent::StaticRegisterNativesUResistanceComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UResistanceComponent);
UClass* Z_Construct_UClass_UResistanceComponent_NoRegister()
{
	return UResistanceComponent::StaticClass();
}
struct Z_Construct_UClass_UResistanceComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActorComponent/Attribute/ResistanceComponent.h" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/ResistanceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireResistance_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/ResistanceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColdResistance_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/ResistanceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightningResistance_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/ResistanceComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireResistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ColdResistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningResistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResistanceComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UResistanceComponent_Statics::NewProp_FireResistance = { "FireResistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResistanceComponent, FireResistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireResistance_MetaData), NewProp_FireResistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UResistanceComponent_Statics::NewProp_ColdResistance = { "ColdResistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResistanceComponent, ColdResistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColdResistance_MetaData), NewProp_ColdResistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UResistanceComponent_Statics::NewProp_LightningResistance = { "LightningResistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UResistanceComponent, LightningResistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightningResistance_MetaData), NewProp_LightningResistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UResistanceComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResistanceComponent_Statics::NewProp_FireResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResistanceComponent_Statics::NewProp_ColdResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResistanceComponent_Statics::NewProp_LightningResistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UResistanceComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UResistanceComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UResistanceComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UResistanceComponent_Statics::ClassParams = {
	&UResistanceComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UResistanceComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UResistanceComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UResistanceComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UResistanceComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UResistanceComponent()
{
	if (!Z_Registration_Info_UClass_UResistanceComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UResistanceComponent.OuterSingleton, Z_Construct_UClass_UResistanceComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UResistanceComponent.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UResistanceComponent>()
{
	return UResistanceComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UResistanceComponent);
UResistanceComponent::~UResistanceComponent() {}
// End Class UResistanceComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Attribute_ResistanceComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UResistanceComponent, UResistanceComponent::StaticClass, TEXT("UResistanceComponent"), &Z_Registration_Info_UClass_UResistanceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UResistanceComponent), 1335053347U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Attribute_ResistanceComponent_h_3817365523(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Attribute_ResistanceComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Attribute_ResistanceComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
