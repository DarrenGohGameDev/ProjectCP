// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/Character/BaseCharacterAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCharacterAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
PROJECTCP_API UClass* Z_Construct_UClass_UBaseCharacterAnimInstance();
PROJECTCP_API UClass* Z_Construct_UClass_UBaseCharacterAnimInstance_NoRegister();
PROJECTCP_API UEnum* Z_Construct_UEnum_ProjectCP_ECharacterEquipState();
PROJECTCP_API UEnum* Z_Construct_UEnum_ProjectCP_ELowerBodyAnimationState();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class UBaseCharacterAnimInstance Function OnUpdateCharacterEquipState
struct Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateCharacterEquipState_Statics
{
	struct BaseCharacterAnimInstance_eventOnUpdateCharacterEquipState_Parms
	{
		ECharacterEquipState equipState;
		AActor* equipOwner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/BaseCharacterAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_equipState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_equipState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_equipOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateCharacterEquipState_Statics::NewProp_equipState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateCharacterEquipState_Statics::NewProp_equipState = { "equipState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacterAnimInstance_eventOnUpdateCharacterEquipState_Parms, equipState), Z_Construct_UEnum_ProjectCP_ECharacterEquipState, METADATA_PARAMS(0, nullptr) }; // 3153584895
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateCharacterEquipState_Statics::NewProp_equipOwner = { "equipOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacterAnimInstance_eventOnUpdateCharacterEquipState_Parms, equipOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateCharacterEquipState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateCharacterEquipState_Statics::NewProp_equipState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateCharacterEquipState_Statics::NewProp_equipState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateCharacterEquipState_Statics::NewProp_equipOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateCharacterEquipState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateCharacterEquipState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseCharacterAnimInstance, nullptr, "OnUpdateCharacterEquipState", nullptr, nullptr, Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateCharacterEquipState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateCharacterEquipState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateCharacterEquipState_Statics::BaseCharacterAnimInstance_eventOnUpdateCharacterEquipState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateCharacterEquipState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateCharacterEquipState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateCharacterEquipState_Statics::BaseCharacterAnimInstance_eventOnUpdateCharacterEquipState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateCharacterEquipState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateCharacterEquipState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseCharacterAnimInstance::execOnUpdateCharacterEquipState)
{
	P_GET_ENUM(ECharacterEquipState,Z_Param_equipState);
	P_GET_OBJECT(AActor,Z_Param_equipOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnUpdateCharacterEquipState(ECharacterEquipState(Z_Param_equipState),Z_Param_equipOwner);
	P_NATIVE_END;
}
// End Class UBaseCharacterAnimInstance Function OnUpdateCharacterEquipState

// Begin Class UBaseCharacterAnimInstance Function OnUpdateLowerBodyAnimationState
struct Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateLowerBodyAnimationState_Statics
{
	struct BaseCharacterAnimInstance_eventOnUpdateLowerBodyAnimationState_Parms
	{
		ELowerBodyAnimationState lowerBodyState;
		AActor* lowerBodyOwner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/BaseCharacterAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_lowerBodyState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_lowerBodyState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_lowerBodyOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateLowerBodyAnimationState_Statics::NewProp_lowerBodyState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateLowerBodyAnimationState_Statics::NewProp_lowerBodyState = { "lowerBodyState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacterAnimInstance_eventOnUpdateLowerBodyAnimationState_Parms, lowerBodyState), Z_Construct_UEnum_ProjectCP_ELowerBodyAnimationState, METADATA_PARAMS(0, nullptr) }; // 2605313593
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateLowerBodyAnimationState_Statics::NewProp_lowerBodyOwner = { "lowerBodyOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacterAnimInstance_eventOnUpdateLowerBodyAnimationState_Parms, lowerBodyOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateLowerBodyAnimationState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateLowerBodyAnimationState_Statics::NewProp_lowerBodyState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateLowerBodyAnimationState_Statics::NewProp_lowerBodyState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateLowerBodyAnimationState_Statics::NewProp_lowerBodyOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateLowerBodyAnimationState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateLowerBodyAnimationState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseCharacterAnimInstance, nullptr, "OnUpdateLowerBodyAnimationState", nullptr, nullptr, Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateLowerBodyAnimationState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateLowerBodyAnimationState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateLowerBodyAnimationState_Statics::BaseCharacterAnimInstance_eventOnUpdateLowerBodyAnimationState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateLowerBodyAnimationState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateLowerBodyAnimationState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateLowerBodyAnimationState_Statics::BaseCharacterAnimInstance_eventOnUpdateLowerBodyAnimationState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateLowerBodyAnimationState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateLowerBodyAnimationState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseCharacterAnimInstance::execOnUpdateLowerBodyAnimationState)
{
	P_GET_ENUM(ELowerBodyAnimationState,Z_Param_lowerBodyState);
	P_GET_OBJECT(AActor,Z_Param_lowerBodyOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnUpdateLowerBodyAnimationState(ELowerBodyAnimationState(Z_Param_lowerBodyState),Z_Param_lowerBodyOwner);
	P_NATIVE_END;
}
// End Class UBaseCharacterAnimInstance Function OnUpdateLowerBodyAnimationState

// Begin Class UBaseCharacterAnimInstance
void UBaseCharacterAnimInstance::StaticRegisterNativesUBaseCharacterAnimInstance()
{
	UClass* Class = UBaseCharacterAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnUpdateCharacterEquipState", &UBaseCharacterAnimInstance::execOnUpdateCharacterEquipState },
		{ "OnUpdateLowerBodyAnimationState", &UBaseCharacterAnimInstance::execOnUpdateLowerBodyAnimationState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseCharacterAnimInstance);
UClass* Z_Construct_UClass_UBaseCharacterAnimInstance_NoRegister()
{
	return UBaseCharacterAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UBaseCharacterAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Character/BaseCharacterAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Character/BaseCharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentLowerBodyAnimationState_MetaData[] = {
		{ "Category", "BaseCharacterAnimInstance" },
		{ "ModuleRelativePath", "Public/Character/BaseCharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentCharacterEquipState_MetaData[] = {
		{ "Category", "BaseCharacterAnimInstance" },
		{ "ModuleRelativePath", "Public/Character/BaseCharacterAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_currentLowerBodyAnimationState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_currentLowerBodyAnimationState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_currentCharacterEquipState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_currentCharacterEquipState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateCharacterEquipState, "OnUpdateCharacterEquipState" }, // 4048953558
		{ &Z_Construct_UFunction_UBaseCharacterAnimInstance_OnUpdateLowerBodyAnimationState, "OnUpdateLowerBodyAnimationState" }, // 3772306223
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseCharacterAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBaseCharacterAnimInstance_Statics::NewProp_currentLowerBodyAnimationState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBaseCharacterAnimInstance_Statics::NewProp_currentLowerBodyAnimationState = { "currentLowerBodyAnimationState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCharacterAnimInstance, currentLowerBodyAnimationState), Z_Construct_UEnum_ProjectCP_ELowerBodyAnimationState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentLowerBodyAnimationState_MetaData), NewProp_currentLowerBodyAnimationState_MetaData) }; // 2605313593
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBaseCharacterAnimInstance_Statics::NewProp_currentCharacterEquipState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBaseCharacterAnimInstance_Statics::NewProp_currentCharacterEquipState = { "currentCharacterEquipState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCharacterAnimInstance, currentCharacterEquipState), Z_Construct_UEnum_ProjectCP_ECharacterEquipState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentCharacterEquipState_MetaData), NewProp_currentCharacterEquipState_MetaData) }; // 3153584895
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseCharacterAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterAnimInstance_Statics::NewProp_currentLowerBodyAnimationState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterAnimInstance_Statics::NewProp_currentLowerBodyAnimationState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterAnimInstance_Statics::NewProp_currentCharacterEquipState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterAnimInstance_Statics::NewProp_currentCharacterEquipState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseCharacterAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseCharacterAnimInstance_Statics::ClassParams = {
	&UBaseCharacterAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBaseCharacterAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseCharacterAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseCharacterAnimInstance()
{
	if (!Z_Registration_Info_UClass_UBaseCharacterAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseCharacterAnimInstance.OuterSingleton, Z_Construct_UClass_UBaseCharacterAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseCharacterAnimInstance.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UBaseCharacterAnimInstance>()
{
	return UBaseCharacterAnimInstance::StaticClass();
}
UBaseCharacterAnimInstance::UBaseCharacterAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseCharacterAnimInstance);
UBaseCharacterAnimInstance::~UBaseCharacterAnimInstance() {}
// End Class UBaseCharacterAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Character_BaseCharacterAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseCharacterAnimInstance, UBaseCharacterAnimInstance::StaticClass, TEXT("UBaseCharacterAnimInstance"), &Z_Registration_Info_UClass_UBaseCharacterAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseCharacterAnimInstance), 2991783430U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Character_BaseCharacterAnimInstance_h_3107058718(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Character_BaseCharacterAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Character_BaseCharacterAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
