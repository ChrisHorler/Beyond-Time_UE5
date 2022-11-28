// Fill out your copyright notice in the Description page of Project Settings.


#include "PickupHandler.h"

// Sets default values for this component's properties
UPickupHandler::UPickupHandler()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	ItemHeldPoint = CreateDefaultSubobject<UChildActorComponent>(TEXT("ItemHeldPoint"));
}


// Called when the game starts
void UPickupHandler::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void UPickupHandler::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UPickupHandler::SetupPickupHandler(UCameraComponent* CameraComponent)
{
	if(CameraComponent != nullptr)
		Camera = CameraComponent;
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Camera is NULL!"));
	}
}

void UPickupHandler::ActivateLineTrace(FCollisionQueryParams Params)
{
	FVector Start = Camera->GetComponentLocation();

	FVector ForwardVector = Camera->GetForwardVector();
	FVector End = ForwardVector * 500.0f + Start;

	DrawDebugLine(GetWorld(), Start, End, FColor::Green, false, 1, 0, 2);

	GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, TraceChannelProperty, Params);

	//if actor has been hit
	if(HitResult.bBlockingHit && IsValid(HitResult.GetActor()))
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, *HitResult.GetActor()->GetName());	
	}
}

