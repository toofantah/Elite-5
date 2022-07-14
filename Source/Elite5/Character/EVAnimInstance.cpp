// Fill out your copyright notice in the Description page of Project Settings.


#include "EVAnimInstance.h"
#include "EVCharacter.h"
#include "GameFrameWork/CharacterMovementComponent.h"

void UEVAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	EVCharacter = Cast<AEVCharacter>(TryGetPawnOwner());
}

void UEVAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);

	if (EVCharacter == nullptr) 
	{
		EVCharacter = Cast<AEVCharacter>(TryGetPawnOwner());
	}
	if (EVCharacter == nullptr) return;

	FVector Velocity = EVCharacter->GetVelocity();
	Velocity.Z = 0.f;
	Speed = Velocity.Size();

	bIsInAir = EVCharacter->GetCharacterMovement()->IsFalling();
	bIsAccelerating = EVCharacter->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0.f? true : false;
}

