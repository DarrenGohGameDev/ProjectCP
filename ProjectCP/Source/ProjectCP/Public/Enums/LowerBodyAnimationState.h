#pragma once

UENUM(BlueprintType)
enum class ELowerBodyAnimationState : uint8
{
	ELBAS_Forward UMETA(DisplayName = "Forward"),
	ELBAS_Backward UMETA(DisplayName = "Backward"),
	ELBAS_Left UMETA(DisplayName = "Left"),
	ELBAS_Right UMETA(DisplayName = "Right")
};