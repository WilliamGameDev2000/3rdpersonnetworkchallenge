// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkedGame2/NetworkedGame2GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkedGame2GameMode() {}
// Cross Module References
	NETWORKEDGAME2_API UClass* Z_Construct_UClass_ANetworkedGame2GameMode_NoRegister();
	NETWORKEDGAME2_API UClass* Z_Construct_UClass_ANetworkedGame2GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_NetworkedGame2();
// End Cross Module References
	void ANetworkedGame2GameMode::StaticRegisterNativesANetworkedGame2GameMode()
	{
	}
	UClass* Z_Construct_UClass_ANetworkedGame2GameMode_NoRegister()
	{
		return ANetworkedGame2GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANetworkedGame2GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANetworkedGame2GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkedGame2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetworkedGame2GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NetworkedGame2GameMode.h" },
		{ "ModuleRelativePath", "NetworkedGame2GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANetworkedGame2GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetworkedGame2GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANetworkedGame2GameMode_Statics::ClassParams = {
		&ANetworkedGame2GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANetworkedGame2GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkedGame2GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANetworkedGame2GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANetworkedGame2GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANetworkedGame2GameMode, 2914914790);
	template<> NETWORKEDGAME2_API UClass* StaticClass<ANetworkedGame2GameMode>()
	{
		return ANetworkedGame2GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANetworkedGame2GameMode(Z_Construct_UClass_ANetworkedGame2GameMode, &ANetworkedGame2GameMode::StaticClass, TEXT("/Script/NetworkedGame2"), TEXT("ANetworkedGame2GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANetworkedGame2GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
