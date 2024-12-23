// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/RangeWeaponInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTCP_RangeWeaponInterface_generated_h
#error "RangeWeaponInterface.generated.h already included, missing '#pragma once' in RangeWeaponInterface.h"
#endif
#define PROJECTCP_RangeWeaponInterface_generated_h

#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_RangeWeaponInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void FinishReloading_Implementation() {}; \
	virtual void Reload_Implementation() {}; \
	virtual void Shoot_Implementation() {}; \
	virtual int32 GetCurrentAmmo_Implementation() { return 0; }; \
	virtual int32 GetMaxAmmo_Implementation() { return 0; }; \
	virtual void SetCurrentAmmo_Implementation(int32 amount) {}; \
	virtual void SetMaxAmmo_Implementation(int32 amount) {}; \
	DECLARE_FUNCTION(execFinishReloading); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execShoot); \
	DECLARE_FUNCTION(execGetCurrentAmmo); \
	DECLARE_FUNCTION(execGetMaxAmmo); \
	DECLARE_FUNCTION(execSetCurrentAmmo); \
	DECLARE_FUNCTION(execSetMaxAmmo);


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_RangeWeaponInterface_h_15_CALLBACK_WRAPPERS
#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_RangeWeaponInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROJECTCP_API URangeWeaponInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URangeWeaponInterface(URangeWeaponInterface&&); \
	URangeWeaponInterface(const URangeWeaponInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROJECTCP_API, URangeWeaponInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URangeWeaponInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URangeWeaponInterface) \
	PROJECTCP_API virtual ~URangeWeaponInterface();


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_RangeWeaponInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesURangeWeaponInterface(); \
	friend struct Z_Construct_UClass_URangeWeaponInterface_Statics; \
public: \
	DECLARE_CLASS(URangeWeaponInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProjectCP"), PROJECTCP_API) \
	DECLARE_SERIALIZER(URangeWeaponInterface)


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_RangeWeaponInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_RangeWeaponInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_RangeWeaponInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_RangeWeaponInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IRangeWeaponInterface() {} \
public: \
	typedef URangeWeaponInterface UClassType; \
	typedef IRangeWeaponInterface ThisClass; \
	static void Execute_FinishReloading(UObject* O); \
	static int32 Execute_GetCurrentAmmo(UObject* O); \
	static int32 Execute_GetMaxAmmo(UObject* O); \
	static void Execute_Reload(UObject* O); \
	static void Execute_SetCurrentAmmo(UObject* O, int32 amount); \
	static void Execute_SetMaxAmmo(UObject* O, int32 amount); \
	static void Execute_Shoot(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_RangeWeaponInterface_h_12_PROLOG
#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_RangeWeaponInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_RangeWeaponInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_RangeWeaponInterface_h_15_CALLBACK_WRAPPERS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_RangeWeaponInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTCP_API UClass* StaticClass<class URangeWeaponInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_RangeWeaponInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
