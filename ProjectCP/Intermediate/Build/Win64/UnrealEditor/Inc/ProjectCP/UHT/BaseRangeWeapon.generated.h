// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/BaseRangeWeapon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTCP_BaseRangeWeapon_generated_h
#error "BaseRangeWeapon.generated.h already included, missing '#pragma once' in BaseRangeWeapon.h"
#endif
#define PROJECTCP_BaseRangeWeapon_generated_h

#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Weapon_BaseRangeWeapon_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWeaponReady); \
	DECLARE_FUNCTION(execWeaponCooldown);


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Weapon_BaseRangeWeapon_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseRangeWeapon(); \
	friend struct Z_Construct_UClass_ABaseRangeWeapon_Statics; \
public: \
	DECLARE_CLASS(ABaseRangeWeapon, ABaseItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectCP"), NO_API) \
	DECLARE_SERIALIZER(ABaseRangeWeapon) \
	virtual UObject* _getUObject() const override { return const_cast<ABaseRangeWeapon*>(this); }


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Weapon_BaseRangeWeapon_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABaseRangeWeapon(ABaseRangeWeapon&&); \
	ABaseRangeWeapon(const ABaseRangeWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseRangeWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseRangeWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseRangeWeapon) \
	NO_API virtual ~ABaseRangeWeapon();


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Weapon_BaseRangeWeapon_h_13_PROLOG
#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Weapon_BaseRangeWeapon_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Weapon_BaseRangeWeapon_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Weapon_BaseRangeWeapon_h_16_INCLASS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Weapon_BaseRangeWeapon_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTCP_API UClass* StaticClass<class ABaseRangeWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Weapon_BaseRangeWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
