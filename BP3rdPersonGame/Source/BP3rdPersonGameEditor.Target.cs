// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class BP3rdPersonGameEditorTarget : TargetRules
{
	public BP3rdPersonGameEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "BP3rdPersonGame" } );
	}
}
