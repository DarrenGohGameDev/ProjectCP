// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/HpBarWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef PROJECTCP_HpBarWidget_generated_h
#error "HpBarWidget.generated.h already included, missing '#pragma once' in HpBarWidget.h"
#endif
#define PROJECTCP_HpBarWidget_generated_h

#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_HpBarWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetHpBarPercent);


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_HpBarWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHpBarWidget(); \
	friend struct Z_Construct_UClass_UHpBarWidget_Statics; \
public: \
	DECLARE_CLASS(UHpBarWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectCP"), NO_API) \
	DECLARE_SERIALIZER(UHpBarWidget)


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_HpBarWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHpBarWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHpBarWidget(UHpBarWidget&&); \
	UHpBarWidget(const UHpBarWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHpBarWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHpBarWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHpBarWidget) \
	NO_API virtual ~UHpBarWidget();


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_HpBarWidget_h_13_PROLOG
#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_HpBarWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_HpBarWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_HpBarWidget_h_16_INCLASS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_HpBarWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTCP_API UClass* StaticClass<class UHpBarWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_UI_HpBarWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
