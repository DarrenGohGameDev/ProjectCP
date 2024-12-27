// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/UI/PlayerHud.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHud() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
PROJECTCP_API UClass* Z_Construct_UClass_APlayerHud();
PROJECTCP_API UClass* Z_Construct_UClass_APlayerHud_NoRegister();
PROJECTCP_API UClass* Z_Construct_UClass_UPlayerUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class APlayerHud
void APlayerHud::StaticRegisterNativesAPlayerHud()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerHud);
UClass* Z_Construct_UClass_APlayerHud_NoRegister()
{
	return APlayerHud::StaticClass();
}
struct Z_Construct_UClass_APlayerHud_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/PlayerHud.h" },
		{ "ModuleRelativePath", "Public/UI/PlayerHud.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mPlayerUserWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/PlayerHud.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mPlayerOverlay_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerHud.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_mPlayerUserWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mPlayerOverlay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerHud>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerHud_Statics::NewProp_mPlayerUserWidgetClass = { "mPlayerUserWidgetClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerHud, mPlayerUserWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPlayerUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mPlayerUserWidgetClass_MetaData), NewProp_mPlayerUserWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerHud_Statics::NewProp_mPlayerOverlay = { "mPlayerOverlay", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerHud, mPlayerOverlay), Z_Construct_UClass_UPlayerUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mPlayerOverlay_MetaData), NewProp_mPlayerOverlay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerHud_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHud_Statics::NewProp_mPlayerUserWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHud_Statics::NewProp_mPlayerOverlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerHud_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerHud_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerHud_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerHud_Statics::ClassParams = {
	&APlayerHud::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlayerHud_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerHud_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerHud_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerHud_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerHud()
{
	if (!Z_Registration_Info_UClass_APlayerHud.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerHud.OuterSingleton, Z_Construct_UClass_APlayerHud_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerHud.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<APlayerHud>()
{
	return APlayerHud::StaticClass();
}
APlayerHud::APlayerHud(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerHud);
APlayerHud::~APlayerHud() {}
// End Class APlayerHud

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerHud_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerHud, APlayerHud::StaticClass, TEXT("APlayerHud"), &Z_Registration_Info_UClass_APlayerHud, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerHud), 3781037059U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerHud_h_4029349319(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerHud_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerHud_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
