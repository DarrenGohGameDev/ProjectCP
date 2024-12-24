#pragma once

UENUM(BlueprintType)
enum class EItemType : uint8
{
	EIT_Item UMETA(DisplayName = "Item"),
	EIT_Weapon UMETA(DisplayName = "Weapon")
};