// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerControllerVS.h"
#include "EnhancedInputSubsystems.h"

APlayerControllerVS::APlayerControllerVS()
{
}

void APlayerControllerVS::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);

	if (!IsLocalPlayerController())
	{
		return;
	}

	if (ULocalPlayer* LocalPlayer = Cast<ULocalPlayer>(Player))
	{
		if (UEnhancedInputLocalPlayerSubsystem* InputSubsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			InputSubsystem->AddMappingContext(InputMappingContext, 0);
		}
	}
}
