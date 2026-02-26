#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PointLightComponent.h"

#include "MyActor.generated.h"

UCLASS()
class MIDTERM217_API AMyActor : public AActor
{
    GENERATED_BODY()

public:
    AMyActor();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    UPROPERTY(VisibleAnywhere)
    USceneComponent* Root;

    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* Mesh;

    UPROPERTY(VisibleAnywhere)
    UPointLightComponent* Light;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector ActorLocation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FRotator ActorRotation;

    UPROPERTY()
    UMaterialInstanceDynamic* DynamicMaterial;

    void SetActorLocationCustom(FVector NewLocation);
    FVector GetActorLocationCustom() const;

    void SetActorRotationCustom(FRotator NewRotation);
    FRotator GetActorRotationCustom() const;

    UFUNCTION(BlueprintCallable, Category = "MyActor")
    virtual void Interact();

    UFUNCTION(BlueprintCallable, Category = "MyActor")
    virtual void UpdateAppearance();
};
