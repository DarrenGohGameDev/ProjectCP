// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enums/BulletState.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTCP_BulletState_generated_h
#error "BulletState.generated.h already included, missing '#pragma once' in BulletState.h"
#endif
#define PROJECTCP_BulletState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Enums_BulletState_h


#define FOREACH_ENUM_EBULLETSTATE(op) \
	op(EBulletState::EBS_InUse) \
	op(EBulletState::EBS_NotInUse) 

enum class EBulletState : uint8;
template<> struct TIsUEnumClass<EBulletState> { enum { Value = true }; };
template<> PROJECTCP_API UEnum* StaticEnum<EBulletState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
