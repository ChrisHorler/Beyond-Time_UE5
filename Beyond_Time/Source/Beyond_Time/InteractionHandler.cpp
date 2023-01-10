// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractionHandler.h"
#include "InteractableInterface.h"
#include "Async/TaskGraphInterfaces.h"

// Sets default values for this component's properties
UInteractionHandler::UInteractionHandler()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	PickupObject = nullptr;
	IsHoldingPickupObject = false;
}


// Called when the game starts
void UInteractionHandler::BeginPlay()
{
	Super::BeginPlay();

}


// Called every frame
void UInteractionHandler::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//interact raycast
	if (Camera == nullptr)
		return;

	FVector Start = Camera->GetComponentLocation();

	FVector End = Camera->GetForwardVector() * MaxInteractDistance + Start;

	GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, TraceChannelProperty, CollisionQueryParams);

	//pickup time tool for player
	if (HitResult.bBlockingHit && HitResult.GetActor()->ActorHasTag(FName(TEXT("TimeTool"))))
	{
		if (!TimeToolPickedUp)
		{
			if (TimeTool == nullptr)
				TimeTool = HitResult.GetActor();
		}
	}

	if (TimeToolPickedUp)
	{
		auto NewForward = Camera->GetForwardVector() * (ItemHeldOffset.X + TimeToolLocationOffset.X);
		auto NewRight = Camera->GetRightVector() * (ItemHeldOffset.Y + TimeToolLocationOffset.Y);
		auto NewUp = Camera->GetUpVector() * (ItemHeldOffset.Z + TimeToolLocationOffset.Z);

		auto NewLocation = NewForward + NewRight + NewUp + Start;
		auto NewRotation = FRotator(Camera->GetRelativeRotation().Pitch + TimeToolRotationOffset.Pitch, Camera->GetRelativeRotation().Yaw + TimeToolRotationOffset.Yaw, TimeToolRotationOffset.Roll);
		//sway rotations for left and right & forward and back movement
		auto SwayRotationLR = SwayAmplitude * FMath::Sin(SwayFrequency * DeltaTime * SwayDirectionLR);
		auto SwayRotationFB = SwayAmplitude * FMath::Sin(SwayFrequency * DeltaTime * SwayDirectionFB);

		TimeTool->SetActorLocation(NewLocation); //set location to offset point
		TimeTool->AddActorLocalRotation(FRotator(SwayRotationFB, 0, SwayRotationLR)); //add movement sway to object (direction controlled by movement input)
		TimeTool->SetActorRotation(FMath::Lerp(TimeTool->GetActorRotation(), NewRotation, PickupRotationSpeed * DeltaTime)); //lerp rotation back to default rotation so sway resets and gives smoother feel	
	}
	//handle button press
	HoveringOnButton = HitResult.bBlockingHit && HitResult.GetActor()->ActorHasTag(FName(TEXT("Button")));

	//handle pickup object
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
		if (!HoveringOnButton)
			PlayerHUD->SetImage(PickupObject ? (IsHoldingPickupObject ? CrosshairTexture : HandTexture) : CrosshairTexture);
		else
			PlayerHUD->SetImage(PressTexture);
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

void UInteractionHandler::SetupParameters(FCollisionQueryParams Params, UCameraComponent* CameraComponent, UPlayerHUD* HeadsUpDisplay)
{
	if (CameraComponent != nullptr)
		Camera = CameraComponent;

	if (HeadsUpDisplay != nullptr)
		PlayerHUD = HeadsUpDisplay;

	CollisionQueryParams = Params;
}

void UInteractionHandler::PickupSelectedObject()
{
	if (TimeTool != nullptr && !TimeToolPickedUp)
	{
		TimeToolPickedUp = true;

		UPrimitiveComponent* Component = Cast<UPrimitiveComponent>(TimeTool->GetRootComponent());
		if (Component)
		{
			Component->SetEnableGravity(false);
			Component->SetSimulatePhysics(false);
			TimeTool->SetActorEnableCollision(false);
		}
	}

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

void UInteractionHandler::InteractWithHoveringButton()
{
	if (HoveringOnButton)
	{
		InteractWithObject(HitResult.GetActor());
	}
}


void UInteractionHandler::InteractWithHoldingObject()
{
	if (PickupObject == nullptr || !IsHoldingPickupObject)
		return;

	InteractWithObject(PickupObject);
}

void UInteractionHandler::InteractWithObject(AActor* Object)
{
	//check if any component implements the interface
	auto ComponentsArray = Object->GetComponents().Array();

	for (size_t i = 0; i < ComponentsArray.Num(); i++)
	{
		if (ComponentsArray[i]->GetClass()->ImplementsInterface(UInteractableInterface::StaticClass()))
			IInteractableInterface::Execute_OnInteract(ComponentsArray[i]);
	}
}

