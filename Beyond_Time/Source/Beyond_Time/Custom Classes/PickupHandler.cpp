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

	//interact raycast
	if (Camera == nullptr)
		return;

	FVector Start = Camera->GetComponentLocation();	

	FVector ForwardVector = Camera->GetForwardVector();
	FVector End = ForwardVector * MaxInteractDistance + Start;

	GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, TraceChannelProperty, CollisionQueryParams);

	//if actor has been hit
	if (HitResult.bBlockingHit && HitResult.GetActor()->ActorHasTag(FName(TEXT("Pickup"))))
	{
		
	}
}

void UPickupHandler::SetupParameters(FCollisionQueryParams Params, UCameraComponent* CameraComponent)
{
	if(CameraComponent != nullptr)
		Camera = CameraComponent;

	CollisionQueryParams = Params;
}


void UPickupHandler::PickupIfObjectIsSelected()
{

}
