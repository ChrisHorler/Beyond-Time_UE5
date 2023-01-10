// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractionHandler.h"
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
	void SetPlayerGravityState(bool State);
	bool GetPlayerDeathState();

	UPROPERTY()
	class UPlayerHUD* PlayerHUD;

private:
	//Methods
	void MoveFb(float Value);
	void MoveLr(float Value);
	void RotateX(float ValueX);
	void RotateY(float ValueY);
	void CheckJump();
	void ActivateTimeTravelCheck();
	float CameraBobbing(float DeltaTime);

	//User interface
	UPROPERTY(EditAnywhere)
	TSubclassOf<class UPlayerHUD> PlayerHUDClass;
	
	//Properties
	UPROPERTY(EditAnywhere, Category = "Player Settings")
	float MoveSpeed = 1.0f;

	UPROPERTY(EditAnywhere, Category = "Camera Settings")
	float CameraSensitivityX = 0.75f;
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
	float CameraSensitivityY = 1.0f;
	
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
	float ClampMin = -75;
	
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
	float ClampMax = 65;

	UPROPERTY(EditAnywhere, Category = "Camera Settings")
	FVector3d CameraOffset;

	UPROPERTY(EditAnywhere, Category = "Camera Settings")
	bool EnableCameraBobbing = true;

	UPROPERTY(EditAnywhere, Category = "Camera Settings")
	float BobAmplitude = 0.5f;

	UPROPERTY(EditAnywhere, Category = "Camera Settings")
	float BobFrequency = 1.0f;

	UPROPERTY(EditAnywhere, Category = "Camera Settings")
	float BobWalkAmplitudeMutiplier = 4.0f;

	UPROPERTY(EditAnywhere, Category = "Camera Settings")
	float BobWalkFrequencyMutiplier = 4.0f;

	UPROPERTY(EditAnywhere, Category = "Camera Settings")
	float RollWalkMutiplier = 0.04f;

	UPROPERTY(EditAnywhere, Category = "Camera Settings")
	float RollStandMutiplier = 0.0015f;

	float InputX;
	float InputY;
	
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
	UInteractionHandler* InteractionHandler;
	
	FCollisionQueryParams CollisionQueryParams;
};
