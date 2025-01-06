// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/UI/EnemyHpBarWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyHpBarWidget() {}

// Begin Cross Module References
PROJECTCP_API UClass* Z_Construct_UClass_UEnemyHpBarWidget();
PROJECTCP_API UClass* Z_Construct_UClass_UEnemyHpBarWidget_NoRegister();
PROJECTCP_API UClass* Z_Construct_UClass_UHpBarWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class UEnemyHpBarWidget
void UEnemyHpBarWidget::StaticRegisterNativesUEnemyHpBarWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyHpBarWidget);
UClass* Z_Construct_UClass_UEnemyHpBarWidget_NoRegister()
{
	return UEnemyHpBarWidget::StaticClass();
}
struct Z_Construct_UClass_UEnemyHpBarWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "UI/EnemyHpBarWidget.h" },
		{ "ModuleRelativePath", "Public/UI/EnemyHpBarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mHealthBarWidget_MetaData[] = {
		{ "Category", "EnemyHpBarWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/EnemyHpBarWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mHealthBarWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyHpBarWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyHpBarWidget_Statics::NewProp_mHealthBarWidget = { "mHealthBarWidget", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyHpBarWidget, mHealthBarWidget), Z_Construct_UClass_UHpBarWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mHealthBarWidget_MetaData), NewProp_mHealthBarWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyHpBarWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyHpBarWidget_Statics::NewProp_mHealthBarWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyHpBarWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnemyHpBarWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyHpBarWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyHpBarWidget_Statics::ClassParams = {
	&UEnemyHpBarWidget::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnemyHpBarWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyHpBarWidget_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyHpBarWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyHpBarWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnemyHpBarWidget()
{
	if (!Z_Registration_Info_UClass_UEnemyHpBarWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyHpBarWidget.OuterSingleton, Z_Construct_UClass_UEnemyHpBarWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemyHpBarWidget.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UEnemyHpBarWidget>()
{
	return UEnemyHpBarWidget::StaticClass();
}
UEnemyHpBarWidget::UEnemyHpBarWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyHpBarWidget);
UEnemyHpBarWidget::~UEnemyHpBarWidget() {}
// End Class UEnemyHpBarWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_EnemyHpBarWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyHpBarWidget, UEnemyHpBarWidget::StaticClass, TEXT("UEnemyHpBarWidget"), &Z_Registration_Info_UClass_UEnemyHpBarWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyHpBarWidget), 2859902265U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_EnemyHpBarWidget_h_2647909610(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_EnemyHpBarWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_EnemyHpBarWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
