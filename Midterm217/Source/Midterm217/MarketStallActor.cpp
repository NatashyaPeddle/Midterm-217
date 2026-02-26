#include "MarketStallActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PointLightComponent.h"

AMarketStallActor::AMarketStallActor()
{
}

void AMarketStallActor::Interact()
{
    UE_LOG(LogTemp, Warning, TEXT("Viewing Market Stall Items!"));
}