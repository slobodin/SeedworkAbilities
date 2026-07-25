// Copyright (c) Mistfly Games. All Rights Reserved.

#include "SeedAttributeSet.h"
#include "SeedAbilitySystemComponent.h"

UWorld* USeedAttributeSet::GetWorld() const
{
    const UObject* outer = GetOuter();
    check(outer);

    return outer->GetWorld();
}

USeedAbilitySystemComponent* USeedAttributeSet::GetASC() const
{
    return CastChecked<USeedAbilitySystemComponent>(GetOwningAbilitySystemComponent());
}
