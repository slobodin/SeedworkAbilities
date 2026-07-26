// Copyright (c) Mistfly Games. All Rights Reserved.

#pragma once

#include "Abilities/GameplayAbility.h"
#include "SeedGameplayAbility.generated.h"

UCLASS(Abstract)
class SEEDWORKABILITIES_API USeedGameplayAbility : public UGameplayAbility
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere)
    bool ActivateAbilityOnGranted = false;

    USeedGameplayAbility();

protected:
    virtual void OnAvatarSet(const FGameplayAbilityActorInfo* actorInfo, const FGameplayAbilitySpec& spec) override;
};
