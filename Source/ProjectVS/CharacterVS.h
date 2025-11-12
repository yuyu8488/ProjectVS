// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterVS.generated.h"

UCLASS()
class PROJECTVS_API ACharacterVS : public ACharacter
{
	GENERATED_BODY()

public:
	ACharacterVS();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool bRun = false;
};
