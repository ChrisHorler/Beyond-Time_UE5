// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractObject.h"
#include "Components/ActorComponent.h"
#include "ObjectInteractComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BEYOND_TIME_API UOrangeConeInteraction : public UActorComponent, public InteractObject
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOrangeConeInteraction();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void OnInteract() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
