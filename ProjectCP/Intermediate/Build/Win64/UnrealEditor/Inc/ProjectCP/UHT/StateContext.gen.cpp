// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/StateMachine/StateContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateContext() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PROJECTCP_API UClass* Z_Construct_UClass_UStateContext();
PROJECTCP_API UClass* Z_Construct_UClass_UStateContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class UStateContext
void UStateContext::StaticRegisterNativesUStateContext()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateContext);
UClass* Z_Construct_UClass_UStateContext_NoRegister()
{
	return UStateContext::StaticClass();
}
struct Z_Construct_UClass_UStateContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StateMachine/StateContext.h" },
		{ "ModuleRelativePath", "Public/StateMachine/StateContext.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateContext>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStateContext_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateContext_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateContext_Statics::ClassParams = {
	&UStateContext::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateContext_Statics::Class_MetaDataParams), Z_Construct_UClass_UStateContext_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStateContext()
{
	if (!Z_Registration_Info_UClass_UStateContext.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateContext.OuterSingleton, Z_Construct_UClass_UStateContext_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStateContext.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UStateContext>()
{
	return UStateContext::StaticClass();
}
UStateContext::UStateContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStateContext);
UStateContext::~UStateContext() {}
// End Class UStateContext

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_StateContext_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStateContext, UStateContext::StaticClass, TEXT("UStateContext"), &Z_Registration_Info_UClass_UStateContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateContext), 210740328U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_StateContext_h_2145537769(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_StateContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_StateContext_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
