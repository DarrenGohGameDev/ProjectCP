// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/Interface/PickUpInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickUpInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
PROJECTCP_API UClass* Z_Construct_UClass_UPickUpInterface();
PROJECTCP_API UClass* Z_Construct_UClass_UPickUpInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Interface UPickUpInterface
void UPickUpInterface::StaticRegisterNativesUPickUpInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPickUpInterface);
UClass* Z_Construct_UClass_UPickUpInterface_NoRegister()
{
	return UPickUpInterface::StaticClass();
}
struct Z_Construct_UClass_UPickUpInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/PickUpInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPickUpInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPickUpInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPickUpInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPickUpInterface_Statics::ClassParams = {
	&UPickUpInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPickUpInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPickUpInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPickUpInterface()
{
	if (!Z_Registration_Info_UClass_UPickUpInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPickUpInterface.OuterSingleton, Z_Construct_UClass_UPickUpInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPickUpInterface.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UPickUpInterface>()
{
	return UPickUpInterface::StaticClass();
}
UPickUpInterface::UPickUpInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPickUpInterface);
UPickUpInterface::~UPickUpInterface() {}
// End Interface UPickUpInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_PickUpInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPickUpInterface, UPickUpInterface::StaticClass, TEXT("UPickUpInterface"), &Z_Registration_Info_UClass_UPickUpInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPickUpInterface), 1976254072U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_PickUpInterface_h_2402405260(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_PickUpInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_PickUpInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
