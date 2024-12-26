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
ENGINE_API UClass* Z_Construct_UClass_AHUD();
PROJECTCP_API UClass* Z_Construct_UClass_APlayerHud();
PROJECTCP_API UClass* Z_Construct_UClass_APlayerHud_NoRegister();
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerHud>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_APlayerHud, APlayerHud::StaticClass, TEXT("APlayerHud"), &Z_Registration_Info_UClass_APlayerHud, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerHud), 4251455859U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerHud_h_2521015211(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerHud_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerHud_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
