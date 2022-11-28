// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
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

	void SetupParameters(FCollisionQueryParams Params, UCameraComponent* CameraComponent);
	void PickupIfObjectIsSelected();

	UPROPERTY()
	UCameraComponent* Camera;

	UPROPERTY(EditAnywhere)
	float MaxInteractDistance = 1000.0f;

	UPROPERTY(EditAnywhere)
	UChildActorComponent* ItemHeldPoint;
	
	UPROPERTY()
	FHitResult HitResult;

	UPROPERTY(EditAnywhere, Category="Collision")
	TEnumAsByte<ECollisionChannel> TraceChannelProperty = ECC_Pawn;

	FCollisionQueryParams CollisionQueryParams;
	
};
