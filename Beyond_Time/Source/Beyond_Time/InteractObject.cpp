// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractObject.h"

InteractObject::InteractObject()
{
}

InteractObject::~InteractObject()
{
}

void InteractObject::OnInteract()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("You've interacted with an object"));
}
