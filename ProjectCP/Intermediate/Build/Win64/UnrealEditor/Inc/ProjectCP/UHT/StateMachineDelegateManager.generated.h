// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateMachine/StateMachineDelegateManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef PROJECTCP_StateMachineDelegateManager_generated_h
#error "StateMachineDelegateManager.generated.h already included, missing '#pragma once' in StateMachineDelegateManager.h"
#endif
#define PROJECTCP_StateMachineDelegateManager_generated_h

#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_StateMachineDelegateManager_h_12_DELEGATE \
PROJECTCP_API void FOnChangeState_DelegateWrapper(const FMulticastScriptDelegate& OnChangeState, const FString& stateKey, AActor* owner);


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_StateMachineDelegateManager_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateMachineDelegateManager(); \
	friend struct Z_Construct_UClass_UStateMachineDelegateManager_Statics; \
public: \
	DECLARE_CLASS(UStateMachineDelegateManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectCP"), NO_API) \
	DECLARE_SERIALIZER(UStateMachineDelegateManager)


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_StateMachineDelegateManager_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStateMachineDelegateManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStateMachineDelegateManager(UStateMachineDelegateManager&&); \
	UStateMachineDelegateManager(const UStateMachineDelegateManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateMachineDelegateManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateMachineDelegateManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateMachineDelegateManager) \
	NO_API virtual ~UStateMachineDelegateManager();


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_StateMachineDelegateManager_h_16_PROLOG
#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_StateMachineDelegateManager_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_StateMachineDelegateManager_h_19_INCLASS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_StateMachineDelegateManager_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTCP_API UClass* StaticClass<class UStateMachineDelegateManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_StateMachineDelegateManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
