// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class BP3rdPersonGameTarget : TargetRules
{
	public BP3rdPersonGameTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "BP3rdPersonGame" } );
	}
}
