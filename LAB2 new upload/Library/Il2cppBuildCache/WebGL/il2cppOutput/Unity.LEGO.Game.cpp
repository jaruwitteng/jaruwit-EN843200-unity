#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<Unity.LEGO.Game.GameEvent>
struct Action_1_t97CCC13273AF169BED7E08606FEE9BA41865B820;
// System.Action`1<Unity.LEGO.Game.GameOverEvent>
struct Action_1_t020682A1E00DC8EE4C5FD052702748C3A7E17AB4;
// System.Action`1<Unity.LEGO.Game.IObjective>
struct Action_1_t8FE4FE34AA2FA18BE53A649F50F63F8CB8430800;
// System.Action`1<System.Int32>
struct Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B;
// System.Action`1<Unity.LEGO.Game.LookSensitivityUpdateEvent>
struct Action_1_t7A4D2A712BE201E21551B5B23AF8BBAFD72B6C28;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<Unity.LEGO.Game.ObjectiveAdded>
struct Action_1_tF1836A38C56D3A758B176D27E26A7CC766798CDE;
// System.Collections.Generic.Dictionary`2<System.Delegate,System.Action`1<Unity.LEGO.Game.GameEvent>>
struct Dictionary_2_t55A8FEADE4FF56276AE151AAEE1BE1937C93A6CE;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.Type,System.Action`1<Unity.LEGO.Game.GameEvent>>
struct Dictionary_2_t103ED77648449F031458E693029C7EF3B2369319;
// System.Collections.Generic.Dictionary`2<Unity.LEGO.Game.Variable,System.Int32>
struct Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<Unity.LEGO.Game.Variable>
struct IEnumerable_1_t713F65ABE452AEB72C80C5FF01F65DCACF439039;
// System.Collections.Generic.IEqualityComparer`1<System.Delegate>
struct IEqualityComparer_1_t831C4EEA2C957EEB76CCBB47064E055FA82EB132;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t7EEC9B4006D6D425748908D52AA799197F29A165;
// System.Collections.Generic.IEqualityComparer`1<Unity.LEGO.Game.Variable>
struct IEqualityComparer_1_tF26491D48295A494970DA09A7B433787E4C22733;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Delegate,System.Action`1<Unity.LEGO.Game.GameEvent>>
struct KeyCollection_tA1532E6CBD244DAC6EA05FFCCEACD95804BD449B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t0C2A6470B0D42D7A87AADBEADCF3DD1DDDD08956;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Action`1<Unity.LEGO.Game.GameEvent>>
struct KeyCollection_t0850B848F7253D45C794333239F5804580151A91;
// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.LEGO.Game.Variable,System.Int32>
struct KeyCollection_t60CF0C6C759CBD61114D1590C4AF532F499BB1E6;
// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension>
struct List_1_t13875FE3163CFA961C09134FFAA2E0903229691A;
// System.Collections.Generic.List`1<Unity.LEGO.Game.IObjective>
struct List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Unity.LEGO.Game.Variable>
struct List_1_t7B50DCA27E54364BC506813348A65104C8193FB1;
// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable>
struct List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009;
// System.Predicate`1<Unity.LEGO.Game.IObjective>
struct Predicate_1_t38F538874F744DB7A65CA0DF6ECDF1CCBAE673B3;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Delegate,System.Action`1<Unity.LEGO.Game.GameEvent>>
struct ValueCollection_t8A1A8EB637B56B97EB8B6E86BFD3EFDE6A4ABA88;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Action`1<Unity.LEGO.Game.GameEvent>>
struct ValueCollection_tACCE54742E830DD84C93A401BB98DE5F9595BC6E;
// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.LEGO.Game.Variable,System.Int32>
struct ValueCollection_t986CC20E5D18B27D69A45D49B70FDFAC7AAEBD2E;
// System.Collections.Generic.Dictionary`2/Entry<System.Delegate,System.Action`1<Unity.LEGO.Game.GameEvent>>[]
struct EntryU5BU5D_t767F16B6D6CFA63B23913C5B0EE01F06E6E74AD6;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Action`1<Unity.LEGO.Game.GameEvent>>[]
struct EntryU5BU5D_t711503D3EE4D2F36F4682B67222E9C02EF7DF0CE;
// System.Collections.Generic.Dictionary`2/Entry<Unity.LEGO.Game.Variable,System.Int32>[]
struct EntryU5BU5D_tAF0EDDCABAB00F1A794DD089E9641CA74040D59A;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Cinemachine.CinemachineOrbitalTransposer[]
struct CinemachineOrbitalTransposerU5BU5D_t262EAE08AEDA55E53176DB1697F768E1DA37C2E4;
// Cinemachine.CinemachineVirtualCamera[]
struct CinemachineVirtualCameraU5BU5D_tC889EF06476C516ECD8E2A99BD4C4067B8F8E57A;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Unity.LEGO.Game.IObjective[]
struct IObjectiveU5BU5D_t9C2D893A7270E72D84EF3ADA21780598B18194D4;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// Unity.LEGO.Game.Variable[]
struct VariableU5BU5D_t51ED556CDB1F7B69FC5C4D374CCEBE15EC4E97D4;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;
// Cinemachine.CinemachineCore/Stage[]
struct StageU5BU5D_t605193BD653BA57911AFE8A2D01B1D799F7BB949;
// Cinemachine.CinemachineFreeLook/Orbit[]
struct OrbitU5BU5D_t6E72D519BC4799C53639700DA84A0B5D9A8843C7;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// Cinemachine.CinemachineBlend
struct CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C;
// Cinemachine.CinemachineFreeLook
struct CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F;
// Unity.LEGO.Game.Condition
struct Condition_t9088726E1F4F069A22419DB7E6C8DA7EC1D2AB5A;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Unity.LEGO.Game.GameEvent
struct GameEvent_tE3BAFD6F56BD598391D8F47ACF51FC19AB9B259D;
// Unity.LEGO.Game.GameFlowManager
struct GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Unity.LEGO.Game.GameOverEvent
struct GameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Unity.LEGO.Game.IObjective
struct IObjective_t1F2AF2933B14EFA9E15DFFF4A19A0E48F1D3B4BD;
// Unity.LEGO.Game.InputManager
struct InputManager_t3B65863876DEF411046BF33708D1137313B0023C;
// Unity.LEGO.Game.LookSensitivityUpdateEvent
struct LookSensitivityUpdateEvent_tB1DCB5FE9FE2719AFB09DAE1B4BF24040180C709;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Unity.LEGO.Game.ObjectiveAdded
struct ObjectiveAdded_tD7245D8C50A24195DA915EF344B32173E897B0F6;
// Unity.LEGO.Game.ObjectiveManager
struct ObjectiveManager_tD5EE4E2902DE8B17FE395EAF0B2BBF7422FF2439;
// Unity.LEGO.Game.OptionsMenuEvent
struct OptionsMenuEvent_tBC2BD78E9B097E2D591568D86C4FD1656DB6FDC6;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// Unity.LEGO.Game.Variable
struct Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E;
// Unity.LEGO.Game.VariableAdded
struct VariableAdded_t8D9FBFC315B1B519C5D85D6A37F63F18B47291FA;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// Cinemachine.AxisState/IInputAxisProvider
struct IInputAxisProvider_t60E3751C2B79760C58FA84BC376D8A3DC1E7AE70;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Cinemachine.CinemachineBrain/VcamActivatedEvent
struct VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296;
// Cinemachine.CinemachineFreeLook/CreateRigDelegate
struct CreateRigDelegate_t7FF9E13258FAF45CD7A591B792B1171596A16270;
// Cinemachine.CinemachineFreeLook/DestroyRigDelegate
struct DestroyRigDelegate_tEC6C3F9493E6C7AF161C5BE580A398B3C333ED49;
// Unity.LEGO.Game.GameFlowManager/<StartGameLockLookRotation>d__20
struct U3CStartGameLockLookRotationU3Ed__20_tB001861D74C22D74557045D8B0B1834ACF2194B4;
// Unity.LEGO.Game.GameFlowManager/<ZoomInOnPlayer>d__24
struct U3CZoomInOnPlayerU3Ed__24_t934444AB2415126D28E6C233B30EA61E09C2E475;
// Unity.LEGO.Game.ObjectiveManager/<>c
struct U3CU3Ec_t24FA5B43B7BC487E38C841E176CAD482D559CA6C;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t020682A1E00DC8EE4C5FD052702748C3A7E17AB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t7A4D2A712BE201E21551B5B23AF8BBAFD72B6C28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t8FE4FE34AA2FA18BE53A649F50F63F8CB8430800_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tF1836A38C56D3A758B176D27E26A7CC766798CDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t103ED77648449F031458E693029C7EF3B2369319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t55A8FEADE4FF56276AE151AAEE1BE1937C93A6CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IObjective_t1F2AF2933B14EFA9E15DFFF4A19A0E48F1D3B4BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7B50DCA27E54364BC506813348A65104C8193FB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LookSensitivityUpdateEvent_tB1DCB5FE9FE2719AFB09DAE1B4BF24040180C709_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectiveAdded_tD7245D8C50A24195DA915EF344B32173E897B0F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OptionsMenuEvent_tBC2BD78E9B097E2D591568D86C4FD1656DB6FDC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t38F538874F744DB7A65CA0DF6ECDF1CCBAE673B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartGameLockLookRotationU3Ed__20_tB001861D74C22D74557045D8B0B1834ACF2194B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t24FA5B43B7BC487E38C841E176CAD482D559CA6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CZoomInOnPlayerU3Ed__24_t934444AB2415126D28E6C233B30EA61E09C2E475_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VariableAdded_t8D9FBFC315B1B519C5D85D6A37F63F18B47291FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral130DEAA16B60191B0C01B858BD3A42CFAB92E651;
IL2CPP_EXTERN_C String_t* _stringLiteral9379DD12FD88E583CE1A7A833443D561376FB07B;
IL2CPP_EXTERN_C String_t* _stringLiteralB1AA2387EE710A45D5A5A0928EE825C909430D34;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m054D17824B387CACCE0E47A56F1C8D310DFED9D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m586CF6A750EABC6C4B2A36FEA47456F3531A8835_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mB413F2F8DB13CA49035B93AA2BC71FAB585CE68C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mE58C2C12FE90F562EDB8AD0E895A2C75D23ECADD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mEC55D7DC0EB31EF137E72CBDF8815D127B47366C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m59908740975E85C9E0FF4AF8E0EE0BF38A0DBB30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mBC4CB18DD10F5D9143B72C5EE37475DCBC9C5418_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m9B23B2593A13B2DD234DAD83C5B155B52B9D34BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m66317D3EA0305133E7D9C19B3378500019B1BC89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m30860BED51793354597283B4A14A0B602D41CA20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m8F161F997B46A0359B6C051290F5B844B9C5ED37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD0FEF32558495B35F71D9022666C3EC959509BC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mF3741C026200F93B05F614E866D665AFFD58E76E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m6B36271CFA319DBC5D3F70F0653A3DE311DD5EE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m06DD5F15A490A248D00F940E922DB545DCBAB113_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m74A38200C167714F840592A10866F6FAFCB0E7F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA73E310CDE3403CB622B5163384E26C3969784AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m67B7316DDE38CC0306685DA6E7C744FD35D40D6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF604425E49804D3273548CDE1A4A3FFD406BC54A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC2AAA6897C301922551CD0AA6FC154E257508F5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCF0C503C9C0F575AB29BDA6D6FAB259BCD86E771_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventManager_AddListener_TisGameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409_m01DF69E53ADAE8B1E381EE842A45ADF086A406EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventManager_AddListener_TisLookSensitivityUpdateEvent_tB1DCB5FE9FE2719AFB09DAE1B4BF24040180C709_mF1045ADC181A3837C3712F8DE071A236AE878B63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventManager_AddListener_TisObjectiveAdded_tD7245D8C50A24195DA915EF344B32173E897B0F6_mBEE49DF82C76D0393B1C161B9BA64BF59603BB8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventManager_RemoveListener_TisGameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409_m92E1FDFDB27705671B45C78544224020FEB482FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventManager_RemoveListener_TisLookSensitivityUpdateEvent_tB1DCB5FE9FE2719AFB09DAE1B4BF24040180C709_m54B8B1C236C594640B7DFCF891C00A227CA290C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventManager_RemoveListener_TisObjectiveAdded_tD7245D8C50A24195DA915EF344B32173E897B0F6_m83A35A8184410219014DC125042CB3FAEFFB39C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameFlowManager_OnGameOver_m765BA06DE2BCB9C85BDCDAFA009A533956336042_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputManager_OnLookSensitivityUpdate_m2E6F87DAB9652CF47E7A0F9B0753C3DD8F5522C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA456C29049CA8C04BAEFBA20CFBAFB05F464FAB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Exists_m174FABD94A024102A75BB5A60A52B4EA203D0F9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m86BAA941B6D6E1ADE36E0C6F168294F4671A437F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m9CF6322BE417744E7F68E7C308E7E0305E75E090_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m385FAB9EB736DB3E8120B1ED61D14C1F8A7AAFD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBAA16B260E33505407B473D7FA673996B0923DBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisCinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F_m73AAF8C5A398249506E426A33B5D7B9BAEADE25A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectiveManager_OnObjectiveAdded_mD581F692D34DA72D9288B5060E2A179C77A02F51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectiveManager_OnProgress_m2E3138DF57FB043999942F10AD9D5C70FA83D9AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Predicate_1__ctor_m803C88CADB336B04A7A20620C93FABA326AE0FBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartGameLockLookRotationU3Ed__20_System_Collections_IEnumerator_Reset_m49D92F5EFC2FF71D15462304B9F4D91D9C5653EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CUpdateGameStatusU3Eb__6_0_m3595A74676E968B6860149BC401DAC07E95F7F16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CZoomInOnPlayerU3Ed__24_System_Collections_IEnumerator_Reset_mD1839EC25A7E067A7DA3CBC5CEB34CE744739410_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct OrbitU5BU5D_t6E72D519BC4799C53639700DA84A0B5D9A8843C7;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t0171E29151533708A5CB28DD33512A3578DC0529 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Delegate,System.Action`1<Unity.LEGO.Game.GameEvent>>
struct Dictionary_2_t55A8FEADE4FF56276AE151AAEE1BE1937C93A6CE  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t767F16B6D6CFA63B23913C5B0EE01F06E6E74AD6* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tA1532E6CBD244DAC6EA05FFCCEACD95804BD449B * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t8A1A8EB637B56B97EB8B6E86BFD3EFDE6A4ABA88 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t55A8FEADE4FF56276AE151AAEE1BE1937C93A6CE, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t55A8FEADE4FF56276AE151AAEE1BE1937C93A6CE, ___entries_1)); }
	inline EntryU5BU5D_t767F16B6D6CFA63B23913C5B0EE01F06E6E74AD6* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t767F16B6D6CFA63B23913C5B0EE01F06E6E74AD6** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t767F16B6D6CFA63B23913C5B0EE01F06E6E74AD6* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t55A8FEADE4FF56276AE151AAEE1BE1937C93A6CE, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t55A8FEADE4FF56276AE151AAEE1BE1937C93A6CE, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t55A8FEADE4FF56276AE151AAEE1BE1937C93A6CE, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t55A8FEADE4FF56276AE151AAEE1BE1937C93A6CE, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t55A8FEADE4FF56276AE151AAEE1BE1937C93A6CE, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t55A8FEADE4FF56276AE151AAEE1BE1937C93A6CE, ___keys_7)); }
	inline KeyCollection_tA1532E6CBD244DAC6EA05FFCCEACD95804BD449B * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tA1532E6CBD244DAC6EA05FFCCEACD95804BD449B ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tA1532E6CBD244DAC6EA05FFCCEACD95804BD449B * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t55A8FEADE4FF56276AE151AAEE1BE1937C93A6CE, ___values_8)); }
	inline ValueCollection_t8A1A8EB637B56B97EB8B6E86BFD3EFDE6A4ABA88 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t8A1A8EB637B56B97EB8B6E86BFD3EFDE6A4ABA88 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t8A1A8EB637B56B97EB8B6E86BFD3EFDE6A4ABA88 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t55A8FEADE4FF56276AE151AAEE1BE1937C93A6CE, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Action`1<Unity.LEGO.Game.GameEvent>>
struct Dictionary_2_t103ED77648449F031458E693029C7EF3B2369319  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t711503D3EE4D2F36F4682B67222E9C02EF7DF0CE* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0850B848F7253D45C794333239F5804580151A91 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tACCE54742E830DD84C93A401BB98DE5F9595BC6E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t103ED77648449F031458E693029C7EF3B2369319, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t103ED77648449F031458E693029C7EF3B2369319, ___entries_1)); }
	inline EntryU5BU5D_t711503D3EE4D2F36F4682B67222E9C02EF7DF0CE* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t711503D3EE4D2F36F4682B67222E9C02EF7DF0CE** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t711503D3EE4D2F36F4682B67222E9C02EF7DF0CE* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t103ED77648449F031458E693029C7EF3B2369319, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t103ED77648449F031458E693029C7EF3B2369319, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t103ED77648449F031458E693029C7EF3B2369319, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t103ED77648449F031458E693029C7EF3B2369319, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t103ED77648449F031458E693029C7EF3B2369319, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t103ED77648449F031458E693029C7EF3B2369319, ___keys_7)); }
	inline KeyCollection_t0850B848F7253D45C794333239F5804580151A91 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0850B848F7253D45C794333239F5804580151A91 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0850B848F7253D45C794333239F5804580151A91 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t103ED77648449F031458E693029C7EF3B2369319, ___values_8)); }
	inline ValueCollection_tACCE54742E830DD84C93A401BB98DE5F9595BC6E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tACCE54742E830DD84C93A401BB98DE5F9595BC6E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tACCE54742E830DD84C93A401BB98DE5F9595BC6E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t103ED77648449F031458E693029C7EF3B2369319, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<Unity.LEGO.Game.Variable,System.Int32>
struct Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tAF0EDDCABAB00F1A794DD089E9641CA74040D59A* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t60CF0C6C759CBD61114D1590C4AF532F499BB1E6 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t986CC20E5D18B27D69A45D49B70FDFAC7AAEBD2E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932, ___entries_1)); }
	inline EntryU5BU5D_tAF0EDDCABAB00F1A794DD089E9641CA74040D59A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tAF0EDDCABAB00F1A794DD089E9641CA74040D59A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tAF0EDDCABAB00F1A794DD089E9641CA74040D59A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932, ___keys_7)); }
	inline KeyCollection_t60CF0C6C759CBD61114D1590C4AF532F499BB1E6 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t60CF0C6C759CBD61114D1590C4AF532F499BB1E6 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t60CF0C6C759CBD61114D1590C4AF532F499BB1E6 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932, ___values_8)); }
	inline ValueCollection_t986CC20E5D18B27D69A45D49B70FDFAC7AAEBD2E * get_values_8() const { return ___values_8; }
	inline ValueCollection_t986CC20E5D18B27D69A45D49B70FDFAC7AAEBD2E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t986CC20E5D18B27D69A45D49B70FDFAC7AAEBD2E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.LEGO.Game.Variable,System.Int32>
struct KeyCollection_t60CF0C6C759CBD61114D1590C4AF532F499BB1E6  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t60CF0C6C759CBD61114D1590C4AF532F499BB1E6, ___dictionary_0)); }
	inline Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<Unity.LEGO.Game.IObjective>
struct List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IObjectiveU5BU5D_t9C2D893A7270E72D84EF3ADA21780598B18194D4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559, ____items_1)); }
	inline IObjectiveU5BU5D_t9C2D893A7270E72D84EF3ADA21780598B18194D4* get__items_1() const { return ____items_1; }
	inline IObjectiveU5BU5D_t9C2D893A7270E72D84EF3ADA21780598B18194D4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IObjectiveU5BU5D_t9C2D893A7270E72D84EF3ADA21780598B18194D4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IObjectiveU5BU5D_t9C2D893A7270E72D84EF3ADA21780598B18194D4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559_StaticFields, ____emptyArray_5)); }
	inline IObjectiveU5BU5D_t9C2D893A7270E72D84EF3ADA21780598B18194D4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IObjectiveU5BU5D_t9C2D893A7270E72D84EF3ADA21780598B18194D4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IObjectiveU5BU5D_t9C2D893A7270E72D84EF3ADA21780598B18194D4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Unity.LEGO.Game.Variable>
struct List_1_t7B50DCA27E54364BC506813348A65104C8193FB1  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	VariableU5BU5D_t51ED556CDB1F7B69FC5C4D374CCEBE15EC4E97D4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7B50DCA27E54364BC506813348A65104C8193FB1, ____items_1)); }
	inline VariableU5BU5D_t51ED556CDB1F7B69FC5C4D374CCEBE15EC4E97D4* get__items_1() const { return ____items_1; }
	inline VariableU5BU5D_t51ED556CDB1F7B69FC5C4D374CCEBE15EC4E97D4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(VariableU5BU5D_t51ED556CDB1F7B69FC5C4D374CCEBE15EC4E97D4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7B50DCA27E54364BC506813348A65104C8193FB1, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7B50DCA27E54364BC506813348A65104C8193FB1, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7B50DCA27E54364BC506813348A65104C8193FB1, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7B50DCA27E54364BC506813348A65104C8193FB1_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	VariableU5BU5D_t51ED556CDB1F7B69FC5C4D374CCEBE15EC4E97D4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7B50DCA27E54364BC506813348A65104C8193FB1_StaticFields, ____emptyArray_5)); }
	inline VariableU5BU5D_t51ED556CDB1F7B69FC5C4D374CCEBE15EC4E97D4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline VariableU5BU5D_t51ED556CDB1F7B69FC5C4D374CCEBE15EC4E97D4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(VariableU5BU5D_t51ED556CDB1F7B69FC5C4D374CCEBE15EC4E97D4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Unity.LEGO.Game.EventManager
struct EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819  : public RuntimeObject
{
public:

public:
};

struct EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Action`1<Unity.LEGO.Game.GameEvent>> Unity.LEGO.Game.EventManager::s_Events
	Dictionary_2_t103ED77648449F031458E693029C7EF3B2369319 * ___s_Events_0;
	// System.Collections.Generic.Dictionary`2<System.Delegate,System.Action`1<Unity.LEGO.Game.GameEvent>> Unity.LEGO.Game.EventManager::s_EventLookups
	Dictionary_2_t55A8FEADE4FF56276AE151AAEE1BE1937C93A6CE * ___s_EventLookups_1;

public:
	inline static int32_t get_offset_of_s_Events_0() { return static_cast<int32_t>(offsetof(EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_StaticFields, ___s_Events_0)); }
	inline Dictionary_2_t103ED77648449F031458E693029C7EF3B2369319 * get_s_Events_0() const { return ___s_Events_0; }
	inline Dictionary_2_t103ED77648449F031458E693029C7EF3B2369319 ** get_address_of_s_Events_0() { return &___s_Events_0; }
	inline void set_s_Events_0(Dictionary_2_t103ED77648449F031458E693029C7EF3B2369319 * value)
	{
		___s_Events_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Events_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_EventLookups_1() { return static_cast<int32_t>(offsetof(EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_StaticFields, ___s_EventLookups_1)); }
	inline Dictionary_2_t55A8FEADE4FF56276AE151AAEE1BE1937C93A6CE * get_s_EventLookups_1() const { return ___s_EventLookups_1; }
	inline Dictionary_2_t55A8FEADE4FF56276AE151AAEE1BE1937C93A6CE ** get_address_of_s_EventLookups_1() { return &___s_EventLookups_1; }
	inline void set_s_EventLookups_1(Dictionary_2_t55A8FEADE4FF56276AE151AAEE1BE1937C93A6CE * value)
	{
		___s_EventLookups_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EventLookups_1), (void*)value);
	}
};


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


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// Unity.LEGO.Game.VariableManager
struct VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F  : public RuntimeObject
{
public:

public:
};

struct VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<Unity.LEGO.Game.Variable,System.Int32> Unity.LEGO.Game.VariableManager::s_RegisteredVariables
	Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932 * ___s_RegisteredVariables_1;

public:
	inline static int32_t get_offset_of_s_RegisteredVariables_1() { return static_cast<int32_t>(offsetof(VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_StaticFields, ___s_RegisteredVariables_1)); }
	inline Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932 * get_s_RegisteredVariables_1() const { return ___s_RegisteredVariables_1; }
	inline Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932 ** get_address_of_s_RegisteredVariables_1() { return &___s_RegisteredVariables_1; }
	inline void set_s_RegisteredVariables_1(Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932 * value)
	{
		___s_RegisteredVariables_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RegisteredVariables_1), (void*)value);
	}
};


// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Unity.LEGO.Game.GameFlowManager/<StartGameLockLookRotation>d__20
struct U3CStartGameLockLookRotationU3Ed__20_tB001861D74C22D74557045D8B0B1834ACF2194B4  : public RuntimeObject
{
public:
	// System.Int32 Unity.LEGO.Game.GameFlowManager/<StartGameLockLookRotation>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Unity.LEGO.Game.GameFlowManager/<StartGameLockLookRotation>d__20::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Unity.LEGO.Game.GameFlowManager Unity.LEGO.Game.GameFlowManager/<StartGameLockLookRotation>d__20::<>4__this
	GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartGameLockLookRotationU3Ed__20_tB001861D74C22D74557045D8B0B1834ACF2194B4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartGameLockLookRotationU3Ed__20_tB001861D74C22D74557045D8B0B1834ACF2194B4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartGameLockLookRotationU3Ed__20_tB001861D74C22D74557045D8B0B1834ACF2194B4, ___U3CU3E4__this_2)); }
	inline GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Unity.LEGO.Game.GameFlowManager/<ZoomInOnPlayer>d__24
struct U3CZoomInOnPlayerU3Ed__24_t934444AB2415126D28E6C233B30EA61E09C2E475  : public RuntimeObject
{
public:
	// System.Int32 Unity.LEGO.Game.GameFlowManager/<ZoomInOnPlayer>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Unity.LEGO.Game.GameFlowManager/<ZoomInOnPlayer>d__24::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Unity.LEGO.Game.GameFlowManager Unity.LEGO.Game.GameFlowManager/<ZoomInOnPlayer>d__24::<>4__this
	GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * ___U3CU3E4__this_2;
	// System.Single Unity.LEGO.Game.GameFlowManager/<ZoomInOnPlayer>d__24::<zoomFactor>5__2
	float ___U3CzoomFactorU3E5__2_3;
	// System.Single Unity.LEGO.Game.GameFlowManager/<ZoomInOnPlayer>d__24::<middleRigZoomFactor>5__3
	float ___U3CmiddleRigZoomFactorU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CZoomInOnPlayerU3Ed__24_t934444AB2415126D28E6C233B30EA61E09C2E475, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CZoomInOnPlayerU3Ed__24_t934444AB2415126D28E6C233B30EA61E09C2E475, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CZoomInOnPlayerU3Ed__24_t934444AB2415126D28E6C233B30EA61E09C2E475, ___U3CU3E4__this_2)); }
	inline GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CzoomFactorU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CZoomInOnPlayerU3Ed__24_t934444AB2415126D28E6C233B30EA61E09C2E475, ___U3CzoomFactorU3E5__2_3)); }
	inline float get_U3CzoomFactorU3E5__2_3() const { return ___U3CzoomFactorU3E5__2_3; }
	inline float* get_address_of_U3CzoomFactorU3E5__2_3() { return &___U3CzoomFactorU3E5__2_3; }
	inline void set_U3CzoomFactorU3E5__2_3(float value)
	{
		___U3CzoomFactorU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CmiddleRigZoomFactorU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CZoomInOnPlayerU3Ed__24_t934444AB2415126D28E6C233B30EA61E09C2E475, ___U3CmiddleRigZoomFactorU3E5__3_4)); }
	inline float get_U3CmiddleRigZoomFactorU3E5__3_4() const { return ___U3CmiddleRigZoomFactorU3E5__3_4; }
	inline float* get_address_of_U3CmiddleRigZoomFactorU3E5__3_4() { return &___U3CmiddleRigZoomFactorU3E5__3_4; }
	inline void set_U3CmiddleRigZoomFactorU3E5__3_4(float value)
	{
		___U3CmiddleRigZoomFactorU3E5__3_4 = value;
	}
};


// Unity.LEGO.Game.ObjectiveManager/<>c
struct U3CU3Ec_t24FA5B43B7BC487E38C841E176CAD482D559CA6C  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t24FA5B43B7BC487E38C841E176CAD482D559CA6C_StaticFields
{
public:
	// Unity.LEGO.Game.ObjectiveManager/<>c Unity.LEGO.Game.ObjectiveManager/<>c::<>9
	U3CU3Ec_t24FA5B43B7BC487E38C841E176CAD482D559CA6C * ___U3CU3E9_0;
	// System.Predicate`1<Unity.LEGO.Game.IObjective> Unity.LEGO.Game.ObjectiveManager/<>c::<>9__6_0
	Predicate_1_t38F538874F744DB7A65CA0DF6ECDF1CCBAE673B3 * ___U3CU3E9__6_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t24FA5B43B7BC487E38C841E176CAD482D559CA6C_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t24FA5B43B7BC487E38C841E176CAD482D559CA6C * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t24FA5B43B7BC487E38C841E176CAD482D559CA6C ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t24FA5B43B7BC487E38C841E176CAD482D559CA6C * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t24FA5B43B7BC487E38C841E176CAD482D559CA6C_StaticFields, ___U3CU3E9__6_0_1)); }
	inline Predicate_1_t38F538874F744DB7A65CA0DF6ECDF1CCBAE673B3 * get_U3CU3E9__6_0_1() const { return ___U3CU3E9__6_0_1; }
	inline Predicate_1_t38F538874F744DB7A65CA0DF6ECDF1CCBAE673B3 ** get_address_of_U3CU3E9__6_0_1() { return &___U3CU3E9__6_0_1; }
	inline void set_U3CU3E9__6_0_1(Predicate_1_t38F538874F744DB7A65CA0DF6ECDF1CCBAE673B3 * value)
	{
		___U3CU3E9__6_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_0_1), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Unity.LEGO.Game.IObjective>
struct Enumerator_t8F205CC2063D3C85F382AE817687C856720CC1B3 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t8F205CC2063D3C85F382AE817687C856720CC1B3, ___list_0)); }
	inline List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559 * get_list_0() const { return ___list_0; }
	inline List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t8F205CC2063D3C85F382AE817687C856720CC1B3, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t8F205CC2063D3C85F382AE817687C856720CC1B3, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t8F205CC2063D3C85F382AE817687C856720CC1B3, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Unity.LEGO.Game.Variable>
struct Enumerator_tD690FE672C96284FD994C4FD0BCC0189AB8ECDAB 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t7B50DCA27E54364BC506813348A65104C8193FB1 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tD690FE672C96284FD994C4FD0BCC0189AB8ECDAB, ___list_0)); }
	inline List_1_t7B50DCA27E54364BC506813348A65104C8193FB1 * get_list_0() const { return ___list_0; }
	inline List_1_t7B50DCA27E54364BC506813348A65104C8193FB1 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t7B50DCA27E54364BC506813348A65104C8193FB1 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tD690FE672C96284FD994C4FD0BCC0189AB8ECDAB, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tD690FE672C96284FD994C4FD0BCC0189AB8ECDAB, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tD690FE672C96284FD994C4FD0BCC0189AB8ECDAB, ___current_3)); }
	inline Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * get_current_3() const { return ___current_3; }
	inline Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
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


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
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


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
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


// Unity.LEGO.Game.LookSensitivityUpdateEvent
struct LookSensitivityUpdateEvent_tB1DCB5FE9FE2719AFB09DAE1B4BF24040180C709  : public GameEvent_tE3BAFD6F56BD598391D8F47ACF51FC19AB9B259D
{
public:
	// System.Single Unity.LEGO.Game.LookSensitivityUpdateEvent::Value
	float ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(LookSensitivityUpdateEvent_tB1DCB5FE9FE2719AFB09DAE1B4BF24040180C709, ___Value_0)); }
	inline float get_Value_0() const { return ___Value_0; }
	inline float* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(float value)
	{
		___Value_0 = value;
	}
};


// Unity.LEGO.Game.ObjectiveAdded
struct ObjectiveAdded_tD7245D8C50A24195DA915EF344B32173E897B0F6  : public GameEvent_tE3BAFD6F56BD598391D8F47ACF51FC19AB9B259D
{
public:
	// Unity.LEGO.Game.IObjective Unity.LEGO.Game.ObjectiveAdded::Objective
	RuntimeObject* ___Objective_0;

public:
	inline static int32_t get_offset_of_Objective_0() { return static_cast<int32_t>(offsetof(ObjectiveAdded_tD7245D8C50A24195DA915EF344B32173E897B0F6, ___Objective_0)); }
	inline RuntimeObject* get_Objective_0() const { return ___Objective_0; }
	inline RuntimeObject** get_address_of_Objective_0() { return &___Objective_0; }
	inline void set_Objective_0(RuntimeObject* value)
	{
		___Objective_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Objective_0), (void*)value);
	}
};


// Unity.LEGO.Game.OptionsMenuEvent
struct OptionsMenuEvent_tBC2BD78E9B097E2D591568D86C4FD1656DB6FDC6  : public GameEvent_tE3BAFD6F56BD598391D8F47ACF51FC19AB9B259D
{
public:
	// System.Boolean Unity.LEGO.Game.OptionsMenuEvent::Active
	bool ___Active_0;

public:
	inline static int32_t get_offset_of_Active_0() { return static_cast<int32_t>(offsetof(OptionsMenuEvent_tBC2BD78E9B097E2D591568D86C4FD1656DB6FDC6, ___Active_0)); }
	inline bool get_Active_0() const { return ___Active_0; }
	inline bool* get_address_of_Active_0() { return &___Active_0; }
	inline void set_Active_0(bool value)
	{
		___Active_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// Unity.LEGO.Game.VariableAdded
struct VariableAdded_t8D9FBFC315B1B519C5D85D6A37F63F18B47291FA  : public GameEvent_tE3BAFD6F56BD598391D8F47ACF51FC19AB9B259D
{
public:
	// Unity.LEGO.Game.Variable Unity.LEGO.Game.VariableAdded::Variable
	Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * ___Variable_0;

public:
	inline static int32_t get_offset_of_Variable_0() { return static_cast<int32_t>(offsetof(VariableAdded_t8D9FBFC315B1B519C5D85D6A37F63F18B47291FA, ___Variable_0)); }
	inline Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * get_Variable_0() const { return ___Variable_0; }
	inline Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E ** get_address_of_Variable_0() { return &___Variable_0; }
	inline void set_Variable_0(Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * value)
	{
		___Variable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Variable_0), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
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


// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// Cinemachine.AxisState/Recentering
struct Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427 
{
public:
	// System.Boolean Cinemachine.AxisState/Recentering::m_enabled
	bool ___m_enabled_0;
	// System.Single Cinemachine.AxisState/Recentering::m_WaitTime
	float ___m_WaitTime_1;
	// System.Single Cinemachine.AxisState/Recentering::m_RecenteringTime
	float ___m_RecenteringTime_2;
	// System.Single Cinemachine.AxisState/Recentering::mLastAxisInputTime
	float ___mLastAxisInputTime_3;
	// System.Single Cinemachine.AxisState/Recentering::mRecenteringVelocity
	float ___mRecenteringVelocity_4;
	// System.Int32 Cinemachine.AxisState/Recentering::m_LegacyHeadingDefinition
	int32_t ___m_LegacyHeadingDefinition_5;
	// System.Int32 Cinemachine.AxisState/Recentering::m_LegacyVelocityFilterStrength
	int32_t ___m_LegacyVelocityFilterStrength_6;

public:
	inline static int32_t get_offset_of_m_enabled_0() { return static_cast<int32_t>(offsetof(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427, ___m_enabled_0)); }
	inline bool get_m_enabled_0() const { return ___m_enabled_0; }
	inline bool* get_address_of_m_enabled_0() { return &___m_enabled_0; }
	inline void set_m_enabled_0(bool value)
	{
		___m_enabled_0 = value;
	}

	inline static int32_t get_offset_of_m_WaitTime_1() { return static_cast<int32_t>(offsetof(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427, ___m_WaitTime_1)); }
	inline float get_m_WaitTime_1() const { return ___m_WaitTime_1; }
	inline float* get_address_of_m_WaitTime_1() { return &___m_WaitTime_1; }
	inline void set_m_WaitTime_1(float value)
	{
		___m_WaitTime_1 = value;
	}

	inline static int32_t get_offset_of_m_RecenteringTime_2() { return static_cast<int32_t>(offsetof(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427, ___m_RecenteringTime_2)); }
	inline float get_m_RecenteringTime_2() const { return ___m_RecenteringTime_2; }
	inline float* get_address_of_m_RecenteringTime_2() { return &___m_RecenteringTime_2; }
	inline void set_m_RecenteringTime_2(float value)
	{
		___m_RecenteringTime_2 = value;
	}

	inline static int32_t get_offset_of_mLastAxisInputTime_3() { return static_cast<int32_t>(offsetof(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427, ___mLastAxisInputTime_3)); }
	inline float get_mLastAxisInputTime_3() const { return ___mLastAxisInputTime_3; }
	inline float* get_address_of_mLastAxisInputTime_3() { return &___mLastAxisInputTime_3; }
	inline void set_mLastAxisInputTime_3(float value)
	{
		___mLastAxisInputTime_3 = value;
	}

	inline static int32_t get_offset_of_mRecenteringVelocity_4() { return static_cast<int32_t>(offsetof(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427, ___mRecenteringVelocity_4)); }
	inline float get_mRecenteringVelocity_4() const { return ___mRecenteringVelocity_4; }
	inline float* get_address_of_mRecenteringVelocity_4() { return &___mRecenteringVelocity_4; }
	inline void set_mRecenteringVelocity_4(float value)
	{
		___mRecenteringVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_LegacyHeadingDefinition_5() { return static_cast<int32_t>(offsetof(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427, ___m_LegacyHeadingDefinition_5)); }
	inline int32_t get_m_LegacyHeadingDefinition_5() const { return ___m_LegacyHeadingDefinition_5; }
	inline int32_t* get_address_of_m_LegacyHeadingDefinition_5() { return &___m_LegacyHeadingDefinition_5; }
	inline void set_m_LegacyHeadingDefinition_5(int32_t value)
	{
		___m_LegacyHeadingDefinition_5 = value;
	}

	inline static int32_t get_offset_of_m_LegacyVelocityFilterStrength_6() { return static_cast<int32_t>(offsetof(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427, ___m_LegacyVelocityFilterStrength_6)); }
	inline int32_t get_m_LegacyVelocityFilterStrength_6() const { return ___m_LegacyVelocityFilterStrength_6; }
	inline int32_t* get_address_of_m_LegacyVelocityFilterStrength_6() { return &___m_LegacyVelocityFilterStrength_6; }
	inline void set_m_LegacyVelocityFilterStrength_6(int32_t value)
	{
		___m_LegacyVelocityFilterStrength_6 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.AxisState/Recentering
struct Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427_marshaled_pinvoke
{
	int32_t ___m_enabled_0;
	float ___m_WaitTime_1;
	float ___m_RecenteringTime_2;
	float ___mLastAxisInputTime_3;
	float ___mRecenteringVelocity_4;
	int32_t ___m_LegacyHeadingDefinition_5;
	int32_t ___m_LegacyVelocityFilterStrength_6;
};
// Native definition for COM marshalling of Cinemachine.AxisState/Recentering
struct Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427_marshaled_com
{
	int32_t ___m_enabled_0;
	float ___m_WaitTime_1;
	float ___m_RecenteringTime_2;
	float ___mLastAxisInputTime_3;
	float ___mRecenteringVelocity_4;
	int32_t ___m_LegacyHeadingDefinition_5;
	int32_t ___m_LegacyVelocityFilterStrength_6;
};

// Cinemachine.CameraState/CustomBlendable
struct CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B 
{
public:
	// UnityEngine.Object Cinemachine.CameraState/CustomBlendable::m_Custom
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___m_Custom_0;
	// System.Single Cinemachine.CameraState/CustomBlendable::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_Custom_0() { return static_cast<int32_t>(offsetof(CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B, ___m_Custom_0)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_m_Custom_0() const { return ___m_Custom_0; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_m_Custom_0() { return &___m_Custom_0; }
	inline void set_m_Custom_0(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___m_Custom_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Custom_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};


// Cinemachine.CinemachineFreeLook/Orbit
struct Orbit_tA547D596379FBC5FD86CCCFEC4DF3BD8BA2C3AF5 
{
public:
	// System.Single Cinemachine.CinemachineFreeLook/Orbit::m_Height
	float ___m_Height_0;
	// System.Single Cinemachine.CinemachineFreeLook/Orbit::m_Radius
	float ___m_Radius_1;

public:
	inline static int32_t get_offset_of_m_Height_0() { return static_cast<int32_t>(offsetof(Orbit_tA547D596379FBC5FD86CCCFEC4DF3BD8BA2C3AF5, ___m_Height_0)); }
	inline float get_m_Height_0() const { return ___m_Height_0; }
	inline float* get_address_of_m_Height_0() { return &___m_Height_0; }
	inline void set_m_Height_0(float value)
	{
		___m_Height_0 = value;
	}

	inline static int32_t get_offset_of_m_Radius_1() { return static_cast<int32_t>(offsetof(Orbit_tA547D596379FBC5FD86CCCFEC4DF3BD8BA2C3AF5, ___m_Radius_1)); }
	inline float get_m_Radius_1() const { return ___m_Radius_1; }
	inline float* get_address_of_m_Radius_1() { return &___m_Radius_1; }
	inline void set_m_Radius_1(float value)
	{
		___m_Radius_1 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.CursorLockMode
struct CursorLockMode_t247B41EE9632E4AD759EDADDB351AE0075162D04 
{
public:
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CursorLockMode_t247B41EE9632E4AD759EDADDB351AE0075162D04, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.DepthTextureMode
struct DepthTextureMode_t4A8E08C41731918FB0D7CA5C6848E3864A0DC09A 
{
public:
	// System.Int32 UnityEngine.DepthTextureMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DepthTextureMode_t4A8E08C41731918FB0D7CA5C6848E3864A0DC09A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Cinemachine.LensSettings
struct LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA 
{
public:
	// System.Single Cinemachine.LensSettings::FieldOfView
	float ___FieldOfView_1;
	// System.Single Cinemachine.LensSettings::OrthographicSize
	float ___OrthographicSize_2;
	// System.Single Cinemachine.LensSettings::NearClipPlane
	float ___NearClipPlane_3;
	// System.Single Cinemachine.LensSettings::FarClipPlane
	float ___FarClipPlane_4;
	// System.Single Cinemachine.LensSettings::Dutch
	float ___Dutch_5;
	// System.Boolean Cinemachine.LensSettings::<Orthographic>k__BackingField
	bool ___U3COrthographicU3Ek__BackingField_6;
	// UnityEngine.Vector2 Cinemachine.LensSettings::<SensorSize>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CSensorSizeU3Ek__BackingField_7;
	// System.Boolean Cinemachine.LensSettings::<IsPhysicalCamera>k__BackingField
	bool ___U3CIsPhysicalCameraU3Ek__BackingField_8;
	// UnityEngine.Vector2 Cinemachine.LensSettings::LensShift
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___LensShift_9;

public:
	inline static int32_t get_offset_of_FieldOfView_1() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___FieldOfView_1)); }
	inline float get_FieldOfView_1() const { return ___FieldOfView_1; }
	inline float* get_address_of_FieldOfView_1() { return &___FieldOfView_1; }
	inline void set_FieldOfView_1(float value)
	{
		___FieldOfView_1 = value;
	}

	inline static int32_t get_offset_of_OrthographicSize_2() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___OrthographicSize_2)); }
	inline float get_OrthographicSize_2() const { return ___OrthographicSize_2; }
	inline float* get_address_of_OrthographicSize_2() { return &___OrthographicSize_2; }
	inline void set_OrthographicSize_2(float value)
	{
		___OrthographicSize_2 = value;
	}

	inline static int32_t get_offset_of_NearClipPlane_3() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___NearClipPlane_3)); }
	inline float get_NearClipPlane_3() const { return ___NearClipPlane_3; }
	inline float* get_address_of_NearClipPlane_3() { return &___NearClipPlane_3; }
	inline void set_NearClipPlane_3(float value)
	{
		___NearClipPlane_3 = value;
	}

	inline static int32_t get_offset_of_FarClipPlane_4() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___FarClipPlane_4)); }
	inline float get_FarClipPlane_4() const { return ___FarClipPlane_4; }
	inline float* get_address_of_FarClipPlane_4() { return &___FarClipPlane_4; }
	inline void set_FarClipPlane_4(float value)
	{
		___FarClipPlane_4 = value;
	}

	inline static int32_t get_offset_of_Dutch_5() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___Dutch_5)); }
	inline float get_Dutch_5() const { return ___Dutch_5; }
	inline float* get_address_of_Dutch_5() { return &___Dutch_5; }
	inline void set_Dutch_5(float value)
	{
		___Dutch_5 = value;
	}

	inline static int32_t get_offset_of_U3COrthographicU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___U3COrthographicU3Ek__BackingField_6)); }
	inline bool get_U3COrthographicU3Ek__BackingField_6() const { return ___U3COrthographicU3Ek__BackingField_6; }
	inline bool* get_address_of_U3COrthographicU3Ek__BackingField_6() { return &___U3COrthographicU3Ek__BackingField_6; }
	inline void set_U3COrthographicU3Ek__BackingField_6(bool value)
	{
		___U3COrthographicU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CSensorSizeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___U3CSensorSizeU3Ek__BackingField_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CSensorSizeU3Ek__BackingField_7() const { return ___U3CSensorSizeU3Ek__BackingField_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CSensorSizeU3Ek__BackingField_7() { return &___U3CSensorSizeU3Ek__BackingField_7; }
	inline void set_U3CSensorSizeU3Ek__BackingField_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CSensorSizeU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIsPhysicalCameraU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___U3CIsPhysicalCameraU3Ek__BackingField_8)); }
	inline bool get_U3CIsPhysicalCameraU3Ek__BackingField_8() const { return ___U3CIsPhysicalCameraU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsPhysicalCameraU3Ek__BackingField_8() { return &___U3CIsPhysicalCameraU3Ek__BackingField_8; }
	inline void set_U3CIsPhysicalCameraU3Ek__BackingField_8(bool value)
	{
		___U3CIsPhysicalCameraU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_LensShift_9() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___LensShift_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_LensShift_9() const { return ___LensShift_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_LensShift_9() { return &___LensShift_9; }
	inline void set_LensShift_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___LensShift_9 = value;
	}
};

struct LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA_StaticFields
{
public:
	// Cinemachine.LensSettings Cinemachine.LensSettings::Default
	LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA_StaticFields, ___Default_0)); }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  get_Default_0() const { return ___Default_0; }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  value)
	{
		___Default_0 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.LensSettings
struct LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA_marshaled_pinvoke
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___U3COrthographicU3Ek__BackingField_6;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CSensorSizeU3Ek__BackingField_7;
	int32_t ___U3CIsPhysicalCameraU3Ek__BackingField_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___LensShift_9;
};
// Native definition for COM marshalling of Cinemachine.LensSettings
struct LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA_marshaled_com
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___U3COrthographicU3Ek__BackingField_6;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CSensorSizeU3Ek__BackingField_7;
	int32_t ___U3CIsPhysicalCameraU3Ek__BackingField_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___LensShift_9;
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

// Unity.LEGO.Game.ObjectiveProgressType
struct ObjectiveProgressType_t28A80D00F33B61949FCC118EAE89EA8826FB6428 
{
public:
	// System.Int32 Unity.LEGO.Game.ObjectiveProgressType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObjectiveProgressType_t28A80D00F33B61949FCC118EAE89EA8826FB6428, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Cinemachine.AxisState/SpeedMode
struct SpeedMode_t7371A14D833762D166BB6C190C37DB1C30D053BB 
{
public:
	// System.Int32 Cinemachine.AxisState/SpeedMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpeedMode_t7371A14D833762D166BB6C190C37DB1C30D053BB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CameraState/BlendHintValue
struct BlendHintValue_t7E87A2F98F21271FE108514B78A38754BEBE94F4 
{
public:
	// System.Int32 Cinemachine.CameraState/BlendHintValue::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlendHintValue_t7E87A2F98F21271FE108514B78A38754BEBE94F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineTransposer/BindingMode
struct BindingMode_tAE1CC7E6A8544E38A9E5D96BF5B0171B038AE196 
{
public:
	// System.Int32 Cinemachine.CinemachineTransposer/BindingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingMode_tAE1CC7E6A8544E38A9E5D96BF5B0171B038AE196, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineVirtualCameraBase/BlendHint
struct BlendHint_t9B1FFA41B35EC74367AB4D7A1AE2A4D1FE29B7CE 
{
public:
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase/BlendHint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlendHint_t9B1FFA41B35EC74367AB4D7A1AE2A4D1FE29B7CE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineVirtualCameraBase/StandbyUpdateMode
struct StandbyUpdateMode_t60D677E92B072D6B19C7F69C3DD753EB3457F3A5 
{
public:
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase/StandbyUpdateMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StandbyUpdateMode_t60D677E92B072D6B19C7F69C3DD753EB3457F3A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.LEGO.Game.Condition/ComparisonType
struct ComparisonType_tC0649F65FDF8E7F045F173DCBCB01DAC94C69CDB 
{
public:
	// System.Int32 Unity.LEGO.Game.Condition/ComparisonType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ComparisonType_tC0649F65FDF8E7F045F173DCBCB01DAC94C69CDB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineOrbitalTransposer/Heading/HeadingDefinition
struct HeadingDefinition_tEF350573F75F64F0AED93E50690DBDBA99343122 
{
public:
	// System.Int32 Cinemachine.CinemachineOrbitalTransposer/Heading/HeadingDefinition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HeadingDefinition_tEF350573F75F64F0AED93E50690DBDBA99343122, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.AxisState
struct AxisState_t376D19829A676B98933979F42845F6476071DDE8 
{
public:
	// System.Single Cinemachine.AxisState::Value
	float ___Value_0;
	// Cinemachine.AxisState/SpeedMode Cinemachine.AxisState::m_SpeedMode
	int32_t ___m_SpeedMode_1;
	// System.Single Cinemachine.AxisState::m_MaxSpeed
	float ___m_MaxSpeed_2;
	// System.Single Cinemachine.AxisState::m_AccelTime
	float ___m_AccelTime_3;
	// System.Single Cinemachine.AxisState::m_DecelTime
	float ___m_DecelTime_4;
	// System.String Cinemachine.AxisState::m_InputAxisName
	String_t* ___m_InputAxisName_5;
	// System.Single Cinemachine.AxisState::m_InputAxisValue
	float ___m_InputAxisValue_6;
	// System.Boolean Cinemachine.AxisState::m_InvertInput
	bool ___m_InvertInput_7;
	// System.Single Cinemachine.AxisState::m_MinValue
	float ___m_MinValue_8;
	// System.Single Cinemachine.AxisState::m_MaxValue
	float ___m_MaxValue_9;
	// System.Boolean Cinemachine.AxisState::m_Wrap
	bool ___m_Wrap_10;
	// Cinemachine.AxisState/Recentering Cinemachine.AxisState::m_Recentering
	Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  ___m_Recentering_11;
	// System.Single Cinemachine.AxisState::mCurrentSpeed
	float ___mCurrentSpeed_12;
	// Cinemachine.AxisState/IInputAxisProvider Cinemachine.AxisState::m_InputAxisProvider
	RuntimeObject* ___m_InputAxisProvider_14;
	// System.Int32 Cinemachine.AxisState::m_InputAxisIndex
	int32_t ___m_InputAxisIndex_15;
	// System.Boolean Cinemachine.AxisState::<ValueRangeLocked>k__BackingField
	bool ___U3CValueRangeLockedU3Ek__BackingField_16;
	// System.Boolean Cinemachine.AxisState::<HasRecentering>k__BackingField
	bool ___U3CHasRecenteringU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___Value_0)); }
	inline float get_Value_0() const { return ___Value_0; }
	inline float* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(float value)
	{
		___Value_0 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMode_1() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_SpeedMode_1)); }
	inline int32_t get_m_SpeedMode_1() const { return ___m_SpeedMode_1; }
	inline int32_t* get_address_of_m_SpeedMode_1() { return &___m_SpeedMode_1; }
	inline void set_m_SpeedMode_1(int32_t value)
	{
		___m_SpeedMode_1 = value;
	}

	inline static int32_t get_offset_of_m_MaxSpeed_2() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_MaxSpeed_2)); }
	inline float get_m_MaxSpeed_2() const { return ___m_MaxSpeed_2; }
	inline float* get_address_of_m_MaxSpeed_2() { return &___m_MaxSpeed_2; }
	inline void set_m_MaxSpeed_2(float value)
	{
		___m_MaxSpeed_2 = value;
	}

	inline static int32_t get_offset_of_m_AccelTime_3() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_AccelTime_3)); }
	inline float get_m_AccelTime_3() const { return ___m_AccelTime_3; }
	inline float* get_address_of_m_AccelTime_3() { return &___m_AccelTime_3; }
	inline void set_m_AccelTime_3(float value)
	{
		___m_AccelTime_3 = value;
	}

	inline static int32_t get_offset_of_m_DecelTime_4() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_DecelTime_4)); }
	inline float get_m_DecelTime_4() const { return ___m_DecelTime_4; }
	inline float* get_address_of_m_DecelTime_4() { return &___m_DecelTime_4; }
	inline void set_m_DecelTime_4(float value)
	{
		___m_DecelTime_4 = value;
	}

	inline static int32_t get_offset_of_m_InputAxisName_5() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_InputAxisName_5)); }
	inline String_t* get_m_InputAxisName_5() const { return ___m_InputAxisName_5; }
	inline String_t** get_address_of_m_InputAxisName_5() { return &___m_InputAxisName_5; }
	inline void set_m_InputAxisName_5(String_t* value)
	{
		___m_InputAxisName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputAxisName_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputAxisValue_6() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_InputAxisValue_6)); }
	inline float get_m_InputAxisValue_6() const { return ___m_InputAxisValue_6; }
	inline float* get_address_of_m_InputAxisValue_6() { return &___m_InputAxisValue_6; }
	inline void set_m_InputAxisValue_6(float value)
	{
		___m_InputAxisValue_6 = value;
	}

	inline static int32_t get_offset_of_m_InvertInput_7() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_InvertInput_7)); }
	inline bool get_m_InvertInput_7() const { return ___m_InvertInput_7; }
	inline bool* get_address_of_m_InvertInput_7() { return &___m_InvertInput_7; }
	inline void set_m_InvertInput_7(bool value)
	{
		___m_InvertInput_7 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_8() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_MinValue_8)); }
	inline float get_m_MinValue_8() const { return ___m_MinValue_8; }
	inline float* get_address_of_m_MinValue_8() { return &___m_MinValue_8; }
	inline void set_m_MinValue_8(float value)
	{
		___m_MinValue_8 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_9() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_MaxValue_9)); }
	inline float get_m_MaxValue_9() const { return ___m_MaxValue_9; }
	inline float* get_address_of_m_MaxValue_9() { return &___m_MaxValue_9; }
	inline void set_m_MaxValue_9(float value)
	{
		___m_MaxValue_9 = value;
	}

	inline static int32_t get_offset_of_m_Wrap_10() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_Wrap_10)); }
	inline bool get_m_Wrap_10() const { return ___m_Wrap_10; }
	inline bool* get_address_of_m_Wrap_10() { return &___m_Wrap_10; }
	inline void set_m_Wrap_10(bool value)
	{
		___m_Wrap_10 = value;
	}

	inline static int32_t get_offset_of_m_Recentering_11() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_Recentering_11)); }
	inline Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  get_m_Recentering_11() const { return ___m_Recentering_11; }
	inline Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427 * get_address_of_m_Recentering_11() { return &___m_Recentering_11; }
	inline void set_m_Recentering_11(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  value)
	{
		___m_Recentering_11 = value;
	}

	inline static int32_t get_offset_of_mCurrentSpeed_12() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___mCurrentSpeed_12)); }
	inline float get_mCurrentSpeed_12() const { return ___mCurrentSpeed_12; }
	inline float* get_address_of_mCurrentSpeed_12() { return &___mCurrentSpeed_12; }
	inline void set_mCurrentSpeed_12(float value)
	{
		___mCurrentSpeed_12 = value;
	}

	inline static int32_t get_offset_of_m_InputAxisProvider_14() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_InputAxisProvider_14)); }
	inline RuntimeObject* get_m_InputAxisProvider_14() const { return ___m_InputAxisProvider_14; }
	inline RuntimeObject** get_address_of_m_InputAxisProvider_14() { return &___m_InputAxisProvider_14; }
	inline void set_m_InputAxisProvider_14(RuntimeObject* value)
	{
		___m_InputAxisProvider_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputAxisProvider_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputAxisIndex_15() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_InputAxisIndex_15)); }
	inline int32_t get_m_InputAxisIndex_15() const { return ___m_InputAxisIndex_15; }
	inline int32_t* get_address_of_m_InputAxisIndex_15() { return &___m_InputAxisIndex_15; }
	inline void set_m_InputAxisIndex_15(int32_t value)
	{
		___m_InputAxisIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CValueRangeLockedU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___U3CValueRangeLockedU3Ek__BackingField_16)); }
	inline bool get_U3CValueRangeLockedU3Ek__BackingField_16() const { return ___U3CValueRangeLockedU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CValueRangeLockedU3Ek__BackingField_16() { return &___U3CValueRangeLockedU3Ek__BackingField_16; }
	inline void set_U3CValueRangeLockedU3Ek__BackingField_16(bool value)
	{
		___U3CValueRangeLockedU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CHasRecenteringU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___U3CHasRecenteringU3Ek__BackingField_17)); }
	inline bool get_U3CHasRecenteringU3Ek__BackingField_17() const { return ___U3CHasRecenteringU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CHasRecenteringU3Ek__BackingField_17() { return &___U3CHasRecenteringU3Ek__BackingField_17; }
	inline void set_U3CHasRecenteringU3Ek__BackingField_17(bool value)
	{
		___U3CHasRecenteringU3Ek__BackingField_17 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.AxisState
struct AxisState_t376D19829A676B98933979F42845F6476071DDE8_marshaled_pinvoke
{
	float ___Value_0;
	int32_t ___m_SpeedMode_1;
	float ___m_MaxSpeed_2;
	float ___m_AccelTime_3;
	float ___m_DecelTime_4;
	char* ___m_InputAxisName_5;
	float ___m_InputAxisValue_6;
	int32_t ___m_InvertInput_7;
	float ___m_MinValue_8;
	float ___m_MaxValue_9;
	int32_t ___m_Wrap_10;
	Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427_marshaled_pinvoke ___m_Recentering_11;
	float ___mCurrentSpeed_12;
	RuntimeObject* ___m_InputAxisProvider_14;
	int32_t ___m_InputAxisIndex_15;
	int32_t ___U3CValueRangeLockedU3Ek__BackingField_16;
	int32_t ___U3CHasRecenteringU3Ek__BackingField_17;
};
// Native definition for COM marshalling of Cinemachine.AxisState
struct AxisState_t376D19829A676B98933979F42845F6476071DDE8_marshaled_com
{
	float ___Value_0;
	int32_t ___m_SpeedMode_1;
	float ___m_MaxSpeed_2;
	float ___m_AccelTime_3;
	float ___m_DecelTime_4;
	Il2CppChar* ___m_InputAxisName_5;
	float ___m_InputAxisValue_6;
	int32_t ___m_InvertInput_7;
	float ___m_MinValue_8;
	float ___m_MaxValue_9;
	int32_t ___m_Wrap_10;
	Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427_marshaled_com ___m_Recentering_11;
	float ___mCurrentSpeed_12;
	RuntimeObject* ___m_InputAxisProvider_14;
	int32_t ___m_InputAxisIndex_15;
	int32_t ___U3CValueRangeLockedU3Ek__BackingField_16;
	int32_t ___U3CHasRecenteringU3Ek__BackingField_17;
};

// Cinemachine.CameraState
struct CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601 
{
public:
	// Cinemachine.LensSettings Cinemachine.CameraState::<Lens>k__BackingField
	LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  ___U3CLensU3Ek__BackingField_0;
	// UnityEngine.Vector3 Cinemachine.CameraState::<ReferenceUp>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CReferenceUpU3Ek__BackingField_1;
	// UnityEngine.Vector3 Cinemachine.CameraState::<ReferenceLookAt>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CReferenceLookAtU3Ek__BackingField_2;
	// UnityEngine.Vector3 Cinemachine.CameraState::<RawPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CRawPositionU3Ek__BackingField_4;
	// UnityEngine.Quaternion Cinemachine.CameraState::<RawOrientation>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CRawOrientationU3Ek__BackingField_5;
	// UnityEngine.Vector3 Cinemachine.CameraState::<PositionDampingBypass>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionDampingBypassU3Ek__BackingField_6;
	// System.Single Cinemachine.CameraState::<ShotQuality>k__BackingField
	float ___U3CShotQualityU3Ek__BackingField_7;
	// UnityEngine.Vector3 Cinemachine.CameraState::<PositionCorrection>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionCorrectionU3Ek__BackingField_8;
	// UnityEngine.Quaternion Cinemachine.CameraState::<OrientationCorrection>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3COrientationCorrectionU3Ek__BackingField_9;
	// Cinemachine.CameraState/BlendHintValue Cinemachine.CameraState::<BlendHint>k__BackingField
	int32_t ___U3CBlendHintU3Ek__BackingField_10;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom0
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom0_11;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom1
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom1_12;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom2
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom2_13;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom3
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom3_14;
	// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable> Cinemachine.CameraState::m_CustomOverflow
	List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009 * ___m_CustomOverflow_15;
	// System.Int32 Cinemachine.CameraState::<NumCustomBlendables>k__BackingField
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CLensU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CLensU3Ek__BackingField_0)); }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  get_U3CLensU3Ek__BackingField_0() const { return ___U3CLensU3Ek__BackingField_0; }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * get_address_of_U3CLensU3Ek__BackingField_0() { return &___U3CLensU3Ek__BackingField_0; }
	inline void set_U3CLensU3Ek__BackingField_0(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  value)
	{
		___U3CLensU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CReferenceUpU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CReferenceUpU3Ek__BackingField_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CReferenceUpU3Ek__BackingField_1() const { return ___U3CReferenceUpU3Ek__BackingField_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CReferenceUpU3Ek__BackingField_1() { return &___U3CReferenceUpU3Ek__BackingField_1; }
	inline void set_U3CReferenceUpU3Ek__BackingField_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CReferenceUpU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CReferenceLookAtU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CReferenceLookAtU3Ek__BackingField_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CReferenceLookAtU3Ek__BackingField_2() const { return ___U3CReferenceLookAtU3Ek__BackingField_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CReferenceLookAtU3Ek__BackingField_2() { return &___U3CReferenceLookAtU3Ek__BackingField_2; }
	inline void set_U3CReferenceLookAtU3Ek__BackingField_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CReferenceLookAtU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CRawPositionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CRawPositionU3Ek__BackingField_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CRawPositionU3Ek__BackingField_4() const { return ___U3CRawPositionU3Ek__BackingField_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CRawPositionU3Ek__BackingField_4() { return &___U3CRawPositionU3Ek__BackingField_4; }
	inline void set_U3CRawPositionU3Ek__BackingField_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CRawPositionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CRawOrientationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CRawOrientationU3Ek__BackingField_5)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CRawOrientationU3Ek__BackingField_5() const { return ___U3CRawOrientationU3Ek__BackingField_5; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CRawOrientationU3Ek__BackingField_5() { return &___U3CRawOrientationU3Ek__BackingField_5; }
	inline void set_U3CRawOrientationU3Ek__BackingField_5(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CRawOrientationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CPositionDampingBypassU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CPositionDampingBypassU3Ek__BackingField_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CPositionDampingBypassU3Ek__BackingField_6() const { return ___U3CPositionDampingBypassU3Ek__BackingField_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CPositionDampingBypassU3Ek__BackingField_6() { return &___U3CPositionDampingBypassU3Ek__BackingField_6; }
	inline void set_U3CPositionDampingBypassU3Ek__BackingField_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CPositionDampingBypassU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CShotQualityU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CShotQualityU3Ek__BackingField_7)); }
	inline float get_U3CShotQualityU3Ek__BackingField_7() const { return ___U3CShotQualityU3Ek__BackingField_7; }
	inline float* get_address_of_U3CShotQualityU3Ek__BackingField_7() { return &___U3CShotQualityU3Ek__BackingField_7; }
	inline void set_U3CShotQualityU3Ek__BackingField_7(float value)
	{
		___U3CShotQualityU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CPositionCorrectionU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CPositionCorrectionU3Ek__BackingField_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CPositionCorrectionU3Ek__BackingField_8() const { return ___U3CPositionCorrectionU3Ek__BackingField_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CPositionCorrectionU3Ek__BackingField_8() { return &___U3CPositionCorrectionU3Ek__BackingField_8; }
	inline void set_U3CPositionCorrectionU3Ek__BackingField_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CPositionCorrectionU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3COrientationCorrectionU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3COrientationCorrectionU3Ek__BackingField_9)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3COrientationCorrectionU3Ek__BackingField_9() const { return ___U3COrientationCorrectionU3Ek__BackingField_9; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3COrientationCorrectionU3Ek__BackingField_9() { return &___U3COrientationCorrectionU3Ek__BackingField_9; }
	inline void set_U3COrientationCorrectionU3Ek__BackingField_9(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3COrientationCorrectionU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CBlendHintU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CBlendHintU3Ek__BackingField_10)); }
	inline int32_t get_U3CBlendHintU3Ek__BackingField_10() const { return ___U3CBlendHintU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CBlendHintU3Ek__BackingField_10() { return &___U3CBlendHintU3Ek__BackingField_10; }
	inline void set_U3CBlendHintU3Ek__BackingField_10(int32_t value)
	{
		___U3CBlendHintU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_mCustom0_11() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___mCustom0_11)); }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  get_mCustom0_11() const { return ___mCustom0_11; }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B * get_address_of_mCustom0_11() { return &___mCustom0_11; }
	inline void set_mCustom0_11(CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  value)
	{
		___mCustom0_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom0_11))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCustom1_12() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___mCustom1_12)); }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  get_mCustom1_12() const { return ___mCustom1_12; }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B * get_address_of_mCustom1_12() { return &___mCustom1_12; }
	inline void set_mCustom1_12(CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  value)
	{
		___mCustom1_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom1_12))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCustom2_13() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___mCustom2_13)); }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  get_mCustom2_13() const { return ___mCustom2_13; }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B * get_address_of_mCustom2_13() { return &___mCustom2_13; }
	inline void set_mCustom2_13(CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  value)
	{
		___mCustom2_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom2_13))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCustom3_14() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___mCustom3_14)); }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  get_mCustom3_14() const { return ___mCustom3_14; }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B * get_address_of_mCustom3_14() { return &___mCustom3_14; }
	inline void set_mCustom3_14(CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  value)
	{
		___mCustom3_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom3_14))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_CustomOverflow_15() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___m_CustomOverflow_15)); }
	inline List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009 * get_m_CustomOverflow_15() const { return ___m_CustomOverflow_15; }
	inline List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009 ** get_address_of_m_CustomOverflow_15() { return &___m_CustomOverflow_15; }
	inline void set_m_CustomOverflow_15(List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009 * value)
	{
		___m_CustomOverflow_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomOverflow_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNumCustomBlendablesU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CNumCustomBlendablesU3Ek__BackingField_16)); }
	inline int32_t get_U3CNumCustomBlendablesU3Ek__BackingField_16() const { return ___U3CNumCustomBlendablesU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CNumCustomBlendablesU3Ek__BackingField_16() { return &___U3CNumCustomBlendablesU3Ek__BackingField_16; }
	inline void set_U3CNumCustomBlendablesU3Ek__BackingField_16(int32_t value)
	{
		___U3CNumCustomBlendablesU3Ek__BackingField_16 = value;
	}
};

struct CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601_StaticFields
{
public:
	// UnityEngine.Vector3 Cinemachine.CameraState::kNoPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___kNoPoint_3;

public:
	inline static int32_t get_offset_of_kNoPoint_3() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601_StaticFields, ___kNoPoint_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_kNoPoint_3() const { return ___kNoPoint_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_kNoPoint_3() { return &___kNoPoint_3; }
	inline void set_kNoPoint_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___kNoPoint_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CameraState
struct CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601_marshaled_pinvoke
{
	LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA_marshaled_pinvoke ___U3CLensU3Ek__BackingField_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CReferenceUpU3Ek__BackingField_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CReferenceLookAtU3Ek__BackingField_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CRawPositionU3Ek__BackingField_4;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CRawOrientationU3Ek__BackingField_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionDampingBypassU3Ek__BackingField_6;
	float ___U3CShotQualityU3Ek__BackingField_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionCorrectionU3Ek__BackingField_8;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3COrientationCorrectionU3Ek__BackingField_9;
	int32_t ___U3CBlendHintU3Ek__BackingField_10;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom0_11;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom1_12;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom2_13;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom3_14;
	List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009 * ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};
// Native definition for COM marshalling of Cinemachine.CameraState
struct CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601_marshaled_com
{
	LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA_marshaled_com ___U3CLensU3Ek__BackingField_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CReferenceUpU3Ek__BackingField_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CReferenceLookAtU3Ek__BackingField_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CRawPositionU3Ek__BackingField_4;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CRawOrientationU3Ek__BackingField_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionDampingBypassU3Ek__BackingField_6;
	float ___U3CShotQualityU3Ek__BackingField_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionCorrectionU3Ek__BackingField_8;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3COrientationCorrectionU3Ek__BackingField_9;
	int32_t ___U3CBlendHintU3Ek__BackingField_10;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom0_11;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom1_12;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom2_13;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom3_14;
	List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009 * ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};

// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Unity.LEGO.Game.Condition
struct Condition_t9088726E1F4F069A22419DB7E6C8DA7EC1D2AB5A  : public RuntimeObject
{
public:
	// Unity.LEGO.Game.Variable Unity.LEGO.Game.Condition::Variable
	Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * ___Variable_0;
	// Unity.LEGO.Game.Condition/ComparisonType Unity.LEGO.Game.Condition::Type
	int32_t ___Type_1;
	// System.Int32 Unity.LEGO.Game.Condition::Value
	int32_t ___Value_2;

public:
	inline static int32_t get_offset_of_Variable_0() { return static_cast<int32_t>(offsetof(Condition_t9088726E1F4F069A22419DB7E6C8DA7EC1D2AB5A, ___Variable_0)); }
	inline Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * get_Variable_0() const { return ___Variable_0; }
	inline Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E ** get_address_of_Variable_0() { return &___Variable_0; }
	inline void set_Variable_0(Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * value)
	{
		___Variable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Variable_0), (void*)value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(Condition_t9088726E1F4F069A22419DB7E6C8DA7EC1D2AB5A, ___Type_1)); }
	inline int32_t get_Type_1() const { return ___Type_1; }
	inline int32_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(int32_t value)
	{
		___Type_1 = value;
	}

	inline static int32_t get_offset_of_Value_2() { return static_cast<int32_t>(offsetof(Condition_t9088726E1F4F069A22419DB7E6C8DA7EC1D2AB5A, ___Value_2)); }
	inline int32_t get_Value_2() const { return ___Value_2; }
	inline int32_t* get_address_of_Value_2() { return &___Value_2; }
	inline void set_Value_2(int32_t value)
	{
		___Value_2 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Cinemachine.CinemachineOrbitalTransposer/Heading
struct Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9 
{
public:
	// Cinemachine.CinemachineOrbitalTransposer/Heading/HeadingDefinition Cinemachine.CinemachineOrbitalTransposer/Heading::m_Definition
	int32_t ___m_Definition_0;
	// System.Int32 Cinemachine.CinemachineOrbitalTransposer/Heading::m_VelocityFilterStrength
	int32_t ___m_VelocityFilterStrength_1;
	// System.Single Cinemachine.CinemachineOrbitalTransposer/Heading::m_Bias
	float ___m_Bias_2;

public:
	inline static int32_t get_offset_of_m_Definition_0() { return static_cast<int32_t>(offsetof(Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9, ___m_Definition_0)); }
	inline int32_t get_m_Definition_0() const { return ___m_Definition_0; }
	inline int32_t* get_address_of_m_Definition_0() { return &___m_Definition_0; }
	inline void set_m_Definition_0(int32_t value)
	{
		___m_Definition_0 = value;
	}

	inline static int32_t get_offset_of_m_VelocityFilterStrength_1() { return static_cast<int32_t>(offsetof(Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9, ___m_VelocityFilterStrength_1)); }
	inline int32_t get_m_VelocityFilterStrength_1() const { return ___m_VelocityFilterStrength_1; }
	inline int32_t* get_address_of_m_VelocityFilterStrength_1() { return &___m_VelocityFilterStrength_1; }
	inline void set_m_VelocityFilterStrength_1(int32_t value)
	{
		___m_VelocityFilterStrength_1 = value;
	}

	inline static int32_t get_offset_of_m_Bias_2() { return static_cast<int32_t>(offsetof(Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9, ___m_Bias_2)); }
	inline float get_m_Bias_2() const { return ___m_Bias_2; }
	inline float* get_address_of_m_Bias_2() { return &___m_Bias_2; }
	inline void set_m_Bias_2(float value)
	{
		___m_Bias_2 = value;
	}
};


// Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C 
{
public:
	// Cinemachine.CinemachineVirtualCameraBase/BlendHint Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_BlendHint
	int32_t ___m_BlendHint_0;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_InheritPosition
	bool ___m_InheritPosition_1;
	// Cinemachine.CinemachineBrain/VcamActivatedEvent Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_OnCameraLive
	VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * ___m_OnCameraLive_2;

public:
	inline static int32_t get_offset_of_m_BlendHint_0() { return static_cast<int32_t>(offsetof(TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C, ___m_BlendHint_0)); }
	inline int32_t get_m_BlendHint_0() const { return ___m_BlendHint_0; }
	inline int32_t* get_address_of_m_BlendHint_0() { return &___m_BlendHint_0; }
	inline void set_m_BlendHint_0(int32_t value)
	{
		___m_BlendHint_0 = value;
	}

	inline static int32_t get_offset_of_m_InheritPosition_1() { return static_cast<int32_t>(offsetof(TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C, ___m_InheritPosition_1)); }
	inline bool get_m_InheritPosition_1() const { return ___m_InheritPosition_1; }
	inline bool* get_address_of_m_InheritPosition_1() { return &___m_InheritPosition_1; }
	inline void set_m_InheritPosition_1(bool value)
	{
		___m_InheritPosition_1 = value;
	}

	inline static int32_t get_offset_of_m_OnCameraLive_2() { return static_cast<int32_t>(offsetof(TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C, ___m_OnCameraLive_2)); }
	inline VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * get_m_OnCameraLive_2() const { return ___m_OnCameraLive_2; }
	inline VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 ** get_address_of_m_OnCameraLive_2() { return &___m_OnCameraLive_2; }
	inline void set_m_OnCameraLive_2(VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * value)
	{
		___m_OnCameraLive_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCameraLive_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshaled_pinvoke
{
	int32_t ___m_BlendHint_0;
	int32_t ___m_InheritPosition_1;
	VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * ___m_OnCameraLive_2;
};
// Native definition for COM marshalling of Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshaled_com
{
	int32_t ___m_BlendHint_0;
	int32_t ___m_InheritPosition_1;
	VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * ___m_OnCameraLive_2;
};

// System.Action`1<Unity.LEGO.Game.GameEvent>
struct Action_1_t97CCC13273AF169BED7E08606FEE9BA41865B820  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<Unity.LEGO.Game.GameOverEvent>
struct Action_1_t020682A1E00DC8EE4C5FD052702748C3A7E17AB4  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<Unity.LEGO.Game.IObjective>
struct Action_1_t8FE4FE34AA2FA18BE53A649F50F63F8CB8430800  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Int32>
struct Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<Unity.LEGO.Game.LookSensitivityUpdateEvent>
struct Action_1_t7A4D2A712BE201E21551B5B23AF8BBAFD72B6C28  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<Unity.LEGO.Game.ObjectiveAdded>
struct Action_1_tF1836A38C56D3A758B176D27E26A7CC766798CDE  : public MulticastDelegate_t
{
public:

public:
};


// System.Predicate`1<Unity.LEGO.Game.IObjective>
struct Predicate_1_t38F538874F744DB7A65CA0DF6ECDF1CCBAE673B3  : public MulticastDelegate_t
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


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Unity.LEGO.Game.Variable
struct Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String Unity.LEGO.Game.Variable::Name
	String_t* ___Name_4;
	// System.Int32 Unity.LEGO.Game.Variable::InitialValue
	int32_t ___InitialValue_5;
	// System.Boolean Unity.LEGO.Game.Variable::UseUI
	bool ___UseUI_6;
	// UnityEngine.GameObject Unity.LEGO.Game.Variable::UI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___UI_7;
	// System.Action`1<System.Int32> Unity.LEGO.Game.Variable::OnUpdate
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___OnUpdate_8;

public:
	inline static int32_t get_offset_of_Name_4() { return static_cast<int32_t>(offsetof(Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E, ___Name_4)); }
	inline String_t* get_Name_4() const { return ___Name_4; }
	inline String_t** get_address_of_Name_4() { return &___Name_4; }
	inline void set_Name_4(String_t* value)
	{
		___Name_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_4), (void*)value);
	}

	inline static int32_t get_offset_of_InitialValue_5() { return static_cast<int32_t>(offsetof(Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E, ___InitialValue_5)); }
	inline int32_t get_InitialValue_5() const { return ___InitialValue_5; }
	inline int32_t* get_address_of_InitialValue_5() { return &___InitialValue_5; }
	inline void set_InitialValue_5(int32_t value)
	{
		___InitialValue_5 = value;
	}

	inline static int32_t get_offset_of_UseUI_6() { return static_cast<int32_t>(offsetof(Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E, ___UseUI_6)); }
	inline bool get_UseUI_6() const { return ___UseUI_6; }
	inline bool* get_address_of_UseUI_6() { return &___UseUI_6; }
	inline void set_UseUI_6(bool value)
	{
		___UseUI_6 = value;
	}

	inline static int32_t get_offset_of_UI_7() { return static_cast<int32_t>(offsetof(Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E, ___UI_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_UI_7() const { return ___UI_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_UI_7() { return &___UI_7; }
	inline void set_UI_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___UI_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UI_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnUpdate_8() { return static_cast<int32_t>(offsetof(Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E, ___OnUpdate_8)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_OnUpdate_8() const { return ___OnUpdate_8; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_OnUpdate_8() { return &___OnUpdate_8; }
	inline void set_OnUpdate_8(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___OnUpdate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUpdate_8), (void*)value);
	}
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String[] Cinemachine.CinemachineVirtualCameraBase::m_ExcludedPropertiesInInspector
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_ExcludedPropertiesInInspector_4;
	// Cinemachine.CinemachineCore/Stage[] Cinemachine.CinemachineVirtualCameraBase::m_LockStageInInspector
	StageU5BU5D_t605193BD653BA57911AFE8A2D01B1D799F7BB949* ___m_LockStageInInspector_5;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_ValidatingStreamVersion
	int32_t ___m_ValidatingStreamVersion_6;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_OnValidateCalled
	bool ___m_OnValidateCalled_7;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_StreamingVersion
	int32_t ___m_StreamingVersion_8;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_Priority
	int32_t ___m_Priority_9;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::<FollowTargetAttachment>k__BackingField
	float ___U3CFollowTargetAttachmentU3Ek__BackingField_10;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::<LookAtTargetAttachment>k__BackingField
	float ___U3CLookAtTargetAttachmentU3Ek__BackingField_11;
	// Cinemachine.CinemachineVirtualCameraBase/StandbyUpdateMode Cinemachine.CinemachineVirtualCameraBase::m_StandbyUpdate
	int32_t ___m_StandbyUpdate_12;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension> Cinemachine.CinemachineVirtualCameraBase::mExtensions
	List_1_t13875FE3163CFA961C09134FFAA2E0903229691A * ___mExtensions_13;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<PreviousStateIsValid>k__BackingField
	bool ___U3CPreviousStateIsValidU3Ek__BackingField_14;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_WasStarted
	bool ___m_WasStarted_15;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::mSlaveStatusUpdated
	bool ___mSlaveStatusUpdated_16;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_parentVcam
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___m_parentVcam_17;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_QueuePriority
	int32_t ___m_QueuePriority_18;

public:
	inline static int32_t get_offset_of_m_ExcludedPropertiesInInspector_4() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_ExcludedPropertiesInInspector_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_ExcludedPropertiesInInspector_4() const { return ___m_ExcludedPropertiesInInspector_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_ExcludedPropertiesInInspector_4() { return &___m_ExcludedPropertiesInInspector_4; }
	inline void set_m_ExcludedPropertiesInInspector_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_ExcludedPropertiesInInspector_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExcludedPropertiesInInspector_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_LockStageInInspector_5() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_LockStageInInspector_5)); }
	inline StageU5BU5D_t605193BD653BA57911AFE8A2D01B1D799F7BB949* get_m_LockStageInInspector_5() const { return ___m_LockStageInInspector_5; }
	inline StageU5BU5D_t605193BD653BA57911AFE8A2D01B1D799F7BB949** get_address_of_m_LockStageInInspector_5() { return &___m_LockStageInInspector_5; }
	inline void set_m_LockStageInInspector_5(StageU5BU5D_t605193BD653BA57911AFE8A2D01B1D799F7BB949* value)
	{
		___m_LockStageInInspector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LockStageInInspector_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ValidatingStreamVersion_6() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_ValidatingStreamVersion_6)); }
	inline int32_t get_m_ValidatingStreamVersion_6() const { return ___m_ValidatingStreamVersion_6; }
	inline int32_t* get_address_of_m_ValidatingStreamVersion_6() { return &___m_ValidatingStreamVersion_6; }
	inline void set_m_ValidatingStreamVersion_6(int32_t value)
	{
		___m_ValidatingStreamVersion_6 = value;
	}

	inline static int32_t get_offset_of_m_OnValidateCalled_7() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_OnValidateCalled_7)); }
	inline bool get_m_OnValidateCalled_7() const { return ___m_OnValidateCalled_7; }
	inline bool* get_address_of_m_OnValidateCalled_7() { return &___m_OnValidateCalled_7; }
	inline void set_m_OnValidateCalled_7(bool value)
	{
		___m_OnValidateCalled_7 = value;
	}

	inline static int32_t get_offset_of_m_StreamingVersion_8() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_StreamingVersion_8)); }
	inline int32_t get_m_StreamingVersion_8() const { return ___m_StreamingVersion_8; }
	inline int32_t* get_address_of_m_StreamingVersion_8() { return &___m_StreamingVersion_8; }
	inline void set_m_StreamingVersion_8(int32_t value)
	{
		___m_StreamingVersion_8 = value;
	}

	inline static int32_t get_offset_of_m_Priority_9() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_Priority_9)); }
	inline int32_t get_m_Priority_9() const { return ___m_Priority_9; }
	inline int32_t* get_address_of_m_Priority_9() { return &___m_Priority_9; }
	inline void set_m_Priority_9(int32_t value)
	{
		___m_Priority_9 = value;
	}

	inline static int32_t get_offset_of_U3CFollowTargetAttachmentU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___U3CFollowTargetAttachmentU3Ek__BackingField_10)); }
	inline float get_U3CFollowTargetAttachmentU3Ek__BackingField_10() const { return ___U3CFollowTargetAttachmentU3Ek__BackingField_10; }
	inline float* get_address_of_U3CFollowTargetAttachmentU3Ek__BackingField_10() { return &___U3CFollowTargetAttachmentU3Ek__BackingField_10; }
	inline void set_U3CFollowTargetAttachmentU3Ek__BackingField_10(float value)
	{
		___U3CFollowTargetAttachmentU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CLookAtTargetAttachmentU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___U3CLookAtTargetAttachmentU3Ek__BackingField_11)); }
	inline float get_U3CLookAtTargetAttachmentU3Ek__BackingField_11() const { return ___U3CLookAtTargetAttachmentU3Ek__BackingField_11; }
	inline float* get_address_of_U3CLookAtTargetAttachmentU3Ek__BackingField_11() { return &___U3CLookAtTargetAttachmentU3Ek__BackingField_11; }
	inline void set_U3CLookAtTargetAttachmentU3Ek__BackingField_11(float value)
	{
		___U3CLookAtTargetAttachmentU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_m_StandbyUpdate_12() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_StandbyUpdate_12)); }
	inline int32_t get_m_StandbyUpdate_12() const { return ___m_StandbyUpdate_12; }
	inline int32_t* get_address_of_m_StandbyUpdate_12() { return &___m_StandbyUpdate_12; }
	inline void set_m_StandbyUpdate_12(int32_t value)
	{
		___m_StandbyUpdate_12 = value;
	}

	inline static int32_t get_offset_of_mExtensions_13() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___mExtensions_13)); }
	inline List_1_t13875FE3163CFA961C09134FFAA2E0903229691A * get_mExtensions_13() const { return ___mExtensions_13; }
	inline List_1_t13875FE3163CFA961C09134FFAA2E0903229691A ** get_address_of_mExtensions_13() { return &___mExtensions_13; }
	inline void set_mExtensions_13(List_1_t13875FE3163CFA961C09134FFAA2E0903229691A * value)
	{
		___mExtensions_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mExtensions_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPreviousStateIsValidU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___U3CPreviousStateIsValidU3Ek__BackingField_14)); }
	inline bool get_U3CPreviousStateIsValidU3Ek__BackingField_14() const { return ___U3CPreviousStateIsValidU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CPreviousStateIsValidU3Ek__BackingField_14() { return &___U3CPreviousStateIsValidU3Ek__BackingField_14; }
	inline void set_U3CPreviousStateIsValidU3Ek__BackingField_14(bool value)
	{
		___U3CPreviousStateIsValidU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_m_WasStarted_15() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_WasStarted_15)); }
	inline bool get_m_WasStarted_15() const { return ___m_WasStarted_15; }
	inline bool* get_address_of_m_WasStarted_15() { return &___m_WasStarted_15; }
	inline void set_m_WasStarted_15(bool value)
	{
		___m_WasStarted_15 = value;
	}

	inline static int32_t get_offset_of_mSlaveStatusUpdated_16() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___mSlaveStatusUpdated_16)); }
	inline bool get_mSlaveStatusUpdated_16() const { return ___mSlaveStatusUpdated_16; }
	inline bool* get_address_of_mSlaveStatusUpdated_16() { return &___mSlaveStatusUpdated_16; }
	inline void set_mSlaveStatusUpdated_16(bool value)
	{
		___mSlaveStatusUpdated_16 = value;
	}

	inline static int32_t get_offset_of_m_parentVcam_17() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_parentVcam_17)); }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * get_m_parentVcam_17() const { return ___m_parentVcam_17; }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 ** get_address_of_m_parentVcam_17() { return &___m_parentVcam_17; }
	inline void set_m_parentVcam_17(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * value)
	{
		___m_parentVcam_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parentVcam_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_QueuePriority_18() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_QueuePriority_18)); }
	inline int32_t get_m_QueuePriority_18() const { return ___m_QueuePriority_18; }
	inline int32_t* get_address_of_m_QueuePriority_18() { return &___m_QueuePriority_18; }
	inline void set_m_QueuePriority_18(int32_t value)
	{
		___m_QueuePriority_18 = value;
	}
};


// Unity.LEGO.Game.GameFlowManager
struct GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String Unity.LEGO.Game.GameFlowManager::m_WinScene
	String_t* ___m_WinScene_4;
	// System.Single Unity.LEGO.Game.GameFlowManager::m_WinSceneDelay
	float ___m_WinSceneDelay_5;
	// System.String Unity.LEGO.Game.GameFlowManager::m_LoseScene
	String_t* ___m_LoseScene_6;
	// System.Single Unity.LEGO.Game.GameFlowManager::m_LoseSceneDelay
	float ___m_LoseSceneDelay_7;
	// System.Single Unity.LEGO.Game.GameFlowManager::m_StartGameLockedControllerTimer
	float ___m_StartGameLockedControllerTimer_8;
	// System.Boolean Unity.LEGO.Game.GameFlowManager::<GameIsEnding>k__BackingField
	bool ___U3CGameIsEndingU3Ek__BackingField_10;
	// System.Single Unity.LEGO.Game.GameFlowManager::m_GameOverSceneTime
	float ___m_GameOverSceneTime_11;
	// System.String Unity.LEGO.Game.GameFlowManager::m_GameOverSceneToLoad
	String_t* ___m_GameOverSceneToLoad_12;
	// Cinemachine.CinemachineFreeLook Unity.LEGO.Game.GameFlowManager::m_FreeLookCamera
	CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * ___m_FreeLookCamera_13;
	// System.String Unity.LEGO.Game.GameFlowManager::m_ControllerAxisXName
	String_t* ___m_ControllerAxisXName_14;
	// System.String Unity.LEGO.Game.GameFlowManager::m_ControllerAxisYName
	String_t* ___m_ControllerAxisYName_15;

public:
	inline static int32_t get_offset_of_m_WinScene_4() { return static_cast<int32_t>(offsetof(GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548, ___m_WinScene_4)); }
	inline String_t* get_m_WinScene_4() const { return ___m_WinScene_4; }
	inline String_t** get_address_of_m_WinScene_4() { return &___m_WinScene_4; }
	inline void set_m_WinScene_4(String_t* value)
	{
		___m_WinScene_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WinScene_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_WinSceneDelay_5() { return static_cast<int32_t>(offsetof(GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548, ___m_WinSceneDelay_5)); }
	inline float get_m_WinSceneDelay_5() const { return ___m_WinSceneDelay_5; }
	inline float* get_address_of_m_WinSceneDelay_5() { return &___m_WinSceneDelay_5; }
	inline void set_m_WinSceneDelay_5(float value)
	{
		___m_WinSceneDelay_5 = value;
	}

	inline static int32_t get_offset_of_m_LoseScene_6() { return static_cast<int32_t>(offsetof(GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548, ___m_LoseScene_6)); }
	inline String_t* get_m_LoseScene_6() const { return ___m_LoseScene_6; }
	inline String_t** get_address_of_m_LoseScene_6() { return &___m_LoseScene_6; }
	inline void set_m_LoseScene_6(String_t* value)
	{
		___m_LoseScene_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LoseScene_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_LoseSceneDelay_7() { return static_cast<int32_t>(offsetof(GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548, ___m_LoseSceneDelay_7)); }
	inline float get_m_LoseSceneDelay_7() const { return ___m_LoseSceneDelay_7; }
	inline float* get_address_of_m_LoseSceneDelay_7() { return &___m_LoseSceneDelay_7; }
	inline void set_m_LoseSceneDelay_7(float value)
	{
		___m_LoseSceneDelay_7 = value;
	}

	inline static int32_t get_offset_of_m_StartGameLockedControllerTimer_8() { return static_cast<int32_t>(offsetof(GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548, ___m_StartGameLockedControllerTimer_8)); }
	inline float get_m_StartGameLockedControllerTimer_8() const { return ___m_StartGameLockedControllerTimer_8; }
	inline float* get_address_of_m_StartGameLockedControllerTimer_8() { return &___m_StartGameLockedControllerTimer_8; }
	inline void set_m_StartGameLockedControllerTimer_8(float value)
	{
		___m_StartGameLockedControllerTimer_8 = value;
	}

	inline static int32_t get_offset_of_U3CGameIsEndingU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548, ___U3CGameIsEndingU3Ek__BackingField_10)); }
	inline bool get_U3CGameIsEndingU3Ek__BackingField_10() const { return ___U3CGameIsEndingU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CGameIsEndingU3Ek__BackingField_10() { return &___U3CGameIsEndingU3Ek__BackingField_10; }
	inline void set_U3CGameIsEndingU3Ek__BackingField_10(bool value)
	{
		___U3CGameIsEndingU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_m_GameOverSceneTime_11() { return static_cast<int32_t>(offsetof(GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548, ___m_GameOverSceneTime_11)); }
	inline float get_m_GameOverSceneTime_11() const { return ___m_GameOverSceneTime_11; }
	inline float* get_address_of_m_GameOverSceneTime_11() { return &___m_GameOverSceneTime_11; }
	inline void set_m_GameOverSceneTime_11(float value)
	{
		___m_GameOverSceneTime_11 = value;
	}

	inline static int32_t get_offset_of_m_GameOverSceneToLoad_12() { return static_cast<int32_t>(offsetof(GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548, ___m_GameOverSceneToLoad_12)); }
	inline String_t* get_m_GameOverSceneToLoad_12() const { return ___m_GameOverSceneToLoad_12; }
	inline String_t** get_address_of_m_GameOverSceneToLoad_12() { return &___m_GameOverSceneToLoad_12; }
	inline void set_m_GameOverSceneToLoad_12(String_t* value)
	{
		___m_GameOverSceneToLoad_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameOverSceneToLoad_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_FreeLookCamera_13() { return static_cast<int32_t>(offsetof(GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548, ___m_FreeLookCamera_13)); }
	inline CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * get_m_FreeLookCamera_13() const { return ___m_FreeLookCamera_13; }
	inline CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F ** get_address_of_m_FreeLookCamera_13() { return &___m_FreeLookCamera_13; }
	inline void set_m_FreeLookCamera_13(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * value)
	{
		___m_FreeLookCamera_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FreeLookCamera_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControllerAxisXName_14() { return static_cast<int32_t>(offsetof(GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548, ___m_ControllerAxisXName_14)); }
	inline String_t* get_m_ControllerAxisXName_14() const { return ___m_ControllerAxisXName_14; }
	inline String_t** get_address_of_m_ControllerAxisXName_14() { return &___m_ControllerAxisXName_14; }
	inline void set_m_ControllerAxisXName_14(String_t* value)
	{
		___m_ControllerAxisXName_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControllerAxisXName_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControllerAxisYName_15() { return static_cast<int32_t>(offsetof(GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548, ___m_ControllerAxisYName_15)); }
	inline String_t* get_m_ControllerAxisYName_15() const { return ___m_ControllerAxisYName_15; }
	inline String_t** get_address_of_m_ControllerAxisYName_15() { return &___m_ControllerAxisYName_15; }
	inline void set_m_ControllerAxisYName_15(String_t* value)
	{
		___m_ControllerAxisYName_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControllerAxisYName_15), (void*)value);
	}
};

struct GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548_StaticFields
{
public:
	// System.String Unity.LEGO.Game.GameFlowManager::<PreviousScene>k__BackingField
	String_t* ___U3CPreviousSceneU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CPreviousSceneU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548_StaticFields, ___U3CPreviousSceneU3Ek__BackingField_9)); }
	inline String_t* get_U3CPreviousSceneU3Ek__BackingField_9() const { return ___U3CPreviousSceneU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CPreviousSceneU3Ek__BackingField_9() { return &___U3CPreviousSceneU3Ek__BackingField_9; }
	inline void set_U3CPreviousSceneU3Ek__BackingField_9(String_t* value)
	{
		___U3CPreviousSceneU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPreviousSceneU3Ek__BackingField_9), (void*)value);
	}
};


// Unity.LEGO.Game.InputManager
struct InputManager_t3B65863876DEF411046BF33708D1137313B0023C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Unity.LEGO.Game.InputManager::m_VerticalLookMinSensitivity
	float ___m_VerticalLookMinSensitivity_4;
	// System.Single Unity.LEGO.Game.InputManager::m_VerticalLookSensitivityStep
	float ___m_VerticalLookSensitivityStep_5;
	// System.Single Unity.LEGO.Game.InputManager::m_HorizontalLookMinimumSensitivity
	float ___m_HorizontalLookMinimumSensitivity_6;
	// System.Single Unity.LEGO.Game.InputManager::m_HorizontalLookSensitivityStep
	float ___m_HorizontalLookSensitivityStep_7;
	// Cinemachine.CinemachineFreeLook Unity.LEGO.Game.InputManager::m_FreeLookCamera
	CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * ___m_FreeLookCamera_8;

public:
	inline static int32_t get_offset_of_m_VerticalLookMinSensitivity_4() { return static_cast<int32_t>(offsetof(InputManager_t3B65863876DEF411046BF33708D1137313B0023C, ___m_VerticalLookMinSensitivity_4)); }
	inline float get_m_VerticalLookMinSensitivity_4() const { return ___m_VerticalLookMinSensitivity_4; }
	inline float* get_address_of_m_VerticalLookMinSensitivity_4() { return &___m_VerticalLookMinSensitivity_4; }
	inline void set_m_VerticalLookMinSensitivity_4(float value)
	{
		___m_VerticalLookMinSensitivity_4 = value;
	}

	inline static int32_t get_offset_of_m_VerticalLookSensitivityStep_5() { return static_cast<int32_t>(offsetof(InputManager_t3B65863876DEF411046BF33708D1137313B0023C, ___m_VerticalLookSensitivityStep_5)); }
	inline float get_m_VerticalLookSensitivityStep_5() const { return ___m_VerticalLookSensitivityStep_5; }
	inline float* get_address_of_m_VerticalLookSensitivityStep_5() { return &___m_VerticalLookSensitivityStep_5; }
	inline void set_m_VerticalLookSensitivityStep_5(float value)
	{
		___m_VerticalLookSensitivityStep_5 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalLookMinimumSensitivity_6() { return static_cast<int32_t>(offsetof(InputManager_t3B65863876DEF411046BF33708D1137313B0023C, ___m_HorizontalLookMinimumSensitivity_6)); }
	inline float get_m_HorizontalLookMinimumSensitivity_6() const { return ___m_HorizontalLookMinimumSensitivity_6; }
	inline float* get_address_of_m_HorizontalLookMinimumSensitivity_6() { return &___m_HorizontalLookMinimumSensitivity_6; }
	inline void set_m_HorizontalLookMinimumSensitivity_6(float value)
	{
		___m_HorizontalLookMinimumSensitivity_6 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalLookSensitivityStep_7() { return static_cast<int32_t>(offsetof(InputManager_t3B65863876DEF411046BF33708D1137313B0023C, ___m_HorizontalLookSensitivityStep_7)); }
	inline float get_m_HorizontalLookSensitivityStep_7() const { return ___m_HorizontalLookSensitivityStep_7; }
	inline float* get_address_of_m_HorizontalLookSensitivityStep_7() { return &___m_HorizontalLookSensitivityStep_7; }
	inline void set_m_HorizontalLookSensitivityStep_7(float value)
	{
		___m_HorizontalLookSensitivityStep_7 = value;
	}

	inline static int32_t get_offset_of_m_FreeLookCamera_8() { return static_cast<int32_t>(offsetof(InputManager_t3B65863876DEF411046BF33708D1137313B0023C, ___m_FreeLookCamera_8)); }
	inline CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * get_m_FreeLookCamera_8() const { return ___m_FreeLookCamera_8; }
	inline CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F ** get_address_of_m_FreeLookCamera_8() { return &___m_FreeLookCamera_8; }
	inline void set_m_FreeLookCamera_8(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * value)
	{
		___m_FreeLookCamera_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FreeLookCamera_8), (void*)value);
	}
};


// Unity.LEGO.Game.ObjectiveManager
struct ObjectiveManager_tD5EE4E2902DE8B17FE395EAF0B2BBF7422FF2439  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<Unity.LEGO.Game.IObjective> Unity.LEGO.Game.ObjectiveManager::m_Objectives
	List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559 * ___m_Objectives_4;
	// System.Boolean Unity.LEGO.Game.ObjectiveManager::m_Won
	bool ___m_Won_5;
	// System.Boolean Unity.LEGO.Game.ObjectiveManager::m_Lost
	bool ___m_Lost_6;

public:
	inline static int32_t get_offset_of_m_Objectives_4() { return static_cast<int32_t>(offsetof(ObjectiveManager_tD5EE4E2902DE8B17FE395EAF0B2BBF7422FF2439, ___m_Objectives_4)); }
	inline List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559 * get_m_Objectives_4() const { return ___m_Objectives_4; }
	inline List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559 ** get_address_of_m_Objectives_4() { return &___m_Objectives_4; }
	inline void set_m_Objectives_4(List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559 * value)
	{
		___m_Objectives_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objectives_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Won_5() { return static_cast<int32_t>(offsetof(ObjectiveManager_tD5EE4E2902DE8B17FE395EAF0B2BBF7422FF2439, ___m_Won_5)); }
	inline bool get_m_Won_5() const { return ___m_Won_5; }
	inline bool* get_address_of_m_Won_5() { return &___m_Won_5; }
	inline void set_m_Won_5(bool value)
	{
		___m_Won_5 = value;
	}

	inline static int32_t get_offset_of_m_Lost_6() { return static_cast<int32_t>(offsetof(ObjectiveManager_tD5EE4E2902DE8B17FE395EAF0B2BBF7422FF2439, ___m_Lost_6)); }
	inline bool get_m_Lost_6() const { return ___m_Lost_6; }
	inline bool* get_address_of_m_Lost_6() { return &___m_Lost_6; }
	inline void set_m_Lost_6(bool value)
	{
		___m_Lost_6 = value;
	}
};


// Cinemachine.CinemachineFreeLook
struct CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F  : public CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5
{
public:
	// UnityEngine.Transform Cinemachine.CinemachineFreeLook::m_LookAt
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_LookAt_19;
	// UnityEngine.Transform Cinemachine.CinemachineFreeLook::m_Follow
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Follow_20;
	// System.Boolean Cinemachine.CinemachineFreeLook::m_CommonLens
	bool ___m_CommonLens_21;
	// Cinemachine.LensSettings Cinemachine.CinemachineFreeLook::m_Lens
	LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  ___m_Lens_22;
	// Cinemachine.CinemachineVirtualCameraBase/TransitionParams Cinemachine.CinemachineFreeLook::m_Transitions
	TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C  ___m_Transitions_23;
	// Cinemachine.CinemachineVirtualCameraBase/BlendHint Cinemachine.CinemachineFreeLook::m_LegacyBlendHint
	int32_t ___m_LegacyBlendHint_24;
	// Cinemachine.AxisState Cinemachine.CinemachineFreeLook::m_YAxis
	AxisState_t376D19829A676B98933979F42845F6476071DDE8  ___m_YAxis_25;
	// Cinemachine.AxisState/Recentering Cinemachine.CinemachineFreeLook::m_YAxisRecentering
	Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  ___m_YAxisRecentering_26;
	// Cinemachine.AxisState Cinemachine.CinemachineFreeLook::m_XAxis
	AxisState_t376D19829A676B98933979F42845F6476071DDE8  ___m_XAxis_27;
	// Cinemachine.CinemachineOrbitalTransposer/Heading Cinemachine.CinemachineFreeLook::m_Heading
	Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9  ___m_Heading_28;
	// Cinemachine.AxisState/Recentering Cinemachine.CinemachineFreeLook::m_RecenterToTargetHeading
	Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  ___m_RecenterToTargetHeading_29;
	// Cinemachine.CinemachineTransposer/BindingMode Cinemachine.CinemachineFreeLook::m_BindingMode
	int32_t ___m_BindingMode_30;
	// System.Single Cinemachine.CinemachineFreeLook::m_SplineCurvature
	float ___m_SplineCurvature_31;
	// Cinemachine.CinemachineFreeLook/Orbit[] Cinemachine.CinemachineFreeLook::m_Orbits
	OrbitU5BU5D_t6E72D519BC4799C53639700DA84A0B5D9A8843C7* ___m_Orbits_32;
	// System.Single Cinemachine.CinemachineFreeLook::m_LegacyHeadingBias
	float ___m_LegacyHeadingBias_33;
	// System.Boolean Cinemachine.CinemachineFreeLook::mUseLegacyRigDefinitions
	bool ___mUseLegacyRigDefinitions_34;
	// System.Boolean Cinemachine.CinemachineFreeLook::mIsDestroyed
	bool ___mIsDestroyed_35;
	// Cinemachine.CameraState Cinemachine.CinemachineFreeLook::m_State
	CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  ___m_State_36;
	// Cinemachine.CinemachineVirtualCamera[] Cinemachine.CinemachineFreeLook::m_Rigs
	CinemachineVirtualCameraU5BU5D_tC889EF06476C516ECD8E2A99BD4C4067B8F8E57A* ___m_Rigs_37;
	// Cinemachine.CinemachineOrbitalTransposer[] Cinemachine.CinemachineFreeLook::mOrbitals
	CinemachineOrbitalTransposerU5BU5D_t262EAE08AEDA55E53176DB1697F768E1DA37C2E4* ___mOrbitals_38;
	// Cinemachine.CinemachineBlend Cinemachine.CinemachineFreeLook::mBlendA
	CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * ___mBlendA_39;
	// Cinemachine.CinemachineBlend Cinemachine.CinemachineFreeLook::mBlendB
	CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * ___mBlendB_40;
	// System.Single Cinemachine.CinemachineFreeLook::<CachedXAxisHeading>k__BackingField
	float ___U3CCachedXAxisHeadingU3Ek__BackingField_43;
	// Cinemachine.CinemachineFreeLook/Orbit[] Cinemachine.CinemachineFreeLook::m_CachedOrbits
	OrbitU5BU5D_t6E72D519BC4799C53639700DA84A0B5D9A8843C7* ___m_CachedOrbits_44;
	// System.Single Cinemachine.CinemachineFreeLook::m_CachedTension
	float ___m_CachedTension_45;
	// UnityEngine.Vector4[] Cinemachine.CinemachineFreeLook::m_CachedKnots
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___m_CachedKnots_46;
	// UnityEngine.Vector4[] Cinemachine.CinemachineFreeLook::m_CachedCtrl1
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___m_CachedCtrl1_47;
	// UnityEngine.Vector4[] Cinemachine.CinemachineFreeLook::m_CachedCtrl2
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___m_CachedCtrl2_48;

public:
	inline static int32_t get_offset_of_m_LookAt_19() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_LookAt_19)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_LookAt_19() const { return ___m_LookAt_19; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_LookAt_19() { return &___m_LookAt_19; }
	inline void set_m_LookAt_19(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_LookAt_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LookAt_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Follow_20() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_Follow_20)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_Follow_20() const { return ___m_Follow_20; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_Follow_20() { return &___m_Follow_20; }
	inline void set_m_Follow_20(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_Follow_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Follow_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_CommonLens_21() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_CommonLens_21)); }
	inline bool get_m_CommonLens_21() const { return ___m_CommonLens_21; }
	inline bool* get_address_of_m_CommonLens_21() { return &___m_CommonLens_21; }
	inline void set_m_CommonLens_21(bool value)
	{
		___m_CommonLens_21 = value;
	}

	inline static int32_t get_offset_of_m_Lens_22() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_Lens_22)); }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  get_m_Lens_22() const { return ___m_Lens_22; }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * get_address_of_m_Lens_22() { return &___m_Lens_22; }
	inline void set_m_Lens_22(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  value)
	{
		___m_Lens_22 = value;
	}

	inline static int32_t get_offset_of_m_Transitions_23() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_Transitions_23)); }
	inline TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C  get_m_Transitions_23() const { return ___m_Transitions_23; }
	inline TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C * get_address_of_m_Transitions_23() { return &___m_Transitions_23; }
	inline void set_m_Transitions_23(TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C  value)
	{
		___m_Transitions_23 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Transitions_23))->___m_OnCameraLive_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_LegacyBlendHint_24() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_LegacyBlendHint_24)); }
	inline int32_t get_m_LegacyBlendHint_24() const { return ___m_LegacyBlendHint_24; }
	inline int32_t* get_address_of_m_LegacyBlendHint_24() { return &___m_LegacyBlendHint_24; }
	inline void set_m_LegacyBlendHint_24(int32_t value)
	{
		___m_LegacyBlendHint_24 = value;
	}

	inline static int32_t get_offset_of_m_YAxis_25() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_YAxis_25)); }
	inline AxisState_t376D19829A676B98933979F42845F6476071DDE8  get_m_YAxis_25() const { return ___m_YAxis_25; }
	inline AxisState_t376D19829A676B98933979F42845F6476071DDE8 * get_address_of_m_YAxis_25() { return &___m_YAxis_25; }
	inline void set_m_YAxis_25(AxisState_t376D19829A676B98933979F42845F6476071DDE8  value)
	{
		___m_YAxis_25 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_YAxis_25))->___m_InputAxisName_5), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_YAxis_25))->___m_InputAxisProvider_14), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_YAxisRecentering_26() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_YAxisRecentering_26)); }
	inline Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  get_m_YAxisRecentering_26() const { return ___m_YAxisRecentering_26; }
	inline Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427 * get_address_of_m_YAxisRecentering_26() { return &___m_YAxisRecentering_26; }
	inline void set_m_YAxisRecentering_26(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  value)
	{
		___m_YAxisRecentering_26 = value;
	}

	inline static int32_t get_offset_of_m_XAxis_27() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_XAxis_27)); }
	inline AxisState_t376D19829A676B98933979F42845F6476071DDE8  get_m_XAxis_27() const { return ___m_XAxis_27; }
	inline AxisState_t376D19829A676B98933979F42845F6476071DDE8 * get_address_of_m_XAxis_27() { return &___m_XAxis_27; }
	inline void set_m_XAxis_27(AxisState_t376D19829A676B98933979F42845F6476071DDE8  value)
	{
		___m_XAxis_27 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_XAxis_27))->___m_InputAxisName_5), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_XAxis_27))->___m_InputAxisProvider_14), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Heading_28() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_Heading_28)); }
	inline Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9  get_m_Heading_28() const { return ___m_Heading_28; }
	inline Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9 * get_address_of_m_Heading_28() { return &___m_Heading_28; }
	inline void set_m_Heading_28(Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9  value)
	{
		___m_Heading_28 = value;
	}

	inline static int32_t get_offset_of_m_RecenterToTargetHeading_29() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_RecenterToTargetHeading_29)); }
	inline Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  get_m_RecenterToTargetHeading_29() const { return ___m_RecenterToTargetHeading_29; }
	inline Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427 * get_address_of_m_RecenterToTargetHeading_29() { return &___m_RecenterToTargetHeading_29; }
	inline void set_m_RecenterToTargetHeading_29(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  value)
	{
		___m_RecenterToTargetHeading_29 = value;
	}

	inline static int32_t get_offset_of_m_BindingMode_30() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_BindingMode_30)); }
	inline int32_t get_m_BindingMode_30() const { return ___m_BindingMode_30; }
	inline int32_t* get_address_of_m_BindingMode_30() { return &___m_BindingMode_30; }
	inline void set_m_BindingMode_30(int32_t value)
	{
		___m_BindingMode_30 = value;
	}

	inline static int32_t get_offset_of_m_SplineCurvature_31() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_SplineCurvature_31)); }
	inline float get_m_SplineCurvature_31() const { return ___m_SplineCurvature_31; }
	inline float* get_address_of_m_SplineCurvature_31() { return &___m_SplineCurvature_31; }
	inline void set_m_SplineCurvature_31(float value)
	{
		___m_SplineCurvature_31 = value;
	}

	inline static int32_t get_offset_of_m_Orbits_32() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_Orbits_32)); }
	inline OrbitU5BU5D_t6E72D519BC4799C53639700DA84A0B5D9A8843C7* get_m_Orbits_32() const { return ___m_Orbits_32; }
	inline OrbitU5BU5D_t6E72D519BC4799C53639700DA84A0B5D9A8843C7** get_address_of_m_Orbits_32() { return &___m_Orbits_32; }
	inline void set_m_Orbits_32(OrbitU5BU5D_t6E72D519BC4799C53639700DA84A0B5D9A8843C7* value)
	{
		___m_Orbits_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Orbits_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyHeadingBias_33() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_LegacyHeadingBias_33)); }
	inline float get_m_LegacyHeadingBias_33() const { return ___m_LegacyHeadingBias_33; }
	inline float* get_address_of_m_LegacyHeadingBias_33() { return &___m_LegacyHeadingBias_33; }
	inline void set_m_LegacyHeadingBias_33(float value)
	{
		___m_LegacyHeadingBias_33 = value;
	}

	inline static int32_t get_offset_of_mUseLegacyRigDefinitions_34() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___mUseLegacyRigDefinitions_34)); }
	inline bool get_mUseLegacyRigDefinitions_34() const { return ___mUseLegacyRigDefinitions_34; }
	inline bool* get_address_of_mUseLegacyRigDefinitions_34() { return &___mUseLegacyRigDefinitions_34; }
	inline void set_mUseLegacyRigDefinitions_34(bool value)
	{
		___mUseLegacyRigDefinitions_34 = value;
	}

	inline static int32_t get_offset_of_mIsDestroyed_35() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___mIsDestroyed_35)); }
	inline bool get_mIsDestroyed_35() const { return ___mIsDestroyed_35; }
	inline bool* get_address_of_mIsDestroyed_35() { return &___mIsDestroyed_35; }
	inline void set_mIsDestroyed_35(bool value)
	{
		___mIsDestroyed_35 = value;
	}

	inline static int32_t get_offset_of_m_State_36() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_State_36)); }
	inline CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  get_m_State_36() const { return ___m_State_36; }
	inline CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601 * get_address_of_m_State_36() { return &___m_State_36; }
	inline void set_m_State_36(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  value)
	{
		___m_State_36 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_36))->___mCustom0_11))->___m_Custom_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_36))->___mCustom1_12))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_36))->___mCustom2_13))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_36))->___mCustom3_14))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_State_36))->___m_CustomOverflow_15), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Rigs_37() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_Rigs_37)); }
	inline CinemachineVirtualCameraU5BU5D_tC889EF06476C516ECD8E2A99BD4C4067B8F8E57A* get_m_Rigs_37() const { return ___m_Rigs_37; }
	inline CinemachineVirtualCameraU5BU5D_tC889EF06476C516ECD8E2A99BD4C4067B8F8E57A** get_address_of_m_Rigs_37() { return &___m_Rigs_37; }
	inline void set_m_Rigs_37(CinemachineVirtualCameraU5BU5D_tC889EF06476C516ECD8E2A99BD4C4067B8F8E57A* value)
	{
		___m_Rigs_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rigs_37), (void*)value);
	}

	inline static int32_t get_offset_of_mOrbitals_38() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___mOrbitals_38)); }
	inline CinemachineOrbitalTransposerU5BU5D_t262EAE08AEDA55E53176DB1697F768E1DA37C2E4* get_mOrbitals_38() const { return ___mOrbitals_38; }
	inline CinemachineOrbitalTransposerU5BU5D_t262EAE08AEDA55E53176DB1697F768E1DA37C2E4** get_address_of_mOrbitals_38() { return &___mOrbitals_38; }
	inline void set_mOrbitals_38(CinemachineOrbitalTransposerU5BU5D_t262EAE08AEDA55E53176DB1697F768E1DA37C2E4* value)
	{
		___mOrbitals_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOrbitals_38), (void*)value);
	}

	inline static int32_t get_offset_of_mBlendA_39() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___mBlendA_39)); }
	inline CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * get_mBlendA_39() const { return ___mBlendA_39; }
	inline CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C ** get_address_of_mBlendA_39() { return &___mBlendA_39; }
	inline void set_mBlendA_39(CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * value)
	{
		___mBlendA_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mBlendA_39), (void*)value);
	}

	inline static int32_t get_offset_of_mBlendB_40() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___mBlendB_40)); }
	inline CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * get_mBlendB_40() const { return ___mBlendB_40; }
	inline CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C ** get_address_of_mBlendB_40() { return &___mBlendB_40; }
	inline void set_mBlendB_40(CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * value)
	{
		___mBlendB_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mBlendB_40), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCachedXAxisHeadingU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___U3CCachedXAxisHeadingU3Ek__BackingField_43)); }
	inline float get_U3CCachedXAxisHeadingU3Ek__BackingField_43() const { return ___U3CCachedXAxisHeadingU3Ek__BackingField_43; }
	inline float* get_address_of_U3CCachedXAxisHeadingU3Ek__BackingField_43() { return &___U3CCachedXAxisHeadingU3Ek__BackingField_43; }
	inline void set_U3CCachedXAxisHeadingU3Ek__BackingField_43(float value)
	{
		___U3CCachedXAxisHeadingU3Ek__BackingField_43 = value;
	}

	inline static int32_t get_offset_of_m_CachedOrbits_44() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_CachedOrbits_44)); }
	inline OrbitU5BU5D_t6E72D519BC4799C53639700DA84A0B5D9A8843C7* get_m_CachedOrbits_44() const { return ___m_CachedOrbits_44; }
	inline OrbitU5BU5D_t6E72D519BC4799C53639700DA84A0B5D9A8843C7** get_address_of_m_CachedOrbits_44() { return &___m_CachedOrbits_44; }
	inline void set_m_CachedOrbits_44(OrbitU5BU5D_t6E72D519BC4799C53639700DA84A0B5D9A8843C7* value)
	{
		___m_CachedOrbits_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedOrbits_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedTension_45() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_CachedTension_45)); }
	inline float get_m_CachedTension_45() const { return ___m_CachedTension_45; }
	inline float* get_address_of_m_CachedTension_45() { return &___m_CachedTension_45; }
	inline void set_m_CachedTension_45(float value)
	{
		___m_CachedTension_45 = value;
	}

	inline static int32_t get_offset_of_m_CachedKnots_46() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_CachedKnots_46)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_m_CachedKnots_46() const { return ___m_CachedKnots_46; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_m_CachedKnots_46() { return &___m_CachedKnots_46; }
	inline void set_m_CachedKnots_46(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___m_CachedKnots_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedKnots_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedCtrl1_47() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_CachedCtrl1_47)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_m_CachedCtrl1_47() const { return ___m_CachedCtrl1_47; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_m_CachedCtrl1_47() { return &___m_CachedCtrl1_47; }
	inline void set_m_CachedCtrl1_47(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___m_CachedCtrl1_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedCtrl1_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedCtrl2_48() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_CachedCtrl2_48)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_m_CachedCtrl2_48() const { return ___m_CachedCtrl2_48; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_m_CachedCtrl2_48() { return &___m_CachedCtrl2_48; }
	inline void set_m_CachedCtrl2_48(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___m_CachedCtrl2_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedCtrl2_48), (void*)value);
	}
};

struct CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F_StaticFields
{
public:
	// Cinemachine.CinemachineFreeLook/CreateRigDelegate Cinemachine.CinemachineFreeLook::CreateRigOverride
	CreateRigDelegate_t7FF9E13258FAF45CD7A591B792B1171596A16270 * ___CreateRigOverride_41;
	// Cinemachine.CinemachineFreeLook/DestroyRigDelegate Cinemachine.CinemachineFreeLook::DestroyRigOverride
	DestroyRigDelegate_tEC6C3F9493E6C7AF161C5BE580A398B3C333ED49 * ___DestroyRigOverride_42;

public:
	inline static int32_t get_offset_of_CreateRigOverride_41() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F_StaticFields, ___CreateRigOverride_41)); }
	inline CreateRigDelegate_t7FF9E13258FAF45CD7A591B792B1171596A16270 * get_CreateRigOverride_41() const { return ___CreateRigOverride_41; }
	inline CreateRigDelegate_t7FF9E13258FAF45CD7A591B792B1171596A16270 ** get_address_of_CreateRigOverride_41() { return &___CreateRigOverride_41; }
	inline void set_CreateRigOverride_41(CreateRigDelegate_t7FF9E13258FAF45CD7A591B792B1171596A16270 * value)
	{
		___CreateRigOverride_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CreateRigOverride_41), (void*)value);
	}

	inline static int32_t get_offset_of_DestroyRigOverride_42() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F_StaticFields, ___DestroyRigOverride_42)); }
	inline DestroyRigDelegate_tEC6C3F9493E6C7AF161C5BE580A398B3C333ED49 * get_DestroyRigOverride_42() const { return ___DestroyRigOverride_42; }
	inline DestroyRigDelegate_tEC6C3F9493E6C7AF161C5BE580A398B3C333ED49 ** get_address_of_DestroyRigOverride_42() { return &___DestroyRigOverride_42; }
	inline void set_DestroyRigOverride_42(DestroyRigDelegate_tEC6C3F9493E6C7AF161C5BE580A398B3C333ED49 * value)
	{
		___DestroyRigOverride_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DestroyRigOverride_42), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Cinemachine.CinemachineFreeLook/Orbit[]
struct OrbitU5BU5D_t6E72D519BC4799C53639700DA84A0B5D9A8843C7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Orbit_tA547D596379FBC5FD86CCCFEC4DF3BD8BA2C3AF5  m_Items[1];

public:
	inline Orbit_tA547D596379FBC5FD86CCCFEC4DF3BD8BA2C3AF5  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Orbit_tA547D596379FBC5FD86CCCFEC4DF3BD8BA2C3AF5 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Orbit_tA547D596379FBC5FD86CCCFEC4DF3BD8BA2C3AF5  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Orbit_tA547D596379FBC5FD86CCCFEC4DF3BD8BA2C3AF5  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Orbit_tA547D596379FBC5FD86CCCFEC4DF3BD8BA2C3AF5 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Orbit_tA547D596379FBC5FD86CCCFEC4DF3BD8BA2C3AF5  value)
	{
		m_Items[index] = value;
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Unity.LEGO.Game.EventManager::AddListener<System.Object>(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_AddListener_TisRuntimeObject_mE17484DB3F4E9AC005A5F672E4804ED634A810C1_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___evt0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// System.Void Unity.LEGO.Game.EventManager::RemoveListener<System.Object>(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_RemoveListener_TisRuntimeObject_mB1B351F72191E0EA3902CA87E033956BFFA8A477_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___evt0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared (Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Exists(System.Predicate`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Exists_mCD79CCDB5FF533F73A031B475BA7C5D2278B0AAA_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___match0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m71AD9A0E45BC55BFE609CB88752829A7C810E68D_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m9BDED5248054C2E86ECBA732FE7BCDAA32D0A118_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t0C2A6470B0D42D7A87AADBEADCF3DD1DDDD08956 * Dictionary_2_get_Keys_mED78E715F472BE3A6BBF005B8C738B3D450110C1_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_mA9EF21764AC04923FECB24BAA6C2F96CEB1606D1_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_gshared (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC9E7381F0B0B82E0320B2523835DAFC9CB3D1C8D_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Action`1<Unity.LEGO.Game.GameEvent>>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m66317D3EA0305133E7D9C19B3378500019B1BC89 (Dictionary_2_t103ED77648449F031458E693029C7EF3B2369319 * __this, Type_t * ___key0, Action_1_t97CCC13273AF169BED7E08606FEE9BA41865B820 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t103ED77648449F031458E693029C7EF3B2369319 *, Type_t *, Action_1_t97CCC13273AF169BED7E08606FEE9BA41865B820 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Action`1<Unity.LEGO.Game.GameEvent>::Invoke(!0)
inline void Action_1_Invoke_m054D17824B387CACCE0E47A56F1C8D310DFED9D2 (Action_1_t97CCC13273AF169BED7E08606FEE9BA41865B820 * __this, GameEvent_tE3BAFD6F56BD598391D8F47ACF51FC19AB9B259D * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t97CCC13273AF169BED7E08606FEE9BA41865B820 *, GameEvent_tE3BAFD6F56BD598391D8F47ACF51FC19AB9B259D *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Action`1<Unity.LEGO.Game.GameEvent>>::Clear()
inline void Dictionary_2_Clear_mBC4CB18DD10F5D9143B72C5EE37475DCBC9C5418 (Dictionary_2_t103ED77648449F031458E693029C7EF3B2369319 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t103ED77648449F031458E693029C7EF3B2369319 *, const RuntimeMethod*))Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Delegate,System.Action`1<Unity.LEGO.Game.GameEvent>>::Clear()
inline void Dictionary_2_Clear_m59908740975E85C9E0FF4AF8E0EE0BF38A0DBB30 (Dictionary_2_t55A8FEADE4FF56276AE151AAEE1BE1937C93A6CE * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t55A8FEADE4FF56276AE151AAEE1BE1937C93A6CE *, const RuntimeMethod*))Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Action`1<Unity.LEGO.Game.GameEvent>>::.ctor()
inline void Dictionary_2__ctor_m30860BED51793354597283B4A14A0B602D41CA20 (Dictionary_2_t103ED77648449F031458E693029C7EF3B2369319 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t103ED77648449F031458E693029C7EF3B2369319 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Delegate,System.Action`1<Unity.LEGO.Game.GameEvent>>::.ctor()
inline void Dictionary_2__ctor_m8F161F997B46A0359B6C051290F5B844B9C5ED37 (Dictionary_2_t55A8FEADE4FF56276AE151AAEE1BE1937C93A6CE * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t55A8FEADE4FF56276AE151AAEE1BE1937C93A6CE *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void Unity.LEGO.Game.OptionsMenuEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionsMenuEvent__ctor_m2818433DB902E37C5171D173AD5E7ADE51A6B0D5 (OptionsMenuEvent_tBC2BD78E9B097E2D591568D86C4FD1656DB6FDC6 * __this, const RuntimeMethod* method);
// System.Void Unity.LEGO.Game.ObjectiveAdded::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectiveAdded__ctor_mAB50E2DA869F9767B9C5E172E359BE165881B3E5 (ObjectiveAdded_tD7245D8C50A24195DA915EF344B32173E897B0F6 * __this, const RuntimeMethod* method);
// System.Void Unity.LEGO.Game.VariableAdded::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableAdded__ctor_m4673CCD65BAE530DAFFA78BCD1A034FD4B97D236 (VariableAdded_t8D9FBFC315B1B519C5D85D6A37F63F18B47291FA * __this, const RuntimeMethod* method);
// System.Void Unity.LEGO.Game.GameOverEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverEvent__ctor_m4105B0040BAF146DF4BD6671477B3C4FFF07B68D (GameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409 * __this, const RuntimeMethod* method);
// System.Void Unity.LEGO.Game.LookSensitivityUpdateEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookSensitivityUpdateEvent__ctor_mB00C06D856D6B502ACB30A8B0EBD4049DC4CABFD (LookSensitivityUpdateEvent_tB1DCB5FE9FE2719AFB09DAE1B4BF24040180C709 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<Unity.LEGO.Game.GameOverEvent>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mB413F2F8DB13CA49035B93AA2BC71FAB585CE68C (Action_1_t020682A1E00DC8EE4C5FD052702748C3A7E17AB4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t020682A1E00DC8EE4C5FD052702748C3A7E17AB4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.LEGO.Game.EventManager::AddListener<Unity.LEGO.Game.GameOverEvent>(System.Action`1<T>)
inline void EventManager_AddListener_TisGameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409_m01DF69E53ADAE8B1E381EE842A45ADF086A406EF (Action_1_t020682A1E00DC8EE4C5FD052702748C3A7E17AB4 * ___evt0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t020682A1E00DC8EE4C5FD052702748C3A7E17AB4 *, const RuntimeMethod*))EventManager_AddListener_TisRuntimeObject_mE17484DB3F4E9AC005A5F672E4804ED634A810C1_gshared)(___evt0, method);
}
// !!0 UnityEngine.Object::FindObjectOfType<Cinemachine.CinemachineFreeLook>()
inline CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * Object_FindObjectOfType_TisCinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F_m73AAF8C5A398249506E426A33B5D7B9BAEADE25A (const RuntimeMethod* method)
{
	return ((  CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217 (int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_depthTextureMode_m2D4631800947438BE9A7697778E2CB0E38083CF1 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Collections.IEnumerator Unity.LEGO.Game.GameFlowManager::StartGameLockLookRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameFlowManager_StartGameLockLookRotation_m99BA477709A0571EF1D592BA08B01162F4E34506 (GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void Unity.LEGO.Game.VariableManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_Reset_m707A1FBA602626008703E8BE834A84E04CEF08A1 (const RuntimeMethod* method);
// System.Void Unity.LEGO.Game.GameFlowManager/<StartGameLockLookRotation>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGameLockLookRotationU3Ed__20__ctor_mE05350819EEF351527BA49485EABB6E9280832F5 (U3CStartGameLockLookRotationU3Ed__20_tB001861D74C22D74557045D8B0B1834ACF2194B4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Boolean Unity.LEGO.Game.GameFlowManager::get_GameIsEnding()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameFlowManager_get_GameIsEnding_m2AF7AB4861E9768FA13A49CC67F45902D4DA9679_inline (GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void Unity.LEGO.Game.GameFlowManager::set_PreviousScene(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameFlowManager_set_PreviousScene_m2EF64D7CBEDBE34B5045C2EC345E9646FB7CCDC2_inline (String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void Unity.LEGO.Game.GameFlowManager::set_GameIsEnding(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameFlowManager_set_GameIsEnding_mAD7A0D7A1E09612CAB5DA73916D731607171BE43_inline (GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * __this, bool ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator Unity.LEGO.Game.GameFlowManager::ZoomInOnPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameFlowManager_ZoomInOnPlayer_mB897F4E3CB0834FEB414B9E1DB33B28E0CD273A7 (GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * __this, const RuntimeMethod* method);
// System.Void Unity.LEGO.Game.EventManager::RemoveListener<Unity.LEGO.Game.GameOverEvent>(System.Action`1<T>)
inline void EventManager_RemoveListener_TisGameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409_m92E1FDFDB27705671B45C78544224020FEB482FA (Action_1_t020682A1E00DC8EE4C5FD052702748C3A7E17AB4 * ___evt0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t020682A1E00DC8EE4C5FD052702748C3A7E17AB4 *, const RuntimeMethod*))EventManager_RemoveListener_TisRuntimeObject_mB1B351F72191E0EA3902CA87E033956BFFA8A477_gshared)(___evt0, method);
}
// System.Void Unity.LEGO.Game.GameFlowManager/<ZoomInOnPlayer>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CZoomInOnPlayerU3Ed__24__ctor_mE9418490899C1F6342941AD548B15BD69CFCEA73 (U3CZoomInOnPlayerU3Ed__24_t934444AB2415126D28E6C233B30EA61E09C2E475 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void Unity.LEGO.Game.GameEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvent__ctor_mA0257F5D00263FFBF67EF3F46EAE26BDE363BD99 (GameEvent_tE3BAFD6F56BD598391D8F47ACF51FC19AB9B259D * __this, const RuntimeMethod* method);
// System.Void System.Action`1<Unity.LEGO.Game.LookSensitivityUpdateEvent>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mE58C2C12FE90F562EDB8AD0E895A2C75D23ECADD (Action_1_t7A4D2A712BE201E21551B5B23AF8BBAFD72B6C28 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7A4D2A712BE201E21551B5B23AF8BBAFD72B6C28 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.LEGO.Game.EventManager::AddListener<Unity.LEGO.Game.LookSensitivityUpdateEvent>(System.Action`1<T>)
inline void EventManager_AddListener_TisLookSensitivityUpdateEvent_tB1DCB5FE9FE2719AFB09DAE1B4BF24040180C709_mF1045ADC181A3837C3712F8DE071A236AE878B63 (Action_1_t7A4D2A712BE201E21551B5B23AF8BBAFD72B6C28 * ___evt0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7A4D2A712BE201E21551B5B23AF8BBAFD72B6C28 *, const RuntimeMethod*))EventManager_AddListener_TisRuntimeObject_mE17484DB3F4E9AC005A5F672E4804ED634A810C1_gshared)(___evt0, method);
}
// System.Void Unity.LEGO.Game.EventManager::RemoveListener<Unity.LEGO.Game.LookSensitivityUpdateEvent>(System.Action`1<T>)
inline void EventManager_RemoveListener_TisLookSensitivityUpdateEvent_tB1DCB5FE9FE2719AFB09DAE1B4BF24040180C709_m54B8B1C236C594640B7DFCF891C00A227CA290C8 (Action_1_t7A4D2A712BE201E21551B5B23AF8BBAFD72B6C28 * ___evt0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7A4D2A712BE201E21551B5B23AF8BBAFD72B6C28 *, const RuntimeMethod*))EventManager_RemoveListener_TisRuntimeObject_mB1B351F72191E0EA3902CA87E033956BFFA8A477_gshared)(___evt0, method);
}
// System.Void System.Collections.Generic.List`1<Unity.LEGO.Game.IObjective>::.ctor()
inline void List_1__ctor_m385FAB9EB736DB3E8120B1ED61D14C1F8A7AAFD9 (List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Action`1<Unity.LEGO.Game.ObjectiveAdded>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mEC55D7DC0EB31EF137E72CBDF8815D127B47366C (Action_1_tF1836A38C56D3A758B176D27E26A7CC766798CDE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF1836A38C56D3A758B176D27E26A7CC766798CDE *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.LEGO.Game.EventManager::AddListener<Unity.LEGO.Game.ObjectiveAdded>(System.Action`1<T>)
inline void EventManager_AddListener_TisObjectiveAdded_tD7245D8C50A24195DA915EF344B32173E897B0F6_mBEE49DF82C76D0393B1C161B9BA64BF59603BB8C (Action_1_tF1836A38C56D3A758B176D27E26A7CC766798CDE * ___evt0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF1836A38C56D3A758B176D27E26A7CC766798CDE *, const RuntimeMethod*))EventManager_AddListener_TisRuntimeObject_mE17484DB3F4E9AC005A5F672E4804ED634A810C1_gshared)(___evt0, method);
}
// System.Void System.Collections.Generic.List`1<Unity.LEGO.Game.IObjective>::Add(!0)
inline void List_1_Add_mA456C29049CA8C04BAEFBA20CFBAFB05F464FAB6 (List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Action`1<Unity.LEGO.Game.IObjective>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m586CF6A750EABC6C4B2A36FEA47456F3531A8835 (Action_1_t8FE4FE34AA2FA18BE53A649F50F63F8CB8430800 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t8FE4FE34AA2FA18BE53A649F50F63F8CB8430800 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Void Unity.LEGO.Game.ObjectiveManager::UpdateGameStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectiveManager_UpdateGameStatus_m458A84E1483F86F8DB5B748E152B2760C236A880 (ObjectiveManager_tD5EE4E2902DE8B17FE395EAF0B2BBF7422FF2439 * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<Unity.LEGO.Game.IObjective>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m803C88CADB336B04A7A20620C93FABA326AE0FBF (Predicate_1_t38F538874F744DB7A65CA0DF6ECDF1CCBAE673B3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t38F538874F744DB7A65CA0DF6ECDF1CCBAE673B3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Collections.Generic.List`1<Unity.LEGO.Game.IObjective>::Exists(System.Predicate`1<!0>)
inline bool List_1_Exists_m174FABD94A024102A75BB5A60A52B4EA203D0F9D (List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559 * __this, Predicate_1_t38F538874F744DB7A65CA0DF6ECDF1CCBAE673B3 * ___match0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559 *, Predicate_1_t38F538874F744DB7A65CA0DF6ECDF1CCBAE673B3 *, const RuntimeMethod*))List_1_Exists_mCD79CCDB5FF533F73A031B475BA7C5D2278B0AAA_gshared)(__this, ___match0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Unity.LEGO.Game.IObjective>::GetEnumerator()
inline Enumerator_t8F205CC2063D3C85F382AE817687C856720CC1B3  List_1_GetEnumerator_m86BAA941B6D6E1ADE36E0C6F168294F4671A437F (List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8F205CC2063D3C85F382AE817687C856720CC1B3  (*) (List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Unity.LEGO.Game.IObjective>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mCF0C503C9C0F575AB29BDA6D6FAB259BCD86E771_inline (Enumerator_t8F205CC2063D3C85F382AE817687C856720CC1B3 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t8F205CC2063D3C85F382AE817687C856720CC1B3 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.LEGO.Game.IObjective>::MoveNext()
inline bool Enumerator_MoveNext_mF604425E49804D3273548CDE1A4A3FFD406BC54A (Enumerator_t8F205CC2063D3C85F382AE817687C856720CC1B3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8F205CC2063D3C85F382AE817687C856720CC1B3 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.LEGO.Game.IObjective>::Dispose()
inline void Enumerator_Dispose_m74A38200C167714F840592A10866F6FAFCB0E7F4 (Enumerator_t8F205CC2063D3C85F382AE817687C856720CC1B3 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8F205CC2063D3C85F382AE817687C856720CC1B3 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void Unity.LEGO.Game.EventManager::Broadcast(Unity.LEGO.Game.GameEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_Broadcast_m26E2E660FCCB7D0B37FDB53B9F34F7FED4D01452 (GameEvent_tE3BAFD6F56BD598391D8F47ACF51FC19AB9B259D * ___evt0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void Unity.LEGO.Game.EventManager::RemoveListener<Unity.LEGO.Game.ObjectiveAdded>(System.Action`1<T>)
inline void EventManager_RemoveListener_TisObjectiveAdded_tD7245D8C50A24195DA915EF344B32173E897B0F6_m83A35A8184410219014DC125042CB3FAEFFB39C8 (Action_1_tF1836A38C56D3A758B176D27E26A7CC766798CDE * ___evt0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF1836A38C56D3A758B176D27E26A7CC766798CDE *, const RuntimeMethod*))EventManager_RemoveListener_TisRuntimeObject_mB1B351F72191E0EA3902CA87E033956BFFA8A477_gshared)(___evt0, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.LEGO.Game.Variable,System.Int32>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m9B23B2593A13B2DD234DAD83C5B155B52B9D34BA (Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932 * __this, Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932 *, Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E *, const RuntimeMethod*))Dictionary_2_ContainsKey_m71AD9A0E45BC55BFE609CB88752829A7C810E68D_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Unity.LEGO.Game.Variable,System.Int32>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m06DD5F15A490A248D00F940E922DB545DCBAB113 (Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932 * __this, Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932 *, Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E *, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m9BDED5248054C2E86ECBA732FE7BCDAA32D0A118_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<Unity.LEGO.Game.Variable,System.Int32>::get_Keys()
inline KeyCollection_t60CF0C6C759CBD61114D1590C4AF532F499BB1E6 * Dictionary_2_get_Keys_m6B36271CFA319DBC5D3F70F0653A3DE311DD5EE7 (Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932 * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t60CF0C6C759CBD61114D1590C4AF532F499BB1E6 * (*) (Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932 *, const RuntimeMethod*))Dictionary_2_get_Keys_mED78E715F472BE3A6BBF005B8C738B3D450110C1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.LEGO.Game.Variable>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_mBAA16B260E33505407B473D7FA673996B0923DBC (List_1_t7B50DCA27E54364BC506813348A65104C8193FB1 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7B50DCA27E54364BC506813348A65104C8193FB1 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Unity.LEGO.Game.Variable>::GetEnumerator()
inline Enumerator_tD690FE672C96284FD994C4FD0BCC0189AB8ECDAB  List_1_GetEnumerator_m9CF6322BE417744E7F68E7C308E7E0305E75E090 (List_1_t7B50DCA27E54364BC506813348A65104C8193FB1 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD690FE672C96284FD994C4FD0BCC0189AB8ECDAB  (*) (List_1_t7B50DCA27E54364BC506813348A65104C8193FB1 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Unity.LEGO.Game.Variable>::get_Current()
inline Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * Enumerator_get_Current_mC2AAA6897C301922551CD0AA6FC154E257508F5A_inline (Enumerator_tD690FE672C96284FD994C4FD0BCC0189AB8ECDAB * __this, const RuntimeMethod* method)
{
	return ((  Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * (*) (Enumerator_tD690FE672C96284FD994C4FD0BCC0189AB8ECDAB *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.LEGO.Game.Variable>::MoveNext()
inline bool Enumerator_MoveNext_m67B7316DDE38CC0306685DA6E7C744FD35D40D6C (Enumerator_tD690FE672C96284FD994C4FD0BCC0189AB8ECDAB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD690FE672C96284FD994C4FD0BCC0189AB8ECDAB *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.LEGO.Game.Variable>::Dispose()
inline void Enumerator_Dispose_mA73E310CDE3403CB622B5163384E26C3969784AC (Enumerator_tD690FE672C96284FD994C4FD0BCC0189AB8ECDAB * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD690FE672C96284FD994C4FD0BCC0189AB8ECDAB *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2<Unity.LEGO.Game.Variable,System.Int32>::get_Item(!0)
inline int32_t Dictionary_2_get_Item_mF3741C026200F93B05F614E866D665AFFD58E76E (Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932 * __this, Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932 *, Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E *, const RuntimeMethod*))Dictionary_2_get_Item_mA9EF21764AC04923FECB24BAA6C2F96CEB1606D1_gshared)(__this, ___key0, method);
}
// System.Void System.Action`1<System.Int32>::Invoke(!0)
inline void Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301 (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *, int32_t, const RuntimeMethod*))Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_gshared)(__this, ___obj0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Unity.LEGO.Game.Variable,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mD0FEF32558495B35F71D9022666C3EC959509BC7 (Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932 *, const RuntimeMethod*))Dictionary_2__ctor_mC9E7381F0B0B82E0320B2523835DAFC9CB3D1C8D_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void Unity.LEGO.Game.ObjectiveManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB095F55062D2C423F0D4D6B365A4149B66751A9A (U3CU3Ec_t24FA5B43B7BC487E38C841E176CAD482D559CA6C * __this, const RuntimeMethod* method);
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
// System.Void Unity.LEGO.Game.Condition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Condition__ctor_m1BBAD14551665B420CFA7974BCCB8D8BF167D559 (Condition_t9088726E1F4F069A22419DB7E6C8DA7EC1D2AB5A * __this, const RuntimeMethod* method)
{
	{
		// public int Value = 1;
		__this->set_Value_2(1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.LEGO.Game.EventManager::Broadcast(Unity.LEGO.Game.GameEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_Broadcast_m26E2E660FCCB7D0B37FDB53B9F34F7FED4D01452 (GameEvent_tE3BAFD6F56BD598391D8F47ACF51FC19AB9B259D * ___evt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m054D17824B387CACCE0E47A56F1C8D310DFED9D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m66317D3EA0305133E7D9C19B3378500019B1BC89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t97CCC13273AF169BED7E08606FEE9BA41865B820 * V_0 = NULL;
	{
		// if (s_Events.TryGetValue(evt.GetType(), out var action))
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var);
		Dictionary_2_t103ED77648449F031458E693029C7EF3B2369319 * L_0 = ((EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var))->get_s_Events_0();
		GameEvent_tE3BAFD6F56BD598391D8F47ACF51FC19AB9B259D * L_1 = ___evt0;
		Type_t * L_2;
		L_2 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m66317D3EA0305133E7D9C19B3378500019B1BC89(L_0, L_2, (Action_1_t97CCC13273AF169BED7E08606FEE9BA41865B820 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m66317D3EA0305133E7D9C19B3378500019B1BC89_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// action.Invoke(evt);
		Action_1_t97CCC13273AF169BED7E08606FEE9BA41865B820 * L_4 = V_0;
		GameEvent_tE3BAFD6F56BD598391D8F47ACF51FC19AB9B259D * L_5 = ___evt0;
		Action_1_Invoke_m054D17824B387CACCE0E47A56F1C8D310DFED9D2(L_4, L_5, /*hidden argument*/Action_1_Invoke_m054D17824B387CACCE0E47A56F1C8D310DFED9D2_RuntimeMethod_var);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void Unity.LEGO.Game.EventManager::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_Clear_mDFDF1520626873FC9E27DFA712BA63EF569F4274 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m59908740975E85C9E0FF4AF8E0EE0BF38A0DBB30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mBC4CB18DD10F5D9143B72C5EE37475DCBC9C5418_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Events.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var);
		Dictionary_2_t103ED77648449F031458E693029C7EF3B2369319 * L_0 = ((EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var))->get_s_Events_0();
		Dictionary_2_Clear_mBC4CB18DD10F5D9143B72C5EE37475DCBC9C5418(L_0, /*hidden argument*/Dictionary_2_Clear_mBC4CB18DD10F5D9143B72C5EE37475DCBC9C5418_RuntimeMethod_var);
		// s_EventLookups.Clear();
		Dictionary_2_t55A8FEADE4FF56276AE151AAEE1BE1937C93A6CE * L_1 = ((EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var))->get_s_EventLookups_1();
		Dictionary_2_Clear_m59908740975E85C9E0FF4AF8E0EE0BF38A0DBB30(L_1, /*hidden argument*/Dictionary_2_Clear_m59908740975E85C9E0FF4AF8E0EE0BF38A0DBB30_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.LEGO.Game.EventManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager__cctor_mA3B31C833DF355D9D8E8596EC716494FBE85DC44 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m30860BED51793354597283B4A14A0B602D41CA20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m8F161F997B46A0359B6C051290F5B844B9C5ED37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t103ED77648449F031458E693029C7EF3B2369319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t55A8FEADE4FF56276AE151AAEE1BE1937C93A6CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Dictionary<Type, Action<GameEvent>> s_Events = new Dictionary<Type, Action<GameEvent>>();
		Dictionary_2_t103ED77648449F031458E693029C7EF3B2369319 * L_0 = (Dictionary_2_t103ED77648449F031458E693029C7EF3B2369319 *)il2cpp_codegen_object_new(Dictionary_2_t103ED77648449F031458E693029C7EF3B2369319_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m30860BED51793354597283B4A14A0B602D41CA20(L_0, /*hidden argument*/Dictionary_2__ctor_m30860BED51793354597283B4A14A0B602D41CA20_RuntimeMethod_var);
		((EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var))->set_s_Events_0(L_0);
		// static readonly Dictionary<Delegate, Action<GameEvent>> s_EventLookups = new Dictionary<Delegate, Action<GameEvent>>();
		Dictionary_2_t55A8FEADE4FF56276AE151AAEE1BE1937C93A6CE * L_1 = (Dictionary_2_t55A8FEADE4FF56276AE151AAEE1BE1937C93A6CE *)il2cpp_codegen_object_new(Dictionary_2_t55A8FEADE4FF56276AE151AAEE1BE1937C93A6CE_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8F161F997B46A0359B6C051290F5B844B9C5ED37(L_1, /*hidden argument*/Dictionary_2__ctor_m8F161F997B46A0359B6C051290F5B844B9C5ED37_RuntimeMethod_var);
		((EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var))->set_s_EventLookups_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.LEGO.Game.Events::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Events__cctor_m19A06D50594B81426D4D99E19C8EC524F6B7F107 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LookSensitivityUpdateEvent_tB1DCB5FE9FE2719AFB09DAE1B4BF24040180C709_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectiveAdded_tD7245D8C50A24195DA915EF344B32173E897B0F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionsMenuEvent_tBC2BD78E9B097E2D591568D86C4FD1656DB6FDC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableAdded_t8D9FBFC315B1B519C5D85D6A37F63F18B47291FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static OptionsMenuEvent OptionsMenuEvent = new OptionsMenuEvent();
		OptionsMenuEvent_tBC2BD78E9B097E2D591568D86C4FD1656DB6FDC6 * L_0 = (OptionsMenuEvent_tBC2BD78E9B097E2D591568D86C4FD1656DB6FDC6 *)il2cpp_codegen_object_new(OptionsMenuEvent_tBC2BD78E9B097E2D591568D86C4FD1656DB6FDC6_il2cpp_TypeInfo_var);
		OptionsMenuEvent__ctor_m2818433DB902E37C5171D173AD5E7ADE51A6B0D5(L_0, /*hidden argument*/NULL);
		((Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_StaticFields*)il2cpp_codegen_static_fields_for(Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_il2cpp_TypeInfo_var))->set_OptionsMenuEvent_0(L_0);
		// public static ObjectiveAdded ObjectiveAddedEvent = new ObjectiveAdded();
		ObjectiveAdded_tD7245D8C50A24195DA915EF344B32173E897B0F6 * L_1 = (ObjectiveAdded_tD7245D8C50A24195DA915EF344B32173E897B0F6 *)il2cpp_codegen_object_new(ObjectiveAdded_tD7245D8C50A24195DA915EF344B32173E897B0F6_il2cpp_TypeInfo_var);
		ObjectiveAdded__ctor_mAB50E2DA869F9767B9C5E172E359BE165881B3E5(L_1, /*hidden argument*/NULL);
		((Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_StaticFields*)il2cpp_codegen_static_fields_for(Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_il2cpp_TypeInfo_var))->set_ObjectiveAddedEvent_1(L_1);
		// public static VariableAdded VariableAddedEvent = new VariableAdded();
		VariableAdded_t8D9FBFC315B1B519C5D85D6A37F63F18B47291FA * L_2 = (VariableAdded_t8D9FBFC315B1B519C5D85D6A37F63F18B47291FA *)il2cpp_codegen_object_new(VariableAdded_t8D9FBFC315B1B519C5D85D6A37F63F18B47291FA_il2cpp_TypeInfo_var);
		VariableAdded__ctor_m4673CCD65BAE530DAFFA78BCD1A034FD4B97D236(L_2, /*hidden argument*/NULL);
		((Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_StaticFields*)il2cpp_codegen_static_fields_for(Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_il2cpp_TypeInfo_var))->set_VariableAddedEvent_2(L_2);
		// public static GameOverEvent GameOverEvent = new GameOverEvent();
		GameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409 * L_3 = (GameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409 *)il2cpp_codegen_object_new(GameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409_il2cpp_TypeInfo_var);
		GameOverEvent__ctor_m4105B0040BAF146DF4BD6671477B3C4FFF07B68D(L_3, /*hidden argument*/NULL);
		((Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_StaticFields*)il2cpp_codegen_static_fields_for(Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_il2cpp_TypeInfo_var))->set_GameOverEvent_3(L_3);
		// public static LookSensitivityUpdateEvent LookSensitivityUpdateEvent = new LookSensitivityUpdateEvent();
		LookSensitivityUpdateEvent_tB1DCB5FE9FE2719AFB09DAE1B4BF24040180C709 * L_4 = (LookSensitivityUpdateEvent_tB1DCB5FE9FE2719AFB09DAE1B4BF24040180C709 *)il2cpp_codegen_object_new(LookSensitivityUpdateEvent_tB1DCB5FE9FE2719AFB09DAE1B4BF24040180C709_il2cpp_TypeInfo_var);
		LookSensitivityUpdateEvent__ctor_mB00C06D856D6B502ACB30A8B0EBD4049DC4CABFD(L_4, /*hidden argument*/NULL);
		((Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_StaticFields*)il2cpp_codegen_static_fields_for(Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_il2cpp_TypeInfo_var))->set_LookSensitivityUpdateEvent_4(L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.LEGO.Game.GameEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvent__ctor_mA0257F5D00263FFBF67EF3F46EAE26BDE363BD99 (GameEvent_tE3BAFD6F56BD598391D8F47ACF51FC19AB9B259D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.LEGO.Game.GameFlowManager::get_PreviousScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameFlowManager_get_PreviousScene_mA49F853212C337B9C8AB0F1153EC6CA77049DCFC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string PreviousScene { get; private set; }
		String_t* L_0 = ((GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548_StaticFields*)il2cpp_codegen_static_fields_for(GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548_il2cpp_TypeInfo_var))->get_U3CPreviousSceneU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Unity.LEGO.Game.GameFlowManager::set_PreviousScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameFlowManager_set_PreviousScene_m2EF64D7CBEDBE34B5045C2EC345E9646FB7CCDC2 (String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string PreviousScene { get; private set; }
		String_t* L_0 = ___value0;
		((GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548_StaticFields*)il2cpp_codegen_static_fields_for(GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548_il2cpp_TypeInfo_var))->set_U3CPreviousSceneU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Boolean Unity.LEGO.Game.GameFlowManager::get_GameIsEnding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameFlowManager_get_GameIsEnding_m2AF7AB4861E9768FA13A49CC67F45902D4DA9679 (GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * __this, const RuntimeMethod* method)
{
	{
		// public bool GameIsEnding { get; private set; }
		bool L_0 = __this->get_U3CGameIsEndingU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void Unity.LEGO.Game.GameFlowManager::set_GameIsEnding(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameFlowManager_set_GameIsEnding_mAD7A0D7A1E09612CAB5DA73916D731607171BE43 (GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool GameIsEnding { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CGameIsEndingU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Void Unity.LEGO.Game.GameFlowManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameFlowManager_Awake_mC91B3617DC899AD93F4026F4AB5D46B52C2374C3 (GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mB413F2F8DB13CA49035B93AA2BC71FAB585CE68C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t020682A1E00DC8EE4C5FD052702748C3A7E17AB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_AddListener_TisGameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409_m01DF69E53ADAE8B1E381EE842A45ADF086A406EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameFlowManager_OnGameOver_m765BA06DE2BCB9C85BDCDAFA009A533956336042_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisCinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F_m73AAF8C5A398249506E426A33B5D7B9BAEADE25A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventManager.AddListener<GameOverEvent>(OnGameOver);
		Action_1_t020682A1E00DC8EE4C5FD052702748C3A7E17AB4 * L_0 = (Action_1_t020682A1E00DC8EE4C5FD052702748C3A7E17AB4 *)il2cpp_codegen_object_new(Action_1_t020682A1E00DC8EE4C5FD052702748C3A7E17AB4_il2cpp_TypeInfo_var);
		Action_1__ctor_mB413F2F8DB13CA49035B93AA2BC71FAB585CE68C(L_0, __this, (intptr_t)((intptr_t)GameFlowManager_OnGameOver_m765BA06DE2BCB9C85BDCDAFA009A533956336042_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mB413F2F8DB13CA49035B93AA2BC71FAB585CE68C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var);
		EventManager_AddListener_TisGameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409_m01DF69E53ADAE8B1E381EE842A45ADF086A406EF(L_0, /*hidden argument*/EventManager_AddListener_TisGameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409_m01DF69E53ADAE8B1E381EE842A45ADF086A406EF_RuntimeMethod_var);
		// m_FreeLookCamera = FindObjectOfType<CinemachineFreeLook>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * L_1;
		L_1 = Object_FindObjectOfType_TisCinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F_m73AAF8C5A398249506E426A33B5D7B9BAEADE25A(/*hidden argument*/Object_FindObjectOfType_TisCinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F_m73AAF8C5A398249506E426A33B5D7B9BAEADE25A_RuntimeMethod_var);
		__this->set_m_FreeLookCamera_13(L_1);
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217(1, /*hidden argument*/NULL);
		// Camera.main.depthTextureMode = DepthTextureMode.Depth;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Camera_set_depthTextureMode_m2D4631800947438BE9A7697778E2CB0E38083CF1(L_2, 1, /*hidden argument*/NULL);
		// if (m_FreeLookCamera)
		CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * L_3 = __this->get_m_FreeLookCamera_13();
		bool L_4;
		L_4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0090;
		}
	}
	{
		// m_ControllerAxisXName = m_FreeLookCamera.m_XAxis.m_InputAxisName;
		CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * L_5 = __this->get_m_FreeLookCamera_13();
		AxisState_t376D19829A676B98933979F42845F6476071DDE8 * L_6 = L_5->get_address_of_m_XAxis_27();
		String_t* L_7 = L_6->get_m_InputAxisName_5();
		__this->set_m_ControllerAxisXName_14(L_7);
		// m_ControllerAxisYName = m_FreeLookCamera.m_YAxis.m_InputAxisName;
		CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * L_8 = __this->get_m_FreeLookCamera_13();
		AxisState_t376D19829A676B98933979F42845F6476071DDE8 * L_9 = L_8->get_address_of_m_YAxis_25();
		String_t* L_10 = L_9->get_m_InputAxisName_5();
		__this->set_m_ControllerAxisYName_15(L_10);
		// m_FreeLookCamera.m_XAxis.m_InputAxisName = "";
		CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * L_11 = __this->get_m_FreeLookCamera_13();
		AxisState_t376D19829A676B98933979F42845F6476071DDE8 * L_12 = L_11->get_address_of_m_XAxis_27();
		L_12->set_m_InputAxisName_5(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// m_FreeLookCamera.m_YAxis.m_InputAxisName = "";
		CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * L_13 = __this->get_m_FreeLookCamera_13();
		AxisState_t376D19829A676B98933979F42845F6476071DDE8 * L_14 = L_13->get_address_of_m_YAxis_25();
		L_14->set_m_InputAxisName_5(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void Unity.LEGO.Game.GameFlowManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameFlowManager_Start_m5D6D6907FE1E7532CDCE73C85120C982B7E8FAE6 (GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(StartGameLockLookRotation());
		RuntimeObject* L_0;
		L_0 = GameFlowManager_StartGameLockLookRotation_m99BA477709A0571EF1D592BA08B01162F4E34506(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// VariableManager.Reset();
		IL2CPP_RUNTIME_CLASS_INIT(VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_il2cpp_TypeInfo_var);
		VariableManager_Reset_m707A1FBA602626008703E8BE834A84E04CEF08A1(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Unity.LEGO.Game.GameFlowManager::StartGameLockLookRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameFlowManager_StartGameLockLookRotation_m99BA477709A0571EF1D592BA08B01162F4E34506 (GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartGameLockLookRotationU3Ed__20_tB001861D74C22D74557045D8B0B1834ACF2194B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartGameLockLookRotationU3Ed__20_tB001861D74C22D74557045D8B0B1834ACF2194B4 * L_0 = (U3CStartGameLockLookRotationU3Ed__20_tB001861D74C22D74557045D8B0B1834ACF2194B4 *)il2cpp_codegen_object_new(U3CStartGameLockLookRotationU3Ed__20_tB001861D74C22D74557045D8B0B1834ACF2194B4_il2cpp_TypeInfo_var);
		U3CStartGameLockLookRotationU3Ed__20__ctor_mE05350819EEF351527BA49485EABB6E9280832F5(L_0, 0, /*hidden argument*/NULL);
		U3CStartGameLockLookRotationU3Ed__20_tB001861D74C22D74557045D8B0B1834ACF2194B4 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Unity.LEGO.Game.GameFlowManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameFlowManager_Update_mEF623ECA4439988BCE2D6AFA8B7804F694209419 (GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (GameIsEnding)
		bool L_0;
		L_0 = GameFlowManager_get_GameIsEnding_m2AF7AB4861E9768FA13A49CC67F45902D4DA9679_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		// if (Time.time >= m_GameOverSceneTime)
		float L_1;
		L_1 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_2 = __this->get_m_GameOverSceneTime_11();
		if ((!(((float)L_1) >= ((float)L_2))))
		{
			goto IL_0038;
		}
	}
	{
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217(0, /*hidden argument*/NULL);
		// PreviousScene = SceneManager.GetActiveScene().name;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_3;
		L_3 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		GameFlowManager_set_PreviousScene_m2EF64D7CBEDBE34B5045C2EC345E9646FB7CCDC2_inline(L_4, /*hidden argument*/NULL);
		// SceneManager.LoadScene(m_GameOverSceneToLoad);
		String_t* L_5 = __this->get_m_GameOverSceneToLoad_12();
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_5, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void Unity.LEGO.Game.GameFlowManager::OnGameOver(Unity.LEGO.Game.GameOverEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameFlowManager_OnGameOver_m765BA06DE2BCB9C85BDCDAFA009A533956336042 (GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * __this, GameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409 * ___evt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!GameIsEnding)
		bool L_0;
		L_0 = GameFlowManager_get_GameIsEnding_m2AF7AB4861E9768FA13A49CC67F45902D4DA9679_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_007a;
		}
	}
	{
		// GameIsEnding = true;
		GameFlowManager_set_GameIsEnding_mAD7A0D7A1E09612CAB5DA73916D731607171BE43_inline(__this, (bool)1, /*hidden argument*/NULL);
		// if (evt.Win)
		GameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409 * L_1 = ___evt0;
		bool L_2 = L_1->get_Win_0();
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		// m_GameOverSceneToLoad = m_WinScene;
		String_t* L_3 = __this->get_m_WinScene_4();
		__this->set_m_GameOverSceneToLoad_12(L_3);
		// m_GameOverSceneTime = Time.time + m_WinSceneDelay;
		float L_4;
		L_4 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_5 = __this->get_m_WinSceneDelay_5();
		__this->set_m_GameOverSceneTime_11(((float)il2cpp_codegen_add((float)L_4, (float)L_5)));
		// StartCoroutine(ZoomInOnPlayer());
		RuntimeObject* L_6;
		L_6 = GameFlowManager_ZoomInOnPlayer_mB897F4E3CB0834FEB414B9E1DB33B28E0CD273A7(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_7;
		L_7 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0043:
	{
		// m_GameOverSceneToLoad = m_LoseScene;
		String_t* L_8 = __this->get_m_LoseScene_6();
		__this->set_m_GameOverSceneToLoad_12(L_8);
		// m_GameOverSceneTime = Time.time + m_LoseSceneDelay;
		float L_9;
		L_9 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_10 = __this->get_m_LoseSceneDelay_7();
		__this->set_m_GameOverSceneTime_11(((float)il2cpp_codegen_add((float)L_9, (float)L_10)));
		// if (m_FreeLookCamera)
		CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * L_11 = __this->get_m_FreeLookCamera_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_007a;
		}
	}
	{
		// m_FreeLookCamera.Follow = null;
		CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * L_13 = __this->get_m_FreeLookCamera_13();
		VirtActionInvoker1< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(30 /* System.Void Cinemachine.CinemachineVirtualCameraBase::set_Follow(UnityEngine.Transform) */, L_13, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL);
	}

IL_007a:
	{
		// }
		return;
	}
}
// System.Void Unity.LEGO.Game.GameFlowManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameFlowManager_OnDestroy_m443B36A7CB329B6AF237B103BB355801D2FE516B (GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mB413F2F8DB13CA49035B93AA2BC71FAB585CE68C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t020682A1E00DC8EE4C5FD052702748C3A7E17AB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_RemoveListener_TisGameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409_m92E1FDFDB27705671B45C78544224020FEB482FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameFlowManager_OnGameOver_m765BA06DE2BCB9C85BDCDAFA009A533956336042_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventManager.RemoveListener<GameOverEvent>(OnGameOver);
		Action_1_t020682A1E00DC8EE4C5FD052702748C3A7E17AB4 * L_0 = (Action_1_t020682A1E00DC8EE4C5FD052702748C3A7E17AB4 *)il2cpp_codegen_object_new(Action_1_t020682A1E00DC8EE4C5FD052702748C3A7E17AB4_il2cpp_TypeInfo_var);
		Action_1__ctor_mB413F2F8DB13CA49035B93AA2BC71FAB585CE68C(L_0, __this, (intptr_t)((intptr_t)GameFlowManager_OnGameOver_m765BA06DE2BCB9C85BDCDAFA009A533956336042_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mB413F2F8DB13CA49035B93AA2BC71FAB585CE68C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var);
		EventManager_RemoveListener_TisGameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409_m92E1FDFDB27705671B45C78544224020FEB482FA(L_0, /*hidden argument*/EventManager_RemoveListener_TisGameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409_m92E1FDFDB27705671B45C78544224020FEB482FA_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.IEnumerator Unity.LEGO.Game.GameFlowManager::ZoomInOnPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameFlowManager_ZoomInOnPlayer_mB897F4E3CB0834FEB414B9E1DB33B28E0CD273A7 (GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CZoomInOnPlayerU3Ed__24_t934444AB2415126D28E6C233B30EA61E09C2E475_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CZoomInOnPlayerU3Ed__24_t934444AB2415126D28E6C233B30EA61E09C2E475 * L_0 = (U3CZoomInOnPlayerU3Ed__24_t934444AB2415126D28E6C233B30EA61E09C2E475 *)il2cpp_codegen_object_new(U3CZoomInOnPlayerU3Ed__24_t934444AB2415126D28E6C233B30EA61E09C2E475_il2cpp_TypeInfo_var);
		U3CZoomInOnPlayerU3Ed__24__ctor_mE9418490899C1F6342941AD548B15BD69CFCEA73(L_0, 0, /*hidden argument*/NULL);
		U3CZoomInOnPlayerU3Ed__24_t934444AB2415126D28E6C233B30EA61E09C2E475 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Unity.LEGO.Game.GameFlowManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameFlowManager__ctor_m5D9CF0A3B08EEEF0E98096F7ABFF0FCB86F3A5D8 (GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral130DEAA16B60191B0C01B858BD3A42CFAB92E651);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9379DD12FD88E583CE1A7A833443D561376FB07B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string m_WinScene = "Menu Win";
		__this->set_m_WinScene_4(_stringLiteral130DEAA16B60191B0C01B858BD3A42CFAB92E651);
		// float m_WinSceneDelay = 5.0f;
		__this->set_m_WinSceneDelay_5((5.0f));
		// string m_LoseScene = "Menu Lose";
		__this->set_m_LoseScene_6(_stringLiteral9379DD12FD88E583CE1A7A833443D561376FB07B);
		// float m_LoseSceneDelay = 3.0f;
		__this->set_m_LoseSceneDelay_7((3.0f));
		// float m_StartGameLockedControllerTimer = 0.3f;
		__this->set_m_StartGameLockedControllerTimer_8((0.300000012f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.LEGO.Game.GameOverEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverEvent__ctor_m4105B0040BAF146DF4BD6671477B3C4FFF07B68D (GameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409 * __this, const RuntimeMethod* method)
{
	{
		GameEvent__ctor_mA0257F5D00263FFBF67EF3F46EAE26BDE363BD99(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.LEGO.Game.InputManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_Awake_mB00E4DC21AD4DC13B41E89F61C96F4406DFFBC33 (InputManager_t3B65863876DEF411046BF33708D1137313B0023C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mE58C2C12FE90F562EDB8AD0E895A2C75D23ECADD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7A4D2A712BE201E21551B5B23AF8BBAFD72B6C28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_AddListener_TisLookSensitivityUpdateEvent_tB1DCB5FE9FE2719AFB09DAE1B4BF24040180C709_mF1045ADC181A3837C3712F8DE071A236AE878B63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputManager_OnLookSensitivityUpdate_m2E6F87DAB9652CF47E7A0F9B0753C3DD8F5522C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisCinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F_m73AAF8C5A398249506E426A33B5D7B9BAEADE25A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_FreeLookCamera = FindObjectOfType<CinemachineFreeLook>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * L_0;
		L_0 = Object_FindObjectOfType_TisCinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F_m73AAF8C5A398249506E426A33B5D7B9BAEADE25A(/*hidden argument*/Object_FindObjectOfType_TisCinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F_m73AAF8C5A398249506E426A33B5D7B9BAEADE25A_RuntimeMethod_var);
		__this->set_m_FreeLookCamera_8(L_0);
		// EventManager.AddListener<LookSensitivityUpdateEvent>(OnLookSensitivityUpdate);
		Action_1_t7A4D2A712BE201E21551B5B23AF8BBAFD72B6C28 * L_1 = (Action_1_t7A4D2A712BE201E21551B5B23AF8BBAFD72B6C28 *)il2cpp_codegen_object_new(Action_1_t7A4D2A712BE201E21551B5B23AF8BBAFD72B6C28_il2cpp_TypeInfo_var);
		Action_1__ctor_mE58C2C12FE90F562EDB8AD0E895A2C75D23ECADD(L_1, __this, (intptr_t)((intptr_t)InputManager_OnLookSensitivityUpdate_m2E6F87DAB9652CF47E7A0F9B0753C3DD8F5522C0_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mE58C2C12FE90F562EDB8AD0E895A2C75D23ECADD_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var);
		EventManager_AddListener_TisLookSensitivityUpdateEvent_tB1DCB5FE9FE2719AFB09DAE1B4BF24040180C709_mF1045ADC181A3837C3712F8DE071A236AE878B63(L_1, /*hidden argument*/EventManager_AddListener_TisLookSensitivityUpdateEvent_tB1DCB5FE9FE2719AFB09DAE1B4BF24040180C709_mF1045ADC181A3837C3712F8DE071A236AE878B63_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.LEGO.Game.InputManager::OnLookSensitivityUpdate(Unity.LEGO.Game.LookSensitivityUpdateEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_OnLookSensitivityUpdate_m2E6F87DAB9652CF47E7A0F9B0753C3DD8F5522C0 (InputManager_t3B65863876DEF411046BF33708D1137313B0023C * __this, LookSensitivityUpdateEvent_tB1DCB5FE9FE2719AFB09DAE1B4BF24040180C709 * ___evt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_FreeLookCamera)
		CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * L_0 = __this->get_m_FreeLookCamera_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0055;
		}
	}
	{
		// m_FreeLookCamera.m_XAxis.m_MaxSpeed = m_HorizontalLookMinimumSensitivity + (m_HorizontalLookSensitivityStep * evt.Value);
		CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * L_2 = __this->get_m_FreeLookCamera_8();
		AxisState_t376D19829A676B98933979F42845F6476071DDE8 * L_3 = L_2->get_address_of_m_XAxis_27();
		float L_4 = __this->get_m_HorizontalLookMinimumSensitivity_6();
		float L_5 = __this->get_m_HorizontalLookSensitivityStep_7();
		LookSensitivityUpdateEvent_tB1DCB5FE9FE2719AFB09DAE1B4BF24040180C709 * L_6 = ___evt0;
		float L_7 = L_6->get_Value_0();
		L_3->set_m_MaxSpeed_2(((float)il2cpp_codegen_add((float)L_4, (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))));
		// m_FreeLookCamera.m_YAxis.m_MaxSpeed = m_VerticalLookMinSensitivity + (m_VerticalLookSensitivityStep * evt.Value);
		CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * L_8 = __this->get_m_FreeLookCamera_8();
		AxisState_t376D19829A676B98933979F42845F6476071DDE8 * L_9 = L_8->get_address_of_m_YAxis_25();
		float L_10 = __this->get_m_VerticalLookMinSensitivity_4();
		float L_11 = __this->get_m_VerticalLookSensitivityStep_5();
		LookSensitivityUpdateEvent_tB1DCB5FE9FE2719AFB09DAE1B4BF24040180C709 * L_12 = ___evt0;
		float L_13 = L_12->get_Value_0();
		L_9->set_m_MaxSpeed_2(((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)L_11, (float)L_13)))));
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void Unity.LEGO.Game.InputManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_OnDestroy_mCD2A1ED9E33451A757078967AA675DB4F0CFAAB7 (InputManager_t3B65863876DEF411046BF33708D1137313B0023C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mE58C2C12FE90F562EDB8AD0E895A2C75D23ECADD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7A4D2A712BE201E21551B5B23AF8BBAFD72B6C28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_RemoveListener_TisLookSensitivityUpdateEvent_tB1DCB5FE9FE2719AFB09DAE1B4BF24040180C709_m54B8B1C236C594640B7DFCF891C00A227CA290C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputManager_OnLookSensitivityUpdate_m2E6F87DAB9652CF47E7A0F9B0753C3DD8F5522C0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventManager.RemoveListener<LookSensitivityUpdateEvent>(OnLookSensitivityUpdate);
		Action_1_t7A4D2A712BE201E21551B5B23AF8BBAFD72B6C28 * L_0 = (Action_1_t7A4D2A712BE201E21551B5B23AF8BBAFD72B6C28 *)il2cpp_codegen_object_new(Action_1_t7A4D2A712BE201E21551B5B23AF8BBAFD72B6C28_il2cpp_TypeInfo_var);
		Action_1__ctor_mE58C2C12FE90F562EDB8AD0E895A2C75D23ECADD(L_0, __this, (intptr_t)((intptr_t)InputManager_OnLookSensitivityUpdate_m2E6F87DAB9652CF47E7A0F9B0753C3DD8F5522C0_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mE58C2C12FE90F562EDB8AD0E895A2C75D23ECADD_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var);
		EventManager_RemoveListener_TisLookSensitivityUpdateEvent_tB1DCB5FE9FE2719AFB09DAE1B4BF24040180C709_m54B8B1C236C594640B7DFCF891C00A227CA290C8(L_0, /*hidden argument*/EventManager_RemoveListener_TisLookSensitivityUpdateEvent_tB1DCB5FE9FE2719AFB09DAE1B4BF24040180C709_m54B8B1C236C594640B7DFCF891C00A227CA290C8_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.LEGO.Game.InputManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager__ctor_m35D299F759A382AA067A2FF1800E5D19B1640C16 (InputManager_t3B65863876DEF411046BF33708D1137313B0023C * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] float m_VerticalLookMinSensitivity = 0.5f;
		__this->set_m_VerticalLookMinSensitivity_4((0.5f));
		// [SerializeField, Range(0.25f, 1.0f)] float m_VerticalLookSensitivityStep = 0.25f;
		__this->set_m_VerticalLookSensitivityStep_5((0.25f));
		// [SerializeField] float m_HorizontalLookMinimumSensitivity = 50.0f;
		__this->set_m_HorizontalLookMinimumSensitivity_6((50.0f));
		// [SerializeField, Range(10.0f, 100.0f)] float m_HorizontalLookSensitivityStep = 50.0f;
		__this->set_m_HorizontalLookSensitivityStep_7((50.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.LEGO.Game.LookSensitivityUpdateEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookSensitivityUpdateEvent__ctor_mB00C06D856D6B502ACB30A8B0EBD4049DC4CABFD (LookSensitivityUpdateEvent_tB1DCB5FE9FE2719AFB09DAE1B4BF24040180C709 * __this, const RuntimeMethod* method)
{
	{
		GameEvent__ctor_mA0257F5D00263FFBF67EF3F46EAE26BDE363BD99(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.LEGO.Game.ObjectiveAdded::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectiveAdded__ctor_mAB50E2DA869F9767B9C5E172E359BE165881B3E5 (ObjectiveAdded_tD7245D8C50A24195DA915EF344B32173E897B0F6 * __this, const RuntimeMethod* method)
{
	{
		GameEvent__ctor_mA0257F5D00263FFBF67EF3F46EAE26BDE363BD99(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.LEGO.Game.ObjectiveManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectiveManager_Awake_mE66614A403476DA7252F5080E3D5681EB2D99D3A (ObjectiveManager_tD5EE4E2902DE8B17FE395EAF0B2BBF7422FF2439 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mEC55D7DC0EB31EF137E72CBDF8815D127B47366C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF1836A38C56D3A758B176D27E26A7CC766798CDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_AddListener_TisObjectiveAdded_tD7245D8C50A24195DA915EF344B32173E897B0F6_mBEE49DF82C76D0393B1C161B9BA64BF59603BB8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m385FAB9EB736DB3E8120B1ED61D14C1F8A7AAFD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectiveManager_OnObjectiveAdded_mD581F692D34DA72D9288B5060E2A179C77A02F51_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Objectives = new List<IObjective>();
		List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559 * L_0 = (List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559 *)il2cpp_codegen_object_new(List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559_il2cpp_TypeInfo_var);
		List_1__ctor_m385FAB9EB736DB3E8120B1ED61D14C1F8A7AAFD9(L_0, /*hidden argument*/List_1__ctor_m385FAB9EB736DB3E8120B1ED61D14C1F8A7AAFD9_RuntimeMethod_var);
		__this->set_m_Objectives_4(L_0);
		// EventManager.AddListener<ObjectiveAdded>(OnObjectiveAdded);
		Action_1_tF1836A38C56D3A758B176D27E26A7CC766798CDE * L_1 = (Action_1_tF1836A38C56D3A758B176D27E26A7CC766798CDE *)il2cpp_codegen_object_new(Action_1_tF1836A38C56D3A758B176D27E26A7CC766798CDE_il2cpp_TypeInfo_var);
		Action_1__ctor_mEC55D7DC0EB31EF137E72CBDF8815D127B47366C(L_1, __this, (intptr_t)((intptr_t)ObjectiveManager_OnObjectiveAdded_mD581F692D34DA72D9288B5060E2A179C77A02F51_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mEC55D7DC0EB31EF137E72CBDF8815D127B47366C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var);
		EventManager_AddListener_TisObjectiveAdded_tD7245D8C50A24195DA915EF344B32173E897B0F6_mBEE49DF82C76D0393B1C161B9BA64BF59603BB8C(L_1, /*hidden argument*/EventManager_AddListener_TisObjectiveAdded_tD7245D8C50A24195DA915EF344B32173E897B0F6_mBEE49DF82C76D0393B1C161B9BA64BF59603BB8C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.LEGO.Game.ObjectiveManager::OnObjectiveAdded(Unity.LEGO.Game.ObjectiveAdded)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectiveManager_OnObjectiveAdded_mD581F692D34DA72D9288B5060E2A179C77A02F51 (ObjectiveManager_tD5EE4E2902DE8B17FE395EAF0B2BBF7422FF2439 * __this, ObjectiveAdded_tD7245D8C50A24195DA915EF344B32173E897B0F6 * ___evt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m586CF6A750EABC6C4B2A36FEA47456F3531A8835_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t8FE4FE34AA2FA18BE53A649F50F63F8CB8430800_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObjective_t1F2AF2933B14EFA9E15DFFF4A19A0E48F1D3B4BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA456C29049CA8C04BAEFBA20CFBAFB05F464FAB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectiveManager_OnProgress_m2E3138DF57FB043999942F10AD9D5C70FA83D9AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Objectives.Add(evt.Objective);
		List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559 * L_0 = __this->get_m_Objectives_4();
		ObjectiveAdded_tD7245D8C50A24195DA915EF344B32173E897B0F6 * L_1 = ___evt0;
		RuntimeObject* L_2 = L_1->get_Objective_0();
		List_1_Add_mA456C29049CA8C04BAEFBA20CFBAFB05F464FAB6(L_0, L_2, /*hidden argument*/List_1_Add_mA456C29049CA8C04BAEFBA20CFBAFB05F464FAB6_RuntimeMethod_var);
		// evt.Objective.OnProgress += OnProgress;
		ObjectiveAdded_tD7245D8C50A24195DA915EF344B32173E897B0F6 * L_3 = ___evt0;
		RuntimeObject* L_4 = L_3->get_Objective_0();
		RuntimeObject* L_5 = L_4;
		Action_1_t8FE4FE34AA2FA18BE53A649F50F63F8CB8430800 * L_6;
		L_6 = InterfaceFuncInvoker0< Action_1_t8FE4FE34AA2FA18BE53A649F50F63F8CB8430800 * >::Invoke(6 /* System.Action`1<Unity.LEGO.Game.IObjective> Unity.LEGO.Game.IObjective::get_OnProgress() */, IObjective_t1F2AF2933B14EFA9E15DFFF4A19A0E48F1D3B4BD_il2cpp_TypeInfo_var, L_5);
		Action_1_t8FE4FE34AA2FA18BE53A649F50F63F8CB8430800 * L_7 = (Action_1_t8FE4FE34AA2FA18BE53A649F50F63F8CB8430800 *)il2cpp_codegen_object_new(Action_1_t8FE4FE34AA2FA18BE53A649F50F63F8CB8430800_il2cpp_TypeInfo_var);
		Action_1__ctor_m586CF6A750EABC6C4B2A36FEA47456F3531A8835(L_7, __this, (intptr_t)((intptr_t)ObjectiveManager_OnProgress_m2E3138DF57FB043999942F10AD9D5C70FA83D9AC_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m586CF6A750EABC6C4B2A36FEA47456F3531A8835_RuntimeMethod_var);
		Delegate_t * L_8;
		L_8 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_6, L_7, /*hidden argument*/NULL);
		InterfaceActionInvoker1< Action_1_t8FE4FE34AA2FA18BE53A649F50F63F8CB8430800 * >::Invoke(7 /* System.Void Unity.LEGO.Game.IObjective::set_OnProgress(System.Action`1<Unity.LEGO.Game.IObjective>) */, IObjective_t1F2AF2933B14EFA9E15DFFF4A19A0E48F1D3B4BD_il2cpp_TypeInfo_var, L_5, ((Action_1_t8FE4FE34AA2FA18BE53A649F50F63F8CB8430800 *)CastclassSealed((RuntimeObject*)L_8, Action_1_t8FE4FE34AA2FA18BE53A649F50F63F8CB8430800_il2cpp_TypeInfo_var)));
		// UpdateGameStatus();
		ObjectiveManager_UpdateGameStatus_m458A84E1483F86F8DB5B748E152B2760C236A880(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.LEGO.Game.ObjectiveManager::OnProgress(Unity.LEGO.Game.IObjective)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectiveManager_OnProgress_m2E3138DF57FB043999942F10AD9D5C70FA83D9AC (ObjectiveManager_tD5EE4E2902DE8B17FE395EAF0B2BBF7422FF2439 * __this, RuntimeObject* ____0, const RuntimeMethod* method)
{
	{
		// UpdateGameStatus();
		ObjectiveManager_UpdateGameStatus_m458A84E1483F86F8DB5B748E152B2760C236A880(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.LEGO.Game.ObjectiveManager::UpdateGameStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectiveManager_UpdateGameStatus_m458A84E1483F86F8DB5B748E152B2760C236A880 (ObjectiveManager_tD5EE4E2902DE8B17FE395EAF0B2BBF7422FF2439 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m74A38200C167714F840592A10866F6FAFCB0E7F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF604425E49804D3273548CDE1A4A3FFD406BC54A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCF0C503C9C0F575AB29BDA6D6FAB259BCD86E771_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObjective_t1F2AF2933B14EFA9E15DFFF4A19A0E48F1D3B4BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Exists_m174FABD94A024102A75BB5A60A52B4EA203D0F9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m86BAA941B6D6E1ADE36E0C6F168294F4671A437F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1__ctor_m803C88CADB336B04A7A20620C93FABA326AE0FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t38F538874F744DB7A65CA0DF6ECDF1CCBAE673B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CUpdateGameStatusU3Eb__6_0_m3595A74676E968B6860149BC401DAC07E95F7F16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t24FA5B43B7BC487E38C841E176CAD482D559CA6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8F205CC2063D3C85F382AE817687C856720CC1B3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	Predicate_1_t38F538874F744DB7A65CA0DF6ECDF1CCBAE673B3 * G_B2_0 = NULL;
	List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559 * G_B2_1 = NULL;
	ObjectiveManager_tD5EE4E2902DE8B17FE395EAF0B2BBF7422FF2439 * G_B2_2 = NULL;
	Predicate_1_t38F538874F744DB7A65CA0DF6ECDF1CCBAE673B3 * G_B1_0 = NULL;
	List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559 * G_B1_1 = NULL;
	ObjectiveManager_tD5EE4E2902DE8B17FE395EAF0B2BBF7422FF2439 * G_B1_2 = NULL;
	bool G_B6_0 = false;
	ObjectiveManager_tD5EE4E2902DE8B17FE395EAF0B2BBF7422FF2439 * G_B6_1 = NULL;
	bool G_B5_0 = false;
	ObjectiveManager_tD5EE4E2902DE8B17FE395EAF0B2BBF7422FF2439 * G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	bool G_B7_1 = false;
	ObjectiveManager_tD5EE4E2902DE8B17FE395EAF0B2BBF7422FF2439 * G_B7_2 = NULL;
	bool G_B9_0 = false;
	ObjectiveManager_tD5EE4E2902DE8B17FE395EAF0B2BBF7422FF2439 * G_B9_1 = NULL;
	bool G_B8_0 = false;
	ObjectiveManager_tD5EE4E2902DE8B17FE395EAF0B2BBF7422FF2439 * G_B8_1 = NULL;
	int32_t G_B10_0 = 0;
	bool G_B10_1 = false;
	ObjectiveManager_tD5EE4E2902DE8B17FE395EAF0B2BBF7422FF2439 * G_B10_2 = NULL;
	{
		// m_Won = m_Objectives.Exists(objective => !objective.m_Lose);
		List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559 * L_0 = __this->get_m_Objectives_4();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t24FA5B43B7BC487E38C841E176CAD482D559CA6C_il2cpp_TypeInfo_var);
		Predicate_1_t38F538874F744DB7A65CA0DF6ECDF1CCBAE673B3 * L_1 = ((U3CU3Ec_t24FA5B43B7BC487E38C841E176CAD482D559CA6C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t24FA5B43B7BC487E38C841E176CAD482D559CA6C_il2cpp_TypeInfo_var))->get_U3CU3E9__6_0_1();
		Predicate_1_t38F538874F744DB7A65CA0DF6ECDF1CCBAE673B3 * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		G_B1_2 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			G_B2_2 = __this;
			goto IL_0026;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t24FA5B43B7BC487E38C841E176CAD482D559CA6C_il2cpp_TypeInfo_var);
		U3CU3Ec_t24FA5B43B7BC487E38C841E176CAD482D559CA6C * L_3 = ((U3CU3Ec_t24FA5B43B7BC487E38C841E176CAD482D559CA6C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t24FA5B43B7BC487E38C841E176CAD482D559CA6C_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Predicate_1_t38F538874F744DB7A65CA0DF6ECDF1CCBAE673B3 * L_4 = (Predicate_1_t38F538874F744DB7A65CA0DF6ECDF1CCBAE673B3 *)il2cpp_codegen_object_new(Predicate_1_t38F538874F744DB7A65CA0DF6ECDF1CCBAE673B3_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m803C88CADB336B04A7A20620C93FABA326AE0FBF(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CUpdateGameStatusU3Eb__6_0_m3595A74676E968B6860149BC401DAC07E95F7F16_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m803C88CADB336B04A7A20620C93FABA326AE0FBF_RuntimeMethod_var);
		Predicate_1_t38F538874F744DB7A65CA0DF6ECDF1CCBAE673B3 * L_5 = L_4;
		((U3CU3Ec_t24FA5B43B7BC487E38C841E176CAD482D559CA6C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t24FA5B43B7BC487E38C841E176CAD482D559CA6C_il2cpp_TypeInfo_var))->set_U3CU3E9__6_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0026:
	{
		bool L_6;
		L_6 = List_1_Exists_m174FABD94A024102A75BB5A60A52B4EA203D0F9D(G_B2_1, G_B2_0, /*hidden argument*/List_1_Exists_m174FABD94A024102A75BB5A60A52B4EA203D0F9D_RuntimeMethod_var);
		G_B2_2->set_m_Won_5(L_6);
		// foreach (IObjective objective in m_Objectives)
		List_1_t43212E4DF77917AC9F8FD073FDC22E90494CC559 * L_7 = __this->get_m_Objectives_4();
		Enumerator_t8F205CC2063D3C85F382AE817687C856720CC1B3  L_8;
		L_8 = List_1_GetEnumerator_m86BAA941B6D6E1ADE36E0C6F168294F4671A437F(L_7, /*hidden argument*/List_1_GetEnumerator_m86BAA941B6D6E1ADE36E0C6F168294F4671A437F_RuntimeMethod_var);
		V_0 = L_8;
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0082;
		}

IL_003e:
		{
			// foreach (IObjective objective in m_Objectives)
			RuntimeObject* L_9;
			L_9 = Enumerator_get_Current_mCF0C503C9C0F575AB29BDA6D6FAB259BCD86E771_inline((Enumerator_t8F205CC2063D3C85F382AE817687C856720CC1B3 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mCF0C503C9C0F575AB29BDA6D6FAB259BCD86E771_RuntimeMethod_var);
			V_1 = L_9;
			// m_Won &= (objective.IsCompleted || objective.m_Lose);
			bool L_10 = __this->get_m_Won_5();
			RuntimeObject* L_11 = V_1;
			bool L_12;
			L_12 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean Unity.LEGO.Game.IObjective::get_IsCompleted() */, IObjective_t1F2AF2933B14EFA9E15DFFF4A19A0E48F1D3B4BD_il2cpp_TypeInfo_var, L_11);
			G_B5_0 = L_10;
			G_B5_1 = __this;
			if (L_12)
			{
				G_B6_0 = L_10;
				G_B6_1 = __this;
				goto IL_005d;
			}
		}

IL_0055:
		{
			RuntimeObject* L_13 = V_1;
			bool L_14;
			L_14 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean Unity.LEGO.Game.IObjective::get_m_Lose() */, IObjective_t1F2AF2933B14EFA9E15DFFF4A19A0E48F1D3B4BD_il2cpp_TypeInfo_var, L_13);
			G_B7_0 = ((int32_t)(L_14));
			G_B7_1 = G_B5_0;
			G_B7_2 = G_B5_1;
			goto IL_005e;
		}

IL_005d:
		{
			G_B7_0 = 1;
			G_B7_1 = G_B6_0;
			G_B7_2 = G_B6_1;
		}

IL_005e:
		{
			G_B7_2->set_m_Won_5((bool)((int32_t)((int32_t)G_B7_1&(int32_t)G_B7_0)));
			// m_Lost |= (objective.IsCompleted && objective.m_Lose);
			bool L_15 = __this->get_m_Lost_6();
			RuntimeObject* L_16 = V_1;
			bool L_17;
			L_17 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean Unity.LEGO.Game.IObjective::get_IsCompleted() */, IObjective_t1F2AF2933B14EFA9E15DFFF4A19A0E48F1D3B4BD_il2cpp_TypeInfo_var, L_16);
			G_B8_0 = L_15;
			G_B8_1 = __this;
			if (!L_17)
			{
				G_B9_0 = L_15;
				G_B9_1 = __this;
				goto IL_007b;
			}
		}

IL_0073:
		{
			RuntimeObject* L_18 = V_1;
			bool L_19;
			L_19 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean Unity.LEGO.Game.IObjective::get_m_Lose() */, IObjective_t1F2AF2933B14EFA9E15DFFF4A19A0E48F1D3B4BD_il2cpp_TypeInfo_var, L_18);
			G_B10_0 = ((int32_t)(L_19));
			G_B10_1 = G_B8_0;
			G_B10_2 = G_B8_1;
			goto IL_007c;
		}

IL_007b:
		{
			G_B10_0 = 0;
			G_B10_1 = G_B9_0;
			G_B10_2 = G_B9_1;
		}

IL_007c:
		{
			G_B10_2->set_m_Lost_6((bool)((int32_t)((int32_t)G_B10_1|(int32_t)G_B10_0)));
		}

IL_0082:
		{
			// foreach (IObjective objective in m_Objectives)
			bool L_20;
			L_20 = Enumerator_MoveNext_mF604425E49804D3273548CDE1A4A3FFD406BC54A((Enumerator_t8F205CC2063D3C85F382AE817687C856720CC1B3 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mF604425E49804D3273548CDE1A4A3FFD406BC54A_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_003e;
			}
		}

IL_008b:
		{
			IL2CPP_LEAVE(0x9B, FINALLY_008d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008d;
	}

FINALLY_008d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m74A38200C167714F840592A10866F6FAFCB0E7F4((Enumerator_t8F205CC2063D3C85F382AE817687C856720CC1B3 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m74A38200C167714F840592A10866F6FAFCB0E7F4_RuntimeMethod_var);
		IL2CPP_END_FINALLY(141)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(141)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x9B, IL_009b)
	}

IL_009b:
	{
		// }
		return;
	}
}
// System.Void Unity.LEGO.Game.ObjectiveManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectiveManager_Update_m94CAEA409DD0E9197B335596A7F6956B5489DEDF (ObjectiveManager_tD5EE4E2902DE8B17FE395EAF0B2BBF7422FF2439 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409 * G_B4_0 = NULL;
	GameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409 * G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	GameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409 * G_B5_1 = NULL;
	{
		// if (m_Won || m_Lost)
		bool L_0 = __this->get_m_Won_5();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->get_m_Lost_6();
		if (!L_1)
		{
			goto IL_003e;
		}
	}

IL_0010:
	{
		// Events.GameOverEvent.Win = m_Won || !m_Lost;
		IL2CPP_RUNTIME_CLASS_INIT(Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_il2cpp_TypeInfo_var);
		GameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409 * L_2 = ((Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_StaticFields*)il2cpp_codegen_static_fields_for(Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_il2cpp_TypeInfo_var))->get_GameOverEvent_3();
		bool L_3 = __this->get_m_Won_5();
		G_B3_0 = L_2;
		if (L_3)
		{
			G_B4_0 = L_2;
			goto IL_0028;
		}
	}
	{
		bool L_4 = __this->get_m_Lost_6();
		G_B5_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		G_B5_1 = G_B3_0;
		goto IL_0029;
	}

IL_0028:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0029:
	{
		G_B5_1->set_Win_0((bool)G_B5_0);
		// EventManager.Broadcast(Events.GameOverEvent);
		IL2CPP_RUNTIME_CLASS_INIT(Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_il2cpp_TypeInfo_var);
		GameOverEvent_tCA302D5841589D020B729B46789EDCDE656B8409 * L_5 = ((Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_StaticFields*)il2cpp_codegen_static_fields_for(Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_il2cpp_TypeInfo_var))->get_GameOverEvent_3();
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var);
		EventManager_Broadcast_m26E2E660FCCB7D0B37FDB53B9F34F7FED4D01452(L_5, /*hidden argument*/NULL);
		// Destroy(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(__this, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void Unity.LEGO.Game.ObjectiveManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectiveManager_OnDestroy_m8D4CE243B8D7A1022555E8DC127CBC4F5F17F548 (ObjectiveManager_tD5EE4E2902DE8B17FE395EAF0B2BBF7422FF2439 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mEC55D7DC0EB31EF137E72CBDF8815D127B47366C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF1836A38C56D3A758B176D27E26A7CC766798CDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_RemoveListener_TisObjectiveAdded_tD7245D8C50A24195DA915EF344B32173E897B0F6_m83A35A8184410219014DC125042CB3FAEFFB39C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectiveManager_OnObjectiveAdded_mD581F692D34DA72D9288B5060E2A179C77A02F51_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventManager.RemoveListener<ObjectiveAdded>(OnObjectiveAdded);
		Action_1_tF1836A38C56D3A758B176D27E26A7CC766798CDE * L_0 = (Action_1_tF1836A38C56D3A758B176D27E26A7CC766798CDE *)il2cpp_codegen_object_new(Action_1_tF1836A38C56D3A758B176D27E26A7CC766798CDE_il2cpp_TypeInfo_var);
		Action_1__ctor_mEC55D7DC0EB31EF137E72CBDF8815D127B47366C(L_0, __this, (intptr_t)((intptr_t)ObjectiveManager_OnObjectiveAdded_mD581F692D34DA72D9288B5060E2A179C77A02F51_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mEC55D7DC0EB31EF137E72CBDF8815D127B47366C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var);
		EventManager_RemoveListener_TisObjectiveAdded_tD7245D8C50A24195DA915EF344B32173E897B0F6_m83A35A8184410219014DC125042CB3FAEFFB39C8(L_0, /*hidden argument*/EventManager_RemoveListener_TisObjectiveAdded_tD7245D8C50A24195DA915EF344B32173E897B0F6_m83A35A8184410219014DC125042CB3FAEFFB39C8_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.LEGO.Game.ObjectiveManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectiveManager__ctor_m502A949606A789EDC4EA249B14A5AF10B4BDACAE (ObjectiveManager_tD5EE4E2902DE8B17FE395EAF0B2BBF7422FF2439 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void Unity.LEGO.Game.OptionsMenuEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionsMenuEvent__ctor_m2818433DB902E37C5171D173AD5E7ADE51A6B0D5 (OptionsMenuEvent_tBC2BD78E9B097E2D591568D86C4FD1656DB6FDC6 * __this, const RuntimeMethod* method)
{
	{
		GameEvent__ctor_mA0257F5D00263FFBF67EF3F46EAE26BDE363BD99(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.LEGO.Game.Variable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Variable__ctor_m21C27F1CF6A6AABAF711F75A95117C97A569D85E (Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1AA2387EE710A45D5A5A0928EE825C909430D34);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string Name = "Variable";
		__this->set_Name_4(_stringLiteralB1AA2387EE710A45D5A5A0928EE825C909430D34);
		// public bool UseUI = true;
		__this->set_UseUI_6((bool)1);
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.LEGO.Game.VariableAdded::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableAdded__ctor_m4673CCD65BAE530DAFFA78BCD1A034FD4B97D236 (VariableAdded_t8D9FBFC315B1B519C5D85D6A37F63F18B47291FA * __this, const RuntimeMethod* method)
{
	{
		GameEvent__ctor_mA0257F5D00263FFBF67EF3F46EAE26BDE363BD99(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.LEGO.Game.VariableManager::RegisterVariable(Unity.LEGO.Game.Variable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_RegisterVariable_m8D73762ECB745790E2237C180FFEBC1A6DAF175C (Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * ___variable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m9B23B2593A13B2DD234DAD83C5B155B52B9D34BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m06DD5F15A490A248D00F940E922DB545DCBAB113_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (variable && !s_RegisteredVariables.ContainsKey(variable))
		Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * L_0 = ___variable0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_il2cpp_TypeInfo_var);
		Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932 * L_2 = ((VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_StaticFields*)il2cpp_codegen_static_fields_for(VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_il2cpp_TypeInfo_var))->get_s_RegisteredVariables_1();
		Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * L_3 = ___variable0;
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_m9B23B2593A13B2DD234DAD83C5B155B52B9D34BA(L_2, L_3, /*hidden argument*/Dictionary_2_ContainsKey_m9B23B2593A13B2DD234DAD83C5B155B52B9D34BA_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0037;
		}
	}
	{
		// s_RegisteredVariables[variable] = variable.InitialValue;
		IL2CPP_RUNTIME_CLASS_INIT(VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_il2cpp_TypeInfo_var);
		Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932 * L_5 = ((VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_StaticFields*)il2cpp_codegen_static_fields_for(VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_il2cpp_TypeInfo_var))->get_s_RegisteredVariables_1();
		Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * L_6 = ___variable0;
		Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * L_7 = ___variable0;
		int32_t L_8 = L_7->get_InitialValue_5();
		Dictionary_2_set_Item_m06DD5F15A490A248D00F940E922DB545DCBAB113(L_5, L_6, L_8, /*hidden argument*/Dictionary_2_set_Item_m06DD5F15A490A248D00F940E922DB545DCBAB113_RuntimeMethod_var);
		// VariableAdded evt = Events.VariableAddedEvent;
		IL2CPP_RUNTIME_CLASS_INIT(Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_il2cpp_TypeInfo_var);
		VariableAdded_t8D9FBFC315B1B519C5D85D6A37F63F18B47291FA * L_9 = ((Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_StaticFields*)il2cpp_codegen_static_fields_for(Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_il2cpp_TypeInfo_var))->get_VariableAddedEvent_2();
		// evt.Variable = variable;
		VariableAdded_t8D9FBFC315B1B519C5D85D6A37F63F18B47291FA * L_10 = L_9;
		Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * L_11 = ___variable0;
		L_10->set_Variable_0(L_11);
		// EventManager.Broadcast(evt);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var);
		EventManager_Broadcast_m26E2E660FCCB7D0B37FDB53B9F34F7FED4D01452(L_10, /*hidden argument*/NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Boolean Unity.LEGO.Game.VariableManager::IsVariableRegistered(Unity.LEGO.Game.Variable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VariableManager_IsVariableRegistered_mF913DD6D7E0CEB3B40AC1BC75CD609A6F75A0CDB (Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * ___variable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m9B23B2593A13B2DD234DAD83C5B155B52B9D34BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return variable && s_RegisteredVariables.ContainsKey(variable);
		Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * L_0 = ___variable0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_il2cpp_TypeInfo_var);
		Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932 * L_2 = ((VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_StaticFields*)il2cpp_codegen_static_fields_for(VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_il2cpp_TypeInfo_var))->get_s_RegisteredVariables_1();
		Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * L_3 = ___variable0;
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_m9B23B2593A13B2DD234DAD83C5B155B52B9D34BA(L_2, L_3, /*hidden argument*/Dictionary_2_ContainsKey_m9B23B2593A13B2DD234DAD83C5B155B52B9D34BA_RuntimeMethod_var);
		return L_4;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Void Unity.LEGO.Game.VariableManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_Reset_m707A1FBA602626008703E8BE834A84E04CEF08A1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m6B36271CFA319DBC5D3F70F0653A3DE311DD5EE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m06DD5F15A490A248D00F940E922DB545DCBAB113_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA73E310CDE3403CB622B5163384E26C3969784AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m67B7316DDE38CC0306685DA6E7C744FD35D40D6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC2AAA6897C301922551CD0AA6FC154E257508F5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m9CF6322BE417744E7F68E7C308E7E0305E75E090_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBAA16B260E33505407B473D7FA673996B0923DBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7B50DCA27E54364BC506813348A65104C8193FB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD690FE672C96284FD994C4FD0BCC0189AB8ECDAB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var variables = new List<Variable>(s_RegisteredVariables.Keys);
		IL2CPP_RUNTIME_CLASS_INIT(VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_il2cpp_TypeInfo_var);
		Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932 * L_0 = ((VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_StaticFields*)il2cpp_codegen_static_fields_for(VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_il2cpp_TypeInfo_var))->get_s_RegisteredVariables_1();
		KeyCollection_t60CF0C6C759CBD61114D1590C4AF532F499BB1E6 * L_1;
		L_1 = Dictionary_2_get_Keys_m6B36271CFA319DBC5D3F70F0653A3DE311DD5EE7(L_0, /*hidden argument*/Dictionary_2_get_Keys_m6B36271CFA319DBC5D3F70F0653A3DE311DD5EE7_RuntimeMethod_var);
		List_1_t7B50DCA27E54364BC506813348A65104C8193FB1 * L_2 = (List_1_t7B50DCA27E54364BC506813348A65104C8193FB1 *)il2cpp_codegen_object_new(List_1_t7B50DCA27E54364BC506813348A65104C8193FB1_il2cpp_TypeInfo_var);
		List_1__ctor_mBAA16B260E33505407B473D7FA673996B0923DBC(L_2, L_1, /*hidden argument*/List_1__ctor_mBAA16B260E33505407B473D7FA673996B0923DBC_RuntimeMethod_var);
		// foreach (var variable in variables)
		Enumerator_tD690FE672C96284FD994C4FD0BCC0189AB8ECDAB  L_3;
		L_3 = List_1_GetEnumerator_m9CF6322BE417744E7F68E7C308E7E0305E75E090(L_2, /*hidden argument*/List_1_GetEnumerator_m9CF6322BE417744E7F68E7C308E7E0305E75E090_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0041;
		}

IL_0017:
		{
			// foreach (var variable in variables)
			Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * L_4;
			L_4 = Enumerator_get_Current_mC2AAA6897C301922551CD0AA6FC154E257508F5A_inline((Enumerator_tD690FE672C96284FD994C4FD0BCC0189AB8ECDAB *)(&V_0), /*hidden argument*/Enumerator_get_Current_mC2AAA6897C301922551CD0AA6FC154E257508F5A_RuntimeMethod_var);
			V_1 = L_4;
			// s_RegisteredVariables[variable] = variable.InitialValue;
			IL2CPP_RUNTIME_CLASS_INIT(VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_il2cpp_TypeInfo_var);
			Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932 * L_5 = ((VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_StaticFields*)il2cpp_codegen_static_fields_for(VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_il2cpp_TypeInfo_var))->get_s_RegisteredVariables_1();
			Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * L_6 = V_1;
			Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * L_7 = V_1;
			int32_t L_8 = L_7->get_InitialValue_5();
			Dictionary_2_set_Item_m06DD5F15A490A248D00F940E922DB545DCBAB113(L_5, L_6, L_8, /*hidden argument*/Dictionary_2_set_Item_m06DD5F15A490A248D00F940E922DB545DCBAB113_RuntimeMethod_var);
			// VariableAdded evt = Events.VariableAddedEvent;
			IL2CPP_RUNTIME_CLASS_INIT(Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_il2cpp_TypeInfo_var);
			VariableAdded_t8D9FBFC315B1B519C5D85D6A37F63F18B47291FA * L_9 = ((Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_StaticFields*)il2cpp_codegen_static_fields_for(Events_t57DAFFBFE0CA6FD423F0AC9B75C935FD1F9319C2_il2cpp_TypeInfo_var))->get_VariableAddedEvent_2();
			// evt.Variable = variable;
			VariableAdded_t8D9FBFC315B1B519C5D85D6A37F63F18B47291FA * L_10 = L_9;
			Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * L_11 = V_1;
			L_10->set_Variable_0(L_11);
			// EventManager.Broadcast(evt);
			IL2CPP_RUNTIME_CLASS_INIT(EventManager_t11F49E1AA31DA500F43244409B0539DA4E4DB819_il2cpp_TypeInfo_var);
			EventManager_Broadcast_m26E2E660FCCB7D0B37FDB53B9F34F7FED4D01452(L_10, /*hidden argument*/NULL);
		}

IL_0041:
		{
			// foreach (var variable in variables)
			bool L_12;
			L_12 = Enumerator_MoveNext_m67B7316DDE38CC0306685DA6E7C744FD35D40D6C((Enumerator_tD690FE672C96284FD994C4FD0BCC0189AB8ECDAB *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m67B7316DDE38CC0306685DA6E7C744FD35D40D6C_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0017;
			}
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x5A, FINALLY_004c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mA73E310CDE3403CB622B5163384E26C3969784AC((Enumerator_tD690FE672C96284FD994C4FD0BCC0189AB8ECDAB *)(&V_0), /*hidden argument*/Enumerator_Dispose_mA73E310CDE3403CB622B5163384E26C3969784AC_RuntimeMethod_var);
		IL2CPP_END_FINALLY(76)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Int32 Unity.LEGO.Game.VariableManager::GetValue(Unity.LEGO.Game.Variable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VariableManager_GetValue_m3FFAF4EF4D0E3336A6964864BC6D59799EAE1E52 (Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * ___variable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m9B23B2593A13B2DD234DAD83C5B155B52B9D34BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mF3741C026200F93B05F614E866D665AFFD58E76E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (variable && s_RegisteredVariables.ContainsKey(variable))
		Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * L_0 = ___variable0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_il2cpp_TypeInfo_var);
		Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932 * L_2 = ((VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_StaticFields*)il2cpp_codegen_static_fields_for(VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_il2cpp_TypeInfo_var))->get_s_RegisteredVariables_1();
		Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * L_3 = ___variable0;
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_m9B23B2593A13B2DD234DAD83C5B155B52B9D34BA(L_2, L_3, /*hidden argument*/Dictionary_2_ContainsKey_m9B23B2593A13B2DD234DAD83C5B155B52B9D34BA_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		// return s_RegisteredVariables[variable];
		IL2CPP_RUNTIME_CLASS_INIT(VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_il2cpp_TypeInfo_var);
		Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932 * L_5 = ((VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_StaticFields*)il2cpp_codegen_static_fields_for(VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_il2cpp_TypeInfo_var))->get_s_RegisteredVariables_1();
		Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * L_6 = ___variable0;
		int32_t L_7;
		L_7 = Dictionary_2_get_Item_mF3741C026200F93B05F614E866D665AFFD58E76E(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_mF3741C026200F93B05F614E866D665AFFD58E76E_RuntimeMethod_var);
		return L_7;
	}

IL_0021:
	{
		// return 0;
		return 0;
	}
}
// System.Void Unity.LEGO.Game.VariableManager::SetValue(Unity.LEGO.Game.Variable,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_SetValue_mAF77C4580DD21C5108FF2579BA9325CC5BE33E16 (Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * ___variable0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m9B23B2593A13B2DD234DAD83C5B155B52B9D34BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m06DD5F15A490A248D00F940E922DB545DCBAB113_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * G_B4_0 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * G_B3_0 = NULL;
	{
		// if (variable && s_RegisteredVariables.ContainsKey(variable))
		Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * L_0 = ___variable0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_il2cpp_TypeInfo_var);
		Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932 * L_2 = ((VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_StaticFields*)il2cpp_codegen_static_fields_for(VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_il2cpp_TypeInfo_var))->get_s_RegisteredVariables_1();
		Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * L_3 = ___variable0;
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_m9B23B2593A13B2DD234DAD83C5B155B52B9D34BA(L_2, L_3, /*hidden argument*/Dictionary_2_ContainsKey_m9B23B2593A13B2DD234DAD83C5B155B52B9D34BA_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// s_RegisteredVariables[variable] = value;
		IL2CPP_RUNTIME_CLASS_INIT(VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_il2cpp_TypeInfo_var);
		Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932 * L_5 = ((VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_StaticFields*)il2cpp_codegen_static_fields_for(VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_il2cpp_TypeInfo_var))->get_s_RegisteredVariables_1();
		Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * L_6 = ___variable0;
		int32_t L_7 = ___value1;
		Dictionary_2_set_Item_m06DD5F15A490A248D00F940E922DB545DCBAB113(L_5, L_6, L_7, /*hidden argument*/Dictionary_2_set_Item_m06DD5F15A490A248D00F940E922DB545DCBAB113_RuntimeMethod_var);
		// variable.OnUpdate?.Invoke(value);
		Variable_t4EC729EE574F39D1C966E60529779CECFCDC0A7E * L_8 = ___variable0;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_9 = L_8->get_OnUpdate_8();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_10 = L_9;
		G_B3_0 = L_10;
		if (L_10)
		{
			G_B4_0 = L_10;
			goto IL_002c;
		}
	}
	{
		return;
	}

IL_002c:
	{
		int32_t L_11 = ___value1;
		Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301(G_B4_0, L_11, /*hidden argument*/Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Unity.LEGO.Game.VariableManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager__cctor_mE9DD007E36003EC1CC46613F07E1C086D2212626 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD0FEF32558495B35F71D9022666C3EC959509BC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static Dictionary<Variable, int> s_RegisteredVariables = new Dictionary<Variable, int>();
		Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932 * L_0 = (Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932 *)il2cpp_codegen_object_new(Dictionary_2_t156534266EE11FB77DE9ABFDCB3CE3BBFB385932_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD0FEF32558495B35F71D9022666C3EC959509BC7(L_0, /*hidden argument*/Dictionary_2__ctor_mD0FEF32558495B35F71D9022666C3EC959509BC7_RuntimeMethod_var);
		((VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_StaticFields*)il2cpp_codegen_static_fields_for(VariableManager_tA87812ED4ECA8A2B66A283E81260DC63EEAB0A6F_il2cpp_TypeInfo_var))->set_s_RegisteredVariables_1(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void Unity.LEGO.Game.GameFlowManager/<StartGameLockLookRotation>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGameLockLookRotationU3Ed__20__ctor_mE05350819EEF351527BA49485EABB6E9280832F5 (U3CStartGameLockLookRotationU3Ed__20_tB001861D74C22D74557045D8B0B1834ACF2194B4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Unity.LEGO.Game.GameFlowManager/<StartGameLockLookRotation>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGameLockLookRotationU3Ed__20_System_IDisposable_Dispose_mB3DFA8E62B1C9B5FA6A335BC7B46CB23D12C7E6C (U3CStartGameLockLookRotationU3Ed__20_tB001861D74C22D74557045D8B0B1834ACF2194B4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Unity.LEGO.Game.GameFlowManager/<StartGameLockLookRotation>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartGameLockLookRotationU3Ed__20_MoveNext_m5F135ABEEF5E5912286DCFFCD64373EE47266326 (U3CStartGameLockLookRotationU3Ed__20_tB001861D74C22D74557045D8B0B1834ACF2194B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_008c;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0093;
	}

IL_0020:
	{
		// m_StartGameLockedControllerTimer -= Time.deltaTime;
		GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * L_4 = V_1;
		GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * L_5 = V_1;
		float L_6 = L_5->get_m_StartGameLockedControllerTimer_8();
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		L_4->set_m_StartGameLockedControllerTimer_8(((float)il2cpp_codegen_subtract((float)L_6, (float)L_7)));
		// if (m_StartGameLockedControllerTimer < 0.0f)
		GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * L_8 = V_1;
		float L_9 = L_8->get_m_StartGameLockedControllerTimer_8();
		if ((!(((float)L_9) < ((float)(0.0f)))))
		{
			goto IL_0078;
		}
	}
	{
		// if (m_FreeLookCamera)
		GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * L_10 = V_1;
		CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * L_11 = L_10->get_m_FreeLookCamera_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0078;
		}
	}
	{
		// m_FreeLookCamera.m_XAxis.m_InputAxisName = m_ControllerAxisXName;
		GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * L_13 = V_1;
		CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * L_14 = L_13->get_m_FreeLookCamera_13();
		AxisState_t376D19829A676B98933979F42845F6476071DDE8 * L_15 = L_14->get_address_of_m_XAxis_27();
		GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * L_16 = V_1;
		String_t* L_17 = L_16->get_m_ControllerAxisXName_14();
		L_15->set_m_InputAxisName_5(L_17);
		// m_FreeLookCamera.m_YAxis.m_InputAxisName = m_ControllerAxisYName;
		GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * L_18 = V_1;
		CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * L_19 = L_18->get_m_FreeLookCamera_13();
		AxisState_t376D19829A676B98933979F42845F6476071DDE8 * L_20 = L_19->get_address_of_m_YAxis_25();
		GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * L_21 = V_1;
		String_t* L_22 = L_21->get_m_ControllerAxisYName_15();
		L_20->set_m_InputAxisName_5(L_22);
	}

IL_0078:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_23 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_23, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_23);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_008c:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0093:
	{
		// while (m_StartGameLockedControllerTimer > 0.0f)
		GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * L_24 = V_1;
		float L_25 = L_24->get_m_StartGameLockedControllerTimer_8();
		if ((((float)L_25) > ((float)(0.0f))))
		{
			goto IL_0020;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Unity.LEGO.Game.GameFlowManager/<StartGameLockLookRotation>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartGameLockLookRotationU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m332B7CB5DDDCDAD24E7AAAA730A41A534B59001F (U3CStartGameLockLookRotationU3Ed__20_tB001861D74C22D74557045D8B0B1834ACF2194B4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Unity.LEGO.Game.GameFlowManager/<StartGameLockLookRotation>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGameLockLookRotationU3Ed__20_System_Collections_IEnumerator_Reset_m49D92F5EFC2FF71D15462304B9F4D91D9C5653EA (U3CStartGameLockLookRotationU3Ed__20_tB001861D74C22D74557045D8B0B1834ACF2194B4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartGameLockLookRotationU3Ed__20_System_Collections_IEnumerator_Reset_m49D92F5EFC2FF71D15462304B9F4D91D9C5653EA_RuntimeMethod_var)));
	}
}
// System.Object Unity.LEGO.Game.GameFlowManager/<StartGameLockLookRotation>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartGameLockLookRotationU3Ed__20_System_Collections_IEnumerator_get_Current_m7BF36596A4DEE689EAE435E78E88FFD5A2627B64 (U3CStartGameLockLookRotationU3Ed__20_tB001861D74C22D74557045D8B0B1834ACF2194B4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.LEGO.Game.GameFlowManager/<ZoomInOnPlayer>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CZoomInOnPlayerU3Ed__24__ctor_mE9418490899C1F6342941AD548B15BD69CFCEA73 (U3CZoomInOnPlayerU3Ed__24_t934444AB2415126D28E6C233B30EA61E09C2E475 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Unity.LEGO.Game.GameFlowManager/<ZoomInOnPlayer>d__24::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CZoomInOnPlayerU3Ed__24_System_IDisposable_Dispose_m7E8DB0C0B58D7A197CBBD4CF4EEDB926CB461943 (U3CZoomInOnPlayerU3Ed__24_t934444AB2415126D28E6C233B30EA61E09C2E475 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Unity.LEGO.Game.GameFlowManager/<ZoomInOnPlayer>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CZoomInOnPlayerU3Ed__24_MoveNext_mD674A9E0650E79E8A93F70EADC0DF0364D40F84E (U3CZoomInOnPlayerU3Ed__24_t934444AB2415126D28E6C233B30EA61E09C2E475 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0135;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (m_FreeLookCamera)
		GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * L_4 = V_1;
		CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * L_5 = L_4->get_m_FreeLookCamera_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_014c;
		}
	}
	{
		// m_FreeLookCamera.m_XAxis.m_InputAxisValue = 0.0f;
		GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * L_7 = V_1;
		CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * L_8 = L_7->get_m_FreeLookCamera_13();
		AxisState_t376D19829A676B98933979F42845F6476071DDE8 * L_9 = L_8->get_address_of_m_XAxis_27();
		L_9->set_m_InputAxisValue_6((0.0f));
		// m_FreeLookCamera.m_YAxis.m_InputAxisValue = 0.0f;
		GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * L_10 = V_1;
		CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * L_11 = L_10->get_m_FreeLookCamera_13();
		AxisState_t376D19829A676B98933979F42845F6476071DDE8 * L_12 = L_11->get_address_of_m_YAxis_25();
		L_12->set_m_InputAxisValue_6((0.0f));
		// m_FreeLookCamera.m_XAxis.m_InputAxisName = "";
		GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * L_13 = V_1;
		CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * L_14 = L_13->get_m_FreeLookCamera_13();
		AxisState_t376D19829A676B98933979F42845F6476071DDE8 * L_15 = L_14->get_address_of_m_XAxis_27();
		L_15->set_m_InputAxisName_5(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// m_FreeLookCamera.m_YAxis.m_InputAxisName = "";
		GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * L_16 = V_1;
		CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * L_17 = L_16->get_m_FreeLookCamera_13();
		AxisState_t376D19829A676B98933979F42845F6476071DDE8 * L_18 = L_17->get_address_of_m_YAxis_25();
		L_18->set_m_InputAxisName_5(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// var zoomFactor = 1.0f;
		__this->set_U3CzoomFactorU3E5__2_3((1.0f));
		// float middleRigZoomFactor = m_FreeLookCamera.m_Orbits[1].m_Radius;
		GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * L_19 = V_1;
		CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * L_20 = L_19->get_m_FreeLookCamera_13();
		OrbitU5BU5D_t6E72D519BC4799C53639700DA84A0B5D9A8843C7* L_21 = L_20->get_m_Orbits_32();
		float L_22 = ((L_21)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1)))->get_m_Radius_1();
		__this->set_U3CmiddleRigZoomFactorU3E5__3_4(L_22);
		goto IL_013c;
	}

IL_00b1:
	{
		// m_FreeLookCamera.m_YAxis.Value = Mathf.Lerp(m_FreeLookCamera.m_YAxis.Value, 0.6f, 3.0f * Time.deltaTime);    // Ensure the vertical axis reset to a reasonable value (0.6 is the default prefab value) with a simple lerp
		GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * L_23 = V_1;
		CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * L_24 = L_23->get_m_FreeLookCamera_13();
		AxisState_t376D19829A676B98933979F42845F6476071DDE8 * L_25 = L_24->get_address_of_m_YAxis_25();
		GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * L_26 = V_1;
		CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * L_27 = L_26->get_m_FreeLookCamera_13();
		AxisState_t376D19829A676B98933979F42845F6476071DDE8 * L_28 = L_27->get_address_of_m_YAxis_25();
		float L_29 = L_28->get_Value_0();
		float L_30;
		L_30 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_31;
		L_31 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_29, (0.600000024f), ((float)il2cpp_codegen_multiply((float)(3.0f), (float)L_30)), /*hidden argument*/NULL);
		L_25->set_Value_0(L_31);
		// zoomFactor -= 0.1f * Time.deltaTime;
		float L_32 = __this->get_U3CzoomFactorU3E5__2_3();
		float L_33;
		L_33 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CzoomFactorU3E5__2_3(((float)il2cpp_codegen_subtract((float)L_32, (float)((float)il2cpp_codegen_multiply((float)(0.100000001f), (float)L_33)))));
		// m_FreeLookCamera.m_Orbits[1].m_Radius = middleRigZoomFactor * zoomFactor;
		GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * L_34 = V_1;
		CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * L_35 = L_34->get_m_FreeLookCamera_13();
		OrbitU5BU5D_t6E72D519BC4799C53639700DA84A0B5D9A8843C7* L_36 = L_35->get_m_Orbits_32();
		float L_37 = __this->get_U3CmiddleRigZoomFactorU3E5__3_4();
		float L_38 = __this->get_U3CzoomFactorU3E5__2_3();
		((L_36)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1)))->set_m_Radius_1(((float)il2cpp_codegen_multiply((float)L_37, (float)L_38)));
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_39 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_39, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_39);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0135:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_013c:
	{
		// while (zoomFactor > 0.3f)
		float L_40 = __this->get_U3CzoomFactorU3E5__2_3();
		if ((((float)L_40) > ((float)(0.300000012f))))
		{
			goto IL_00b1;
		}
	}

IL_014c:
	{
		// }
		return (bool)0;
	}
}
// System.Object Unity.LEGO.Game.GameFlowManager/<ZoomInOnPlayer>d__24::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CZoomInOnPlayerU3Ed__24_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEAE01B33BB84D32BD929B0FF5FCC0067FC9303B9 (U3CZoomInOnPlayerU3Ed__24_t934444AB2415126D28E6C233B30EA61E09C2E475 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Unity.LEGO.Game.GameFlowManager/<ZoomInOnPlayer>d__24::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CZoomInOnPlayerU3Ed__24_System_Collections_IEnumerator_Reset_mD1839EC25A7E067A7DA3CBC5CEB34CE744739410 (U3CZoomInOnPlayerU3Ed__24_t934444AB2415126D28E6C233B30EA61E09C2E475 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CZoomInOnPlayerU3Ed__24_System_Collections_IEnumerator_Reset_mD1839EC25A7E067A7DA3CBC5CEB34CE744739410_RuntimeMethod_var)));
	}
}
// System.Object Unity.LEGO.Game.GameFlowManager/<ZoomInOnPlayer>d__24::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CZoomInOnPlayerU3Ed__24_System_Collections_IEnumerator_get_Current_mEAAB6E67B8AA5150AE5E7C2291CEF7919D3B14E4 (U3CZoomInOnPlayerU3Ed__24_t934444AB2415126D28E6C233B30EA61E09C2E475 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.LEGO.Game.ObjectiveManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m69A2F613C6DCC70B5C9E55E663917397C17BDA1E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t24FA5B43B7BC487E38C841E176CAD482D559CA6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t24FA5B43B7BC487E38C841E176CAD482D559CA6C * L_0 = (U3CU3Ec_t24FA5B43B7BC487E38C841E176CAD482D559CA6C *)il2cpp_codegen_object_new(U3CU3Ec_t24FA5B43B7BC487E38C841E176CAD482D559CA6C_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mB095F55062D2C423F0D4D6B365A4149B66751A9A(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t24FA5B43B7BC487E38C841E176CAD482D559CA6C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t24FA5B43B7BC487E38C841E176CAD482D559CA6C_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.LEGO.Game.ObjectiveManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB095F55062D2C423F0D4D6B365A4149B66751A9A (U3CU3Ec_t24FA5B43B7BC487E38C841E176CAD482D559CA6C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Unity.LEGO.Game.ObjectiveManager/<>c::<UpdateGameStatus>b__6_0(Unity.LEGO.Game.IObjective)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CUpdateGameStatusU3Eb__6_0_m3595A74676E968B6860149BC401DAC07E95F7F16 (U3CU3Ec_t24FA5B43B7BC487E38C841E176CAD482D559CA6C * __this, RuntimeObject* ___objective0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObjective_t1F2AF2933B14EFA9E15DFFF4A19A0E48F1D3B4BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Won = m_Objectives.Exists(objective => !objective.m_Lose);
		RuntimeObject* L_0 = ___objective0;
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean Unity.LEGO.Game.IObjective::get_m_Lose() */, IObjective_t1F2AF2933B14EFA9E15DFFF4A19A0E48F1D3B4BD_il2cpp_TypeInfo_var, L_0);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameFlowManager_get_GameIsEnding_m2AF7AB4861E9768FA13A49CC67F45902D4DA9679_inline (GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * __this, const RuntimeMethod* method)
{
	{
		// public bool GameIsEnding { get; private set; }
		bool L_0 = __this->get_U3CGameIsEndingU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameFlowManager_set_PreviousScene_m2EF64D7CBEDBE34B5045C2EC345E9646FB7CCDC2_inline (String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string PreviousScene { get; private set; }
		String_t* L_0 = ___value0;
		((GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548_StaticFields*)il2cpp_codegen_static_fields_for(GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548_il2cpp_TypeInfo_var))->set_U3CPreviousSceneU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameFlowManager_set_GameIsEnding_mAD7A0D7A1E09612CAB5DA73916D731607171BE43_inline (GameFlowManager_tB3C94A0E91922B9EA73115A0B41724FAF69BA548 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool GameIsEnding { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CGameIsEndingU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
