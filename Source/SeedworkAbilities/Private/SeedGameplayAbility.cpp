// Copyright (c) Mistfly Games. All Rights Reserved.

#include "SeedGameplayAbility.h"
#include "AbilitySystemComponent.h"
#include "Abilities/GameplayAbilityTypes.h"

USeedGameplayAbility::USeedGameplayAbility()
{
    NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;

    // TODO: from lyra
    //ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateNo;
    //InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    //NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    //NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ClientOrServer;
}

void USeedGameplayAbility::OnAvatarSet(const FGameplayAbilityActorInfo* actorInfo, const FGameplayAbilitySpec& spec)
{
    Super::OnAvatarSet(actorInfo, spec);

    if (ActivateAbilityOnGranted)
    {
        actorInfo->AbilitySystemComponent->TryActivateAbility(spec.Handle);
    }
}
