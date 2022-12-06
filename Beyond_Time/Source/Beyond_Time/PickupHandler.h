// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "PlayerHUD.h"
#include "Components/ActorComponent.h"
#include "PickupHandler.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BEYOND_TIME_API UPickupHandler : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPickupHandler();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SetupParameters(FCollisionQueryParams Params, UCameraComponent* CameraComponent, UPlayerHUD* HeadsUpDisplay);
	void PickupSelectedObject();
	void InteractWithPickedObject();


	UPROPERTY(EditAnywhere, Category = "Pickup Settings")
		float MaxInteractDistance = 1000.0f;

	UPROPERTY(EditAnywhere, Category = "Pickup Settings")
		float PickedUpLerpSpeed = 2.0f;

	UPROPERTY(EditAnywhere, Category = "Pickup Settings")
		FVector ItemHeldOffset;

	UPROPERTY(EditAnywhere, Category = "Pickup Settings")
		UTexture2D* HandTexture;
	UPROPERTY(EditAnywhere, Category = "Pickup Settings")
		UTexture2D* CrosshairTexture;

	UPROPERTY()
		bool IsHoldingPickupObject;

	UPROPERTY()
		AActor* PickupObject;

	UPROPERTY()
		UCameraComponent* Camera;
	
	UPROPERTY()
		FHitResult HitResult;

	UPROPERTY()
		UPlayerHUD* PlayerHUD;

	UPROPERTY(EditAnywhere, Category="Collision")
		TEnumAsByte<ECollisionChannel> TraceChannelProperty = ECC_Pawn;

	FCollisionQueryParams CollisionQueryParams;
};

