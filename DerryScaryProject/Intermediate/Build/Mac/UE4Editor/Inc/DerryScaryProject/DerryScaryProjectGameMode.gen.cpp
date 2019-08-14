// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DerryScaryProject/DerryScaryProjectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDerryScaryProjectGameMode() {}
// Cross Module References
	DERRYSCARYPROJECT_API UClass* Z_Construct_UClass_ADerryScaryProjectGameMode_NoRegister();
	DERRYSCARYPROJECT_API UClass* Z_Construct_UClass_ADerryScaryProjectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DerryScaryProject();
// End Cross Module References
	void ADerryScaryProjectGameMode::StaticRegisterNativesADerryScaryProjectGameMode()
	{
	}
	UClass* Z_Construct_UClass_ADerryScaryProjectGameMode_NoRegister()
	{
		return ADerryScaryProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADerryScaryProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADerryScaryProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DerryScaryProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADerryScaryProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DerryScaryProjectGameMode.h" },
		{ "ModuleRelativePath", "DerryScaryProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADerryScaryProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADerryScaryProjectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADerryScaryProjectGameMode_Statics::ClassParams = {
		&ADerryScaryProjectGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ADerryScaryProjectGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADerryScaryProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADerryScaryProjectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADerryScaryProjectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADerryScaryProjectGameMode, 3243825202);
	template<> DERRYSCARYPROJECT_API UClass* StaticClass<ADerryScaryProjectGameMode>()
	{
		return ADerryScaryProjectGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADerryScaryProjectGameMode(Z_Construct_UClass_ADerryScaryProjectGameMode, &ADerryScaryProjectGameMode::StaticClass, TEXT("/Script/DerryScaryProject"), TEXT("ADerryScaryProjectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADerryScaryProjectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
