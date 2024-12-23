#pragma once

UENUM(BlueprintType)
enum class EWeaponState :  uint8
{
	EWS_Ready UMETA(DisplayName = "Ready"),
	EWS_Shooting UMETA(DisplayName = "Shooting"),
	EWS_Reloading UMETA(DisplayName = "Reloading"),
};
