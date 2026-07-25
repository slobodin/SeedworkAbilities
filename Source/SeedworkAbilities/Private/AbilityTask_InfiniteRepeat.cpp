// Copyright (c) Mistfly Games. All Rights Reserved.

#include "AbilityTask_InfiniteRepeat.h"
#include "Engine/World.h"
#include "TimerManager.h"

void UAbilityTask_InfiniteRepeat::Activate()
{
    if (auto world = GetWorld())
    {
        world->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityTask_InfiniteRepeat::PerformAction, TimeBetweenActions, true);
    }
}

UAbilityTask_InfiniteRepeat* UAbilityTask_InfiniteRepeat::InfiniteRepeatAction(UGameplayAbility* OwningAbility, float timeBetweenActions)
{
    check(timeBetweenActions > 0.f);

    auto myObj = NewAbilityTask<UAbilityTask_InfiniteRepeat>(OwningAbility);

    myObj->TimeBetweenActions = timeBetweenActions;

    return myObj;
}

void UAbilityTask_InfiniteRepeat::OnDestroy(bool abilityIsEnding)
{
    if (auto world = GetWorld())
    {
        world->GetTimerManager().ClearTimer(TimerHandle);
    }

    Super::OnDestroy(abilityIsEnding);
}

void UAbilityTask_InfiniteRepeat::PerformAction()
{
    if (ShouldBroadcastAbilityTaskDelegates())
    {
        OnPerformAction.Broadcast();
    }
}
