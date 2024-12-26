// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/PickUpInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef PROJECTCP_PickUpInterface_generated_h
#error "PickUpInterface.generated.h already included, missing '#pragma once' in PickUpInterface.h"
#endif
#define PROJECTCP_PickUpInterface_generated_h

#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_PickUpInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetOverlappingItem);


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_PickUpInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROJECTCP_API UPickUpInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPickUpInterface(UPickUpInterface&&); \
	UPickUpInterface(const UPickUpInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROJECTCP_API, UPickUpInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPickUpInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPickUpInterface) \
	PROJECTCP_API virtual ~UPickUpInterface();


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_PickUpInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPickUpInterface(); \
	friend struct Z_Construct_UClass_UPickUpInterface_Statics; \
public: \
	DECLARE_CLASS(UPickUpInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProjectCP"), PROJECTCP_API) \
	DECLARE_SERIALIZER(UPickUpInterface)


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_PickUpInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_PickUpInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_PickUpInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_PickUpInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPickUpInterface() {} \
public: \
	typedef UPickUpInterface UClassType; \
	typedef IPickUpInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_PickUpInterface_h_12_PROLOG
#define FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_PickUpInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_PickUpInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_PickUpInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTCP_API UClass* StaticClass<class UPickUpInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Interface_PickUpInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
