// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Unreal_Projekt_2018HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnreal_Projekt_2018HUD() {}
// Cross Module References
	UNREAL_PROJEKT_2018_API UClass* Z_Construct_UClass_AUnreal_Projekt_2018HUD_NoRegister();
	UNREAL_PROJEKT_2018_API UClass* Z_Construct_UClass_AUnreal_Projekt_2018HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Unreal_Projekt_2018();
// End Cross Module References
	void AUnreal_Projekt_2018HUD::StaticRegisterNativesAUnreal_Projekt_2018HUD()
	{
	}
	UClass* Z_Construct_UClass_AUnreal_Projekt_2018HUD_NoRegister()
	{
		return AUnreal_Projekt_2018HUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AUnreal_Projekt_2018HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_Unreal_Projekt_2018,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "Unreal_Projekt_2018HUD.h" },
				{ "ModuleRelativePath", "Unreal_Projekt_2018HUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AUnreal_Projekt_2018HUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AUnreal_Projekt_2018HUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0080028Cu,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnreal_Projekt_2018HUD, 3596200436);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnreal_Projekt_2018HUD(Z_Construct_UClass_AUnreal_Projekt_2018HUD, &AUnreal_Projekt_2018HUD::StaticClass, TEXT("/Script/Unreal_Projekt_2018"), TEXT("AUnreal_Projekt_2018HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnreal_Projekt_2018HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
