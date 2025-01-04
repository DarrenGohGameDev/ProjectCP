// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/UI/HpBarWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHpBarWidget() {}

// Begin Cross Module References
PROJECTCP_API UClass* Z_Construct_UClass_UHpBarWidget();
PROJECTCP_API UClass* Z_Construct_UClass_UHpBarWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class UHpBarWidget
void UHpBarWidget::StaticRegisterNativesUHpBarWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHpBarWidget);
UClass* Z_Construct_UClass_UHpBarWidget_NoRegister()
{
	return UHpBarWidget::StaticClass();
}
struct Z_Construct_UClass_UHpBarWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/HpBarWidget.h" },
		{ "ModuleRelativePath", "Public/UI/HpBarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hpBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/HpBarWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_hpBar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHpBarWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHpBarWidget_Statics::NewProp_hpBar = { "hpBar", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHpBarWidget, hpBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hpBar_MetaData), NewProp_hpBar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHpBarWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHpBarWidget_Statics::NewProp_hpBar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHpBarWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHpBarWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHpBarWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHpBarWidget_Statics::ClassParams = {
	&UHpBarWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHpBarWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHpBarWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHpBarWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UHpBarWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHpBarWidget()
{
	if (!Z_Registration_Info_UClass_UHpBarWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHpBarWidget.OuterSingleton, Z_Construct_UClass_UHpBarWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHpBarWidget.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UHpBarWidget>()
{
	return UHpBarWidget::StaticClass();
}
UHpBarWidget::UHpBarWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHpBarWidget);
UHpBarWidget::~UHpBarWidget() {}
// End Class UHpBarWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_HpBarWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHpBarWidget, UHpBarWidget::StaticClass, TEXT("UHpBarWidget"), &Z_Registration_Info_UClass_UHpBarWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHpBarWidget), 1724638866U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_HpBarWidget_h_518259971(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_HpBarWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_HpBarWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
