// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateMachine/BaseState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTCP_BaseState_generated_h
#error "BaseState.generated.h already included, missing '#pragma once' in BaseState.h"
#endif
#define PROJECTCP_BaseState_generated_h

#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_BaseState_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseState(); \
	friend struct Z_Construct_UClass_UBaseState_Statics; \
public: \
	DECLARE_CLASS(UBaseState, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectCP"), NO_API) \
	DECLARE_SERIALIZER(UBaseState)


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_BaseState_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseState(UBaseState&&); \
	UBaseState(const UBaseState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseState) \
	NO_API virtual ~UBaseState();


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_BaseState_h_13_PROLOG
#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_BaseState_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_BaseState_h_16_INCLASS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_BaseState_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTCP_API UClass* StaticClass<class UBaseState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_BaseState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
