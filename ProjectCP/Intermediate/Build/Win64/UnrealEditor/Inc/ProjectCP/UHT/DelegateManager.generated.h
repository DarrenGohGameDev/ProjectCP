// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Managers/DelegateManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef PROJECTCP_DelegateManager_generated_h
#error "DelegateManager.generated.h already included, missing '#pragma once' in DelegateManager.h"
#endif
#define PROJECTCP_DelegateManager_generated_h

#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_DelegateManager_h_11_DELEGATE \
PROJECTCP_API void FOnItemOverlap_DelegateWrapper(const FMulticastScriptDelegate& OnItemOverlap, AActor* item);


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_DelegateManager_h_13_DELEGATE \
PROJECTCP_API void FSetAmmoText_DelegateWrapper(const FMulticastScriptDelegate& SetAmmoText, int32 maxAmount, int32 currentAmount);


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_DelegateManager_h_15_DELEGATE \
PROJECTCP_API void FOnEquipWeapon_DelegateWrapper(const FMulticastScriptDelegate& OnEquipWeapon, bool toggle);


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_DelegateManager_h_17_DELEGATE \
PROJECTCP_API void FOnHitActor_DelegateWrapper(const FMulticastScriptDelegate& OnHitActor, int32 damage, AActor* hitActor);


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_DelegateManager_h_19_DELEGATE \
PROJECTCP_API void FOnChangeHpBarPercent_DelegateWrapper(const FMulticastScriptDelegate& OnChangeHpBarPercent, float remainingPercent, AActor* hpBarOwner);


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_DelegateManager_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDelegateManager(); \
	friend struct Z_Construct_UClass_UDelegateManager_Statics; \
public: \
	DECLARE_CLASS(UDelegateManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectCP"), NO_API) \
	DECLARE_SERIALIZER(UDelegateManager)


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_DelegateManager_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDelegateManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDelegateManager(UDelegateManager&&); \
	UDelegateManager(const UDelegateManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDelegateManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDelegateManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDelegateManager) \
	NO_API virtual ~UDelegateManager();


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_DelegateManager_h_21_PROLOG
#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_DelegateManager_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_DelegateManager_h_24_INCLASS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_DelegateManager_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTCP_API UClass* StaticClass<class UDelegateManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_DelegateManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
