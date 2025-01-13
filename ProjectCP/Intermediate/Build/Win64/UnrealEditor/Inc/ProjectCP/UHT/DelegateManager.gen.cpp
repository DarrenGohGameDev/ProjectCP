// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/Managers/DelegateManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDelegateManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTCP_API UClass* Z_Construct_UClass_UDelegateManager();
PROJECTCP_API UClass* Z_Construct_UClass_UDelegateManager_NoRegister();
PROJECTCP_API UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnChangeHpBarPercent__DelegateSignature();
PROJECTCP_API UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnEquipWeapon__DelegateSignature();
PROJECTCP_API UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnHitActor__DelegateSignature();
PROJECTCP_API UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature();
PROJECTCP_API UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnTakeDamage__DelegateSignature();
PROJECTCP_API UFunction* Z_Construct_UDelegateFunction_ProjectCP_SetAmmoText__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Delegate FOnItemOverlap
struct Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature_Statics
{
	struct _Script_ProjectCP_eventOnItemOverlap_Parms
	{
		AActor* item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Managers/DelegateManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectCP_eventOnItemOverlap_Parms, item), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature_Statics::NewProp_item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectCP, nullptr, "OnItemOverlap__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature_Statics::_Script_ProjectCP_eventOnItemOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature_Statics::_Script_ProjectCP_eventOnItemOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemOverlap_DelegateWrapper(const FMulticastScriptDelegate& OnItemOverlap, AActor* item)
{
	struct _Script_ProjectCP_eventOnItemOverlap_Parms
	{
		AActor* item;
	};
	_Script_ProjectCP_eventOnItemOverlap_Parms Parms;
	Parms.item=item;
	OnItemOverlap.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnItemOverlap

// Begin Delegate FSetAmmoText
struct Z_Construct_UDelegateFunction_ProjectCP_SetAmmoText__DelegateSignature_Statics
{
	struct _Script_ProjectCP_eventSetAmmoText_Parms
	{
		int32 maxAmount;
		int32 currentAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Managers/DelegateManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxAmount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_currentAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ProjectCP_SetAmmoText__DelegateSignature_Statics::NewProp_maxAmount = { "maxAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectCP_eventSetAmmoText_Parms, maxAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ProjectCP_SetAmmoText__DelegateSignature_Statics::NewProp_currentAmount = { "currentAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectCP_eventSetAmmoText_Parms, currentAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectCP_SetAmmoText__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectCP_SetAmmoText__DelegateSignature_Statics::NewProp_maxAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectCP_SetAmmoText__DelegateSignature_Statics::NewProp_currentAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_SetAmmoText__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectCP_SetAmmoText__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectCP, nullptr, "SetAmmoText__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectCP_SetAmmoText__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_SetAmmoText__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectCP_SetAmmoText__DelegateSignature_Statics::_Script_ProjectCP_eventSetAmmoText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_SetAmmoText__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectCP_SetAmmoText__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectCP_SetAmmoText__DelegateSignature_Statics::_Script_ProjectCP_eventSetAmmoText_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectCP_SetAmmoText__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectCP_SetAmmoText__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSetAmmoText_DelegateWrapper(const FMulticastScriptDelegate& SetAmmoText, int32 maxAmount, int32 currentAmount)
{
	struct _Script_ProjectCP_eventSetAmmoText_Parms
	{
		int32 maxAmount;
		int32 currentAmount;
	};
	_Script_ProjectCP_eventSetAmmoText_Parms Parms;
	Parms.maxAmount=maxAmount;
	Parms.currentAmount=currentAmount;
	SetAmmoText.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FSetAmmoText

// Begin Delegate FOnEquipWeapon
struct Z_Construct_UDelegateFunction_ProjectCP_OnEquipWeapon__DelegateSignature_Statics
{
	struct _Script_ProjectCP_eventOnEquipWeapon_Parms
	{
		bool toggle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Managers/DelegateManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_toggle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_toggle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_ProjectCP_OnEquipWeapon__DelegateSignature_Statics::NewProp_toggle_SetBit(void* Obj)
{
	((_Script_ProjectCP_eventOnEquipWeapon_Parms*)Obj)->toggle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ProjectCP_OnEquipWeapon__DelegateSignature_Statics::NewProp_toggle = { "toggle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ProjectCP_eventOnEquipWeapon_Parms), &Z_Construct_UDelegateFunction_ProjectCP_OnEquipWeapon__DelegateSignature_Statics::NewProp_toggle_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectCP_OnEquipWeapon__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectCP_OnEquipWeapon__DelegateSignature_Statics::NewProp_toggle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnEquipWeapon__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectCP_OnEquipWeapon__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectCP, nullptr, "OnEquipWeapon__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectCP_OnEquipWeapon__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnEquipWeapon__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectCP_OnEquipWeapon__DelegateSignature_Statics::_Script_ProjectCP_eventOnEquipWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnEquipWeapon__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectCP_OnEquipWeapon__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectCP_OnEquipWeapon__DelegateSignature_Statics::_Script_ProjectCP_eventOnEquipWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnEquipWeapon__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectCP_OnEquipWeapon__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEquipWeapon_DelegateWrapper(const FMulticastScriptDelegate& OnEquipWeapon, bool toggle)
{
	struct _Script_ProjectCP_eventOnEquipWeapon_Parms
	{
		bool toggle;
	};
	_Script_ProjectCP_eventOnEquipWeapon_Parms Parms;
	Parms.toggle=toggle ? true : false;
	OnEquipWeapon.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnEquipWeapon

// Begin Delegate FOnHitActor
struct Z_Construct_UDelegateFunction_ProjectCP_OnHitActor__DelegateSignature_Statics
{
	struct _Script_ProjectCP_eventOnHitActor_Parms
	{
		int32 damage;
		AActor* hitActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Managers/DelegateManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_hitActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ProjectCP_OnHitActor__DelegateSignature_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectCP_eventOnHitActor_Parms, damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectCP_OnHitActor__DelegateSignature_Statics::NewProp_hitActor = { "hitActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectCP_eventOnHitActor_Parms, hitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectCP_OnHitActor__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectCP_OnHitActor__DelegateSignature_Statics::NewProp_damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectCP_OnHitActor__DelegateSignature_Statics::NewProp_hitActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnHitActor__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectCP_OnHitActor__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectCP, nullptr, "OnHitActor__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectCP_OnHitActor__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnHitActor__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectCP_OnHitActor__DelegateSignature_Statics::_Script_ProjectCP_eventOnHitActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnHitActor__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectCP_OnHitActor__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectCP_OnHitActor__DelegateSignature_Statics::_Script_ProjectCP_eventOnHitActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnHitActor__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectCP_OnHitActor__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHitActor_DelegateWrapper(const FMulticastScriptDelegate& OnHitActor, int32 damage, AActor* hitActor)
{
	struct _Script_ProjectCP_eventOnHitActor_Parms
	{
		int32 damage;
		AActor* hitActor;
	};
	_Script_ProjectCP_eventOnHitActor_Parms Parms;
	Parms.damage=damage;
	Parms.hitActor=hitActor;
	OnHitActor.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnHitActor

// Begin Delegate FOnChangeHpBarPercent
struct Z_Construct_UDelegateFunction_ProjectCP_OnChangeHpBarPercent__DelegateSignature_Statics
{
	struct _Script_ProjectCP_eventOnChangeHpBarPercent_Parms
	{
		float remainingPercent;
		AActor* hpBarOwner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Managers/DelegateManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_remainingPercent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_hpBarOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProjectCP_OnChangeHpBarPercent__DelegateSignature_Statics::NewProp_remainingPercent = { "remainingPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectCP_eventOnChangeHpBarPercent_Parms, remainingPercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectCP_OnChangeHpBarPercent__DelegateSignature_Statics::NewProp_hpBarOwner = { "hpBarOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectCP_eventOnChangeHpBarPercent_Parms, hpBarOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectCP_OnChangeHpBarPercent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectCP_OnChangeHpBarPercent__DelegateSignature_Statics::NewProp_remainingPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectCP_OnChangeHpBarPercent__DelegateSignature_Statics::NewProp_hpBarOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnChangeHpBarPercent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectCP_OnChangeHpBarPercent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectCP, nullptr, "OnChangeHpBarPercent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectCP_OnChangeHpBarPercent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnChangeHpBarPercent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectCP_OnChangeHpBarPercent__DelegateSignature_Statics::_Script_ProjectCP_eventOnChangeHpBarPercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnChangeHpBarPercent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectCP_OnChangeHpBarPercent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectCP_OnChangeHpBarPercent__DelegateSignature_Statics::_Script_ProjectCP_eventOnChangeHpBarPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnChangeHpBarPercent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectCP_OnChangeHpBarPercent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnChangeHpBarPercent_DelegateWrapper(const FMulticastScriptDelegate& OnChangeHpBarPercent, float remainingPercent, AActor* hpBarOwner)
{
	struct _Script_ProjectCP_eventOnChangeHpBarPercent_Parms
	{
		float remainingPercent;
		AActor* hpBarOwner;
	};
	_Script_ProjectCP_eventOnChangeHpBarPercent_Parms Parms;
	Parms.remainingPercent=remainingPercent;
	Parms.hpBarOwner=hpBarOwner;
	OnChangeHpBarPercent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnChangeHpBarPercent

// Begin Delegate FOnTakeDamage
struct Z_Construct_UDelegateFunction_ProjectCP_OnTakeDamage__DelegateSignature_Statics
{
	struct _Script_ProjectCP_eventOnTakeDamage_Parms
	{
		float remainingPercent;
		float currentHpPercent;
		AActor* owner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Managers/DelegateManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_remainingPercent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_currentHpPercent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProjectCP_OnTakeDamage__DelegateSignature_Statics::NewProp_remainingPercent = { "remainingPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectCP_eventOnTakeDamage_Parms, remainingPercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProjectCP_OnTakeDamage__DelegateSignature_Statics::NewProp_currentHpPercent = { "currentHpPercent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectCP_eventOnTakeDamage_Parms, currentHpPercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjectCP_OnTakeDamage__DelegateSignature_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectCP_eventOnTakeDamage_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectCP_OnTakeDamage__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectCP_OnTakeDamage__DelegateSignature_Statics::NewProp_remainingPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectCP_OnTakeDamage__DelegateSignature_Statics::NewProp_currentHpPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectCP_OnTakeDamage__DelegateSignature_Statics::NewProp_owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnTakeDamage__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectCP_OnTakeDamage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectCP, nullptr, "OnTakeDamage__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectCP_OnTakeDamage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnTakeDamage__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectCP_OnTakeDamage__DelegateSignature_Statics::_Script_ProjectCP_eventOnTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectCP_OnTakeDamage__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectCP_OnTakeDamage__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectCP_OnTakeDamage__DelegateSignature_Statics::_Script_ProjectCP_eventOnTakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectCP_OnTakeDamage__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectCP_OnTakeDamage__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTakeDamage_DelegateWrapper(const FMulticastScriptDelegate& OnTakeDamage, float remainingPercent, float& currentHpPercent, AActor* owner)
{
	struct _Script_ProjectCP_eventOnTakeDamage_Parms
	{
		float remainingPercent;
		float currentHpPercent;
		AActor* owner;
	};
	_Script_ProjectCP_eventOnTakeDamage_Parms Parms;
	Parms.remainingPercent=remainingPercent;
	Parms.currentHpPercent=currentHpPercent;
	Parms.owner=owner;
	OnTakeDamage.ProcessMulticastDelegate<UObject>(&Parms);
	currentHpPercent=Parms.currentHpPercent;
}
// End Delegate FOnTakeDamage

// Begin Class UDelegateManager
void UDelegateManager::StaticRegisterNativesUDelegateManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDelegateManager);
UClass* Z_Construct_UClass_UDelegateManager_NoRegister()
{
	return UDelegateManager::StaticClass();
}
struct Z_Construct_UClass_UDelegateManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Managers/DelegateManager.h" },
		{ "ModuleRelativePath", "Public/Managers/DelegateManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onItemOverlap_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Managers/DelegateManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onSetAmmoText_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Managers/DelegateManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onEquipWeapon_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Managers/DelegateManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onHitActor_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Managers/DelegateManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onTakeDamage_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Managers/DelegateManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onHpBarChange_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Managers/DelegateManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onItemOverlap;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onSetAmmoText;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onEquipWeapon;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onHitActor;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onTakeDamage;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onHpBarChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDelegateManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDelegateManager_Statics::NewProp_onItemOverlap = { "onItemOverlap", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDelegateManager, onItemOverlap), Z_Construct_UDelegateFunction_ProjectCP_OnItemOverlap__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onItemOverlap_MetaData), NewProp_onItemOverlap_MetaData) }; // 112737219
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDelegateManager_Statics::NewProp_onSetAmmoText = { "onSetAmmoText", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDelegateManager, onSetAmmoText), Z_Construct_UDelegateFunction_ProjectCP_SetAmmoText__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onSetAmmoText_MetaData), NewProp_onSetAmmoText_MetaData) }; // 2920830151
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDelegateManager_Statics::NewProp_onEquipWeapon = { "onEquipWeapon", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDelegateManager, onEquipWeapon), Z_Construct_UDelegateFunction_ProjectCP_OnEquipWeapon__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onEquipWeapon_MetaData), NewProp_onEquipWeapon_MetaData) }; // 950719465
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDelegateManager_Statics::NewProp_onHitActor = { "onHitActor", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDelegateManager, onHitActor), Z_Construct_UDelegateFunction_ProjectCP_OnHitActor__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onHitActor_MetaData), NewProp_onHitActor_MetaData) }; // 14215175
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDelegateManager_Statics::NewProp_onTakeDamage = { "onTakeDamage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDelegateManager, onTakeDamage), Z_Construct_UDelegateFunction_ProjectCP_OnTakeDamage__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onTakeDamage_MetaData), NewProp_onTakeDamage_MetaData) }; // 4253791318
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDelegateManager_Statics::NewProp_onHpBarChange = { "onHpBarChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDelegateManager, onHpBarChange), Z_Construct_UDelegateFunction_ProjectCP_OnChangeHpBarPercent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onHpBarChange_MetaData), NewProp_onHpBarChange_MetaData) }; // 2137172729
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDelegateManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDelegateManager_Statics::NewProp_onItemOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDelegateManager_Statics::NewProp_onSetAmmoText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDelegateManager_Statics::NewProp_onEquipWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDelegateManager_Statics::NewProp_onHitActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDelegateManager_Statics::NewProp_onTakeDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDelegateManager_Statics::NewProp_onHpBarChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDelegateManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDelegateManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDelegateManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDelegateManager_Statics::ClassParams = {
	&UDelegateManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDelegateManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDelegateManager_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDelegateManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UDelegateManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDelegateManager()
{
	if (!Z_Registration_Info_UClass_UDelegateManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDelegateManager.OuterSingleton, Z_Construct_UClass_UDelegateManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDelegateManager.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<UDelegateManager>()
{
	return UDelegateManager::StaticClass();
}
UDelegateManager::UDelegateManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDelegateManager);
UDelegateManager::~UDelegateManager() {}
// End Class UDelegateManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_DelegateManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDelegateManager, UDelegateManager::StaticClass, TEXT("UDelegateManager"), &Z_Registration_Info_UClass_UDelegateManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDelegateManager), 3670687181U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_DelegateManager_h_3839449971(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_DelegateManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_DelegateManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
