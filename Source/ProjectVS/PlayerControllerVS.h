// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlayerControllerVS.generated.h"

class UInputMappingContext;

UCLASS()
class PROJECTVS_API APlayerControllerVS : public APlayerController
{
	GENERATED_BODY()

public:
	APlayerControllerVS();

	virtual void OnPossess(APawn* aPawn) override;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputMappingContext> InputMappingContext;
	
};
