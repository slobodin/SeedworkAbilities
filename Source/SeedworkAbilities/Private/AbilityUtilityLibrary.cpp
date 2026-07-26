// Copyright (c) Mistfly Games. All Rights Reserved.

#include "AbilityUtilityLibrary.h"
#include "AbilitySystemGlobals.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayAbilitySpecHandle.h"
#include "SeedAbilitySystemComponent.h"

USeedAbilitySystemComponent* UAbilityUtilityLibrary::GetAbilities(const AActor* actor)
{
    if (!IsValid(actor))
    {
        return nullptr;
    }

    auto asc = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(actor);

    return Cast<USeedAbilitySystemComponent>(asc);
}

bool UAbilityUtilityLibrary::GEWasSuccessfullyApplied(const FActiveGameplayEffectHandle& activeGameplayEffectHandle)
{
    return activeGameplayEffectHandle.WasSuccessfullyApplied();
}

bool UAbilityUtilityLibrary::IsGameplayAbilitySpecHandleValid(const FGameplayAbilitySpecHandle& handle)
{
    return handle.IsValid();
}
