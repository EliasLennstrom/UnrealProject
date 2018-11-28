// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/TestProjectHud.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestProjectHud() {}
// Cross Module References
	TESTPROJECT_API UClass* Z_Construct_UClass_ATestProjectHud_NoRegister();
	TESTPROJECT_API UClass* Z_Construct_UClass_ATestProjectHud();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_TestProject();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References
	void ATestProjectHud::StaticRegisterNativesATestProjectHud()
	{
	}
	UClass* Z_Construct_UClass_ATestProjectHud_NoRegister()
	{
		return ATestProjectHud::StaticClass();
	}
	struct Z_Construct_UClass_ATestProjectHud_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDFont;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestProjectHud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestProjectHud_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "TestProjectHud.h" },
		{ "ModuleRelativePath", "TestProjectHud.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestProjectHud_Statics::NewProp_HUDFont_MetaData[] = {
		{ "ModuleRelativePath", "TestProjectHud.h" },
		{ "ToolTip", "Font used to render the vehicle info" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestProjectHud_Statics::NewProp_HUDFont = { UE4CodeGen_Private::EPropertyClass::Object, "HUDFont", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ATestProjectHud, HUDFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestProjectHud_Statics::NewProp_HUDFont_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATestProjectHud_Statics::NewProp_HUDFont_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestProjectHud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestProjectHud_Statics::NewProp_HUDFont,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestProjectHud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestProjectHud>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestProjectHud_Statics::ClassParams = {
		&ATestProjectHud::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002ACu,
		nullptr, 0,
		Z_Construct_UClass_ATestProjectHud_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATestProjectHud_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATestProjectHud_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATestProjectHud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestProjectHud()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestProjectHud_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestProjectHud, 419193820);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestProjectHud(Z_Construct_UClass_ATestProjectHud, &ATestProjectHud::StaticClass, TEXT("/Script/TestProject"), TEXT("ATestProjectHud"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestProjectHud);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
