// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/ActorComponent/Attribute/StaminaComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaminaComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTCP_API UClass* Z_Construct_UClass_UStaminaComponent();
PROJECTCP_API UClass* Z_Construct_UClass_UStaminaComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class UStaminaComponent
void UStaminaComponent::StaticRegisterNativesUStaminaComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaminaComponent);
UClass* Z_Construct_UClass_UStaminaComponent_NoRegister()
{
	return UStaminaComponent::StaticClass();
}
struct Z_Construct_UClass_UStaminaComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActorComponent/Attribute/StaminaComponent.h" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/StaminaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Stamina Attributes" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/StaminaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStamina_MetaData[] = {
		{ "Category", "Stamina Attributes" },
		{ "ModuleRelativePath", "Public/ActorComponent/Attribute/StaminaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentStamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaminaComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaminaComponent_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaminaComponent, MaxStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaminaComponent_Statics::NewProp_CurrentStamina = { "CurrentStamina", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaminaComponent, CurrentStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStamina_MetaData), NewProp_CurrentStamina_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStaminaComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaminaComponent_Statics::NewProp_MaxStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaminaComponent_Statics::NewProp_CurrentStamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStaminaComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaminaComponent_Statics::ClassParams = {
	&UStaminaComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStaminaComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStaminaComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStaminaComponent()
{
	if (!Z_Registration_Info_UClass_UStaminaComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaminaComponent.OuterSingleton, Z_Construct_UClass_UStaminaComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStaminaComponent.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UStaminaComponent>()
{
	return UStaminaComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStaminaComponent);
UStaminaComponent::~UStaminaComponent() {}
// End Class UStaminaComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Attribute_StaminaComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStaminaComponent, UStaminaComponent::StaticClass, TEXT("UStaminaComponent"), &Z_Registration_Info_UClass_UStaminaComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaminaComponent), 1535669222U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Attribute_StaminaComponent_h_1838815093(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Attribute_StaminaComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Attribute_StaminaComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
