// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/StateMachine/States/Player/PlayerStateContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStateContext() {}

// Begin Cross Module References
PROJECTCP_API UClass* Z_Construct_UClass_UPlayerStateContext();
PROJECTCP_API UClass* Z_Construct_UClass_UPlayerStateContext_NoRegister();
PROJECTCP_API UClass* Z_Construct_UClass_UStateContext();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class UPlayerStateContext
void UPlayerStateContext::StaticRegisterNativesUPlayerStateContext()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerStateContext);
UClass* Z_Construct_UClass_UPlayerStateContext_NoRegister()
{
	return UPlayerStateContext::StaticClass();
}
struct Z_Construct_UClass_UPlayerStateContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StateMachine/States/Player/PlayerStateContext.h" },
		{ "ModuleRelativePath", "Public/StateMachine/States/Player/PlayerStateContext.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerStateContext>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayerStateContext_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStateContext,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStateContext_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerStateContext_Statics::ClassParams = {
	&UPlayerStateContext::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStateContext_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerStateContext_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerStateContext()
{
	if (!Z_Registration_Info_UClass_UPlayerStateContext.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerStateContext.OuterSingleton, Z_Construct_UClass_UPlayerStateContext_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerStateContext.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UPlayerStateContext>()
{
	return UPlayerStateContext::StaticClass();
}
UPlayerStateContext::UPlayerStateContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerStateContext);
UPlayerStateContext::~UPlayerStateContext() {}
// End Class UPlayerStateContext

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_States_Player_PlayerStateContext_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerStateContext, UPlayerStateContext::StaticClass, TEXT("UPlayerStateContext"), &Z_Registration_Info_UClass_UPlayerStateContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerStateContext), 1290815039U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_States_Player_PlayerStateContext_h_3007732518(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_States_Player_PlayerStateContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_States_Player_PlayerStateContext_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS