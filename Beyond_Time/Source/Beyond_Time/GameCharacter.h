// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "GameCharacter.generated.h"

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


private:
	//Methods
	void MoveFb(float Value);
	void MoveLr(float Value);
	void RotateX(float ValueX);
	void RotateY(float ValueY);
	void CheckJump();

	
	
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
	
	UPROPERTY(EditAnywhere)
	UCameraComponent* PlayerCamera;

	UPROPERTY(EditAnywhere)
	UCapsuleComponent* PlayerCapsule;
};
