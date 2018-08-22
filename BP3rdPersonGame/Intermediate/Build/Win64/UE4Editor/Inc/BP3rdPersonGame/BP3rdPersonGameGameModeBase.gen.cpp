// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BP3rdPersonGame/BP3rdPersonGameGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP3rdPersonGameGameModeBase() {}
// Cross Module References
	BP3RDPERSONGAME_API UClass* Z_Construct_UClass_ABP3rdPersonGameGameModeBase_NoRegister();
	BP3RDPERSONGAME_API UClass* Z_Construct_UClass_ABP3rdPersonGameGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BP3rdPersonGame();
// End Cross Module References
	void ABP3rdPersonGameGameModeBase::StaticRegisterNativesABP3rdPersonGameGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABP3rdPersonGameGameModeBase_NoRegister()
	{
		return ABP3rdPersonGameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABP3rdPersonGameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP3rdPersonGameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BP3rdPersonGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP3rdPersonGameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BP3rdPersonGameGameModeBase.h" },
		{ "ModuleRelativePath", "BP3rdPersonGameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP3rdPersonGameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP3rdPersonGameGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP3rdPersonGameGameModeBase_Statics::ClassParams = {
		&ABP3rdPersonGameGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABP3rdPersonGameGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABP3rdPersonGameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP3rdPersonGameGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP3rdPersonGameGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABP3rdPersonGameGameModeBase, 2662779684);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP3rdPersonGameGameModeBase(Z_Construct_UClass_ABP3rdPersonGameGameModeBase, &ABP3rdPersonGameGameModeBase::StaticClass, TEXT("/Script/BP3rdPersonGame"), TEXT("ABP3rdPersonGameGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP3rdPersonGameGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
