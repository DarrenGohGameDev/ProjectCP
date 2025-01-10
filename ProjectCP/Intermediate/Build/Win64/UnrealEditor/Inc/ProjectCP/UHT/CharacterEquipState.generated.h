// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enums/CharacterEquipState.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTCP_CharacterEquipState_generated_h
#error "CharacterEquipState.generated.h already included, missing '#pragma once' in CharacterEquipState.h"
#endif
#define PROJECTCP_CharacterEquipState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Project_ProjectCP_ProjectCP_Source_ProjectCP_Public_Enums_CharacterEquipState_h


#define FOREACH_ENUM_ECHARACTEREQUIPSTATE(op) \
	op(ECharacterEquipState::ECS_Equip) \
	op(ECharacterEquipState::ECS_NotEquip) 

enum class ECharacterEquipState : uint8;
template<> struct TIsUEnumClass<ECharacterEquipState> { enum { Value = true }; };
template<> PROJECTCP_API UEnum* StaticEnum<ECharacterEquipState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
