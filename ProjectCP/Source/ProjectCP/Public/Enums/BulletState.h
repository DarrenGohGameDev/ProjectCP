#pragma once

UENUM(BlueprintType)
enum class EBulletState : uint8
{
	EBS_InUse UMETA(DisplayName = "InUse"),
	EBS_NotInUse UMETA(DisplayName = "NotUse")
};