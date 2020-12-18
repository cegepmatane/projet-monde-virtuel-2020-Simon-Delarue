// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Projet_Unreal_C : ModuleRules
{
	public Projet_Unreal_C(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "GameplayTasks" });
	}
}
