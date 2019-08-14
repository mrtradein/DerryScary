// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DerryScaryProject/DerryScaryProjectHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDerryScaryProjectHUD() {}
// Cross Module References
	DERRYSCARYPROJECT_API UClass* Z_Construct_UClass_ADerryScaryProjectHUD_NoRegister();
	DERRYSCARYPROJECT_API UClass* Z_Construct_UClass_ADerryScaryProjectHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_DerryScaryProject();
// End Cross Module References
	void ADerryScaryProjectHUD::StaticRegisterNativesADerryScaryProjectHUD()
	{
	}
	UClass* Z_Construct_UClass_ADerryScaryProjectHUD_NoRegister()
	{
		return ADerryScaryProjectHUD::StaticClass();
	}
	struct Z_Construct_UClass_ADerryScaryProjectHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADerryScaryProjectHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_DerryScaryProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADerryScaryProjectHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "DerryScaryProjectHUD.h" },
		{ "ModuleRelativePath", "DerryScaryProjectHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADerryScaryProjectHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADerryScaryProjectHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADerryScaryProjectHUD_Statics::ClassParams = {
		&ADerryScaryProjectHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADerryScaryProjectHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADerryScaryProjectHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADerryScaryProjectHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADerryScaryProjectHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADerryScaryProjectHUD, 2662267050);
	template<> DERRYSCARYPROJECT_API UClass* StaticClass<ADerryScaryProjectHUD>()
	{
		return ADerryScaryProjectHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADerryScaryProjectHUD(Z_Construct_UClass_ADerryScaryProjectHUD, &ADerryScaryProjectHUD::StaticClass, TEXT("/Script/DerryScaryProject"), TEXT("ADerryScaryProjectHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADerryScaryProjectHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
