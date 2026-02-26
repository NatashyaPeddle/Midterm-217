// Fill out your copyright notice in the Description page of Project Settings.


#include "LampActor.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Components/StaticMeshComponent.h"

ALampActor::ALampActor()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ALampActor::BeginPlay()
{
	Super::BeginPlay();

	FLinearColor LampColor = FLinearColor::Yellow;

	if (Mesh)
	{
		DynamicMaterial = Mesh->CreateDynamicMaterialInstance(0);

		if (DynamicMaterial)
		{
			DynamicMaterial->GetVectorParameterValue(TEXT("Color"), LampColor);
		}
	}
}
