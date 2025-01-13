// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateMachine/States/Player/PlayerStateContext.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTCP_PlayerStateContext_generated_h
#error "PlayerStateContext.generated.h already included, missing '#pragma once' in PlayerStateContext.h"
#endif
#define PROJECTCP_PlayerStateContext_generated_h

#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_States_Player_PlayerStateContext_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerStateContext(); \
	friend struct Z_Construct_UClass_UPlayerStateContext_Statics; \
public: \
	DECLARE_CLASS(UPlayerStateContext, UStateContext, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectCP"), NO_API) \
	DECLARE_SERIALIZER(UPlayerStateContext)


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_States_Player_PlayerStateContext_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerStateContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerStateContext(UPlayerStateContext&&); \
	UPlayerStateContext(const UPlayerStateContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerStateContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerStateContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerStateContext) \
	NO_API virtual ~UPlayerStateContext();


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_States_Player_PlayerStateContext_h_15_PROLOG
#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_States_Player_PlayerStateContext_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_States_Player_PlayerStateContext_h_18_INCLASS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_States_Player_PlayerStateContext_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTCP_API UClass* StaticClass<class UPlayerStateContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_States_Player_PlayerStateContext_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
