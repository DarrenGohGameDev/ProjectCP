// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/UI/Button/LoadLevelButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadLevelButton() {}

// Begin Cross Module References
PROJECTCP_API UClass* Z_Construct_UClass_ULoadLevelButton();
PROJECTCP_API UClass* Z_Construct_UClass_ULoadLevelButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class ULoadLevelButton Function OpenLevel
struct Z_Construct_UFunction_ULoadLevelButton_OpenLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Button/LoadLevelButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadLevelButton_OpenLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadLevelButton, nullptr, "OpenLevel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadLevelButton_OpenLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoadLevelButton_OpenLevel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULoadLevelButton_OpenLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoadLevelButton_OpenLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULoadLevelButton::execOpenLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenLevel();
	P_NATIVE_END;
}
// End Class ULoadLevelButton Function OpenLevel

// Begin Class ULoadLevelButton
void ULoadLevelButton::StaticRegisterNativesULoadLevelButton()
{
	UClass* Class = ULoadLevelButton::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OpenLevel", &ULoadLevelButton::execOpenLevel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoadLevelButton);
UClass* Z_Construct_UClass_ULoadLevelButton_NoRegister()
{
	return ULoadLevelButton::StaticClass();
}
struct Z_Construct_UClass_ULoadLevelButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Button/LoadLevelButton.h" },
		{ "ModuleRelativePath", "Public/UI/Button/LoadLevelButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_levelName_MetaData[] = {
		{ "Category", "LevelName" },
		{ "ModuleRelativePath", "Public/UI/Button/LoadLevelButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mLoadLevelButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Button/LoadLevelButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_levelName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mLoadLevelButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoadLevelButton_OpenLevel, "OpenLevel" }, // 2136296579
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadLevelButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULoadLevelButton_Statics::NewProp_levelName = { "levelName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadLevelButton, levelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_levelName_MetaData), NewProp_levelName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadLevelButton_Statics::NewProp_mLoadLevelButton = { "mLoadLevelButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadLevelButton, mLoadLevelButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mLoadLevelButton_MetaData), NewProp_mLoadLevelButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoadLevelButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadLevelButton_Statics::NewProp_levelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadLevelButton_Statics::NewProp_mLoadLevelButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadLevelButton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULoadLevelButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadLevelButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoadLevelButton_Statics::ClassParams = {
	&ULoadLevelButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULoadLevelButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULoadLevelButton_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadLevelButton_Statics::Class_MetaDataParams), Z_Construct_UClass_ULoadLevelButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULoadLevelButton()
{
	if (!Z_Registration_Info_UClass_ULoadLevelButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoadLevelButton.OuterSingleton, Z_Construct_UClass_ULoadLevelButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULoadLevelButton.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<ULoadLevelButton>()
{
	return ULoadLevelButton::StaticClass();
}
ULoadLevelButton::ULoadLevelButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadLevelButton);
ULoadLevelButton::~ULoadLevelButton() {}
// End Class ULoadLevelButton

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_Button_LoadLevelButton_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULoadLevelButton, ULoadLevelButton::StaticClass, TEXT("ULoadLevelButton"), &Z_Registration_Info_UClass_ULoadLevelButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoadLevelButton), 3615332350U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_Button_LoadLevelButton_h_1668672084(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_Button_LoadLevelButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_Button_LoadLevelButton_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
