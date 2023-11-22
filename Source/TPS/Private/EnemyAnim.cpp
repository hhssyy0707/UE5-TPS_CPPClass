// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAnim.h"
#include "Enemy.h"

void UEnemyAnim::OnDamageEnd()
{
	//Enemy를 가져와서 EnemyFSM의 함수를 호출하고싶다.

	/*
	if ( Enemy1 ) {
		auto owner = TryGetPawnOwner();
		Enemy1 = Cast<AEnemy>(owner);
	}
	Enemy1->EnemyFSM->OnChangeMoveState();
	*/

	AEnemy* enemy = Cast<AEnemy>(TryGetPawnOwner());
	if ( enemy ) {
		enemy->EnemyFSM->OnChangeMoveState();
	}
}

void UEnemyAnim::AnimNotify_DamageEnd()
{
	//OnDamageEnd();
	AEnemy* enemy = Cast<AEnemy>(TryGetPawnOwner());
	if ( enemy ) {

		enemy->EnemyFSM->OnChangeMoveState();
		Montage_Stop(0.1f, enemy->EnemyFSM->EnemyActionMontage);
	}
}

void UEnemyAnim::AnimNotify_DieEnd()
{
	//죽는 애니메이션 끝남 -> True;
	IsDieDone = true;
}



