// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/Managers/InputDelegateManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputDelegateManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTCP_API UClass* Z_Construct_UClass_UInputDelegateManager();
PROJECTCP_API UClass* Z_Construct_UClass_UInputDelegateManager_NoRegister();
PROJECTCP_API UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnInputLook__DelegateSignature();
PROJECTCP_API UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnInputMove__DelegateSignature();
PROJECTCP_API UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnJumpInput__DelegateSignature();
PROJECTCP_API UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnPickUpItem__DelegateSignature();
PROJECTCP_API UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnReloadInput__DelegateSignature();
PROJECTCP_API UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnShootInput__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Delegate FOnShootInput
struct Z_Construct_UDelegateFunction_ProjectCP_OnShootInput__DelegateSignature_Statics
{
	struct _Script_ProjectCP_eventOnShootInput_Parms
	{
		AActor* owner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Managers/InputDelegateManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectCP_OnShootInput__DelegateSignature_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectCP_eventOnShootInput_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectCP_OnShootInput__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectCP_OnShootInput__DelegateSignature_Statics::NewProp_owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnShootInput__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectCP_OnShootInput__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectCP, nullptr, "OnShootInput__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectCP_OnShootInput__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnShootInput__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectCP_OnShootInput__DelegateSignature_Statics::_Script_ProjectCP_eventOnShootInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnShootInput__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectCP_OnShootInput__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectCP_OnShootInput__DelegateSignature_Statics::_Script_ProjectCP_eventOnShootInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnShootInput__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectCP_OnShootInput__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnShootInput_DelegateWrapper(const FMulticastScriptDelegate& OnShootInput, AActor* owner)
{
	struct _Script_ProjectCP_eventOnShootInput_Parms
	{
		AActor* owner;
	};
	_Script_ProjectCP_eventOnShootInput_Parms Parms;
	Parms.owner=owner;
	OnShootInput.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnShootInput

// Begin Delegate FOnJumpInput
struct Z_Construct_UDelegateFunction_ProjectCP_OnJumpInput__DelegateSignature_Statics
{
	struct _Script_ProjectCP_eventOnJumpInput_Parms
	{
		AActor* owner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Managers/InputDelegateManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectCP_OnJumpInput__DelegateSignature_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectCP_eventOnJumpInput_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectCP_OnJumpInput__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectCP_OnJumpInput__DelegateSignature_Statics::NewProp_owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnJumpInput__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectCP_OnJumpInput__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectCP, nullptr, "OnJumpInput__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectCP_OnJumpInput__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnJumpInput__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectCP_OnJumpInput__DelegateSignature_Statics::_Script_ProjectCP_eventOnJumpInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnJumpInput__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectCP_OnJumpInput__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectCP_OnJumpInput__DelegateSignature_Statics::_Script_ProjectCP_eventOnJumpInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnJumpInput__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectCP_OnJumpInput__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnJumpInput_DelegateWrapper(const FMulticastScriptDelegate& OnJumpInput, AActor* owner)
{
	struct _Script_ProjectCP_eventOnJumpInput_Parms
	{
		AActor* owner;
	};
	_Script_ProjectCP_eventOnJumpInput_Parms Parms;
	Parms.owner=owner;
	OnJumpInput.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnJumpInput

// Begin Delegate FOnInputMove
struct Z_Construct_UDelegateFunction_ProjectCP_OnInputMove__DelegateSignature_Statics
{
	struct _Script_ProjectCP_eventOnInputMove_Parms
	{
		FVector2D input;
		AActor* owner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Managers/InputDelegateManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_input;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProjectCP_OnInputMove__DelegateSignature_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectCP_eventOnInputMove_Parms, input), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectCP_OnInputMove__DelegateSignature_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectCP_eventOnInputMove_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectCP_OnInputMove__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectCP_OnInputMove__DelegateSignature_Statics::NewProp_input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectCP_OnInputMove__DelegateSignature_Statics::NewProp_owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnInputMove__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectCP_OnInputMove__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectCP, nullptr, "OnInputMove__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectCP_OnInputMove__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnInputMove__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectCP_OnInputMove__DelegateSignature_Statics::_Script_ProjectCP_eventOnInputMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnInputMove__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectCP_OnInputMove__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectCP_OnInputMove__DelegateSignature_Statics::_Script_ProjectCP_eventOnInputMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnInputMove__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectCP_OnInputMove__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInputMove_DelegateWrapper(const FMulticastScriptDelegate& OnInputMove, FVector2D input, AActor* owner)
{
	struct _Script_ProjectCP_eventOnInputMove_Parms
	{
		FVector2D input;
		AActor* owner;
	};
	_Script_ProjectCP_eventOnInputMove_Parms Parms;
	Parms.input=input;
	Parms.owner=owner;
	OnInputMove.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnInputMove

// Begin Delegate FOnInputLook
struct Z_Construct_UDelegateFunction_ProjectCP_OnInputLook__DelegateSignature_Statics
{
	struct _Script_ProjectCP_eventOnInputLook_Parms
	{
		FVector2D input;
		AActor* owner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Managers/InputDelegateManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_input;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProjectCP_OnInputLook__DelegateSignature_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectCP_eventOnInputLook_Parms, input), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectCP_OnInputLook__DelegateSignature_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectCP_eventOnInputLook_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectCP_OnInputLook__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectCP_OnInputLook__DelegateSignature_Statics::NewProp_input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectCP_OnInputLook__DelegateSignature_Statics::NewProp_owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnInputLook__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectCP_OnInputLook__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectCP, nullptr, "OnInputLook__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectCP_OnInputLook__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnInputLook__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectCP_OnInputLook__DelegateSignature_Statics::_Script_ProjectCP_eventOnInputLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnInputLook__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectCP_OnInputLook__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectCP_OnInputLook__DelegateSignature_Statics::_Script_ProjectCP_eventOnInputLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnInputLook__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectCP_OnInputLook__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInputLook_DelegateWrapper(const FMulticastScriptDelegate& OnInputLook, FVector2D input, AActor* owner)
{
	struct _Script_ProjectCP_eventOnInputLook_Parms
	{
		FVector2D input;
		AActor* owner;
	};
	_Script_ProjectCP_eventOnInputLook_Parms Parms;
	Parms.input=input;
	Parms.owner=owner;
	OnInputLook.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnInputLook

// Begin Delegate FOnReloadInput
struct Z_Construct_UDelegateFunction_ProjectCP_OnReloadInput__DelegateSignature_Statics
{
	struct _Script_ProjectCP_eventOnReloadInput_Parms
	{
		AActor* owner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Managers/InputDelegateManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectCP_OnReloadInput__DelegateSignature_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectCP_eventOnReloadInput_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectCP_OnReloadInput__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectCP_OnReloadInput__DelegateSignature_Statics::NewProp_owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnReloadInput__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectCP_OnReloadInput__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectCP, nullptr, "OnReloadInput__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectCP_OnReloadInput__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnReloadInput__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectCP_OnReloadInput__DelegateSignature_Statics::_Script_ProjectCP_eventOnReloadInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnReloadInput__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectCP_OnReloadInput__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectCP_OnReloadInput__DelegateSignature_Statics::_Script_ProjectCP_eventOnReloadInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnReloadInput__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectCP_OnReloadInput__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnReloadInput_DelegateWrapper(const FMulticastScriptDelegate& OnReloadInput, AActor* owner)
{
	struct _Script_ProjectCP_eventOnReloadInput_Parms
	{
		AActor* owner;
	};
	_Script_ProjectCP_eventOnReloadInput_Parms Parms;
	Parms.owner=owner;
	OnReloadInput.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnReloadInput

// Begin Delegate FOnPickUpItem
struct Z_Construct_UDelegateFunction_ProjectCP_OnPickUpItem__DelegateSignature_Statics
{
	struct _Script_ProjectCP_eventOnPickUpItem_Parms
	{
		AActor* owner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Managers/InputDelegateManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectCP_OnPickUpItem__DelegateSignature_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectCP_eventOnPickUpItem_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectCP_OnPickUpItem__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectCP_OnPickUpItem__DelegateSignature_Statics::NewProp_owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnPickUpItem__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectCP_OnPickUpItem__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectCP, nullptr, "OnPickUpItem__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectCP_OnPickUpItem__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnPickUpItem__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectCP_OnPickUpItem__DelegateSignature_Statics::_Script_ProjectCP_eventOnPickUpItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnPickUpItem__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectCP_OnPickUpItem__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectCP_OnPickUpItem__DelegateSignature_Statics::_Script_ProjectCP_eventOnPickUpItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnPickUpItem__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectCP_OnPickUpItem__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPickUpItem_DelegateWrapper(const FMulticastScriptDelegate& OnPickUpItem, AActor* owner)
{
	struct _Script_ProjectCP_eventOnPickUpItem_Parms
	{
		AActor* owner;
	};
	_Script_ProjectCP_eventOnPickUpItem_Parms Parms;
	Parms.owner=owner;
	OnPickUpItem.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPickUpItem

// Begin Class UInputDelegateManager
void UInputDelegateManager::StaticRegisterNativesUInputDelegateManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputDelegateManager);
UClass* Z_Construct_UClass_UInputDelegateManager_NoRegister()
{
	return UInputDelegateManager::StaticClass();
}
struct Z_Construct_UClass_UInputDelegateManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Managers/InputDelegateManager.h" },
		{ "ModuleRelativePath", "Public/Managers/InputDelegateManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onShootInput_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Managers/InputDelegateManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onJumpInput_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Managers/InputDelegateManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onInputMove_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Managers/InputDelegateManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onInputLook_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Managers/InputDelegateManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onReloadInput_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Managers/InputDelegateManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onPickUpItem_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Managers/InputDelegateManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onShootInput;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onJumpInput;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onInputMove;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onInputLook;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onReloadInput;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onPickUpItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputDelegateManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInputDelegateManager_Statics::NewProp_onShootInput = { "onShootInput", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputDelegateManager, onShootInput), Z_Construct_UDelegateFunction_ProjectCP_OnShootInput__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onShootInput_MetaData), NewProp_onShootInput_MetaData) }; // 3584375905
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInputDelegateManager_Statics::NewProp_onJumpInput = { "onJumpInput", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputDelegateManager, onJumpInput), Z_Construct_UDelegateFunction_ProjectCP_OnJumpInput__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onJumpInput_MetaData), NewProp_onJumpInput_MetaData) }; // 481185803
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInputDelegateManager_Statics::NewProp_onInputMove = { "onInputMove", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputDelegateManager, onInputMove), Z_Construct_UDelegateFunction_ProjectCP_OnInputMove__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onInputMove_MetaData), NewProp_onInputMove_MetaData) }; // 2348885495
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInputDelegateManager_Statics::NewProp_onInputLook = { "onInputLook", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputDelegateManager, onInputLook), Z_Construct_UDelegateFunction_ProjectCP_OnInputLook__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onInputLook_MetaData), NewProp_onInputLook_MetaData) }; // 3580150878
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInputDelegateManager_Statics::NewProp_onReloadInput = { "onReloadInput", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputDelegateManager, onReloadInput), Z_Construct_UDelegateFunction_ProjectCP_OnReloadInput__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onReloadInput_MetaData), NewProp_onReloadInput_MetaData) }; // 3338385202
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInputDelegateManager_Statics::NewProp_onPickUpItem = { "onPickUpItem", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputDelegateManager, onPickUpItem), Z_Construct_UDelegateFunction_ProjectCP_OnPickUpItem__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onPickUpItem_MetaData), NewProp_onPickUpItem_MetaData) }; // 726398148
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputDelegateManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDelegateManager_Statics::NewProp_onShootInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDelegateManager_Statics::NewProp_onJumpInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDelegateManager_Statics::NewProp_onInputMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDelegateManager_Statics::NewProp_onInputLook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDelegateManager_Statics::NewProp_onReloadInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDelegateManager_Statics::NewProp_onPickUpItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDelegateManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputDelegateManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDelegateManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputDelegateManager_Statics::ClassParams = {
	&UInputDelegateManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputDelegateManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputDelegateManager_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDelegateManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputDelegateManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputDelegateManager()
{
	if (!Z_Registration_Info_UClass_UInputDelegateManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputDelegateManager.OuterSingleton, Z_Construct_UClass_UInputDelegateManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputDelegateManager.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UInputDelegateManager>()
{
	return UInputDelegateManager::StaticClass();
}
UInputDelegateManager::UInputDelegateManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputDelegateManager);
UInputDelegateManager::~UInputDelegateManager() {}
// End Class UInputDelegateManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InputDelegateManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputDelegateManager, UInputDelegateManager::StaticClass, TEXT("UInputDelegateManager"), &Z_Registration_Info_UClass_UInputDelegateManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputDelegateManager), 2881489996U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InputDelegateManager_h_1307327847(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InputDelegateManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InputDelegateManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
