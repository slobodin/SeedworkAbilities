// Copyright (c) Mistfly Games. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "AbilityUtilityLibrary.generated.h"

class USeedAbilitySystemComponent;
struct FActiveGameplayEffectHandle;
struct FGameplayAbilitySpecHandle;

UCLASS()
class SEEDWORKABILITIES_API UAbilityUtilityLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure)
    static USeedAbilitySystemComponent* GetAbilities(const AActor* actor);

    UFUNCTION(BlueprintPure)
    static bool GEWasSuccessfullyApplied(const FActiveGameplayEffectHandle& activeGameplayEffectHandle);

    UFUNCTION(BlueprintPure)
    static bool IsGameplayAbilitySpecHandleValid(const FGameplayAbilitySpecHandle& handle);
};
