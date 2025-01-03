// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Enemy/BaseEnemyCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTCP_BaseEnemyCharacter_generated_h
#error "BaseEnemyCharacter.generated.h already included, missing '#pragma once' in BaseEnemyCharacter.h"
#endif
#define PROJECTCP_BaseEnemyCharacter_generated_h

#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Character_Enemy_BaseEnemyCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseEnemyCharacter(); \
	friend struct Z_Construct_UClass_ABaseEnemyCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseEnemyCharacter, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectCP"), NO_API) \
	DECLARE_SERIALIZER(ABaseEnemyCharacter)


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Character_Enemy_BaseEnemyCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABaseEnemyCharacter(ABaseEnemyCharacter&&); \
	ABaseEnemyCharacter(const ABaseEnemyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseEnemyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseEnemyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseEnemyCharacter) \
	NO_API virtual ~ABaseEnemyCharacter();


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Character_Enemy_BaseEnemyCharacter_h_10_PROLOG
#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Character_Enemy_BaseEnemyCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Character_Enemy_BaseEnemyCharacter_h_13_INCLASS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Character_Enemy_BaseEnemyCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTCP_API UClass* StaticClass<class ABaseEnemyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Character_Enemy_BaseEnemyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
