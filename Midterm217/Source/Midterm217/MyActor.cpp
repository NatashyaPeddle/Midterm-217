#include "MyActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PointLightComponent.h"
#include "Materials/MaterialInstanceDynamic.h"

AMyActor::AMyActor()
{
    PrimaryActorTick.bCanEverTick = true;

    Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    RootComponent = Root;

    Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    Mesh->SetupAttachment(Root);

    Light = CreateDefaultSubobject<UPointLightComponent>(TEXT("Light"));
    Light->SetupAttachment(Root);
}

void AMyActor::BeginPlay()
{
    Super::BeginPlay();
    if (Mesh)
    {
        DynamicMaterial = Mesh->CreateAndSetMaterialInstanceDynamic(0);
    }
}

void AMyActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AMyActor::SetActorLocationCustom(FVector NewLocation)
{
    ActorLocation = NewLocation;
    SetActorLocation(NewLocation);
}

FVector AMyActor::GetActorLocationCustom() const
{
    return ActorLocation;
}

void AMyActor::SetActorRotationCustom(FRotator NewRotation)
{
    ActorRotation = NewRotation;
    SetActorRotation(NewRotation);
}

FRotator AMyActor::GetActorRotationCustom() const
{
    return ActorRotation;
}

void AMyActor::Interact()
{
    UE_LOG(LogTemp, Warning, TEXT("Base MyActor Interact called"));
}

void AMyActor::UpdateAppearance()
{
    
}