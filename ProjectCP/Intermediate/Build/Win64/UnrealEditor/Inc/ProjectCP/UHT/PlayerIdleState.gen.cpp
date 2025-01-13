// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/StateMachine/States/Player/PlayerIdleState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerIdleState() {}

// Begin Cross Module References
PROJECTCP_API UClass* Z_Construct_UClass_UBaseState();
PROJECTCP_API UClass* Z_Construct_UClass_UPlayerIdleState();
PROJECTCP_API UClass* Z_Construct_UClass_UPlayerIdleState_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class UPlayerIdleState
void UPlayerIdleState::StaticRegisterNativesUPlayerIdleState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerIdleState);
UClass* Z_Construct_UClass_UPlayerIdleState_NoRegister()
{
	return UPlayerIdleState::StaticClass();
}
struct Z_Construct_UClass_UPlayerIdleState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StateMachine/States/Player/PlayerIdleState.h" },
		{ "ModuleRelativePath", "Public/StateMachine/States/Player/PlayerIdleState.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerIdleState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayerIdleState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseState,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerIdleState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerIdleState_Statics::ClassParams = {
	&UPlayerIdleState::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerIdleState_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerIdleState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerIdleState()
{
	if (!Z_Registration_Info_UClass_UPlayerIdleState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerIdleState.OuterSingleton, Z_Construct_UClass_UPlayerIdleState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerIdleState.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UPlayerIdleState>()
{
	return UPlayerIdleState::StaticClass();
}
UPlayerIdleState::UPlayerIdleState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerIdleState);
UPlayerIdleState::~UPlayerIdleState() {}
// End Class UPlayerIdleState

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_States_Player_PlayerIdleState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerIdleState, UPlayerIdleState::StaticClass, TEXT("UPlayerIdleState"), &Z_Registration_Info_UClass_UPlayerIdleState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerIdleState), 1375099202U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_States_Player_PlayerIdleState_h_1411423155(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_States_Player_PlayerIdleState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_States_Player_PlayerIdleState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
