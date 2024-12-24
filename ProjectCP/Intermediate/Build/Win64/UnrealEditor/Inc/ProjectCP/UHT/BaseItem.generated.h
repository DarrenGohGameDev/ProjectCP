// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Item/BaseItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PROJECTCP_BaseItem_generated_h
#error "BaseItem.generated.h already included, missing '#pragma once' in BaseItem.h"
#endif
#define PROJECTCP_BaseItem_generated_h

#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Item_BaseItem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereOverlapEnd); \
	DECLARE_FUNCTION(execOnSphereOverlap);


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Item_BaseItem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseItem(); \
	friend struct Z_Construct_UClass_ABaseItem_Statics; \
public: \
	DECLARE_CLASS(ABaseItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectCP"), NO_API) \
	DECLARE_SERIALIZER(ABaseItem)


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Item_BaseItem_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABaseItem(ABaseItem&&); \
	ABaseItem(const ABaseItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseItem) \
	NO_API virtual ~ABaseItem();


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Item_BaseItem_h_13_PROLOG
#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Item_BaseItem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Item_BaseItem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Item_BaseItem_h_16_INCLASS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Item_BaseItem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTCP_API UClass* StaticClass<class ABaseItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Item_BaseItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
