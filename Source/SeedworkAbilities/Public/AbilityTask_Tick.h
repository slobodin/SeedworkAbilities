// Copyright (c) Mistfly Games. All Rights Reserved.

#pragma once

#include "Abilities/Tasks/AbilityTask.h"
#include "AbilityTask_Tick.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTickingAbilityTaskDelegate, float, deltaTime);

UCLASS()
class SEEDWORKABILITIES_API UAbilityTask_Tick : public UAbilityTask
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintAssignable)
    FTickingAbilityTaskDelegate OnTick;

    UAbilityTask_Tick();

    UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
    static UAbilityTask_Tick* TickingTask(UGameplayAbility* OwningAbility);

    virtual void TickTask(float deltaTime) override;
};
