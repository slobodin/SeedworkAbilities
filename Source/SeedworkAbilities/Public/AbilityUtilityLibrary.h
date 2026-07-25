// Copyright (c) Mistfly Games. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "AbilityUtilityLibrary.generated.h"

class USeedAbilitySystemComponent;

UCLASS()
class SEEDWORKABILITIES_API UAbilityUtilityLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure)
    static USeedAbilitySystemComponent* GetAbilities(const AActor* actor);
};
