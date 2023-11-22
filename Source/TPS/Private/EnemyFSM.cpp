// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyFSM.h"
#include "TPSPlayer.h"
#include "Enemy.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/CapsuleComponent.h"
#include "TPS.h"
#include "EnemyAnim.h"
#include "Animation/AnimMontage.h"
#include "AIController.h"
#include "NavigationSystem.h"
#include "Navigation/PathFollowingComponent.h"

// Sets default values for this component's properties
UEnemyFSM::UEnemyFSM()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	// 

}


// Called when the game starts
void UEnemyFSM::BeginPlay()
{
	Super::BeginPlay();
	//auto owner  = GetOwner();
	//UE_LOG(LogTemp, Warning, TEXT("%s"), *owner->GetName());
	// 
	//Initialize
	Me = Cast<AEnemy>(GetOwner());
	EnemyAnim = Cast<UEnemyAnim>(Me->GetMesh()->GetAnimInstance());
	AI = Cast<AAIController>(Me->GetController());

}


// Called every frame
void UEnemyFSM::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	switch ( CurrentState )
	{
	case EEnemyState::Idle:
		TickIdle();
		break;
	case EEnemyState::Move:
		TickMove();
		break;
	case EEnemyState::Attack:
		TickAttack();
		break;
	case EEnemyState::Damage:
		TickDamage();
		break;
	case EEnemyState::Die:
		TickDie();
		break;
	default:
		break;
	}
}

void UEnemyFSM::TickIdle()
{
	//플레이어를 찾고 싶다. (1. getActorClass, 2. GetPlayerPawn, 3. Iterate)
	//만약 찾았다면
	//플레이어가 있는 위치를 목적지로 기억하고싶다.
	Target = Cast<ATPSPlayer>(GetWorld()->GetFirstPlayerController()->GetPawn());

	//전이 -> 이동
	if ( Target != nullptr ) {
		SetCurrentState(EEnemyState::Move);
		//CurrentState = EEnemyState::Move;
	}
}

void UEnemyFSM::TickMove()
{
	//목적지를 향해서 이동하고싶다.
	//공격가능 거리라면 
	FVector dir = Target->GetActorLocation() - Me->GetActorLocation();

	//AI목적지
	FVector Destination = Target->GetActorLocation();
	
	//ai이동으로 바꾸자
	//Me->AddMovementInput(dir.GetSafeNormal()); //dir 보호한 상태로 normalize 값 넣기, 사본만들기

	//NavigationSystem 하나 가져오기
	auto ns = UNavigationSystemV1::GetNavigationSystem(GetWorld());
	FPathFindingQuery query;
	FAIMoveRequest req;

	req.SetAcceptanceRadius(50);
	req.SetGoalLocation(Destination);

	AI->BuildPathfindingQuery(req, query);
	auto result = ns->FindPathSync(query);

	if ( result.IsSuccessful() ) {
		//타겟을 향해 이동
		AI->MoveToLocation(Destination);
	}
	else {
		// 랜덤이동 아무데나
		FPathFollowingRequestResult r;
		r.Code = AI->MoveToLocation(RandomLocation);
		//if ( r == EPathFollowingRequestResult::AlreadyAtGoal ) { //이미 거기 도착했어
		if ( r != EPathFollowingRequestResult::RequestSuccessful ) { 
			//만약 그곳에 도착했거나 문제가 있다면 랜덤한 위치로 갱신하고 싶다.
			UpdateRandomLocation(Me->GetActorLocation(),500,RandomLocation);
		}
	}


	//전이 -> 공격
	if ( dir.Length() <= AttackDistance ) {
		SetCurrentState(EEnemyState::Attack);
		//CurrentState = EEnemyState::Attack;
		CurrentTime = AttackTime;
		AI->StopMovement();
	}
}

void UEnemyFSM::TickAttack()
{
	// 시간이 흐르다가
	// 공격 타격 시간이 되면
	// 공격을 하고 싶다.



	CurrentTime += GetWorld()->GetDeltaSeconds();

	if ( CurrentTime > AttackTime ) {
		EnemyAnim->IsAttack = true;
		CurrentTime = 0;
		float dist = FVector::Dist(Target->GetActorLocation(), Me->GetActorLocation());
		if ( dist > AttackDistance ) {
			SetCurrentState(EEnemyState::Move);
			//CurrentState = EEnemyState::Move;
			EnemyAnim->IsAttack = false;

		}
		else {
			MY_LOG(TEXT("Attack"));
		}
	}

	// 내가 푼 것
	/*
	CurrentTime += GetWorld()->GetDeltaSeconds();

	if ( CurrentTime > AttackTime ) {
		CurrentTime = 0;
		FVector dir = Target->GetActorLocation() - Me->GetActorLocation();
		if ( dir.Length() <= AttackDistance ) { // 사거리 안에 들어오면
			// 전이 -> 공격
			//MY_LOG(TEXT("Attack"));
			UE_LOG(LogTemp, Warning, TEXT("Attack"));
			//Target->HP--;
		}
		else {//사거리 밖으로 나가면
			// 전이 -> 이동
			UE_LOG(LogTemp, Warning, TEXT("Attack Cancel"));
			SetCurrentState(EEnemyState::Move);
		}
	}*/

}

void UEnemyFSM::TickDamage()
{/*
	CurrentTime += GetWorld()->GetDeltaSeconds();
	if ( CurrentTime > DamageTime ) {
		SetCurrentState(EEnemyState::Move);
		//CurrentState = EEnemyState::Move;
	}*/
	//시간초기화는 언제 해주는 게 좋을까
	//상태가 시작될때
}

void UEnemyFSM::OnTakeDamage(int32 Damage)
{

	AI->StopMovement();

	//데미지를 입으면 체력감소
	HP -= Damage;
	if ( HP > 0 ) {
		SetCurrentState(EEnemyState::Damage);
		//CurrentState = EEnemyState::Damage;
		PlayMontageDamage();
	}
	else { // 체력이 0 하면
		// 죽음 상태로 전이
		SetCurrentState(EEnemyState::Die);
		//CurrentState = EEnemyState::Die;
		PlayMontageDie();
		Me->GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		DieEndLoc = Me->GetActorLocation() + FVector::DownVector * 200;
	}
}

void UEnemyFSM::TickDie()
{
	if ( EnemyAnim->IsDieDone == false ) {
		return;
}
	CurrentTime += GetWorld()->GetDeltaSeconds();
	if ( CurrentTime > DieTime ) {
		Me->Destroy();
	}
	else {
		/*
		//바닥으로 내려가고 싶다.
		// P = P0 + vt
		FVector P0 = Me->GetActorLocation();
		//FVector dir = FVector(0, 0, -1);
		//FVector dir = FVector::DownVector;
		FVector velocity = FVector::DownVector * 200;
		FVector vt = velocity * GetWorld()->GetDeltaSeconds();
		Me->SetActorLocation(P0 + vt);*/


		//시작 Me -> GetActorLocation()
		// 끝  DieEndLoc Me -> GetActorLocation() + FVector::DownVector * 200;
		// t : ds * 6

		FVector NewLoc = FMath::Lerp(Me->GetActorLocation(), DieEndLoc, GetWorld()->GetDeltaSeconds() * 1.5);

		Me->SetActorLocation(NewLoc);
	}
}

void UEnemyFSM::PlayMontageDamage()
{
	/* //책에서 한 방법
	int idx = FMath::RandRange(0, 1);
	FString str = FString::Printf(TEXT("Damage%d"), idx);
	FName sectionName2 = FName(*str);
	Me->PlayAnimMontage(EAnimActionMontage, 1, sectionName);*/

	FName SectionName = TEXT("Damage0");
	if ( FMath::RandBool() ) {
		SectionName = TEXT("Damage1");
	}
	/*Me->PlayAnimMontage(EAnimActionMontage, 1, SectionName);*/
	EnemyAnim->PlayMontageDamage(SectionName);

}

void UEnemyFSM::OnChangeMoveState()
{
	SetCurrentState(EEnemyState::Move);
}

void UEnemyFSM::PlayMontageDie()
{
	FName SectionName = TEXT("Die");
	//Me->PlayAnimMontage(EAnimActionMontage, 1, TEXT("Die"));
	EnemyAnim->PlayMontageDamage(SectionName);

}

void UEnemyFSM::SetCurrentState(EEnemyState NextState)
{
	check(EnemyAnim);
	
	// 이동상태로 전이한다면 랜덤위치를 갱신하고 싶다. 
	if ( NextState == EEnemyState::Move ) {
	
		UpdateRandomLocation(Me->GetActorLocation(),500,RandomLocation);
	}
	CurrentState = NextState;
	//초기화
	CurrentTime = 0;
	EnemyAnim->EnemyState = NextState;

}

bool UEnemyFSM::UpdateRandomLocation(FVector Origin, float Radius, FVector& OutLocation)
{
	auto ns = UNavigationSystemV1::GetNavigationSystem(GetWorld());
	FNavLocation loc;
	bool result = ns->GetRandomReachablePointInRadius(Origin, Radius, loc);
	
	// 책
	/*if ( result ) {
		OutLocation = loc.Location;
	}
	else {
		return UpdateRandomLocation(Origin, Radius, OutLocation);
	}
	return result;*/

	//result가 true가 될 때까지 돌린다(재귀)
	if ( result ) {
		OutLocation = loc.Location;
		return true;
	}
	return UpdateRandomLocation(Origin, Radius, OutLocation);
	
}
