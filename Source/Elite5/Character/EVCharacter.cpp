// Fill out your copyright notice in the Description page of Project Settings.


#include "EVCharacter.h"
#include "GameFrameWork/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFrameWork/CharacterMovementComponent.h"


// Sets default values
AEVCharacter::AEVCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraBoom = CreateAbstractDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetMesh());
	CameraBoom->TargetArmLength = 600.f;
	CameraBoom->bUsePawnControlRotation = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
}


void AEVCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AEVCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);

	PlayerInputComponent->BindAxis("MoveForward", this, &AEVCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AEVCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &AEVCharacter::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &AEVCharacter::LookUp);

}

void AEVCharacter::MoveForward(float Value)
{
	if (Controller != nullptr && Value != 0.f) 
	{
		const FRotator YawRotation(0.f, Controller->GetControlRotation().Yaw, 0.f);
		const FVector Direction(FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X));
		AddMovementInput(Direction, Value);
	}
}

void AEVCharacter::MoveRight(float Value)
{
	const FRotator YawRotation(0.f, Controller->GetControlRotation().Yaw, 0.f);
	const FVector Direction(FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y));
	AddMovementInput(Direction, Value);
}

void AEVCharacter::Turn(float Value)
{
	AddControllerYawInput(Value);
}

void AEVCharacter::LookUp(float Value)
{
	AddControllerPitchInput(Value);
}


void AEVCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}




