// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCP/Public/Weapon/BaseRangeWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseRangeWeapon() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
PROJECTCP_API UClass* Z_Construct_UClass_ABaseItem();
PROJECTCP_API UClass* Z_Construct_UClass_ABaseRangeWeapon();
PROJECTCP_API UClass* Z_Construct_UClass_ABaseRangeWeapon_NoRegister();
PROJECTCP_API UClass* Z_Construct_UClass_ABullet_NoRegister();
PROJECTCP_API UClass* Z_Construct_UClass_URangeWeaponInterface_NoRegister();
PROJECTCP_API UEnum* Z_Construct_UEnum_ProjectCP_EWeaponState();
UPackage* Z_Construct_UPackage__Script_ProjectCP();
// End Cross Module References

// Begin Class ABaseRangeWeapon Function WeaponCooldown
struct Z_Construct_UFunction_ABaseRangeWeapon_WeaponCooldown_Statics
{
	struct BaseRangeWeapon_eventWeaponCooldown_Parms
	{
		float time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/BaseRangeWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseRangeWeapon_WeaponCooldown_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseRangeWeapon_eventWeaponCooldown_Parms, time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseRangeWeapon_WeaponCooldown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRangeWeapon_WeaponCooldown_Statics::NewProp_time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRangeWeapon_WeaponCooldown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRangeWeapon_WeaponCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRangeWeapon, nullptr, "WeaponCooldown", nullptr, nullptr, Z_Construct_UFunction_ABaseRangeWeapon_WeaponCooldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRangeWeapon_WeaponCooldown_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseRangeWeapon_WeaponCooldown_Statics::BaseRangeWeapon_eventWeaponCooldown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRangeWeapon_WeaponCooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseRangeWeapon_WeaponCooldown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseRangeWeapon_WeaponCooldown_Statics::BaseRangeWeapon_eventWeaponCooldown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseRangeWeapon_WeaponCooldown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseRangeWeapon_WeaponCooldown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseRangeWeapon::execWeaponCooldown)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_time);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WeaponCooldown(Z_Param_time);
	P_NATIVE_END;
}
// End Class ABaseRangeWeapon Function WeaponCooldown

// Begin Class ABaseRangeWeapon Function WeaponReady
struct Z_Construct_UFunction_ABaseRangeWeapon_WeaponReady_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/BaseRangeWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRangeWeapon_WeaponReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRangeWeapon, nullptr, "WeaponReady", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRangeWeapon_WeaponReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseRangeWeapon_WeaponReady_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABaseRangeWeapon_WeaponReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseRangeWeapon_WeaponReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseRangeWeapon::execWeaponReady)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WeaponReady();
	P_NATIVE_END;
}
// End Class ABaseRangeWeapon Function WeaponReady

// Begin Class ABaseRangeWeapon
void ABaseRangeWeapon::StaticRegisterNativesABaseRangeWeapon()
{
	UClass* Class = ABaseRangeWeapon::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "WeaponCooldown", &ABaseRangeWeapon::execWeaponCooldown },
		{ "WeaponReady", &ABaseRangeWeapon::execWeaponReady },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseRangeWeapon);
UClass* Z_Construct_UClass_ABaseRangeWeapon_NoRegister()
{
	return ABaseRangeWeapon::StaticClass();
}
struct Z_Construct_UClass_ABaseRangeWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/BaseRangeWeapon.h" },
		{ "ModuleRelativePath", "Public/Weapon/BaseRangeWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/BaseRangeWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_useAmmoPerShot_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/BaseRangeWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fireRate_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// the lower the firerate the faster it shoot\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapon/BaseRangeWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the lower the firerate the faster it shoot" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_reloadSpeed_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/BaseRangeWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentWeaponState_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/BaseRangeWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mCurrentBullet_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/BaseRangeWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mShootSound_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/BaseRangeWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mReloadSound_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/BaseRangeWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_useAmmoPerShot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_fireRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_reloadSpeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_currentWeaponState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_currentWeaponState;
	static const UECodeGen_Private::FClassPropertyParams NewProp_mCurrentBullet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mShootSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mReloadSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseRangeWeapon_WeaponCooldown, "WeaponCooldown" }, // 287349328
		{ &Z_Construct_UFunction_ABaseRangeWeapon_WeaponReady, "WeaponReady" }, // 3570102457
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseRangeWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseRangeWeapon_Statics::NewProp_maxAmmo = { "maxAmmo", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseRangeWeapon, maxAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxAmmo_MetaData), NewProp_maxAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseRangeWeapon_Statics::NewProp_useAmmoPerShot = { "useAmmoPerShot", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseRangeWeapon, useAmmoPerShot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_useAmmoPerShot_MetaData), NewProp_useAmmoPerShot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseRangeWeapon_Statics::NewProp_fireRate = { "fireRate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseRangeWeapon, fireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fireRate_MetaData), NewProp_fireRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseRangeWeapon_Statics::NewProp_reloadSpeed = { "reloadSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseRangeWeapon, reloadSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reloadSpeed_MetaData), NewProp_reloadSpeed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseRangeWeapon_Statics::NewProp_currentWeaponState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABaseRangeWeapon_Statics::NewProp_currentWeaponState = { "currentWeaponState", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseRangeWeapon, currentWeaponState), Z_Construct_UEnum_ProjectCP_EWeaponState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentWeaponState_MetaData), NewProp_currentWeaponState_MetaData) }; // 1005073513
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseRangeWeapon_Statics::NewProp_mCurrentBullet = { "mCurrentBullet", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseRangeWeapon, mCurrentBullet), Z_Construct_UClass_UClass, Z_Construct_UClass_ABullet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mCurrentBullet_MetaData), NewProp_mCurrentBullet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseRangeWeapon_Statics::NewProp_mShootSound = { "mShootSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseRangeWeapon, mShootSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mShootSound_MetaData), NewProp_mShootSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseRangeWeapon_Statics::NewProp_mReloadSound = { "mReloadSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseRangeWeapon, mReloadSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mReloadSound_MetaData), NewProp_mReloadSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseRangeWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRangeWeapon_Statics::NewProp_maxAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRangeWeapon_Statics::NewProp_useAmmoPerShot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRangeWeapon_Statics::NewProp_fireRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRangeWeapon_Statics::NewProp_reloadSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRangeWeapon_Statics::NewProp_currentWeaponState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRangeWeapon_Statics::NewProp_currentWeaponState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRangeWeapon_Statics::NewProp_mCurrentBullet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRangeWeapon_Statics::NewProp_mShootSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRangeWeapon_Statics::NewProp_mReloadSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRangeWeapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseRangeWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseItem,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRangeWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABaseRangeWeapon_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_URangeWeaponInterface_NoRegister, (int32)VTABLE_OFFSET(ABaseRangeWeapon, IRangeWeaponInterface), false },  // 1855839667
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseRangeWeapon_Statics::ClassParams = {
	&ABaseRangeWeapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABaseRangeWeapon_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRangeWeapon_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRangeWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseRangeWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseRangeWeapon()
{
	if (!Z_Registration_Info_UClass_ABaseRangeWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseRangeWeapon.OuterSingleton, Z_Construct_UClass_ABaseRangeWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseRangeWeapon.OuterSingleton;
}
template<> PROJECTCP_API UClass* StaticClass<ABaseRangeWeapon>()
{
	return ABaseRangeWeapon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseRangeWeapon);
ABaseRangeWeapon::~ABaseRangeWeapon() {}
// End Class ABaseRangeWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Weapon_BaseRangeWeapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseRangeWeapon, ABaseRangeWeapon::StaticClass, TEXT("ABaseRangeWeapon"), &Z_Registration_Info_UClass_ABaseRangeWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseRangeWeapon), 2828834504U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Weapon_BaseRangeWeapon_h_232330683(TEXT("/Script/ProjectCP"),
	Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Weapon_BaseRangeWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Weapon_BaseRangeWeapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
