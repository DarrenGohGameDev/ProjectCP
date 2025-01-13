// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/StateMachine/StateMachineDelegateManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateMachineDelegateManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTCP_API UClass* Z_Construct_UClass_UStateMachineDelegateManager();
PROJECTCP_API UClass* Z_Construct_UClass_UStateMachineDelegateManager_NoRegister();
PROJECTCP_API UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnChangeState__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Delegate FOnChangeState
struct Z_Construct_UDelegateFunction_ProjectCP_OnChangeState__DelegateSignature_Statics
{
	struct _Script_ProjectCP_eventOnChangeState_Parms
	{
		FString stateKey;
		AActor* owner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateMachine/StateMachineDelegateManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_stateKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ProjectCP_OnChangeState__DelegateSignature_Statics::NewProp_stateKey = { "stateKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectCP_eventOnChangeState_Parms, stateKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectCP_OnChangeState__DelegateSignature_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectCP_eventOnChangeState_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectCP_OnChangeState__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectCP_OnChangeState__DelegateSignature_Statics::NewProp_stateKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectCP_OnChangeState__DelegateSignature_Statics::NewProp_owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnChangeState__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectCP_OnChangeState__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectCP, nullptr, "OnChangeState__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectCP_OnChangeState__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnChangeState__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectCP_OnChangeState__DelegateSignature_Statics::_Script_ProjectCP_eventOnChangeState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnChangeState__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectCP_OnChangeState__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectCP_OnChangeState__DelegateSignature_Statics::_Script_ProjectCP_eventOnChangeState_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnChangeState__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectCP_OnChangeState__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnChangeState_DelegateWrapper(const FMulticastScriptDelegate& OnChangeState, const FString& stateKey, AActor* owner)
{
	struct _Script_ProjectCP_eventOnChangeState_Parms
	{
		FString stateKey;
		AActor* owner;
	};
	_Script_ProjectCP_eventOnChangeState_Parms Parms;
	Parms.stateKey=stateKey;
	Parms.owner=owner;
	OnChangeState.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnChangeState

// Begin Class UStateMachineDelegateManager
void UStateMachineDelegateManager::StaticRegisterNativesUStateMachineDelegateManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateMachineDelegateManager);
UClass* Z_Construct_UClass_UStateMachineDelegateManager_NoRegister()
{
	return UStateMachineDelegateManager::StaticClass();
}
struct Z_Construct_UClass_UStateMachineDelegateManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StateMachine/StateMachineDelegateManager.h" },
		{ "ModuleRelativePath", "Public/StateMachine/StateMachineDelegateManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onChangeState_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/StateMachine/StateMachineDelegateManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onChangeState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateMachineDelegateManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStateMachineDelegateManager_Statics::NewProp_onChangeState = { "onChangeState", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateMachineDelegateManager, onChangeState), Z_Construct_UDelegateFunction_ProjectCP_OnChangeState__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onChangeState_MetaData), NewProp_onChangeState_MetaData) }; // 1196189738
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateMachineDelegateManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateMachineDelegateManager_Statics::NewProp_onChangeState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateMachineDelegateManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStateMachineDelegateManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateMachineDelegateManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateMachineDelegateManager_Statics::ClassParams = {
	&UStateMachineDelegateManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStateMachineDelegateManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStateMachineDelegateManager_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateMachineDelegateManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UStateMachineDelegateManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStateMachineDelegateManager()
{
	if (!Z_Registration_Info_UClass_UStateMachineDelegateManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateMachineDelegateManager.OuterSingleton, Z_Construct_UClass_UStateMachineDelegateManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStateMachineDelegateManager.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UStateMachineDelegateManager>()
{
	return UStateMachineDelegateManager::StaticClass();
}
UStateMachineDelegateManager::UStateMachineDelegateManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStateMachineDelegateManager);
UStateMachineDelegateManager::~UStateMachineDelegateManager() {}
// End Class UStateMachineDelegateManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_StateMachineDelegateManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStateMachineDelegateManager, UStateMachineDelegateManager::StaticClass, TEXT("UStateMachineDelegateManager"), &Z_Registration_Info_UClass_UStateMachineDelegateManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateMachineDelegateManager), 4110381479U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_StateMachineDelegateManager_h_2806603946(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_StateMachineDelegateManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_StateMachineDelegateManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS