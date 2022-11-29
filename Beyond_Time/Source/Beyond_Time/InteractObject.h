// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class BEYOND_TIME_API InteractObject
{
public:
	InteractObject();
	~InteractObject();

protected:
	virtual void OnInteract();
};
