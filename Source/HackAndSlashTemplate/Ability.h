// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/KismetSystemLibrary.h"

/**
 * 
 */

USTRUCT()
struct HACKANDSLASHTEMPLATE_API Ability
{
	GENERATE_BODY();

	UPROPERTY()
	float damage;

	UPROPERTY()
	float range;

	UPROPERTY()
	float radius;

	UPROPERTY()
	float cooldown;

	UPROPERTY()
	bool isReady;

	UPROPERTY()
	UAnimSequence Animation;

	void LaunchAttack() {
		
		UKismetSystemLibrary::Shp
	}
};
