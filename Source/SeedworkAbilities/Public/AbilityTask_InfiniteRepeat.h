// Copyright (c) Mistfly Games. All Rights Reserved.

#pragma once

#include "Abilities/Tasks/AbilityTask.h"
#include "Engine/TimerHandle.h"
#include "AbilityTask_InfiniteRepeat.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInfiniteRepeatActionDelegate);

UCLASS()
class SEEDWORKABILITIES_API UAbilityTask_InfiniteRepeat : public UAbilityTask
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintAssignable)
    FInfiniteRepeatActionDelegate OnPerformAction;

    virtual void Activate() override;

    UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
    static UAbilityTask_InfiniteRepeat* InfiniteRepeatAction(UGameplayAbility* OwningAbility, float timeBetweenActions);

private:
    float TimeBetweenActions;

    FTimerHandle TimerHandle;

    virtual void OnDestroy(bool abilityIsEnding) override;
    void PerformAction();
};
