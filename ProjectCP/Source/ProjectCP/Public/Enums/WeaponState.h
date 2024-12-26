#pragma once

UENUM(BlueprintType)
enum class EWeaponState :  uint8
{
	EWS_Ready UMETA(DisplayName = "Ready"),
	EWS_NotReady UMETA(DisplayName = "NotReady"),
	EWS_Reloading UMETA(DisplayName = "Reloading"),
};
