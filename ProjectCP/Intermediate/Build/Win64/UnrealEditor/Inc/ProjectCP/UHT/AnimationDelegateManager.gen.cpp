// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/Managers/AnimationDelegateManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationDelegateManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTCP_API UClass* Z_Construct_UClass_UAnimationDelegateManager();
PROJECTCP_API UClass* Z_Construct_UClass_UAnimationDelegateManager_NoRegister();
PROJECTCP_API UEnum* Z_Construct_UEnum_ProjectCP_ECharacterEquipState();
PROJECTCP_API UEnum* Z_Construct_UEnum_ProjectCP_ELowerBodyAnimationState();
PROJECTCP_API UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnEquipChange__DelegateSignature();
PROJECTCP_API UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnLowerBodyChange__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Delegate FOnLowerBodyChange
struct Z_Construct_UDelegateFunction_ProjectCP_OnLowerBodyChange__DelegateSignature_Statics
{
	struct _Script_ProjectCP_eventOnLowerBodyChange_Parms
	{
		ELowerBodyAnimationState lowerBodyState;
		AActor* lowerBodyOwner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Managers/AnimationDelegateManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_lowerBodyState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_lowerBodyState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_lowerBodyOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ProjectCP_OnLowerBodyChange__DelegateSignature_Statics::NewProp_lowerBodyState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ProjectCP_OnLowerBodyChange__DelegateSignature_Statics::NewProp_lowerBodyState = { "lowerBodyState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectCP_eventOnLowerBodyChange_Parms, lowerBodyState), Z_Construct_UEnum_ProjectCP_ELowerBodyAnimationState, METADATA_PARAMS(0, nullptr) }; // 2605313593
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectCP_OnLowerBodyChange__DelegateSignature_Statics::NewProp_lowerBodyOwner = { "lowerBodyOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectCP_eventOnLowerBodyChange_Parms, lowerBodyOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectCP_OnLowerBodyChange__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectCP_OnLowerBodyChange__DelegateSignature_Statics::NewProp_lowerBodyState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectCP_OnLowerBodyChange__DelegateSignature_Statics::NewProp_lowerBodyState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectCP_OnLowerBodyChange__DelegateSignature_Statics::NewProp_lowerBodyOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnLowerBodyChange__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectCP_OnLowerBodyChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectCP, nullptr, "OnLowerBodyChange__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectCP_OnLowerBodyChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnLowerBodyChange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectCP_OnLowerBodyChange__DelegateSignature_Statics::_Script_ProjectCP_eventOnLowerBodyChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnLowerBodyChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectCP_OnLowerBodyChange__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectCP_OnLowerBodyChange__DelegateSignature_Statics::_Script_ProjectCP_eventOnLowerBodyChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnLowerBodyChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectCP_OnLowerBodyChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLowerBodyChange_DelegateWrapper(const FMulticastScriptDelegate& OnLowerBodyChange, ELowerBodyAnimationState lowerBodyState, AActor* lowerBodyOwner)
{
	struct _Script_ProjectCP_eventOnLowerBodyChange_Parms
	{
		ELowerBodyAnimationState lowerBodyState;
		AActor* lowerBodyOwner;
	};
	_Script_ProjectCP_eventOnLowerBodyChange_Parms Parms;
	Parms.lowerBodyState=lowerBodyState;
	Parms.lowerBodyOwner=lowerBodyOwner;
	OnLowerBodyChange.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLowerBodyChange

// Begin Delegate FOnEquipChange
struct Z_Construct_UDelegateFunction_ProjectCP_OnEquipChange__DelegateSignature_Statics
{
	struct _Script_ProjectCP_eventOnEquipChange_Parms
	{
		ECharacterEquipState equipState;
		AActor* equipOwner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Managers/AnimationDelegateManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_equipState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_equipState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_equipOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ProjectCP_OnEquipChange__DelegateSignature_Statics::NewProp_equipState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ProjectCP_OnEquipChange__DelegateSignature_Statics::NewProp_equipState = { "equipState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectCP_eventOnEquipChange_Parms, equipState), Z_Construct_UEnum_ProjectCP_ECharacterEquipState, METADATA_PARAMS(0, nullptr) }; // 3153584895
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectCP_OnEquipChange__DelegateSignature_Statics::NewProp_equipOwner = { "equipOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectCP_eventOnEquipChange_Parms, equipOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectCP_OnEquipChange__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectCP_OnEquipChange__DelegateSignature_Statics::NewProp_equipState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectCP_OnEquipChange__DelegateSignature_Statics::NewProp_equipState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectCP_OnEquipChange__DelegateSignature_Statics::NewProp_equipOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnEquipChange__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectCP_OnEquipChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectCP, nullptr, "OnEquipChange__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectCP_OnEquipChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnEquipChange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectCP_OnEquipChange__DelegateSignature_Statics::_Script_ProjectCP_eventOnEquipChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnEquipChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectCP_OnEquipChange__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectCP_OnEquipChange__DelegateSignature_Statics::_Script_ProjectCP_eventOnEquipChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnEquipChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectCP_OnEquipChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEquipChange_DelegateWrapper(const FMulticastScriptDelegate& OnEquipChange, ECharacterEquipState equipState, AActor* equipOwner)
{
	struct _Script_ProjectCP_eventOnEquipChange_Parms
	{
		ECharacterEquipState equipState;
		AActor* equipOwner;
	};
	_Script_ProjectCP_eventOnEquipChange_Parms Parms;
	Parms.equipState=equipState;
	Parms.equipOwner=equipOwner;
	OnEquipChange.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnEquipChange

// Begin Class UAnimationDelegateManager
void UAnimationDelegateManager::StaticRegisterNativesUAnimationDelegateManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationDelegateManager);
UClass* Z_Construct_UClass_UAnimationDelegateManager_NoRegister()
{
	return UAnimationDelegateManager::StaticClass();
}
struct Z_Construct_UClass_UAnimationDelegateManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Managers/AnimationDelegateManager.h" },
		{ "ModuleRelativePath", "Public/Managers/AnimationDelegateManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onLowerBodyChange_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Managers/AnimationDelegateManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onEquipChange_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Managers/AnimationDelegateManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onLowerBodyChange;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onEquipChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationDelegateManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAnimationDelegateManager_Statics::NewProp_onLowerBodyChange = { "onLowerBodyChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationDelegateManager, onLowerBodyChange), Z_Construct_UDelegateFunction_ProjectCP_OnLowerBodyChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onLowerBodyChange_MetaData), NewProp_onLowerBodyChange_MetaData) }; // 2292884605
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAnimationDelegateManager_Statics::NewProp_onEquipChange = { "onEquipChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationDelegateManager, onEquipChange), Z_Construct_UDelegateFunction_ProjectCP_OnEquipChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onEquipChange_MetaData), NewProp_onEquipChange_MetaData) }; // 1724869741
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationDelegateManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationDelegateManager_Statics::NewProp_onLowerBodyChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationDelegateManager_Statics::NewProp_onEquipChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationDelegateManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimationDelegateManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationDelegateManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationDelegateManager_Statics::ClassParams = {
	&UAnimationDelegateManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimationDelegateManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationDelegateManager_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationDelegateManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimationDelegateManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimationDelegateManager()
{
	if (!Z_Registration_Info_UClass_UAnimationDelegateManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationDelegateManager.OuterSingleton, Z_Construct_UClass_UAnimationDelegateManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimationDelegateManager.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UAnimationDelegateManager>()
{
	return UAnimationDelegateManager::StaticClass();
}
UAnimationDelegateManager::UAnimationDelegateManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationDelegateManager);
UAnimationDelegateManager::~UAnimationDelegateManager() {}
// End Class UAnimationDelegateManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_AnimationDelegateManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationDelegateManager, UAnimationDelegateManager::StaticClass, TEXT("UAnimationDelegateManager"), &Z_Registration_Info_UClass_UAnimationDelegateManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationDelegateManager), 1998429605U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_AnimationDelegateManager_h_742278218(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_AnimationDelegateManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_AnimationDelegateManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
