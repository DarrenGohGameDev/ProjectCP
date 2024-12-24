// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InputActionValue.h"
#include "InputManager.generated.h"


class UInputAction;
class UInputMappingContext;
class UCharacterMovementManager;
class UInventoryManager;

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

	virtual void SetupInputBinding(APlayerController* playerController);

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputMappingContext * IMC_player;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction * walkIA;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction * shootIA;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction * jumpIA;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* lookIA;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* interactIA;

	UCharacterMovementManager* characterMovementManager;

	UInventoryManager* characterInventoryManager;

private : 
	APlayerController * GetOwnerController();

	void InputUseCurrentWeapon(const FInputActionValue& value);

	void InputPickUpItem(const FInputActionValue& value);

	void InputJump(const FInputActionValue& value);
	
	void InputMove(const FInputActionValue& value);

	void InputLook(const FInputActionValue& value);
		
};
