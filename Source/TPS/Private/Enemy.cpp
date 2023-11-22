// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include "EnemyFSM.h"

#include "EnemyAnim.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AEnemy::AEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	EnemyFSM = CreateDefaultSubobject<UEnemyFSM>(TEXT("EnemyFSM"));

	ConstructorHelpers::FObjectFinder<USkeletalMesh> tempMesh(TEXT("/Script/Engine.SkeletalMesh'/Game/Models/Enemy/Model/vampire_a_lusth.vampire_a_lusth'"));
	if ( tempMesh.Succeeded()) {
		GetMesh()->SetSkeletalMesh(tempMesh.Object);
		GetMesh()->SetRelativeLocationAndRotation(FVector(0,0,-90), FRotator(0,-90,0));
		GetMesh()->SetRelativeScale3D(FVector(0.8f));
	} 

	ConstructorHelpers::FClassFinder<UEnemyAnim> tempAnim(TEXT("/Script/Engine.AnimBlueprint'/Game/Blueprints/ABP_Enemy.ABP_Enemy_C'")); //_C 꼭 추가하기

	UE_LOG(LogTemp, Warning, TEXT("%d"), tempAnim.Succeeded());

	if ( tempAnim.Succeeded() ) {
		GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
		GetMesh()->SetAnimClass(tempAnim.Class);
	}

	//이동하는 방향으로 쳐다보기
	GetCharacterMovement()->bOrientRotationToMovement = true;


	HPComp = CreateDefaultSubobject<UWidgetComponent>(TEXT("HPComp"));
	HPComp->SetupAttachment(RootComponent);
	ConstructorHelpers::FClassFinder<UUserWidget> tempHP(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/Blueprints/WBP_EnemyHPWidget.WBP_EnemyHPWidget_C'"));

	if ( tempHP.Succeeded() ) {
		HPComp->SetWidgetClass(tempHP.Class);
		HPComp->SetDrawSize(FVector2D(150,20));
		HPComp->SetRelativeLocation(FVector(0,0,90));
		HPComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}

	UCapsuleComponent* cap = GetCapsuleComponent();
	auto mesh = GetMesh();
	cap->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	cap->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);
	mesh->SetCollisionResponseToChannel(ECC_Visibility, ECR_Ignore);
	mesh->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	//EnemyFSM->EnemyAnim = Cast<UEnemyAnim>(GetMesh()->GetAnimInstance());
	
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector Start;
	FVector Target;

	Start = HPComp->GetComponentLocation();
	APlayerCameraManager* Camera = GetWorld()->GetFirstPlayerController()->PlayerCameraManager;
	Target = Camera->GetCameraLocation();

	//Target = UGameplayStatics::GetPlayerCameraManager(GetWorld(),0)->GetCameraLocation();
	//Target = UGameplayStatics::GetPlayerCharacter(GetWorld(),0)->GetActorLocation();
	
	auto rotation = UKismetMathLibrary::FindLookAtRotation(Start, Target);
	HPComp->SetWorldRotation(rotation);

}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

