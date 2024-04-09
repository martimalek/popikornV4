// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class popikornV4 : ModuleRules
{
	public popikornV4(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
