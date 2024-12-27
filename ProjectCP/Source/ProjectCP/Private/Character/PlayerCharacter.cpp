// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/PlayerCharacter.h"
#include "Managers/InputManager.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "UI/PlayerHud.h"

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

	playerHud = CreateDefaultSubobject<APlayerHud>(TEXT("PlayerHud"));
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	inputManager->Init(Cast<APlayerController>(GetController()), this);
}

void APlayerCharacter::SetPlayerOverlay()
{
	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	if (PlayerController)
	{
		APlayerHud* PlayerHUD = Cast<APlayerHud>(PlayerController->GetHUD());
		if (PlayerHUD)
		{
			/*PlayerOverlay = PlayerHUD->GetPlayerOverlay();
			PlayerOverlay->SetSoulAmount(AttributeComponent->GetCurrentSoul());
			PlayerOverlay->SetGoldCoinAmount(AttributeComponent->GetCurrentGold());*/
		}
	}
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