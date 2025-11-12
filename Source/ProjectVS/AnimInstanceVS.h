// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AnimInstanceVS.generated.h"


UCLASS()
class PROJECTVS_API UAnimInstanceVS : public UAnimInstance
{
	GENERATED_BODY()

public:
	UAnimInstanceVS();

protected:
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Values")
	float GroundSpeed;
};
