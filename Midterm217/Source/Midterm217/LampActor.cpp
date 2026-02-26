#include "LampActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PointLightComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Math/UnrealMathUtility.h"

ALampActor::ALampActor()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ALampActor::BeginPlay()
{
    Super::BeginPlay();
    if (Mesh)
    {
        DynamicMaterial = Mesh->CreateAndSetMaterialInstanceDynamic(0);
    }
}

void ALampActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (Light)
    {
        float Intensity = 3000.f + 2000.f * FMath::Sin(GetWorld()->GetTimeSeconds() * PulseSpeed);
        Light->SetIntensity(Intensity);
    }

    if (DynamicMaterial)
    {
        float Hue = FMath::Fmod(GetWorld()->GetTimeSeconds() * 50.f, 255.f);
        FLinearColor Color = FLinearColor::MakeFromHSV8((uint8)Hue, 255, 255);
        DynamicMaterial->SetVectorParameterValue("BaseColor", Color);
    }
}
