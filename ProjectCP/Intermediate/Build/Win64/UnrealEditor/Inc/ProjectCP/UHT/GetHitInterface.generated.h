// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/GetHitInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef PROJECTCP_GetHitInterface_generated_h
#error "GetHitInterface.generated.h already included, missing '#pragma once' in GetHitInterface.h"
#endif
#define PROJECTCP_GetHitInterface_generated_h

#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_GetHitInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GetHit_Implementation(int32 damage, AActor* Hitter) {}; \
	DECLARE_FUNCTION(execGetHit);


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_GetHitInterface_h_13_CALLBACK_WRAPPERS
#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_GetHitInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROJECTCP_API UGetHitInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGetHitInterface(UGetHitInterface&&); \
	UGetHitInterface(const UGetHitInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROJECTCP_API, UGetHitInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetHitInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetHitInterface) \
	PROJECTCP_API virtual ~UGetHitInterface();


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_GetHitInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGetHitInterface(); \
	friend struct Z_Construct_UClass_UGetHitInterface_Statics; \
public: \
	DECLARE_CLASS(UGetHitInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProjectCP"), PROJECTCP_API) \
	DECLARE_SERIALIZER(UGetHitInterface)


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_GetHitInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_GetHitInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_GetHitInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_GetHitInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGetHitInterface() {} \
public: \
	typedef UGetHitInterface UClassType; \
	typedef IGetHitInterface ThisClass; \
	static void Execute_GetHit(UObject* O, int32 damage, AActor* Hitter); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_GetHitInterface_h_10_PROLOG
#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_GetHitInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_GetHitInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_GetHitInterface_h_13_CALLBACK_WRAPPERS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_GetHitInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTCP_API UClass* StaticClass<class UGetHitInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_GetHitInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
