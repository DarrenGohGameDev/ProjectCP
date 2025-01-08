// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameInstance/GameInstanceManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTCP_GameInstanceManager_generated_h
#error "GameInstanceManager.generated.h already included, missing '#pragma once' in GameInstanceManager.h"
#endif
#define PROJECTCP_GameInstanceManager_generated_h

#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_GameInstance_GameInstanceManager_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameInstanceManager(); \
	friend struct Z_Construct_UClass_UGameInstanceManager_Statics; \
public: \
	DECLARE_CLASS(UGameInstanceManager, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ProjectCP"), NO_API) \
	DECLARE_SERIALIZER(UGameInstanceManager)


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_GameInstance_GameInstanceManager_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameInstanceManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameInstanceManager(UGameInstanceManager&&); \
	UGameInstanceManager(const UGameInstanceManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameInstanceManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameInstanceManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameInstanceManager) \
	NO_API virtual ~UGameInstanceManager();


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_GameInstance_GameInstanceManager_h_16_PROLOG
#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_GameInstance_GameInstanceManager_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_GameInstance_GameInstanceManager_h_19_INCLASS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_GameInstance_GameInstanceManager_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTCP_API UClass* StaticClass<class UGameInstanceManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_GameInstance_GameInstanceManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
