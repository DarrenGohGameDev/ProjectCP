// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/PlayerAmmoCounterWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTCP_PlayerAmmoCounterWidget_generated_h
#error "PlayerAmmoCounterWidget.generated.h already included, missing '#pragma once' in PlayerAmmoCounterWidget.h"
#endif
#define PROJECTCP_PlayerAmmoCounterWidget_generated_h

#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerAmmoCounterWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execToggleThisWidget); \
	DECLARE_FUNCTION(execSetAmmoText);


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerAmmoCounterWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerAmmoCounterWidget(); \
	friend struct Z_Construct_UClass_UPlayerAmmoCounterWidget_Statics; \
public: \
	DECLARE_CLASS(UPlayerAmmoCounterWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectCP"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAmmoCounterWidget)


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerAmmoCounterWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerAmmoCounterWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerAmmoCounterWidget(UPlayerAmmoCounterWidget&&); \
	UPlayerAmmoCounterWidget(const UPlayerAmmoCounterWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAmmoCounterWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAmmoCounterWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerAmmoCounterWidget) \
	NO_API virtual ~UPlayerAmmoCounterWidget();


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerAmmoCounterWidget_h_13_PROLOG
#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerAmmoCounterWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerAmmoCounterWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerAmmoCounterWidget_h_16_INCLASS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerAmmoCounterWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTCP_API UClass* StaticClass<class UPlayerAmmoCounterWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerAmmoCounterWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
