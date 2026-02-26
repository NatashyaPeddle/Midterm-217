// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VillageActor.h"
#include "HouseActor.generated.h"

/**
 * 
 */
UCLASS()
class MIDTERM217_API AHouseActor : public AVillageActor
{
	GENERATED_BODY()
	
	virtual void Interact() override;
	virtual void UpdateAppearance() override;
};
