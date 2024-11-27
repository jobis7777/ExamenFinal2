// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_USFX/EnemigoDragon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoDragon() {}
// Cross Module References
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_AEnemigoDragon_NoRegister();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_AEnemigoDragon();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_AEnemigos();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_USFX();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
	void AEnemigoDragon::StaticRegisterNativesAEnemigoDragon()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoDragon_NoRegister()
	{
		return AEnemigoDragon::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoDragon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyAnimationAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyAnimationAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoDragon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigos,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoDragon_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemigoDragon.h" },
		{ "ModuleRelativePath", "EnemigoDragon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoDragon_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "// Componente de Malla Esquel?tica\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemigoDragon.h" },
		{ "ToolTip", "Componente de Malla Esquel?tica" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigoDragon_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigoDragon, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemigoDragon_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoDragon_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoDragon_Statics::NewProp_MyAnimationAsset_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "// Asset de animaci?n\n" },
		{ "ModuleRelativePath", "EnemigoDragon.h" },
		{ "ToolTip", "Asset de animaci?n" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigoDragon_Statics::NewProp_MyAnimationAsset = { "MyAnimationAsset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigoDragon, MyAnimationAsset), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemigoDragon_Statics::NewProp_MyAnimationAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoDragon_Statics::NewProp_MyAnimationAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigoDragon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoDragon_Statics::NewProp_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoDragon_Statics::NewProp_MyAnimationAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoDragon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoDragon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoDragon_Statics::ClassParams = {
		&AEnemigoDragon::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemigoDragon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoDragon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoDragon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoDragon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoDragon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoDragon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoDragon, 1658150449);
	template<> DONKEYKONG_USFX_API UClass* StaticClass<AEnemigoDragon>()
	{
		return AEnemigoDragon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoDragon(Z_Construct_UClass_AEnemigoDragon, &AEnemigoDragon::StaticClass, TEXT("/Script/DonkeyKong_USFX"), TEXT("AEnemigoDragon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoDragon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
