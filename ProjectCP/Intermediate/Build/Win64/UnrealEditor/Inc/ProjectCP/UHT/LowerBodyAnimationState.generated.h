// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enums/LowerBodyAnimationState.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTCP_LowerBodyAnimationState_generated_h
#error "LowerBodyAnimationState.generated.h already included, missing '#pragma once' in LowerBodyAnimationState.h"
#endif
#define PROJECTCP_LowerBodyAnimationState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Enums_LowerBodyAnimationState_h


#define FOREACH_ENUM_ELOWERBODYANIMATIONSTATE(op) \
	op(ELowerBodyAnimationState::ELBAS_Forward) \
	op(ELowerBodyAnimationState::ELBAS_Backward) \
	op(ELowerBodyAnimationState::ELBAS_Left) \
	op(ELowerBodyAnimationState::ELBAS_Right) 

enum class ELowerBodyAnimationState : uint8;
template<> struct TIsUEnumClass<ELowerBodyAnimationState> { enum { Value = true }; };
template<> PROJECTCP_API UEnum* StaticEnum<ELowerBodyAnimationState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
