// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/UI/PlayerAmmoCounterWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAmmoCounterWidget() {}

// Begin Cross Module References
PROJECTCP_API UClass* Z_Construct_UClass_UPlayerAmmoCounterWidget();
PROJECTCP_API UClass* Z_Construct_UClass_UPlayerAmmoCounterWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class UPlayerAmmoCounterWidget Function SetAmmoText
struct Z_Construct_UFunction_UPlayerAmmoCounterWidget_SetAmmoText_Statics
{
	struct PlayerAmmoCounterWidget_eventSetAmmoText_Parms
	{
		int32 maxAmount;
		int32 currentAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PlayerAmmoCounterWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxAmount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_currentAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerAmmoCounterWidget_SetAmmoText_Statics::NewProp_maxAmount = { "maxAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAmmoCounterWidget_eventSetAmmoText_Parms, maxAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerAmmoCounterWidget_SetAmmoText_Statics::NewProp_currentAmount = { "currentAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAmmoCounterWidget_eventSetAmmoText_Parms, currentAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAmmoCounterWidget_SetAmmoText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAmmoCounterWidget_SetAmmoText_Statics::NewProp_maxAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAmmoCounterWidget_SetAmmoText_Statics::NewProp_currentAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAmmoCounterWidget_SetAmmoText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAmmoCounterWidget_SetAmmoText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAmmoCounterWidget, nullptr, "SetAmmoText", nullptr, nullptr, Z_Construct_UFunction_UPlayerAmmoCounterWidget_SetAmmoText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAmmoCounterWidget_SetAmmoText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerAmmoCounterWidget_SetAmmoText_Statics::PlayerAmmoCounterWidget_eventSetAmmoText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAmmoCounterWidget_SetAmmoText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAmmoCounterWidget_SetAmmoText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerAmmoCounterWidget_SetAmmoText_Statics::PlayerAmmoCounterWidget_eventSetAmmoText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerAmmoCounterWidget_SetAmmoText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAmmoCounterWidget_SetAmmoText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAmmoCounterWidget::execSetAmmoText)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_maxAmount);
	P_GET_PROPERTY(FIntProperty,Z_Param_currentAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAmmoText(Z_Param_maxAmount,Z_Param_currentAmount);
	P_NATIVE_END;
}
// End Class UPlayerAmmoCounterWidget Function SetAmmoText

// Begin Class UPlayerAmmoCounterWidget Function ToggleThisWidget
struct Z_Construct_UFunction_UPlayerAmmoCounterWidget_ToggleThisWidget_Statics
{
	struct PlayerAmmoCounterWidget_eventToggleThisWidget_Parms
	{
		bool toggle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PlayerAmmoCounterWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_toggle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_toggle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPlayerAmmoCounterWidget_ToggleThisWidget_Statics::NewProp_toggle_SetBit(void* Obj)
{
	((PlayerAmmoCounterWidget_eventToggleThisWidget_Parms*)Obj)->toggle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerAmmoCounterWidget_ToggleThisWidget_Statics::NewProp_toggle = { "toggle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerAmmoCounterWidget_eventToggleThisWidget_Parms), &Z_Construct_UFunction_UPlayerAmmoCounterWidget_ToggleThisWidget_Statics::NewProp_toggle_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAmmoCounterWidget_ToggleThisWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAmmoCounterWidget_ToggleThisWidget_Statics::NewProp_toggle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAmmoCounterWidget_ToggleThisWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAmmoCounterWidget_ToggleThisWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAmmoCounterWidget, nullptr, "ToggleThisWidget", nullptr, nullptr, Z_Construct_UFunction_UPlayerAmmoCounterWidget_ToggleThisWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAmmoCounterWidget_ToggleThisWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerAmmoCounterWidget_ToggleThisWidget_Statics::PlayerAmmoCounterWidget_eventToggleThisWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAmmoCounterWidget_ToggleThisWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAmmoCounterWidget_ToggleThisWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerAmmoCounterWidget_ToggleThisWidget_Statics::PlayerAmmoCounterWidget_eventToggleThisWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerAmmoCounterWidget_ToggleThisWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAmmoCounterWidget_ToggleThisWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAmmoCounterWidget::execToggleThisWidget)
{
	P_GET_UBOOL(Z_Param_toggle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleThisWidget(Z_Param_toggle);
	P_NATIVE_END;
}
// End Class UPlayerAmmoCounterWidget Function ToggleThisWidget

// Begin Class UPlayerAmmoCounterWidget
void UPlayerAmmoCounterWidget::StaticRegisterNativesUPlayerAmmoCounterWidget()
{
	UClass* Class = UPlayerAmmoCounterWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetAmmoText", &UPlayerAmmoCounterWidget::execSetAmmoText },
		{ "ToggleThisWidget", &UPlayerAmmoCounterWidget::execToggleThisWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerAmmoCounterWidget);
UClass* Z_Construct_UClass_UPlayerAmmoCounterWidget_NoRegister()
{
	return UPlayerAmmoCounterWidget::StaticClass();
}
struct Z_Construct_UClass_UPlayerAmmoCounterWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/PlayerAmmoCounterWidget.h" },
		{ "ModuleRelativePath", "Public/UI/PlayerAmmoCounterWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mMaxAmmoText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerAmmoCounterWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mCurrentAmmoText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerAmmoCounterWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mMaxAmmoText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mCurrentAmmoText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerAmmoCounterWidget_SetAmmoText, "SetAmmoText" }, // 1711621149
		{ &Z_Construct_UFunction_UPlayerAmmoCounterWidget_ToggleThisWidget, "ToggleThisWidget" }, // 14892788
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAmmoCounterWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAmmoCounterWidget_Statics::NewProp_mMaxAmmoText = { "mMaxAmmoText", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAmmoCounterWidget, mMaxAmmoText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mMaxAmmoText_MetaData), NewProp_mMaxAmmoText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAmmoCounterWidget_Statics::NewProp_mCurrentAmmoText = { "mCurrentAmmoText", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAmmoCounterWidget, mCurrentAmmoText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mCurrentAmmoText_MetaData), NewProp_mCurrentAmmoText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerAmmoCounterWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAmmoCounterWidget_Statics::NewProp_mMaxAmmoText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAmmoCounterWidget_Statics::NewProp_mCurrentAmmoText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAmmoCounterWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerAmmoCounterWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAmmoCounterWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAmmoCounterWidget_Statics::ClassParams = {
	&UPlayerAmmoCounterWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerAmmoCounterWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAmmoCounterWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAmmoCounterWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerAmmoCounterWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerAmmoCounterWidget()
{
	if (!Z_Registration_Info_UClass_UPlayerAmmoCounterWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerAmmoCounterWidget.OuterSingleton, Z_Construct_UClass_UPlayerAmmoCounterWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerAmmoCounterWidget.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UPlayerAmmoCounterWidget>()
{
	return UPlayerAmmoCounterWidget::StaticClass();
}
UPlayerAmmoCounterWidget::UPlayerAmmoCounterWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAmmoCounterWidget);
UPlayerAmmoCounterWidget::~UPlayerAmmoCounterWidget() {}
// End Class UPlayerAmmoCounterWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerAmmoCounterWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerAmmoCounterWidget, UPlayerAmmoCounterWidget::StaticClass, TEXT("UPlayerAmmoCounterWidget"), &Z_Registration_Info_UClass_UPlayerAmmoCounterWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerAmmoCounterWidget), 4148402796U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerAmmoCounterWidget_h_2056874226(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerAmmoCounterWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerAmmoCounterWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
