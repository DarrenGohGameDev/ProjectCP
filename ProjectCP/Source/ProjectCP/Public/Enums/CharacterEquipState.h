#pragma once

UENUM(BlueprintType)
enum class ECharacterEquipState : uint8
{
	ECS_Equip UMETA(DisplayName = "Equip"),
	ECS_NotEquip UMETA(DisplayName = "Not Equip")
};