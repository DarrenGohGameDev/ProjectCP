// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Managers/InventoryManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ABaseItem;
#ifdef PROJECTCP_InventoryManager_generated_h
#error "InventoryManager.generated.h already included, missing '#pragma once' in InventoryManager.h"
#endif
#define PROJECTCP_InventoryManager_generated_h

#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InventoryManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTriggerTestDelegate); \
	DECLARE_FUNCTION(execPickUpItem);


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InventoryManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryManager(); \
	friend struct Z_Construct_UClass_UInventoryManager_Statics; \
public: \
	DECLARE_CLASS(UInventoryManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectCP"), NO_API) \
	DECLARE_SERIALIZER(UInventoryManager) \
	virtual UObject* _getUObject() const override { return const_cast<UInventoryManager*>(this); }


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InventoryManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryManager(UInventoryManager&&); \
	UInventoryManager(const UInventoryManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryManager) \
	NO_API virtual ~UInventoryManager();


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InventoryManager_h_13_PROLOG
#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InventoryManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InventoryManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InventoryManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InventoryManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTCP_API UClass* StaticClass<class UInventoryManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InventoryManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
