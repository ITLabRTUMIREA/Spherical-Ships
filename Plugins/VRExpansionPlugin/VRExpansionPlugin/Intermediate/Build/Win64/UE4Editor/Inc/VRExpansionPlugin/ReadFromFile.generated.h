// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREXPANSIONPLUGIN_ReadFromFile_generated_h
#error "ReadFromFile.generated.h already included, missing '#pragma once' in ReadFromFile.h"
#endif
#define VREXPANSIONPLUGIN_ReadFromFile_generated_h

#define Rep3_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReadFromFile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFileLoadString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UReadFromFile::FileLoadString(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileSaveString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveTextB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UReadFromFile::FileSaveString(Z_Param_SaveTextB,Z_Param_FileNameB); \
		P_NATIVE_END; \
	}


#define Rep3_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReadFromFile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFileLoadString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UReadFromFile::FileLoadString(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileSaveString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveTextB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UReadFromFile::FileSaveString(Z_Param_SaveTextB,Z_Param_FileNameB); \
		P_NATIVE_END; \
	}


#define Rep3_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReadFromFile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReadFromFile(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UReadFromFile(); \
public: \
	DECLARE_CLASS(UReadFromFile, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UReadFromFile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Rep3_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReadFromFile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUReadFromFile(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UReadFromFile(); \
public: \
	DECLARE_CLASS(UReadFromFile, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UReadFromFile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Rep3_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReadFromFile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReadFromFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReadFromFile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReadFromFile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReadFromFile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReadFromFile(UReadFromFile&&); \
	NO_API UReadFromFile(const UReadFromFile&); \
public:


#define Rep3_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReadFromFile_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReadFromFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReadFromFile(UReadFromFile&&); \
	NO_API UReadFromFile(const UReadFromFile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReadFromFile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReadFromFile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReadFromFile)


#define Rep3_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReadFromFile_h_15_PRIVATE_PROPERTY_OFFSET
#define Rep3_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReadFromFile_h_12_PROLOG
#define Rep3_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReadFromFile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rep3_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReadFromFile_h_15_PRIVATE_PROPERTY_OFFSET \
	Rep3_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReadFromFile_h_15_RPC_WRAPPERS \
	Rep3_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReadFromFile_h_15_INCLASS \
	Rep3_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReadFromFile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rep3_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReadFromFile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rep3_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReadFromFile_h_15_PRIVATE_PROPERTY_OFFSET \
	Rep3_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReadFromFile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Rep3_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReadFromFile_h_15_INCLASS_NO_PURE_DECLS \
	Rep3_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReadFromFile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Rep3_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReadFromFile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
