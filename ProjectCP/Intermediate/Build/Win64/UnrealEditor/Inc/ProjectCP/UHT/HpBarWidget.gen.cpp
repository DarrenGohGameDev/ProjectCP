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
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTCP_API UClass* Z_Construct_UClass_UHpBarWidget();
PROJECTCP_API UClass* Z_Construct_UClass_UHpBarWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class UHpBarWidget Function SetHpBarPercent
struct Z_Construct_UFunction_UHpBarWidget_SetHpBarPercent_Statics
{
	struct HpBarWidget_eventSetHpBarPercent_Parms
	{
		float remainingPercent;
		AActor* hpBarOwner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/HpBarWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_remainingPercent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_hpBarOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHpBarWidget_SetHpBarPercent_Statics::NewProp_remainingPercent = { "remainingPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HpBarWidget_eventSetHpBarPercent_Parms, remainingPercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHpBarWidget_SetHpBarPercent_Statics::NewProp_hpBarOwner = { "hpBarOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HpBarWidget_eventSetHpBarPercent_Parms, hpBarOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHpBarWidget_SetHpBarPercent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHpBarWidget_SetHpBarPercent_Statics::NewProp_remainingPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHpBarWidget_SetHpBarPercent_Statics::NewProp_hpBarOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHpBarWidget_SetHpBarPercent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHpBarWidget_SetHpBarPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHpBarWidget, nullptr, "SetHpBarPercent", nullptr, nullptr, Z_Construct_UFunction_UHpBarWidget_SetHpBarPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHpBarWidget_SetHpBarPercent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHpBarWidget_SetHpBarPercent_Statics::HpBarWidget_eventSetHpBarPercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHpBarWidget_SetHpBarPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHpBarWidget_SetHpBarPercent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHpBarWidget_SetHpBarPercent_Statics::HpBarWidget_eventSetHpBarPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHpBarWidget_SetHpBarPercent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHpBarWidget_SetHpBarPercent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHpBarWidget::execSetHpBarPercent)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_remainingPercent);
	P_GET_OBJECT(AActor,Z_Param_hpBarOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHpBarPercent(Z_Param_remainingPercent,Z_Param_hpBarOwner);
	P_NATIVE_END;
}
// End Class UHpBarWidget Function SetHpBarPercent

// Begin Class UHpBarWidget
void UHpBarWidget::StaticRegisterNativesUHpBarWidget()
{
	UClass* Class = UHpBarWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetHpBarPercent", &UHpBarWidget::execSetHpBarPercent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHpBarWidget_SetHpBarPercent, "SetHpBarPercent" }, // 2994508597
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_UHpBarWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_UHpBarWidget, UHpBarWidget::StaticClass, TEXT("UHpBarWidget"), &Z_Registration_Info_UClass_UHpBarWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHpBarWidget), 2866944955U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_HpBarWidget_h_2214114993(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_HpBarWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_HpBarWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
