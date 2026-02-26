#pragma once

#include "CoreMinimal.h"
#include "MyActor.h"
#include "HouseActor.generated.h"

UCLASS()
class MIDTERM217_API AHouseActor : public AMyActor
{
    GENERATED_BODY()

public:
    AHouseActor();

    virtual void Interact() override;
    virtual void UpdateAppearance() override;

private:
    int32 WindowCount;
};
