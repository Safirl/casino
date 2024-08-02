// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CasinoGame : ModuleRules
{
	public CasinoGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
