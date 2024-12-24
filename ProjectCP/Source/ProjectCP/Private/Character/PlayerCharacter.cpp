// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/PlayerCharacter.h"
#include "Managers/InputManager.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	inputManager = CreateDefaultSubobject<UInputManager>(TEXT("InputManager"));

	playerCameraSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("PlayerCameraSpringArm"));
	playerCameraSpringArm->SetupAttachment(GetRootComponent());
	playerCameraSpringArm->TargetArmLength = 0.f;
	playerCameraSpringArm->bUsePawnControlRotation = true;

	playerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));
	playerCamera->SetupAttachment(playerCameraSpringArm);

	GetCharacterMovement()->bOrientRotationToMovement = false;
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	inputManager->Init(Cast<APlayerController>(GetController()), this);
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}