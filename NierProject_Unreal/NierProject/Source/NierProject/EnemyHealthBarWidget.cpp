// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyHealthBarWidget.h"
#include "Blueprint/UserWidget.h"

void UEnemyHealthBarWidget::Show(bool bOnOff)
{
	if (bOnOff)
	{
		SetVisibility(ESlateVisibility::Visible);
	}

	else
	{
		SetVisibility(ESlateVisibility::Hidden);
	}
}

float UEnemyHealthBarWidget::HealthPercent()
{
	return (NowHealth / MaxHealth);
}
