// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Unreal_Projekt_2018GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnreal_Projekt_2018GameMode() {}
// Cross Module References
	UNREAL_PROJEKT_2018_API UClass* Z_Construct_UClass_AUnreal_Projekt_2018GameMode_NoRegister();
	UNREAL_PROJEKT_2018_API UClass* Z_Construct_UClass_AUnreal_Projekt_2018GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Unreal_Projekt_2018();
// End Cross Module References
	void AUnreal_Projekt_2018GameMode::StaticRegisterNativesAUnreal_Projekt_2018GameMode()
	{
	}
	UClass* Z_Construct_UClass_AUnreal_Projekt_2018GameMode_NoRegister()
	{
		return AUnreal_Projekt_2018GameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AUnreal_Projekt_2018GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Unreal_Projekt_2018,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "Unreal_Projekt_2018GameMode.h" },
				{ "ModuleRelativePath", "Unreal_Projekt_2018GameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AUnreal_Projekt_2018GameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AUnreal_Projekt_2018GameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnreal_Projekt_2018GameMode, 1945813184);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnreal_Projekt_2018GameMode(Z_Construct_UClass_AUnreal_Projekt_2018GameMode, &AUnreal_Projekt_2018GameMode::StaticClass, TEXT("/Script/Unreal_Projekt_2018"), TEXT("AUnreal_Projekt_2018GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnreal_Projekt_2018GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
