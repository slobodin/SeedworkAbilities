// Copyright (c) Mistfly Games. All Rights Reserved.

#include "AbilityTask_Tick.h"

UAbilityTask_Tick::UAbilityTask_Tick()
{
    bTickingTask = true;
}

UAbilityTask_Tick* UAbilityTask_Tick::TickingTask(UGameplayAbility* OwningAbility)
{
    auto myObj = NewAbilityTask<UAbilityTask_Tick>(OwningAbility);

    return myObj;
}

void UAbilityTask_Tick::TickTask(float deltaTime)
{
    Super::TickTask(deltaTime);

    if (ShouldBroadcastAbilityTaskDelegates())
    {
        OnTick.Broadcast(deltaTime);
    }
}
