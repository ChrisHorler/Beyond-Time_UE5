// Fill out your copyright notice in the Description page of Project Settings.


#include "PickupHandler.h"
#include "InteractableInterface.h"

// Sets default values for this component's properties
UPickupHandler::UPickupHandler()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	PickupObject = nullptr;
	IsHoldingPickupObject = false;
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

	FVector End = Camera->GetForwardVector() * MaxInteractDistance + Start;

	GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, TraceChannelProperty, CollisionQueryParams);

	//if actor has been hit
	if (HitResult.bBlockingHit && HitResult.GetActor()->ActorHasTag(FName(TEXT("Pickup")))) 
	{
		if (PickupObject == nullptr)
			PickupObject = HitResult.GetActor();
	}	
	else
	{
		if (!IsHoldingPickupObject)
			PickupObject = nullptr;
	}	
		
	//setting crosshair image for better UserExperience
	if (PlayerHUD != nullptr)
	{
		//if PickupObject == false it returns CrosshairTexture
		//if PickupObject == true and IsHoldingPickupObject == true returns CrosshairTexture
		//if PickupObject == true and IsHoldingPickupObject == false returns HandTexture
		PlayerHUD->SetImage(PickupObject ? (IsHoldingPickupObject ? CrosshairTexture : HandTexture) : CrosshairTexture);
	}
		
		

	if (IsHoldingPickupObject && PickupObject != nullptr)
	{	
		auto NewForward = Camera->GetForwardVector() * ItemHeldOffset.X;
		auto NewRight = Camera->GetRightVector() * ItemHeldOffset.Y;
		auto NewUp = Camera->GetUpVector() * ItemHeldOffset.Z;

		auto newLocation = NewForward + NewRight + NewUp + Start;


		//PickupObject->SetActorLocation(FMath::Lerp(PickupObject->GetActorLocation(), newLocation, FMath::Exp2(-PickedUpLerpSpeed * DeltaTime)));
		PickupObject->SetActorLocation(newLocation);
		PickupObject->SetActorRotation(FRotator(Camera->GetRelativeRotation().Pitch, Camera->GetRelativeRotation().Yaw, 0));
		
	}
}

void UPickupHandler::SetupParameters(FCollisionQueryParams Params, UCameraComponent* CameraComponent, UPlayerHUD* HeadsUpDisplay)
{
	if(CameraComponent != nullptr)
		Camera = CameraComponent;

	if (HeadsUpDisplay != nullptr)
		PlayerHUD = HeadsUpDisplay;
		
	CollisionQueryParams = Params;
}

void UPickupHandler::PickupSelectedObject()
{
	if (PickupObject != nullptr)
	{
		IsHoldingPickupObject = !IsHoldingPickupObject;

		UPrimitiveComponent* Component = Cast<UPrimitiveComponent>(PickupObject->GetRootComponent());
		if (Component)
		{
			Component->SetEnableGravity(!IsHoldingPickupObject);
			Component->SetSimulatePhysics(!IsHoldingPickupObject);
			PickupObject->SetActorEnableCollision(!IsHoldingPickupObject);

			if (!IsHoldingPickupObject)
				PickupObject = nullptr;
		}
	}	
}

void UPickupHandler::InteractWithPickedObject() 
{
	if (PickupObject == nullptr && !IsHoldingPickupObject)
		return;

	//check if any component implements the interface
	auto ComponentsArray = PickupObject->GetComponents().Array();
	for (size_t i = 0; i < ComponentsArray.Num(); i++)
	{
		if (ComponentsArray[i]->GetClass()->ImplementsInterface(UInteractableInterface::StaticClass()))
			IInteractableInterface::Execute_OnInteract(ComponentsArray[i]);
	}
	
}
