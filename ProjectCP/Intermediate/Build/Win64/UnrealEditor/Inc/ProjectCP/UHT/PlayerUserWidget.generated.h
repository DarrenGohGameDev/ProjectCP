// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/PlayerUserWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTCP_PlayerUserWidget_generated_h
#error "PlayerUserWidget.generated.h already included, missing '#pragma once' in PlayerUserWidget.h"
#endif
#define PROJECTCP_PlayerUserWidget_generated_h

#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerUserWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execToggleThisWidget); \
	DECLARE_FUNCTION(execSetAmmoText);


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerUserWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerUserWidget(); \
	friend struct Z_Construct_UClass_UPlayerUserWidget_Statics; \
public: \
	DECLARE_CLASS(UPlayerUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectCP"), NO_API) \
	DECLARE_SERIALIZER(UPlayerUserWidget)


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerUserWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerUserWidget(UPlayerUserWidget&&); \
	UPlayerUserWidget(const UPlayerUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerUserWidget) \
	NO_API virtual ~UPlayerUserWidget();


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerUserWidget_h_14_PROLOG
#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerUserWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerUserWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerUserWidget_h_17_INCLASS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerUserWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTCP_API UClass* StaticClass<class UPlayerUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
