// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateMachine/States/Player/PlayerIdleState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTCP_PlayerIdleState_generated_h
#error "PlayerIdleState.generated.h already included, missing '#pragma once' in PlayerIdleState.h"
#endif
#define PROJECTCP_PlayerIdleState_generated_h

#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_States_Player_PlayerIdleState_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerIdleState(); \
	friend struct Z_Construct_UClass_UPlayerIdleState_Statics; \
public: \
	DECLARE_CLASS(UPlayerIdleState, UBaseState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectCP"), NO_API) \
	DECLARE_SERIALIZER(UPlayerIdleState)


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_States_Player_PlayerIdleState_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerIdleState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerIdleState(UPlayerIdleState&&); \
	UPlayerIdleState(const UPlayerIdleState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerIdleState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerIdleState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerIdleState) \
	NO_API virtual ~UPlayerIdleState();


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_States_Player_PlayerIdleState_h_13_PROLOG
#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_States_Player_PlayerIdleState_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_States_Player_PlayerIdleState_h_16_INCLASS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_States_Player_PlayerIdleState_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTCP_API UClass* StaticClass<class UPlayerIdleState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_States_Player_PlayerIdleState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
