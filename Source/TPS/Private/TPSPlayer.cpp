// Fill out your copyright notice in the Description page of Project Settings.


#include "TPSPlayer.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine/SkeletalMesh.h"
#include "Blueprint/UserWidget.h"
#include "Bullet.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Enemy.h"
#include "EnemyFSM.h"

// Sets default values
ATPSPlayer::ATPSPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComp->SetupAttachment(RootComponent);
	SpringArmComp->TargetArmLength = 300;
	SpringArmComp->AddRelativeLocation(FVector(0,50,80));
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComp->SetupAttachment(SpringArmComp);

	ConstructorHelpers::FObjectFinder<USkeletalMesh> tempMesh(TEXT("/Script/Engine.SkeletalMesh'/Game/Characters/Mannequins/Meshes/SKM_Quinn.SKM_Quinn'"));
	if (tempMesh.Succeeded()) {
		GetMesh()->SetSkeletalMesh(tempMesh.Object);
		GetMesh()->SetRelativeLocationAndRotation(FVector(0, 0, -90), FRotator(0, -90, 0));
	}

	bUseControllerRotationYaw = true;
	SpringArmComp->bUsePawnControlRotation = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;

	//========================================================================//
	//==============================GrenadeGun================================//
	GrenadeGun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GrenadeGun"));
	GrenadeGun->SetupAttachment(GetMesh(), TEXT("hand_rSocket"));
	GrenadeGun->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	auto GrenadeGunMesh = ConstructorHelpers::FObjectFinder<USkeletalMesh>(TEXT("/Script/Engine.SkeletalMesh'/Game/Models/FPWeapon/Mesh/SK_FPGun.SK_FPGun'"));
	if (GrenadeGunMesh.Succeeded()) {
		GrenadeGun->SetSkeletalMesh(GrenadeGunMesh.Object);
		//GrenadeGun->SetRelativeLocation(FVector(0, 60, 130));
		GrenadeGun->SetRelativeLocationAndRotation(FVector(-8.f,-2.f,-3.f),FRotator(0,100.f,5.f));
	}

	//========================================================================//
	//===============================SniperGun================================//

	SniperGun = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SniperGun"));
	SniperGun->SetupAttachment(GetMesh(),TEXT("hand_rSocket"));
	SniperGun->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	auto SniperGunMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Script/Engine.StaticMesh'/Game/Models/SniperGun/sniper1.sniper1'"));
	if (SniperGunMesh.Succeeded()) {
		SniperGun->SetStaticMesh(SniperGunMesh.Object);
		//SniperGun->SetRelativeLocation(FVector(0, 80, 130));
		SniperGun->SetRelativeScale3D(FVector(0.15f));
		SniperGun->SetRelativeLocationAndRotation(FVector(-38.f, -7.f, 3.f), FRotator(-2.f, 100.f, 0));
	}

	//========================================================================//
	//========================================================================//

}

// Called when the game starts or when spawned
void ATPSPlayer::BeginPlay()
{
	Super::BeginPlay();
	JumpMaxCount = 2;
	GetCharacterMovement()->AirControl = 1;
	ActionWalk();
	
	//CDO에서 오류남, BeginPlay에서 생성할 것
	crosshairUI = CreateWidget(GetWorld(), CrosshairUIFactory);
	sniperUI = CreateWidget(GetWorld(), SniperUIFactory);
	

	crosshairUI->AddToViewport();//숫자 UI 순서
	sniperUI->AddToViewport();//숫자 UI 순서

	ActionSetGrenadeGun();
}

// Called every frame
void ATPSPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Direction.Normalize();
	FVector dir = FTransform(GetControlRotation()).TransformVector(Direction);
	AddMovementInput(dir);

	if ( IsZoomIn ) {
		CameraComp->FieldOfView = FMath::Lerp(CameraComp->FieldOfView, 45, DeltaTime * 5/*0.1f*/);
	}


	if ( CameraShake != nullptr && CameraShake->IsFinished() == false) {
		//카메라가 흔들리는 중이면
	}
}

// Called to bind functionality to input
void ATPSPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("Look Up / Down Mouse"), this, &ATPSPlayer::AxisLookUp);

	PlayerInputComponent->BindAxis(TEXT("Move Forward / Backward"), this, &ATPSPlayer::AxisVertical);

	PlayerInputComponent->BindAxis(TEXT("Move Right / Left"), this, &ATPSPlayer::AxisHorizontal);

	PlayerInputComponent->BindAxis(TEXT("Turn Right / Left Mouse"), this, &ATPSPlayer::AxisTurn);

	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &ATPSPlayer::ActionJump);
	PlayerInputComponent->BindAction(TEXT("Fire"), EInputEvent::IE_Pressed, this, &ATPSPlayer::ActionFire);
	PlayerInputComponent->BindAction(TEXT("ActionSetGrenadeGun"), EInputEvent::IE_Pressed, this, &ATPSPlayer::ActionSetGrenadeGun);
	PlayerInputComponent->BindAction(TEXT("ActionSetSniperGun"), EInputEvent::IE_Pressed, this, &ATPSPlayer::ActionSetSniperGun);

	PlayerInputComponent->BindAction(TEXT("Zoom"), EInputEvent::IE_Pressed, this, &ATPSPlayer::ActionZoomIn);
	PlayerInputComponent->BindAction(TEXT("Zoom"), EInputEvent::IE_Released, this, &ATPSPlayer::ActionZoomOut);

	PlayerInputComponent->BindAction(TEXT("Run"), EInputEvent::IE_Pressed, this, &ATPSPlayer::ActionRun);
	PlayerInputComponent->BindAction(TEXT("Run"), EInputEvent::IE_Released, this, &ATPSPlayer::ActionWalk);
}

void ATPSPlayer::AxisHorizontal(float value)
{
	Direction.Y = value;
}

void ATPSPlayer::AxisVertical(float value)
{
	Direction.X = value;
}

void ATPSPlayer::AxisLookUp(float value)
{
	AddControllerPitchInput(value);
}

void ATPSPlayer::AxisTurn(float value)
{
	AddControllerYawInput(value);
}

void ATPSPlayer::ActionJump()
{
	Jump();
}

void ATPSPlayer::ActionFire()
{
	PlayFireAnim();
	if (bSetGrenadeGun) {//일반총 유탄총
		GrenadeFire();
	}
	else { // 스나이퍼 총일때
		SniperFire();
	}
}

void ATPSPlayer::ActionWalk()
{
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
}

void ATPSPlayer::ActionRun()
{
	GetCharacterMovement()->MaxWalkSpeed = RunSpeed;
}

void ATPSPlayer::ActionSetSniperGun()
{
	//flag
	bSetGrenadeGun = false;
	//총전환
	GrenadeGun->SetVisibility(false);
	SniperGun->SetVisibility(true);
	//UI변경
	crosshairUI->SetVisibility(ESlateVisibility::Visible);
	sniperUI->SetVisibility(ESlateVisibility::Hidden);
	//throw std::logic_error("The method or operation is not implemented.");
}

void ATPSPlayer::ActionSetGrenadeGun()
{
	//flag
	bSetGrenadeGun = true;
	//총전환
	GrenadeGun->SetVisibility(true);
	SniperGun->SetVisibility(false);
	//UI변경
	crosshairUI->SetVisibility(ESlateVisibility::Hidden);
	sniperUI->SetVisibility(ESlateVisibility::Hidden);
	//줌 풀기
	CameraComp->FieldOfView = 90;
	//throw std::logic_error("The method or operation is not implemented.");
}

void ATPSPlayer::GrenadeFire()
{
	FTransform FirePosition = GrenadeGun->GetSocketTransform(TEXT("FirePosition"), RTS_World);
	GetWorld()->SpawnActor<ABullet>(BulletFactory, FirePosition);

}

void ATPSPlayer::SniperFire()
{
	// 카메라의 위치에서 카메라의 앞방향 1km(100,000)로 바라보고싶다(Line Trace를 하고싶다.)
	FHitResult HitResult;
	//FVector Start = GetWorld()->GetFirstPlayerController()->PlayerCameraManager->GetCameraLocation();
	FVector Start = CameraComp->GetComponentLocation();
	FVector End = Start + CameraComp->GetForwardVector() * 1000000.f;
	FCollisionQueryParams params;
	if (GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECollisionChannel::ECC_Visibility)) { // 부딪힐 경우 true
		//부딪힌 곳에 폭발 이펙트를 생성
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionVFXFactory, FTransform(HitResult.ImpactPoint));
		// 만약 부딪힌 물체가 물리작용할 수 있다면
		auto hitComp = HitResult.GetComponent();
		if ( hitComp != nullptr && hitComp->IsSimulatingPhysics() ) {
			// 그 물체에 힘을 가하고 싶다.
			// hitComp.Inpulse();
			hitComp->AddForce(-HitResult.ImpactNormal * hitComp->GetMass() * 500000.f);
			
		}
		// 그 물체가 enemy라면 너 맞았어라고 알려주고 싶다.
		AEnemy* Enemy = Cast<AEnemy>(HitResult.GetActor());
		if ( Enemy ) {
			//Enemy->EnemyFSM
			auto fsm = Enemy->GetDefaultSubobjectByName(TEXT("EnemyFSM"));
			UEnemyFSM* EnemyFSM = Cast<UEnemyFSM>(fsm);
			EnemyFSM->OnTakeDamage(1);
		}
		//if( )
	}
	else {

	}
	
	
}

void ATPSPlayer::ActionZoomIn()
{
	//줌
	if (bSetGrenadeGun)return;
	IsZoomIn = true;

	CameraComp->FieldOfView = 45;
	// lerp 시도해봤는데 안됨
	//CameraComp->FieldOfView = UKismetMathLibrary::Lerp(CameraComp->FieldOfView,45,1);
	//UI변경
	crosshairUI->SetVisibility(ESlateVisibility::Hidden);
	sniperUI->SetVisibility(ESlateVisibility::Visible);
}

void ATPSPlayer::ActionZoomOut()
{
	//줌
	if (bSetGrenadeGun)return;
	IsZoomIn = false;
	//UI변경
	crosshairUI->SetVisibility(ESlateVisibility::Visible);
	sniperUI->SetVisibility(ESlateVisibility::Hidden);
	CameraComp->FieldOfView = 90;
	//CameraComp->SetFieldOfView
	// lerp 시도해봤는데 안됨
	//CameraComp->FieldOfView = UKismetMathLibrary::Lerp(CameraComp->FieldOfView, 90, 1);
}

void ATPSPlayer::PlayFireAnim()
{
	PlayAnimMontage(FireAnimMontage);

	UGameplayStatics::PlaySound2D(GetWorld(), FireSound);

	if ( CameraShake ) {
		CameraShake->StopShake();
	}

	// 플레이어 카메라를 가져온다]
	//UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0)->StartCameraShake(CameraShake,1.f);
	auto CameraManager = GetWorld()->GetFirstPlayerController()->PlayerCameraManager;
	CameraShake = CameraManager->StartCameraShake(CameraShakeFactory);
	// 카메라 흔들기
}

