// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/StateMachine/BaseState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseState() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PROJECTCP_API UClass* Z_Construct_UClass_UBaseState();
PROJECTCP_API UClass* Z_Construct_UClass_UBaseState_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class UBaseState
void UBaseState::StaticRegisterNativesUBaseState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseState);
UClass* Z_Construct_UClass_UBaseState_NoRegister()
{
	return UBaseState::StaticClass();
}
struct Z_Construct_UClass_UBaseState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StateMachine/BaseState.h" },
		{ "ModuleRelativePath", "Public/StateMachine/BaseState.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBaseState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseState_Statics::ClassParams = {
	&UBaseState::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseState_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseState()
{
	if (!Z_Registration_Info_UClass_UBaseState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseState.OuterSingleton, Z_Construct_UClass_UBaseState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseState.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UBaseState>()
{
	return UBaseState::StaticClass();
}
UBaseState::UBaseState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseState);
UBaseState::~UBaseState() {}
// End Class UBaseState

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_BaseState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseState, UBaseState::StaticClass, TEXT("UBaseState"), &Z_Registration_Info_UClass_UBaseState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseState), 3993745374U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_BaseState_h_3817782435(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_BaseState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_BaseState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
