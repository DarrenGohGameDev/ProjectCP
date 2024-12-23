// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InputActionValue.h"
#include "InputManager.generated.h"


class UInputAction;
class UInputMappingContext;
class UCharacterMovementManager;
class UWeaponManager;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTCP_API UInputManager : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInputManager();

	void Init(APlayerController * playerController, ACharacter* playerCharacther);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputMappingContext * IMC_player;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction * IA_walk;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction * IA_shoot;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction * IA_jump;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* IA_look;

	virtual void SetupInputBinding(APlayerController* playerController);

	UCharacterMovementManager* characterMovementManager;

	UWeaponManager* characterWeaponManager;

private : 
	APlayerController * GetOwnerController();

	void InputUseCurrentWeapon(const FInputActionValue& value);
		
};
