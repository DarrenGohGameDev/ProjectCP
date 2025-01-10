// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Managers/AnimationDelegateManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class ECharacterEquipState : uint8;
enum class ELowerBodyAnimationState : uint8;
#ifdef PROJECTCP_AnimationDelegateManager_generated_h
#error "AnimationDelegateManager.generated.h already included, missing '#pragma once' in AnimationDelegateManager.h"
#endif
#define PROJECTCP_AnimationDelegateManager_generated_h

#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_AnimationDelegateManager_h_12_DELEGATE \
PROJECTCP_API void FOnLowerBodyChange_DelegateWrapper(const FMulticastScriptDelegate& OnLowerBodyChange, ELowerBodyAnimationState lowerBodyState, AActor* lowerBodyOwner);


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_AnimationDelegateManager_h_14_DELEGATE \
PROJECTCP_API void FOnEquipChange_DelegateWrapper(const FMulticastScriptDelegate& OnEquipChange, ECharacterEquipState equipState, AActor* equipOwner);


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_AnimationDelegateManager_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationDelegateManager(); \
	friend struct Z_Construct_UClass_UAnimationDelegateManager_Statics; \
public: \
	DECLARE_CLASS(UAnimationDelegateManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectCP"), NO_API) \
	DECLARE_SERIALIZER(UAnimationDelegateManager)


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_AnimationDelegateManager_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationDelegateManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimationDelegateManager(UAnimationDelegateManager&&); \
	UAnimationDelegateManager(const UAnimationDelegateManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationDelegateManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationDelegateManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationDelegateManager) \
	NO_API virtual ~UAnimationDelegateManager();


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_AnimationDelegateManager_h_18_PROLOG
#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_AnimationDelegateManager_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_AnimationDelegateManager_h_21_INCLASS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_AnimationDelegateManager_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTCP_API UClass* StaticClass<class UAnimationDelegateManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_AnimationDelegateManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
