// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ATLASRIFT_Event_generated_h
#error "Event.generated.h already included, missing '#pragma once' in Event.h"
#endif
#define ATLASRIFT_Event_generated_h

#define ATLASrift_Source_ATLASrift_Event_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleMuons) \
	{ \
		P_FINISH; \
		this->ToggleMuons(); \
	} \
 \
	DECLARE_FUNCTION(execGetEvent) \
	{ \
		P_FINISH; \
		this->GetEvent(); \
	} \
 \
	DECLARE_FUNCTION(execSpawnTracks) \
	{ \
		P_FINISH; \
		this->SpawnTracks(); \
	}


#define ATLASrift_Source_ATLASrift_Event_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleMuons) \
	{ \
		P_FINISH; \
		this->ToggleMuons(); \
	} \
 \
	DECLARE_FUNCTION(execGetEvent) \
	{ \
		P_FINISH; \
		this->GetEvent(); \
	} \
 \
	DECLARE_FUNCTION(execSpawnTracks) \
	{ \
		P_FINISH; \
		this->SpawnTracks(); \
	}


#define ATLASrift_Source_ATLASrift_Event_h_16_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAEvent(); \
	friend ATLASRIFT_API class UClass* Z_Construct_UClass_AEvent(); \
	public: \
	DECLARE_CLASS(AEvent, AActor, COMPILED_IN_FLAGS(0), 0, ATLASrift, NO_API) \
	DECLARE_SERIALIZER(AEvent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AEvent*>(this); }


#define ATLASrift_Source_ATLASrift_Event_h_16_INCLASS \
	private: \
	static void StaticRegisterNativesAEvent(); \
	friend ATLASRIFT_API class UClass* Z_Construct_UClass_AEvent(); \
	public: \
	DECLARE_CLASS(AEvent, AActor, COMPILED_IN_FLAGS(0), 0, ATLASrift, NO_API) \
	DECLARE_SERIALIZER(AEvent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AEvent*>(this); }


#define ATLASrift_Source_ATLASrift_Event_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEvent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEvent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEvent); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AEvent(const AEvent& InCopy); \
public:


#define ATLASrift_Source_ATLASrift_Event_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AEvent(const AEvent& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEvent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEvent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEvent)


#define ATLASrift_Source_ATLASrift_Event_h_13_PROLOG
#define ATLASrift_Source_ATLASrift_Event_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ATLASrift_Source_ATLASrift_Event_h_16_RPC_WRAPPERS \
	ATLASrift_Source_ATLASrift_Event_h_16_INCLASS \
	ATLASrift_Source_ATLASrift_Event_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ATLASrift_Source_ATLASrift_Event_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ATLASrift_Source_ATLASrift_Event_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ATLASrift_Source_ATLASrift_Event_h_16_INCLASS_NO_PURE_DECLS \
	ATLASrift_Source_ATLASrift_Event_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ATLASrift_Source_ATLASrift_Event_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
