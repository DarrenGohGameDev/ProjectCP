// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/Managers/GameManagers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameManagers() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PROJECTCP_API UClass* Z_Construct_UClass_AGameManagers();
PROJECTCP_API UClass* Z_Construct_UClass_AGameManagers_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class AGameManagers
void AGameManagers::StaticRegisterNativesAGameManagers()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameManagers);
UClass* Z_Construct_UClass_AGameManagers_NoRegister()
{
	return AGameManagers::StaticClass();
}
struct Z_Construct_UClass_AGameManagers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Managers/GameManagers.h" },
		{ "ModuleRelativePath", "Public/Managers/GameManagers.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameManagers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGameManagers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameManagers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameManagers_Statics::ClassParams = {
	&AGameManagers::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameManagers_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameManagers_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameManagers()
{
	if (!Z_Registration_Info_UClass_AGameManagers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameManagers.OuterSingleton, Z_Construct_UClass_AGameManagers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameManagers.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<AGameManagers>()
{
	return AGameManagers::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameManagers);
AGameManagers::~AGameManagers() {}
// End Class AGameManagers

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_GameManagers_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameManagers, AGameManagers::StaticClass, TEXT("AGameManagers"), &Z_Registration_Info_UClass_AGameManagers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameManagers), 3423760355U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_GameManagers_h_846531292(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_GameManagers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_GameManagers_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
