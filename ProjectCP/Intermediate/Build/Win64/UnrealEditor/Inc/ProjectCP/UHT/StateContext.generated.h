// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateMachine/StateContext.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTCP_StateContext_generated_h
#error "StateContext.generated.h already included, missing '#pragma once' in StateContext.h"
#endif
#define PROJECTCP_StateContext_generated_h

#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_StateContext_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateContext(); \
	friend struct Z_Construct_UClass_UStateContext_Statics; \
public: \
	DECLARE_CLASS(UStateContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectCP"), NO_API) \
	DECLARE_SERIALIZER(UStateContext)


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_StateContext_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStateContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStateContext(UStateContext&&); \
	UStateContext(const UStateContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateContext) \
	NO_API virtual ~UStateContext();


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_StateContext_h_12_PROLOG
#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_StateContext_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_StateContext_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_StateContext_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTCP_API UClass* StaticClass<class UStateContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_StateMachine_StateContext_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
