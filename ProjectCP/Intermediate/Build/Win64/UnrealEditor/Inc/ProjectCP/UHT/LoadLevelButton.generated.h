// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Button/LoadLevelButton.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTCP_LoadLevelButton_generated_h
#error "LoadLevelButton.generated.h already included, missing '#pragma once' in LoadLevelButton.h"
#endif
#define PROJECTCP_LoadLevelButton_generated_h

#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_Button_LoadLevelButton_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOpenLevel);


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_Button_LoadLevelButton_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoadLevelButton(); \
	friend struct Z_Construct_UClass_ULoadLevelButton_Statics; \
public: \
	DECLARE_CLASS(ULoadLevelButton, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectCP"), NO_API) \
	DECLARE_SERIALIZER(ULoadLevelButton)


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_Button_LoadLevelButton_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadLevelButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULoadLevelButton(ULoadLevelButton&&); \
	ULoadLevelButton(const ULoadLevelButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadLevelButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadLevelButton); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadLevelButton) \
	NO_API virtual ~ULoadLevelButton();


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_Button_LoadLevelButton_h_14_PROLOG
#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_Button_LoadLevelButton_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_Button_LoadLevelButton_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_Button_LoadLevelButton_h_17_INCLASS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_Button_LoadLevelButton_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTCP_API UClass* StaticClass<class ULoadLevelButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_Button_LoadLevelButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
