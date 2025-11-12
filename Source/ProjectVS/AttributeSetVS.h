// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "AttributeSetVS.generated.h"

/**
 * To use this in your game you can define something like this, and then add game-specific functions as necessary:
 *
 *	#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
 *	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
 *	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
 *	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
 *	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)
 *
 *	ATTRIBUTE_ACCESSORS(UMyHealthSet, Health)
 */

struct FGameplayAttributeData;

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class PROJECTVS_API UAttributeSetVS : public UAttributeSet
{
	GENERATED_BODY()

public:
	UAttributeSetVS();
	
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	/*
	 *OnRep_Attributes
	 */
	UFUNCTION()
	void OnRep_MaxHP(const FGameplayAttributeData& OldMaxHP) const;

	UFUNCTION()
	void OnRep_CurHP(const FGameplayAttributeData& OldCurHP) const;

	UFUNCTION()
	void OnRep_RegenHP(const FGameplayAttributeData& OldRegenHP) const;

	UFUNCTION()
	void OnRep_Shield(const FGameplayAttributeData& OldShield) const;

	UFUNCTION()
	void OnRep_Armor(const FGameplayAttributeData& OldArmor) const;

	UFUNCTION()
	void OnRep_Evasion(const FGameplayAttributeData& OldEvasion) const;

	UFUNCTION()
	void OnRep_LifeSteal(const FGameplayAttributeData& OldLifeSteal) const;

	UFUNCTION()
	void OnRep_Thorns(const FGameplayAttributeData& OldThorns) const;

	UFUNCTION()
	void OnRep_Damage(const FGameplayAttributeData& OldDamage) const;

	UFUNCTION()
	void OnRep_CritChance(const FGameplayAttributeData& OldCritChance) const;

	UFUNCTION()
	void OnRep_CritDamage(const FGameplayAttributeData& OldCritDamage) const;

	UFUNCTION()
	void OnRep_AttackSpeed(const FGameplayAttributeData& OldAttackSpeed) const;

	UFUNCTION()
	void OnRep_ProjectileCount(const FGameplayAttributeData& OldProjectileCount) const;

	UFUNCTION()
	void OnRep_ProjectileBounces(const FGameplayAttributeData& OldProjectileBounces) const;

	UFUNCTION()
	void OnRep_Size(const FGameplayAttributeData& OldSize) const;

	UFUNCTION()
	void OnRep_ProjectileSpeed(const FGameplayAttributeData& OldProjectileSpeed) const;

	UFUNCTION()
	void OnRep_Duration(const FGameplayAttributeData& OldDuration) const;

	UFUNCTION()
	void OnRep_DamageToElites(const FGameplayAttributeData& OldDamageToElites) const;

	UFUNCTION()
	void OnRep_Knockback(const FGameplayAttributeData& OldKnockback) const;

	UFUNCTION()
	void OnRep_MovementSpeed(const FGameplayAttributeData& OldMovementSpeed) const;

	UFUNCTION()
	void OnRep_Luck(const FGameplayAttributeData& OldLuck) const;

	UFUNCTION()
	void OnRep_Pickup(const FGameplayAttributeData& OldPickup) const;

	UFUNCTION()
	void OnRep_XPGain(const FGameplayAttributeData& OldXPGain) const;

	UFUNCTION()
	void OnRep_GoldGain(const FGameplayAttributeData& OldGoldGain) const;

	UFUNCTION()
	void OnRep_SilverGain(const FGameplayAttributeData& OldSilverGain) const;



	/*
	 * Player Stats
	 */ 
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_MaxHP)
	FGameplayAttributeData MaxHP;
	ATTRIBUTE_ACCESSORS(UAttributeSetVS, MaxHP);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_CurHP)
	FGameplayAttributeData CurHP;
	ATTRIBUTE_ACCESSORS(UAttributeSetVS, CurHP);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_RegenHP)
	FGameplayAttributeData RegenHP;
	ATTRIBUTE_ACCESSORS(UAttributeSetVS, RegenHP);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Shield)
	FGameplayAttributeData Shield;
	ATTRIBUTE_ACCESSORS(UAttributeSetVS, Shield);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Armor)
	FGameplayAttributeData Armor;
	ATTRIBUTE_ACCESSORS(UAttributeSetVS, Armor);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Evasion)
	FGameplayAttributeData Evasion;
	ATTRIBUTE_ACCESSORS(UAttributeSetVS, Evasion);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_LifeSteal)
	FGameplayAttributeData LifeSteal;
	ATTRIBUTE_ACCESSORS(UAttributeSetVS, LifeSteal);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Thorns)
	FGameplayAttributeData Thorns;
	ATTRIBUTE_ACCESSORS(UAttributeSetVS, Thorns);

	/*
	 * Weapon Stats
	 */ 
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Damage)
	FGameplayAttributeData Damage;
	ATTRIBUTE_ACCESSORS(UAttributeSetVS, Damage);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_CritChance)
	FGameplayAttributeData CritChance;
	ATTRIBUTE_ACCESSORS(UAttributeSetVS, CritChance);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_CritDamage)
	FGameplayAttributeData CritDamage;
	ATTRIBUTE_ACCESSORS(UAttributeSetVS, CritDamage);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_AttackSpeed)
	FGameplayAttributeData AttackSpeed;
	ATTRIBUTE_ACCESSORS(UAttributeSetVS, AttackSpeed);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_ProjectileCount)
	FGameplayAttributeData ProjectileCount;
	ATTRIBUTE_ACCESSORS(UAttributeSetVS, ProjectileCount);

	// The amount of times a projectile will bounce from one enemy to another. 
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_ProjectileBounces)
	FGameplayAttributeData ProjectileBounces;
	ATTRIBUTE_ACCESSORS(UAttributeSetVS, ProjectileBounces);

	/*
	 * Miscellaneous Stats
	 */
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Size)
	FGameplayAttributeData Size;
	ATTRIBUTE_ACCESSORS(UAttributeSetVS, Size);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_ProjectileSpeed)
	FGameplayAttributeData ProjectileSpeed;
	ATTRIBUTE_ACCESSORS(UAttributeSetVS, ProjectileSpeed);

	// Determines how long a weapon remains active before disappearing.
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Duration)
	FGameplayAttributeData Duration;
	ATTRIBUTE_ACCESSORS(UAttributeSetVS, Duration);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_DamageToElites)
	FGameplayAttributeData DamageToElites;
	ATTRIBUTE_ACCESSORS(UAttributeSetVS, DamageToElites);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Knockback)
	FGameplayAttributeData Knockback;
	ATTRIBUTE_ACCESSORS(UAttributeSetVS, Knockback);

	// How fast your character can move, represented by a "x.x" multiplier
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MovementSpeed)
	FGameplayAttributeData MovementSpeed;
	ATTRIBUTE_ACCESSORS(UAttributeSetVS, MovementSpeed);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Luck)
	FGameplayAttributeData Luck;
	ATTRIBUTE_ACCESSORS(UAttributeSetVS, Luck);

	// Pick up range	
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Pickup)
	FGameplayAttributeData Pickup;
	ATTRIBUTE_ACCESSORS(UAttributeSetVS, Pickup);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_XPGain)
	FGameplayAttributeData XPGain;
	ATTRIBUTE_ACCESSORS(UAttributeSetVS, XPGain);

	// The value of gold per kill/jar, represented by a "x.x" multiplier of your base value.
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_GoldGain)
	FGameplayAttributeData GoldGain;
	ATTRIBUTE_ACCESSORS(UAttributeSetVS, GoldGain);

	// A multiplier applied to your Silver Gain for the run, represented by a "x.x"
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_SilverGain)
	FGameplayAttributeData SilverGain;
	ATTRIBUTE_ACCESSORS(UAttributeSetVS, SilverGain);
};
