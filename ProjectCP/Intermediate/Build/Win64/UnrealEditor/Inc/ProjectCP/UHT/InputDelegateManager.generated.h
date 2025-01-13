// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Managers/InputDelegateManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef PROJECTCP_InputDelegateManager_generated_h
#error "InputDelegateManager.generated.h already included, missing '#pragma once' in InputDelegateManager.h"
#endif
#define PROJECTCP_InputDelegateManager_generated_h

#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InputDelegateManager_h_11_DELEGATE \
PROJECTCP_API void FOnShootInput_DelegateWrapper(const FMulticastScriptDelegate& OnShootInput, AActor* owner);


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InputDelegateManager_h_13_DELEGATE \
PROJECTCP_API void FOnJumpInput_DelegateWrapper(const FMulticastScriptDelegate& OnJumpInput, AActor* owner);


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InputDelegateManager_h_15_DELEGATE \
PROJECTCP_API void FOnInputMove_DelegateWrapper(const FMulticastScriptDelegate& OnInputMove, FVector2D input, AActor* owner);


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InputDelegateManager_h_17_DELEGATE \
PROJECTCP_API void FOnInputLook_DelegateWrapper(const FMulticastScriptDelegate& OnInputLook, FVector2D input, AActor* owner);


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InputDelegateManager_h_19_DELEGATE \
PROJECTCP_API void FOnReloadInput_DelegateWrapper(const FMulticastScriptDelegate& OnReloadInput, AActor* owner);


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InputDelegateManager_h_21_DELEGATE \
PROJECTCP_API void FOnPickUpItem_DelegateWrapper(const FMulticastScriptDelegate& OnPickUpItem, AActor* owner);


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InputDelegateManager_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputDelegateManager(); \
	friend struct Z_Construct_UClass_UInputDelegateManager_Statics; \
public: \
	DECLARE_CLASS(UInputDelegateManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectCP"), NO_API) \
	DECLARE_SERIALIZER(UInputDelegateManager)


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InputDelegateManager_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputDelegateManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputDelegateManager(UInputDelegateManager&&); \
	UInputDelegateManager(const UInputDelegateManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputDelegateManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDelegateManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputDelegateManager) \
	NO_API virtual ~UInputDelegateManager();


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InputDelegateManager_h_26_PROLOG
#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InputDelegateManager_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InputDelegateManager_h_29_INCLASS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InputDelegateManager_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTCP_API UClass* StaticClass<class UInputDelegateManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_InputDelegateManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
