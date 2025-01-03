// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorComponent/Character/HitComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTCP_HitComponent_generated_h
#error "HitComponent.generated.h already included, missing '#pragma once' in HitComponent.h"
#endif
#define PROJECTCP_HitComponent_generated_h

#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Character_HitComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHitComponent(); \
	friend struct Z_Construct_UClass_UHitComponent_Statics; \
public: \
	DECLARE_CLASS(UHitComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectCP"), NO_API) \
	DECLARE_SERIALIZER(UHitComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UHitComponent*>(this); }


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Character_HitComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHitComponent(UHitComponent&&); \
	UHitComponent(const UHitComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHitComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHitComponent) \
	NO_API virtual ~UHitComponent();


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Character_HitComponent_h_12_PROLOG
#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Character_HitComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Character_HitComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Character_HitComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTCP_API UClass* StaticClass<class UHitComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_ActorComponent_Character_HitComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
