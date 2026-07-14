// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ConbiniSim : ModuleRules
{
	public ConbiniSim(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
