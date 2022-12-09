// Fill out your copyright notice in the Description page of Project Settings.


#include "GameCharacter.h"

#include "TimeTravelComponent.h"
#include "VectorUtil.h"
#include "PlayerHUD.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Blueprint/UserWidget.h"
#include "Math/UnrealMathUtility.h"
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

	//handle when play can jump
	if(Jumping && !TimeTravelHandler->TimeTravelActivated && !PlayerDead)
	{
		Jump();
	}

	//Move and rotate camera ralative to player
	PlayerCamera->SetRelativeLocation(FVector(GetActorLocation() + CameraOffset));
	PlayerCamera->SetRelativeRotation(FRotator(PlayerCamera->GetRelativeRotation().Pitch, GetActorRotation().Yaw, PlayerCamera->GetRelativeRotation().Roll));

	//add camera bobbing offset
	FVector CameraPosition = PlayerCamera->GetRelativeLocation();

	float BobbingOffset = CameraBobbing(DeltaTime);
	CameraPosition.Z += BobbingOffset;

	PlayerCamera->SetRelativeLocation(CameraPosition);

	//handle death text
	PlayerHUD->DiedText->SetOpacity(PlayerDead ? 1.0f : 0.0f);
}

float AGameCharacter::CameraBobbing(float DeltaTime)
{
	if (!EnableCameraBobbing || PlayerDead)
		return 0.0f;

	static float TotalTime = 0.0f;
	TotalTime += DeltaTime;

	float MultiplierAmplitude = (FMath::Abs(InputX) > 0 || FMath::Abs(InputY) > 0) ? BobWalkAmplitudeMutiplier : 1.0f;
	float MultiplierFrequency = (FMath::Abs(InputX) > 0 || FMath::Abs(InputY) > 0) ? BobWalkFrequencyMutiplier : 1.0f;

	float BobbingOffset = BobAmplitude * MultiplierAmplitude * FMath::Sin(TotalTime * BobFrequency * MultiplierFrequency * PI);
	return BobbingOffset;
}


// Called to bind functionality to input
void AGameCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Move and rotation input
	PlayerInputComponent->BindAxis(TEXT("MoveFb"), this, &AGameCharacter::MoveFb);
	PlayerInputComponent->BindAxis(TEXT("MoveLr"), this, &AGameCharacter::MoveLr);
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
	
	if (!TimeTravelHandler->TimeTravelActivated && !PlayerDead) 
	{
		AddMovementInput(GetActorForwardVector(), Value * MoveSpeed);
		PickupHandler->SwayDirectionFB = Value;
		InputY = Value;
	}
		
}

void AGameCharacter::MoveLr(float Value)
{
	if (!TimeTravelHandler->TimeTravelActivated && !PlayerDead) 
	{
		AddMovementInput(-GetActorRightVector(), Value * MoveSpeed);
		PickupHandler->SwayDirectionLR = -Value;
		InputX = Value;
	}	
}

void AGameCharacter::RotateX(float ValueX)
{
	if (!PlayerDead)
		AddControllerYawInput(ValueX * CameraSensitivityX);
}

void AGameCharacter::RotateY(float ValueY)
{
	if (!PlayerDead)
	{
		CameraClampedRotation = PlayerCamera->GetRelativeRotation();
		CameraClampedRotation.Pitch += ValueY * CameraSensitivityY;
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

void AGameCharacter::SetPlayerGravityState(bool State)
{
	UPrimitiveComponent* Component = Cast<UPrimitiveComponent>(GetRootComponent());
	if (Component)
	{
		//resets all physics velocity
		Component->SetEnableGravity(State);
	}
}

bool AGameCharacter::GetPlayerDeathState()
{
	return PlayerDead;
}





