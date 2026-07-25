// Copyright (c) Mistfly Games. All Rights Reserved.

using UnrealBuildTool;

public class SeedworkAbilities : ModuleRules
{
    public SeedworkAbilities(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
        [
            "Core"
        ]);

        PrivateDependencyModuleNames.AddRange(
        [
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "GameplayTasks",
            "GameplayAbilities",
        ]);
    }
}
