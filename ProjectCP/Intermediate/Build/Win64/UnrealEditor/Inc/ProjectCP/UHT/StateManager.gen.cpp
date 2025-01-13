// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/StateMachine/StateManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTCP_API UClass* Z_Construct_UClass_UBaseState_NoRegister();
PROJECTCP_API UClass* Z_Construct_UClass_UStateContext_NoRegister();
PROJECTCP_API UClass* Z_Construct_UClass_UStateManager();
PROJECTCP_API UClass* Z_Construct_UClass_UStateManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class UStateManager Function TransitionState
struct Z_Construct_UFunction_UStateManager_TransitionState_Statics
{
	struct StateManager_eventTransitionState_Parms
	{
		FString stateKey;
		AActor* owner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateMachine/StateManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_stateKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStateManager_TransitionState_Statics::NewProp_stateKey = { "stateKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateManager_eventTransitionState_Parms, stateKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStateManager_TransitionState_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateManager_eventTransitionState_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateManager_TransitionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateManager_TransitionState_Statics::NewProp_stateKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateManager_TransitionState_Statics::NewProp_owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateManager_TransitionState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateManager_TransitionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateManager, nullptr, "TransitionState", nullptr, nullptr, Z_Construct_UFunction_UStateManager_TransitionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateManager_TransitionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStateManager_TransitionState_Statics::StateManager_eventTransitionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateManager_TransitionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStateManager_TransitionState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStateManager_TransitionState_Statics::StateManager_eventTransitionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStateManager_TransitionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateManager_TransitionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStateManager::execTransitionState)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_stateKey);
	P_GET_OBJECT(AActor,Z_Param_owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TransitionState(Z_Param_stateKey,Z_Param_owner);
	P_NATIVE_END;
}
// End Class UStateManager Function TransitionState

// Begin Class UStateManager
void UStateManager::StaticRegisterNativesUStateManager()
{
	UClass* Class = UStateManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TransitionState", &UStateManager::execTransitionState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateManager);
UClass* Z_Construct_UClass_UStateManager_NoRegister()
{
	return UStateManager::StaticClass();
}
struct Z_Construct_UClass_UStateManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "StateMachine/StateManager.h" },
		{ "ModuleRelativePath", "Public/StateMachine/StateManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_allStates_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/StateMachine/StateManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_stateContext_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/StateMachine/StateManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mCreatedStates_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateMachine/StateManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_allStates_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_allStates_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_allStates;
	static const UECodeGen_Private::FClassPropertyParams NewProp_stateContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mCreatedStates_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_mCreatedStates_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_mCreatedStates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStateManager_TransitionState, "TransitionState" }, // 975623001
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UStateManager_Statics::NewProp_allStates_ValueProp = { "allStates", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStateManager_Statics::NewProp_allStates_Key_KeyProp = { "allStates_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UStateManager_Statics::NewProp_allStates = { "allStates", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateManager, allStates), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_allStates_MetaData), NewProp_allStates_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UStateManager_Statics::NewProp_stateContext = { "stateContext", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateManager, stateContext), Z_Construct_UClass_UClass, Z_Construct_UClass_UStateContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_stateContext_MetaData), NewProp_stateContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateManager_Statics::NewProp_mCreatedStates_ValueProp = { "mCreatedStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UBaseState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStateManager_Statics::NewProp_mCreatedStates_Key_KeyProp = { "mCreatedStates_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UStateManager_Statics::NewProp_mCreatedStates = { "mCreatedStates", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateManager, mCreatedStates), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mCreatedStates_MetaData), NewProp_mCreatedStates_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateManager_Statics::NewProp_allStates_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateManager_Statics::NewProp_allStates_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateManager_Statics::NewProp_allStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateManager_Statics::NewProp_stateContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateManager_Statics::NewProp_mCreatedStates_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateManager_Statics::NewProp_mCreatedStates_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateManager_Statics::NewProp_mCreatedStates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStateManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateManager_Statics::ClassParams = {
	&UStateManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStateManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStateManager_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UStateManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStateManager()
{
	if (!Z_Registration_Info_UClass_UStateManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateManager.OuterSingleton, Z_Construct_UClass_UStateManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStateManager.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UStateManager>()
{
	return UStateManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStateManager);
UStateManager::~UStateManager() {}
// End Class UStateManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_StateManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStateManager, UStateManager::StaticClass, TEXT("UStateManager"), &Z_Registration_Info_UClass_UStateManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateManager), 379684682U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_StateManager_h_697881967(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_StateManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_StateManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
