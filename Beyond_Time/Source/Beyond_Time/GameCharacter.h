// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickupHandler.h"
#include "PlayerHUD.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "GameCharacter.generated.h"

class UTimeTravelComponent;
UCLASS()
class BEYOND_TIME_API AGameCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGameCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void SetPlayerRotation(FRotator NewRotation);
	void SetPlayerDeathState(bool State);
	bool GetPlayerDeathState();

private:
	//Methods
	void MoveFb(float Value);
	void MoveLr(float Value);
	void RotateX(float ValueX);
	void RotateY(float ValueY);
	void CheckJump();
	void ActivateTimeTravelCheck();

	//User interface
	UPROPERTY(EditAnywhere)
	TSubclassOf<class UPlayerHUD> PlayerHUDClass;

	UPROPERTY()
	class UPlayerHUD* PlayerHUD;
	
	//Properties
	UPROPERTY(EditAnywhere, Category = "Player Settings")
	float MoveSpeed = 1.0f;

	UPROPERTY(EditAnywhere, Category = "Camera Settings")
	float CameraSensitivity = 1.0f;
	
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
	float ClampMin = -30;
	
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
	float ClampMax = 40;

	UPROPERTY(EditAnywhere, Category = "Camera Settings")
	FVector3d CameraOffset;
	
	UPROPERTY()
	FRotator CameraClampedRotation;

	UPROPERTY()
	bool Jumping;

	UPROPERTY()
	bool PlayerDead = false;
	
	UPROPERTY(EditAnywhere)
	UCameraComponent* PlayerCamera;

	UPROPERTY(EditAnywhere)
	APlayerController* PlayerController;

	UPROPERTY(EditAnywhere)
	UTimeTravelComponent* TimeTravelHandler;

	UPROPERTY(EditAnywhere)
	UPickupHandler* PickupHandler;
	
	FCollisionQueryParams CollisionQueryParams;
};
