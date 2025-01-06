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
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
PROJECTCP_API UClass* Z_Construct_UClass_ABullet_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mSpawningBullet_MetaData[] = {
		{ "Category", "Bullet" },
		{ "ModuleRelativePath", "Public/Managers/GameManagers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_mSpawningBullet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameManagers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameManagers_Statics::NewProp_mSpawningBullet = { "mSpawningBullet", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameManagers, mSpawningBullet), Z_Construct_UClass_UClass, Z_Construct_UClass_ABullet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mSpawningBullet_MetaData), NewProp_mSpawningBullet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameManagers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameManagers_Statics::NewProp_mSpawningBullet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameManagers_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_AGameManagers_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameManagers_Statics::PropPointers),
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
		{ Z_Construct_UClass_AGameManagers, AGameManagers::StaticClass, TEXT("AGameManagers"), &Z_Registration_Info_UClass_AGameManagers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameManagers), 1834067423U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_GameManagers_h_1573142894(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_GameManagers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_GameManagers_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
