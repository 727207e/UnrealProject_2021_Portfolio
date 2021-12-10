// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NierProject : ModuleRules
{
	public NierProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject",
            "Engine", "InputCore", "UMG", "AIModule" });

        PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
    }
}
