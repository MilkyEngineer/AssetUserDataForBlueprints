// Copyright Alex Stevens (@MilkyEngineer). All Rights Reserved.

using UnrealBuildTool;

public class AssetUserDataForBlueprints : ModuleRules
{
	public AssetUserDataForBlueprints(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
            });

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
            });
    }
}
