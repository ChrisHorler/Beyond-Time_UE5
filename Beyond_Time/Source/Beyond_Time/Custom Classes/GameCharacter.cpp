// Fill out your copyright notice in the Description page of Project Settings.


#include "GameCharacter.h"

#include "TimeTravelComponent.h"
#include "VectorUtil.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AGameCharacter::AGameCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	PlayerCapsule = GetCapsuleComponent();
	
	PlayerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));
	TimeTravelHandler = CreateDefaultSubobject<UTimeTravelComponent>(TEXT("TimeTravelhandler"));
	PickupHandler = CreateDefaultSubobject<UPickupHandler>(TEXT("PickupHandler"));
	CollisionQueryParams.AddIgnoredActor(this);

	Jumping = false;
}                                                                                  

// Called when the game starts or when spawned
void AGameCharacter::BeginPlay()
{
	Super::BeginPlay();
	PickupHandler->SetupPickupHandler(PlayerCamera);
}

// Called every frame
void AGameCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//camera movement
	PlayerCamera->SetRelativeLocation(FVector(GetActorLocation() + CameraOffset));
	PlayerCamera->SetRelativeRotation(FRotator(PlayerCamera->GetRelativeRotation().Pitch, GetActorRotation().Yaw, PlayerCamera->GetRelativeRotation().Roll));

	if(Jumping)
	{
		Jump();
	}
}

// Called to bind functionality to input
void AGameCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Move and rotation input
	PlayerInputComponent->BindAxis(TEXT("MoveFB"), this, &AGameCharacter::MoveFb);
	PlayerInputComponent->BindAxis(TEXT("MoveLR"), this, &AGameCharacter::MoveLr);
	PlayerInputComponent->BindAxis(TEXT("RotateX"), this, &AGameCharacter::RotateX);
	PlayerInputComponent->BindAxis(TEXT("RotateY"), this, &AGameCharacter::RotateY);

	//jump input
	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &AGameCharacter::CheckJump);
	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Released, this, &AGameCharacter::CheckJump);

	//time travel activate
	PlayerInputComponent->BindAction(TEXT("Teleport"), IE_Pressed, this, &AGameCharacter::ActivateTimeTravelCheck);

	//pick up object activate
	PlayerInputComponent->BindAction(TEXT("Pickup"), IE_Pressed, this, &AGameCharacter::ActivatePickupCheck);
}

void AGameCharacter::CheckJump()
{
	if(!TimeTravelHandler->TimeTravelActivated)
		Jumping = !Jumping; 
}

void AGameCharacter::ActivateTimeTravelCheck()
{
	if(!GetCharacterMovement()->IsFalling())
		TimeTravelHandler->ActivateTimeTravel();
}

void AGameCharacter::ActivatePickupCheck()
{
	if(!TimeTravelHandler->TimeTravelActivated)
		PickupHandler->ActivateLineTrace(CollisionQueryParams);
}


void AGameCharacter::MoveFb(float Value)
{
	//Debug something
	//GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, FString::Printf(TEXT("%f = FloatVariable"), Value));
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Some debug message!"));
	
	if(!TimeTravelHandler->TimeTravelActivated)
		AddMovementInput(GetActorForwardVector(), Value * MoveSpeed);	
}

void AGameCharacter::MoveLr(float Value)
{
	if(!TimeTravelHandler->TimeTravelActivated)
		AddMovementInput(-GetActorRightVector(), Value * MoveSpeed);	
}

void AGameCharacter::RotateX(float ValueX)
{
	AddControllerYawInput(ValueX * CameraSensitivity);
}

void AGameCharacter::RotateY(float ValueY)
{
	CameraClampedRotation = PlayerCamera->GetRelativeRotation();
	CameraClampedRotation.Pitch += ValueY * CameraSensitivity;
	CameraClampedRotation.Pitch = FMath::Clamp(CameraClampedRotation.Pitch, ClampMin, ClampMax);
	PlayerCamera->SetRelativeRotation(CameraClampedRotation);
}





