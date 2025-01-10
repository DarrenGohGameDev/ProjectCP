// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/BaseCharacterAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class ECharacterEquipState : uint8;
enum class ELowerBodyAnimationState : uint8;
#ifdef PROJECTCP_BaseCharacterAnimInstance_generated_h
#error "BaseCharacterAnimInstance.generated.h already included, missing '#pragma once' in BaseCharacterAnimInstance.h"
#endif
#define PROJECTCP_BaseCharacterAnimInstance_generated_h

#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Character_BaseCharacterAnimInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnUpdateCharacterEquipState); \
	DECLARE_FUNCTION(execOnUpdateLowerBodyAnimationState);


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Character_BaseCharacterAnimInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseCharacterAnimInstance(); \
	friend struct Z_Construct_UClass_UBaseCharacterAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UBaseCharacterAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ProjectCP"), NO_API) \
	DECLARE_SERIALIZER(UBaseCharacterAnimInstance)


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Character_BaseCharacterAnimInstance_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseCharacterAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseCharacterAnimInstance(UBaseCharacterAnimInstance&&); \
	UBaseCharacterAnimInstance(const UBaseCharacterAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseCharacterAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseCharacterAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseCharacterAnimInstance) \
	NO_API virtual ~UBaseCharacterAnimInstance();


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Character_BaseCharacterAnimInstance_h_14_PROLOG
#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Character_BaseCharacterAnimInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Character_BaseCharacterAnimInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Character_BaseCharacterAnimInstance_h_17_INCLASS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Character_BaseCharacterAnimInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTCP_API UClass* StaticClass<class UBaseCharacterAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Character_BaseCharacterAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
