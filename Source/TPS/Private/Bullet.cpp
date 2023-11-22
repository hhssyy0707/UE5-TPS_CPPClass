// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
ABullet::ABullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComp"));
	SetRootComponent(CollisionComp);
	CollisionComp->SetSphereRadius(12.5f);
	CollisionComp->SetCollisionProfileName(TEXT("BlockAll"));

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetupAttachment(RootComponent);
	MeshComp->SetRelativeScale3D(FVector(0.25f));
	//MeshComp->SetCollisionProfileName(TEXT("NoCollision"));
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	ProjectileMovementComp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComp"));
	ProjectileMovementComp->InitialSpeed = 3000;
	ProjectileMovementComp->MaxSpeed = 3000;
	ProjectileMovementComp->bShouldBounce = true;
	ProjectileMovementComp->Bounciness = 0.3f;
	ProjectileMovementComp->SetUpdatedComponent(CollisionComp);

}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();
	//타이머를 사용해 총알 발사 후 2초뒤에 Destroy
	FTimerHandle handle;
	//GetWorldTimerManager().SetTimer(handle, this, &ABullet::KillMySelf, 1.5); // > GetWorld()->GetTimerManager
	GetWorld()->GetTimerManager().SetTimer(handle, FTimerDelegate::CreateLambda([this]()->void {this->Destroy(); }), 5, false); 
	int sum = 0;
	auto lambdaAddFunc = [&sum](int32 a, int32 b)->void {sum = a + b; };

}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABullet::KillMySelf()
{
	this->Destroy();
}

