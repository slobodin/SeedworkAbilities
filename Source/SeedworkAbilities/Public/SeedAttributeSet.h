// Copyright (c) Mistfly Games. All Rights Reserved.

#pragma once

#include "AttributeSet.h"
#include "SeedAttributeSet.generated.h"

class USeedAbilitySystemComponent;

/**
 * Base attribute set class for the project.
 */
UCLASS()
class SEEDWORKABILITIES_API USeedAttributeSet : public UAttributeSet
{
    GENERATED_BODY()

public:
    virtual UWorld* GetWorld() const override;

    USeedAbilitySystemComponent* GetASC() const;
};
