#pragma once

#include "CoreMinimal.h"
#include "MyActor.h"
#include "MarketStallActor.generated.h"

UCLASS()
class MIDTERM217_API AMarketStallActor : public AMyActor
{
    GENERATED_BODY()

public:
    AMarketStallActor();

    virtual void Interact() override;
};