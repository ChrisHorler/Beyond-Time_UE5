// Fill out your copyright notice in the Description page of Project Settings.


#include "GameCharacter.h"

#include "TimeTravelComponent.h"
#include "VectorUtil.h"
#include "PlayerHUD.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Blueprint/UserWidget.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
AGameCharacter::AGameCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	PlayerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));
	TimeTravelHandler = CreateDefaultSubobject<UTimeTravelComponent>(TEXT("TimeTravelhandler"));
	PickupHandler = CreateDefaultSubobject<UPickupHandler>(TEXT("PickupHandler"));

	Jumping = false;

}                                                                                  

// Called when the game starts or when spawned
void AGameCharacter::BeginPlay()
{
	Super::BeginPlay();
	PlayerController = UGameplayStatics::GetPlayerController(this->GetWorld(), 0);

	//instance Player HUD
	if (PlayerHUDClass)
	{
		PlayerHUD = CreateWidget<UPlayerHUD>(GetWorld(), PlayerHUDClass, FName(TEXT("PlayerHUD")));
		check(PlayerHUD);
		PlayerHUD->AddToPlayerScreen();
	}

	CollisionQueryParams.AddIgnoredActor(this);
	PickupHandler->SetupParameters(CollisionQueryParams, PlayerCamera, PlayerHUD);
}

// Called every frame
void AGameCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Move and rotate camera ralative to player
	PlayerCamera->SetRelativeLocation(FVector(GetActorLocation() + CameraOffset));
	PlayerCamera->SetRelativeRotation(FRotator(PlayerCamera->GetRelativeRotation().Pitch, GetActorRotation().Yaw, PlayerCamera->GetRelativeRotation().Roll));

	if(Jumping && !TimeTravelHandler->TimeTravelActivated && !PlayerDead)
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
	PlayerInputComponent->BindAction(TEXT("Pickup"), IE_Pressed, PickupHandler, &UPickupHandler::PickupSelectedObject);
	PlayerInputComponent->BindAction(TEXT("Interact"), IE_Pressed, PickupHandler, &UPickupHandler::InteractWithPickedObject);
}

void AGameCharacter::CheckJump()
{
	Jumping = !Jumping; 
}

void AGameCharacter::ActivateTimeTravelCheck()
{
	if(!GetCharacterMovement()->IsFalling() && !PlayerDead)
		TimeTravelHandler->ActivateTimeTravel();
}



void AGameCharacter::MoveFb(float Value)
{
	//Debug something
	//GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, FString::Printf(TEXT("%f = FloatVariable"), Value));
	//GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, TEXT("Some debug message!"));
	
	if(!TimeTravelHandler->TimeTravelActivated && !PlayerDead)
		AddMovementInput(GetActorForwardVector(), Value * MoveSpeed);	
}

void AGameCharacter::MoveLr(float Value)
{
	if(!TimeTravelHandler->TimeTravelActivated && !PlayerDead)
		AddMovementInput(-GetActorRightVector(), Value * MoveSpeed);	
}

void AGameCharacter::RotateX(float ValueX)
{
	if (!PlayerDead)
		AddControllerYawInput(ValueX * CameraSensitivity);
}

void AGameCharacter::RotateY(float ValueY)
{
	if (!PlayerDead)
	{
		CameraClampedRotation = PlayerCamera->GetRelativeRotation();
		CameraClampedRotation.Pitch += ValueY * CameraSensitivity;
		CameraClampedRotation.Pitch = FMath::Clamp(CameraClampedRotation.Pitch, ClampMin, ClampMax);
		PlayerCamera->SetRelativeRotation(CameraClampedRotation);
	}	
}

void AGameCharacter::SetPlayerRotation(FRotator NewRotation)
{
	PlayerController->SetControlRotation(NewRotation);
}

void AGameCharacter::SetPlayerDeathState(bool State)
{
	PlayerDead = State;
}

bool AGameCharacter::GetPlayerDeathState()
{
	return PlayerDead;
}





