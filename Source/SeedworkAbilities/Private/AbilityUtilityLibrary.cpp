// Copyright (c) Mistfly Games. All Rights Reserved.

#include "AbilityUtilityLibrary.h"
#include "SeedAbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"

USeedAbilitySystemComponent* UAbilityUtilityLibrary::GetAbilities(const AActor* actor)
{
    if (!IsValid(actor))
    {
        return nullptr;
    }

    auto asc = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(actor);

    return Cast<USeedAbilitySystemComponent>(asc);
}
