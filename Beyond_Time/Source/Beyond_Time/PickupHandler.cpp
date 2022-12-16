// Fill out your copyright notice in the Description page of Project Settings.


#include "PickupHandler.h"
#include "InteractableInterface.h"
#include "Async/TaskGraphInterfaces.h"

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

		auto NewLocation = NewForward + NewRight + NewUp + Start;
		auto NewRotation = FRotator(Camera->GetRelativeRotation().Pitch, Camera->GetRelativeRotation().Yaw, 0);
		//sway rotations for left and right & forward and back movement
		auto SwayRotationLR = SwayAmplitude * FMath::Sin(SwayFrequency * DeltaTime * SwayDirectionLR);
		auto SwayRotationFB = SwayAmplitude * FMath::Sin(SwayFrequency * DeltaTime * SwayDirectionFB);
		
		PickupObject->SetActorLocation(NewLocation); //set location to offset point
		PickupObject->AddActorLocalRotation(FRotator(SwayRotationFB, 0, SwayRotationLR)); //add movement sway to object (direction controlled by movement input)
		PickupObject->SetActorRotation(FMath::Lerp(PickupObject->GetActorRotation(), NewRotation, PickupRotationSpeed * DeltaTime)); //lerp rotation back to default rotation so sway resets and gives smoother feel
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
	if (PickupObject == nullptr || !IsHoldingPickupObject)
		return;

	//check if any component implements the interface
	auto ComponentsArray = PickupObject->GetComponents().Array();
	for (size_t i = 0; i < ComponentsArray.Num(); i++)
	{
		if (ComponentsArray[i]->GetClass()->ImplementsInterface(UInteractableInterface::StaticClass()))
			IInteractableInterface::Execute_OnInteract(ComponentsArray[i]);
	}
	
}
