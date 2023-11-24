// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerFireComp.h"
#include "Blueprint/UserWidget.h"
#include "Bullet.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Camera/CameraComponent.h"
#include "Enemy.h"
#include "EnemyFSM.h"
#include "TPSPlayer.h"


UPlayerFireComp::UPlayerFireComp()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UPlayerFireComp::BeginPlay()
{
	Super::BeginPlay();

	//CDO에서 오류남, BeginPlay에서 생성할 것
	crosshairUI = CreateWidget(GetWorld(), CrosshairUIFactory);
	sniperUI = CreateWidget(GetWorld(), SniperUIFactory);
	

	crosshairUI->AddToViewport();//숫자 UI 순서
	sniperUI->AddToViewport();//숫자 UI 순서

	ActionSetGrenadeGun();
}

void UPlayerFireComp::SetupPlayerInputComp(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComp(PlayerInputComponent);

	PlayerInputComponent->BindAction(TEXT("Fire"), EInputEvent::IE_Pressed, this, &UPlayerFireComp::ActionFire);
	PlayerInputComponent->BindAction(TEXT("ActionSetGrenadeGun"), EInputEvent::IE_Pressed, this, &UPlayerFireComp::ActionSetGrenadeGun);
	PlayerInputComponent->BindAction(TEXT("ActionSetSniperGun"), EInputEvent::IE_Pressed, this, &UPlayerFireComp::ActionSetSniperGun);

	PlayerInputComponent->BindAction(TEXT("Zoom"), EInputEvent::IE_Pressed, this, &UPlayerFireComp::ActionZoomIn);
	PlayerInputComponent->BindAction(TEXT("Zoom"), EInputEvent::IE_Released, this, &UPlayerFireComp::ActionZoomOut);
}

void UPlayerFireComp::ActionFire()
{
	PlayFireAnim();
	if ( bSetGrenadeGun ) {//일반총 유탄총
		GrenadeFire();
	}
	else { // 스나이퍼 총일때
		SniperFire();
	}
}

void UPlayerFireComp::ActionSetSniperGun()
{
	//flag
	bSetGrenadeGun = false;
	//총전환
	Me->GrenadeGun->SetVisibility(false);
	Me->SniperGun->SetVisibility(true);
	//UI변경
	crosshairUI->SetVisibility(ESlateVisibility::Visible);
	sniperUI->SetVisibility(ESlateVisibility::Hidden);
	//throw std::logic_error("The method or operation is not implemented.");
}

void UPlayerFireComp::ActionSetGrenadeGun()
{
	//flag
	bSetGrenadeGun = true;
	//총전환
	Me->GrenadeGun->SetVisibility(true);
	Me->SniperGun->SetVisibility(false);
	//UI변경
	crosshairUI->SetVisibility(ESlateVisibility::Hidden);
	sniperUI->SetVisibility(ESlateVisibility::Hidden);
	//줌 풀기
	Me->CameraComp->FieldOfView = 90;
	//throw std::logic_error("The method or operation is not implemented.");
}

void UPlayerFireComp::GrenadeFire()
{
	FTransform FirePosition = Me->GrenadeGun->GetSocketTransform(TEXT("FirePosition"), RTS_World);
	GetWorld()->SpawnActor<ABullet>(BulletFactory, FirePosition);
}

void UPlayerFireComp::SniperFire()
{
	// 카메라의 위치에서 카메라의 앞방향 1km(100,000)로 바라보고싶다(Line Trace를 하고싶다.)
	FHitResult HitResult;
	//FVector Start = GetWorld()->GetFirstPlayerController()->PlayerCameraManager->GetCameraLocation();
	FVector Start = Me->CameraComp->GetComponentLocation();
	FVector End = Start + Me->CameraComp->GetForwardVector() * 1000000.f;
	FCollisionQueryParams params;
	if ( GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECollisionChannel::ECC_Visibility) ) { // 부딪힐 경우 true
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

void UPlayerFireComp::ActionZoomIn()
{
	//줌
	if ( bSetGrenadeGun )return;
	IsZoomIn = true;

	Me->CameraComp->FieldOfView = 45;
	// lerp 시도해봤는데 안됨
	//CameraComp->FieldOfView = UKismetMathLibrary::Lerp(CameraComp->FieldOfView,45,1);
	//UI변경
	crosshairUI->SetVisibility(ESlateVisibility::Hidden);
	sniperUI->SetVisibility(ESlateVisibility::Visible);
}

void UPlayerFireComp::ActionZoomOut()
{
	//줌
	if ( bSetGrenadeGun )return;
	IsZoomIn = false;
	//UI변경
	crosshairUI->SetVisibility(ESlateVisibility::Visible);
	sniperUI->SetVisibility(ESlateVisibility::Hidden);
	Me->CameraComp->FieldOfView = 90;
	//CameraComp->SetFieldOfView
	// lerp 시도해봤는데 안됨
	//CameraComp->FieldOfView = UKismetMathLibrary::Lerp(CameraComp->FieldOfView, 90, 1);
}

void UPlayerFireComp::PlayFireAnim()
{
	Me->PlayAnimMontage(FireAnimMontage);

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

