// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/BaseCharacter.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

class UInputManager;
class UCameraComponent;
class USpringArmComponent;
class APlayerHud;

UCLASS()
class PROJECTCP_API APlayerCharacter : public ABaseCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Input Manager")
	UInputManager* inputManager;

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* playerCamera;

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* playerCameraSpringArm;

	UPROPERTY(EditAnywhere, Category = "UI")
	APlayerHud* playerHud;

private:

	void SetPlayerOverlay();


};
