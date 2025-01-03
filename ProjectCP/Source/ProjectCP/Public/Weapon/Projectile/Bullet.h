// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bullet.generated.h"

class UProjectileMovementComponent;
class UStaticMeshComponent;
class USphereComponent;

UCLASS()
class PROJECTCP_API ABullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABullet();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(VisibleAnywhere)
	USphereComponent* mSphere;

	UPROPERTY(EditAnywhere, Category = "Stats")
	int32 damage;

	UPROPERTY(EditAnywhere, Category = "Stats")
	int32 projectileSpeed;

	UPROPERTY(VisibleAnywhere, Category = "Stats")
	UProjectileMovementComponent* projectileMovementComponent;

	UPROPERTY(EditAnywhere ,Category = "Bullet Skin")
	UStaticMeshComponent* BulletMeshComponent;

private:	
	

};
