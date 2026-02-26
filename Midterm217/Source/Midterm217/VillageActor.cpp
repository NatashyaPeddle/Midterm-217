
#include "VillageActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PointLightComponent.h"

// Sets default values
AVillageActor::AVillageActor()
{
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Root);

	Light = CreateDefaultSubobject<UPointLightComponent>(TEXT("Light"));
	Light->SetupAttachment(Root);
}

// Called when the game starts or when spawned
void AVillageActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVillageActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AVillageActor::SetActorLocationCustom(FVector NewLocation)
{
	ActorLocation = NewLocation;
	SetActorLocation(NewLocation);
}

FVector AVillageActor::GetActorLocationCustom() const
{
	return ActorLocation;
}

void AVillageActor::SetActorRotationCustom(FRotator NewRotation)
{
	ActorRotation = NewRotation;
	SetActorRotation(NewRotation);
}

FRotator AVillageActor::GetActorRotationCustom() const
{
	return ActorRotation;
}

void AVillageActor::Interact()
{
	UE_LOG(LogTemp, Warning, TEXT("Interacted with Village Actor"));
}

void AVillageActor::UpdateAppearance()
{
	UE_LOG(LogTemp, Warning, TEXT("Updating Village Actor Apperance"));
}
