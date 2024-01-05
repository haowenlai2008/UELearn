// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AbilitySystemComponent.h"
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SoulAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * 
 */
UCLASS()
class MYSOUL_API USoulAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	// �ȼ�
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData Level;
	ATTRIBUTE_ACCESSORS(USoulAttributeSet, Level)

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(USoulAttributeSet, MaxHealth)

	// ��ǰ����ֵ
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(USoulAttributeSet, Health)

};
