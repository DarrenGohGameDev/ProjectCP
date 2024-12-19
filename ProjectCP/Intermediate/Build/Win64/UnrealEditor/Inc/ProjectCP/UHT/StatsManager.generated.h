// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Managers/StatsManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTCP_StatsManager_generated_h
#error "StatsManager.generated.h already included, missing '#pragma once' in StatsManager.h"
#endif
#define PROJECTCP_StatsManager_generated_h

#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_StatsManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatsManager(); \
	friend struct Z_Construct_UClass_UStatsManager_Statics; \
public: \
	DECLARE_CLASS(UStatsManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectCP"), NO_API) \
	DECLARE_SERIALIZER(UStatsManager)


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_StatsManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStatsManager(UStatsManager&&); \
	UStatsManager(const UStatsManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatsManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatsManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStatsManager) \
	NO_API virtual ~UStatsManager();


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_StatsManager_h_10_PROLOG
#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_StatsManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_StatsManager_h_13_INCLASS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_StatsManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTCP_API UClass* StaticClass<class UStatsManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Managers_StatsManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
