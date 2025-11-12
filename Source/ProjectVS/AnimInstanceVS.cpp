// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstanceVS.h"
#include "CharacterVS.h"
#include "GameFramework/CharacterMovementComponent.h"

UAnimInstanceVS::UAnimInstanceVS()
{
}

void UAnimInstanceVS::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	ACharacterVS* Character = Cast<ACharacterVS>(TryGetPawnOwner());
	if (Character)
	{
		GroundSpeed = Character->GetCharacterMovement()->Velocity.Size2D();
	}
}
