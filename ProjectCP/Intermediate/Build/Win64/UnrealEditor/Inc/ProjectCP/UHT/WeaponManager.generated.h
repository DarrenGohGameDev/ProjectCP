// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Managers/WeaponManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef PROJECTCP_WeaponManager_generated_h
#error "WeaponManager.generated.h already included, missing '#pragma once' in WeaponManager.h"
#endif
#define PROJECTCP_WeaponManager_generated_h

#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_WeaponManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReloadCurrentWeapon); \
	DECLARE_FUNCTION(execUseCurrentWeapon);


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_WeaponManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponManager(); \
	friend struct Z_Construct_UClass_UWeaponManager_Statics; \
public: \
	DECLARE_CLASS(UWeaponManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectCP"), NO_API) \
	DECLARE_SERIALIZER(UWeaponManager)


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_WeaponManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWeaponManager(UWeaponManager&&); \
	UWeaponManager(const UWeaponManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponManager) \
	NO_API virtual ~UWeaponManager();


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_WeaponManager_h_11_PROLOG
#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_WeaponManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_WeaponManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_WeaponManager_h_14_INCLASS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_WeaponManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTCP_API UClass* StaticClass<class UWeaponManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_WeaponManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
