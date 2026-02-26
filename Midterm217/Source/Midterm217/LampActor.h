// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VillageActor.h"
#include "LampActor.generated.h"

/**
 * 
 */
UCLASS()
class MIDTERM217_API ALampActor : public AVillageActor
{
	GENERATED_BODY()
	
public:
	ALampActor();

protected:
	virtual void BeginPlay() override;

	UMaterialInstance* DynamicMaterial;
};
