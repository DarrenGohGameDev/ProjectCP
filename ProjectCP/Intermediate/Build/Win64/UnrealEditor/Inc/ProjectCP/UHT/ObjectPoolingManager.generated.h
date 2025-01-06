// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Managers/ObjectPoolingManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTCP_ObjectPoolingManager_generated_h
#error "ObjectPoolingManager.generated.h already included, missing '#pragma once' in ObjectPoolingManager.h"
#endif
#define PROJECTCP_ObjectPoolingManager_generated_h

#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_ObjectPoolingManager_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectPoolingManager(); \
	friend struct Z_Construct_UClass_UObjectPoolingManager_Statics; \
public: \
	DECLARE_CLASS(UObjectPoolingManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectCP"), NO_API) \
	DECLARE_SERIALIZER(UObjectPoolingManager)


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_ObjectPoolingManager_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectPoolingManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UObjectPoolingManager(UObjectPoolingManager&&); \
	UObjectPoolingManager(const UObjectPoolingManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectPoolingManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectPoolingManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectPoolingManager) \
	NO_API virtual ~UObjectPoolingManager();


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_ObjectPoolingManager_h_14_PROLOG
#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_ObjectPoolingManager_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_ObjectPoolingManager_h_17_INCLASS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_ObjectPoolingManager_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTCP_API UClass* StaticClass<class UObjectPoolingManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_ObjectPoolingManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
