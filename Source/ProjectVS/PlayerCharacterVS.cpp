// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacterVS.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputComponent.h"
#include "InputAction.h"	
#include "GameFramework/CharacterMovementComponent.h"

APlayerCharacterVS::APlayerCharacterVS()
{
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->bUsePawnControlRotation = true;
	SpringArm->bInheritPitch = true;
	SpringArm->bInheritRoll = true;
	SpringArm->bInheritYaw = true;
	SpringArm->TargetArmLength = 800.f;
	SpringArm->SocketOffset = FVector(0.f, 0.f, 300.f);
	SpringArm->bEnableCameraLag = true;
	SpringArm->bEnableCameraRotationLag = true;
	SpringArm->CameraLagSpeed = 3.f;

	MainCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("MainCamera"));
	MainCamera->SetupAttachment(SpringArm);

	GetMesh()->SetRelativeRotation(FRotator(0, -90.f, 0));

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
	
	//GetMovementComponent()->
}

void APlayerCharacterVS::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	UEnhancedInputComponent* Input = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (Input)
	{
		Input->BindAction(MoveAction, ETriggerEvent::Triggered, this, &APlayerCharacterVS::Move);
		Input->BindAction(LookAction, ETriggerEvent::Triggered, this, &APlayerCharacterVS::Look);
		Input->BindAction(WalkToRunAction, ETriggerEvent::Triggered, this, &APlayerCharacterVS::WalkToRun);
		Input->BindAction(WalkToRunAction, ETriggerEvent::Completed, this, &APlayerCharacterVS::WalkToRun);
	}
}

void APlayerCharacterVS::Move(const FInputActionValue& Value)
{
	FVector2D Input = Value.Get<FVector2D>();
	
	FRotator Rotation = GetController()->GetControlRotation();
	FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

	FVector ForwardVector = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	FVector RightVector = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	FVector Direction = (ForwardVector * Input.X) + (RightVector * Input.Y);
	
	AddMovementInput(Direction);
}

void APlayerCharacterVS::Look(const FInputActionValue& Value)
{
	FVector2D Input = Value.Get<FVector2D>();

	AddControllerPitchInput(Input.Y);
	AddControllerYawInput(Input.X);
}

void APlayerCharacterVS::WalkToRun(const FInputActionInstance& Value)
{
	ETriggerEvent Event = Value.GetTriggerEvent();

	switch (Event)
	{
	case ETriggerEvent::None:
		break;
	case ETriggerEvent::Triggered:
	case ETriggerEvent::Started:
		bRun = Value.GetValue().Get<bool>();
	case ETriggerEvent::Ongoing:
		break;
	case ETriggerEvent::Canceled:
		break;
	case ETriggerEvent::Completed:
		bRun = Value.GetValue().Get<bool>();
		break;
	default:
		break;
	}

}
