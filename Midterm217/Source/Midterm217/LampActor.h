#pragma once

#include "CoreMinimal.h"
#include "MyActor.h"
#include "LampActor.generated.h"

UCLASS()
class MIDTERM217_API ALampActor : public AMyActor
{
    GENERATED_BODY()

public:
    ALampActor();

    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lamp")
    float PulseSpeed = 2.f;
};