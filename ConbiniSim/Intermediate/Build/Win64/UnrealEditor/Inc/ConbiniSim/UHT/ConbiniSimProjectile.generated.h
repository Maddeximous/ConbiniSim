// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConbiniSimProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef CONBINISIM_ConbiniSimProjectile_generated_h
#error "ConbiniSimProjectile.generated.h already included, missing '#pragma once' in ConbiniSimProjectile.h"
#endif
#define CONBINISIM_ConbiniSimProjectile_generated_h

#define FID_Users_svart_Documents_GitHub_ConbiniSim_ConbiniSim_Source_ConbiniSim_ConbiniSimProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_svart_Documents_GitHub_ConbiniSim_ConbiniSim_Source_ConbiniSim_ConbiniSimProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAConbiniSimProjectile(); \
	friend struct Z_Construct_UClass_AConbiniSimProjectile_Statics; \
public: \
	DECLARE_CLASS(AConbiniSimProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ConbiniSim"), NO_API) \
	DECLARE_SERIALIZER(AConbiniSimProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_svart_Documents_GitHub_ConbiniSim_ConbiniSim_Source_ConbiniSim_ConbiniSimProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AConbiniSimProjectile(AConbiniSimProjectile&&); \
	AConbiniSimProjectile(const AConbiniSimProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AConbiniSimProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AConbiniSimProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AConbiniSimProjectile) \
	NO_API virtual ~AConbiniSimProjectile();


#define FID_Users_svart_Documents_GitHub_ConbiniSim_ConbiniSim_Source_ConbiniSim_ConbiniSimProjectile_h_12_PROLOG
#define FID_Users_svart_Documents_GitHub_ConbiniSim_ConbiniSim_Source_ConbiniSim_ConbiniSimProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_svart_Documents_GitHub_ConbiniSim_ConbiniSim_Source_ConbiniSim_ConbiniSimProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_svart_Documents_GitHub_ConbiniSim_ConbiniSim_Source_ConbiniSim_ConbiniSimProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_svart_Documents_GitHub_ConbiniSim_ConbiniSim_Source_ConbiniSim_ConbiniSimProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONBINISIM_API UClass* StaticClass<class AConbiniSimProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_svart_Documents_GitHub_ConbiniSim_ConbiniSim_Source_ConbiniSim_ConbiniSimProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
