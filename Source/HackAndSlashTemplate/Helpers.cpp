// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/ShapeComponent.h"
#include "Helpers.h"

void UHelpers::ChangeColor(UShapeComponent* component, bool visible) {
	if (visible)
		component->ShapeColor.A = 1;
	else
		component->ShapeColor.A = 0;
}