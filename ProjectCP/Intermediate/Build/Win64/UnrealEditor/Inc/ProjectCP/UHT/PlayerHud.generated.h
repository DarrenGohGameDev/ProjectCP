// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/PlayerHud.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTCP_PlayerHud_generated_h
#error "PlayerHud.generated.h already included, missing '#pragma once' in PlayerHud.h"
#endif
#define PROJECTCP_PlayerHud_generated_h

#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerHud_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerHud(); \
	friend struct Z_Construct_UClass_APlayerHud_Statics; \
public: \
	DECLARE_CLASS(APlayerHud, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectCP"), NO_API) \
	DECLARE_SERIALIZER(APlayerHud)


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerHud_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerHud(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerHud(APlayerHud&&); \
	APlayerHud(const APlayerHud&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerHud); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerHud); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerHud) \
	NO_API virtual ~APlayerHud();


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerHud_h_12_PROLOG
#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerHud_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerHud_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerHud_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTCP_API UClass* StaticClass<class APlayerHud>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_PlayerHud_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
