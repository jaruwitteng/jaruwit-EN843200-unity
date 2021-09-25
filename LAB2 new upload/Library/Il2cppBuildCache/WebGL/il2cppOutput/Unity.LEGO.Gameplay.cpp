#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Unity.LEGO.Game.GameEvent
struct GameEvent_tE3BAFD6F56BD598391D8F47ACF51FC19AB9B259D;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Unity.LEGO.Game.GameOverEvent
struct GameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409;
// Unity.LEGO.Gameplay.GroundHazard
struct GroundHazard_t31380588E8E00B3B0C0707FBF07CC0133641AEA3;
// Unity.LEGO.Game.LookSensitivityUpdateEvent
struct LookSensitivityUpdateEvent_tB1DCB5FE9FE2719AFB09DAE1B4BF24040180C709;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Unity.LEGO.Game.ObjectiveAdded
struct ObjectiveAdded_tD7245D8C50A24195DA915EF344B32173E897B0F6;
// Unity.LEGO.Game.OptionsMenuEvent
struct OptionsMenuEvent_tBC2BD78E9B097E2D591568D86C4FD1656DB6FDC6;
// System.String
struct String_t;
// Unity.LEGO.Game.VariableAdded
struct VariableAdded_t8D9FBFC315B1B519C5D85D6A37F63F18B47291FA;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t52946B0BDDEB53204CF999A3A7018CA82E991F1E 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// Unity.LEGO.Game.Events
struct Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2  : public RuntimeObject
{
public:

public:
};

struct Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_StaticFields
{
public:
	// Unity.LEGO.Game.OptionsMenuEvent Unity.LEGO.Game.Events::OptionsMenuEvent
	OptionsMenuEvent_tBC2BD78E9B097E2D591568D86C4FD1656DB6FDC6 * ___OptionsMenuEvent_0;
	// Unity.LEGO.Game.ObjectiveAdded Unity.LEGO.Game.Events::ObjectiveAddedEvent
	ObjectiveAdded_tD7245D8C50A24195DA915EF344B32173E897B0F6 * ___ObjectiveAddedEvent_1;
	// Unity.LEGO.Game.VariableAdded Unity.LEGO.Game.Events::VariableAddedEvent
	VariableAdded_t8D9FBFC315B1B519C5D85D6A37F63F18B47291FA * ___VariableAddedEvent_2;
	// Unity.LEGO.Game.GameOverEvent Unity.LEGO.Game.Events::GameOverEvent
	GameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409 * ___GameOverEvent_3;
	// Unity.LEGO.Game.LookSensitivityUpdateEvent Unity.LEGO.Game.Events::LookSensitivityUpdateEvent
	LookSensitivityUpdateEvent_tB1DCB5FE9FE2719AFB09DAE1B4BF24040180C709 * ___LookSensitivityUpdateEvent_4;

public:
	inline static int32_t get_offset_of_OptionsMenuEvent_0() { return static_cast<int32_t>(offsetof(Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_StaticFields, ___OptionsMenuEvent_0)); }
	inline OptionsMenuEvent_tBC2BD78E9B097E2D591568D86C4FD1656DB6FDC6 * get_OptionsMenuEvent_0() const { return ___OptionsMenuEvent_0; }
	inline OptionsMenuEvent_tBC2BD78E9B097E2D591568D86C4FD1656DB6FDC6 ** get_address_of_OptionsMenuEvent_0() { return &___OptionsMenuEvent_0; }
	inline void set_OptionsMenuEvent_0(OptionsMenuEvent_tBC2BD78E9B097E2D591568D86C4FD1656DB6FDC6 * value)
	{
		___OptionsMenuEvent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OptionsMenuEvent_0), (void*)value);
	}

	inline static int32_t get_offset_of_ObjectiveAddedEvent_1() { return static_cast<int32_t>(offsetof(Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_StaticFields, ___ObjectiveAddedEvent_1)); }
	inline ObjectiveAdded_tD7245D8C50A24195DA915EF344B32173E897B0F6 * get_ObjectiveAddedEvent_1() const { return ___ObjectiveAddedEvent_1; }
	inline ObjectiveAdded_tD7245D8C50A24195DA915EF344B32173E897B0F6 ** get_address_of_ObjectiveAddedEvent_1() { return &___ObjectiveAddedEvent_1; }
	inline void set_ObjectiveAddedEvent_1(ObjectiveAdded_tD7245D8C50A24195DA915EF344B32173E897B0F6 * value)
	{
		___ObjectiveAddedEvent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ObjectiveAddedEvent_1), (void*)value);
	}

	inline static int32_t get_offset_of_VariableAddedEvent_2() { return static_cast<int32_t>(offsetof(Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_StaticFields, ___VariableAddedEvent_2)); }
	inline VariableAdded_t8D9FBFC315B1B519C5D85D6A37F63F18B47291FA * get_VariableAddedEvent_2() const { return ___VariableAddedEvent_2; }
	inline VariableAdded_t8D9FBFC315B1B519C5D85D6A37F63F18B47291FA ** get_address_of_VariableAddedEvent_2() { return &___VariableAddedEvent_2; }
	inline void set_VariableAddedEvent_2(VariableAdded_t8D9FBFC315B1B519C5D85D6A37F63F18B47291FA * value)
	{
		___VariableAddedEvent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VariableAddedEvent_2), (void*)value);
	}

	inline static int32_t get_offset_of_GameOverEvent_3() { return static_cast<int32_t>(offsetof(Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_StaticFields, ___GameOverEvent_3)); }
	inline GameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409 * get_GameOverEvent_3() const { return ___GameOverEvent_3; }
	inline GameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409 ** get_address_of_GameOverEvent_3() { return &___GameOverEvent_3; }
	inline void set_GameOverEvent_3(GameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409 * value)
	{
		___GameOverEvent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameOverEvent_3), (void*)value);
	}

	inline static int32_t get_offset_of_LookSensitivityUpdateEvent_4() { return static_cast<int32_t>(offsetof(Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_StaticFields, ___LookSensitivityUpdateEvent_4)); }
	inline LookSensitivityUpdateEvent_tB1DCB5FE9FE2719AFB09DAE1B4BF24040180C709 * get_LookSensitivityUpdateEvent_4() const { return ___LookSensitivityUpdateEvent_4; }
	inline LookSensitivityUpdateEvent_tB1DCB5FE9FE2719AFB09DAE1B4BF24040180C709 ** get_address_of_LookSensitivityUpdateEvent_4() { return &___LookSensitivityUpdateEvent_4; }
	inline void set_LookSensitivityUpdateEvent_4(LookSensitivityUpdateEvent_tB1DCB5FE9FE2719AFB09DAE1B4BF24040180C709 * value)
	{
		___LookSensitivityUpdateEvent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LookSensitivityUpdateEvent_4), (void*)value);
	}
};


// Unity.LEGO.Game.GameEvent
struct GameEvent_tE3BAFD6F56BD598391D8F47ACF51FC19AB9B259D  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// Unity.LEGO.Game.GameOverEvent
struct GameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409  : public GameEvent_tE3BAFD6F56BD598391D8F47ACF51FC19AB9B259D
{
public:
	// System.Boolean Unity.LEGO.Game.GameOverEvent::Win
	bool ___Win_0;

public:
	inline static int32_t get_offset_of_Win_0() { return static_cast<int32_t>(offsetof(GameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409, ___Win_0)); }
	inline bool get_Win_0() const { return ___Win_0; }
	inline bool* get_address_of_Win_0() { return &___Win_0; }
	inline void set_Win_0(bool value)
	{
		___Win_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Unity.LEGO.Gameplay.GroundHazard
struct GroundHazard_t31380588E8E00B3B0C0707FBF07CC0133641AEA3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___tag0, const RuntimeMethod* method);
// System.Void Unity.LEGO.Game.EventManager::Broadcast(Unity.LEGO.Game.GameEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_Broadcast_m26E2E660FCCB7D0B37FDB53B9F34F7FED4D01452 (GameEvent_tE3BAFD6F56BD598391D8F47ACF51FC19AB9B259D * ___evt0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.LEGO.Gameplay.GroundHazard::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundHazard_OnTriggerEnter_m76F2995D26807EFA37C10788747E073851A7FA15 (GroundHazard_t31380588E8E00B3B0C0707FBF07CC0133641AEA3 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.gameObject.CompareTag("Player"))
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// GameOverEvent evt = Events.GameOverEvent;
		IL2CPP_RUNTIME_CLASS_INIT(Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_il2cpp_TypeInfo_var);
		GameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409 * L_3 = ((Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_StaticFields*)il2cpp_codegen_static_fields_for(Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_il2cpp_TypeInfo_var))->get_GameOverEvent_3();
		// evt.Win = false;
		GameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409 * L_4 = L_3;
		L_4->set_Win_0((bool)0);
		// EventManager.Broadcast(evt);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var);
		EventManager_Broadcast_m26E2E660FCCB7D0B37FDB53B9F34F7FED4D01452(L_4, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void Unity.LEGO.Gameplay.GroundHazard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundHazard__ctor_m6956453C65B7BB2E2AD3D950C31667326488B232 (GroundHazard_t31380588E8E00B3B0C0707FBF07CC0133641AEA3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
