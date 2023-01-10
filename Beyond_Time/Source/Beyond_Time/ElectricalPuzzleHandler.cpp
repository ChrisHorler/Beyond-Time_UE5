// Fill out your copyright notice in the Description page of Project Settings.


#include "ElectricalPuzzleHandler.h"
#include "ButtonComponent.h"

// Sets default values for this component's properties
UElectricalPuzzleHandler::UElectricalPuzzleHandler()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UElectricalPuzzleHandler::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UElectricalPuzzleHandler::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (NumbersGuessed == ButtonAmount && !Guessed)
	{
		Guessed = true;
		GuessingCode.Equals(CorrectCode) ? CompletePuzzle() : ResetPuzzle();
	}
}

void UElectricalPuzzleHandler::AddNumberToGuessCode(int Number)
{
	GuessingCode += FString::FromInt(Number);

	NumbersGuessed++;
}

void UElectricalPuzzleHandler::ResetPuzzle()
{
	//reset buttons
	for (size_t i = 0; i < AllButtons.Num(); i++)
	{
		auto Component = AllButtons[i]->FindComponentByClass<UButtonComponent>();

		if (Component != nullptr) 
		{
			Component->ButtonSet = false;
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("NULL"));
		}
	}

	//reset values
	NumbersGuessed = 0;
	GuessingCode = "";
	Guessed = false;

	//show red light
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("WRONG COMBINATION!"));
}

void UElectricalPuzzleHandler::CompletePuzzle()
{
	//show green light and open gate
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Green, TEXT("RIGHT COMBINATION!"));
}

