// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Potato : ModuleRules
{
	public Potato(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
