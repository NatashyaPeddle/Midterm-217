// Fill out your copyright notice in the Description page of Project Settings.


#include "HouseActor.h"

AHouseActor::AHouseActor()
{
	for (int32 i = 0; i < 4; i++)
	{
		FString WindowName = "Window" + FString::FromInt(i);

		UStaticMeshComponent* Window = CreateDefaultSubobject<UStaticMeshComponent>(*WindowName);

		Window->SetupAttachment(Mesh);
		Window->SetRelativeLocation(FVector(i * 100.f, 0.f, 200.f));
	}

	bool bIsNight = true;

	if (bIsNight)
	{
		Light->SetVisibility(true);
	}
	else
	{
		Light->SetVisibility(false);
	}
}

void AHouseActor::Interact()
{
	UE_LOG(LogTemp, Warning, TEXT("Entering the House"));
}

void AHouseActor::UpdateAppearance()
{
	UE_LOG(LogTemp, Warning, TEXT("Updated the House Appearance"));
}
