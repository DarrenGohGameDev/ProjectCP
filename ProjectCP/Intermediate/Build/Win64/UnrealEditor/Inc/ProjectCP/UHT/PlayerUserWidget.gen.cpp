// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/UI/PlayerUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerUserWidget() {}

// Begin Cross Module References
PROJECTCP_API UClass* Z_Construct_UClass_UHpBarWidget_NoRegister();
PROJECTCP_API UClass* Z_Construct_UClass_UPlayerAmmoCounterWidget_NoRegister();
PROJECTCP_API UClass* Z_Construct_UClass_UPlayerUserWidget();
PROJECTCP_API UClass* Z_Construct_UClass_UPlayerUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class UPlayerUserWidget
void UPlayerUserWidget::StaticRegisterNativesUPlayerUserWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerUserWidget);
UClass* Z_Construct_UClass_UPlayerUserWidget_NoRegister()
{
	return UPlayerUserWidget::StaticClass();
}
struct Z_Construct_UClass_UPlayerUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/PlayerUserWidget.h" },
		{ "ModuleRelativePath", "Public/UI/PlayerUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerAmmoWidgetLayer_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerHpBarWidgetLayer_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_playerAmmoWidgetLayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_playerHpBarWidgetLayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUserWidget_Statics::NewProp_playerAmmoWidgetLayer = { "playerAmmoWidgetLayer", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerUserWidget, playerAmmoWidgetLayer), Z_Construct_UClass_UPlayerAmmoCounterWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerAmmoWidgetLayer_MetaData), NewProp_playerAmmoWidgetLayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUserWidget_Statics::NewProp_playerHpBarWidgetLayer = { "playerHpBarWidgetLayer", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerUserWidget, playerHpBarWidgetLayer), Z_Construct_UClass_UHpBarWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerHpBarWidgetLayer_MetaData), NewProp_playerHpBarWidgetLayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUserWidget_Statics::NewProp_playerAmmoWidgetLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUserWidget_Statics::NewProp_playerHpBarWidgetLayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerUserWidget_Statics::ClassParams = {
	&UPlayerUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlayerUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerUserWidget()
{
	if (!Z_Registration_Info_UClass_UPlayerUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerUserWidget.OuterSingleton, Z_Construct_UClass_UPlayerUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerUserWidget.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UPlayerUserWidget>()
{
	return UPlayerUserWidget::StaticClass();
}
UPlayerUserWidget::UPlayerUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerUserWidget);
UPlayerUserWidget::~UPlayerUserWidget() {}
// End Class UPlayerUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerUserWidget, UPlayerUserWidget::StaticClass, TEXT("UPlayerUserWidget"), &Z_Registration_Info_UClass_UPlayerUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerUserWidget), 2142700280U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerUserWidget_h_3811026590(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
