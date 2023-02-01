// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKEDGAME2_NetworkedGame2Character_generated_h
#error "NetworkedGame2Character.generated.h already included, missing '#pragma once' in NetworkedGame2Character.h"
#endif
#define NETWORKEDGAME2_NetworkedGame2Character_generated_h

#define NetworkedGame2_Source_NetworkedGame2_NetworkedGame2Character_h_12_SPARSE_DATA
#define NetworkedGame2_Source_NetworkedGame2_NetworkedGame2Character_h_12_RPC_WRAPPERS
#define NetworkedGame2_Source_NetworkedGame2_NetworkedGame2Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define NetworkedGame2_Source_NetworkedGame2_NetworkedGame2Character_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANetworkedGame2Character(); \
	friend struct Z_Construct_UClass_ANetworkedGame2Character_Statics; \
public: \
	DECLARE_CLASS(ANetworkedGame2Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkedGame2"), NO_API) \
	DECLARE_SERIALIZER(ANetworkedGame2Character)


#define NetworkedGame2_Source_NetworkedGame2_NetworkedGame2Character_h_12_INCLASS \
private: \
	static void StaticRegisterNativesANetworkedGame2Character(); \
	friend struct Z_Construct_UClass_ANetworkedGame2Character_Statics; \
public: \
	DECLARE_CLASS(ANetworkedGame2Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkedGame2"), NO_API) \
	DECLARE_SERIALIZER(ANetworkedGame2Character)


#define NetworkedGame2_Source_NetworkedGame2_NetworkedGame2Character_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANetworkedGame2Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANetworkedGame2Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetworkedGame2Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetworkedGame2Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANetworkedGame2Character(ANetworkedGame2Character&&); \
	NO_API ANetworkedGame2Character(const ANetworkedGame2Character&); \
public:


#define NetworkedGame2_Source_NetworkedGame2_NetworkedGame2Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANetworkedGame2Character(ANetworkedGame2Character&&); \
	NO_API ANetworkedGame2Character(const ANetworkedGame2Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetworkedGame2Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetworkedGame2Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANetworkedGame2Character)


#define NetworkedGame2_Source_NetworkedGame2_NetworkedGame2Character_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ANetworkedGame2Character, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ANetworkedGame2Character, FollowCamera); }


#define NetworkedGame2_Source_NetworkedGame2_NetworkedGame2Character_h_9_PROLOG
#define NetworkedGame2_Source_NetworkedGame2_NetworkedGame2Character_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkedGame2_Source_NetworkedGame2_NetworkedGame2Character_h_12_PRIVATE_PROPERTY_OFFSET \
	NetworkedGame2_Source_NetworkedGame2_NetworkedGame2Character_h_12_SPARSE_DATA \
	NetworkedGame2_Source_NetworkedGame2_NetworkedGame2Character_h_12_RPC_WRAPPERS \
	NetworkedGame2_Source_NetworkedGame2_NetworkedGame2Character_h_12_INCLASS \
	NetworkedGame2_Source_NetworkedGame2_NetworkedGame2Character_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetworkedGame2_Source_NetworkedGame2_NetworkedGame2Character_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetworkedGame2_Source_NetworkedGame2_NetworkedGame2Character_h_12_PRIVATE_PROPERTY_OFFSET \
	NetworkedGame2_Source_NetworkedGame2_NetworkedGame2Character_h_12_SPARSE_DATA \
	NetworkedGame2_Source_NetworkedGame2_NetworkedGame2Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	NetworkedGame2_Source_NetworkedGame2_NetworkedGame2Character_h_12_INCLASS_NO_PURE_DECLS \
	NetworkedGame2_Source_NetworkedGame2_NetworkedGame2Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKEDGAME2_API UClass* StaticClass<class ANetworkedGame2Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetworkedGame2_Source_NetworkedGame2_NetworkedGame2Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
