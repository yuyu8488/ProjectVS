// Fill out your copyright notice in the Description page of Project Settings.

#include "AttributeSetVS.h"
#include "GameplayEffectExtension.h"
#include "Net/UnrealNetwork.h"

UAttributeSetVS::UAttributeSetVS()
{
}

void UAttributeSetVS::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetVS, MaxHP, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetVS, CurHP, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetVS, RegenHP, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UAttributeSetVS, Shield, COND_None, REPNOTIFY_Always);
}

void UAttributeSetVS::OnRep_MaxHP(const FGameplayAttributeData& OldMaxHP) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetVS, MaxHP, OldMaxHP);
}

void UAttributeSetVS::OnRep_CurHP(const FGameplayAttributeData& OldCurHP) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetVS, CurHP, OldCurHP);
}

void UAttributeSetVS::OnRep_RegenHP(const FGameplayAttributeData& OldRegenHP) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetVS, RegenHP, OldRegenHP);
}

void UAttributeSetVS::OnRep_Shield(const FGameplayAttributeData& OldShield) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetVS, Shield, OldShield);
}

void UAttributeSetVS::OnRep_Armor(const FGameplayAttributeData& OldArmor) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetVS, Armor, OldArmor);
}

void UAttributeSetVS::OnRep_Evasion(const FGameplayAttributeData& OldEvasion) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetVS, Evasion, OldEvasion);
}

void UAttributeSetVS::OnRep_LifeSteal(const FGameplayAttributeData& OldLifeSteal) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetVS, LifeSteal, OldLifeSteal);
}

void UAttributeSetVS::OnRep_Thorns(const FGameplayAttributeData& OldThorns) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetVS, Thorns, OldThorns);
}

void UAttributeSetVS::OnRep_Damage(const FGameplayAttributeData& OldDamage) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetVS, Damage, OldDamage);
}

void UAttributeSetVS::OnRep_CritChance(const FGameplayAttributeData& OldCritChance) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetVS, CritChance, OldCritChance);
}

void UAttributeSetVS::OnRep_CritDamage(const FGameplayAttributeData& OldCritDamage) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetVS, CritDamage, OldCritDamage);
}

void UAttributeSetVS::OnRep_AttackSpeed(const FGameplayAttributeData& OldAttackSpeed) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetVS, AttackSpeed, OldAttackSpeed);
}

void UAttributeSetVS::OnRep_ProjectileCount(const FGameplayAttributeData& OldProjectileCount) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetVS, ProjectileCount, OldProjectileCount);
}

void UAttributeSetVS::OnRep_ProjectileBounces(const FGameplayAttributeData& OldProjectileBounces) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetVS, ProjectileBounces, OldProjectileBounces);
}

void UAttributeSetVS::OnRep_Size(const FGameplayAttributeData& OldSize) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetVS, Size, OldSize);
}

void UAttributeSetVS::OnRep_ProjectileSpeed(const FGameplayAttributeData& OldProjectileSpeed) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetVS, ProjectileSpeed, OldProjectileSpeed);
}

void UAttributeSetVS::OnRep_Duration(const FGameplayAttributeData& OldDuration) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetVS, Duration, OldDuration);
}

void UAttributeSetVS::OnRep_DamageToElites(const FGameplayAttributeData& OldDamageToElites) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetVS, DamageToElites, OldDamageToElites);
}

void UAttributeSetVS::OnRep_Knockback(const FGameplayAttributeData& OldKnockback) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetVS, Knockback, OldKnockback);
}

void UAttributeSetVS::OnRep_MovementSpeed(const FGameplayAttributeData& OldMovementSpeed) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetVS, MovementSpeed, OldMovementSpeed);
}

void UAttributeSetVS::OnRep_Luck(const FGameplayAttributeData& OldLuck) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetVS, Luck, OldLuck);
}

void UAttributeSetVS::OnRep_Pickup(const FGameplayAttributeData& OldPickup) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetVS, Pickup, OldPickup);
}

void UAttributeSetVS::OnRep_XPGain(const FGameplayAttributeData& OldXPGain) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetVS, XPGain, OldXPGain);
}

void UAttributeSetVS::OnRep_GoldGain(const FGameplayAttributeData& OldGoldGain) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetVS, GoldGain, OldGoldGain);
}

void UAttributeSetVS::OnRep_SilverGain(const FGameplayAttributeData& OldSilverGain) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetVS, SilverGain, OldSilverGain);
}
