
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/PointLightComponent.h"
#include "VillageActor.generated.h"

UCLASS()
class MIDTERM217_API AVillageActor : public AActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ActorLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator ActorRotation;

	void SetActorLocationCustom(FVector NewLocation);
	FVector GetActorLocationCustom() const;

	void SetActorRotationCustom(FRotator NewRotation);
	FRotator GetActorRotationCustom() const;

	virtual void Interact();
	virtual void UpdateAppearance();
	
	AVillageActor();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;

	UPROPERTY(VisibleAnywhere)
	UPointLightComponent* Light;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
