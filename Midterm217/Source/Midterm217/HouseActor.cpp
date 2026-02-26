#include "HouseActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PointLightComponent.h"

AHouseActor::AHouseActor()
{
    WindowCount = 4;

    for (int32 i = 0; i < WindowCount; i++)
    {
        FString WindowName = "Window" + FString::FromInt(i);
        UStaticMeshComponent* Window = CreateDefaultSubobject<UStaticMeshComponent>(*WindowName);
        Window->SetupAttachment(Mesh);
        Window->SetRelativeLocation(FVector(i * 100.f, 0.f, 200.f));
    }

    bool bIsNight = true;
    if (Light) Light->SetVisibility(bIsNight);
}

void AHouseActor::Interact()
{
    UE_LOG(LogTemp, Warning, TEXT("Entering the House"));
}

void AHouseActor::UpdateAppearance()
{
    UE_LOG(LogTemp, Warning, TEXT("Updated the House Appearance"));
}
