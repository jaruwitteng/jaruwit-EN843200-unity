#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Func`2<System.ValueTuple`2<LEGOModelImporter.ConnectionField,LEGOModelImporter.ConnectionField>,System.Single>
struct Func_2_t57CB2E957D22C408F1DA9DC170984BEB28D8A7E8;
// System.Collections.Generic.HashSet`1<System.ValueTuple`2<LEGOModelImporter.Connection,LEGOModelImporter.Connection>>
struct HashSet_1_t69A741B8DFFFBB102061CF32AD5D84BF4646522A;
// System.Collections.Generic.HashSet`1<System.ValueTuple`2<System.Object,System.Object>>
struct HashSet_1_t4627A2F84CC471FF3CA9E1574EFC11A9D891A90B;
// System.Collections.Generic.HashSet`1<System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>>
struct HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3;
// System.Collections.Generic.HashSet`1<LEGOModelImporter.Brick>
struct HashSet_1_tE7464E1D6A8E9C3336CB7C6DE24FD30426BA3FF0;
// System.Collections.Generic.HashSet`1<UnityEngine.Collider>
struct HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA;
// System.Collections.Generic.HashSet`1<LEGOModelImporter.ConnectionField>
struct HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.ICollection`1<System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>>
struct ICollection_1_tC8149074F94A3B74D34D6AE78AC0B18A7F0BB31B;
// System.Collections.Generic.ICollection`1<LEGOModelImporter.Brick>
struct ICollection_1_tBC7A2C7988F8248D048F8026690AF2D62BEE6A97;
// System.Collections.Generic.ICollection`1<LEGOModelImporter.ConnectionField>
struct ICollection_1_tE1AE56173CB454E5CD870D62746FFFF5FD05DCD1;
// System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<LEGOModelImporter.Connection,LEGOModelImporter.Connection>>
struct IEnumerator_1_t4D9C760EDB439DBAF6222CEEC4206C6CDEED4169;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Collider>
struct IEnumerator_1_t0723B74887EE5F31586F86866B3D1D5D7EF1BD4A;
// System.Collections.Generic.IEnumerator`1<LEGOModelImporter.ConnectionField>
struct IEnumerator_1_tF4D2B143E53656E27F8881F9F3BAFE2DC75322B5;
// System.Collections.Generic.IEqualityComparer`1<System.ValueTuple`2<LEGOModelImporter.Connection,LEGOModelImporter.Connection>>
struct IEqualityComparer_1_t90A081BD7D2EE8992DBC89BA0284CCC6DC6DC507;
// System.Collections.Generic.IEqualityComparer`1<System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>>
struct IEqualityComparer_1_t06B2F3ABB69EC24511B7E7356C3EDE1520B65E58;
// System.Collections.Generic.IEqualityComparer`1<LEGOModelImporter.Brick>
struct IEqualityComparer_1_tA948E6A60112C9ABE815609F8F273CC449803F52;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Collider>
struct IEqualityComparer_1_t1D6191B84F5375FD5833B594CD11EF08EBEC749A;
// System.Collections.Generic.IEqualityComparer`1<LEGOModelImporter.ConnectionField>
struct IEqualityComparer_1_t896A2702A17D2999880ACE8FDB7D5A00977F1A20;
// System.Collections.Generic.List`1<System.ValueTuple`2<LEGOModelImporter.AxleFeature,LEGOModelImporter.AxleFeature>>
struct List_1_t4D75E148C8A391EA6FE426AA11BCF9320E8D69A1;
// System.Collections.Generic.List`1<System.ValueTuple`2<LEGOModelImporter.FixedFeature,LEGOModelImporter.FixedFeature>>
struct List_1_t4A4637B03D6E6F14E0E9EF3A64B6F9152CA7524D;
// System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.Object>>
struct List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC;
// System.Collections.Generic.List`1<System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>>
struct List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F;
// System.Collections.Generic.List`1<LEGOModelImporter.AxleField>
struct List_1_t1B8E248437FE7A019F683CE60E7553A98F8C89DD;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B;
// System.Collections.Generic.List`1<LEGOModelImporter.CullingCameraConfig>
struct List_1_t1CAAFB6184A6519BE66C670D00C798E77213AE69;
// System.Collections.Generic.List`1<LEGOModelImporter.FixedField>
struct List_1_t1AA4D82EFDD45B199AA932D2FCCCD9CFB46B055A;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<LEGOModelImporter.Knob>
struct List_1_tDA08591435D35253AF91AF0FD289366260969280;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<LEGOModelImporter.Part>
struct List_1_tCCC9F5914E615F8C549029649482DADC9A964202;
// System.Collections.Generic.List`1<LEGOModelImporter.PlanarField>
struct List_1_tEBF6868521218B8961BF50B2E3E2A4808B56253D;
// System.Collections.Generic.List`1<UnityEngine.Quaternion>
struct List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB;
// System.Collections.Generic.List`1<LEGOModelImporter.Tube>
struct List_1_t55FB50AB728746C7A4CE36B13BC11C4BDCBC1608;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<LEGOModelImporter.AxleField/ConnectionTuple>
struct List_1_t223F22A202FC8F6ECA4154CF2988538828E7AE90;
// System.Collections.Generic.HashSet`1/Slot<System.ValueTuple`2<LEGOModelImporter.Connection,LEGOModelImporter.Connection>>[]
struct SlotU5BU5D_tB061B5751D211AC6AFAABBC70876F887E0485E67;
// System.Collections.Generic.HashSet`1/Slot<System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>>[]
struct SlotU5BU5D_t5607C055196200376494A9B9B2B7594D4C496A73;
// System.Collections.Generic.HashSet`1/Slot<LEGOModelImporter.Brick>[]
struct SlotU5BU5D_t2F2C92C116A7775FE694681FADE23C1324953E3D;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.Collider>[]
struct SlotU5BU5D_t3A57FA0A706CA3121A8774FC422FAB47992BDAF9;
// System.Collections.Generic.HashSet`1/Slot<LEGOModelImporter.ConnectionField>[]
struct SlotU5BU5D_t43D95A628F6C4B191C3C8F76F0FB6EE54C8D9D10;
// System.ValueTuple`2<LEGOModelImporter.AxleFeature,LEGOModelImporter.AxleFeature>[]
struct ValueTuple_2U5BU5D_t3F83F614DEC00CCE811A6A732E16D7449EF8F371;
// System.ValueTuple`2<LEGOModelImporter.FixedFeature,LEGOModelImporter.FixedFeature>[]
struct ValueTuple_2U5BU5D_tF556C44A26D8CB90412B1A8F413F2C3CA8DA0324;
// System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>[]
struct ValueTuple_2U5BU5D_t2CF270122DEF6F66A4DA679CABA8D6CC02FE56EC;
// LEGOModelImporter.AxleField[]
struct AxleFieldU5BU5D_t7D953E5B4E07F4CC92141C26CD4B4F66DDFE9C57;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486;
// LEGOModelImporter.CullingCameraConfig[]
struct CullingCameraConfigU5BU5D_t1B751DDA30AF54DE8FED3FB654CBA86897462BA3;
// LEGOModelImporter.FixedField[]
struct FixedFieldU5BU5D_t4D1A0EA7DC225B2DC74D4A517ABD3AEE4EF8A0AB;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// LEGOModelImporter.Knob[]
struct KnobU5BU5D_tAD3ABE6AFD729B873E42C2CCC7681A1FC31A11E5;
// LEGOModelImporter.PlanarFeature[]
struct PlanarFeatureU5BU5D_tBC900E26A810AE80A97E3E8D3610EAE6CB31145B;
// LEGOModelImporter.PlanarField[]
struct PlanarFieldU5BU5D_tEF9132DF8E9137D4008C27252DB94FE8D7D05E50;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// LEGOModelImporter.Tube[]
struct TubeU5BU5D_tD681E235446BC648509986A61A228ABCC52E468B;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// LEGOModelImporter.Connection/ConnectionInteraction[]
struct ConnectionInteractionU5BU5D_t737E52CEDFCB80EA9BA3DE6B36798AD12B0593EF;
// LEGOModelImporter.PlanarField/ConnectionTuple[]
struct ConnectionTupleU5BU5D_t80F8B02DEBE727BD9FA89FE2E09F0CF9815F7D97;
// LEGOModelImporter.AxleFeature
struct AxleFeature_t721BA35E67B746326439A431C1DA97F1355138F2;
// LEGOModelImporter.AxleField
struct AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5;
// LEGOModelImporter.Brick
struct Brick_t4E2078428A9FDB510CB1D407CE70A9084C8A72EB;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// LEGOModelImporter.Colliders
struct Colliders_t8550080A1AAF3F64E65676118544E13AE34DF6BE;
// LEGOModelImporter.CommonPart
struct CommonPart_t5CE5E257A8662BD13B645124A193CA0A47E16BE0;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// LEGOModelImporter.Connection
struct Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5;
// LEGOModelImporter.ConnectionField
struct ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC;
// LEGOModelImporter.Connectivity
struct Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF;
// LEGOModelImporter.CullingCameraConfig
struct CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65;
// LEGOModelImporter.DictionaryIntToModelGroupImportSettings
struct DictionaryIntToModelGroupImportSettings_t56FA7C0F43855C4E235FD514C714028A2472C1D0;
// LEGOModelImporter.FixedFeature
struct FixedFeature_tB93897E645B98A4B477010C4669270FFB5CC96A4;
// LEGOModelImporter.FixedField
struct FixedField_t54C0D973EBCF8097CB0AF444508F22ADFA6EA79F;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// LEGOModelImporter.Knob
struct Knob_t2533F4A87DCCD07FC743E002589B2955D87BCC19;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// LEGOModelImporter.Model
struct Model_t0BB06671045A247BE4A257DFD651FAD578AE9C46;
// LEGOModelImporter.ModelGroup
struct ModelGroup_t5EEDBE74F9D50BE94CCF3AA746BB704C43495AE9;
// LEGOModelImporter.ModelGroupImportSettings
struct ModelGroupImportSettings_t0A6FFB361CE6EBB21970CACDCF2C5FAAF507E714;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// LEGOModelImporter.ParentChecker
struct ParentChecker_t670B3E94478A84284EBABF400B1783284662C347;
// LEGOModelImporter.Part
struct Part_tF559450A02A6BE32049B9167745FA5412AF33987;
// LEGOModelImporter.PlanarFeature
struct PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445;
// LEGOModelImporter.PlanarField
struct PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// LEGOModelImporter.ScaleChecker
struct ScaleChecker_t01DBF635B151BAAEDEE8A0A793D2A604CC9B7D7C;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// UnityEngine.SphereCollider
struct SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// LEGOModelImporter.Tube
struct Tube_t2D49285A2D8CDFDFFDC7D96CF4BA7FAD9950F5C0;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// LEGOModelImporter.AxleField/ConnectionTuple
struct ConnectionTuple_t87F3138616E6A6C55E1E7CBFF8178D55C4A9A70B;
// LEGOModelImporter.BrickBuildingUtility/<>c
struct U3CU3Ec_t3CB44C086FE13BB27D8E8857E6F65F503B89F717;
// LEGOModelImporter.BrickBuildingUtility/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_t2F583D8DB9676E67215E16602C3DE9DE725A658E;
// LEGOModelImporter.BrickBuildingUtility/<>c__DisplayClass42_0
struct U3CU3Ec__DisplayClass42_0_t1A87E3B23D5D9B02BAF2098EE6D9E0C2508D2FFA;
// LEGOModelImporter.Colliders/<GetEnumerator>d__3
struct U3CGetEnumeratorU3Ed__3_t894FD38B75EDD4C1A39A55BADD3FC15B81275C7C;
// LEGOModelImporter.Connectivity/<GetEnumerator>d__10
struct U3CGetEnumeratorU3Ed__10_t46BBD5E759B3EEB496C5555266DCBBCF89D009D4;
// LEGOModelImporter.Connectivity/ConnectionIterator
struct ConnectionIterator_t415B158FEA77755C5FD134944C1DCCAED078E30B;
// LEGOModelImporter.MathUtils/Cone
struct Cone_t8B730118881F66B4A24038D5755C2B6F513DE4B5;
// LEGOModelImporter.PlanarField/ConnectionTuple
struct ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F;
// LEGOModelImporter.Connectivity/ConnectionIterator/<GetEnumerator>d__4
struct U3CGetEnumeratorU3Ed__4_t323214E45DA8AE991432AD6782BA8C009E277613;

IL2CPP_EXTERN_C RuntimeClass* AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BrickBuildingUtility_t9BB0DA76B8CCBFAB0FD4E7A51C3D7411952C767E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionInteractionU5BU5D_t737E52CEDFCB80EA9BA3DE6B36798AD12B0593EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FixedField_t54C0D973EBCF8097CB0AF444508F22ADFA6EA79F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t69A741B8DFFFBB102061CF32AD5D84BF4646522A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tBC7A2C7988F8248D048F8026690AF2D62BEE6A97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tE1AE56173CB454E5CD870D62746FFFF5FD05DCD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tC4903CA757C4A4432618D1F61807A6AD93ABFE3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t0723B74887EE5F31586F86866B3D1D5D7EF1BD4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t5B82E38E5267CC9F7B61159C3744F2FFBF0E6022_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tF4D2B143E53656E27F8881F9F3BAFE2DC75322B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1CAAFB6184A6519BE66C670D00C798E77213AE69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4A4637B03D6E6F14E0E9EF3A64B6F9152CA7524D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4D75E148C8A391EA6FE426AA11BCF9320E8D69A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t55FB50AB728746C7A4CE36B13BC11C4BDCBC1608_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDA08591435D35253AF91AF0FD289366260969280_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ModelGroup_t5EEDBE74F9D50BE94CCF3AA746BB704C43495AE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MouldingColour_t8656B0A2D1A075B8656AD830D6F1A8BC4195C298_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Part_tF559450A02A6BE32049B9167745FA5412AF33987_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumeratorU3Ed__4_t323214E45DA8AE991432AD6782BA8C009E277613_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3CB44C086FE13BB27D8E8857E6F65F503B89F717_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueTuple_2_tE31844093EA6E41DA2EECECABE9C6C6D09CD170D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t59291B036D75DC101EA8879D273965E199D84B15____AC59E4A04B2979B76D38C898EE309AC40E5A388C15889344C5CC602645E5C076_1_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral8EF2CE795BCB02D4FB0B9524739CB0650EBE1194;
IL2CPP_EXTERN_C String_t* _stringLiteralE9AB80EB4C5665A68EB04E23992D4A81F117C090;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisPart_tF559450A02A6BE32049B9167745FA5412AF33987_mBAB9DC3A11167A654F06B0CC064E6F14EADFCF93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65_m4124B4A352DBC23504D5D2922BD6E949BFDB9489_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m08CF469D7C501041243B4B790EFF3F7ECDA57B17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0CD42E9899C12DFE9E5FD08407958AAAA325B2FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1AC04F9D458AB26A6C4ED08757F6CBD2874C6DAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m25810F0420A5BCBCFFBF0440A3A5830169B16850_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4144D82524B48FA317E229268511BD7222A672FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m5093995C07A147520FEBE867F98F2D27C7CDECB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m5FD7C550BAD42F76B82211BCEE69C423DE0C8270_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m750DA8D47E352DBC654782E48523B38EE4C8AD30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m81B7A0C7B4F59F66CCE6CB7DF8A3168F231DED97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD9BA2B185D7A3DCC3A5F882F72711C501FE8743E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF8FE0DBAFD36F2DCC7576FC15E1DF31A7B18B9CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m15C3343C38F5263A4598DCEE6DA20343007A94BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m1DDC1086B8CE59E62530A4550C6AEF632A808D58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m21DE5F6F4F02A017CF13A33503F07A028D8C23DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m2F55082A50A2A575723488ACFFA75DFCB89E6A95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m46DD87DB689C7F33B55542D9D9E4F6AA8C522CFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m493D962CE026516E2269E90F978CB8404CDDA831_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m4A2C59C9E61A913787CE893C7F2F243AA82AE08F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m58A7AA6622ED93EA4FC726FA83E48C3C346F5B91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5C79C0EB3EAC684514CA5A703D1FF749464B8A4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9043E8A15BAECAB48DDA51412A0C8192CAF39572_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE27C69036A3B097CAC95861472954FC1788A8FDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m0CD9B77F7E73370E5B257EB20C852508E7BB02F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m3B897B3683F04E335ED6F79B725C6194C9FCEE18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m713E3A8ED8D32513F58164C403488D00E61188FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m731F0CD1A6FC3AA134F92A5FF4620AD6F70F97E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7C3DB20F7490CF8BA2031C1C8873B083D1E9D6E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m852DFE900EC23728666BBFCFB311761EE4270967_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9C08DFCCDD0FD5C1BD7C7DF2C48741761F5AB0CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB0C22AC582C54E6D79D408B5BB1F21E7DCF27EDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mBED58BB2E0EED68287506206BFF61E984C4C3317_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mE10FAFCFFF757ABAADFDCD5744D4FD09136B35E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mEAEC25F05C0DDA413D41FF18653B78ADA596B27A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m4DA62069A44D6CF2BA81EBA9EB723221F23754D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m5FA07E777D1D5195CEDB21D3A8B79883525F266A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m6E7231630320E685DE2F9F1ECD4638CE9652551A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mEE5C2C6FFD1C4DF64BCCA3972352B78FE4FF1B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_m480D16A39C17FA7EAE3DBA201077B9955841B37D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m514613CAD53B23779AE116A896E222CFAC64015F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_mCFCFDF66BC7C228600AF49A478B4E3EF068B9782_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m2578708ADD8B7170D86C64A423A6A9F2966AD7A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mA94817DDAA91845521271BA333AA79454B98E4D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mDECF73971EA6732CFBED1E356E48E1F5804CCCBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mEA02ECDF08DE797E2DA2CAF23CF363D6CFB67889_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m98A5E810B3DC6EFA75E566CF401484790B608BB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m08039C498B0989ED96EEC96EC2DB04C028DAEA90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m113FCF5FA38176C82449EBD461365CD1958DDA77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m257D50DDBEA83CAA47F7D322A44BC0D1F148A1B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m58E2D47394110BC4AC8216E1ED13CE109A1DCF57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m5A4380C5A74D43813622531A3DFE226565955E38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m5DFD9E782F5FE9EA908BE63C61FB3C1D56061259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7638E8537FC9C1FDFC115049037106C8006B4FF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m9B05D6655D3872809C8C39A9DC867321433CBA06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mFED7103EFF2AD902BDD0676C82F0CB3368E3466F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m16456A7292CE17197A0C71EAC02C0E57291AF1A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8408480FB919A52C36A120C2FBBFB30A3DEFCFA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m960E78FC6504C7FDE2B5E238B847171E035A566B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA51EC33F46F53D205E51B06E299853D167E5B50D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAF0B9D01231BA918A5FC41F38907C86CDEFF3D18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD29527BFEFCBDB48E903FE11701483211C42C20C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__10_System_Collections_IEnumerator_Reset_m57C68676C9989F3A1CF1677249F7E7144CB5D0D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__3_System_Collections_IEnumerator_Reset_m60E2F8EF8E184319A1F2AB94C8E358943F3AA46D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__4_System_Collections_IEnumerator_Reset_m13CF60923B14E6770FFA8197ACB211E8C8920E75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_m403716C8ED2D73C79170287DA962B5F8ABB21F6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_mFF3538F7A84D1D0A9AF7312B4D28100580E26E2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486;
struct PlanarFeatureU5BU5D_tBC900E26A810AE80A97E3E8D3610EAE6CB31145B;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
struct ConnectionInteractionU5BU5D_t737E52CEDFCB80EA9BA3DE6B36798AD12B0593EF;
struct ConnectionTupleU5BU5D_t80F8B02DEBE727BD9FA89FE2E09F0CF9815F7D97;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.HashSet`1<System.ValueTuple`2<LEGOModelImporter.Connection,LEGOModelImporter.Connection>>
struct HashSet_1_t69A741B8DFFFBB102061CF32AD5D84BF4646522A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tB061B5751D211AC6AFAABBC70876F887E0485E67* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t69A741B8DFFFBB102061CF32AD5D84BF4646522A, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t69A741B8DFFFBB102061CF32AD5D84BF4646522A, ____slots_8)); }
	inline SlotU5BU5D_tB061B5751D211AC6AFAABBC70876F887E0485E67* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tB061B5751D211AC6AFAABBC70876F887E0485E67** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tB061B5751D211AC6AFAABBC70876F887E0485E67* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t69A741B8DFFFBB102061CF32AD5D84BF4646522A, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t69A741B8DFFFBB102061CF32AD5D84BF4646522A, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t69A741B8DFFFBB102061CF32AD5D84BF4646522A, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t69A741B8DFFFBB102061CF32AD5D84BF4646522A, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t69A741B8DFFFBB102061CF32AD5D84BF4646522A, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t69A741B8DFFFBB102061CF32AD5D84BF4646522A, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>>
struct HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t5607C055196200376494A9B9B2B7594D4C496A73* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3, ____slots_8)); }
	inline SlotU5BU5D_t5607C055196200376494A9B9B2B7594D4C496A73* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t5607C055196200376494A9B9B2B7594D4C496A73** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t5607C055196200376494A9B9B2B7594D4C496A73* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<LEGOModelImporter.Brick>
struct HashSet_1_tE7464E1D6A8E9C3336CB7C6DE24FD30426BA3FF0  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t2F2C92C116A7775FE694681FADE23C1324953E3D* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_tE7464E1D6A8E9C3336CB7C6DE24FD30426BA3FF0, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_tE7464E1D6A8E9C3336CB7C6DE24FD30426BA3FF0, ____slots_8)); }
	inline SlotU5BU5D_t2F2C92C116A7775FE694681FADE23C1324953E3D* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t2F2C92C116A7775FE694681FADE23C1324953E3D** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t2F2C92C116A7775FE694681FADE23C1324953E3D* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_tE7464E1D6A8E9C3336CB7C6DE24FD30426BA3FF0, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_tE7464E1D6A8E9C3336CB7C6DE24FD30426BA3FF0, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_tE7464E1D6A8E9C3336CB7C6DE24FD30426BA3FF0, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_tE7464E1D6A8E9C3336CB7C6DE24FD30426BA3FF0, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_tE7464E1D6A8E9C3336CB7C6DE24FD30426BA3FF0, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_tE7464E1D6A8E9C3336CB7C6DE24FD30426BA3FF0, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<UnityEngine.Collider>
struct HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t3A57FA0A706CA3121A8774FC422FAB47992BDAF9* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA, ____slots_8)); }
	inline SlotU5BU5D_t3A57FA0A706CA3121A8774FC422FAB47992BDAF9* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t3A57FA0A706CA3121A8774FC422FAB47992BDAF9** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t3A57FA0A706CA3121A8774FC422FAB47992BDAF9* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<LEGOModelImporter.ConnectionField>
struct HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t43D95A628F6C4B191C3C8F76F0FB6EE54C8D9D10* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296, ____slots_8)); }
	inline SlotU5BU5D_t43D95A628F6C4B191C3C8F76F0FB6EE54C8D9D10* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t43D95A628F6C4B191C3C8F76F0FB6EE54C8D9D10** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t43D95A628F6C4B191C3C8F76F0FB6EE54C8D9D10* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.ValueTuple`2<LEGOModelImporter.AxleFeature,LEGOModelImporter.AxleFeature>>
struct List_1_t4D75E148C8A391EA6FE426AA11BCF9320E8D69A1  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ValueTuple_2U5BU5D_t3F83F614DEC00CCE811A6A732E16D7449EF8F371* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4D75E148C8A391EA6FE426AA11BCF9320E8D69A1, ____items_1)); }
	inline ValueTuple_2U5BU5D_t3F83F614DEC00CCE811A6A732E16D7449EF8F371* get__items_1() const { return ____items_1; }
	inline ValueTuple_2U5BU5D_t3F83F614DEC00CCE811A6A732E16D7449EF8F371** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ValueTuple_2U5BU5D_t3F83F614DEC00CCE811A6A732E16D7449EF8F371* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4D75E148C8A391EA6FE426AA11BCF9320E8D69A1, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4D75E148C8A391EA6FE426AA11BCF9320E8D69A1, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4D75E148C8A391EA6FE426AA11BCF9320E8D69A1, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4D75E148C8A391EA6FE426AA11BCF9320E8D69A1_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ValueTuple_2U5BU5D_t3F83F614DEC00CCE811A6A732E16D7449EF8F371* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4D75E148C8A391EA6FE426AA11BCF9320E8D69A1_StaticFields, ____emptyArray_5)); }
	inline ValueTuple_2U5BU5D_t3F83F614DEC00CCE811A6A732E16D7449EF8F371* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ValueTuple_2U5BU5D_t3F83F614DEC00CCE811A6A732E16D7449EF8F371** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ValueTuple_2U5BU5D_t3F83F614DEC00CCE811A6A732E16D7449EF8F371* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.ValueTuple`2<LEGOModelImporter.FixedFeature,LEGOModelImporter.FixedFeature>>
struct List_1_t4A4637B03D6E6F14E0E9EF3A64B6F9152CA7524D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ValueTuple_2U5BU5D_tF556C44A26D8CB90412B1A8F413F2C3CA8DA0324* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4A4637B03D6E6F14E0E9EF3A64B6F9152CA7524D, ____items_1)); }
	inline ValueTuple_2U5BU5D_tF556C44A26D8CB90412B1A8F413F2C3CA8DA0324* get__items_1() const { return ____items_1; }
	inline ValueTuple_2U5BU5D_tF556C44A26D8CB90412B1A8F413F2C3CA8DA0324** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ValueTuple_2U5BU5D_tF556C44A26D8CB90412B1A8F413F2C3CA8DA0324* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4A4637B03D6E6F14E0E9EF3A64B6F9152CA7524D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4A4637B03D6E6F14E0E9EF3A64B6F9152CA7524D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4A4637B03D6E6F14E0E9EF3A64B6F9152CA7524D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4A4637B03D6E6F14E0E9EF3A64B6F9152CA7524D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ValueTuple_2U5BU5D_tF556C44A26D8CB90412B1A8F413F2C3CA8DA0324* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4A4637B03D6E6F14E0E9EF3A64B6F9152CA7524D_StaticFields, ____emptyArray_5)); }
	inline ValueTuple_2U5BU5D_tF556C44A26D8CB90412B1A8F413F2C3CA8DA0324* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ValueTuple_2U5BU5D_tF556C44A26D8CB90412B1A8F413F2C3CA8DA0324** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ValueTuple_2U5BU5D_tF556C44A26D8CB90412B1A8F413F2C3CA8DA0324* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>>
struct List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ValueTuple_2U5BU5D_t2CF270122DEF6F66A4DA679CABA8D6CC02FE56EC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F, ____items_1)); }
	inline ValueTuple_2U5BU5D_t2CF270122DEF6F66A4DA679CABA8D6CC02FE56EC* get__items_1() const { return ____items_1; }
	inline ValueTuple_2U5BU5D_t2CF270122DEF6F66A4DA679CABA8D6CC02FE56EC** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ValueTuple_2U5BU5D_t2CF270122DEF6F66A4DA679CABA8D6CC02FE56EC* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ValueTuple_2U5BU5D_t2CF270122DEF6F66A4DA679CABA8D6CC02FE56EC* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F_StaticFields, ____emptyArray_5)); }
	inline ValueTuple_2U5BU5D_t2CF270122DEF6F66A4DA679CABA8D6CC02FE56EC* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ValueTuple_2U5BU5D_t2CF270122DEF6F66A4DA679CABA8D6CC02FE56EC** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ValueTuple_2U5BU5D_t2CF270122DEF6F66A4DA679CABA8D6CC02FE56EC* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<LEGOModelImporter.AxleField>
struct List_1_t1B8E248437FE7A019F683CE60E7553A98F8C89DD  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AxleFieldU5BU5D_t7D953E5B4E07F4CC92141C26CD4B4F66DDFE9C57* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1B8E248437FE7A019F683CE60E7553A98F8C89DD, ____items_1)); }
	inline AxleFieldU5BU5D_t7D953E5B4E07F4CC92141C26CD4B4F66DDFE9C57* get__items_1() const { return ____items_1; }
	inline AxleFieldU5BU5D_t7D953E5B4E07F4CC92141C26CD4B4F66DDFE9C57** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AxleFieldU5BU5D_t7D953E5B4E07F4CC92141C26CD4B4F66DDFE9C57* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1B8E248437FE7A019F683CE60E7553A98F8C89DD, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1B8E248437FE7A019F683CE60E7553A98F8C89DD, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1B8E248437FE7A019F683CE60E7553A98F8C89DD, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1B8E248437FE7A019F683CE60E7553A98F8C89DD_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AxleFieldU5BU5D_t7D953E5B4E07F4CC92141C26CD4B4F66DDFE9C57* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1B8E248437FE7A019F683CE60E7553A98F8C89DD_StaticFields, ____emptyArray_5)); }
	inline AxleFieldU5BU5D_t7D953E5B4E07F4CC92141C26CD4B4F66DDFE9C57* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AxleFieldU5BU5D_t7D953E5B4E07F4CC92141C26CD4B4F66DDFE9C57** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AxleFieldU5BU5D_t7D953E5B4E07F4CC92141C26CD4B4F66DDFE9C57* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B, ____items_1)); }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* get__items_1() const { return ____items_1; }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B_StaticFields, ____emptyArray_5)); }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<LEGOModelImporter.CullingCameraConfig>
struct List_1_t1CAAFB6184A6519BE66C670D00C798E77213AE69  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CullingCameraConfigU5BU5D_t1B751DDA30AF54DE8FED3FB654CBA86897462BA3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1CAAFB6184A6519BE66C670D00C798E77213AE69, ____items_1)); }
	inline CullingCameraConfigU5BU5D_t1B751DDA30AF54DE8FED3FB654CBA86897462BA3* get__items_1() const { return ____items_1; }
	inline CullingCameraConfigU5BU5D_t1B751DDA30AF54DE8FED3FB654CBA86897462BA3** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CullingCameraConfigU5BU5D_t1B751DDA30AF54DE8FED3FB654CBA86897462BA3* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1CAAFB6184A6519BE66C670D00C798E77213AE69, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1CAAFB6184A6519BE66C670D00C798E77213AE69, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1CAAFB6184A6519BE66C670D00C798E77213AE69, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1CAAFB6184A6519BE66C670D00C798E77213AE69_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CullingCameraConfigU5BU5D_t1B751DDA30AF54DE8FED3FB654CBA86897462BA3* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1CAAFB6184A6519BE66C670D00C798E77213AE69_StaticFields, ____emptyArray_5)); }
	inline CullingCameraConfigU5BU5D_t1B751DDA30AF54DE8FED3FB654CBA86897462BA3* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CullingCameraConfigU5BU5D_t1B751DDA30AF54DE8FED3FB654CBA86897462BA3** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CullingCameraConfigU5BU5D_t1B751DDA30AF54DE8FED3FB654CBA86897462BA3* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<LEGOModelImporter.FixedField>
struct List_1_t1AA4D82EFDD45B199AA932D2FCCCD9CFB46B055A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	FixedFieldU5BU5D_t4D1A0EA7DC225B2DC74D4A517ABD3AEE4EF8A0AB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1AA4D82EFDD45B199AA932D2FCCCD9CFB46B055A, ____items_1)); }
	inline FixedFieldU5BU5D_t4D1A0EA7DC225B2DC74D4A517ABD3AEE4EF8A0AB* get__items_1() const { return ____items_1; }
	inline FixedFieldU5BU5D_t4D1A0EA7DC225B2DC74D4A517ABD3AEE4EF8A0AB** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(FixedFieldU5BU5D_t4D1A0EA7DC225B2DC74D4A517ABD3AEE4EF8A0AB* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1AA4D82EFDD45B199AA932D2FCCCD9CFB46B055A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1AA4D82EFDD45B199AA932D2FCCCD9CFB46B055A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1AA4D82EFDD45B199AA932D2FCCCD9CFB46B055A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1AA4D82EFDD45B199AA932D2FCCCD9CFB46B055A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	FixedFieldU5BU5D_t4D1A0EA7DC225B2DC74D4A517ABD3AEE4EF8A0AB* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1AA4D82EFDD45B199AA932D2FCCCD9CFB46B055A_StaticFields, ____emptyArray_5)); }
	inline FixedFieldU5BU5D_t4D1A0EA7DC225B2DC74D4A517ABD3AEE4EF8A0AB* get__emptyArray_5() const { return ____emptyArray_5; }
	inline FixedFieldU5BU5D_t4D1A0EA7DC225B2DC74D4A517ABD3AEE4EF8A0AB** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(FixedFieldU5BU5D_t4D1A0EA7DC225B2DC74D4A517ABD3AEE4EF8A0AB* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<LEGOModelImporter.Knob>
struct List_1_tDA08591435D35253AF91AF0FD289366260969280  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KnobU5BU5D_tAD3ABE6AFD729B873E42C2CCC7681A1FC31A11E5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDA08591435D35253AF91AF0FD289366260969280, ____items_1)); }
	inline KnobU5BU5D_tAD3ABE6AFD729B873E42C2CCC7681A1FC31A11E5* get__items_1() const { return ____items_1; }
	inline KnobU5BU5D_tAD3ABE6AFD729B873E42C2CCC7681A1FC31A11E5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KnobU5BU5D_tAD3ABE6AFD729B873E42C2CCC7681A1FC31A11E5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDA08591435D35253AF91AF0FD289366260969280, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDA08591435D35253AF91AF0FD289366260969280, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDA08591435D35253AF91AF0FD289366260969280, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDA08591435D35253AF91AF0FD289366260969280_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KnobU5BU5D_tAD3ABE6AFD729B873E42C2CCC7681A1FC31A11E5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDA08591435D35253AF91AF0FD289366260969280_StaticFields, ____emptyArray_5)); }
	inline KnobU5BU5D_tAD3ABE6AFD729B873E42C2CCC7681A1FC31A11E5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KnobU5BU5D_tAD3ABE6AFD729B873E42C2CCC7681A1FC31A11E5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KnobU5BU5D_tAD3ABE6AFD729B873E42C2CCC7681A1FC31A11E5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<LEGOModelImporter.PlanarField>
struct List_1_tEBF6868521218B8961BF50B2E3E2A4808B56253D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PlanarFieldU5BU5D_tEF9132DF8E9137D4008C27252DB94FE8D7D05E50* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tEBF6868521218B8961BF50B2E3E2A4808B56253D, ____items_1)); }
	inline PlanarFieldU5BU5D_tEF9132DF8E9137D4008C27252DB94FE8D7D05E50* get__items_1() const { return ____items_1; }
	inline PlanarFieldU5BU5D_tEF9132DF8E9137D4008C27252DB94FE8D7D05E50** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PlanarFieldU5BU5D_tEF9132DF8E9137D4008C27252DB94FE8D7D05E50* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tEBF6868521218B8961BF50B2E3E2A4808B56253D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tEBF6868521218B8961BF50B2E3E2A4808B56253D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tEBF6868521218B8961BF50B2E3E2A4808B56253D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tEBF6868521218B8961BF50B2E3E2A4808B56253D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PlanarFieldU5BU5D_tEF9132DF8E9137D4008C27252DB94FE8D7D05E50* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tEBF6868521218B8961BF50B2E3E2A4808B56253D_StaticFields, ____emptyArray_5)); }
	inline PlanarFieldU5BU5D_tEF9132DF8E9137D4008C27252DB94FE8D7D05E50* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PlanarFieldU5BU5D_tEF9132DF8E9137D4008C27252DB94FE8D7D05E50** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PlanarFieldU5BU5D_tEF9132DF8E9137D4008C27252DB94FE8D7D05E50* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<LEGOModelImporter.Tube>
struct List_1_t55FB50AB728746C7A4CE36B13BC11C4BDCBC1608  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TubeU5BU5D_tD681E235446BC648509986A61A228ABCC52E468B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t55FB50AB728746C7A4CE36B13BC11C4BDCBC1608, ____items_1)); }
	inline TubeU5BU5D_tD681E235446BC648509986A61A228ABCC52E468B* get__items_1() const { return ____items_1; }
	inline TubeU5BU5D_tD681E235446BC648509986A61A228ABCC52E468B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TubeU5BU5D_tD681E235446BC648509986A61A228ABCC52E468B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t55FB50AB728746C7A4CE36B13BC11C4BDCBC1608, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t55FB50AB728746C7A4CE36B13BC11C4BDCBC1608, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t55FB50AB728746C7A4CE36B13BC11C4BDCBC1608, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t55FB50AB728746C7A4CE36B13BC11C4BDCBC1608_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TubeU5BU5D_tD681E235446BC648509986A61A228ABCC52E468B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t55FB50AB728746C7A4CE36B13BC11C4BDCBC1608_StaticFields, ____emptyArray_5)); }
	inline TubeU5BU5D_tD681E235446BC648509986A61A228ABCC52E468B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TubeU5BU5D_tD681E235446BC648509986A61A228ABCC52E468B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TubeU5BU5D_tD681E235446BC648509986A61A228ABCC52E468B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// LEGOModelImporter.Connection
struct Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5  : public RuntimeObject
{
public:
	// LEGOModelImporter.ConnectionField LEGOModelImporter.Connection::field
	ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * ___field_0;

public:
	inline static int32_t get_offset_of_field_0() { return static_cast<int32_t>(offsetof(Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5, ___field_0)); }
	inline ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * get_field_0() const { return ___field_0; }
	inline ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC ** get_address_of_field_0() { return &___field_0; }
	inline void set_field_0(ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * value)
	{
		___field_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___field_0), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// LEGOModelImporter.ModelGroupImportSettings
struct ModelGroupImportSettings_t0A6FFB361CE6EBB21970CACDCF2C5FAAF507E714  : public RuntimeObject
{
public:
	// System.Boolean LEGOModelImporter.ModelGroupImportSettings::colliders
	bool ___colliders_0;
	// System.Boolean LEGOModelImporter.ModelGroupImportSettings::connectivity
	bool ___connectivity_1;
	// System.Boolean LEGOModelImporter.ModelGroupImportSettings::isStatic
	bool ___isStatic_2;
	// System.Boolean LEGOModelImporter.ModelGroupImportSettings::lightmapped
	bool ___lightmapped_3;
	// System.Boolean LEGOModelImporter.ModelGroupImportSettings::randomizeRotation
	bool ___randomizeRotation_4;
	// System.Int32 LEGOModelImporter.ModelGroupImportSettings::lod
	int32_t ___lod_5;

public:
	inline static int32_t get_offset_of_colliders_0() { return static_cast<int32_t>(offsetof(ModelGroupImportSettings_t0A6FFB361CE6EBB21970CACDCF2C5FAAF507E714, ___colliders_0)); }
	inline bool get_colliders_0() const { return ___colliders_0; }
	inline bool* get_address_of_colliders_0() { return &___colliders_0; }
	inline void set_colliders_0(bool value)
	{
		___colliders_0 = value;
	}

	inline static int32_t get_offset_of_connectivity_1() { return static_cast<int32_t>(offsetof(ModelGroupImportSettings_t0A6FFB361CE6EBB21970CACDCF2C5FAAF507E714, ___connectivity_1)); }
	inline bool get_connectivity_1() const { return ___connectivity_1; }
	inline bool* get_address_of_connectivity_1() { return &___connectivity_1; }
	inline void set_connectivity_1(bool value)
	{
		___connectivity_1 = value;
	}

	inline static int32_t get_offset_of_isStatic_2() { return static_cast<int32_t>(offsetof(ModelGroupImportSettings_t0A6FFB361CE6EBB21970CACDCF2C5FAAF507E714, ___isStatic_2)); }
	inline bool get_isStatic_2() const { return ___isStatic_2; }
	inline bool* get_address_of_isStatic_2() { return &___isStatic_2; }
	inline void set_isStatic_2(bool value)
	{
		___isStatic_2 = value;
	}

	inline static int32_t get_offset_of_lightmapped_3() { return static_cast<int32_t>(offsetof(ModelGroupImportSettings_t0A6FFB361CE6EBB21970CACDCF2C5FAAF507E714, ___lightmapped_3)); }
	inline bool get_lightmapped_3() const { return ___lightmapped_3; }
	inline bool* get_address_of_lightmapped_3() { return &___lightmapped_3; }
	inline void set_lightmapped_3(bool value)
	{
		___lightmapped_3 = value;
	}

	inline static int32_t get_offset_of_randomizeRotation_4() { return static_cast<int32_t>(offsetof(ModelGroupImportSettings_t0A6FFB361CE6EBB21970CACDCF2C5FAAF507E714, ___randomizeRotation_4)); }
	inline bool get_randomizeRotation_4() const { return ___randomizeRotation_4; }
	inline bool* get_address_of_randomizeRotation_4() { return &___randomizeRotation_4; }
	inline void set_randomizeRotation_4(bool value)
	{
		___randomizeRotation_4 = value;
	}

	inline static int32_t get_offset_of_lod_5() { return static_cast<int32_t>(offsetof(ModelGroupImportSettings_t0A6FFB361CE6EBB21970CACDCF2C5FAAF507E714, ___lod_5)); }
	inline int32_t get_lod_5() const { return ___lod_5; }
	inline int32_t* get_address_of_lod_5() { return &___lod_5; }
	inline void set_lod_5(int32_t value)
	{
		___lod_5 = value;
	}
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

// LEGOModelImporter.Vector3Ext
struct Vector3Ext_t5BB1578C8A0F842FC76C0C462E32E729B16FD277  : public RuntimeObject
{
public:

public:
};


// LEGOModelImporter.BrickBuildingUtility/<>c
struct U3CU3Ec_t3CB44C086FE13BB27D8E8857E6F65F503B89F717  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3CB44C086FE13BB27D8E8857E6F65F503B89F717_StaticFields
{
public:
	// LEGOModelImporter.BrickBuildingUtility/<>c LEGOModelImporter.BrickBuildingUtility/<>c::<>9
	U3CU3Ec_t3CB44C086FE13BB27D8E8857E6F65F503B89F717 * ___U3CU3E9_0;
	// System.Func`2<System.ValueTuple`2<LEGOModelImporter.ConnectionField,LEGOModelImporter.ConnectionField>,System.Single> LEGOModelImporter.BrickBuildingUtility/<>c::<>9__42_1
	Func_2_t57CB2E957D22C408F1DA9DC170984BEB28D8A7E8 * ___U3CU3E9__42_1_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3CB44C086FE13BB27D8E8857E6F65F503B89F717_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3CB44C086FE13BB27D8E8857E6F65F503B89F717 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3CB44C086FE13BB27D8E8857E6F65F503B89F717 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3CB44C086FE13BB27D8E8857E6F65F503B89F717 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__42_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3CB44C086FE13BB27D8E8857E6F65F503B89F717_StaticFields, ___U3CU3E9__42_1_1)); }
	inline Func_2_t57CB2E957D22C408F1DA9DC170984BEB28D8A7E8 * get_U3CU3E9__42_1_1() const { return ___U3CU3E9__42_1_1; }
	inline Func_2_t57CB2E957D22C408F1DA9DC170984BEB28D8A7E8 ** get_address_of_U3CU3E9__42_1_1() { return &___U3CU3E9__42_1_1; }
	inline void set_U3CU3E9__42_1_1(Func_2_t57CB2E957D22C408F1DA9DC170984BEB28D8A7E8 * value)
	{
		___U3CU3E9__42_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__42_1_1), (void*)value);
	}
};


// LEGOModelImporter.Connectivity/ConnectionIterator
struct ConnectionIterator_t415B158FEA77755C5FD134944C1DCCAED078E30B  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>> LEGOModelImporter.Connectivity/ConnectionIterator::planarFeatures
	List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F * ___planarFeatures_0;
	// System.Collections.Generic.List`1<System.ValueTuple`2<LEGOModelImporter.AxleFeature,LEGOModelImporter.AxleFeature>> LEGOModelImporter.Connectivity/ConnectionIterator::axleFeatures
	List_1_t4D75E148C8A391EA6FE426AA11BCF9320E8D69A1 * ___axleFeatures_1;
	// System.Collections.Generic.List`1<System.ValueTuple`2<LEGOModelImporter.FixedFeature,LEGOModelImporter.FixedFeature>> LEGOModelImporter.Connectivity/ConnectionIterator::fixedFeatures
	List_1_t4A4637B03D6E6F14E0E9EF3A64B6F9152CA7524D * ___fixedFeatures_2;

public:
	inline static int32_t get_offset_of_planarFeatures_0() { return static_cast<int32_t>(offsetof(ConnectionIterator_t415B158FEA77755C5FD134944C1DCCAED078E30B, ___planarFeatures_0)); }
	inline List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F * get_planarFeatures_0() const { return ___planarFeatures_0; }
	inline List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F ** get_address_of_planarFeatures_0() { return &___planarFeatures_0; }
	inline void set_planarFeatures_0(List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F * value)
	{
		___planarFeatures_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___planarFeatures_0), (void*)value);
	}

	inline static int32_t get_offset_of_axleFeatures_1() { return static_cast<int32_t>(offsetof(ConnectionIterator_t415B158FEA77755C5FD134944C1DCCAED078E30B, ___axleFeatures_1)); }
	inline List_1_t4D75E148C8A391EA6FE426AA11BCF9320E8D69A1 * get_axleFeatures_1() const { return ___axleFeatures_1; }
	inline List_1_t4D75E148C8A391EA6FE426AA11BCF9320E8D69A1 ** get_address_of_axleFeatures_1() { return &___axleFeatures_1; }
	inline void set_axleFeatures_1(List_1_t4D75E148C8A391EA6FE426AA11BCF9320E8D69A1 * value)
	{
		___axleFeatures_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axleFeatures_1), (void*)value);
	}

	inline static int32_t get_offset_of_fixedFeatures_2() { return static_cast<int32_t>(offsetof(ConnectionIterator_t415B158FEA77755C5FD134944C1DCCAED078E30B, ___fixedFeatures_2)); }
	inline List_1_t4A4637B03D6E6F14E0E9EF3A64B6F9152CA7524D * get_fixedFeatures_2() const { return ___fixedFeatures_2; }
	inline List_1_t4A4637B03D6E6F14E0E9EF3A64B6F9152CA7524D ** get_address_of_fixedFeatures_2() { return &___fixedFeatures_2; }
	inline void set_fixedFeatures_2(List_1_t4A4637B03D6E6F14E0E9EF3A64B6F9152CA7524D * value)
	{
		___fixedFeatures_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fixedFeatures_2), (void*)value);
	}
};


// LEGOModelImporter.PlanarField/ConnectionTuple
struct ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F  : public RuntimeObject
{
public:
	// LEGOModelImporter.PlanarField LEGOModelImporter.PlanarField/ConnectionTuple::field
	PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * ___field_0;
	// System.Int32 LEGOModelImporter.PlanarField/ConnectionTuple::indexOfConnection
	int32_t ___indexOfConnection_1;

public:
	inline static int32_t get_offset_of_field_0() { return static_cast<int32_t>(offsetof(ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F, ___field_0)); }
	inline PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * get_field_0() const { return ___field_0; }
	inline PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 ** get_address_of_field_0() { return &___field_0; }
	inline void set_field_0(PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * value)
	{
		___field_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___field_0), (void*)value);
	}

	inline static int32_t get_offset_of_indexOfConnection_1() { return static_cast<int32_t>(offsetof(ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F, ___indexOfConnection_1)); }
	inline int32_t get_indexOfConnection_1() const { return ___indexOfConnection_1; }
	inline int32_t* get_address_of_indexOfConnection_1() { return &___indexOfConnection_1; }
	inline void set_indexOfConnection_1(int32_t value)
	{
		___indexOfConnection_1 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<LEGOModelImporter.AxleField>
struct Enumerator_t057F70045655EA8DAF287DDE95A85CABE256714D 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t1B8E248437FE7A019F683CE60E7553A98F8C89DD * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t057F70045655EA8DAF287DDE95A85CABE256714D, ___list_0)); }
	inline List_1_t1B8E248437FE7A019F683CE60E7553A98F8C89DD * get_list_0() const { return ___list_0; }
	inline List_1_t1B8E248437FE7A019F683CE60E7553A98F8C89DD ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t1B8E248437FE7A019F683CE60E7553A98F8C89DD * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t057F70045655EA8DAF287DDE95A85CABE256714D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t057F70045655EA8DAF287DDE95A85CABE256714D, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t057F70045655EA8DAF287DDE95A85CABE256714D, ___current_3)); }
	inline AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277 * get_current_3() const { return ___current_3; }
	inline AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Collider>
struct Enumerator_t34208F8A6A2CC718C7DD445F48D51279F182B7B6 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t34208F8A6A2CC718C7DD445F48D51279F182B7B6, ____set_0)); }
	inline HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA * get__set_0() const { return ____set_0; }
	inline HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t34208F8A6A2CC718C7DD445F48D51279F182B7B6, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t34208F8A6A2CC718C7DD445F48D51279F182B7B6, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t34208F8A6A2CC718C7DD445F48D51279F182B7B6, ____current_3)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get__current_3() const { return ____current_3; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.Collider>
struct Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B, ___list_0)); }
	inline List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * get_list_0() const { return ___list_0; }
	inline List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B, ___current_3)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_current_3() const { return ___current_3; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<LEGOModelImporter.CullingCameraConfig>
struct Enumerator_tD49CB71AE708F07DF32F81F0160D93345519B5AA 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t1CAAFB6184A6519BE66C670D00C798E77213AE69 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tD49CB71AE708F07DF32F81F0160D93345519B5AA, ___list_0)); }
	inline List_1_t1CAAFB6184A6519BE66C670D00C798E77213AE69 * get_list_0() const { return ___list_0; }
	inline List_1_t1CAAFB6184A6519BE66C670D00C798E77213AE69 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t1CAAFB6184A6519BE66C670D00C798E77213AE69 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tD49CB71AE708F07DF32F81F0160D93345519B5AA, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tD49CB71AE708F07DF32F81F0160D93345519B5AA, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tD49CB71AE708F07DF32F81F0160D93345519B5AA, ___current_3)); }
	inline CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65 * get_current_3() const { return ___current_3; }
	inline CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<LEGOModelImporter.FixedField>
struct Enumerator_tFBB1B137B772289C585FEC808CB15BEFD895832D 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t1AA4D82EFDD45B199AA932D2FCCCD9CFB46B055A * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	FixedField_t54C0D973EBCF8097CB0AF444508F22ADFA6EA79F * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tFBB1B137B772289C585FEC808CB15BEFD895832D, ___list_0)); }
	inline List_1_t1AA4D82EFDD45B199AA932D2FCCCD9CFB46B055A * get_list_0() const { return ___list_0; }
	inline List_1_t1AA4D82EFDD45B199AA932D2FCCCD9CFB46B055A ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t1AA4D82EFDD45B199AA932D2FCCCD9CFB46B055A * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tFBB1B137B772289C585FEC808CB15BEFD895832D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tFBB1B137B772289C585FEC808CB15BEFD895832D, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tFBB1B137B772289C585FEC808CB15BEFD895832D, ___current_3)); }
	inline FixedField_t54C0D973EBCF8097CB0AF444508F22ADFA6EA79F * get_current_3() const { return ___current_3; }
	inline FixedField_t54C0D973EBCF8097CB0AF444508F22ADFA6EA79F ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(FixedField_t54C0D973EBCF8097CB0AF444508F22ADFA6EA79F * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Int32>
struct Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___list_0)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_list_0() const { return ___list_0; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject * ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____set_0)); }
	inline HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * get__set_0() const { return ____set_0; }
	inline HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____current_3)); }
	inline RuntimeObject * get__current_3() const { return ____current_3; }
	inline RuntimeObject ** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject * value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
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


// System.Collections.Generic.List`1/Enumerator<LEGOModelImporter.PlanarField>
struct Enumerator_tF7E2E75243ECEA6C0697BE2FCF715D2513E2D196 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tEBF6868521218B8961BF50B2E3E2A4808B56253D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tF7E2E75243ECEA6C0697BE2FCF715D2513E2D196, ___list_0)); }
	inline List_1_tEBF6868521218B8961BF50B2E3E2A4808B56253D * get_list_0() const { return ___list_0; }
	inline List_1_tEBF6868521218B8961BF50B2E3E2A4808B56253D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tEBF6868521218B8961BF50B2E3E2A4808B56253D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tF7E2E75243ECEA6C0697BE2FCF715D2513E2D196, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tF7E2E75243ECEA6C0697BE2FCF715D2513E2D196, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tF7E2E75243ECEA6C0697BE2FCF715D2513E2D196, ___current_3)); }
	inline PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * get_current_3() const { return ___current_3; }
	inline PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<LEGOModelImporter.Tube>
struct Enumerator_tB588E52D794CD121A4A6D4C05BEDF4481E376B76 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t55FB50AB728746C7A4CE36B13BC11C4BDCBC1608 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Tube_t2D49285A2D8CDFDFFDC7D96CF4BA7FAD9950F5C0 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB588E52D794CD121A4A6D4C05BEDF4481E376B76, ___list_0)); }
	inline List_1_t55FB50AB728746C7A4CE36B13BC11C4BDCBC1608 * get_list_0() const { return ___list_0; }
	inline List_1_t55FB50AB728746C7A4CE36B13BC11C4BDCBC1608 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t55FB50AB728746C7A4CE36B13BC11C4BDCBC1608 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB588E52D794CD121A4A6D4C05BEDF4481E376B76, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB588E52D794CD121A4A6D4C05BEDF4481E376B76, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB588E52D794CD121A4A6D4C05BEDF4481E376B76, ___current_3)); }
	inline Tube_t2D49285A2D8CDFDFFDC7D96CF4BA7FAD9950F5C0 * get_current_3() const { return ___current_3; }
	inline Tube_t2D49285A2D8CDFDFFDC7D96CF4BA7FAD9950F5C0 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Tube_t2D49285A2D8CDFDFFDC7D96CF4BA7FAD9950F5C0 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.ValueTuple`2<LEGOModelImporter.AxleFeature,LEGOModelImporter.AxleFeature>
struct ValueTuple_2_t31B74A8DC82469F1344229CABDC9F02B498A35A4 
{
public:
	// T1 System.ValueTuple`2::Item1
	AxleFeature_t721BA35E67B746326439A431C1DA97F1355138F2 * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	AxleFeature_t721BA35E67B746326439A431C1DA97F1355138F2 * ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t31B74A8DC82469F1344229CABDC9F02B498A35A4, ___Item1_0)); }
	inline AxleFeature_t721BA35E67B746326439A431C1DA97F1355138F2 * get_Item1_0() const { return ___Item1_0; }
	inline AxleFeature_t721BA35E67B746326439A431C1DA97F1355138F2 ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(AxleFeature_t721BA35E67B746326439A431C1DA97F1355138F2 * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t31B74A8DC82469F1344229CABDC9F02B498A35A4, ___Item2_1)); }
	inline AxleFeature_t721BA35E67B746326439A431C1DA97F1355138F2 * get_Item2_1() const { return ___Item2_1; }
	inline AxleFeature_t721BA35E67B746326439A431C1DA97F1355138F2 ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(AxleFeature_t721BA35E67B746326439A431C1DA97F1355138F2 * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}
};


// System.ValueTuple`2<LEGOModelImporter.Connection,LEGOModelImporter.Connection>
struct ValueTuple_2_tE31844093EA6E41DA2EECECABE9C6C6D09CD170D 
{
public:
	// T1 System.ValueTuple`2::Item1
	Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 * ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_tE31844093EA6E41DA2EECECABE9C6C6D09CD170D, ___Item1_0)); }
	inline Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 * get_Item1_0() const { return ___Item1_0; }
	inline Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_tE31844093EA6E41DA2EECECABE9C6C6D09CD170D, ___Item2_1)); }
	inline Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 * get_Item2_1() const { return ___Item2_1; }
	inline Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}
};


// System.ValueTuple`2<LEGOModelImporter.ConnectionField,LEGOModelImporter.ConnectionField>
struct ValueTuple_2_tAD27F69A4DCED6F5988CAF46B1AE9AE441F44BD7 
{
public:
	// T1 System.ValueTuple`2::Item1
	ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_tAD27F69A4DCED6F5988CAF46B1AE9AE441F44BD7, ___Item1_0)); }
	inline ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * get_Item1_0() const { return ___Item1_0; }
	inline ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_tAD27F69A4DCED6F5988CAF46B1AE9AE441F44BD7, ___Item2_1)); }
	inline ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * get_Item2_1() const { return ___Item2_1; }
	inline ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}
};


// System.ValueTuple`2<LEGOModelImporter.FixedFeature,LEGOModelImporter.FixedFeature>
struct ValueTuple_2_t5CE28F612013D255B27043753ADEC34426B7AD90 
{
public:
	// T1 System.ValueTuple`2::Item1
	FixedFeature_tB93897E645B98A4B477010C4669270FFB5CC96A4 * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	FixedFeature_tB93897E645B98A4B477010C4669270FFB5CC96A4 * ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t5CE28F612013D255B27043753ADEC34426B7AD90, ___Item1_0)); }
	inline FixedFeature_tB93897E645B98A4B477010C4669270FFB5CC96A4 * get_Item1_0() const { return ___Item1_0; }
	inline FixedFeature_tB93897E645B98A4B477010C4669270FFB5CC96A4 ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(FixedFeature_tB93897E645B98A4B477010C4669270FFB5CC96A4 * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t5CE28F612013D255B27043753ADEC34426B7AD90, ___Item2_1)); }
	inline FixedFeature_tB93897E645B98A4B477010C4669270FFB5CC96A4 * get_Item2_1() const { return ___Item2_1; }
	inline FixedFeature_tB93897E645B98A4B477010C4669270FFB5CC96A4 ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(FixedFeature_tB93897E645B98A4B477010C4669270FFB5CC96A4 * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}
};


// System.ValueTuple`2<System.Object,System.Object>
struct ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 
{
public:
	// T1 System.ValueTuple`2::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RuntimeObject * ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403, ___Item2_1)); }
	inline RuntimeObject * get_Item2_1() const { return ___Item2_1; }
	inline RuntimeObject ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(RuntimeObject * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}
};


// System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>
struct ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E 
{
public:
	// T1 System.ValueTuple`2::Item1
	PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E, ___Item1_0)); }
	inline PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * get_Item1_0() const { return ___Item1_0; }
	inline PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E, ___Item2_1)); }
	inline PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * get_Item2_1() const { return ___Item2_1; }
	inline PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Mathf
struct Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194__padding[1];
	};

public:
};

struct Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields, ___Epsilon_0)); }
	inline float get_Epsilon_0() const { return ___Epsilon_0; }
	inline float* get_address_of_Epsilon_0() { return &___Epsilon_0; }
	inline void set_Epsilon_0(float value)
	{
		___Epsilon_0 = value;
	}
};


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.PhysicsScene
struct PhysicsScene_tEDFCAA935450E8EBB7732353D9AA264A5F711678 
{
public:
	// System.Int32 UnityEngine.PhysicsScene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PhysicsScene_tEDFCAA935450E8EBB7732353D9AA264A5F711678, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
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


// UnityEngine.Vector2Int
struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1936
struct __StaticArrayInitTypeSizeU3D1936_t3C305591C12CCF6BBD685D5A3B7C58582F497920 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1936_t3C305591C12CCF6BBD685D5A3B7C58582F497920__padding[1936];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=7396
struct __StaticArrayInitTypeSizeU3D7396_t60C76D81C55A6FBE6603004153E34B94BB6E6CF8 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D7396_t60C76D81C55A6FBE6603004153E34B94BB6E6CF8__padding[7396];
	};

public:
};


// System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<LEGOModelImporter.AxleFeature,LEGOModelImporter.AxleFeature>>
struct Enumerator_t3E6A94099410C50805F319CC16CC0D93BE4436D8 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t4D75E148C8A391EA6FE426AA11BCF9320E8D69A1 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ValueTuple_2_t31B74A8DC82469F1344229CABDC9F02B498A35A4  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t3E6A94099410C50805F319CC16CC0D93BE4436D8, ___list_0)); }
	inline List_1_t4D75E148C8A391EA6FE426AA11BCF9320E8D69A1 * get_list_0() const { return ___list_0; }
	inline List_1_t4D75E148C8A391EA6FE426AA11BCF9320E8D69A1 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t4D75E148C8A391EA6FE426AA11BCF9320E8D69A1 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3E6A94099410C50805F319CC16CC0D93BE4436D8, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3E6A94099410C50805F319CC16CC0D93BE4436D8, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3E6A94099410C50805F319CC16CC0D93BE4436D8, ___current_3)); }
	inline ValueTuple_2_t31B74A8DC82469F1344229CABDC9F02B498A35A4  get_current_3() const { return ___current_3; }
	inline ValueTuple_2_t31B74A8DC82469F1344229CABDC9F02B498A35A4 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ValueTuple_2_t31B74A8DC82469F1344229CABDC9F02B498A35A4  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___Item2_1), (void*)NULL);
		#endif
	}
};


// System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<LEGOModelImporter.FixedFeature,LEGOModelImporter.FixedFeature>>
struct Enumerator_t77AA1B6D4815D37C0F1C70571BCF17C9C631AB0D 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t4A4637B03D6E6F14E0E9EF3A64B6F9152CA7524D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ValueTuple_2_t5CE28F612013D255B27043753ADEC34426B7AD90  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t77AA1B6D4815D37C0F1C70571BCF17C9C631AB0D, ___list_0)); }
	inline List_1_t4A4637B03D6E6F14E0E9EF3A64B6F9152CA7524D * get_list_0() const { return ___list_0; }
	inline List_1_t4A4637B03D6E6F14E0E9EF3A64B6F9152CA7524D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t4A4637B03D6E6F14E0E9EF3A64B6F9152CA7524D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t77AA1B6D4815D37C0F1C70571BCF17C9C631AB0D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t77AA1B6D4815D37C0F1C70571BCF17C9C631AB0D, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t77AA1B6D4815D37C0F1C70571BCF17C9C631AB0D, ___current_3)); }
	inline ValueTuple_2_t5CE28F612013D255B27043753ADEC34426B7AD90  get_current_3() const { return ___current_3; }
	inline ValueTuple_2_t5CE28F612013D255B27043753ADEC34426B7AD90 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ValueTuple_2_t5CE28F612013D255B27043753ADEC34426B7AD90  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___Item2_1), (void*)NULL);
		#endif
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<System.ValueTuple`2<System.Object,System.Object>>
struct Enumerator_t7DD1F5182F2AF49975E789B7B9B55148BBD46D65 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t4627A2F84CC471FF3CA9E1574EFC11A9D891A90B * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t7DD1F5182F2AF49975E789B7B9B55148BBD46D65, ____set_0)); }
	inline HashSet_1_t4627A2F84CC471FF3CA9E1574EFC11A9D891A90B * get__set_0() const { return ____set_0; }
	inline HashSet_1_t4627A2F84CC471FF3CA9E1574EFC11A9D891A90B ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t4627A2F84CC471FF3CA9E1574EFC11A9D891A90B * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7DD1F5182F2AF49975E789B7B9B55148BBD46D65, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7DD1F5182F2AF49975E789B7B9B55148BBD46D65, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7DD1F5182F2AF49975E789B7B9B55148BBD46D65, ____current_3)); }
	inline ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  get__current_3() const { return ____current_3; }
	inline ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____current_3))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____current_3))->___Item2_1), (void*)NULL);
		#endif
	}
};


// System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<System.Object,System.Object>>
struct Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0, ___list_0)); }
	inline List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC * get_list_0() const { return ___list_0; }
	inline List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0, ___current_3)); }
	inline ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  get_current_3() const { return ___current_3; }
	inline ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___Item2_1), (void*)NULL);
		#endif
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>>
struct Enumerator_t4D376E3C22DD5227BB0FBDD64CE44B74AC7BCC0E 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3 * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t4D376E3C22DD5227BB0FBDD64CE44B74AC7BCC0E, ____set_0)); }
	inline HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3 * get__set_0() const { return ____set_0; }
	inline HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3 ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3 * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t4D376E3C22DD5227BB0FBDD64CE44B74AC7BCC0E, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t4D376E3C22DD5227BB0FBDD64CE44B74AC7BCC0E, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t4D376E3C22DD5227BB0FBDD64CE44B74AC7BCC0E, ____current_3)); }
	inline ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  get__current_3() const { return ____current_3; }
	inline ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E * get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____current_3))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____current_3))->___Item2_1), (void*)NULL);
		#endif
	}
};


// System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>>
struct Enumerator_tB1664E9614254B8BA9DBF8A2E43FDDE49C3E7220 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB1664E9614254B8BA9DBF8A2E43FDDE49C3E7220, ___list_0)); }
	inline List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F * get_list_0() const { return ___list_0; }
	inline List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB1664E9614254B8BA9DBF8A2E43FDDE49C3E7220, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB1664E9614254B8BA9DBF8A2E43FDDE49C3E7220, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB1664E9614254B8BA9DBF8A2E43FDDE49C3E7220, ___current_3)); }
	inline ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  get_current_3() const { return ___current_3; }
	inline ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___Item2_1), (void*)NULL);
		#endif
	}
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t59291B036D75DC101EA8879D273965E199D84B15  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t59291B036D75DC101EA8879D273965E199D84B15_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1936 <PrivateImplementationDetails>::0ECB74D04780298305A526EA5AE792847B4FE7C1F1F4F750F7E9CDC62ED59E26
	__StaticArrayInitTypeSizeU3D1936_t3C305591C12CCF6BBD685D5A3B7C58582F497920  ___0ECB74D04780298305A526EA5AE792847B4FE7C1F1F4F750F7E9CDC62ED59E26_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=7396 <PrivateImplementationDetails>::AC59E4A04B2979B76D38C898EE309AC40E5A388C15889344C5CC602645E5C076
	__StaticArrayInitTypeSizeU3D7396_t60C76D81C55A6FBE6603004153E34B94BB6E6CF8  ___AC59E4A04B2979B76D38C898EE309AC40E5A388C15889344C5CC602645E5C076_1;

public:
	inline static int32_t get_offset_of_U30ECB74D04780298305A526EA5AE792847B4FE7C1F1F4F750F7E9CDC62ED59E26_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t59291B036D75DC101EA8879D273965E199D84B15_StaticFields, ___0ECB74D04780298305A526EA5AE792847B4FE7C1F1F4F750F7E9CDC62ED59E26_0)); }
	inline __StaticArrayInitTypeSizeU3D1936_t3C305591C12CCF6BBD685D5A3B7C58582F497920  get_U30ECB74D04780298305A526EA5AE792847B4FE7C1F1F4F750F7E9CDC62ED59E26_0() const { return ___0ECB74D04780298305A526EA5AE792847B4FE7C1F1F4F750F7E9CDC62ED59E26_0; }
	inline __StaticArrayInitTypeSizeU3D1936_t3C305591C12CCF6BBD685D5A3B7C58582F497920 * get_address_of_U30ECB74D04780298305A526EA5AE792847B4FE7C1F1F4F750F7E9CDC62ED59E26_0() { return &___0ECB74D04780298305A526EA5AE792847B4FE7C1F1F4F750F7E9CDC62ED59E26_0; }
	inline void set_U30ECB74D04780298305A526EA5AE792847B4FE7C1F1F4F750F7E9CDC62ED59E26_0(__StaticArrayInitTypeSizeU3D1936_t3C305591C12CCF6BBD685D5A3B7C58582F497920  value)
	{
		___0ECB74D04780298305A526EA5AE792847B4FE7C1F1F4F750F7E9CDC62ED59E26_0 = value;
	}

	inline static int32_t get_offset_of_AC59E4A04B2979B76D38C898EE309AC40E5A388C15889344C5CC602645E5C076_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t59291B036D75DC101EA8879D273965E199D84B15_StaticFields, ___AC59E4A04B2979B76D38C898EE309AC40E5A388C15889344C5CC602645E5C076_1)); }
	inline __StaticArrayInitTypeSizeU3D7396_t60C76D81C55A6FBE6603004153E34B94BB6E6CF8  get_AC59E4A04B2979B76D38C898EE309AC40E5A388C15889344C5CC602645E5C076_1() const { return ___AC59E4A04B2979B76D38C898EE309AC40E5A388C15889344C5CC602645E5C076_1; }
	inline __StaticArrayInitTypeSizeU3D7396_t60C76D81C55A6FBE6603004153E34B94BB6E6CF8 * get_address_of_AC59E4A04B2979B76D38C898EE309AC40E5A388C15889344C5CC602645E5C076_1() { return &___AC59E4A04B2979B76D38C898EE309AC40E5A388C15889344C5CC602645E5C076_1; }
	inline void set_AC59E4A04B2979B76D38C898EE309AC40E5A388C15889344C5CC602645E5C076_1(__StaticArrayInitTypeSizeU3D7396_t60C76D81C55A6FBE6603004153E34B94BB6E6CF8  value)
	{
		___AC59E4A04B2979B76D38C898EE309AC40E5A388C15889344C5CC602645E5C076_1 = value;
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


// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// LEGOModelImporter.BrickBuildingUtility
struct BrickBuildingUtility_t9BB0DA76B8CCBFAB0FD4E7A51C3D7411952C767E  : public RuntimeObject
{
public:

public:
};

struct BrickBuildingUtility_t9BB0DA76B8CCBFAB0FD4E7A51C3D7411952C767E_StaticFields
{
public:
	// System.Int32 LEGOModelImporter.BrickBuildingUtility::ignoreMask
	int32_t ___ignoreMask_0;
	// UnityEngine.Matrix4x4 LEGOModelImporter.BrickBuildingUtility::LU_5_OFFSET
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___LU_5_OFFSET_1;
	// UnityEngine.Collider[] LEGOModelImporter.BrickBuildingUtility::colliderBuffer
	ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* ___colliderBuffer_2;
	// UnityEngine.RaycastHit[] LEGOModelImporter.BrickBuildingUtility::raycastBuffer
	RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* ___raycastBuffer_3;
	// System.String LEGOModelImporter.BrickBuildingUtility::ConnectivityConnectorLayerName
	String_t* ___ConnectivityConnectorLayerName_4;
	// System.String LEGOModelImporter.BrickBuildingUtility::ConnectivityReceptorLayerName
	String_t* ___ConnectivityReceptorLayerName_5;
	// System.Int32 LEGOModelImporter.BrickBuildingUtility::ConnectivityConnectorMask
	int32_t ___ConnectivityConnectorMask_6;
	// System.Int32 LEGOModelImporter.BrickBuildingUtility::ConnectivityReceptorMask
	int32_t ___ConnectivityReceptorMask_7;
	// System.Int32 LEGOModelImporter.BrickBuildingUtility::ConnectivityMask
	int32_t ___ConnectivityMask_8;
	// UnityEngine.Vector2[] LEGOModelImporter.BrickBuildingUtility::ConnectionFieldOffsets
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___ConnectionFieldOffsets_18;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> LEGOModelImporter.BrickBuildingUtility::oldPositions
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___oldPositions_19;
	// System.Collections.Generic.List`1<UnityEngine.Quaternion> LEGOModelImporter.BrickBuildingUtility::oldRotations
	List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB * ___oldRotations_20;

public:
	inline static int32_t get_offset_of_ignoreMask_0() { return static_cast<int32_t>(offsetof(BrickBuildingUtility_t9BB0DA76B8CCBFAB0FD4E7A51C3D7411952C767E_StaticFields, ___ignoreMask_0)); }
	inline int32_t get_ignoreMask_0() const { return ___ignoreMask_0; }
	inline int32_t* get_address_of_ignoreMask_0() { return &___ignoreMask_0; }
	inline void set_ignoreMask_0(int32_t value)
	{
		___ignoreMask_0 = value;
	}

	inline static int32_t get_offset_of_LU_5_OFFSET_1() { return static_cast<int32_t>(offsetof(BrickBuildingUtility_t9BB0DA76B8CCBFAB0FD4E7A51C3D7411952C767E_StaticFields, ___LU_5_OFFSET_1)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_LU_5_OFFSET_1() const { return ___LU_5_OFFSET_1; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_LU_5_OFFSET_1() { return &___LU_5_OFFSET_1; }
	inline void set_LU_5_OFFSET_1(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___LU_5_OFFSET_1 = value;
	}

	inline static int32_t get_offset_of_colliderBuffer_2() { return static_cast<int32_t>(offsetof(BrickBuildingUtility_t9BB0DA76B8CCBFAB0FD4E7A51C3D7411952C767E_StaticFields, ___colliderBuffer_2)); }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* get_colliderBuffer_2() const { return ___colliderBuffer_2; }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486** get_address_of_colliderBuffer_2() { return &___colliderBuffer_2; }
	inline void set_colliderBuffer_2(ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* value)
	{
		___colliderBuffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colliderBuffer_2), (void*)value);
	}

	inline static int32_t get_offset_of_raycastBuffer_3() { return static_cast<int32_t>(offsetof(BrickBuildingUtility_t9BB0DA76B8CCBFAB0FD4E7A51C3D7411952C767E_StaticFields, ___raycastBuffer_3)); }
	inline RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* get_raycastBuffer_3() const { return ___raycastBuffer_3; }
	inline RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09** get_address_of_raycastBuffer_3() { return &___raycastBuffer_3; }
	inline void set_raycastBuffer_3(RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* value)
	{
		___raycastBuffer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycastBuffer_3), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectivityConnectorLayerName_4() { return static_cast<int32_t>(offsetof(BrickBuildingUtility_t9BB0DA76B8CCBFAB0FD4E7A51C3D7411952C767E_StaticFields, ___ConnectivityConnectorLayerName_4)); }
	inline String_t* get_ConnectivityConnectorLayerName_4() const { return ___ConnectivityConnectorLayerName_4; }
	inline String_t** get_address_of_ConnectivityConnectorLayerName_4() { return &___ConnectivityConnectorLayerName_4; }
	inline void set_ConnectivityConnectorLayerName_4(String_t* value)
	{
		___ConnectivityConnectorLayerName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectivityConnectorLayerName_4), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectivityReceptorLayerName_5() { return static_cast<int32_t>(offsetof(BrickBuildingUtility_t9BB0DA76B8CCBFAB0FD4E7A51C3D7411952C767E_StaticFields, ___ConnectivityReceptorLayerName_5)); }
	inline String_t* get_ConnectivityReceptorLayerName_5() const { return ___ConnectivityReceptorLayerName_5; }
	inline String_t** get_address_of_ConnectivityReceptorLayerName_5() { return &___ConnectivityReceptorLayerName_5; }
	inline void set_ConnectivityReceptorLayerName_5(String_t* value)
	{
		___ConnectivityReceptorLayerName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectivityReceptorLayerName_5), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectivityConnectorMask_6() { return static_cast<int32_t>(offsetof(BrickBuildingUtility_t9BB0DA76B8CCBFAB0FD4E7A51C3D7411952C767E_StaticFields, ___ConnectivityConnectorMask_6)); }
	inline int32_t get_ConnectivityConnectorMask_6() const { return ___ConnectivityConnectorMask_6; }
	inline int32_t* get_address_of_ConnectivityConnectorMask_6() { return &___ConnectivityConnectorMask_6; }
	inline void set_ConnectivityConnectorMask_6(int32_t value)
	{
		___ConnectivityConnectorMask_6 = value;
	}

	inline static int32_t get_offset_of_ConnectivityReceptorMask_7() { return static_cast<int32_t>(offsetof(BrickBuildingUtility_t9BB0DA76B8CCBFAB0FD4E7A51C3D7411952C767E_StaticFields, ___ConnectivityReceptorMask_7)); }
	inline int32_t get_ConnectivityReceptorMask_7() const { return ___ConnectivityReceptorMask_7; }
	inline int32_t* get_address_of_ConnectivityReceptorMask_7() { return &___ConnectivityReceptorMask_7; }
	inline void set_ConnectivityReceptorMask_7(int32_t value)
	{
		___ConnectivityReceptorMask_7 = value;
	}

	inline static int32_t get_offset_of_ConnectivityMask_8() { return static_cast<int32_t>(offsetof(BrickBuildingUtility_t9BB0DA76B8CCBFAB0FD4E7A51C3D7411952C767E_StaticFields, ___ConnectivityMask_8)); }
	inline int32_t get_ConnectivityMask_8() const { return ___ConnectivityMask_8; }
	inline int32_t* get_address_of_ConnectivityMask_8() { return &___ConnectivityMask_8; }
	inline void set_ConnectivityMask_8(int32_t value)
	{
		___ConnectivityMask_8 = value;
	}

	inline static int32_t get_offset_of_ConnectionFieldOffsets_18() { return static_cast<int32_t>(offsetof(BrickBuildingUtility_t9BB0DA76B8CCBFAB0FD4E7A51C3D7411952C767E_StaticFields, ___ConnectionFieldOffsets_18)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_ConnectionFieldOffsets_18() const { return ___ConnectionFieldOffsets_18; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_ConnectionFieldOffsets_18() { return &___ConnectionFieldOffsets_18; }
	inline void set_ConnectionFieldOffsets_18(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___ConnectionFieldOffsets_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectionFieldOffsets_18), (void*)value);
	}

	inline static int32_t get_offset_of_oldPositions_19() { return static_cast<int32_t>(offsetof(BrickBuildingUtility_t9BB0DA76B8CCBFAB0FD4E7A51C3D7411952C767E_StaticFields, ___oldPositions_19)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_oldPositions_19() const { return ___oldPositions_19; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_oldPositions_19() { return &___oldPositions_19; }
	inline void set_oldPositions_19(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___oldPositions_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___oldPositions_19), (void*)value);
	}

	inline static int32_t get_offset_of_oldRotations_20() { return static_cast<int32_t>(offsetof(BrickBuildingUtility_t9BB0DA76B8CCBFAB0FD4E7A51C3D7411952C767E_StaticFields, ___oldRotations_20)); }
	inline List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB * get_oldRotations_20() const { return ___oldRotations_20; }
	inline List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB ** get_address_of_oldRotations_20() { return &___oldRotations_20; }
	inline void set_oldRotations_20(List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB * value)
	{
		___oldRotations_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___oldRotations_20), (void*)value);
	}
};


// LEGOModelImporter.CullingCameraConfig
struct CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65  : public RuntimeObject
{
public:
	// System.Boolean LEGOModelImporter.CullingCameraConfig::foldout
	bool ___foldout_0;
	// System.String LEGOModelImporter.CullingCameraConfig::name
	String_t* ___name_1;
	// System.Boolean LEGOModelImporter.CullingCameraConfig::perspective
	bool ___perspective_2;
	// UnityEngine.Vector3 LEGOModelImporter.CullingCameraConfig::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	// UnityEngine.Quaternion LEGOModelImporter.CullingCameraConfig::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_4;
	// System.Single LEGOModelImporter.CullingCameraConfig::size
	float ___size_5;
	// System.Single LEGOModelImporter.CullingCameraConfig::fov
	float ___fov_6;
	// System.Single LEGOModelImporter.CullingCameraConfig::maxRange
	float ___maxRange_7;
	// System.Single LEGOModelImporter.CullingCameraConfig::minRange
	float ___minRange_8;
	// System.Single LEGOModelImporter.CullingCameraConfig::aspect
	float ___aspect_9;

public:
	inline static int32_t get_offset_of_foldout_0() { return static_cast<int32_t>(offsetof(CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65, ___foldout_0)); }
	inline bool get_foldout_0() const { return ___foldout_0; }
	inline bool* get_address_of_foldout_0() { return &___foldout_0; }
	inline void set_foldout_0(bool value)
	{
		___foldout_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_perspective_2() { return static_cast<int32_t>(offsetof(CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65, ___perspective_2)); }
	inline bool get_perspective_2() const { return ___perspective_2; }
	inline bool* get_address_of_perspective_2() { return &___perspective_2; }
	inline void set_perspective_2(bool value)
	{
		___perspective_2 = value;
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65, ___position_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_3() const { return ___position_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_rotation_4() { return static_cast<int32_t>(offsetof(CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65, ___rotation_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_4() const { return ___rotation_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_4() { return &___rotation_4; }
	inline void set_rotation_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_4 = value;
	}

	inline static int32_t get_offset_of_size_5() { return static_cast<int32_t>(offsetof(CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65, ___size_5)); }
	inline float get_size_5() const { return ___size_5; }
	inline float* get_address_of_size_5() { return &___size_5; }
	inline void set_size_5(float value)
	{
		___size_5 = value;
	}

	inline static int32_t get_offset_of_fov_6() { return static_cast<int32_t>(offsetof(CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65, ___fov_6)); }
	inline float get_fov_6() const { return ___fov_6; }
	inline float* get_address_of_fov_6() { return &___fov_6; }
	inline void set_fov_6(float value)
	{
		___fov_6 = value;
	}

	inline static int32_t get_offset_of_maxRange_7() { return static_cast<int32_t>(offsetof(CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65, ___maxRange_7)); }
	inline float get_maxRange_7() const { return ___maxRange_7; }
	inline float* get_address_of_maxRange_7() { return &___maxRange_7; }
	inline void set_maxRange_7(float value)
	{
		___maxRange_7 = value;
	}

	inline static int32_t get_offset_of_minRange_8() { return static_cast<int32_t>(offsetof(CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65, ___minRange_8)); }
	inline float get_minRange_8() const { return ___minRange_8; }
	inline float* get_address_of_minRange_8() { return &___minRange_8; }
	inline void set_minRange_8(float value)
	{
		___minRange_8 = value;
	}

	inline static int32_t get_offset_of_aspect_9() { return static_cast<int32_t>(offsetof(CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65, ___aspect_9)); }
	inline float get_aspect_9() const { return ___aspect_9; }
	inline float* get_address_of_aspect_9() { return &___aspect_9; }
	inline void set_aspect_9(float value)
	{
		___aspect_9 = value;
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

// UnityEngine.QueryTriggerInteraction
struct QueryTriggerInteraction_t9B82FB8CCAF559F47B6B8C0ECE197515ABFA96B0 
{
public:
	// System.Int32 UnityEngine.QueryTriggerInteraction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QueryTriggerInteraction_t9B82FB8CCAF559F47B6B8C0ECE197515ABFA96B0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
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


// LEGOModelImporter.AxleFeature/AxelType
struct AxelType_t0E28F5BB937886D6DB8B350B2E2706449EA95081 
{
public:
	// System.Int32 LEGOModelImporter.AxleFeature/AxelType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxelType_t0E28F5BB937886D6DB8B350B2E2706449EA95081, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LEGOModelImporter.BrickBuildingUtility/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_t2F583D8DB9676E67215E16602C3DE9DE725A658E  : public RuntimeObject
{
public:
	// UnityEngine.Matrix4x4 LEGOModelImporter.BrickBuildingUtility/<>c__DisplayClass36_0::inverseViewTransform
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___inverseViewTransform_0;

public:
	inline static int32_t get_offset_of_inverseViewTransform_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_t2F583D8DB9676E67215E16602C3DE9DE725A658E, ___inverseViewTransform_0)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_inverseViewTransform_0() const { return ___inverseViewTransform_0; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_inverseViewTransform_0() { return &___inverseViewTransform_0; }
	inline void set_inverseViewTransform_0(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___inverseViewTransform_0 = value;
	}
};


// LEGOModelImporter.Colliders/<GetEnumerator>d__3
struct U3CGetEnumeratorU3Ed__3_t894FD38B75EDD4C1A39A55BADD3FC15B81275C7C  : public RuntimeObject
{
public:
	// System.Int32 LEGOModelImporter.Colliders/<GetEnumerator>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Collider LEGOModelImporter.Colliders/<GetEnumerator>d__3::<>2__current
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___U3CU3E2__current_1;
	// LEGOModelImporter.Colliders LEGOModelImporter.Colliders/<GetEnumerator>d__3::<>4__this
	Colliders_t8550080A1AAF3F64E65676118544E13AE34DF6BE * ___U3CU3E4__this_2;
	// System.Collections.Generic.List`1/Enumerator<UnityEngine.Collider> LEGOModelImporter.Colliders/<GetEnumerator>d__3::<>7__wrap1
	Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B  ___U3CU3E7__wrap1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__3_t894FD38B75EDD4C1A39A55BADD3FC15B81275C7C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__3_t894FD38B75EDD4C1A39A55BADD3FC15B81275C7C, ___U3CU3E2__current_1)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__3_t894FD38B75EDD4C1A39A55BADD3FC15B81275C7C, ___U3CU3E4__this_2)); }
	inline Colliders_t8550080A1AAF3F64E65676118544E13AE34DF6BE * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Colliders_t8550080A1AAF3F64E65676118544E13AE34DF6BE ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Colliders_t8550080A1AAF3F64E65676118544E13AE34DF6BE * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__3_t894FD38B75EDD4C1A39A55BADD3FC15B81275C7C, ___U3CU3E7__wrap1_3)); }
	inline Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B  get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B * get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B  value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_3))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_3))->___current_3), (void*)NULL);
		#endif
	}
};


// LEGOModelImporter.Connection/ConnectionInteraction
struct ConnectionInteraction_t4855E8757BBCC49FE10DBBE0A4B35449C0608CFB 
{
public:
	// System.Int32 LEGOModelImporter.Connection/ConnectionInteraction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionInteraction_t4855E8757BBCC49FE10DBBE0A4B35449C0608CFB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LEGOModelImporter.ConnectionField/FieldKind
struct FieldKind_tB937BC8330B17EBF71FC4B4B89ECDA1090EBE5A3 
{
public:
	// System.Int32 LEGOModelImporter.ConnectionField/FieldKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FieldKind_tB937BC8330B17EBF71FC4B4B89ECDA1090EBE5A3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LEGOModelImporter.Connectivity/<GetEnumerator>d__10
struct U3CGetEnumeratorU3Ed__10_t46BBD5E759B3EEB496C5555266DCBBCF89D009D4  : public RuntimeObject
{
public:
	// System.Int32 LEGOModelImporter.Connectivity/<GetEnumerator>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// LEGOModelImporter.ConnectionField LEGOModelImporter.Connectivity/<GetEnumerator>d__10::<>2__current
	ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * ___U3CU3E2__current_1;
	// LEGOModelImporter.Connectivity LEGOModelImporter.Connectivity/<GetEnumerator>d__10::<>4__this
	Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF * ___U3CU3E4__this_2;
	// System.Collections.Generic.List`1/Enumerator<LEGOModelImporter.PlanarField> LEGOModelImporter.Connectivity/<GetEnumerator>d__10::<>7__wrap1
	Enumerator_tF7E2E75243ECEA6C0697BE2FCF715D2513E2D196  ___U3CU3E7__wrap1_3;
	// System.Collections.Generic.List`1/Enumerator<LEGOModelImporter.AxleField> LEGOModelImporter.Connectivity/<GetEnumerator>d__10::<>7__wrap2
	Enumerator_t057F70045655EA8DAF287DDE95A85CABE256714D  ___U3CU3E7__wrap2_4;
	// System.Collections.Generic.List`1/Enumerator<LEGOModelImporter.FixedField> LEGOModelImporter.Connectivity/<GetEnumerator>d__10::<>7__wrap3
	Enumerator_tFBB1B137B772289C585FEC808CB15BEFD895832D  ___U3CU3E7__wrap3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__10_t46BBD5E759B3EEB496C5555266DCBBCF89D009D4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__10_t46BBD5E759B3EEB496C5555266DCBBCF89D009D4, ___U3CU3E2__current_1)); }
	inline ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__10_t46BBD5E759B3EEB496C5555266DCBBCF89D009D4, ___U3CU3E4__this_2)); }
	inline Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__10_t46BBD5E759B3EEB496C5555266DCBBCF89D009D4, ___U3CU3E7__wrap1_3)); }
	inline Enumerator_tF7E2E75243ECEA6C0697BE2FCF715D2513E2D196  get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline Enumerator_tF7E2E75243ECEA6C0697BE2FCF715D2513E2D196 * get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(Enumerator_tF7E2E75243ECEA6C0697BE2FCF715D2513E2D196  value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_3))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_3))->___current_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__10_t46BBD5E759B3EEB496C5555266DCBBCF89D009D4, ___U3CU3E7__wrap2_4)); }
	inline Enumerator_t057F70045655EA8DAF287DDE95A85CABE256714D  get_U3CU3E7__wrap2_4() const { return ___U3CU3E7__wrap2_4; }
	inline Enumerator_t057F70045655EA8DAF287DDE95A85CABE256714D * get_address_of_U3CU3E7__wrap2_4() { return &___U3CU3E7__wrap2_4; }
	inline void set_U3CU3E7__wrap2_4(Enumerator_t057F70045655EA8DAF287DDE95A85CABE256714D  value)
	{
		___U3CU3E7__wrap2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap2_4))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap2_4))->___current_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap3_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__10_t46BBD5E759B3EEB496C5555266DCBBCF89D009D4, ___U3CU3E7__wrap3_5)); }
	inline Enumerator_tFBB1B137B772289C585FEC808CB15BEFD895832D  get_U3CU3E7__wrap3_5() const { return ___U3CU3E7__wrap3_5; }
	inline Enumerator_tFBB1B137B772289C585FEC808CB15BEFD895832D * get_address_of_U3CU3E7__wrap3_5() { return &___U3CU3E7__wrap3_5; }
	inline void set_U3CU3E7__wrap3_5(Enumerator_tFBB1B137B772289C585FEC808CB15BEFD895832D  value)
	{
		___U3CU3E7__wrap3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap3_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap3_5))->___current_3), (void*)NULL);
		#endif
	}
};


// LEGOModelImporter.FixedFeature/AxisType
struct AxisType_t0D66A80439ADEDFD5D8E3D4EF3AE729F693E3869 
{
public:
	// System.Int32 LEGOModelImporter.FixedFeature/AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_t0D66A80439ADEDFD5D8E3D4EF3AE729F693E3869, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LEGOModelImporter.MathUtils/Cone
struct Cone_t8B730118881F66B4A24038D5755C2B6F513DE4B5  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 LEGOModelImporter.MathUtils/Cone::origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin_0;
	// UnityEngine.Vector3 LEGOModelImporter.MathUtils/Cone::direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction_1;
	// System.Single LEGOModelImporter.MathUtils/Cone::angle
	float ___angle_2;
	// System.Single LEGOModelImporter.MathUtils/Cone::cosAngle
	float ___cosAngle_3;
	// System.Single LEGOModelImporter.MathUtils/Cone::sinAngle
	float ___sinAngle_4;
	// System.Single LEGOModelImporter.MathUtils/Cone::invSinAngle
	float ___invSinAngle_5;
	// System.Single LEGOModelImporter.MathUtils/Cone::cosAngleSqr
	float ___cosAngleSqr_6;

public:
	inline static int32_t get_offset_of_origin_0() { return static_cast<int32_t>(offsetof(Cone_t8B730118881F66B4A24038D5755C2B6F513DE4B5, ___origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_origin_0() const { return ___origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_origin_0() { return &___origin_0; }
	inline void set_origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___origin_0 = value;
	}

	inline static int32_t get_offset_of_direction_1() { return static_cast<int32_t>(offsetof(Cone_t8B730118881F66B4A24038D5755C2B6F513DE4B5, ___direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_direction_1() const { return ___direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_direction_1() { return &___direction_1; }
	inline void set_direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___direction_1 = value;
	}

	inline static int32_t get_offset_of_angle_2() { return static_cast<int32_t>(offsetof(Cone_t8B730118881F66B4A24038D5755C2B6F513DE4B5, ___angle_2)); }
	inline float get_angle_2() const { return ___angle_2; }
	inline float* get_address_of_angle_2() { return &___angle_2; }
	inline void set_angle_2(float value)
	{
		___angle_2 = value;
	}

	inline static int32_t get_offset_of_cosAngle_3() { return static_cast<int32_t>(offsetof(Cone_t8B730118881F66B4A24038D5755C2B6F513DE4B5, ___cosAngle_3)); }
	inline float get_cosAngle_3() const { return ___cosAngle_3; }
	inline float* get_address_of_cosAngle_3() { return &___cosAngle_3; }
	inline void set_cosAngle_3(float value)
	{
		___cosAngle_3 = value;
	}

	inline static int32_t get_offset_of_sinAngle_4() { return static_cast<int32_t>(offsetof(Cone_t8B730118881F66B4A24038D5755C2B6F513DE4B5, ___sinAngle_4)); }
	inline float get_sinAngle_4() const { return ___sinAngle_4; }
	inline float* get_address_of_sinAngle_4() { return &___sinAngle_4; }
	inline void set_sinAngle_4(float value)
	{
		___sinAngle_4 = value;
	}

	inline static int32_t get_offset_of_invSinAngle_5() { return static_cast<int32_t>(offsetof(Cone_t8B730118881F66B4A24038D5755C2B6F513DE4B5, ___invSinAngle_5)); }
	inline float get_invSinAngle_5() const { return ___invSinAngle_5; }
	inline float* get_address_of_invSinAngle_5() { return &___invSinAngle_5; }
	inline void set_invSinAngle_5(float value)
	{
		___invSinAngle_5 = value;
	}

	inline static int32_t get_offset_of_cosAngleSqr_6() { return static_cast<int32_t>(offsetof(Cone_t8B730118881F66B4A24038D5755C2B6F513DE4B5, ___cosAngleSqr_6)); }
	inline float get_cosAngleSqr_6() const { return ___cosAngleSqr_6; }
	inline float* get_address_of_cosAngleSqr_6() { return &___cosAngleSqr_6; }
	inline void set_cosAngleSqr_6(float value)
	{
		___cosAngleSqr_6 = value;
	}
};


// LEGOModelImporter.MathUtils/VectorDirection
struct VectorDirection_t561503F7B43746B216334AD8319BC67474BA39A8 
{
public:
	// System.Int32 LEGOModelImporter.MathUtils/VectorDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VectorDirection_t561503F7B43746B216334AD8319BC67474BA39A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LEGOModelImporter.Model/Pivot
struct Pivot_t638519F60DD640EE37D18BF6FF93A6271860DF40 
{
public:
	// System.Int32 LEGOModelImporter.Model/Pivot::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Pivot_t638519F60DD640EE37D18BF6FF93A6271860DF40, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LEGOModelImporter.ModelGroup/Optimizations
struct Optimizations_tA1E9E57D344361CF64E9F2A540748C72DAC573A3 
{
public:
	// System.Int32 LEGOModelImporter.ModelGroup/Optimizations::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Optimizations_tA1E9E57D344361CF64E9F2A540748C72DAC573A3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LEGOModelImporter.PlanarFeature/Flags
struct Flags_t0DA13F48F5D62E3148ACB36BE2B5522C5A7EE47C 
{
public:
	// System.Int32 LEGOModelImporter.PlanarFeature/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t0DA13F48F5D62E3148ACB36BE2B5522C5A7EE47C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LEGOModelImporter.PlanarFeature/PlanarConnectionType
struct PlanarConnectionType_t7DFB18A5F656490BE0E4841732EACE7039DF2B1F 
{
public:
	// System.Int32 LEGOModelImporter.PlanarFeature/PlanarConnectionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlanarConnectionType_t7DFB18A5F656490BE0E4841732EACE7039DF2B1F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LEGOModelImporter.AxleFeature
struct AxleFeature_t721BA35E67B746326439A431C1DA97F1355138F2  : public Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5
{
public:
	// LEGOModelImporter.AxleFeature/AxelType LEGOModelImporter.AxleFeature::axleType
	int32_t ___axleType_1;

public:
	inline static int32_t get_offset_of_axleType_1() { return static_cast<int32_t>(offsetof(AxleFeature_t721BA35E67B746326439A431C1DA97F1355138F2, ___axleType_1)); }
	inline int32_t get_axleType_1() const { return ___axleType_1; }
	inline int32_t* get_address_of_axleType_1() { return &___axleType_1; }
	inline void set_axleType_1(int32_t value)
	{
		___axleType_1 = value;
	}
};

struct AxleFeature_t721BA35E67B746326439A431C1DA97F1355138F2_StaticFields
{
public:
	// LEGOModelImporter.Connection/ConnectionInteraction[] LEGOModelImporter.AxleFeature::connectivityMatrix
	ConnectionInteractionU5BU5D_t737E52CEDFCB80EA9BA3DE6B36798AD12B0593EF* ___connectivityMatrix_6;

public:
	inline static int32_t get_offset_of_connectivityMatrix_6() { return static_cast<int32_t>(offsetof(AxleFeature_t721BA35E67B746326439A431C1DA97F1355138F2_StaticFields, ___connectivityMatrix_6)); }
	inline ConnectionInteractionU5BU5D_t737E52CEDFCB80EA9BA3DE6B36798AD12B0593EF* get_connectivityMatrix_6() const { return ___connectivityMatrix_6; }
	inline ConnectionInteractionU5BU5D_t737E52CEDFCB80EA9BA3DE6B36798AD12B0593EF** get_address_of_connectivityMatrix_6() { return &___connectivityMatrix_6; }
	inline void set_connectivityMatrix_6(ConnectionInteractionU5BU5D_t737E52CEDFCB80EA9BA3DE6B36798AD12B0593EF* value)
	{
		___connectivityMatrix_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connectivityMatrix_6), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// LEGOModelImporter.FixedFeature
struct FixedFeature_tB93897E645B98A4B477010C4669270FFB5CC96A4  : public Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5
{
public:
	// System.Int32 LEGOModelImporter.FixedFeature::typeId
	int32_t ___typeId_1;
	// LEGOModelImporter.FixedFeature/AxisType LEGOModelImporter.FixedFeature::axisType
	int32_t ___axisType_2;

public:
	inline static int32_t get_offset_of_typeId_1() { return static_cast<int32_t>(offsetof(FixedFeature_tB93897E645B98A4B477010C4669270FFB5CC96A4, ___typeId_1)); }
	inline int32_t get_typeId_1() const { return ___typeId_1; }
	inline int32_t* get_address_of_typeId_1() { return &___typeId_1; }
	inline void set_typeId_1(int32_t value)
	{
		___typeId_1 = value;
	}

	inline static int32_t get_offset_of_axisType_2() { return static_cast<int32_t>(offsetof(FixedFeature_tB93897E645B98A4B477010C4669270FFB5CC96A4, ___axisType_2)); }
	inline int32_t get_axisType_2() const { return ___axisType_2; }
	inline int32_t* get_address_of_axisType_2() { return &___axisType_2; }
	inline void set_axisType_2(int32_t value)
	{
		___axisType_2 = value;
	}
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// LEGOModelImporter.PlanarFeature
struct PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445  : public Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5
{
public:
	// LEGOModelImporter.PlanarFeature/PlanarConnectionType LEGOModelImporter.PlanarFeature::connectionType
	int32_t ___connectionType_3;
	// System.Int32 LEGOModelImporter.PlanarFeature::quadrants
	int32_t ___quadrants_4;
	// System.Int32 LEGOModelImporter.PlanarFeature::index
	int32_t ___index_5;
	// LEGOModelImporter.PlanarFeature/Flags LEGOModelImporter.PlanarFeature::flags
	int32_t ___flags_6;
	// LEGOModelImporter.Knob LEGOModelImporter.PlanarFeature::knob
	Knob_t2533F4A87DCCD07FC743E002589B2955D87BCC19 * ___knob_7;
	// System.Collections.Generic.List`1<LEGOModelImporter.Tube> LEGOModelImporter.PlanarFeature::tubes
	List_1_t55FB50AB728746C7A4CE36B13BC11C4BDCBC1608 * ___tubes_8;

public:
	inline static int32_t get_offset_of_connectionType_3() { return static_cast<int32_t>(offsetof(PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445, ___connectionType_3)); }
	inline int32_t get_connectionType_3() const { return ___connectionType_3; }
	inline int32_t* get_address_of_connectionType_3() { return &___connectionType_3; }
	inline void set_connectionType_3(int32_t value)
	{
		___connectionType_3 = value;
	}

	inline static int32_t get_offset_of_quadrants_4() { return static_cast<int32_t>(offsetof(PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445, ___quadrants_4)); }
	inline int32_t get_quadrants_4() const { return ___quadrants_4; }
	inline int32_t* get_address_of_quadrants_4() { return &___quadrants_4; }
	inline void set_quadrants_4(int32_t value)
	{
		___quadrants_4 = value;
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}

	inline static int32_t get_offset_of_flags_6() { return static_cast<int32_t>(offsetof(PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445, ___flags_6)); }
	inline int32_t get_flags_6() const { return ___flags_6; }
	inline int32_t* get_address_of_flags_6() { return &___flags_6; }
	inline void set_flags_6(int32_t value)
	{
		___flags_6 = value;
	}

	inline static int32_t get_offset_of_knob_7() { return static_cast<int32_t>(offsetof(PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445, ___knob_7)); }
	inline Knob_t2533F4A87DCCD07FC743E002589B2955D87BCC19 * get_knob_7() const { return ___knob_7; }
	inline Knob_t2533F4A87DCCD07FC743E002589B2955D87BCC19 ** get_address_of_knob_7() { return &___knob_7; }
	inline void set_knob_7(Knob_t2533F4A87DCCD07FC743E002589B2955D87BCC19 * value)
	{
		___knob_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___knob_7), (void*)value);
	}

	inline static int32_t get_offset_of_tubes_8() { return static_cast<int32_t>(offsetof(PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445, ___tubes_8)); }
	inline List_1_t55FB50AB728746C7A4CE36B13BC11C4BDCBC1608 * get_tubes_8() const { return ___tubes_8; }
	inline List_1_t55FB50AB728746C7A4CE36B13BC11C4BDCBC1608 ** get_address_of_tubes_8() { return &___tubes_8; }
	inline void set_tubes_8(List_1_t55FB50AB728746C7A4CE36B13BC11C4BDCBC1608 * value)
	{
		___tubes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tubes_8), (void*)value);
	}
};

struct PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445_StaticFields
{
public:
	// LEGOModelImporter.PlanarFeature/Flags LEGOModelImporter.PlanarFeature::flagsCoveringKnob
	int32_t ___flagsCoveringKnob_1;
	// LEGOModelImporter.PlanarFeature/Flags LEGOModelImporter.PlanarFeature::flagsCoveringTube
	int32_t ___flagsCoveringTube_2;
	// LEGOModelImporter.Connection/ConnectionInteraction[] LEGOModelImporter.PlanarFeature::connectivityMatrix
	ConnectionInteractionU5BU5D_t737E52CEDFCB80EA9BA3DE6B36798AD12B0593EF* ___connectivityMatrix_11;

public:
	inline static int32_t get_offset_of_flagsCoveringKnob_1() { return static_cast<int32_t>(offsetof(PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445_StaticFields, ___flagsCoveringKnob_1)); }
	inline int32_t get_flagsCoveringKnob_1() const { return ___flagsCoveringKnob_1; }
	inline int32_t* get_address_of_flagsCoveringKnob_1() { return &___flagsCoveringKnob_1; }
	inline void set_flagsCoveringKnob_1(int32_t value)
	{
		___flagsCoveringKnob_1 = value;
	}

	inline static int32_t get_offset_of_flagsCoveringTube_2() { return static_cast<int32_t>(offsetof(PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445_StaticFields, ___flagsCoveringTube_2)); }
	inline int32_t get_flagsCoveringTube_2() const { return ___flagsCoveringTube_2; }
	inline int32_t* get_address_of_flagsCoveringTube_2() { return &___flagsCoveringTube_2; }
	inline void set_flagsCoveringTube_2(int32_t value)
	{
		___flagsCoveringTube_2 = value;
	}

	inline static int32_t get_offset_of_connectivityMatrix_11() { return static_cast<int32_t>(offsetof(PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445_StaticFields, ___connectivityMatrix_11)); }
	inline ConnectionInteractionU5BU5D_t737E52CEDFCB80EA9BA3DE6B36798AD12B0593EF* get_connectivityMatrix_11() const { return ___connectivityMatrix_11; }
	inline ConnectionInteractionU5BU5D_t737E52CEDFCB80EA9BA3DE6B36798AD12B0593EF** get_address_of_connectivityMatrix_11() { return &___connectivityMatrix_11; }
	inline void set_connectivityMatrix_11(ConnectionInteractionU5BU5D_t737E52CEDFCB80EA9BA3DE6B36798AD12B0593EF* value)
	{
		___connectivityMatrix_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connectivityMatrix_11), (void*)value);
	}
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


// LEGOModelImporter.AxleField/ConnectionTuple
struct ConnectionTuple_t87F3138616E6A6C55E1E7CBFF8178D55C4A9A70B  : public RuntimeObject
{
public:
	// LEGOModelImporter.AxleField LEGOModelImporter.AxleField/ConnectionTuple::field
	AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277 * ___field_0;
	// LEGOModelImporter.Connection/ConnectionInteraction LEGOModelImporter.AxleField/ConnectionTuple::interaction
	int32_t ___interaction_1;

public:
	inline static int32_t get_offset_of_field_0() { return static_cast<int32_t>(offsetof(ConnectionTuple_t87F3138616E6A6C55E1E7CBFF8178D55C4A9A70B, ___field_0)); }
	inline AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277 * get_field_0() const { return ___field_0; }
	inline AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277 ** get_address_of_field_0() { return &___field_0; }
	inline void set_field_0(AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277 * value)
	{
		___field_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___field_0), (void*)value);
	}

	inline static int32_t get_offset_of_interaction_1() { return static_cast<int32_t>(offsetof(ConnectionTuple_t87F3138616E6A6C55E1E7CBFF8178D55C4A9A70B, ___interaction_1)); }
	inline int32_t get_interaction_1() const { return ___interaction_1; }
	inline int32_t* get_address_of_interaction_1() { return &___interaction_1; }
	inline void set_interaction_1(int32_t value)
	{
		___interaction_1 = value;
	}
};


// LEGOModelImporter.BrickBuildingUtility/<>c__DisplayClass42_0
struct U3CU3Ec__DisplayClass42_0_t1A87E3B23D5D9B02BAF2098EE6D9E0C2508D2FFA  : public RuntimeObject
{
public:
	// UnityEngine.Ray LEGOModelImporter.BrickBuildingUtility/<>c__DisplayClass42_0::ray
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray_0;
	// System.Func`2<System.ValueTuple`2<LEGOModelImporter.ConnectionField,LEGOModelImporter.ConnectionField>,System.Single> LEGOModelImporter.BrickBuildingUtility/<>c__DisplayClass42_0::<>9__0
	Func_2_t57CB2E957D22C408F1DA9DC170984BEB28D8A7E8 * ___U3CU3E9__0_1;

public:
	inline static int32_t get_offset_of_ray_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass42_0_t1A87E3B23D5D9B02BAF2098EE6D9E0C2508D2FFA, ___ray_0)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get_ray_0() const { return ___ray_0; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of_ray_0() { return &___ray_0; }
	inline void set_ray_0(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		___ray_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E9__0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass42_0_t1A87E3B23D5D9B02BAF2098EE6D9E0C2508D2FFA, ___U3CU3E9__0_1)); }
	inline Func_2_t57CB2E957D22C408F1DA9DC170984BEB28D8A7E8 * get_U3CU3E9__0_1() const { return ___U3CU3E9__0_1; }
	inline Func_2_t57CB2E957D22C408F1DA9DC170984BEB28D8A7E8 ** get_address_of_U3CU3E9__0_1() { return &___U3CU3E9__0_1; }
	inline void set_U3CU3E9__0_1(Func_2_t57CB2E957D22C408F1DA9DC170984BEB28D8A7E8 * value)
	{
		___U3CU3E9__0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_1), (void*)value);
	}
};


// LEGOModelImporter.BrickBuildingUtility/ConnectionResult
struct ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0 
{
public:
	// LEGOModelImporter.Connection LEGOModelImporter.BrickBuildingUtility/ConnectionResult::srcConnection
	Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 * ___srcConnection_0;
	// LEGOModelImporter.Connection LEGOModelImporter.BrickBuildingUtility/ConnectionResult::dstConnection
	Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 * ___dstConnection_1;
	// LEGOModelImporter.Connection/ConnectionInteraction LEGOModelImporter.BrickBuildingUtility/ConnectionResult::interaction
	int32_t ___interaction_2;
	// UnityEngine.Vector3 LEGOModelImporter.BrickBuildingUtility/ConnectionResult::intersectionPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___intersectionPoint_3;
	// System.Single LEGOModelImporter.BrickBuildingUtility/ConnectionResult::maxSqrDistance
	float ___maxSqrDistance_4;
	// System.Single LEGOModelImporter.BrickBuildingUtility/ConnectionResult::angleToConnect
	float ___angleToConnect_5;
	// UnityEngine.Vector3 LEGOModelImporter.BrickBuildingUtility/ConnectionResult::rotationAxisToConnect
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rotationAxisToConnect_6;
	// UnityEngine.Vector3 LEGOModelImporter.BrickBuildingUtility/ConnectionResult::connectionOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___connectionOffset_7;
	// System.Boolean LEGOModelImporter.BrickBuildingUtility/ConnectionResult::colliding
	bool ___colliding_8;

public:
	inline static int32_t get_offset_of_srcConnection_0() { return static_cast<int32_t>(offsetof(ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0, ___srcConnection_0)); }
	inline Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 * get_srcConnection_0() const { return ___srcConnection_0; }
	inline Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 ** get_address_of_srcConnection_0() { return &___srcConnection_0; }
	inline void set_srcConnection_0(Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 * value)
	{
		___srcConnection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___srcConnection_0), (void*)value);
	}

	inline static int32_t get_offset_of_dstConnection_1() { return static_cast<int32_t>(offsetof(ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0, ___dstConnection_1)); }
	inline Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 * get_dstConnection_1() const { return ___dstConnection_1; }
	inline Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 ** get_address_of_dstConnection_1() { return &___dstConnection_1; }
	inline void set_dstConnection_1(Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 * value)
	{
		___dstConnection_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dstConnection_1), (void*)value);
	}

	inline static int32_t get_offset_of_interaction_2() { return static_cast<int32_t>(offsetof(ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0, ___interaction_2)); }
	inline int32_t get_interaction_2() const { return ___interaction_2; }
	inline int32_t* get_address_of_interaction_2() { return &___interaction_2; }
	inline void set_interaction_2(int32_t value)
	{
		___interaction_2 = value;
	}

	inline static int32_t get_offset_of_intersectionPoint_3() { return static_cast<int32_t>(offsetof(ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0, ___intersectionPoint_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_intersectionPoint_3() const { return ___intersectionPoint_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_intersectionPoint_3() { return &___intersectionPoint_3; }
	inline void set_intersectionPoint_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___intersectionPoint_3 = value;
	}

	inline static int32_t get_offset_of_maxSqrDistance_4() { return static_cast<int32_t>(offsetof(ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0, ___maxSqrDistance_4)); }
	inline float get_maxSqrDistance_4() const { return ___maxSqrDistance_4; }
	inline float* get_address_of_maxSqrDistance_4() { return &___maxSqrDistance_4; }
	inline void set_maxSqrDistance_4(float value)
	{
		___maxSqrDistance_4 = value;
	}

	inline static int32_t get_offset_of_angleToConnect_5() { return static_cast<int32_t>(offsetof(ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0, ___angleToConnect_5)); }
	inline float get_angleToConnect_5() const { return ___angleToConnect_5; }
	inline float* get_address_of_angleToConnect_5() { return &___angleToConnect_5; }
	inline void set_angleToConnect_5(float value)
	{
		___angleToConnect_5 = value;
	}

	inline static int32_t get_offset_of_rotationAxisToConnect_6() { return static_cast<int32_t>(offsetof(ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0, ___rotationAxisToConnect_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rotationAxisToConnect_6() const { return ___rotationAxisToConnect_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rotationAxisToConnect_6() { return &___rotationAxisToConnect_6; }
	inline void set_rotationAxisToConnect_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rotationAxisToConnect_6 = value;
	}

	inline static int32_t get_offset_of_connectionOffset_7() { return static_cast<int32_t>(offsetof(ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0, ___connectionOffset_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_connectionOffset_7() const { return ___connectionOffset_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_connectionOffset_7() { return &___connectionOffset_7; }
	inline void set_connectionOffset_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___connectionOffset_7 = value;
	}

	inline static int32_t get_offset_of_colliding_8() { return static_cast<int32_t>(offsetof(ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0, ___colliding_8)); }
	inline bool get_colliding_8() const { return ___colliding_8; }
	inline bool* get_address_of_colliding_8() { return &___colliding_8; }
	inline void set_colliding_8(bool value)
	{
		___colliding_8 = value;
	}
};

// Native definition for P/Invoke marshalling of LEGOModelImporter.BrickBuildingUtility/ConnectionResult
struct ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0_marshaled_pinvoke
{
	Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 * ___srcConnection_0;
	Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 * ___dstConnection_1;
	int32_t ___interaction_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___intersectionPoint_3;
	float ___maxSqrDistance_4;
	float ___angleToConnect_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rotationAxisToConnect_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___connectionOffset_7;
	int32_t ___colliding_8;
};
// Native definition for COM marshalling of LEGOModelImporter.BrickBuildingUtility/ConnectionResult
struct ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0_marshaled_com
{
	Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 * ___srcConnection_0;
	Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 * ___dstConnection_1;
	int32_t ___interaction_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___intersectionPoint_3;
	float ___maxSqrDistance_4;
	float ___angleToConnect_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rotationAxisToConnect_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___connectionOffset_7;
	int32_t ___colliding_8;
};

// LEGOModelImporter.Connectivity/ConnectionIterator/<GetEnumerator>d__4
struct U3CGetEnumeratorU3Ed__4_t323214E45DA8AE991432AD6782BA8C009E277613  : public RuntimeObject
{
public:
	// System.Int32 LEGOModelImporter.Connectivity/ConnectionIterator/<GetEnumerator>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.ValueTuple`2<LEGOModelImporter.Connection,LEGOModelImporter.Connection> LEGOModelImporter.Connectivity/ConnectionIterator/<GetEnumerator>d__4::<>2__current
	ValueTuple_2_tE31844093EA6E41DA2EECECABE9C6C6D09CD170D  ___U3CU3E2__current_1;
	// LEGOModelImporter.Connectivity/ConnectionIterator LEGOModelImporter.Connectivity/ConnectionIterator/<GetEnumerator>d__4::<>4__this
	ConnectionIterator_t415B158FEA77755C5FD134944C1DCCAED078E30B * ___U3CU3E4__this_2;
	// System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>> LEGOModelImporter.Connectivity/ConnectionIterator/<GetEnumerator>d__4::<>7__wrap1
	Enumerator_tB1664E9614254B8BA9DBF8A2E43FDDE49C3E7220  ___U3CU3E7__wrap1_3;
	// System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<LEGOModelImporter.AxleFeature,LEGOModelImporter.AxleFeature>> LEGOModelImporter.Connectivity/ConnectionIterator/<GetEnumerator>d__4::<>7__wrap2
	Enumerator_t3E6A94099410C50805F319CC16CC0D93BE4436D8  ___U3CU3E7__wrap2_4;
	// System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<LEGOModelImporter.FixedFeature,LEGOModelImporter.FixedFeature>> LEGOModelImporter.Connectivity/ConnectionIterator/<GetEnumerator>d__4::<>7__wrap3
	Enumerator_t77AA1B6D4815D37C0F1C70571BCF17C9C631AB0D  ___U3CU3E7__wrap3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__4_t323214E45DA8AE991432AD6782BA8C009E277613, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__4_t323214E45DA8AE991432AD6782BA8C009E277613, ___U3CU3E2__current_1)); }
	inline ValueTuple_2_tE31844093EA6E41DA2EECECABE9C6C6D09CD170D  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline ValueTuple_2_tE31844093EA6E41DA2EECECABE9C6C6D09CD170D * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(ValueTuple_2_tE31844093EA6E41DA2EECECABE9C6C6D09CD170D  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___Item2_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__4_t323214E45DA8AE991432AD6782BA8C009E277613, ___U3CU3E4__this_2)); }
	inline ConnectionIterator_t415B158FEA77755C5FD134944C1DCCAED078E30B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ConnectionIterator_t415B158FEA77755C5FD134944C1DCCAED078E30B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ConnectionIterator_t415B158FEA77755C5FD134944C1DCCAED078E30B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__4_t323214E45DA8AE991432AD6782BA8C009E277613, ___U3CU3E7__wrap1_3)); }
	inline Enumerator_tB1664E9614254B8BA9DBF8A2E43FDDE49C3E7220  get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline Enumerator_tB1664E9614254B8BA9DBF8A2E43FDDE49C3E7220 * get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(Enumerator_tB1664E9614254B8BA9DBF8A2E43FDDE49C3E7220  value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_3))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_3))->___current_3))->___Item1_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_3))->___current_3))->___Item2_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__4_t323214E45DA8AE991432AD6782BA8C009E277613, ___U3CU3E7__wrap2_4)); }
	inline Enumerator_t3E6A94099410C50805F319CC16CC0D93BE4436D8  get_U3CU3E7__wrap2_4() const { return ___U3CU3E7__wrap2_4; }
	inline Enumerator_t3E6A94099410C50805F319CC16CC0D93BE4436D8 * get_address_of_U3CU3E7__wrap2_4() { return &___U3CU3E7__wrap2_4; }
	inline void set_U3CU3E7__wrap2_4(Enumerator_t3E6A94099410C50805F319CC16CC0D93BE4436D8  value)
	{
		___U3CU3E7__wrap2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap2_4))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap2_4))->___current_3))->___Item1_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap2_4))->___current_3))->___Item2_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap3_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__4_t323214E45DA8AE991432AD6782BA8C009E277613, ___U3CU3E7__wrap3_5)); }
	inline Enumerator_t77AA1B6D4815D37C0F1C70571BCF17C9C631AB0D  get_U3CU3E7__wrap3_5() const { return ___U3CU3E7__wrap3_5; }
	inline Enumerator_t77AA1B6D4815D37C0F1C70571BCF17C9C631AB0D * get_address_of_U3CU3E7__wrap3_5() { return &___U3CU3E7__wrap3_5; }
	inline void set_U3CU3E7__wrap3_5(Enumerator_t77AA1B6D4815D37C0F1C70571BCF17C9C631AB0D  value)
	{
		___U3CU3E7__wrap3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap3_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap3_5))->___current_3))->___Item1_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap3_5))->___current_3))->___Item2_1), (void*)NULL);
		#endif
	}
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


// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
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


// UnityEngine.SphereCollider
struct SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// LEGOModelImporter.Brick
struct Brick_t4E2078428A9FDB510CB1D407CE70A9084C8A72EB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 LEGOModelImporter.Brick::designID
	int32_t ___designID_4;
	// System.String LEGOModelImporter.Brick::uuid
	String_t* ___uuid_5;
	// System.Collections.Generic.List`1<LEGOModelImporter.Part> LEGOModelImporter.Brick::parts
	List_1_tCCC9F5914E615F8C549029649482DADC9A964202 * ___parts_6;
	// UnityEngine.Bounds LEGOModelImporter.Brick::totalBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___totalBounds_7;
	// System.Boolean LEGOModelImporter.Brick::colliding
	bool ___colliding_8;

public:
	inline static int32_t get_offset_of_designID_4() { return static_cast<int32_t>(offsetof(Brick_t4E2078428A9FDB510CB1D407CE70A9084C8A72EB, ___designID_4)); }
	inline int32_t get_designID_4() const { return ___designID_4; }
	inline int32_t* get_address_of_designID_4() { return &___designID_4; }
	inline void set_designID_4(int32_t value)
	{
		___designID_4 = value;
	}

	inline static int32_t get_offset_of_uuid_5() { return static_cast<int32_t>(offsetof(Brick_t4E2078428A9FDB510CB1D407CE70A9084C8A72EB, ___uuid_5)); }
	inline String_t* get_uuid_5() const { return ___uuid_5; }
	inline String_t** get_address_of_uuid_5() { return &___uuid_5; }
	inline void set_uuid_5(String_t* value)
	{
		___uuid_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uuid_5), (void*)value);
	}

	inline static int32_t get_offset_of_parts_6() { return static_cast<int32_t>(offsetof(Brick_t4E2078428A9FDB510CB1D407CE70A9084C8A72EB, ___parts_6)); }
	inline List_1_tCCC9F5914E615F8C549029649482DADC9A964202 * get_parts_6() const { return ___parts_6; }
	inline List_1_tCCC9F5914E615F8C549029649482DADC9A964202 ** get_address_of_parts_6() { return &___parts_6; }
	inline void set_parts_6(List_1_tCCC9F5914E615F8C549029649482DADC9A964202 * value)
	{
		___parts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parts_6), (void*)value);
	}

	inline static int32_t get_offset_of_totalBounds_7() { return static_cast<int32_t>(offsetof(Brick_t4E2078428A9FDB510CB1D407CE70A9084C8A72EB, ___totalBounds_7)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_totalBounds_7() const { return ___totalBounds_7; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_totalBounds_7() { return &___totalBounds_7; }
	inline void set_totalBounds_7(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___totalBounds_7 = value;
	}

	inline static int32_t get_offset_of_colliding_8() { return static_cast<int32_t>(offsetof(Brick_t4E2078428A9FDB510CB1D407CE70A9084C8A72EB, ___colliding_8)); }
	inline bool get_colliding_8() const { return ___colliding_8; }
	inline bool* get_address_of_colliding_8() { return &___colliding_8; }
	inline void set_colliding_8(bool value)
	{
		___colliding_8 = value;
	}
};


// LEGOModelImporter.Colliders
struct Colliders_t8550080A1AAF3F64E65676118544E13AE34DF6BE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 LEGOModelImporter.Colliders::version
	int32_t ___version_4;
	// System.Collections.Generic.List`1<UnityEngine.Collider> LEGOModelImporter.Colliders::colliders
	List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * ___colliders_5;
	// LEGOModelImporter.Part LEGOModelImporter.Colliders::part
	Part_tF559450A02A6BE32049B9167745FA5412AF33987 * ___part_6;

public:
	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(Colliders_t8550080A1AAF3F64E65676118544E13AE34DF6BE, ___version_4)); }
	inline int32_t get_version_4() const { return ___version_4; }
	inline int32_t* get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(int32_t value)
	{
		___version_4 = value;
	}

	inline static int32_t get_offset_of_colliders_5() { return static_cast<int32_t>(offsetof(Colliders_t8550080A1AAF3F64E65676118544E13AE34DF6BE, ___colliders_5)); }
	inline List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * get_colliders_5() const { return ___colliders_5; }
	inline List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B ** get_address_of_colliders_5() { return &___colliders_5; }
	inline void set_colliders_5(List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * value)
	{
		___colliders_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colliders_5), (void*)value);
	}

	inline static int32_t get_offset_of_part_6() { return static_cast<int32_t>(offsetof(Colliders_t8550080A1AAF3F64E65676118544E13AE34DF6BE, ___part_6)); }
	inline Part_tF559450A02A6BE32049B9167745FA5412AF33987 * get_part_6() const { return ___part_6; }
	inline Part_tF559450A02A6BE32049B9167745FA5412AF33987 ** get_address_of_part_6() { return &___part_6; }
	inline void set_part_6(Part_tF559450A02A6BE32049B9167745FA5412AF33987 * value)
	{
		___part_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___part_6), (void*)value);
	}
};


// LEGOModelImporter.CommonPart
struct CommonPart_t5CE5E257A8662BD13B645124A193CA0A47E16BE0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// LEGOModelImporter.Part LEGOModelImporter.CommonPart::part
	Part_tF559450A02A6BE32049B9167745FA5412AF33987 * ___part_4;

public:
	inline static int32_t get_offset_of_part_4() { return static_cast<int32_t>(offsetof(CommonPart_t5CE5E257A8662BD13B645124A193CA0A47E16BE0, ___part_4)); }
	inline Part_tF559450A02A6BE32049B9167745FA5412AF33987 * get_part_4() const { return ___part_4; }
	inline Part_tF559450A02A6BE32049B9167745FA5412AF33987 ** get_address_of_part_4() { return &___part_4; }
	inline void set_part_4(Part_tF559450A02A6BE32049B9167745FA5412AF33987 * value)
	{
		___part_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___part_4), (void*)value);
	}
};


// LEGOModelImporter.ConnectionField
struct ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// LEGOModelImporter.Connectivity LEGOModelImporter.ConnectionField::connectivity
	Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF * ___connectivity_4;
	// LEGOModelImporter.ConnectionField/FieldKind LEGOModelImporter.ConnectionField::kind
	int32_t ___kind_5;

public:
	inline static int32_t get_offset_of_connectivity_4() { return static_cast<int32_t>(offsetof(ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC, ___connectivity_4)); }
	inline Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF * get_connectivity_4() const { return ___connectivity_4; }
	inline Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF ** get_address_of_connectivity_4() { return &___connectivity_4; }
	inline void set_connectivity_4(Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF * value)
	{
		___connectivity_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connectivity_4), (void*)value);
	}

	inline static int32_t get_offset_of_kind_5() { return static_cast<int32_t>(offsetof(ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC, ___kind_5)); }
	inline int32_t get_kind_5() const { return ___kind_5; }
	inline int32_t* get_address_of_kind_5() { return &___kind_5; }
	inline void set_kind_5(int32_t value)
	{
		___kind_5 = value;
	}
};


// LEGOModelImporter.Connectivity
struct Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 LEGOModelImporter.Connectivity::version
	int32_t ___version_4;
	// LEGOModelImporter.Part LEGOModelImporter.Connectivity::part
	Part_tF559450A02A6BE32049B9167745FA5412AF33987 * ___part_5;
	// UnityEngine.Bounds LEGOModelImporter.Connectivity::extents
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___extents_6;
	// System.Collections.Generic.List`1<LEGOModelImporter.PlanarField> LEGOModelImporter.Connectivity::planarFields
	List_1_tEBF6868521218B8961BF50B2E3E2A4808B56253D * ___planarFields_7;
	// System.Collections.Generic.List`1<LEGOModelImporter.AxleField> LEGOModelImporter.Connectivity::axleFields
	List_1_t1B8E248437FE7A019F683CE60E7553A98F8C89DD * ___axleFields_8;
	// System.Collections.Generic.List`1<LEGOModelImporter.FixedField> LEGOModelImporter.Connectivity::fixedFields
	List_1_t1AA4D82EFDD45B199AA932D2FCCCD9CFB46B055A * ___fixedFields_9;

public:
	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF, ___version_4)); }
	inline int32_t get_version_4() const { return ___version_4; }
	inline int32_t* get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(int32_t value)
	{
		___version_4 = value;
	}

	inline static int32_t get_offset_of_part_5() { return static_cast<int32_t>(offsetof(Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF, ___part_5)); }
	inline Part_tF559450A02A6BE32049B9167745FA5412AF33987 * get_part_5() const { return ___part_5; }
	inline Part_tF559450A02A6BE32049B9167745FA5412AF33987 ** get_address_of_part_5() { return &___part_5; }
	inline void set_part_5(Part_tF559450A02A6BE32049B9167745FA5412AF33987 * value)
	{
		___part_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___part_5), (void*)value);
	}

	inline static int32_t get_offset_of_extents_6() { return static_cast<int32_t>(offsetof(Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF, ___extents_6)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_extents_6() const { return ___extents_6; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_extents_6() { return &___extents_6; }
	inline void set_extents_6(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___extents_6 = value;
	}

	inline static int32_t get_offset_of_planarFields_7() { return static_cast<int32_t>(offsetof(Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF, ___planarFields_7)); }
	inline List_1_tEBF6868521218B8961BF50B2E3E2A4808B56253D * get_planarFields_7() const { return ___planarFields_7; }
	inline List_1_tEBF6868521218B8961BF50B2E3E2A4808B56253D ** get_address_of_planarFields_7() { return &___planarFields_7; }
	inline void set_planarFields_7(List_1_tEBF6868521218B8961BF50B2E3E2A4808B56253D * value)
	{
		___planarFields_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___planarFields_7), (void*)value);
	}

	inline static int32_t get_offset_of_axleFields_8() { return static_cast<int32_t>(offsetof(Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF, ___axleFields_8)); }
	inline List_1_t1B8E248437FE7A019F683CE60E7553A98F8C89DD * get_axleFields_8() const { return ___axleFields_8; }
	inline List_1_t1B8E248437FE7A019F683CE60E7553A98F8C89DD ** get_address_of_axleFields_8() { return &___axleFields_8; }
	inline void set_axleFields_8(List_1_t1B8E248437FE7A019F683CE60E7553A98F8C89DD * value)
	{
		___axleFields_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axleFields_8), (void*)value);
	}

	inline static int32_t get_offset_of_fixedFields_9() { return static_cast<int32_t>(offsetof(Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF, ___fixedFields_9)); }
	inline List_1_t1AA4D82EFDD45B199AA932D2FCCCD9CFB46B055A * get_fixedFields_9() const { return ___fixedFields_9; }
	inline List_1_t1AA4D82EFDD45B199AA932D2FCCCD9CFB46B055A ** get_address_of_fixedFields_9() { return &___fixedFields_9; }
	inline void set_fixedFields_9(List_1_t1AA4D82EFDD45B199AA932D2FCCCD9CFB46B055A * value)
	{
		___fixedFields_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fixedFields_9), (void*)value);
	}
};


// LEGOModelImporter.Model
struct Model_t0BB06671045A247BE4A257DFD651FAD578AE9C46  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String LEGOModelImporter.Model::absoluteFilePath
	String_t* ___absoluteFilePath_4;
	// System.String LEGOModelImporter.Model::relativeFilePath
	String_t* ___relativeFilePath_5;
	// LEGOModelImporter.Model/Pivot LEGOModelImporter.Model::pivot
	int32_t ___pivot_6;
	// System.Boolean LEGOModelImporter.Model::autoGenerated
	bool ___autoGenerated_7;
	// LEGOModelImporter.DictionaryIntToModelGroupImportSettings LEGOModelImporter.Model::importSettings
	DictionaryIntToModelGroupImportSettings_t56FA7C0F43855C4E235FD514C714028A2472C1D0 * ___importSettings_8;

public:
	inline static int32_t get_offset_of_absoluteFilePath_4() { return static_cast<int32_t>(offsetof(Model_t0BB06671045A247BE4A257DFD651FAD578AE9C46, ___absoluteFilePath_4)); }
	inline String_t* get_absoluteFilePath_4() const { return ___absoluteFilePath_4; }
	inline String_t** get_address_of_absoluteFilePath_4() { return &___absoluteFilePath_4; }
	inline void set_absoluteFilePath_4(String_t* value)
	{
		___absoluteFilePath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___absoluteFilePath_4), (void*)value);
	}

	inline static int32_t get_offset_of_relativeFilePath_5() { return static_cast<int32_t>(offsetof(Model_t0BB06671045A247BE4A257DFD651FAD578AE9C46, ___relativeFilePath_5)); }
	inline String_t* get_relativeFilePath_5() const { return ___relativeFilePath_5; }
	inline String_t** get_address_of_relativeFilePath_5() { return &___relativeFilePath_5; }
	inline void set_relativeFilePath_5(String_t* value)
	{
		___relativeFilePath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___relativeFilePath_5), (void*)value);
	}

	inline static int32_t get_offset_of_pivot_6() { return static_cast<int32_t>(offsetof(Model_t0BB06671045A247BE4A257DFD651FAD578AE9C46, ___pivot_6)); }
	inline int32_t get_pivot_6() const { return ___pivot_6; }
	inline int32_t* get_address_of_pivot_6() { return &___pivot_6; }
	inline void set_pivot_6(int32_t value)
	{
		___pivot_6 = value;
	}

	inline static int32_t get_offset_of_autoGenerated_7() { return static_cast<int32_t>(offsetof(Model_t0BB06671045A247BE4A257DFD651FAD578AE9C46, ___autoGenerated_7)); }
	inline bool get_autoGenerated_7() const { return ___autoGenerated_7; }
	inline bool* get_address_of_autoGenerated_7() { return &___autoGenerated_7; }
	inline void set_autoGenerated_7(bool value)
	{
		___autoGenerated_7 = value;
	}

	inline static int32_t get_offset_of_importSettings_8() { return static_cast<int32_t>(offsetof(Model_t0BB06671045A247BE4A257DFD651FAD578AE9C46, ___importSettings_8)); }
	inline DictionaryIntToModelGroupImportSettings_t56FA7C0F43855C4E235FD514C714028A2472C1D0 * get_importSettings_8() const { return ___importSettings_8; }
	inline DictionaryIntToModelGroupImportSettings_t56FA7C0F43855C4E235FD514C714028A2472C1D0 ** get_address_of_importSettings_8() { return &___importSettings_8; }
	inline void set_importSettings_8(DictionaryIntToModelGroupImportSettings_t56FA7C0F43855C4E235FD514C714028A2472C1D0 * value)
	{
		___importSettings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___importSettings_8), (void*)value);
	}
};


// LEGOModelImporter.ModelGroup
struct ModelGroup_t5EEDBE74F9D50BE94CCF3AA746BB704C43495AE9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String LEGOModelImporter.ModelGroup::groupName
	String_t* ___groupName_7;
	// System.String LEGOModelImporter.ModelGroup::parentName
	String_t* ___parentName_8;
	// System.Int32 LEGOModelImporter.ModelGroup::number
	int32_t ___number_9;
	// LEGOModelImporter.ModelGroupImportSettings LEGOModelImporter.ModelGroup::importSettings
	ModelGroupImportSettings_t0A6FFB361CE6EBB21970CACDCF2C5FAAF507E714 * ___importSettings_10;
	// LEGOModelImporter.ModelGroup/Optimizations LEGOModelImporter.ModelGroup::optimizations
	int32_t ___optimizations_11;
	// System.Boolean LEGOModelImporter.ModelGroup::randomizeNormals
	bool ___randomizeNormals_12;
	// System.Boolean LEGOModelImporter.ModelGroup::processed
	bool ___processed_13;
	// System.String LEGOModelImporter.ModelGroup::absoluteFilePath
	String_t* ___absoluteFilePath_14;
	// System.String LEGOModelImporter.ModelGroup::relativeFilePath
	String_t* ___relativeFilePath_15;
	// System.Boolean LEGOModelImporter.ModelGroup::autoGenerated
	bool ___autoGenerated_16;
	// System.Collections.Generic.List`1<LEGOModelImporter.CullingCameraConfig> LEGOModelImporter.ModelGroup::views
	List_1_t1CAAFB6184A6519BE66C670D00C798E77213AE69 * ___views_17;

public:
	inline static int32_t get_offset_of_groupName_7() { return static_cast<int32_t>(offsetof(ModelGroup_t5EEDBE74F9D50BE94CCF3AA746BB704C43495AE9, ___groupName_7)); }
	inline String_t* get_groupName_7() const { return ___groupName_7; }
	inline String_t** get_address_of_groupName_7() { return &___groupName_7; }
	inline void set_groupName_7(String_t* value)
	{
		___groupName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___groupName_7), (void*)value);
	}

	inline static int32_t get_offset_of_parentName_8() { return static_cast<int32_t>(offsetof(ModelGroup_t5EEDBE74F9D50BE94CCF3AA746BB704C43495AE9, ___parentName_8)); }
	inline String_t* get_parentName_8() const { return ___parentName_8; }
	inline String_t** get_address_of_parentName_8() { return &___parentName_8; }
	inline void set_parentName_8(String_t* value)
	{
		___parentName_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentName_8), (void*)value);
	}

	inline static int32_t get_offset_of_number_9() { return static_cast<int32_t>(offsetof(ModelGroup_t5EEDBE74F9D50BE94CCF3AA746BB704C43495AE9, ___number_9)); }
	inline int32_t get_number_9() const { return ___number_9; }
	inline int32_t* get_address_of_number_9() { return &___number_9; }
	inline void set_number_9(int32_t value)
	{
		___number_9 = value;
	}

	inline static int32_t get_offset_of_importSettings_10() { return static_cast<int32_t>(offsetof(ModelGroup_t5EEDBE74F9D50BE94CCF3AA746BB704C43495AE9, ___importSettings_10)); }
	inline ModelGroupImportSettings_t0A6FFB361CE6EBB21970CACDCF2C5FAAF507E714 * get_importSettings_10() const { return ___importSettings_10; }
	inline ModelGroupImportSettings_t0A6FFB361CE6EBB21970CACDCF2C5FAAF507E714 ** get_address_of_importSettings_10() { return &___importSettings_10; }
	inline void set_importSettings_10(ModelGroupImportSettings_t0A6FFB361CE6EBB21970CACDCF2C5FAAF507E714 * value)
	{
		___importSettings_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___importSettings_10), (void*)value);
	}

	inline static int32_t get_offset_of_optimizations_11() { return static_cast<int32_t>(offsetof(ModelGroup_t5EEDBE74F9D50BE94CCF3AA746BB704C43495AE9, ___optimizations_11)); }
	inline int32_t get_optimizations_11() const { return ___optimizations_11; }
	inline int32_t* get_address_of_optimizations_11() { return &___optimizations_11; }
	inline void set_optimizations_11(int32_t value)
	{
		___optimizations_11 = value;
	}

	inline static int32_t get_offset_of_randomizeNormals_12() { return static_cast<int32_t>(offsetof(ModelGroup_t5EEDBE74F9D50BE94CCF3AA746BB704C43495AE9, ___randomizeNormals_12)); }
	inline bool get_randomizeNormals_12() const { return ___randomizeNormals_12; }
	inline bool* get_address_of_randomizeNormals_12() { return &___randomizeNormals_12; }
	inline void set_randomizeNormals_12(bool value)
	{
		___randomizeNormals_12 = value;
	}

	inline static int32_t get_offset_of_processed_13() { return static_cast<int32_t>(offsetof(ModelGroup_t5EEDBE74F9D50BE94CCF3AA746BB704C43495AE9, ___processed_13)); }
	inline bool get_processed_13() const { return ___processed_13; }
	inline bool* get_address_of_processed_13() { return &___processed_13; }
	inline void set_processed_13(bool value)
	{
		___processed_13 = value;
	}

	inline static int32_t get_offset_of_absoluteFilePath_14() { return static_cast<int32_t>(offsetof(ModelGroup_t5EEDBE74F9D50BE94CCF3AA746BB704C43495AE9, ___absoluteFilePath_14)); }
	inline String_t* get_absoluteFilePath_14() const { return ___absoluteFilePath_14; }
	inline String_t** get_address_of_absoluteFilePath_14() { return &___absoluteFilePath_14; }
	inline void set_absoluteFilePath_14(String_t* value)
	{
		___absoluteFilePath_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___absoluteFilePath_14), (void*)value);
	}

	inline static int32_t get_offset_of_relativeFilePath_15() { return static_cast<int32_t>(offsetof(ModelGroup_t5EEDBE74F9D50BE94CCF3AA746BB704C43495AE9, ___relativeFilePath_15)); }
	inline String_t* get_relativeFilePath_15() const { return ___relativeFilePath_15; }
	inline String_t** get_address_of_relativeFilePath_15() { return &___relativeFilePath_15; }
	inline void set_relativeFilePath_15(String_t* value)
	{
		___relativeFilePath_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___relativeFilePath_15), (void*)value);
	}

	inline static int32_t get_offset_of_autoGenerated_16() { return static_cast<int32_t>(offsetof(ModelGroup_t5EEDBE74F9D50BE94CCF3AA746BB704C43495AE9, ___autoGenerated_16)); }
	inline bool get_autoGenerated_16() const { return ___autoGenerated_16; }
	inline bool* get_address_of_autoGenerated_16() { return &___autoGenerated_16; }
	inline void set_autoGenerated_16(bool value)
	{
		___autoGenerated_16 = value;
	}

	inline static int32_t get_offset_of_views_17() { return static_cast<int32_t>(offsetof(ModelGroup_t5EEDBE74F9D50BE94CCF3AA746BB704C43495AE9, ___views_17)); }
	inline List_1_t1CAAFB6184A6519BE66C670D00C798E77213AE69 * get_views_17() const { return ___views_17; }
	inline List_1_t1CAAFB6184A6519BE66C670D00C798E77213AE69 ** get_address_of_views_17() { return &___views_17; }
	inline void set_views_17(List_1_t1CAAFB6184A6519BE66C670D00C798E77213AE69 * value)
	{
		___views_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___views_17), (void*)value);
	}
};

struct ModelGroup_t5EEDBE74F9D50BE94CCF3AA746BB704C43495AE9_StaticFields
{
public:
	// LEGOModelImporter.ModelGroup/Optimizations LEGOModelImporter.ModelGroup::CameraBasedGeometryRemovalOptimizations
	int32_t ___CameraBasedGeometryRemovalOptimizations_4;
	// LEGOModelImporter.ModelGroup/Optimizations LEGOModelImporter.ModelGroup::DefaultEnvironmentOptimizations
	int32_t ___DefaultEnvironmentOptimizations_5;
	// LEGOModelImporter.ModelGroup/Optimizations LEGOModelImporter.ModelGroup::DefaultStaticOptimizations
	int32_t ___DefaultStaticOptimizations_6;

public:
	inline static int32_t get_offset_of_CameraBasedGeometryRemovalOptimizations_4() { return static_cast<int32_t>(offsetof(ModelGroup_t5EEDBE74F9D50BE94CCF3AA746BB704C43495AE9_StaticFields, ___CameraBasedGeometryRemovalOptimizations_4)); }
	inline int32_t get_CameraBasedGeometryRemovalOptimizations_4() const { return ___CameraBasedGeometryRemovalOptimizations_4; }
	inline int32_t* get_address_of_CameraBasedGeometryRemovalOptimizations_4() { return &___CameraBasedGeometryRemovalOptimizations_4; }
	inline void set_CameraBasedGeometryRemovalOptimizations_4(int32_t value)
	{
		___CameraBasedGeometryRemovalOptimizations_4 = value;
	}

	inline static int32_t get_offset_of_DefaultEnvironmentOptimizations_5() { return static_cast<int32_t>(offsetof(ModelGroup_t5EEDBE74F9D50BE94CCF3AA746BB704C43495AE9_StaticFields, ___DefaultEnvironmentOptimizations_5)); }
	inline int32_t get_DefaultEnvironmentOptimizations_5() const { return ___DefaultEnvironmentOptimizations_5; }
	inline int32_t* get_address_of_DefaultEnvironmentOptimizations_5() { return &___DefaultEnvironmentOptimizations_5; }
	inline void set_DefaultEnvironmentOptimizations_5(int32_t value)
	{
		___DefaultEnvironmentOptimizations_5 = value;
	}

	inline static int32_t get_offset_of_DefaultStaticOptimizations_6() { return static_cast<int32_t>(offsetof(ModelGroup_t5EEDBE74F9D50BE94CCF3AA746BB704C43495AE9_StaticFields, ___DefaultStaticOptimizations_6)); }
	inline int32_t get_DefaultStaticOptimizations_6() const { return ___DefaultStaticOptimizations_6; }
	inline int32_t* get_address_of_DefaultStaticOptimizations_6() { return &___DefaultStaticOptimizations_6; }
	inline void set_DefaultStaticOptimizations_6(int32_t value)
	{
		___DefaultStaticOptimizations_6 = value;
	}
};


// LEGOModelImporter.ParentChecker
struct ParentChecker_t670B3E94478A84284EBABF400B1783284662C347  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// LEGOModelImporter.Part
struct Part_tF559450A02A6BE32049B9167745FA5412AF33987  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 LEGOModelImporter.Part::designID
	int32_t ___designID_4;
	// System.Boolean LEGOModelImporter.Part::legacy
	bool ___legacy_5;
	// LEGOModelImporter.Connectivity LEGOModelImporter.Part::connectivity
	Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF * ___connectivity_6;
	// System.Collections.Generic.List`1<System.Int32> LEGOModelImporter.Part::materialIDs
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___materialIDs_7;
	// LEGOModelImporter.Colliders LEGOModelImporter.Part::colliders
	Colliders_t8550080A1AAF3F64E65676118544E13AE34DF6BE * ___colliders_8;
	// LEGOModelImporter.Brick LEGOModelImporter.Part::brick
	Brick_t4E2078428A9FDB510CB1D407CE70A9084C8A72EB * ___brick_9;
	// System.Collections.Generic.List`1<LEGOModelImporter.Knob> LEGOModelImporter.Part::knobs
	List_1_tDA08591435D35253AF91AF0FD289366260969280 * ___knobs_10;
	// System.Collections.Generic.List`1<LEGOModelImporter.Tube> LEGOModelImporter.Part::tubes
	List_1_t55FB50AB728746C7A4CE36B13BC11C4BDCBC1608 * ___tubes_11;

public:
	inline static int32_t get_offset_of_designID_4() { return static_cast<int32_t>(offsetof(Part_tF559450A02A6BE32049B9167745FA5412AF33987, ___designID_4)); }
	inline int32_t get_designID_4() const { return ___designID_4; }
	inline int32_t* get_address_of_designID_4() { return &___designID_4; }
	inline void set_designID_4(int32_t value)
	{
		___designID_4 = value;
	}

	inline static int32_t get_offset_of_legacy_5() { return static_cast<int32_t>(offsetof(Part_tF559450A02A6BE32049B9167745FA5412AF33987, ___legacy_5)); }
	inline bool get_legacy_5() const { return ___legacy_5; }
	inline bool* get_address_of_legacy_5() { return &___legacy_5; }
	inline void set_legacy_5(bool value)
	{
		___legacy_5 = value;
	}

	inline static int32_t get_offset_of_connectivity_6() { return static_cast<int32_t>(offsetof(Part_tF559450A02A6BE32049B9167745FA5412AF33987, ___connectivity_6)); }
	inline Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF * get_connectivity_6() const { return ___connectivity_6; }
	inline Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF ** get_address_of_connectivity_6() { return &___connectivity_6; }
	inline void set_connectivity_6(Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF * value)
	{
		___connectivity_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connectivity_6), (void*)value);
	}

	inline static int32_t get_offset_of_materialIDs_7() { return static_cast<int32_t>(offsetof(Part_tF559450A02A6BE32049B9167745FA5412AF33987, ___materialIDs_7)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_materialIDs_7() const { return ___materialIDs_7; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_materialIDs_7() { return &___materialIDs_7; }
	inline void set_materialIDs_7(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___materialIDs_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___materialIDs_7), (void*)value);
	}

	inline static int32_t get_offset_of_colliders_8() { return static_cast<int32_t>(offsetof(Part_tF559450A02A6BE32049B9167745FA5412AF33987, ___colliders_8)); }
	inline Colliders_t8550080A1AAF3F64E65676118544E13AE34DF6BE * get_colliders_8() const { return ___colliders_8; }
	inline Colliders_t8550080A1AAF3F64E65676118544E13AE34DF6BE ** get_address_of_colliders_8() { return &___colliders_8; }
	inline void set_colliders_8(Colliders_t8550080A1AAF3F64E65676118544E13AE34DF6BE * value)
	{
		___colliders_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colliders_8), (void*)value);
	}

	inline static int32_t get_offset_of_brick_9() { return static_cast<int32_t>(offsetof(Part_tF559450A02A6BE32049B9167745FA5412AF33987, ___brick_9)); }
	inline Brick_t4E2078428A9FDB510CB1D407CE70A9084C8A72EB * get_brick_9() const { return ___brick_9; }
	inline Brick_t4E2078428A9FDB510CB1D407CE70A9084C8A72EB ** get_address_of_brick_9() { return &___brick_9; }
	inline void set_brick_9(Brick_t4E2078428A9FDB510CB1D407CE70A9084C8A72EB * value)
	{
		___brick_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___brick_9), (void*)value);
	}

	inline static int32_t get_offset_of_knobs_10() { return static_cast<int32_t>(offsetof(Part_tF559450A02A6BE32049B9167745FA5412AF33987, ___knobs_10)); }
	inline List_1_tDA08591435D35253AF91AF0FD289366260969280 * get_knobs_10() const { return ___knobs_10; }
	inline List_1_tDA08591435D35253AF91AF0FD289366260969280 ** get_address_of_knobs_10() { return &___knobs_10; }
	inline void set_knobs_10(List_1_tDA08591435D35253AF91AF0FD289366260969280 * value)
	{
		___knobs_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___knobs_10), (void*)value);
	}

	inline static int32_t get_offset_of_tubes_11() { return static_cast<int32_t>(offsetof(Part_tF559450A02A6BE32049B9167745FA5412AF33987, ___tubes_11)); }
	inline List_1_t55FB50AB728746C7A4CE36B13BC11C4BDCBC1608 * get_tubes_11() const { return ___tubes_11; }
	inline List_1_t55FB50AB728746C7A4CE36B13BC11C4BDCBC1608 ** get_address_of_tubes_11() { return &___tubes_11; }
	inline void set_tubes_11(List_1_t55FB50AB728746C7A4CE36B13BC11C4BDCBC1608 * value)
	{
		___tubes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tubes_11), (void*)value);
	}
};

struct Part_tF559450A02A6BE32049B9167745FA5412AF33987_StaticFields
{
public:
	// System.Single LEGOModelImporter.Part::collisionEpsilon
	float ___collisionEpsilon_12;

public:
	inline static int32_t get_offset_of_collisionEpsilon_12() { return static_cast<int32_t>(offsetof(Part_tF559450A02A6BE32049B9167745FA5412AF33987_StaticFields, ___collisionEpsilon_12)); }
	inline float get_collisionEpsilon_12() const { return ___collisionEpsilon_12; }
	inline float* get_address_of_collisionEpsilon_12() { return &___collisionEpsilon_12; }
	inline void set_collisionEpsilon_12(float value)
	{
		___collisionEpsilon_12 = value;
	}
};


// LEGOModelImporter.ScaleChecker
struct ScaleChecker_t01DBF635B151BAAEDEE8A0A793D2A604CC9B7D7C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// LEGOModelImporter.AxleField
struct AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277  : public ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC
{
public:
	// System.Boolean LEGOModelImporter.AxleField::requireGrabbing
	bool ___requireGrabbing_6;
	// System.Boolean LEGOModelImporter.AxleField::startCapped
	bool ___startCapped_7;
	// System.Boolean LEGOModelImporter.AxleField::endCapped
	bool ___endCapped_8;
	// System.Boolean LEGOModelImporter.AxleField::grabbing
	bool ___grabbing_9;
	// System.Single LEGOModelImporter.AxleField::length
	float ___length_10;
	// LEGOModelImporter.AxleFeature LEGOModelImporter.AxleField::feature
	AxleFeature_t721BA35E67B746326439A431C1DA97F1355138F2 * ___feature_11;
	// System.Collections.Generic.List`1<LEGOModelImporter.AxleField/ConnectionTuple> LEGOModelImporter.AxleField::connectedTo
	List_1_t223F22A202FC8F6ECA4154CF2988538828E7AE90 * ___connectedTo_12;

public:
	inline static int32_t get_offset_of_requireGrabbing_6() { return static_cast<int32_t>(offsetof(AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277, ___requireGrabbing_6)); }
	inline bool get_requireGrabbing_6() const { return ___requireGrabbing_6; }
	inline bool* get_address_of_requireGrabbing_6() { return &___requireGrabbing_6; }
	inline void set_requireGrabbing_6(bool value)
	{
		___requireGrabbing_6 = value;
	}

	inline static int32_t get_offset_of_startCapped_7() { return static_cast<int32_t>(offsetof(AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277, ___startCapped_7)); }
	inline bool get_startCapped_7() const { return ___startCapped_7; }
	inline bool* get_address_of_startCapped_7() { return &___startCapped_7; }
	inline void set_startCapped_7(bool value)
	{
		___startCapped_7 = value;
	}

	inline static int32_t get_offset_of_endCapped_8() { return static_cast<int32_t>(offsetof(AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277, ___endCapped_8)); }
	inline bool get_endCapped_8() const { return ___endCapped_8; }
	inline bool* get_address_of_endCapped_8() { return &___endCapped_8; }
	inline void set_endCapped_8(bool value)
	{
		___endCapped_8 = value;
	}

	inline static int32_t get_offset_of_grabbing_9() { return static_cast<int32_t>(offsetof(AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277, ___grabbing_9)); }
	inline bool get_grabbing_9() const { return ___grabbing_9; }
	inline bool* get_address_of_grabbing_9() { return &___grabbing_9; }
	inline void set_grabbing_9(bool value)
	{
		___grabbing_9 = value;
	}

	inline static int32_t get_offset_of_length_10() { return static_cast<int32_t>(offsetof(AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277, ___length_10)); }
	inline float get_length_10() const { return ___length_10; }
	inline float* get_address_of_length_10() { return &___length_10; }
	inline void set_length_10(float value)
	{
		___length_10 = value;
	}

	inline static int32_t get_offset_of_feature_11() { return static_cast<int32_t>(offsetof(AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277, ___feature_11)); }
	inline AxleFeature_t721BA35E67B746326439A431C1DA97F1355138F2 * get_feature_11() const { return ___feature_11; }
	inline AxleFeature_t721BA35E67B746326439A431C1DA97F1355138F2 ** get_address_of_feature_11() { return &___feature_11; }
	inline void set_feature_11(AxleFeature_t721BA35E67B746326439A431C1DA97F1355138F2 * value)
	{
		___feature_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___feature_11), (void*)value);
	}

	inline static int32_t get_offset_of_connectedTo_12() { return static_cast<int32_t>(offsetof(AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277, ___connectedTo_12)); }
	inline List_1_t223F22A202FC8F6ECA4154CF2988538828E7AE90 * get_connectedTo_12() const { return ___connectedTo_12; }
	inline List_1_t223F22A202FC8F6ECA4154CF2988538828E7AE90 ** get_address_of_connectedTo_12() { return &___connectedTo_12; }
	inline void set_connectedTo_12(List_1_t223F22A202FC8F6ECA4154CF2988538828E7AE90 * value)
	{
		___connectedTo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connectedTo_12), (void*)value);
	}
};


// LEGOModelImporter.FixedField
struct FixedField_t54C0D973EBCF8097CB0AF444508F22ADFA6EA79F  : public ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC
{
public:
	// LEGOModelImporter.FixedFeature LEGOModelImporter.FixedField::feature
	FixedFeature_tB93897E645B98A4B477010C4669270FFB5CC96A4 * ___feature_6;
	// LEGOModelImporter.FixedField LEGOModelImporter.FixedField::connectedField
	FixedField_t54C0D973EBCF8097CB0AF444508F22ADFA6EA79F * ___connectedField_7;

public:
	inline static int32_t get_offset_of_feature_6() { return static_cast<int32_t>(offsetof(FixedField_t54C0D973EBCF8097CB0AF444508F22ADFA6EA79F, ___feature_6)); }
	inline FixedFeature_tB93897E645B98A4B477010C4669270FFB5CC96A4 * get_feature_6() const { return ___feature_6; }
	inline FixedFeature_tB93897E645B98A4B477010C4669270FFB5CC96A4 ** get_address_of_feature_6() { return &___feature_6; }
	inline void set_feature_6(FixedFeature_tB93897E645B98A4B477010C4669270FFB5CC96A4 * value)
	{
		___feature_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___feature_6), (void*)value);
	}

	inline static int32_t get_offset_of_connectedField_7() { return static_cast<int32_t>(offsetof(FixedField_t54C0D973EBCF8097CB0AF444508F22ADFA6EA79F, ___connectedField_7)); }
	inline FixedField_t54C0D973EBCF8097CB0AF444508F22ADFA6EA79F * get_connectedField_7() const { return ___connectedField_7; }
	inline FixedField_t54C0D973EBCF8097CB0AF444508F22ADFA6EA79F ** get_address_of_connectedField_7() { return &___connectedField_7; }
	inline void set_connectedField_7(FixedField_t54C0D973EBCF8097CB0AF444508F22ADFA6EA79F * value)
	{
		___connectedField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connectedField_7), (void*)value);
	}
};


// LEGOModelImporter.Knob
struct Knob_t2533F4A87DCCD07FC743E002589B2955D87BCC19  : public CommonPart_t5CE5E257A8662BD13B645124A193CA0A47E16BE0
{
public:
	// System.Int32 LEGOModelImporter.Knob::connectionIndex
	int32_t ___connectionIndex_5;
	// LEGOModelImporter.PlanarField LEGOModelImporter.Knob::field
	PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * ___field_6;

public:
	inline static int32_t get_offset_of_connectionIndex_5() { return static_cast<int32_t>(offsetof(Knob_t2533F4A87DCCD07FC743E002589B2955D87BCC19, ___connectionIndex_5)); }
	inline int32_t get_connectionIndex_5() const { return ___connectionIndex_5; }
	inline int32_t* get_address_of_connectionIndex_5() { return &___connectionIndex_5; }
	inline void set_connectionIndex_5(int32_t value)
	{
		___connectionIndex_5 = value;
	}

	inline static int32_t get_offset_of_field_6() { return static_cast<int32_t>(offsetof(Knob_t2533F4A87DCCD07FC743E002589B2955D87BCC19, ___field_6)); }
	inline PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * get_field_6() const { return ___field_6; }
	inline PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 ** get_address_of_field_6() { return &___field_6; }
	inline void set_field_6(PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * value)
	{
		___field_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___field_6), (void*)value);
	}
};


// LEGOModelImporter.PlanarField
struct PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65  : public ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC
{
public:
	// LEGOModelImporter.PlanarFeature[] LEGOModelImporter.PlanarField::connections
	PlanarFeatureU5BU5D_tBC900E26A810AE80A97E3E8D3610EAE6CB31145B* ___connections_6;
	// System.Collections.Generic.List`1<System.Int32> LEGOModelImporter.PlanarField::connected
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___connected_7;
	// System.Int32 LEGOModelImporter.PlanarField::connectableConnections
	int32_t ___connectableConnections_8;
	// LEGOModelImporter.PlanarField/ConnectionTuple[] LEGOModelImporter.PlanarField::connectedTo
	ConnectionTupleU5BU5D_t80F8B02DEBE727BD9FA89FE2E09F0CF9815F7D97* ___connectedTo_9;
	// UnityEngine.Vector2Int LEGOModelImporter.PlanarField::gridSize
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___gridSize_10;

public:
	inline static int32_t get_offset_of_connections_6() { return static_cast<int32_t>(offsetof(PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65, ___connections_6)); }
	inline PlanarFeatureU5BU5D_tBC900E26A810AE80A97E3E8D3610EAE6CB31145B* get_connections_6() const { return ___connections_6; }
	inline PlanarFeatureU5BU5D_tBC900E26A810AE80A97E3E8D3610EAE6CB31145B** get_address_of_connections_6() { return &___connections_6; }
	inline void set_connections_6(PlanarFeatureU5BU5D_tBC900E26A810AE80A97E3E8D3610EAE6CB31145B* value)
	{
		___connections_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connections_6), (void*)value);
	}

	inline static int32_t get_offset_of_connected_7() { return static_cast<int32_t>(offsetof(PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65, ___connected_7)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_connected_7() const { return ___connected_7; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_connected_7() { return &___connected_7; }
	inline void set_connected_7(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___connected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connected_7), (void*)value);
	}

	inline static int32_t get_offset_of_connectableConnections_8() { return static_cast<int32_t>(offsetof(PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65, ___connectableConnections_8)); }
	inline int32_t get_connectableConnections_8() const { return ___connectableConnections_8; }
	inline int32_t* get_address_of_connectableConnections_8() { return &___connectableConnections_8; }
	inline void set_connectableConnections_8(int32_t value)
	{
		___connectableConnections_8 = value;
	}

	inline static int32_t get_offset_of_connectedTo_9() { return static_cast<int32_t>(offsetof(PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65, ___connectedTo_9)); }
	inline ConnectionTupleU5BU5D_t80F8B02DEBE727BD9FA89FE2E09F0CF9815F7D97* get_connectedTo_9() const { return ___connectedTo_9; }
	inline ConnectionTupleU5BU5D_t80F8B02DEBE727BD9FA89FE2E09F0CF9815F7D97** get_address_of_connectedTo_9() { return &___connectedTo_9; }
	inline void set_connectedTo_9(ConnectionTupleU5BU5D_t80F8B02DEBE727BD9FA89FE2E09F0CF9815F7D97* value)
	{
		___connectedTo_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connectedTo_9), (void*)value);
	}

	inline static int32_t get_offset_of_gridSize_10() { return static_cast<int32_t>(offsetof(PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65, ___gridSize_10)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_gridSize_10() const { return ___gridSize_10; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_gridSize_10() { return &___gridSize_10; }
	inline void set_gridSize_10(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___gridSize_10 = value;
	}
};


// LEGOModelImporter.Tube
struct Tube_t2D49285A2D8CDFDFFDC7D96CF4BA7FAD9950F5C0  : public CommonPart_t5CE5E257A8662BD13B645124A193CA0A47E16BE0
{
public:
	// System.Collections.Generic.List`1<System.Int32> LEGOModelImporter.Tube::connections
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___connections_5;
	// LEGOModelImporter.PlanarField LEGOModelImporter.Tube::field
	PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * ___field_6;

public:
	inline static int32_t get_offset_of_connections_5() { return static_cast<int32_t>(offsetof(Tube_t2D49285A2D8CDFDFFDC7D96CF4BA7FAD9950F5C0, ___connections_5)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_connections_5() const { return ___connections_5; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_connections_5() { return &___connections_5; }
	inline void set_connections_5(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___connections_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connections_5), (void*)value);
	}

	inline static int32_t get_offset_of_field_6() { return static_cast<int32_t>(offsetof(Tube_t2D49285A2D8CDFDFFDC7D96CF4BA7FAD9950F5C0, ___field_6)); }
	inline PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * get_field_6() const { return ___field_6; }
	inline PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 ** get_address_of_field_6() { return &___field_6; }
	inline void set_field_6(PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * value)
	{
		___field_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___field_6), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * m_Items[1];

public:
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// LEGOModelImporter.Connection/ConnectionInteraction[]
struct ConnectionInteractionU5BU5D_t737E52CEDFCB80EA9BA3DE6B36798AD12B0593EF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// LEGOModelImporter.PlanarFeature[]
struct PlanarFeatureU5BU5D_tBC900E26A810AE80A97E3E8D3610EAE6CB31145B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * m_Items[1];

public:
	inline PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// LEGOModelImporter.PlanarField/ConnectionTuple[]
struct ConnectionTupleU5BU5D_t80F8B02DEBE727BD9FA89FE2E09F0CF9815F7D97  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * m_Items[1];

public:
	inline ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A  HashSet_1_GetEnumerator_m7B591DC586DE6ACF8918E1BC71FA731FB919603E_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC55AF9E2F45639649E40AF5919D6169FD9543E01_gshared_inline (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD87CDEF3F60C047F21B9E6A48590E59D9D6621C9_gshared (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m8A225BA705CC2D5BA0A22FF58381EA1FDB37ED20_gshared (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.ValueTuple`2<System.Object,System.Object>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9148F8DD88DA128ACE947B84B2102A54C6B389D0_gshared (HashSet_1_t4627A2F84CC471FF3CA9E1574EFC11A9D891A90B * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.ValueTuple`2<System.Object,System.Object>>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7DD1F5182F2AF49975E789B7B9B55148BBD46D65  HashSet_1_GetEnumerator_mCBCEFF900833B06A7CE849970946C9CBD652DB17_gshared (HashSet_1_t4627A2F84CC471FF3CA9E1574EFC11A9D891A90B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.ValueTuple`2<System.Object,System.Object>>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  Enumerator_get_Current_m1C7F1E4BCF91D730C26F7D52DEE3737D7B683CE3_gshared_inline (Enumerator_t7DD1F5182F2AF49975E789B7B9B55148BBD46D65 * __this, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Object,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m7200D87E35146B328553F6054EF895C48674919C_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.ValueTuple`2<System.Object,System.Object>>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mD8A7BDCD43EEFA5828E2D654C4267EA36E8137EB_gshared (HashSet_1_t4627A2F84CC471FF3CA9E1574EFC11A9D891A90B * __this, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m72233B5F7FCF2569B68FB23409A39EA0CAF31D5A_gshared (Enumerator_t7DD1F5182F2AF49975E789B7B9B55148BBD46D65 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.ValueTuple`2<System.Object,System.Object>>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD92B2961B7145D971B73B465A03F04B539123F73_gshared (Enumerator_t7DD1F5182F2AF49975E789B7B9B55148BBD46D65 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.Object>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m327E28340C3773242D59565FA68E6A3680B343B0_gshared (List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.Object>>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m79D32E782BD097B097B8045AD1070F4797212D45_gshared (List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC * __this, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_gshared (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_gshared (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.ValueTuple`2<System.Object,System.Object>>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m5E23E4F4A43B475122EA1BE49E1EAB2B174D4D6D_gshared (HashSet_1_t4627A2F84CC471FF3CA9E1574EFC11A9D891A90B * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.Object>>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0  List_1_GetEnumerator_mD7FED3357E937EF8BDE8CFAD90DD3CD2489B889A_gshared (List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<System.Object,System.Object>>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  Enumerator_get_Current_m8B737F0ABD2247C4E13D52C15DEAB59C34368B56_gshared_inline (Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC34E84789B18F4A0FE38F5A6D20958052D39F587_gshared (Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<System.Object,System.Object>>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mF033552727887D964B4594242801D04BDD185C02_gshared (Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_cyan_m0C608BC083FD98C45C1F4F15AE803D288C647686 (const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<LEGOModelImporter.CullingCameraConfig>::GetEnumerator()
inline Enumerator_tD49CB71AE708F07DF32F81F0160D93345519B5AA  List_1_GetEnumerator_m5DFD9E782F5FE9EA908BE63C61FB3C1D56061259 (List_1_t1CAAFB6184A6519BE66C670D00C798E77213AE69 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD49CB71AE708F07DF32F81F0160D93345519B5AA  (*) (List_1_t1CAAFB6184A6519BE66C670D00C798E77213AE69 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<LEGOModelImporter.CullingCameraConfig>::get_Current()
inline CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65 * Enumerator_get_Current_m7C3DB20F7490CF8BA2031C1C8873B083D1E9D6E4_inline (Enumerator_tD49CB71AE708F07DF32F81F0160D93345519B5AA * __this, const RuntimeMethod* method)
{
	return ((  CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65 * (*) (Enumerator_tD49CB71AE708F07DF32F81F0160D93345519B5AA *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___q1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s2, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::set_matrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawFrustum(UnityEngine.Vector3,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawFrustum_m1D7ED495FFECF243FFC7F562504359EF092274C8 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, float ___fov1, float ___maxRange2, float ___minRange3, float ___aspect4, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawWireCube(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireCube_mC526244E50C6E5793D4066C9C99023D5FF8424BF (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___size1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<LEGOModelImporter.CullingCameraConfig>::MoveNext()
inline bool Enumerator_MoveNext_m46DD87DB689C7F33B55542D9D9E4F6AA8C522CFE (Enumerator_tD49CB71AE708F07DF32F81F0160D93345519B5AA * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD49CB71AE708F07DF32F81F0160D93345519B5AA *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<LEGOModelImporter.CullingCameraConfig>::Dispose()
inline void Enumerator_Dispose_m5FD7C550BAD42F76B82211BCEE69C423DE0C8270 (Enumerator_tD49CB71AE708F07DF32F81F0160D93345519B5AA * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD49CB71AE708F07DF32F81F0160D93345519B5AA *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<LEGOModelImporter.CullingCameraConfig>::.ctor()
inline void List_1__ctor_mA51EC33F46F53D205E51B06E299853D167E5B50D (List_1_t1CAAFB6184A6519BE66C670D00C798E77213AE69 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1CAAFB6184A6519BE66C670D00C798E77213AE69 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void LEGOModelImporter.ParentChecker::EnsureParentScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParentChecker_EnsureParentScale_m44FE11134A4ED3550DAEF7476746215DCC3E04BF (ParentChecker_t670B3E94478A84284EBABF400B1783284662C347 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___lhs0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___rhs1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.Collider>::.ctor()
inline void HashSet_1__ctor_m2578708ADD8B7170D86C64A423A6A9F2966AD7A8 (HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA *, const RuntimeMethod*))HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<UnityEngine.Collider> LEGOModelImporter.Colliders::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Colliders_GetEnumerator_mD6B57180F4B5CB5F7A1ECDD79B39179762BAC4CC (Colliders_t8550080A1AAF3F64E65676118544E13AE34DF6BE * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.GameObject::get_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  GameObject_get_scene_m7EBF95ABB5037FEE6811928F2E83C769C53F86C2 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.PhysicsScene UnityEngine.PhysicsSceneExtensions::GetPhysicsScene(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhysicsScene_tEDFCAA935450E8EBB7732353D9AA264A5F711678  PhysicsSceneExtensions_GetPhysicsScene_m716E028C809F5E276F1C8DEEA8E1BC91AA1C4650 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// UnityEngine.Quaternion LEGOModelImporter.MathUtils::MatrixToQuaternion(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  MathUtils_MatrixToQuaternion_m8727C73F850F8305EC4023F0C5C1772CBDECA774 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___mat0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BoxCollider_get_center_m832B93439717C72D4A3B427C6E8F5B54E2DBD669 (BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BoxCollider_get_size_mBC38D4926D4BE54A6532F6E1D642F363CA3A58A1 (BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Int32 LEGOModelImporter.BrickBuildingUtility::get_IgnoreMask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BrickBuildingUtility_get_IgnoreMask_m05BF714B41E26C92A89CEBC990AADF4B9A864492_inline (const RuntimeMethod* method);
// System.Int32 UnityEngine.PhysicsScene::OverlapBox(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Collider[],UnityEngine.Quaternion,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhysicsScene_OverlapBox_mCC9E06BCEE764C2C0A9F2C544A69B996BB37CF27 (PhysicsScene_tEDFCAA935450E8EBB7732353D9AA264A5F711678 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___halfExtents1, ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* ___results2, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.SphereCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SphereCollider_get_center_mBFAE4FFFC76B8FD8F1B2B2F12C52A30470443D3A (SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.SphereCollider::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SphereCollider_get_radius_m403989140BDAD513299276953B481167CF08D02F (SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.PhysicsScene::OverlapSphere(UnityEngine.Vector3,System.Single,UnityEngine.Collider[],System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhysicsScene_OverlapSphere_mBFBB0C810534D52967EE4FDC97DB67301D769ACC (PhysicsScene_tEDFCAA935450E8EBB7732353D9AA264A5F711678 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___radius1, ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* ___results2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<LEGOModelImporter.Part>()
inline Part_tF559450A02A6BE32049B9167745FA5412AF33987 * Component_GetComponentInParent_TisPart_tF559450A02A6BE32049B9167745FA5412AF33987_mBAB9DC3A11167A654F06B0CC064E6F14EADFCF93 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Part_tF559450A02A6BE32049B9167745FA5412AF33987 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Collider>::Add(!0)
inline bool HashSet_1_Add_m5FA07E777D1D5195CEDB21D3A8B79883525F266A (HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA *, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 *, const RuntimeMethod*))HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<UnityEngine.Collider>::GetEnumerator()
inline Enumerator_t34208F8A6A2CC718C7DD445F48D51279F182B7B6  HashSet_1_GetEnumerator_m514613CAD53B23779AE116A896E222CFAC64015F (HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t34208F8A6A2CC718C7DD445F48D51279F182B7B6  (*) (HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA *, const RuntimeMethod*))HashSet_1_GetEnumerator_m7B591DC586DE6ACF8918E1BC71FA731FB919603E_gshared)(__this, method);
}
// !0 System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Collider>::get_Current()
inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * Enumerator_get_Current_m0CD9B77F7E73370E5B257EB20C852508E7BB02F7_inline (Enumerator_t34208F8A6A2CC718C7DD445F48D51279F182B7B6 * __this, const RuntimeMethod* method)
{
	return ((  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * (*) (Enumerator_t34208F8A6A2CC718C7DD445F48D51279F182B7B6 *, const RuntimeMethod*))Enumerator_get_Current_mC55AF9E2F45639649E40AF5919D6169FD9543E01_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Collider>::MoveNext()
inline bool Enumerator_MoveNext_m493D962CE026516E2269E90F978CB8404CDDA831 (Enumerator_t34208F8A6A2CC718C7DD445F48D51279F182B7B6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t34208F8A6A2CC718C7DD445F48D51279F182B7B6 *, const RuntimeMethod*))Enumerator_MoveNext_mD87CDEF3F60C047F21B9E6A48590E59D9D6621C9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Collider>::Dispose()
inline void Enumerator_Dispose_m0CD42E9899C12DFE9E5FD08407958AAAA325B2FB (Enumerator_t34208F8A6A2CC718C7DD445F48D51279F182B7B6 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t34208F8A6A2CC718C7DD445F48D51279F182B7B6 *, const RuntimeMethod*))Enumerator_Dispose_m8A225BA705CC2D5BA0A22FF58381EA1FDB37ED20_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerator`1<LEGOModelImporter.ConnectionField> LEGOModelImporter.Connectivity::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Connectivity_GetEnumerator_m898A7A0B6F451EBB6A7C332766DDC1182BDB9FF4 (Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<LEGOModelImporter.Knob>::.ctor()
inline void List_1__ctor_m960E78FC6504C7FDE2B5E238B847171E035A566B (List_1_tDA08591435D35253AF91AF0FD289366260969280 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA08591435D35253AF91AF0FD289366260969280 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<LEGOModelImporter.Tube>::.ctor()
inline void List_1__ctor_mD29527BFEFCBDB48E903FE11701483211C42C20C (List_1_t55FB50AB728746C7A4CE36B13BC11C4BDCBC1608 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t55FB50AB728746C7A4CE36B13BC11C4BDCBC1608 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void LEGOModelImporter.CommonPart::UpdateVisibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonPart_UpdateVisibility_m306F69838B0FA6B725E0300F8031C4DE234DBF19 (CommonPart_t5CE5E257A8662BD13B645124A193CA0A47E16BE0 * __this, const RuntimeMethod* method);
// System.Void LEGOModelImporter.Connection::RegisterPrefabChanges(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Connection_RegisterPrefabChanges_m610AA31575C04683CE051065C245AC0041B0E0BA (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___changedObject0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<LEGOModelImporter.Tube>::GetEnumerator()
inline Enumerator_tB588E52D794CD121A4A6D4C05BEDF4481E376B76  List_1_GetEnumerator_m113FCF5FA38176C82449EBD461365CD1958DDA77 (List_1_t55FB50AB728746C7A4CE36B13BC11C4BDCBC1608 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB588E52D794CD121A4A6D4C05BEDF4481E376B76  (*) (List_1_t55FB50AB728746C7A4CE36B13BC11C4BDCBC1608 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<LEGOModelImporter.Tube>::get_Current()
inline Tube_t2D49285A2D8CDFDFFDC7D96CF4BA7FAD9950F5C0 * Enumerator_get_Current_mE10FAFCFFF757ABAADFDCD5744D4FD09136B35E5_inline (Enumerator_tB588E52D794CD121A4A6D4C05BEDF4481E376B76 * __this, const RuntimeMethod* method)
{
	return ((  Tube_t2D49285A2D8CDFDFFDC7D96CF4BA7FAD9950F5C0 * (*) (Enumerator_tB588E52D794CD121A4A6D4C05BEDF4481E376B76 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<LEGOModelImporter.Tube>::MoveNext()
inline bool Enumerator_MoveNext_m4A2C59C9E61A913787CE893C7F2F243AA82AE08F (Enumerator_tB588E52D794CD121A4A6D4C05BEDF4481E376B76 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB588E52D794CD121A4A6D4C05BEDF4481E376B76 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<LEGOModelImporter.Tube>::Dispose()
inline void Enumerator_Dispose_m25810F0420A5BCBCFFBF0440A3A5830169B16850 (Enumerator_tB588E52D794CD121A4A6D4C05BEDF4481E376B76 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB588E52D794CD121A4A6D4C05BEDF4481E376B76 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// LEGOModelImporter.PlanarField LEGOModelImporter.PlanarFeature::get_Field()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * PlanarFeature_get_Field_mB68F7D4AFECD9B6E3FDF8272EC1103C16EDB7804 (PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * __this, const RuntimeMethod* method);
// LEGOModelImporter.PlanarFeature LEGOModelImporter.PlanarField::GetConnection(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * PlanarField_GetConnection_m180AAC326845CE5303ED676D2CD90A354D2B5A2E (PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * __this, int32_t ___index0, const RuntimeMethod* method);
// LEGOModelImporter.PlanarFeature LEGOModelImporter.PlanarFeature::GetConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * PlanarFeature_GetConnection_mE995115297A5C7DFB09355FD4CBC583B46932ABB (PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * __this, const RuntimeMethod* method);
// System.Boolean LEGOModelImporter.Connection::IsConnectable(LEGOModelImporter.Connection/ConnectionInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Connection_IsConnectable_m639C98D3D3F1E1562ECAF7BB19932AF298A7F469 (int32_t ___match0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629 (const RuntimeMethod* method);
// UnityEngine.Vector3 LEGOModelImporter.PlanarField::GetPosition(LEGOModelImporter.PlanarFeature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PlanarField_GetPosition_m0C60AD9C05965F971872CE76ADA13FCDEC3016BD (PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * __this, PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * ___connection0, const RuntimeMethod* method);
// UnityEngine.Vector3 LEGOModelImporter.PlanarFeature::GetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PlanarFeature_GetPosition_m398B3DFF11F85F34F18E35F057E24013DB543DA8 (PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * __this, const RuntimeMethod* method);
// System.Single LEGOModelImporter.MathUtils::DistanceSquared(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MathUtils_DistanceSquared_mE1C9074C9468B321E35688D78441790A2E774424 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___q1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Angle_m3715AB03A36C59D8CF08F8D71E2F46454EB884C1 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, const RuntimeMethod* method);
// System.Void LEGOModelImporter.Connection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Connection__ctor_mDBBE58C719F271A705BB5E5B91312AE5EE5B67FC (Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// UnityEngine.LayerMask LEGOModelImporter.ConnectionField::GetMask(LEGOModelImporter.ConnectionField/FieldKind,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ConnectionField_GetMask_m1D27728777B260789BA4AB0F0D7F17CB362A5F27 (int32_t ___kind0, bool ___bothKinds1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.ValueTuple`2<LEGOModelImporter.Connection,LEGOModelImporter.Connection>>::.ctor()
inline void HashSet_1__ctor_mDECF73971EA6732CFBED1E356E48E1F5804CCCBA (HashSet_1_t69A741B8DFFFBB102061CF32AD5D84BF4646522A * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t69A741B8DFFFBB102061CF32AD5D84BF4646522A *, const RuntimeMethod*))HashSet_1__ctor_m9148F8DD88DA128ACE947B84B2102A54C6B389D0_gshared)(__this, method);
}
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Collider[] LEGOModelImporter.BrickBuildingUtility::get_ColliderBuffer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* BrickBuildingUtility_get_ColliderBuffer_m90E3B3B0BC31339A5C434E8C5DDE6B142D9FA9F6_inline (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<LEGOModelImporter.PlanarField>()
inline PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * Component_GetComponent_TisPlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65_m4124B4A352DBC23504D5D2922BD6E949BFDB9489 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean LEGOModelImporter.PlanarField::GetOverlap(LEGOModelImporter.PlanarField,LEGOModelImporter.PlanarField,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Vector2Int&,UnityEngine.Vector2Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarField_GetOverlap_mFDEFCF79D3C4F4FAB1C25264A59058785356C420 (PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * ___f10, PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * ___f21, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___f1Transform2, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___f2Transform3, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * ___min4, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * ___max5, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1<System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>> LEGOModelImporter.PlanarField::GetConnectionsOnOverlap(LEGOModelImporter.PlanarField,LEGOModelImporter.PlanarField,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Vector2Int,UnityEngine.Vector2Int,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3 * PlanarField_GetConnectionsOnOverlap_mC3EB086B23235728EB27F7E19F0954250C223118 (PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * ___lhs0, PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * ___rhs1, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___lhsTransformation2, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___rhsTransformation3, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___min4, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___max5, bool* ___reject6, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>>::GetEnumerator()
inline Enumerator_t4D376E3C22DD5227BB0FBDD64CE44B74AC7BCC0E  HashSet_1_GetEnumerator_mCFCFDF66BC7C228600AF49A478B4E3EF068B9782 (HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4D376E3C22DD5227BB0FBDD64CE44B74AC7BCC0E  (*) (HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3 *, const RuntimeMethod*))HashSet_1_GetEnumerator_mCBCEFF900833B06A7CE849970946C9CBD652DB17_gshared)(__this, method);
}
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>>::get_Current()
inline ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  Enumerator_get_Current_m9C08DFCCDD0FD5C1BD7C7DF2C48741761F5AB0CD_inline (Enumerator_t4D376E3C22DD5227BB0FBDD64CE44B74AC7BCC0E * __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  (*) (Enumerator_t4D376E3C22DD5227BB0FBDD64CE44B74AC7BCC0E *, const RuntimeMethod*))Enumerator_get_Current_m1C7F1E4BCF91D730C26F7D52DEE3737D7B683CE3_gshared_inline)(__this, method);
}
// System.Void System.ValueTuple`2<LEGOModelImporter.Connection,LEGOModelImporter.Connection>::.ctor(!0,!1)
inline void ValueTuple_2__ctor_m403716C8ED2D73C79170287DA962B5F8ABB21F6F (ValueTuple_2_tE31844093EA6E41DA2EECECABE9C6C6D09CD170D * __this, Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 * ___item10, Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 * ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_tE31844093EA6E41DA2EECECABE9C6C6D09CD170D *, Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 *, Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 *, const RuntimeMethod*))ValueTuple_2__ctor_m7200D87E35146B328553F6054EF895C48674919C_gshared)(__this, ___item10, ___item21, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.ValueTuple`2<LEGOModelImporter.Connection,LEGOModelImporter.Connection>>::Add(!0)
inline bool HashSet_1_Add_m4DA62069A44D6CF2BA81EBA9EB723221F23754D7 (HashSet_1_t69A741B8DFFFBB102061CF32AD5D84BF4646522A * __this, ValueTuple_2_tE31844093EA6E41DA2EECECABE9C6C6D09CD170D  ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t69A741B8DFFFBB102061CF32AD5D84BF4646522A *, ValueTuple_2_tE31844093EA6E41DA2EECECABE9C6C6D09CD170D , const RuntimeMethod*))HashSet_1_Add_mD8A7BDCD43EEFA5828E2D654C4267EA36E8137EB_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>>::MoveNext()
inline bool Enumerator_MoveNext_m15C3343C38F5263A4598DCEE6DA20343007A94BF (Enumerator_t4D376E3C22DD5227BB0FBDD64CE44B74AC7BCC0E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4D376E3C22DD5227BB0FBDD64CE44B74AC7BCC0E *, const RuntimeMethod*))Enumerator_MoveNext_m72233B5F7FCF2569B68FB23409A39EA0CAF31D5A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>>::Dispose()
inline void Enumerator_Dispose_m1AC04F9D458AB26A6C4ED08757F6CBD2874C6DAB (Enumerator_t4D376E3C22DD5227BB0FBDD64CE44B74AC7BCC0E * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4D376E3C22DD5227BB0FBDD64CE44B74AC7BCC0E *, const RuntimeMethod*))Enumerator_Dispose_mD92B2961B7145D971B73B465A03F04B539123F73_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<LEGOModelImporter.ConnectionField>::.ctor()
inline void HashSet_1__ctor_mA94817DDAA91845521271BA333AA79454B98E4D9 (HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296 *, const RuntimeMethod*))HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>>::.ctor()
inline void List_1__ctor_m16456A7292CE17197A0C71EAC02C0E57291AF1A1 (List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F *, const RuntimeMethod*))List_1__ctor_m327E28340C3773242D59565FA68E6A3680B343B0_gshared)(__this, method);
}
// System.Collections.Generic.List`1<System.Int32> LEGOModelImporter.PlanarField::GetConnectedConnections()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * PlanarField_GetConnectedConnections_m78B59C683E10A59630A4A6261984EE16839F98C3_inline (PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
inline Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline)(__this, method);
}
// System.Void System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>::.ctor(!0,!1)
inline void ValueTuple_2__ctor_mFF3538F7A84D1D0A9AF7312B4D28100580E26E2F (ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E * __this, PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * ___item10, PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E *, PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 *, PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 *, const RuntimeMethod*))ValueTuple_2__ctor_m7200D87E35146B328553F6054EF895C48674919C_gshared)(__this, ___item10, ___item21, method);
}
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>>::Add(!0)
inline void List_1_Add_m98A5E810B3DC6EFA75E566CF401484790B608BB6 (List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F * __this, ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F *, ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E , const RuntimeMethod*))List_1_Add_m79D32E782BD097B097B8045AD1070F4797212D45_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<LEGOModelImporter.ConnectionField>::Add(!0)
inline bool HashSet_1_Add_m6E7231630320E685DE2F9F1ECD4638CE9652551A (HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296 * __this, ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296 *, ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC *, const RuntimeMethod*))HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6 (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
inline void Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86 (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_gshared)(__this, method);
}
// System.Void LEGOModelImporter.PlanarField::Disconnect(System.Collections.Generic.ICollection`1<System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarField_Disconnect_mD3C7194C16CE3178255C1CED2865AE0857B04791 (RuntimeObject* ___toBeDisconnected0, bool ___updateKnobsAndTubes1, const RuntimeMethod* method);
// System.Boolean LEGOModelImporter.PlanarFeature::CheckConnectionTransformationValid(LEGOModelImporter.PlanarFeature,LEGOModelImporter.Connection/ConnectionInteraction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarFeature_CheckConnectionTransformationValid_m219D610C874FAFCEF0B60AC1B5CAA4CCE07A31A3 (PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * __this, PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * ___rhs0, int32_t* ___match1, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_get_inverse_mFA34ECC790B269522F60FC32370D628DAFCAE225 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2Int UnityEngine.Vector2Int::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Vector2Int_get_zero_m89F24AE488182BAB38B381B445B8868B3DD5A2AE (const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD (float ___f0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Boolean LEGOModelImporter.PlanarField::AlignRotation(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarField_AlignRotation_mAA5F4EDABD9DCB6720894545F50E941C2FDB0468 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___source0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___destination1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___resultRotation2, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::ToAngleAxis(System.Single&,UnityEngine.Vector3&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_ToAngleAxis_m4282D6D010AFDC7F8F4E1EB2558A298D5E3BCBEE_inline (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, float* ___angle0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___axis1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline)(__this, method);
}
// System.Boolean LEGOModelImporter.PlanarFeature::HasConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarFeature_HasConnection_m808FBBDA3F64ED6C1612E1D65B2C04672329081F (PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
inline bool List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(!0)
inline bool List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F_gshared)(__this, ___item0, method);
}
// System.Void LEGOModelImporter.PlanarField::Connect(System.Int32,LEGOModelImporter.PlanarFeature,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarField_Connect_mC3A89F7F89C27E8B944465F3E768EF8B7431FDFE (PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * __this, int32_t ___src0, PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * ___dst1, bool ___updateKnobsAndTubes2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2Int LEGOModelImporter.PlanarField::ToGridPos(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  PlanarField_ToGridPos_m1400D5DD1D663A102513139264A56492B01CC42B (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPos0, const RuntimeMethod* method);
// LEGOModelImporter.PlanarFeature LEGOModelImporter.PlanarField::GetConnectionAt(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * PlanarField_GetConnectionAt_m20597BF9520137B32BA448206D6045B7F5336495 (PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___gridPos0, const RuntimeMethod* method);
// System.Int32 LEGOModelImporter.PlanarField::GetIndex(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlanarField_GetIndex_m1B88267B6E69EF29ED7849419037653881FF6477 (PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___gridPos0, const RuntimeMethod* method);
// UnityEngine.Vector3 LEGOModelImporter.MathUtils::GetColumn(UnityEngine.Matrix4x4,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MathUtils_GetColumn_m3D8B6FC2507F32D6210A72790C619B5372AB728D (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m0, int32_t ___index1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___fromDirection0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___toDirection1, const RuntimeMethod* method);
// UnityEngine.Quaternion LEGOModelImporter.MathUtils::AlignRotation(UnityEngine.Matrix4x4,UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  MathUtils_AlignRotation_m0098F3322C8D47A211F7FF55AAB8035C7F11AD0D (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___destination0, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___sourceAxes1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>>::.ctor()
inline void HashSet_1__ctor_mEA02ECDF08DE797E2DA2CAF23CF363D6CFB67889 (HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3 *, const RuntimeMethod*))HashSet_1__ctor_m9148F8DD88DA128ACE947B84B2102A54C6B389D0_gshared)(__this, method);
}
// UnityEngine.Vector2Int UnityEngine.Vector2Int::op_Addition(UnityEngine.Vector2Int,UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Vector2Int_op_Addition_mD8F595C79642BE4C542F070C7D65C255D1A19C29_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___a0, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2Int::set_x(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_x_m58F3B1895453A0A4BC964CA331D56B7C3D873B7C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>>::Clear()
inline void HashSet_1_Clear_m480D16A39C17FA7EAE3DBA201077B9955841B37D (HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3 *, const RuntimeMethod*))HashSet_1_Clear_m5E23E4F4A43B475122EA1BE49E1EAB2B174D4D6D_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>>::Add(!0)
inline bool HashSet_1_Add_mEE5C2C6FFD1C4DF64BCCA3972352B78FE4FF1B4A (HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3 * __this, ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3 *, ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E , const RuntimeMethod*))HashSet_1_Add_mD8A7BDCD43EEFA5828E2D654C4267EA36E8137EB_gshared)(__this, ___item0, method);
}
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0 (int32_t ___value0, const RuntimeMethod* method);
// System.Void LEGOModelImporter.PlanarField::OnConnectionChanged(LEGOModelImporter.PlanarFeature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarField_OnConnectionChanged_m51A5D6875A1634E1AED86CD7DE8C1F1E4615E3E4 (PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * __this, PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * ___connection0, const RuntimeMethod* method);
// System.Void LEGOModelImporter.PlanarFeature::UpdateKnobsAndTubes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarFeature_UpdateKnobsAndTubes_m272C668B6E8A725AB110AAD72DD9A0E7242226DF (PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * __this, const RuntimeMethod* method);
// System.Void LEGOModelImporter.PlanarField::Disconnect(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarField_Disconnect_mB720B796126A8EB74E8A4AC70B62BB9131F604CA (PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * __this, int32_t ___index0, bool ___updateKnobsAndTubes1, const RuntimeMethod* method);
// System.Void LEGOModelImporter.PlanarField/ConnectionTuple::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionTuple__ctor_m108DC725639DDA52DDCFF0817F5C25AAFD9763B8 (ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * __this, const RuntimeMethod* method);
// System.Void LEGOModelImporter.PlanarField::Disconnect(LEGOModelImporter.PlanarFeature,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarField_Disconnect_mC9E0228E042E8CFF8C69EC04B646977018996A08 (PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * __this, PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * ___connection0, bool ___updateKnobsAndTubes1, const RuntimeMethod* method);
// System.Void LEGOModelImporter.ConnectionField::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionField__ctor_m0EE83D94D3A5E9CD34958A602CDCB4DC67BD08B9 (ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * __this, const RuntimeMethod* method);
// System.Void LEGOModelImporter.ScaleChecker::EnsureScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleChecker_EnsureScale_m4B9F17922E711B55F8F3782181914D9C4D981094 (ScaleChecker_t01DBF635B151BAAEDEE8A0A793D2A604CC9B7D7C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Boolean LEGOModelImporter.PlanarFeature::IsRelevantForTube()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarFeature_IsRelevantForTube_mB988AA0836A3517168BA7D28F012EE7A33C91039 (PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * __this, const RuntimeMethod* method);
// System.Boolean LEGOMaterials.MouldingColour::IsAnyTransparent(System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouldingColour_IsAnyTransparent_mC39AF1D59CF4D51E700F3AE7EB68B0B5C9663F62 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___ids0, const RuntimeMethod* method);
// System.Void LEGOModelImporter.CommonPart::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonPart__ctor_m27E83872442C4B591385305EF4B0383FE3A9BF3C (CommonPart_t5CE5E257A8662BD13B645124A193CA0A47E16BE0 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB (float ___f0, const RuntimeMethod* method);
// System.Int32 LEGOModelImporter.Vector3Ext::MajorAxis(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3Ext_MajorAxis_m45F320B4EF93E54C8188C61C704EBBB063BECB85 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_Item_m7E5B57E02F6873804F40DD48F8BEA00247AFF5AC (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_set_Item_mF3E5D7FFAD5F81973283AE6C1D15C9B238AEE346 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method);
// System.Void LEGOModelImporter.BrickBuildingUtility/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCA5F5241E5DD6491D4EA1ECE965341BDD60A4184 (U3CU3Ec_t3CB44C086FE13BB27D8E8857E6F65F503B89F717 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// System.Int32 System.Single::CompareTo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4 (float* __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean LEGOModelImporter.BrickBuildingUtility/ConnectionResult::IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionResult_IsEmpty_m3C822F290FA6EF3F1192B434C869518F9BE27453 (ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0 * __this, const RuntimeMethod* method);
// System.Void LEGOModelImporter.Colliders/<GetEnumerator>d__3::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__3_U3CU3Em__Finally1_m22020BBD7225222D23D111CE2462C4B6394E4AC8 (U3CGetEnumeratorU3Ed__3_t894FD38B75EDD4C1A39A55BADD3FC15B81275C7C * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Collider>::GetEnumerator()
inline Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B  List_1_GetEnumerator_m58E2D47394110BC4AC8216E1ED13CE109A1DCF57 (List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B  (*) (List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Collider>::get_Current()
inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * Enumerator_get_Current_m731F0CD1A6FC3AA134F92A5FF4620AD6F70F97E7_inline (Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B * __this, const RuntimeMethod* method)
{
	return ((  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * (*) (Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Collider>::MoveNext()
inline bool Enumerator_MoveNext_m5C79C0EB3EAC684514CA5A703D1FF749464B8A4E (Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void LEGOModelImporter.Colliders/<GetEnumerator>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__3_System_IDisposable_Dispose_m9F2CDEA2DD584BF58C672B7800AFAD0BA2F6D04F (U3CGetEnumeratorU3Ed__3_t894FD38B75EDD4C1A39A55BADD3FC15B81275C7C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Collider>::Dispose()
inline void Enumerator_Dispose_m08CF469D7C501041243B4B790EFF3F7ECDA57B17 (Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void LEGOModelImporter.Connectivity/<GetEnumerator>d__10::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__10_U3CU3Em__Finally1_mDB0FAFDC515313B3678817FD8DB19D591DFCA2E5 (U3CGetEnumeratorU3Ed__10_t46BBD5E759B3EEB496C5555266DCBBCF89D009D4 * __this, const RuntimeMethod* method);
// System.Void LEGOModelImporter.Connectivity/<GetEnumerator>d__10::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__10_U3CU3Em__Finally2_m9A902C5E4987CF0A3E6E3151D77249A6E61F4B3F (U3CGetEnumeratorU3Ed__10_t46BBD5E759B3EEB496C5555266DCBBCF89D009D4 * __this, const RuntimeMethod* method);
// System.Void LEGOModelImporter.Connectivity/<GetEnumerator>d__10::<>m__Finally3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__10_U3CU3Em__Finally3_m28AE438E184F1DCF38593AA20A84546DC212C239 (U3CGetEnumeratorU3Ed__10_t46BBD5E759B3EEB496C5555266DCBBCF89D009D4 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<LEGOModelImporter.PlanarField>::GetEnumerator()
inline Enumerator_tF7E2E75243ECEA6C0697BE2FCF715D2513E2D196  List_1_GetEnumerator_mFED7103EFF2AD902BDD0676C82F0CB3368E3466F (List_1_tEBF6868521218B8961BF50B2E3E2A4808B56253D * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF7E2E75243ECEA6C0697BE2FCF715D2513E2D196  (*) (List_1_tEBF6868521218B8961BF50B2E3E2A4808B56253D *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<LEGOModelImporter.PlanarField>::get_Current()
inline PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * Enumerator_get_Current_mB0C22AC582C54E6D79D408B5BB1F21E7DCF27EDA_inline (Enumerator_tF7E2E75243ECEA6C0697BE2FCF715D2513E2D196 * __this, const RuntimeMethod* method)
{
	return ((  PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * (*) (Enumerator_tF7E2E75243ECEA6C0697BE2FCF715D2513E2D196 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<LEGOModelImporter.PlanarField>::MoveNext()
inline bool Enumerator_MoveNext_m9043E8A15BAECAB48DDA51412A0C8192CAF39572 (Enumerator_tF7E2E75243ECEA6C0697BE2FCF715D2513E2D196 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF7E2E75243ECEA6C0697BE2FCF715D2513E2D196 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<LEGOModelImporter.AxleField>::GetEnumerator()
inline Enumerator_t057F70045655EA8DAF287DDE95A85CABE256714D  List_1_GetEnumerator_m257D50DDBEA83CAA47F7D322A44BC0D1F148A1B7 (List_1_t1B8E248437FE7A019F683CE60E7553A98F8C89DD * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t057F70045655EA8DAF287DDE95A85CABE256714D  (*) (List_1_t1B8E248437FE7A019F683CE60E7553A98F8C89DD *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<LEGOModelImporter.AxleField>::get_Current()
inline AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277 * Enumerator_get_Current_m3B897B3683F04E335ED6F79B725C6194C9FCEE18_inline (Enumerator_t057F70045655EA8DAF287DDE95A85CABE256714D * __this, const RuntimeMethod* method)
{
	return ((  AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277 * (*) (Enumerator_t057F70045655EA8DAF287DDE95A85CABE256714D *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<LEGOModelImporter.AxleField>::MoveNext()
inline bool Enumerator_MoveNext_m2F55082A50A2A575723488ACFFA75DFCB89E6A95 (Enumerator_t057F70045655EA8DAF287DDE95A85CABE256714D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t057F70045655EA8DAF287DDE95A85CABE256714D *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<LEGOModelImporter.FixedField>::GetEnumerator()
inline Enumerator_tFBB1B137B772289C585FEC808CB15BEFD895832D  List_1_GetEnumerator_m08039C498B0989ED96EEC96EC2DB04C028DAEA90 (List_1_t1AA4D82EFDD45B199AA932D2FCCCD9CFB46B055A * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFBB1B137B772289C585FEC808CB15BEFD895832D  (*) (List_1_t1AA4D82EFDD45B199AA932D2FCCCD9CFB46B055A *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<LEGOModelImporter.FixedField>::get_Current()
inline FixedField_t54C0D973EBCF8097CB0AF444508F22ADFA6EA79F * Enumerator_get_Current_m852DFE900EC23728666BBFCFB311761EE4270967_inline (Enumerator_tFBB1B137B772289C585FEC808CB15BEFD895832D * __this, const RuntimeMethod* method)
{
	return ((  FixedField_t54C0D973EBCF8097CB0AF444508F22ADFA6EA79F * (*) (Enumerator_tFBB1B137B772289C585FEC808CB15BEFD895832D *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<LEGOModelImporter.FixedField>::MoveNext()
inline bool Enumerator_MoveNext_m1DDC1086B8CE59E62530A4550C6AEF632A808D58 (Enumerator_tFBB1B137B772289C585FEC808CB15BEFD895832D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFBB1B137B772289C585FEC808CB15BEFD895832D *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void LEGOModelImporter.Connectivity/<GetEnumerator>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__10_System_IDisposable_Dispose_m34446D189A772D800800B537CC2673BAD19333E4 (U3CGetEnumeratorU3Ed__10_t46BBD5E759B3EEB496C5555266DCBBCF89D009D4 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<LEGOModelImporter.PlanarField>::Dispose()
inline void Enumerator_Dispose_m750DA8D47E352DBC654782E48523B38EE4C8AD30 (Enumerator_tF7E2E75243ECEA6C0697BE2FCF715D2513E2D196 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF7E2E75243ECEA6C0697BE2FCF715D2513E2D196 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<LEGOModelImporter.AxleField>::Dispose()
inline void Enumerator_Dispose_mF8FE0DBAFD36F2DCC7576FC15E1DF31A7B18B9CE (Enumerator_t057F70045655EA8DAF287DDE95A85CABE256714D * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t057F70045655EA8DAF287DDE95A85CABE256714D *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<LEGOModelImporter.FixedField>::Dispose()
inline void Enumerator_Dispose_m81B7A0C7B4F59F66CCE6CB7DF8A3168F231DED97 (Enumerator_tFBB1B137B772289C585FEC808CB15BEFD895832D * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFBB1B137B772289C585FEC808CB15BEFD895832D *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<LEGOModelImporter.AxleFeature,LEGOModelImporter.AxleFeature>>::.ctor()
inline void List_1__ctor_mAF0B9D01231BA918A5FC41F38907C86CDEFF3D18 (List_1_t4D75E148C8A391EA6FE426AA11BCF9320E8D69A1 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4D75E148C8A391EA6FE426AA11BCF9320E8D69A1 *, const RuntimeMethod*))List_1__ctor_m327E28340C3773242D59565FA68E6A3680B343B0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<LEGOModelImporter.FixedFeature,LEGOModelImporter.FixedFeature>>::.ctor()
inline void List_1__ctor_m8408480FB919A52C36A120C2FBBFB30A3DEFCFA7 (List_1_t4A4637B03D6E6F14E0E9EF3A64B6F9152CA7524D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4A4637B03D6E6F14E0E9EF3A64B6F9152CA7524D *, const RuntimeMethod*))List_1__ctor_m327E28340C3773242D59565FA68E6A3680B343B0_gshared)(__this, method);
}
// System.Void LEGOModelImporter.Connectivity/ConnectionIterator/<GetEnumerator>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__4__ctor_m810BCB6986B4487133CD38D96FC4742149706E9F (U3CGetEnumeratorU3Ed__4_t323214E45DA8AE991432AD6782BA8C009E277613 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<LEGOModelImporter.Connection,LEGOModelImporter.Connection>> LEGOModelImporter.Connectivity/ConnectionIterator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionIterator_GetEnumerator_m631A6A307362C710813BC421F184B84F69C0CE67 (ConnectionIterator_t415B158FEA77755C5FD134944C1DCCAED078E30B * __this, const RuntimeMethod* method);
// System.Void LEGOModelImporter.Connectivity/ConnectionIterator/<GetEnumerator>d__4::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__4_U3CU3Em__Finally1_m077B3E7489011AFAEDE36F54CB654EBA0CEDA51A (U3CGetEnumeratorU3Ed__4_t323214E45DA8AE991432AD6782BA8C009E277613 * __this, const RuntimeMethod* method);
// System.Void LEGOModelImporter.Connectivity/ConnectionIterator/<GetEnumerator>d__4::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__4_U3CU3Em__Finally2_m4FE7BEBB2B84605DDB11448F8705B3DFF805F467 (U3CGetEnumeratorU3Ed__4_t323214E45DA8AE991432AD6782BA8C009E277613 * __this, const RuntimeMethod* method);
// System.Void LEGOModelImporter.Connectivity/ConnectionIterator/<GetEnumerator>d__4::<>m__Finally3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__4_U3CU3Em__Finally3_mE2EF86644AF41C8DA68D3D6C2092377D76718B61 (U3CGetEnumeratorU3Ed__4_t323214E45DA8AE991432AD6782BA8C009E277613 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>>::GetEnumerator()
inline Enumerator_tB1664E9614254B8BA9DBF8A2E43FDDE49C3E7220  List_1_GetEnumerator_m9B05D6655D3872809C8C39A9DC867321433CBA06 (List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB1664E9614254B8BA9DBF8A2E43FDDE49C3E7220  (*) (List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F *, const RuntimeMethod*))List_1_GetEnumerator_mD7FED3357E937EF8BDE8CFAD90DD3CD2489B889A_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>>::get_Current()
inline ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  Enumerator_get_Current_mEAEC25F05C0DDA413D41FF18653B78ADA596B27A_inline (Enumerator_tB1664E9614254B8BA9DBF8A2E43FDDE49C3E7220 * __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  (*) (Enumerator_tB1664E9614254B8BA9DBF8A2E43FDDE49C3E7220 *, const RuntimeMethod*))Enumerator_get_Current_m8B737F0ABD2247C4E13D52C15DEAB59C34368B56_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>>::MoveNext()
inline bool Enumerator_MoveNext_m21DE5F6F4F02A017CF13A33503F07A028D8C23DB (Enumerator_tB1664E9614254B8BA9DBF8A2E43FDDE49C3E7220 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB1664E9614254B8BA9DBF8A2E43FDDE49C3E7220 *, const RuntimeMethod*))Enumerator_MoveNext_mC34E84789B18F4A0FE38F5A6D20958052D39F587_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.ValueTuple`2<LEGOModelImporter.AxleFeature,LEGOModelImporter.AxleFeature>>::GetEnumerator()
inline Enumerator_t3E6A94099410C50805F319CC16CC0D93BE4436D8  List_1_GetEnumerator_m7638E8537FC9C1FDFC115049037106C8006B4FF3 (List_1_t4D75E148C8A391EA6FE426AA11BCF9320E8D69A1 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3E6A94099410C50805F319CC16CC0D93BE4436D8  (*) (List_1_t4D75E148C8A391EA6FE426AA11BCF9320E8D69A1 *, const RuntimeMethod*))List_1_GetEnumerator_mD7FED3357E937EF8BDE8CFAD90DD3CD2489B889A_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<LEGOModelImporter.AxleFeature,LEGOModelImporter.AxleFeature>>::get_Current()
inline ValueTuple_2_t31B74A8DC82469F1344229CABDC9F02B498A35A4  Enumerator_get_Current_m713E3A8ED8D32513F58164C403488D00E61188FB_inline (Enumerator_t3E6A94099410C50805F319CC16CC0D93BE4436D8 * __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t31B74A8DC82469F1344229CABDC9F02B498A35A4  (*) (Enumerator_t3E6A94099410C50805F319CC16CC0D93BE4436D8 *, const RuntimeMethod*))Enumerator_get_Current_m8B737F0ABD2247C4E13D52C15DEAB59C34368B56_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<LEGOModelImporter.AxleFeature,LEGOModelImporter.AxleFeature>>::MoveNext()
inline bool Enumerator_MoveNext_mE27C69036A3B097CAC95861472954FC1788A8FDB (Enumerator_t3E6A94099410C50805F319CC16CC0D93BE4436D8 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3E6A94099410C50805F319CC16CC0D93BE4436D8 *, const RuntimeMethod*))Enumerator_MoveNext_mC34E84789B18F4A0FE38F5A6D20958052D39F587_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.ValueTuple`2<LEGOModelImporter.FixedFeature,LEGOModelImporter.FixedFeature>>::GetEnumerator()
inline Enumerator_t77AA1B6D4815D37C0F1C70571BCF17C9C631AB0D  List_1_GetEnumerator_m5A4380C5A74D43813622531A3DFE226565955E38 (List_1_t4A4637B03D6E6F14E0E9EF3A64B6F9152CA7524D * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t77AA1B6D4815D37C0F1C70571BCF17C9C631AB0D  (*) (List_1_t4A4637B03D6E6F14E0E9EF3A64B6F9152CA7524D *, const RuntimeMethod*))List_1_GetEnumerator_mD7FED3357E937EF8BDE8CFAD90DD3CD2489B889A_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<LEGOModelImporter.FixedFeature,LEGOModelImporter.FixedFeature>>::get_Current()
inline ValueTuple_2_t5CE28F612013D255B27043753ADEC34426B7AD90  Enumerator_get_Current_mBED58BB2E0EED68287506206BFF61E984C4C3317_inline (Enumerator_t77AA1B6D4815D37C0F1C70571BCF17C9C631AB0D * __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t5CE28F612013D255B27043753ADEC34426B7AD90  (*) (Enumerator_t77AA1B6D4815D37C0F1C70571BCF17C9C631AB0D *, const RuntimeMethod*))Enumerator_get_Current_m8B737F0ABD2247C4E13D52C15DEAB59C34368B56_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<LEGOModelImporter.FixedFeature,LEGOModelImporter.FixedFeature>>::MoveNext()
inline bool Enumerator_MoveNext_m58A7AA6622ED93EA4FC726FA83E48C3C346F5B91 (Enumerator_t77AA1B6D4815D37C0F1C70571BCF17C9C631AB0D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t77AA1B6D4815D37C0F1C70571BCF17C9C631AB0D *, const RuntimeMethod*))Enumerator_MoveNext_mC34E84789B18F4A0FE38F5A6D20958052D39F587_gshared)(__this, method);
}
// System.Void LEGOModelImporter.Connectivity/ConnectionIterator/<GetEnumerator>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__4_System_IDisposable_Dispose_m04529C43F724FD8CA2CD4664F3E9B22212B83556 (U3CGetEnumeratorU3Ed__4_t323214E45DA8AE991432AD6782BA8C009E277613 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>>::Dispose()
inline void Enumerator_Dispose_m4144D82524B48FA317E229268511BD7222A672FE (Enumerator_tB1664E9614254B8BA9DBF8A2E43FDDE49C3E7220 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB1664E9614254B8BA9DBF8A2E43FDDE49C3E7220 *, const RuntimeMethod*))Enumerator_Dispose_mF033552727887D964B4594242801D04BDD185C02_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<LEGOModelImporter.AxleFeature,LEGOModelImporter.AxleFeature>>::Dispose()
inline void Enumerator_Dispose_mD9BA2B185D7A3DCC3A5F882F72711C501FE8743E (Enumerator_t3E6A94099410C50805F319CC16CC0D93BE4436D8 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3E6A94099410C50805F319CC16CC0D93BE4436D8 *, const RuntimeMethod*))Enumerator_Dispose_mF033552727887D964B4594242801D04BDD185C02_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<LEGOModelImporter.FixedFeature,LEGOModelImporter.FixedFeature>>::Dispose()
inline void Enumerator_Dispose_m5093995C07A147520FEBE867F98F2D27C7CDECB1 (Enumerator_t77AA1B6D4815D37C0F1C70571BCF17C9C631AB0D * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t77AA1B6D4815D37C0F1C70571BCF17C9C631AB0D *, const RuntimeMethod*))Enumerator_Dispose_mF033552727887D964B4594242801D04BDD185C02_gshared)(__this, method);
}
// System.Void UnityEngine.Quaternion::Internal_ToAxisAngleRad(UnityEngine.Quaternion,UnityEngine.Vector3&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion_Internal_ToAxisAngleRad_m23B56B716466DB8582FCE8AC02EF094AA1C6C2F5 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___q0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___axis1, float* ___angle2, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LEGOModelImporter.Model::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Model__ctor_mD009A38842E7474A3E2900797A65CEE6CD7CE94D (Model_t0BB06671045A247BE4A257DFD651FAD578AE9C46 * __this, const RuntimeMethod* method)
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
// System.Void LEGOModelImporter.ModelGroup::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelGroup_OnDrawGizmosSelected_m76AB00D1350EA88F9FAEB883D59CEC406E5D9DFA (ModelGroup_t5EEDBE74F9D50BE94CCF3AA746BB704C43495AE9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5FD7C550BAD42F76B82211BCEE69C423DE0C8270_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m46DD87DB689C7F33B55542D9D9E4F6AA8C522CFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7C3DB20F7490CF8BA2031C1C8873B083D1E9D6E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5DFD9E782F5FE9EA908BE63C61FB3C1D56061259_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModelGroup_t5EEDBE74F9D50BE94CCF3AA746BB704C43495AE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_tD49CB71AE708F07DF32F81F0160D93345519B5AA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65 * V_2 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (!processed && (optimizations & CameraBasedGeometryRemovalOptimizations) != 0)
		bool L_0 = __this->get_processed_13();
		if (L_0)
		{
			goto IL_0102;
		}
	}
	{
		int32_t L_1 = __this->get_optimizations_11();
		IL2CPP_RUNTIME_CLASS_INIT(ModelGroup_t5EEDBE74F9D50BE94CCF3AA746BB704C43495AE9_il2cpp_TypeInfo_var);
		int32_t L_2 = ((ModelGroup_t5EEDBE74F9D50BE94CCF3AA746BB704C43495AE9_StaticFields*)il2cpp_codegen_static_fields_for(ModelGroup_t5EEDBE74F9D50BE94CCF3AA746BB704C43495AE9_il2cpp_TypeInfo_var))->get_CameraBasedGeometryRemovalOptimizations_4();
		if (!((int32_t)((int32_t)L_1&(int32_t)L_2)))
		{
			goto IL_0102;
		}
	}
	{
		// Gizmos.color = Color.cyan;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = Color_get_cyan_m0C608BC083FD98C45C1F4F15AE803D288C647686(/*hidden argument*/NULL);
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_3, /*hidden argument*/NULL);
		// int index = 0;
		V_0 = 0;
		// foreach (var view in views)
		List_1_t1CAAFB6184A6519BE66C670D00C798E77213AE69 * L_4 = __this->get_views_17();
		Enumerator_tD49CB71AE708F07DF32F81F0160D93345519B5AA  L_5;
		L_5 = List_1_GetEnumerator_m5DFD9E782F5FE9EA908BE63C61FB3C1D56061259(L_4, /*hidden argument*/List_1_GetEnumerator_m5DFD9E782F5FE9EA908BE63C61FB3C1D56061259_RuntimeMethod_var);
		V_1 = L_5;
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00e6;
		}

IL_0039:
		{
			// foreach (var view in views)
			CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65 * L_6;
			L_6 = Enumerator_get_Current_m7C3DB20F7490CF8BA2031C1C8873B083D1E9D6E4_inline((Enumerator_tD49CB71AE708F07DF32F81F0160D93345519B5AA *)(&V_1), /*hidden argument*/Enumerator_get_Current_m7C3DB20F7490CF8BA2031C1C8873B083D1E9D6E4_RuntimeMethod_var);
			V_2 = L_6;
			// Gizmos.matrix = Matrix4x4.TRS(view.position, view.rotation, Vector3.one);
			CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65 * L_7 = V_2;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = L_7->get_position_3();
			CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65 * L_9 = V_2;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10 = L_9->get_rotation_4();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
			L_11 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
			Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_12;
			L_12 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_8, L_10, L_11, /*hidden argument*/NULL);
			Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C(L_12, /*hidden argument*/NULL);
			// if (view.perspective)
			CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65 * L_13 = V_2;
			bool L_14 = L_13->get_perspective_2();
			if (!L_14)
			{
				goto IL_0088;
			}
		}

IL_0064:
		{
			// Gizmos.DrawFrustum(Vector3.zero, view.fov, view.maxRange, view.minRange, view.aspect);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
			L_15 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
			CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65 * L_16 = V_2;
			float L_17 = L_16->get_fov_6();
			CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65 * L_18 = V_2;
			float L_19 = L_18->get_maxRange_7();
			CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65 * L_20 = V_2;
			float L_21 = L_20->get_minRange_8();
			CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65 * L_22 = V_2;
			float L_23 = L_22->get_aspect_9();
			Gizmos_DrawFrustum_m1D7ED495FFECF243FFC7F562504359EF092274C8(L_15, L_17, L_19, L_21, L_23, /*hidden argument*/NULL);
			// }
			goto IL_00e2;
		}

IL_0088:
		{
			// var center = Vector3.forward * (view.minRange + view.maxRange) * 0.5f;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
			L_24 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
			CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65 * L_25 = V_2;
			float L_26 = L_25->get_minRange_8();
			CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65 * L_27 = V_2;
			float L_28 = L_27->get_maxRange_7();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
			L_29 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_24, ((float)il2cpp_codegen_add((float)L_26, (float)L_28)), /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
			L_30 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_29, (0.5f), /*hidden argument*/NULL);
			// var size = new Vector3(view.size * 2.0f * view.aspect, view.size * 2.0f, view.maxRange - view.minRange);
			CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65 * L_31 = V_2;
			float L_32 = L_31->get_size_5();
			CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65 * L_33 = V_2;
			float L_34 = L_33->get_aspect_9();
			CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65 * L_35 = V_2;
			float L_36 = L_35->get_size_5();
			CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65 * L_37 = V_2;
			float L_38 = L_37->get_maxRange_7();
			CullingCameraConfig_t06D832176C006CA9259E4EDAB23CE2610813FB65 * L_39 = V_2;
			float L_40 = L_39->get_minRange_8();
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_32, (float)(2.0f))), (float)L_34)), ((float)il2cpp_codegen_multiply((float)L_36, (float)(2.0f))), ((float)il2cpp_codegen_subtract((float)L_38, (float)L_40)), /*hidden argument*/NULL);
			// Gizmos.DrawWireCube(center, size);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = V_3;
			Gizmos_DrawWireCube_mC526244E50C6E5793D4066C9C99023D5FF8424BF(L_30, L_41, /*hidden argument*/NULL);
		}

IL_00e2:
		{
			// index++;
			int32_t L_42 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
		}

IL_00e6:
		{
			// foreach (var view in views)
			bool L_43;
			L_43 = Enumerator_MoveNext_m46DD87DB689C7F33B55542D9D9E4F6AA8C522CFE((Enumerator_tD49CB71AE708F07DF32F81F0160D93345519B5AA *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m46DD87DB689C7F33B55542D9D9E4F6AA8C522CFE_RuntimeMethod_var);
			if (L_43)
			{
				goto IL_0039;
			}
		}

IL_00f2:
		{
			IL2CPP_LEAVE(0x102, FINALLY_00f4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00f4;
	}

FINALLY_00f4:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m5FD7C550BAD42F76B82211BCEE69C423DE0C8270((Enumerator_tD49CB71AE708F07DF32F81F0160D93345519B5AA *)(&V_1), /*hidden argument*/Enumerator_Dispose_m5FD7C550BAD42F76B82211BCEE69C423DE0C8270_RuntimeMethod_var);
		IL2CPP_END_FINALLY(244)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(244)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x102, IL_0102)
	}

IL_0102:
	{
		// }
		return;
	}
}
// System.Void LEGOModelImporter.ModelGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelGroup__ctor_mA0804B18528EE051DA033556B7AA9B271BE0B4CB (ModelGroup_t5EEDBE74F9D50BE94CCF3AA746BB704C43495AE9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA51EC33F46F53D205E51B06E299853D167E5B50D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1CAAFB6184A6519BE66C670D00C798E77213AE69_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Optimizations optimizations = Optimizations.Everything;
		__this->set_optimizations_11((-1));
		// public List<CullingCameraConfig> views = new List<CullingCameraConfig>();
		List_1_t1CAAFB6184A6519BE66C670D00C798E77213AE69 * L_0 = (List_1_t1CAAFB6184A6519BE66C670D00C798E77213AE69 *)il2cpp_codegen_object_new(List_1_t1CAAFB6184A6519BE66C670D00C798E77213AE69_il2cpp_TypeInfo_var);
		List_1__ctor_mA51EC33F46F53D205E51B06E299853D167E5B50D(L_0, /*hidden argument*/List_1__ctor_mA51EC33F46F53D205E51B06E299853D167E5B50D_RuntimeMethod_var);
		__this->set_views_17(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LEGOModelImporter.ModelGroup::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelGroup__cctor_mCCA49680EF225CB5402270D3362EF3A53E190DAC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModelGroup_t5EEDBE74F9D50BE94CCF3AA746BB704C43495AE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Optimizations CameraBasedGeometryRemovalOptimizations = Optimizations.RemoveTubesAndPins | Optimizations.RemoveKnobs | Optimizations.RemoveInvisible | Optimizations.BackfaceCulling;
		((ModelGroup_t5EEDBE74F9D50BE94CCF3AA746BB704C43495AE9_StaticFields*)il2cpp_codegen_static_fields_for(ModelGroup_t5EEDBE74F9D50BE94CCF3AA746BB704C43495AE9_il2cpp_TypeInfo_var))->set_CameraBasedGeometryRemovalOptimizations_4(((int32_t)15));
		// public static Optimizations DefaultEnvironmentOptimizations = Optimizations.Everything;
		((ModelGroup_t5EEDBE74F9D50BE94CCF3AA746BB704C43495AE9_StaticFields*)il2cpp_codegen_static_fields_for(ModelGroup_t5EEDBE74F9D50BE94CCF3AA746BB704C43495AE9_il2cpp_TypeInfo_var))->set_DefaultEnvironmentOptimizations_5((-1));
		// public static Optimizations DefaultStaticOptimizations = Optimizations.Everything & ~Optimizations.BackfaceCulling;
		((ModelGroup_t5EEDBE74F9D50BE94CCF3AA746BB704C43495AE9_StaticFields*)il2cpp_codegen_static_fields_for(ModelGroup_t5EEDBE74F9D50BE94CCF3AA746BB704C43495AE9_il2cpp_TypeInfo_var))->set_DefaultStaticOptimizations_6(((int32_t)-9));
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
// System.Void LEGOModelImporter.ModelGroupImportSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelGroupImportSettings__ctor_mFCBAD5C46B93532BE2FAB256086E82F8331083FB (ModelGroupImportSettings_t0A6FFB361CE6EBB21970CACDCF2C5FAAF507E714 * __this, const RuntimeMethod* method)
{
	{
		// public bool colliders = true;
		__this->set_colliders_0((bool)1);
		// public bool connectivity = true;
		__this->set_connectivity_1((bool)1);
		// public bool randomizeRotation = true;
		__this->set_randomizeRotation_4((bool)1);
		// public ModelGroupImportSettings()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LEGOModelImporter.ModelGroupImportSettings::.ctor(LEGOModelImporter.ModelGroupImportSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelGroupImportSettings__ctor_mEA5C2F002BECBD9973BC146BBDCF56C6BDDAD739 (ModelGroupImportSettings_t0A6FFB361CE6EBB21970CACDCF2C5FAAF507E714 * __this, ModelGroupImportSettings_t0A6FFB361CE6EBB21970CACDCF2C5FAAF507E714 * ___importSettings0, const RuntimeMethod* method)
{
	{
		// public bool colliders = true;
		__this->set_colliders_0((bool)1);
		// public bool connectivity = true;
		__this->set_connectivity_1((bool)1);
		// public bool randomizeRotation = true;
		__this->set_randomizeRotation_4((bool)1);
		// public ModelGroupImportSettings(ModelGroupImportSettings importSettings)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// colliders = importSettings.colliders;
		ModelGroupImportSettings_t0A6FFB361CE6EBB21970CACDCF2C5FAAF507E714 * L_0 = ___importSettings0;
		bool L_1 = L_0->get_colliders_0();
		__this->set_colliders_0(L_1);
		// connectivity = importSettings.connectivity;
		ModelGroupImportSettings_t0A6FFB361CE6EBB21970CACDCF2C5FAAF507E714 * L_2 = ___importSettings0;
		bool L_3 = L_2->get_connectivity_1();
		__this->set_connectivity_1(L_3);
		// isStatic = importSettings.isStatic;
		ModelGroupImportSettings_t0A6FFB361CE6EBB21970CACDCF2C5FAAF507E714 * L_4 = ___importSettings0;
		bool L_5 = L_4->get_isStatic_2();
		__this->set_isStatic_2(L_5);
		// lightmapped = importSettings.lightmapped;
		ModelGroupImportSettings_t0A6FFB361CE6EBB21970CACDCF2C5FAAF507E714 * L_6 = ___importSettings0;
		bool L_7 = L_6->get_lightmapped_3();
		__this->set_lightmapped_3(L_7);
		// randomizeRotation = importSettings.randomizeRotation;
		ModelGroupImportSettings_t0A6FFB361CE6EBB21970CACDCF2C5FAAF507E714 * L_8 = ___importSettings0;
		bool L_9 = L_8->get_randomizeRotation_4();
		__this->set_randomizeRotation_4(L_9);
		// lod = importSettings.lod;
		ModelGroupImportSettings_t0A6FFB361CE6EBB21970CACDCF2C5FAAF507E714 * L_10 = ___importSettings0;
		int32_t L_11 = L_10->get_lod_5();
		__this->set_lod_5(L_11);
		// }
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
// System.Void LEGOModelImporter.ParentChecker::EditorUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParentChecker_EditorUpdate_m9B5F52B984B878159B4EB343BB3EE24D84B5A8DC (ParentChecker_t670B3E94478A84284EBABF400B1783284662C347 * __this, const RuntimeMethod* method)
{
	{
		// EnsureParentScale();
		ParentChecker_EnsureParentScale_m44FE11134A4ED3550DAEF7476746215DCC3E04BF(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LEGOModelImporter.ParentChecker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParentChecker_Update_mC38D31670A00FFB63BDA5A9FFACFA15E296BAD99 (ParentChecker_t670B3E94478A84284EBABF400B1783284662C347 * __this, const RuntimeMethod* method)
{
	{
		// EnsureParentScale();
		ParentChecker_EnsureParentScale_m44FE11134A4ED3550DAEF7476746215DCC3E04BF(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LEGOModelImporter.ParentChecker::EnsureParentScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParentChecker_EnsureParentScale_m44FE11134A4ED3550DAEF7476746215DCC3E04BF (ParentChecker_t670B3E94478A84284EBABF400B1783284662C347 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EF2CE795BCB02D4FB0B9524739CB0650EBE1194);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (transform.parent == null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		return;
	}

IL_0014:
	{
		// var parent = transform.parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// var scaledParent = false;
		V_1 = (bool)0;
		goto IL_0058;
	}

IL_0024:
	{
		// var scaled = Vector3.Distance(parent.localScale, Vector3.one) >= Mathf.Epsilon;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		float L_8;
		L_8 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_6, L_7, /*hidden argument*/NULL);
		float L_9 = ((Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var))->get_Epsilon_0();
		V_2 = (bool)((((int32_t)((!(((float)L_8) >= ((float)L_9)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// scaledParent |= scaled;
		bool L_10 = V_1;
		bool L_11 = V_2;
		V_1 = (bool)((int32_t)((int32_t)L_10|(int32_t)L_11));
		// if (scaled)
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0051;
		}
	}
	{
		// parent.localScale = Vector3.one;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_13, L_14, /*hidden argument*/NULL);
	}

IL_0051:
	{
		// parent = parent.parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_15, /*hidden argument*/NULL);
		V_0 = L_16;
	}

IL_0058:
	{
		// while(parent != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0024;
		}
	}
	{
		// if (scaledParent)
		bool L_19 = V_1;
		if (!L_19)
		{
			goto IL_006e;
		}
	}
	{
		// Debug.LogError("LEGO Model assets cannot be children of scaled game objects");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral8EF2CE795BCB02D4FB0B9524739CB0650EBE1194, /*hidden argument*/NULL);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void LEGOModelImporter.ParentChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParentChecker__ctor_m278F698509442877FE57674FF618A66C3AB20158 (ParentChecker_t670B3E94478A84284EBABF400B1783284662C347 * __this, const RuntimeMethod* method)
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
// System.Boolean LEGOModelImporter.Part::IsColliding(LEGOModelImporter.Part,UnityEngine.Matrix4x4,UnityEngine.Collider[],System.Int32&,System.Collections.Generic.ICollection`1<LEGOModelImporter.Brick>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Part_IsColliding_m6B5F519A8B0FEE19E2D84F8ACD3FB084DF78B06E (Part_tF559450A02A6BE32049B9167745FA5412AF33987 * ___part0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___localToWorld1, ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* ___colliders2, int32_t* ___hits3, RuntimeObject* ___ignoredBricks4, bool ___earlyOut5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BrickBuildingUtility_t9BB0DA76B8CCBFAB0FD4E7A51C3D7411952C767E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisPart_tF559450A02A6BE32049B9167745FA5412AF33987_mBAB9DC3A11167A654F06B0CC064E6F14EADFCF93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0CD42E9899C12DFE9E5FD08407958AAAA325B2FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m493D962CE026516E2269E90F978CB8404CDDA831_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0CD9B77F7E73370E5B257EB20C852508E7BB02F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m5FA07E777D1D5195CEDB21D3A8B79883525F266A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m514613CAD53B23779AE116A896E222CFAC64015F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m2578708ADD8B7170D86C64A423A6A9F2966AD7A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tBC7A2C7988F8248D048F8026690AF2D62BEE6A97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0723B74887EE5F31586F86866B3D1D5D7EF1BD4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Part_tF559450A02A6BE32049B9167745FA5412AF33987_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA * V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * V_6 = NULL;
	Type_t * V_7 = NULL;
	PhysicsScene_tEDFCAA935450E8EBB7732353D9AA264A5F711678  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_12;
	memset((&V_12), 0, sizeof(V_12));
	BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * V_13 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_14;
	memset((&V_14), 0, sizeof(V_14));
	SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * V_15 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	Part_tF559450A02A6BE32049B9167745FA5412AF33987 * V_18 = NULL;
	int32_t V_19 = 0;
	bool V_20 = false;
	Enumerator_t34208F8A6A2CC718C7DD445F48D51279F182B7B6  V_21;
	memset((&V_21), 0, sizeof(V_21));
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * V_22 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// var partObjectToLocal = Matrix4x4.TRS(part.transform.localPosition, part.transform.localRotation, part.transform.localScale);
		Part_tF559450A02A6BE32049B9167745FA5412AF33987 * L_0 = ___part0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_1, /*hidden argument*/NULL);
		Part_tF559450A02A6BE32049B9167745FA5412AF33987 * L_3 = ___part0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_4, /*hidden argument*/NULL);
		Part_tF559450A02A6BE32049B9167745FA5412AF33987 * L_6 = ___part0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_7, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_9;
		L_9 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_2, L_5, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// var partToWorld = localToWorld * partObjectToLocal;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_10 = ___localToWorld1;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_11 = V_0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_12;
		L_12 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_10, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		// hits = 0;
		int32_t* L_13 = ___hits3;
		*((int32_t*)L_13) = (int32_t)0;
		// bool colliding = false;
		V_2 = (bool)0;
		// var outputBuffer = new HashSet<Collider>();
		HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA * L_14 = (HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA *)il2cpp_codegen_object_new(HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m2578708ADD8B7170D86C64A423A6A9F2966AD7A8(L_14, /*hidden argument*/HashSet_1__ctor_m2578708ADD8B7170D86C64A423A6A9F2966AD7A8_RuntimeMethod_var);
		V_3 = L_14;
		// if(!part.colliders)
		Part_tF559450A02A6BE32049B9167745FA5412AF33987 * L_15 = ___part0;
		Colliders_t8550080A1AAF3F64E65676118544E13AE34DF6BE * L_16 = L_15->get_colliders_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0049;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0049:
	{
		// foreach (var collider in part.colliders)
		Part_tF559450A02A6BE32049B9167745FA5412AF33987 * L_18 = ___part0;
		Colliders_t8550080A1AAF3F64E65676118544E13AE34DF6BE * L_19 = L_18->get_colliders_8();
		RuntimeObject* L_20;
		L_20 = Colliders_GetEnumerator_mD6B57180F4B5CB5F7A1ECDD79B39179762BAC4CC(L_19, /*hidden argument*/NULL);
		V_5 = L_20;
	}

IL_0056:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01e3;
		}

IL_005b:
		{
			// foreach (var collider in part.colliders)
			RuntimeObject* L_21 = V_5;
			Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_22;
			L_22 = InterfaceFuncInvoker0< Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Collider>::get_Current() */, IEnumerator_1_t0723B74887EE5F31586F86866B3D1D5D7EF1BD4A_il2cpp_TypeInfo_var, L_21);
			V_6 = L_22;
			// System.Type colliderType = collider.GetType();
			Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_23 = V_6;
			Type_t * L_24;
			L_24 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_23, /*hidden argument*/NULL);
			V_7 = L_24;
			// PhysicsScene physicsScene = collider.gameObject.scene.GetPhysicsScene();
			Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_25 = V_6;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
			L_26 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_25, /*hidden argument*/NULL);
			Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_27;
			L_27 = GameObject_get_scene_m7EBF95ABB5037FEE6811928F2E83C769C53F86C2(L_26, /*hidden argument*/NULL);
			PhysicsScene_tEDFCAA935450E8EBB7732353D9AA264A5F711678  L_28;
			L_28 = PhysicsSceneExtensions_GetPhysicsScene_m716E028C809F5E276F1C8DEEA8E1BC91AA1C4650(L_27, /*hidden argument*/NULL);
			V_8 = L_28;
			// var colliderObjectToLocal = Matrix4x4.TRS(collider.transform.localPosition, collider.transform.localRotation, collider.transform.localScale);
			Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_29 = V_6;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
			L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_29, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
			L_31 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_30, /*hidden argument*/NULL);
			Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_32 = V_6;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
			L_33 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_32, /*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_34;
			L_34 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_33, /*hidden argument*/NULL);
			Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_35 = V_6;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
			L_36 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_35, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
			L_37 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_36, /*hidden argument*/NULL);
			Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_38;
			L_38 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_31, L_34, L_37, /*hidden argument*/NULL);
			V_9 = L_38;
			// var colliderToWorld = partToWorld * colliderObjectToLocal;
			Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_39 = V_1;
			Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_40 = V_9;
			Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_41;
			L_41 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_39, L_40, /*hidden argument*/NULL);
			V_10 = L_41;
			// var currentHits = 0;
			V_11 = 0;
			// if (colliderType == typeof(BoxCollider))
			Type_t * L_42 = V_7;
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_44;
			L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_43, /*hidden argument*/NULL);
			bool L_45;
			L_45 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_42, L_44, /*hidden argument*/NULL);
			if (!L_45)
			{
				goto IL_0128;
			}
		}

IL_00cb:
		{
			// var rotation = MathUtils.MatrixToQuaternion(colliderToWorld);
			Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_46 = V_10;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_47;
			L_47 = MathUtils_MatrixToQuaternion_m8727C73F850F8305EC4023F0C5C1772CBDECA774(L_46, /*hidden argument*/NULL);
			V_12 = L_47;
			// BoxCollider boxCollider = (BoxCollider)collider;
			Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_48 = V_6;
			V_13 = ((BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 *)CastclassClass((RuntimeObject*)L_48, BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_il2cpp_TypeInfo_var));
			// var center = colliderToWorld.MultiplyPoint(boxCollider.center);
			BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_49 = V_13;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
			L_50 = BoxCollider_get_center_m832B93439717C72D4A3B427C6E8F5B54E2DBD669(L_49, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
			L_51 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_10), L_50, /*hidden argument*/NULL);
			V_14 = L_51;
			// currentHits = physicsScene.OverlapBox(center, (boxCollider.size / 2.0f) - Vector3.one * collisionEpsilon, colliders, rotation, BrickBuildingUtility.IgnoreMask, QueryTriggerInteraction.Ignore);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52 = V_14;
			BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_53 = V_13;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
			L_54 = BoxCollider_get_size_mBC38D4926D4BE54A6532F6E1D642F363CA3A58A1(L_53, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
			L_55 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_54, (2.0f), /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56;
			L_56 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Part_tF559450A02A6BE32049B9167745FA5412AF33987_il2cpp_TypeInfo_var);
			float L_57 = ((Part_tF559450A02A6BE32049B9167745FA5412AF33987_StaticFields*)il2cpp_codegen_static_fields_for(Part_tF559450A02A6BE32049B9167745FA5412AF33987_il2cpp_TypeInfo_var))->get_collisionEpsilon_12();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
			L_58 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_56, L_57, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
			L_59 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_55, L_58, /*hidden argument*/NULL);
			ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_60 = ___colliders2;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_61 = V_12;
			IL2CPP_RUNTIME_CLASS_INIT(BrickBuildingUtility_t9BB0DA76B8CCBFAB0FD4E7A51C3D7411952C767E_il2cpp_TypeInfo_var);
			int32_t L_62;
			L_62 = BrickBuildingUtility_get_IgnoreMask_m05BF714B41E26C92A89CEBC990AADF4B9A864492_inline(/*hidden argument*/NULL);
			int32_t L_63;
			L_63 = PhysicsScene_OverlapBox_mCC9E06BCEE764C2C0A9F2C544A69B996BB37CF27((PhysicsScene_tEDFCAA935450E8EBB7732353D9AA264A5F711678 *)(&V_8), L_52, L_59, L_60, L_61, L_62, 1, /*hidden argument*/NULL);
			V_11 = L_63;
			// }
			goto IL_0173;
		}

IL_0128:
		{
			// else if (colliderType == typeof(SphereCollider))
			Type_t * L_64 = V_7;
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_65 = { reinterpret_cast<intptr_t> (SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_66;
			L_66 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_65, /*hidden argument*/NULL);
			bool L_67;
			L_67 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_64, L_66, /*hidden argument*/NULL);
			if (!L_67)
			{
				goto IL_0173;
			}
		}

IL_013b:
		{
			// SphereCollider sphereCollider = (SphereCollider)collider;
			Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_68 = V_6;
			V_15 = ((SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A *)CastclassClass((RuntimeObject*)L_68, SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A_il2cpp_TypeInfo_var));
			// var center = colliderToWorld.MultiplyPoint(sphereCollider.center);
			SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * L_69 = V_15;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70;
			L_70 = SphereCollider_get_center_mBFAE4FFFC76B8FD8F1B2B2F12C52A30470443D3A(L_69, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71;
			L_71 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_10), L_70, /*hidden argument*/NULL);
			V_16 = L_71;
			// currentHits = physicsScene.OverlapSphere(center, sphereCollider.radius - collisionEpsilon, colliders, BrickBuildingUtility.IgnoreMask, QueryTriggerInteraction.Ignore);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72 = V_16;
			SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * L_73 = V_15;
			float L_74;
			L_74 = SphereCollider_get_radius_m403989140BDAD513299276953B481167CF08D02F(L_73, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Part_tF559450A02A6BE32049B9167745FA5412AF33987_il2cpp_TypeInfo_var);
			float L_75 = ((Part_tF559450A02A6BE32049B9167745FA5412AF33987_StaticFields*)il2cpp_codegen_static_fields_for(Part_tF559450A02A6BE32049B9167745FA5412AF33987_il2cpp_TypeInfo_var))->get_collisionEpsilon_12();
			ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_76 = ___colliders2;
			IL2CPP_RUNTIME_CLASS_INIT(BrickBuildingUtility_t9BB0DA76B8CCBFAB0FD4E7A51C3D7411952C767E_il2cpp_TypeInfo_var);
			int32_t L_77;
			L_77 = BrickBuildingUtility_get_IgnoreMask_m05BF714B41E26C92A89CEBC990AADF4B9A864492_inline(/*hidden argument*/NULL);
			int32_t L_78;
			L_78 = PhysicsScene_OverlapSphere_mBFBB0C810534D52967EE4FDC97DB67301D769ACC((PhysicsScene_tEDFCAA935450E8EBB7732353D9AA264A5F711678 *)(&V_8), L_72, ((float)il2cpp_codegen_subtract((float)L_74, (float)L_75)), L_76, L_77, 1, /*hidden argument*/NULL);
			V_11 = L_78;
		}

IL_0173:
		{
			// if (currentHits > 0)
			int32_t L_79 = V_11;
			if ((((int32_t)L_79) <= ((int32_t)0)))
			{
				goto IL_01e3;
			}
		}

IL_0178:
		{
			// for (int i = 0; i < currentHits; i++)
			V_17 = 0;
			goto IL_01dd;
		}

IL_017d:
		{
			// Collider overlap = colliders[i];
			ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_80 = ___colliders2;
			int32_t L_81 = V_17;
			int32_t L_82 = L_81;
			Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_83 = (L_80)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_82));
			// Part overlapPart = overlap.GetComponentInParent<Part>();
			Part_tF559450A02A6BE32049B9167745FA5412AF33987 * L_84;
			L_84 = Component_GetComponentInParent_TisPart_tF559450A02A6BE32049B9167745FA5412AF33987_mBAB9DC3A11167A654F06B0CC064E6F14EADFCF93(L_83, /*hidden argument*/Component_GetComponentInParent_TisPart_tF559450A02A6BE32049B9167745FA5412AF33987_mBAB9DC3A11167A654F06B0CC064E6F14EADFCF93_RuntimeMethod_var);
			V_18 = L_84;
			// if (overlapPart != null)
			Part_tF559450A02A6BE32049B9167745FA5412AF33987 * L_85 = V_18;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_86;
			L_86 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_85, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_86)
			{
				goto IL_01d7;
			}
		}

IL_0192:
		{
			// if (part == overlapPart)
			Part_tF559450A02A6BE32049B9167745FA5412AF33987 * L_87 = ___part0;
			Part_tF559450A02A6BE32049B9167745FA5412AF33987 * L_88 = V_18;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_89;
			L_89 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_87, L_88, /*hidden argument*/NULL);
			if (L_89)
			{
				goto IL_01d7;
			}
		}

IL_019c:
		{
			// if (ignoredBricks != null)
			RuntimeObject* L_90 = ___ignoredBricks4;
			if (!L_90)
			{
				goto IL_01b0;
			}
		}

IL_01a0:
		{
			// if (ignoredBricks.Contains(overlapPart.brick))
			RuntimeObject* L_91 = ___ignoredBricks4;
			Part_tF559450A02A6BE32049B9167745FA5412AF33987 * L_92 = V_18;
			Brick_t4E2078428A9FDB510CB1D407CE70A9084C8A72EB * L_93 = L_92->get_brick_9();
			bool L_94;
			L_94 = InterfaceFuncInvoker1< bool, Brick_t4E2078428A9FDB510CB1D407CE70A9084C8A72EB * >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<LEGOModelImporter.Brick>::Contains(!0) */, ICollection_1_tBC7A2C7988F8248D048F8026690AF2D62BEE6A97_il2cpp_TypeInfo_var, L_91, L_93);
			if (L_94)
			{
				goto IL_01d7;
			}
		}

IL_01b0:
		{
			// colliding = true;
			V_2 = (bool)1;
			// for(var j = 0; j < currentHits; j++)
			V_19 = 0;
			goto IL_01c8;
		}

IL_01b7:
		{
			// outputBuffer.Add(colliders[j]);
			HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA * L_95 = V_3;
			ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_96 = ___colliders2;
			int32_t L_97 = V_19;
			int32_t L_98 = L_97;
			Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_99 = (L_96)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_98));
			bool L_100;
			L_100 = HashSet_1_Add_m5FA07E777D1D5195CEDB21D3A8B79883525F266A(L_95, L_99, /*hidden argument*/HashSet_1_Add_m5FA07E777D1D5195CEDB21D3A8B79883525F266A_RuntimeMethod_var);
			// for(var j = 0; j < currentHits; j++)
			int32_t L_101 = V_19;
			V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)1));
		}

IL_01c8:
		{
			// for(var j = 0; j < currentHits; j++)
			int32_t L_102 = V_19;
			int32_t L_103 = V_11;
			if ((((int32_t)L_102) < ((int32_t)L_103)))
			{
				goto IL_01b7;
			}
		}

IL_01ce:
		{
			// if(earlyOut)
			bool L_104 = ___earlyOut5;
			if (!L_104)
			{
				goto IL_01d7;
			}
		}

IL_01d2:
		{
			// return true;
			V_20 = (bool)1;
			IL2CPP_LEAVE(0x23D, FINALLY_01f1);
		}

IL_01d7:
		{
			// for (int i = 0; i < currentHits; i++)
			int32_t L_105 = V_17;
			V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)1));
		}

IL_01dd:
		{
			// for (int i = 0; i < currentHits; i++)
			int32_t L_106 = V_17;
			int32_t L_107 = V_11;
			if ((((int32_t)L_106) < ((int32_t)L_107)))
			{
				goto IL_017d;
			}
		}

IL_01e3:
		{
			// foreach (var collider in part.colliders)
			RuntimeObject* L_108 = V_5;
			bool L_109;
			L_109 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_108);
			if (L_109)
			{
				goto IL_005b;
			}
		}

IL_01ef:
		{
			IL2CPP_LEAVE(0x1FD, FINALLY_01f1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01f1;
	}

FINALLY_01f1:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_110 = V_5;
			if (!L_110)
			{
				goto IL_01fc;
			}
		}

IL_01f5:
		{
			RuntimeObject* L_111 = V_5;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_111);
		}

IL_01fc:
		{
			IL2CPP_END_FINALLY(497)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(497)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x23D, IL_023d)
		IL2CPP_JUMP_TBL(0x1FD, IL_01fd)
	}

IL_01fd:
	{
		// var k = 0;
		V_4 = 0;
		// foreach(var collider in outputBuffer)
		HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA * L_112 = V_3;
		Enumerator_t34208F8A6A2CC718C7DD445F48D51279F182B7B6  L_113;
		L_113 = HashSet_1_GetEnumerator_m514613CAD53B23779AE116A896E222CFAC64015F(L_112, /*hidden argument*/HashSet_1_GetEnumerator_m514613CAD53B23779AE116A896E222CFAC64015F_RuntimeMethod_var);
		V_21 = L_113;
	}

IL_0208:
	try
	{ // begin try (depth: 1)
		{
			goto IL_021e;
		}

IL_020a:
		{
			// foreach(var collider in outputBuffer)
			Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_114;
			L_114 = Enumerator_get_Current_m0CD9B77F7E73370E5B257EB20C852508E7BB02F7_inline((Enumerator_t34208F8A6A2CC718C7DD445F48D51279F182B7B6 *)(&V_21), /*hidden argument*/Enumerator_get_Current_m0CD9B77F7E73370E5B257EB20C852508E7BB02F7_RuntimeMethod_var);
			V_22 = L_114;
			// colliders[k++] = collider;
			ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_115 = ___colliders2;
			int32_t L_116 = V_4;
			int32_t L_117 = L_116;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_117, (int32_t)1));
			Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_118 = V_22;
			ArrayElementTypeCheck (L_115, L_118);
			(L_115)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_117), (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 *)L_118);
		}

IL_021e:
		{
			// foreach(var collider in outputBuffer)
			bool L_119;
			L_119 = Enumerator_MoveNext_m493D962CE026516E2269E90F978CB8404CDDA831((Enumerator_t34208F8A6A2CC718C7DD445F48D51279F182B7B6 *)(&V_21), /*hidden argument*/Enumerator_MoveNext_m493D962CE026516E2269E90F978CB8404CDDA831_RuntimeMethod_var);
			if (L_119)
			{
				goto IL_020a;
			}
		}

IL_0227:
		{
			IL2CPP_LEAVE(0x237, FINALLY_0229);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0229;
	}

FINALLY_0229:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0CD42E9899C12DFE9E5FD08407958AAAA325B2FB((Enumerator_t34208F8A6A2CC718C7DD445F48D51279F182B7B6 *)(&V_21), /*hidden argument*/Enumerator_Dispose_m0CD42E9899C12DFE9E5FD08407958AAAA325B2FB_RuntimeMethod_var);
		IL2CPP_END_FINALLY(553)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(553)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x237, IL_0237)
	}

IL_0237:
	{
		// hits = k;
		int32_t* L_120 = ___hits3;
		int32_t L_121 = V_4;
		*((int32_t*)L_120) = (int32_t)L_121;
		// return colliding;
		bool L_122 = V_2;
		return L_122;
	}

IL_023d:
	{
		// }
		bool L_123 = V_20;
		return L_123;
	}
}
// System.Void LEGOModelImporter.Part::DisconnectAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Part_DisconnectAll_m029C67EBD064C1522A863CF6A36499E814034357 (Part_tF559450A02A6BE32049B9167745FA5412AF33987 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tF4D2B143E53656E27F8881F9F3BAFE2DC75322B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if(!connectivity)
		Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF * L_0 = __this->get_connectivity_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// foreach(var field in connectivity)
		Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF * L_2 = __this->get_connectivity_6();
		RuntimeObject* L_3;
		L_3 = Connectivity_GetEnumerator_m898A7A0B6F451EBB6A7C332766DDC1182BDB9FF4(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0028;
		}

IL_001c:
		{
			// foreach(var field in connectivity)
			RuntimeObject* L_4 = V_0;
			ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_5;
			L_5 = InterfaceFuncInvoker0< ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<LEGOModelImporter.ConnectionField>::get_Current() */, IEnumerator_1_tF4D2B143E53656E27F8881F9F3BAFE2DC75322B5_il2cpp_TypeInfo_var, L_4);
			// field.DisconnectAll();
			HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296 * L_6;
			L_6 = VirtFuncInvoker0< HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296 * >::Invoke(5 /* System.Collections.Generic.HashSet`1<LEGOModelImporter.ConnectionField> LEGOModelImporter.ConnectionField::DisconnectAll() */, L_5);
		}

IL_0028:
		{
			// foreach(var field in connectivity)
			RuntimeObject* L_7 = V_0;
			bool L_8;
			L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_7);
			if (L_8)
			{
				goto IL_001c;
			}
		}

IL_0030:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_0032);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0032;
	}

FINALLY_0032:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_9 = V_0;
			if (!L_9)
			{
				goto IL_003b;
			}
		}

IL_0035:
		{
			RuntimeObject* L_10 = V_0;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_10);
		}

IL_003b:
		{
			IL2CPP_END_FINALLY(50)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(50)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void LEGOModelImporter.Part::DisconnectAllInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Part_DisconnectAllInvalid_mBA0711F116ED9C0B9D42BED3B26DEB4F93596283 (Part_tF559450A02A6BE32049B9167745FA5412AF33987 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tF4D2B143E53656E27F8881F9F3BAFE2DC75322B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if(!connectivity)
		Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF * L_0 = __this->get_connectivity_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// foreach (var field in connectivity)
		Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF * L_2 = __this->get_connectivity_6();
		RuntimeObject* L_3;
		L_3 = Connectivity_GetEnumerator_m898A7A0B6F451EBB6A7C332766DDC1182BDB9FF4(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0028;
		}

IL_001c:
		{
			// foreach (var field in connectivity)
			RuntimeObject* L_4 = V_0;
			ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_5;
			L_5 = InterfaceFuncInvoker0< ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<LEGOModelImporter.ConnectionField>::get_Current() */, IEnumerator_1_tF4D2B143E53656E27F8881F9F3BAFE2DC75322B5_il2cpp_TypeInfo_var, L_4);
			// field.DisconnectAllInvalid();
			HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296 * L_6;
			L_6 = VirtFuncInvoker0< HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296 * >::Invoke(6 /* System.Collections.Generic.HashSet`1<LEGOModelImporter.ConnectionField> LEGOModelImporter.ConnectionField::DisconnectAllInvalid() */, L_5);
		}

IL_0028:
		{
			// foreach (var field in connectivity)
			RuntimeObject* L_7 = V_0;
			bool L_8;
			L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_7);
			if (L_8)
			{
				goto IL_001c;
			}
		}

IL_0030:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_0032);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0032;
	}

FINALLY_0032:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_9 = V_0;
			if (!L_9)
			{
				goto IL_003b;
			}
		}

IL_0035:
		{
			RuntimeObject* L_10 = V_0;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_10);
		}

IL_003b:
		{
			IL2CPP_END_FINALLY(50)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(50)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void LEGOModelImporter.Part::DisconnectInverse(System.Collections.Generic.HashSet`1<LEGOModelImporter.Brick>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Part_DisconnectInverse_m7410C3CD8E69A6534F7F64BAE52F2E6A10E7DFB2 (Part_tF559450A02A6BE32049B9167745FA5412AF33987 * __this, HashSet_1_tE7464E1D6A8E9C3336CB7C6DE24FD30426BA3FF0 * ___bricksToKeep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tF4D2B143E53656E27F8881F9F3BAFE2DC75322B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if(!connectivity)
		Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF * L_0 = __this->get_connectivity_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// foreach (var field in connectivity)
		Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF * L_2 = __this->get_connectivity_6();
		RuntimeObject* L_3;
		L_3 = Connectivity_GetEnumerator_m898A7A0B6F451EBB6A7C332766DDC1182BDB9FF4(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0029;
		}

IL_001c:
		{
			// foreach (var field in connectivity)
			RuntimeObject* L_4 = V_0;
			ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_5;
			L_5 = InterfaceFuncInvoker0< ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<LEGOModelImporter.ConnectionField>::get_Current() */, IEnumerator_1_tF4D2B143E53656E27F8881F9F3BAFE2DC75322B5_il2cpp_TypeInfo_var, L_4);
			// field.DisconnectInverse(bricksToKeep);
			HashSet_1_tE7464E1D6A8E9C3336CB7C6DE24FD30426BA3FF0 * L_6 = ___bricksToKeep0;
			HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296 * L_7;
			L_7 = VirtFuncInvoker1< HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296 *, RuntimeObject* >::Invoke(7 /* System.Collections.Generic.HashSet`1<LEGOModelImporter.ConnectionField> LEGOModelImporter.ConnectionField::DisconnectInverse(System.Collections.Generic.ICollection`1<LEGOModelImporter.Brick>) */, L_5, L_6);
		}

IL_0029:
		{
			// foreach (var field in connectivity)
			RuntimeObject* L_8 = V_0;
			bool L_9;
			L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_001c;
			}
		}

IL_0031:
		{
			IL2CPP_LEAVE(0x3D, FINALLY_0033);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_0;
			if (!L_10)
			{
				goto IL_003c;
			}
		}

IL_0036:
		{
			RuntimeObject* L_11 = V_0;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_11);
		}

IL_003c:
		{
			IL2CPP_END_FINALLY(51)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void LEGOModelImporter.Part::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Part__ctor_m40649DE15757F0720A1ED159100891AC594D834A (Part_tF559450A02A6BE32049B9167745FA5412AF33987 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m960E78FC6504C7FDE2B5E238B847171E035A566B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD29527BFEFCBDB48E903FE11701483211C42C20C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t55FB50AB728746C7A4CE36B13BC11C4BDCBC1608_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDA08591435D35253AF91AF0FD289366260969280_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<int> materialIDs = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_0, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		__this->set_materialIDs_7(L_0);
		// public List<Knob> knobs = new List<Knob>();
		List_1_tDA08591435D35253AF91AF0FD289366260969280 * L_1 = (List_1_tDA08591435D35253AF91AF0FD289366260969280 *)il2cpp_codegen_object_new(List_1_tDA08591435D35253AF91AF0FD289366260969280_il2cpp_TypeInfo_var);
		List_1__ctor_m960E78FC6504C7FDE2B5E238B847171E035A566B(L_1, /*hidden argument*/List_1__ctor_m960E78FC6504C7FDE2B5E238B847171E035A566B_RuntimeMethod_var);
		__this->set_knobs_10(L_1);
		// public List<Tube> tubes = new List<Tube>();
		List_1_t55FB50AB728746C7A4CE36B13BC11C4BDCBC1608 * L_2 = (List_1_t55FB50AB728746C7A4CE36B13BC11C4BDCBC1608 *)il2cpp_codegen_object_new(List_1_t55FB50AB728746C7A4CE36B13BC11C4BDCBC1608_il2cpp_TypeInfo_var);
		List_1__ctor_mD29527BFEFCBDB48E903FE11701483211C42C20C(L_2, /*hidden argument*/List_1__ctor_mD29527BFEFCBDB48E903FE11701483211C42C20C_RuntimeMethod_var);
		__this->set_tubes_11(L_2);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LEGOModelImporter.Part::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Part__cctor_m47359ED58DDA88D33BFB2C57A1E599C43D780700 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Part_tF559450A02A6BE32049B9167745FA5412AF33987_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly float collisionEpsilon = 0.02f;
		((Part_tF559450A02A6BE32049B9167745FA5412AF33987_StaticFields*)il2cpp_codegen_static_fields_for(Part_tF559450A02A6BE32049B9167745FA5412AF33987_il2cpp_TypeInfo_var))->set_collisionEpsilon_12((0.0199999996f));
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
// LEGOModelImporter.PlanarField LEGOModelImporter.PlanarFeature::get_Field()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * PlanarFeature_get_Field_mB68F7D4AFECD9B6E3FDF8272EC1103C16EDB7804 (PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PlanarField Field => field as PlanarField;
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_0 = ((Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 *)__this)->get_field_0();
		return ((PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 *)IsInstClass((RuntimeObject*)L_0, PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65_il2cpp_TypeInfo_var));
	}
}
// System.Boolean LEGOModelImporter.PlanarFeature::IsKnob(LEGOModelImporter.PlanarFeature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarFeature_IsKnob_mCA2F25008E4C59B337C1BAD5A0B935D2A964369F (PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * ___connection0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// switch (connection.connectionType)
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_0 = ___connection0;
		int32_t L_1 = L_0->get_connectionType_3();
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) <= ((uint32_t)3))))
		{
			goto IL_000d;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000d:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void LEGOModelImporter.PlanarFeature::UpdateKnobsAndTubes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarFeature_UpdateKnobsAndTubes_m272C668B6E8A725AB110AAD72DD9A0E7242226DF (PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m25810F0420A5BCBCFFBF0440A3A5830169B16850_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4A2C59C9E61A913787CE893C7F2F243AA82AE08F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE10FAFCFFF757ABAADFDCD5744D4FD09136B35E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m113FCF5FA38176C82449EBD461365CD1958DDA77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tB588E52D794CD121A4A6D4C05BEDF4481E376B76  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Tube_t2D49285A2D8CDFDFFDC7D96CF4BA7FAD9950F5C0 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (knob)
		Knob_t2533F4A87DCCD07FC743E002589B2955D87BCC19 * L_0 = __this->get_knob_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// knob.UpdateVisibility();
		Knob_t2533F4A87DCCD07FC743E002589B2955D87BCC19 * L_2 = __this->get_knob_7();
		CommonPart_UpdateVisibility_m306F69838B0FA6B725E0300F8031C4DE234DBF19(L_2, /*hidden argument*/NULL);
		// RegisterPrefabChanges(knob.gameObject);
		Knob_t2533F4A87DCCD07FC743E002589B2955D87BCC19 * L_3 = __this->get_knob_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		Connection_RegisterPrefabChanges_m610AA31575C04683CE051065C245AC0041B0E0BA(L_4, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// foreach (var tube in tubes)
		List_1_t55FB50AB728746C7A4CE36B13BC11C4BDCBC1608 * L_5 = __this->get_tubes_8();
		Enumerator_tB588E52D794CD121A4A6D4C05BEDF4481E376B76  L_6;
		L_6 = List_1_GetEnumerator_m113FCF5FA38176C82449EBD461365CD1958DDA77(L_5, /*hidden argument*/List_1_GetEnumerator_m113FCF5FA38176C82449EBD461365CD1958DDA77_RuntimeMethod_var);
		V_0 = L_6;
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0057;
		}

IL_0036:
		{
			// foreach (var tube in tubes)
			Tube_t2D49285A2D8CDFDFFDC7D96CF4BA7FAD9950F5C0 * L_7;
			L_7 = Enumerator_get_Current_mE10FAFCFFF757ABAADFDCD5744D4FD09136B35E5_inline((Enumerator_tB588E52D794CD121A4A6D4C05BEDF4481E376B76 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mE10FAFCFFF757ABAADFDCD5744D4FD09136B35E5_RuntimeMethod_var);
			V_1 = L_7;
			// if (tube)
			Tube_t2D49285A2D8CDFDFFDC7D96CF4BA7FAD9950F5C0 * L_8 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_9;
			L_9 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_8, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0057;
			}
		}

IL_0046:
		{
			// tube.UpdateVisibility();
			Tube_t2D49285A2D8CDFDFFDC7D96CF4BA7FAD9950F5C0 * L_10 = V_1;
			CommonPart_UpdateVisibility_m306F69838B0FA6B725E0300F8031C4DE234DBF19(L_10, /*hidden argument*/NULL);
			// RegisterPrefabChanges(tube.gameObject);
			Tube_t2D49285A2D8CDFDFFDC7D96CF4BA7FAD9950F5C0 * L_11 = V_1;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
			L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_11, /*hidden argument*/NULL);
			Connection_RegisterPrefabChanges_m610AA31575C04683CE051065C245AC0041B0E0BA(L_12, /*hidden argument*/NULL);
		}

IL_0057:
		{
			// foreach (var tube in tubes)
			bool L_13;
			L_13 = Enumerator_MoveNext_m4A2C59C9E61A913787CE893C7F2F243AA82AE08F((Enumerator_tB588E52D794CD121A4A6D4C05BEDF4481E376B76 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m4A2C59C9E61A913787CE893C7F2F243AA82AE08F_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0036;
			}
		}

IL_0060:
		{
			IL2CPP_LEAVE(0x70, FINALLY_0062);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0062;
	}

FINALLY_0062:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m25810F0420A5BCBCFFBF0440A3A5830169B16850((Enumerator_tB588E52D794CD121A4A6D4C05BEDF4481E376B76 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m25810F0420A5BCBCFFBF0440A3A5830169B16850_RuntimeMethod_var);
		IL2CPP_END_FINALLY(98)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(98)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x70, IL_0070)
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Boolean LEGOModelImporter.PlanarFeature::IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarFeature_IsVisible_mC7DE9C05669FC8937A673CED945D5DFB09BCECD4 (PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m25810F0420A5BCBCFFBF0440A3A5830169B16850_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4A2C59C9E61A913787CE893C7F2F243AA82AE08F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE10FAFCFFF757ABAADFDCD5744D4FD09136B35E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m113FCF5FA38176C82449EBD461365CD1958DDA77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_tB588E52D794CD121A4A6D4C05BEDF4481E376B76  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Tube_t2D49285A2D8CDFDFFDC7D96CF4BA7FAD9950F5C0 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B4_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// var visible = false;
		V_0 = (bool)0;
		// if (knob)
		Knob_t2533F4A87DCCD07FC743E002589B2955D87BCC19 * L_0 = __this->get_knob_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// visible = visible || knob.IsVisible();
		bool L_2 = V_0;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		Knob_t2533F4A87DCCD07FC743E002589B2955D87BCC19 * L_3 = __this->get_knob_7();
		bool L_4;
		L_4 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean LEGOModelImporter.CommonPart::IsVisible() */, L_3);
		G_B4_0 = ((int32_t)(L_4));
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 1;
	}

IL_0020:
	{
		V_0 = (bool)G_B4_0;
	}

IL_0021:
	{
		// foreach (var tube in tubes)
		List_1_t55FB50AB728746C7A4CE36B13BC11C4BDCBC1608 * L_5 = __this->get_tubes_8();
		Enumerator_tB588E52D794CD121A4A6D4C05BEDF4481E376B76  L_6;
		L_6 = List_1_GetEnumerator_m113FCF5FA38176C82449EBD461365CD1958DDA77(L_5, /*hidden argument*/List_1_GetEnumerator_m113FCF5FA38176C82449EBD461365CD1958DDA77_RuntimeMethod_var);
		V_1 = L_6;
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004c;
		}

IL_002f:
		{
			// foreach (var tube in tubes)
			Tube_t2D49285A2D8CDFDFFDC7D96CF4BA7FAD9950F5C0 * L_7;
			L_7 = Enumerator_get_Current_mE10FAFCFFF757ABAADFDCD5744D4FD09136B35E5_inline((Enumerator_tB588E52D794CD121A4A6D4C05BEDF4481E376B76 *)(&V_1), /*hidden argument*/Enumerator_get_Current_mE10FAFCFFF757ABAADFDCD5744D4FD09136B35E5_RuntimeMethod_var);
			V_2 = L_7;
			// if (tube)
			Tube_t2D49285A2D8CDFDFFDC7D96CF4BA7FAD9950F5C0 * L_8 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_9;
			L_9 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_8, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_004c;
			}
		}

IL_003f:
		{
			// visible = visible || tube.IsVisible();
			bool L_10 = V_0;
			if (L_10)
			{
				goto IL_004a;
			}
		}

IL_0042:
		{
			Tube_t2D49285A2D8CDFDFFDC7D96CF4BA7FAD9950F5C0 * L_11 = V_2;
			bool L_12;
			L_12 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean LEGOModelImporter.CommonPart::IsVisible() */, L_11);
			G_B11_0 = ((int32_t)(L_12));
			goto IL_004b;
		}

IL_004a:
		{
			G_B11_0 = 1;
		}

IL_004b:
		{
			V_0 = (bool)G_B11_0;
		}

IL_004c:
		{
			// foreach (var tube in tubes)
			bool L_13;
			L_13 = Enumerator_MoveNext_m4A2C59C9E61A913787CE893C7F2F243AA82AE08F((Enumerator_tB588E52D794CD121A4A6D4C05BEDF4481E376B76 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m4A2C59C9E61A913787CE893C7F2F243AA82AE08F_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_002f;
			}
		}

IL_0055:
		{
			IL2CPP_LEAVE(0x65, FINALLY_0057);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0057;
	}

FINALLY_0057:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m25810F0420A5BCBCFFBF0440A3A5830169B16850((Enumerator_tB588E52D794CD121A4A6D4C05BEDF4481E376B76 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m25810F0420A5BCBCFFBF0440A3A5830169B16850_RuntimeMethod_var);
		IL2CPP_END_FINALLY(87)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(87)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x65, IL_0065)
	}

IL_0065:
	{
		// return visible;
		bool L_14 = V_0;
		return L_14;
	}
}
// System.Boolean LEGOModelImporter.PlanarFeature::IsRelevantForTube()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarFeature_IsRelevantForTube_mB988AA0836A3517168BA7D28F012EE7A33C91039 (PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * __this, const RuntimeMethod* method)
{
	{
		// return connectionType == PlanarConnectionType.antiKnob || connectionType == PlanarConnectionType.squareAntiKnob;
		int32_t L_0 = __this->get_connectionType_3();
		if ((((int32_t)L_0) == ((int32_t)((int32_t)15))))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = __this->get_connectionType_3();
		return (bool)((((int32_t)L_1) == ((int32_t)((int32_t)17)))? 1 : 0);
	}

IL_0015:
	{
		return (bool)1;
	}
}
// LEGOModelImporter.Connection/ConnectionInteraction LEGOModelImporter.PlanarFeature::MatchTypes(LEGOModelImporter.Connection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlanarFeature_MatchTypes_mD62319BF55FB46B89DE80FF68FC704EBE6350FBB (PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * __this, Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 * ___rhs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// var i = (int)connectionType;
		int32_t L_0 = __this->get_connectionType_3();
		// var j = (int)(rhs as PlanarFeature).connectionType;
		Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 * L_1 = ___rhs0;
		int32_t L_2 = ((PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 *)IsInstClass((RuntimeObject*)L_1, PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445_il2cpp_TypeInfo_var))->get_connectionType_3();
		V_0 = L_2;
		// var index = i + j * connectivityMatrixWidth;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)43)))));
		// return connectivityMatrix[index];
		IL2CPP_RUNTIME_CLASS_INIT(PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445_il2cpp_TypeInfo_var);
		ConnectionInteractionU5BU5D_t737E52CEDFCB80EA9BA3DE6B36798AD12B0593EF* L_4 = ((PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445_StaticFields*)il2cpp_codegen_static_fields_for(PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445_il2cpp_TypeInfo_var))->get_connectivityMatrix_11();
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		int32_t L_7 = (int32_t)(L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		return (int32_t)(L_7);
	}
}
// LEGOModelImporter.PlanarFeature LEGOModelImporter.PlanarFeature::GetConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * PlanarFeature_GetConnection_mE995115297A5C7DFB09355FD4CBC583B46932ABB (PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * __this, const RuntimeMethod* method)
{
	{
		// return Field.GetConnection(index);
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_0;
		L_0 = PlanarFeature_get_Field_mB68F7D4AFECD9B6E3FDF8272EC1103C16EDB7804(__this, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_index_5();
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_2;
		L_2 = PlanarField_GetConnection_m180AAC326845CE5303ED676D2CD90A354D2B5A2E(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean LEGOModelImporter.PlanarFeature::HasConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarFeature_HasConnection_m808FBBDA3F64ED6C1612E1D65B2C04672329081F (PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * __this, const RuntimeMethod* method)
{
	{
		// return GetConnection() != null;
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_0;
		L_0 = PlanarFeature_GetConnection_mE995115297A5C7DFB09355FD4CBC583B46932ABB(__this, /*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Boolean LEGOModelImporter.PlanarFeature::IsConnectableType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarFeature_IsConnectableType_mAE01DF3254BE4C218C5F005B22B98544200F2902 (PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// var startIndex = (int)connectionType;
		int32_t L_0 = __this->get_connectionType_3();
		// var endIndex = startIndex + connectivityMatrixWidth;
		int32_t L_1 = L_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)43)));
		// for (var i = startIndex; i < endIndex; i++)
		V_1 = L_1;
		goto IL_0022;
	}

IL_000e:
	{
		// if (IsConnectable(connectivityMatrix[i]))
		IL2CPP_RUNTIME_CLASS_INIT(PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445_il2cpp_TypeInfo_var);
		ConnectionInteractionU5BU5D_t737E52CEDFCB80EA9BA3DE6B36798AD12B0593EF* L_2 = ((PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445_StaticFields*)il2cpp_codegen_static_fields_for(PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445_il2cpp_TypeInfo_var))->get_connectivityMatrix_11();
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		int32_t L_5 = (int32_t)(L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = Connection_IsConnectable_m639C98D3D3F1E1562ECAF7BB19932AF298A7F469(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_001e;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_001e:
	{
		// for (var i = startIndex; i < endIndex; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0022:
	{
		// for (var i = startIndex; i < endIndex; i++)
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000e;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// UnityEngine.Vector3 LEGOModelImporter.PlanarFeature::GetPreconnectOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PlanarFeature_GetPreconnectOffset_m5FEEC9EED9956F6F657147A947076CD4E48F6CE2 (PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// switch (connectionType)
		int32_t L_0 = __this->get_connectionType_3();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_006f;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_006f;
			}
			case 4:
			{
				goto IL_00af;
			}
			case 5:
			{
				goto IL_008f;
			}
			case 6:
			{
				goto IL_00af;
			}
			case 7:
			{
				goto IL_008f;
			}
			case 8:
			{
				goto IL_008f;
			}
			case 9:
			{
				goto IL_008f;
			}
			case 10:
			{
				goto IL_00af;
			}
			case 11:
			{
				goto IL_00af;
			}
			case 12:
			{
				goto IL_00af;
			}
			case 13:
			{
				goto IL_00af;
			}
			case 14:
			{
				goto IL_008f;
			}
			case 15:
			{
				goto IL_008f;
			}
			case 16:
			{
				goto IL_008f;
			}
			case 17:
			{
				goto IL_008f;
			}
			case 18:
			{
				goto IL_006f;
			}
			case 19:
			{
				goto IL_00af;
			}
			case 20:
			{
				goto IL_00af;
			}
			case 21:
			{
				goto IL_00af;
			}
			case 22:
			{
				goto IL_008f;
			}
			case 23:
			{
				goto IL_006f;
			}
		}
	}
	{
		goto IL_00af;
	}

IL_006f:
	{
		// return field.transform.TransformDirection(Vector3.up * 0.1f);
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_2 = ((Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 *)__this)->get_field_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_4, (0.100000001f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91(L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_008f:
	{
		// return field.transform.TransformDirection(Vector3.down * 0.1f);
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_7 = ((Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 *)__this)->get_field_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, (0.100000001f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91(L_8, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_00af:
	{
		// return Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.Vector3 LEGOModelImporter.PlanarFeature::GetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PlanarFeature_GetPosition_m398B3DFF11F85F34F18E35F057E24013DB543DA8 (PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * __this, const RuntimeMethod* method)
{
	{
		// return Field.GetPosition(this);
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_0;
		L_0 = PlanarFeature_get_Field_mB68F7D4AFECD9B6E3FDF8272EC1103C16EDB7804(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = PlanarField_GetPosition_m0C60AD9C05965F971872CE76ADA13FCDEC3016BD(L_0, __this, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean LEGOModelImporter.PlanarFeature::CheckConnectionTransformationValid(LEGOModelImporter.PlanarFeature,LEGOModelImporter.Connection/ConnectionInteraction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarFeature_CheckConnectionTransformationValid_m219D610C874FAFCEF0B60AC1B5CAA4CCE07A31A3 (PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * __this, PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * ___rhs0, int32_t* ___match1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (rhs == null)
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_0 = ___rhs0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// match = ConnectionInteraction.Reject;
		int32_t* L_1 = ___match1;
		*((int32_t*)L_1) = (int32_t)0;
		// return false;
		return (bool)0;
	}

IL_0008:
	{
		// match = MatchTypes(rhs);
		int32_t* L_2 = ___match1;
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_3 = ___rhs0;
		int32_t L_4;
		L_4 = VirtFuncInvoker1< int32_t, Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 * >::Invoke(4 /* LEGOModelImporter.Connection/ConnectionInteraction LEGOModelImporter.Connection::MatchTypes(LEGOModelImporter.Connection) */, __this, L_3);
		*((int32_t*)L_2) = (int32_t)L_4;
		// if (match == ConnectionInteraction.Reject)
		int32_t* L_5 = ___match1;
		int32_t L_6 = *((int32_t*)L_5);
		if (L_6)
		{
			goto IL_0017;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0017:
	{
		// var POS_EPSILON = 0.01f;
		V_0 = (0.00999999978f);
		// var ROT_EPSILON = 3.0f;
		V_1 = (3.0f);
		// var lhsPosition = GetPosition();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = PlanarFeature_GetPosition_m398B3DFF11F85F34F18E35F057E24013DB543DA8(__this, /*hidden argument*/NULL);
		// var rhsPosition = rhs.GetPosition();
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_8 = ___rhs0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = PlanarFeature_GetPosition_m398B3DFF11F85F34F18E35F057E24013DB543DA8(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		// return MathUtils.DistanceSquared(lhsPosition, rhsPosition) < POS_EPSILON && Vector3.Angle(field.transform.up, rhs.field.transform.up) < ROT_EPSILON;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_2;
		float L_11;
		L_11 = MathUtils_DistanceSquared_mE1C9074C9468B321E35688D78441790A2E774424(L_7, L_10, /*hidden argument*/NULL);
		float L_12 = V_0;
		if ((!(((float)L_11) < ((float)L_12))))
		{
			goto IL_0062;
		}
	}
	{
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_13 = ((Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 *)__this)->get_field_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_14, /*hidden argument*/NULL);
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_16 = ___rhs0;
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_17 = ((Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 *)L_16)->get_field_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_18, /*hidden argument*/NULL);
		float L_20;
		L_20 = Vector3_Angle_m3715AB03A36C59D8CF08F8D71E2F46454EB884C1(L_15, L_19, /*hidden argument*/NULL);
		float L_21 = V_1;
		return (bool)((((float)L_20) < ((float)L_21))? 1 : 0);
	}

IL_0062:
	{
		return (bool)0;
	}
}
// System.Void LEGOModelImporter.PlanarFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarFeature__ctor_m135FB2A16DC009ACB34ED2A58BFF4FC832C2E4DD (PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * __this, const RuntimeMethod* method)
{
	{
		Connection__ctor_mDBBE58C719F271A705BB5E5B91312AE5EE5B67FC(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LEGOModelImporter.PlanarFeature::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarFeature__cctor_mCE15DB834D768FA8EA07775495B6ABDE1D8A98E5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionInteractionU5BU5D_t737E52CEDFCB80EA9BA3DE6B36798AD12B0593EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t59291B036D75DC101EA8879D273965E199D84B15____AC59E4A04B2979B76D38C898EE309AC40E5A388C15889344C5CC602645E5C076_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly Flags flagsCoveringKnob = Flags.squareFeature | Flags.roundFeature;
		((PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445_StaticFields*)il2cpp_codegen_static_fields_for(PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445_il2cpp_TypeInfo_var))->set_flagsCoveringKnob_1(3);
		// public static readonly Flags flagsCoveringTube = Flags.squareFeature;
		((PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445_StaticFields*)il2cpp_codegen_static_fields_for(PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445_il2cpp_TypeInfo_var))->set_flagsCoveringTube_2(1);
		// private static readonly ConnectionInteraction[] connectivityMatrix = new ConnectionInteraction[connectivityMatrixWidth * connectivityMatrixHeight] {
		// ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Fixed, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Hinge, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Fixed, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Fixed, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Fixed, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Fixed, ConnectionInteraction.Fixed, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject,
		// ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Fixed, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Fixed, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Fixed, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Fixed, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore,
		// ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Ignore,
		// ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject,
		// ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore,
		// ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Fixed, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore,
		// ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Hinge, ConnectionInteraction.Fixed, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Fixed, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Ignore,
		// ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore,
		// ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Fixed, ConnectionInteraction.Hinge, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore,
		// ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Hinge, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Ignore, ConnectionInteraction.Reject, ConnectionInteraction.Reject, ConnectionInteraction.Reject,
		// };
		ConnectionInteractionU5BU5D_t737E52CEDFCB80EA9BA3DE6B36798AD12B0593EF* L_0 = (ConnectionInteractionU5BU5D_t737E52CEDFCB80EA9BA3DE6B36798AD12B0593EF*)(ConnectionInteractionU5BU5D_t737E52CEDFCB80EA9BA3DE6B36798AD12B0593EF*)SZArrayNew(ConnectionInteractionU5BU5D_t737E52CEDFCB80EA9BA3DE6B36798AD12B0593EF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1849));
		ConnectionInteractionU5BU5D_t737E52CEDFCB80EA9BA3DE6B36798AD12B0593EF* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t59291B036D75DC101EA8879D273965E199D84B15____AC59E4A04B2979B76D38C898EE309AC40E5A388C15889344C5CC602645E5C076_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445_StaticFields*)il2cpp_codegen_static_fields_for(PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445_il2cpp_TypeInfo_var))->set_connectivityMatrix_11(L_1);
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
// System.Collections.Generic.HashSet`1<System.ValueTuple`2<LEGOModelImporter.Connection,LEGOModelImporter.Connection>> LEGOModelImporter.PlanarField::QueryConnections(System.Boolean&,System.Boolean,System.Collections.Generic.ICollection`1<LEGOModelImporter.ConnectionField>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t69A741B8DFFFBB102061CF32AD5D84BF4646522A * PlanarField_QueryConnections_mEB6192EBA7EE22655D93A8BF472D366811CDF382 (PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * __this, bool* ___reject0, bool ___bothkinds1, RuntimeObject* ___onlyConnectTo2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BrickBuildingUtility_t9BB0DA76B8CCBFAB0FD4E7A51C3D7411952C767E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65_m4124B4A352DBC23504D5D2922BD6E949BFDB9489_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1AC04F9D458AB26A6C4ED08757F6CBD2874C6DAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m15C3343C38F5263A4598DCEE6DA20343007A94BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9C08DFCCDD0FD5C1BD7C7DF2C48741761F5AB0CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m4DA62069A44D6CF2BA81EBA9EB723221F23754D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_mCFCFDF66BC7C228600AF49A478B4E3EF068B9782_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mDECF73971EA6732CFBED1E356E48E1F5804CCCBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t69A741B8DFFFBB102061CF32AD5D84BF4646522A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tE1AE56173CB454E5CD870D62746FFFF5FD05DCD1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_m403716C8ED2D73C79170287DA962B5F8ABB21F6F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	HashSet_1_t69A741B8DFFFBB102061CF32AD5D84BF4646522A * V_1 = NULL;
	PhysicsScene_tEDFCAA935450E8EBB7732353D9AA264A5F711678  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * V_7 = NULL;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Enumerator_t4D376E3C22DD5227BB0FBDD64CE44B74AC7BCC0E  V_10;
	memset((&V_10), 0, sizeof(V_10));
	ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  V_11;
	memset((&V_11), 0, sizeof(V_11));
	ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// LayerMask mask = GetMask(kind, bothkinds);
		int32_t L_0 = ((ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC *)__this)->get_kind_5();
		bool L_1 = ___bothkinds1;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_2;
		L_2 = ConnectionField_GetMask_m1D27728777B260789BA4AB0F0D7F17CB362A5F27(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// HashSet<(Connection, Connection)> validConnections = new HashSet<(Connection, Connection)>();
		HashSet_1_t69A741B8DFFFBB102061CF32AD5D84BF4646522A * L_3 = (HashSet_1_t69A741B8DFFFBB102061CF32AD5D84BF4646522A *)il2cpp_codegen_object_new(HashSet_1_t69A741B8DFFFBB102061CF32AD5D84BF4646522A_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mDECF73971EA6732CFBED1E356E48E1F5804CCCBA(L_3, /*hidden argument*/HashSet_1__ctor_mDECF73971EA6732CFBED1E356E48E1F5804CCCBA_RuntimeMethod_var);
		V_1 = L_3;
		// reject = false;
		bool* L_4 = ___reject0;
		*((int8_t*)L_4) = (int8_t)0;
		// var physicsScene = gameObject.scene.GetPhysicsScene();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_6;
		L_6 = GameObject_get_scene_m7EBF95ABB5037FEE6811928F2E83C769C53F86C2(L_5, /*hidden argument*/NULL);
		PhysicsScene_tEDFCAA935450E8EBB7732353D9AA264A5F711678  L_7;
		L_7 = PhysicsSceneExtensions_GetPhysicsScene_m716E028C809F5E276F1C8DEEA8E1BC91AA1C4650(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// var size = new Vector3((gridSize.x + 1) * BrickBuildingUtility.LU_5, BrickBuildingUtility.LU_1 * .2f, (gridSize.y + 1) * BrickBuildingUtility.LU_5);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_8 = __this->get_address_of_gridSize_10();
		int32_t L_9;
		L_9 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_8, /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_10 = __this->get_address_of_gridSize_10();
		int32_t L_11;
		L_11 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_10, /*hidden argument*/NULL);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), ((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)))), (float)(0.399999976f))), (0.0160000008f), ((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)))), (float)(0.399999976f))), /*hidden argument*/NULL);
		// var center = new Vector3((size.x - BrickBuildingUtility.LU_5) * -0.5f, 0.0f, (size.z - BrickBuildingUtility.LU_5) * 0.5f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_3;
		float L_13 = L_12.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_3;
		float L_15 = L_14.get_z_4();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_13, (float)(0.399999976f))), (float)(-0.5f))), (0.0f), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_15, (float)(0.399999976f))), (float)(0.5f))), /*hidden argument*/NULL);
		// var hits = physicsScene.OverlapBox(transform.TransformPoint(center), size * 0.5f, BrickBuildingUtility.ColliderBuffer, transform.rotation, mask, QueryTriggerInteraction.Collide);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_16, L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_19, (0.5f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BrickBuildingUtility_t9BB0DA76B8CCBFAB0FD4E7A51C3D7411952C767E_il2cpp_TypeInfo_var);
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_21;
		L_21 = BrickBuildingUtility_get_ColliderBuffer_m90E3B3B0BC31339A5C434E8C5DDE6B142D9FA9F6_inline(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23;
		L_23 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_22, /*hidden argument*/NULL);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_24 = V_0;
		int32_t L_25;
		L_25 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_24, /*hidden argument*/NULL);
		int32_t L_26;
		L_26 = PhysicsScene_OverlapBox_mCC9E06BCEE764C2C0A9F2C544A69B996BB37CF27((PhysicsScene_tEDFCAA935450E8EBB7732353D9AA264A5F711678 *)(&V_2), L_18, L_20, L_21, L_23, L_25, 2, /*hidden argument*/NULL);
		V_5 = L_26;
		// for (var i = 0; i < hits; i++)
		V_6 = 0;
		goto IL_01ee;
	}

IL_00cb:
	{
		// var overlap = BrickBuildingUtility.ColliderBuffer[i];
		IL2CPP_RUNTIME_CLASS_INIT(BrickBuildingUtility_t9BB0DA76B8CCBFAB0FD4E7A51C3D7411952C767E_il2cpp_TypeInfo_var);
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_27;
		L_27 = BrickBuildingUtility_get_ColliderBuffer_m90E3B3B0BC31339A5C434E8C5DDE6B142D9FA9F6_inline(/*hidden argument*/NULL);
		int32_t L_28 = V_6;
		int32_t L_29 = L_28;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_30 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		// var field = overlap.GetComponent<PlanarField>();
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_31;
		L_31 = Component_GetComponent_TisPlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65_m4124B4A352DBC23504D5D2922BD6E949BFDB9489(L_30, /*hidden argument*/Component_GetComponent_TisPlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65_m4124B4A352DBC23504D5D2922BD6E949BFDB9489_RuntimeMethod_var);
		V_7 = L_31;
		// if (field == null || field == this || field.connectivity.part == connectivity.part)
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_32 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_32, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_01e8;
		}
	}
	{
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_34 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_34, __this, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_01e8;
		}
	}
	{
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_36 = V_7;
		Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF * L_37 = ((ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC *)L_36)->get_connectivity_4();
		Part_tF559450A02A6BE32049B9167745FA5412AF33987 * L_38 = L_37->get_part_5();
		Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF * L_39 = ((ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC *)__this)->get_connectivity_4();
		Part_tF559450A02A6BE32049B9167745FA5412AF33987 * L_40 = L_39->get_part_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_38, L_40, /*hidden argument*/NULL);
		if (L_41)
		{
			goto IL_01e8;
		}
	}
	{
		// if (onlyConnectTo != null && !onlyConnectTo.Contains(field))
		RuntimeObject* L_42 = ___onlyConnectTo2;
		if (!L_42)
		{
			goto IL_0125;
		}
	}
	{
		RuntimeObject* L_43 = ___onlyConnectTo2;
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_44 = V_7;
		bool L_45;
		L_45 = InterfaceFuncInvoker1< bool, ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<LEGOModelImporter.ConnectionField>::Contains(!0) */, ICollection_1_tE1AE56173CB454E5CD870D62746FFFF5FD05DCD1_il2cpp_TypeInfo_var, L_43, L_44);
		if (!L_45)
		{
			goto IL_01e8;
		}
	}

IL_0125:
	{
		// if (Mathf.Abs(Vector3.Dot(field.transform.up, transform.up)) < 0.95f)
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_46 = V_7;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
		L_47 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_46, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_47, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_49, /*hidden argument*/NULL);
		float L_51;
		L_51 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_48, L_50, /*hidden argument*/NULL);
		float L_52;
		L_52 = fabsf(L_51);
		if ((((float)L_52) < ((float)(0.949999988f))))
		{
			goto IL_01e8;
		}
	}
	{
		// if (!GetOverlap(field, this, field.transform.localToWorldMatrix, transform.localToWorldMatrix, out Vector2Int min, out Vector2Int max))
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_53 = V_7;
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_54 = V_7;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_55;
		L_55 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_54, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_56;
		L_56 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC(L_55, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_57;
		L_57 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_58;
		L_58 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC(L_57, /*hidden argument*/NULL);
		bool L_59;
		L_59 = PlanarField_GetOverlap_mFDEFCF79D3C4F4FAB1C25264A59058785356C420(L_53, __this, L_56, L_58, (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_8), (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_9), /*hidden argument*/NULL);
		if (!L_59)
		{
			goto IL_01e8;
		}
	}
	{
		// var overlapConnections = GetConnectionsOnOverlap(field, this, field.transform.localToWorldMatrix, transform.localToWorldMatrix, min, max, out reject);
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_60 = V_7;
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_61 = V_7;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_62;
		L_62 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_61, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_63;
		L_63 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC(L_62, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_64;
		L_64 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_65;
		L_65 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC(L_64, /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_66 = V_8;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_67 = V_9;
		bool* L_68 = ___reject0;
		HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3 * L_69;
		L_69 = PlanarField_GetConnectionsOnOverlap_mC3EB086B23235728EB27F7E19F0954250C223118(L_60, __this, L_63, L_65, L_66, L_67, (bool*)L_68, /*hidden argument*/NULL);
		// foreach (var c in overlapConnections)
		Enumerator_t4D376E3C22DD5227BB0FBDD64CE44B74AC7BCC0E  L_70;
		L_70 = HashSet_1_GetEnumerator_mCFCFDF66BC7C228600AF49A478B4E3EF068B9782(L_69, /*hidden argument*/HashSet_1_GetEnumerator_mCFCFDF66BC7C228600AF49A478B4E3EF068B9782_RuntimeMethod_var);
		V_10 = L_70;
	}

IL_01a0:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01c9;
		}

IL_01a2:
		{
			// foreach (var c in overlapConnections)
			ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  L_71;
			L_71 = Enumerator_get_Current_m9C08DFCCDD0FD5C1BD7C7DF2C48741761F5AB0CD_inline((Enumerator_t4D376E3C22DD5227BB0FBDD64CE44B74AC7BCC0E *)(&V_10), /*hidden argument*/Enumerator_get_Current_m9C08DFCCDD0FD5C1BD7C7DF2C48741761F5AB0CD_RuntimeMethod_var);
			V_11 = L_71;
			// validConnections.Add(c);
			HashSet_1_t69A741B8DFFFBB102061CF32AD5D84BF4646522A * L_72 = V_1;
			ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  L_73 = V_11;
			V_12 = L_73;
			ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  L_74 = V_12;
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_75 = L_74.get_Item1_0();
			ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  L_76 = V_12;
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_77 = L_76.get_Item2_1();
			ValueTuple_2_tE31844093EA6E41DA2EECECABE9C6C6D09CD170D  L_78;
			memset((&L_78), 0, sizeof(L_78));
			ValueTuple_2__ctor_m403716C8ED2D73C79170287DA962B5F8ABB21F6F((&L_78), L_75, L_77, /*hidden argument*/ValueTuple_2__ctor_m403716C8ED2D73C79170287DA962B5F8ABB21F6F_RuntimeMethod_var);
			bool L_79;
			L_79 = HashSet_1_Add_m4DA62069A44D6CF2BA81EBA9EB723221F23754D7(L_72, L_78, /*hidden argument*/HashSet_1_Add_m4DA62069A44D6CF2BA81EBA9EB723221F23754D7_RuntimeMethod_var);
		}

IL_01c9:
		{
			// foreach (var c in overlapConnections)
			bool L_80;
			L_80 = Enumerator_MoveNext_m15C3343C38F5263A4598DCEE6DA20343007A94BF((Enumerator_t4D376E3C22DD5227BB0FBDD64CE44B74AC7BCC0E *)(&V_10), /*hidden argument*/Enumerator_MoveNext_m15C3343C38F5263A4598DCEE6DA20343007A94BF_RuntimeMethod_var);
			if (L_80)
			{
				goto IL_01a2;
			}
		}

IL_01d2:
		{
			IL2CPP_LEAVE(0x1E2, FINALLY_01d4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01d4;
	}

FINALLY_01d4:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1AC04F9D458AB26A6C4ED08757F6CBD2874C6DAB((Enumerator_t4D376E3C22DD5227BB0FBDD64CE44B74AC7BCC0E *)(&V_10), /*hidden argument*/Enumerator_Dispose_m1AC04F9D458AB26A6C4ED08757F6CBD2874C6DAB_RuntimeMethod_var);
		IL2CPP_END_FINALLY(468)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(468)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1E2, IL_01e2)
	}

IL_01e2:
	{
		// if (reject)
		bool* L_81 = ___reject0;
		int32_t L_82 = *((uint8_t*)L_81);
		if (!L_82)
		{
			goto IL_01e8;
		}
	}
	{
		// return validConnections;
		HashSet_1_t69A741B8DFFFBB102061CF32AD5D84BF4646522A * L_83 = V_1;
		return L_83;
	}

IL_01e8:
	{
		// for (var i = 0; i < hits; i++)
		int32_t L_84 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)1));
	}

IL_01ee:
	{
		// for (var i = 0; i < hits; i++)
		int32_t L_85 = V_6;
		int32_t L_86 = V_5;
		if ((((int32_t)L_85) < ((int32_t)L_86)))
		{
			goto IL_00cb;
		}
	}
	{
		// return validConnections;
		HashSet_1_t69A741B8DFFFBB102061CF32AD5D84BF4646522A * L_87 = V_1;
		return L_87;
	}
}
// System.Collections.Generic.HashSet`1<LEGOModelImporter.ConnectionField> LEGOModelImporter.PlanarField::DisconnectAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296 * PlanarField_DisconnectAll_mFB119C85C4CF77F8EEA0EAE5D391A20B72CD3390 (PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m6E7231630320E685DE2F9F1ECD4638CE9652551A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mA94817DDAA91845521271BA333AA79454B98E4D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m98A5E810B3DC6EFA75E566CF401484790B608BB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m16456A7292CE17197A0C71EAC02C0E57291AF1A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mFF3538F7A84D1D0A9AF7312B4D28100580E26E2F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296 * V_0 = NULL;
	List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F * V_1 = NULL;
	Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// HashSet<ConnectionField> result = new HashSet<ConnectionField>();
		HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296 * L_0 = (HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296 *)il2cpp_codegen_object_new(HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mA94817DDAA91845521271BA333AA79454B98E4D9(L_0, /*hidden argument*/HashSet_1__ctor_mA94817DDAA91845521271BA333AA79454B98E4D9_RuntimeMethod_var);
		V_0 = L_0;
		// List<(PlanarFeature, PlanarFeature)> toBeDisconnected = new List<(PlanarFeature, PlanarFeature)>();
		List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F * L_1 = (List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F *)il2cpp_codegen_object_new(List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F_il2cpp_TypeInfo_var);
		List_1__ctor_m16456A7292CE17197A0C71EAC02C0E57291AF1A1(L_1, /*hidden argument*/List_1__ctor_m16456A7292CE17197A0C71EAC02C0E57291AF1A1_RuntimeMethod_var);
		V_1 = L_1;
		// var connected = GetConnectedConnections();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_2;
		L_2 = PlanarField_GetConnectedConnections_m78B59C683E10A59630A4A6261984EE16839F98C3_inline(__this, /*hidden argument*/NULL);
		// foreach (var connection in connected)
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  L_3;
		L_3 = List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24(L_2, /*hidden argument*/List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var);
		V_2 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004e;
		}

IL_001a:
		{
			// foreach (var connection in connected)
			int32_t L_4;
			L_4 = Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_2), /*hidden argument*/Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var);
			V_3 = L_4;
			// var otherConnection = GetConnection(connection);
			int32_t L_5 = V_3;
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_6;
			L_6 = PlanarField_GetConnection_m180AAC326845CE5303ED676D2CD90A354D2B5A2E(__this, L_5, /*hidden argument*/NULL);
			V_4 = L_6;
			// toBeDisconnected.Add((connections[connection], otherConnection));
			List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F * L_7 = V_1;
			PlanarFeatureU5BU5D_tBC900E26A810AE80A97E3E8D3610EAE6CB31145B* L_8 = __this->get_connections_6();
			int32_t L_9 = V_3;
			int32_t L_10 = L_9;
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_12 = V_4;
			ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  L_13;
			memset((&L_13), 0, sizeof(L_13));
			ValueTuple_2__ctor_mFF3538F7A84D1D0A9AF7312B4D28100580E26E2F((&L_13), L_11, L_12, /*hidden argument*/ValueTuple_2__ctor_mFF3538F7A84D1D0A9AF7312B4D28100580E26E2F_RuntimeMethod_var);
			List_1_Add_m98A5E810B3DC6EFA75E566CF401484790B608BB6(L_7, L_13, /*hidden argument*/List_1_Add_m98A5E810B3DC6EFA75E566CF401484790B608BB6_RuntimeMethod_var);
			// result.Add(otherConnection.field);
			HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296 * L_14 = V_0;
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_15 = V_4;
			ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_16 = ((Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 *)L_15)->get_field_0();
			bool L_17;
			L_17 = HashSet_1_Add_m6E7231630320E685DE2F9F1ECD4638CE9652551A(L_14, L_16, /*hidden argument*/HashSet_1_Add_m6E7231630320E685DE2F9F1ECD4638CE9652551A_RuntimeMethod_var);
		}

IL_004e:
		{
			// foreach (var connection in connected)
			bool L_18;
			L_18 = Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_001a;
			}
		}

IL_0057:
		{
			IL2CPP_LEAVE(0x67, FINALLY_0059);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0059;
	}

FINALLY_0059:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_2), /*hidden argument*/Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
		IL2CPP_END_FINALLY(89)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(89)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x67, IL_0067)
	}

IL_0067:
	{
		// Disconnect(toBeDisconnected);
		List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F * L_19 = V_1;
		PlanarField_Disconnect_mD3C7194C16CE3178255C1CED2865AE0857B04791(L_19, (bool)1, /*hidden argument*/NULL);
		// return result;
		HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296 * L_20 = V_0;
		return L_20;
	}
}
// System.Collections.Generic.HashSet`1<LEGOModelImporter.ConnectionField> LEGOModelImporter.PlanarField::DisconnectAllInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296 * PlanarField_DisconnectAllInvalid_mE79BE8C8AA8BB11B69C1D30C1C875B5DFDCF62FB (PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m6E7231630320E685DE2F9F1ECD4638CE9652551A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mA94817DDAA91845521271BA333AA79454B98E4D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m98A5E810B3DC6EFA75E566CF401484790B608BB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m16456A7292CE17197A0C71EAC02C0E57291AF1A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mFF3538F7A84D1D0A9AF7312B4D28100580E26E2F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296 * V_0 = NULL;
	List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F * V_1 = NULL;
	Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * V_4 = NULL;
	PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * V_5 = NULL;
	int32_t V_6 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// HashSet<ConnectionField> result = new HashSet<ConnectionField>();
		HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296 * L_0 = (HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296 *)il2cpp_codegen_object_new(HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mA94817DDAA91845521271BA333AA79454B98E4D9(L_0, /*hidden argument*/HashSet_1__ctor_mA94817DDAA91845521271BA333AA79454B98E4D9_RuntimeMethod_var);
		V_0 = L_0;
		// List<(PlanarFeature, PlanarFeature)> toBeDisconnected = new List<(PlanarFeature, PlanarFeature)>();
		List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F * L_1 = (List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F *)il2cpp_codegen_object_new(List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F_il2cpp_TypeInfo_var);
		List_1__ctor_m16456A7292CE17197A0C71EAC02C0E57291AF1A1(L_1, /*hidden argument*/List_1__ctor_m16456A7292CE17197A0C71EAC02C0E57291AF1A1_RuntimeMethod_var);
		V_1 = L_1;
		// var connected = GetConnectedConnections();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_2;
		L_2 = PlanarField_GetConnectedConnections_m78B59C683E10A59630A4A6261984EE16839F98C3_inline(__this, /*hidden argument*/NULL);
		// foreach (var connection in connected)
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  L_3;
		L_3 = List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24(L_2, /*hidden argument*/List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var);
		V_2 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005f;
		}

IL_001a:
		{
			// foreach (var connection in connected)
			int32_t L_4;
			L_4 = Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_2), /*hidden argument*/Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var);
			V_3 = L_4;
			// var otherConnection = GetConnection(connection);
			int32_t L_5 = V_3;
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_6;
			L_6 = PlanarField_GetConnection_m180AAC326845CE5303ED676D2CD90A354D2B5A2E(__this, L_5, /*hidden argument*/NULL);
			V_4 = L_6;
			// var conn = connections[connection];
			PlanarFeatureU5BU5D_tBC900E26A810AE80A97E3E8D3610EAE6CB31145B* L_7 = __this->get_connections_6();
			int32_t L_8 = V_3;
			int32_t L_9 = L_8;
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
			V_5 = L_10;
			// if (!conn.CheckConnectionTransformationValid(otherConnection, out _))
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_11 = V_5;
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_12 = V_4;
			bool L_13;
			L_13 = PlanarFeature_CheckConnectionTransformationValid_m219D610C874FAFCEF0B60AC1B5CAA4CCE07A31A3(L_11, L_12, (int32_t*)(&V_6), /*hidden argument*/NULL);
			if (L_13)
			{
				goto IL_005f;
			}
		}

IL_0042:
		{
			// toBeDisconnected.Add((conn, otherConnection));
			List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F * L_14 = V_1;
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_15 = V_5;
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_16 = V_4;
			ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  L_17;
			memset((&L_17), 0, sizeof(L_17));
			ValueTuple_2__ctor_mFF3538F7A84D1D0A9AF7312B4D28100580E26E2F((&L_17), L_15, L_16, /*hidden argument*/ValueTuple_2__ctor_mFF3538F7A84D1D0A9AF7312B4D28100580E26E2F_RuntimeMethod_var);
			List_1_Add_m98A5E810B3DC6EFA75E566CF401484790B608BB6(L_14, L_17, /*hidden argument*/List_1_Add_m98A5E810B3DC6EFA75E566CF401484790B608BB6_RuntimeMethod_var);
			// result.Add(otherConnection.field);
			HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296 * L_18 = V_0;
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_19 = V_4;
			ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_20 = ((Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 *)L_19)->get_field_0();
			bool L_21;
			L_21 = HashSet_1_Add_m6E7231630320E685DE2F9F1ECD4638CE9652551A(L_18, L_20, /*hidden argument*/HashSet_1_Add_m6E7231630320E685DE2F9F1ECD4638CE9652551A_RuntimeMethod_var);
		}

IL_005f:
		{
			// foreach (var connection in connected)
			bool L_22;
			L_22 = Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_001a;
			}
		}

IL_0068:
		{
			IL2CPP_LEAVE(0x78, FINALLY_006a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006a;
	}

FINALLY_006a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_2), /*hidden argument*/Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
		IL2CPP_END_FINALLY(106)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(106)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x78, IL_0078)
	}

IL_0078:
	{
		// Disconnect(toBeDisconnected);
		List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F * L_23 = V_1;
		PlanarField_Disconnect_mD3C7194C16CE3178255C1CED2865AE0857B04791(L_23, (bool)1, /*hidden argument*/NULL);
		// return result;
		HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296 * L_24 = V_0;
		return L_24;
	}
}
// System.Collections.Generic.HashSet`1<LEGOModelImporter.ConnectionField> LEGOModelImporter.PlanarField::DisconnectInverse(System.Collections.Generic.ICollection`1<LEGOModelImporter.Brick>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296 * PlanarField_DisconnectInverse_mA4A4E276C3A76D514444871F216482682F72715F (PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * __this, RuntimeObject* ___bricksToKeep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m6E7231630320E685DE2F9F1ECD4638CE9652551A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mA94817DDAA91845521271BA333AA79454B98E4D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tBC7A2C7988F8248D048F8026690AF2D62BEE6A97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m98A5E810B3DC6EFA75E566CF401484790B608BB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m16456A7292CE17197A0C71EAC02C0E57291AF1A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mFF3538F7A84D1D0A9AF7312B4D28100580E26E2F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296 * V_0 = NULL;
	List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F * V_1 = NULL;
	Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// HashSet<ConnectionField> result = new HashSet<ConnectionField>();
		HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296 * L_0 = (HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296 *)il2cpp_codegen_object_new(HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mA94817DDAA91845521271BA333AA79454B98E4D9(L_0, /*hidden argument*/HashSet_1__ctor_mA94817DDAA91845521271BA333AA79454B98E4D9_RuntimeMethod_var);
		V_0 = L_0;
		// List<(PlanarFeature, PlanarFeature)> toBeDisconnected = new List<(PlanarFeature, PlanarFeature)>();
		List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F * L_1 = (List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F *)il2cpp_codegen_object_new(List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F_il2cpp_TypeInfo_var);
		List_1__ctor_m16456A7292CE17197A0C71EAC02C0E57291AF1A1(L_1, /*hidden argument*/List_1__ctor_m16456A7292CE17197A0C71EAC02C0E57291AF1A1_RuntimeMethod_var);
		V_1 = L_1;
		// var connected = GetConnectedConnections();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_2;
		L_2 = PlanarField_GetConnectedConnections_m78B59C683E10A59630A4A6261984EE16839F98C3_inline(__this, /*hidden argument*/NULL);
		// foreach (var connection in connected)
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  L_3;
		L_3 = List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24(L_2, /*hidden argument*/List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var);
		V_2 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006c;
		}

IL_001a:
		{
			// foreach (var connection in connected)
			int32_t L_4;
			L_4 = Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_2), /*hidden argument*/Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var);
			V_3 = L_4;
			// var connectedTo = GetConnection(connection);
			int32_t L_5 = V_3;
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_6;
			L_6 = PlanarField_GetConnection_m180AAC326845CE5303ED676D2CD90A354D2B5A2E(__this, L_5, /*hidden argument*/NULL);
			V_4 = L_6;
			// if (!bricksToKeep.Contains(connectedTo.field.connectivity.part.brick))
			RuntimeObject* L_7 = ___bricksToKeep0;
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_8 = V_4;
			ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_9 = ((Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 *)L_8)->get_field_0();
			Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF * L_10 = L_9->get_connectivity_4();
			Part_tF559450A02A6BE32049B9167745FA5412AF33987 * L_11 = L_10->get_part_5();
			Brick_t4E2078428A9FDB510CB1D407CE70A9084C8A72EB * L_12 = L_11->get_brick_9();
			bool L_13;
			L_13 = InterfaceFuncInvoker1< bool, Brick_t4E2078428A9FDB510CB1D407CE70A9084C8A72EB * >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<LEGOModelImporter.Brick>::Contains(!0) */, ICollection_1_tBC7A2C7988F8248D048F8026690AF2D62BEE6A97_il2cpp_TypeInfo_var, L_7, L_12);
			if (L_13)
			{
				goto IL_006c;
			}
		}

IL_0049:
		{
			// toBeDisconnected.Add((connections[connection], connectedTo));
			List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F * L_14 = V_1;
			PlanarFeatureU5BU5D_tBC900E26A810AE80A97E3E8D3610EAE6CB31145B* L_15 = __this->get_connections_6();
			int32_t L_16 = V_3;
			int32_t L_17 = L_16;
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_19 = V_4;
			ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  L_20;
			memset((&L_20), 0, sizeof(L_20));
			ValueTuple_2__ctor_mFF3538F7A84D1D0A9AF7312B4D28100580E26E2F((&L_20), L_18, L_19, /*hidden argument*/ValueTuple_2__ctor_mFF3538F7A84D1D0A9AF7312B4D28100580E26E2F_RuntimeMethod_var);
			List_1_Add_m98A5E810B3DC6EFA75E566CF401484790B608BB6(L_14, L_20, /*hidden argument*/List_1_Add_m98A5E810B3DC6EFA75E566CF401484790B608BB6_RuntimeMethod_var);
			// result.Add(connectedTo.field);
			HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296 * L_21 = V_0;
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_22 = V_4;
			ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_23 = ((Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 *)L_22)->get_field_0();
			bool L_24;
			L_24 = HashSet_1_Add_m6E7231630320E685DE2F9F1ECD4638CE9652551A(L_21, L_23, /*hidden argument*/HashSet_1_Add_m6E7231630320E685DE2F9F1ECD4638CE9652551A_RuntimeMethod_var);
		}

IL_006c:
		{
			// foreach (var connection in connected)
			bool L_25;
			L_25 = Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
			if (L_25)
			{
				goto IL_001a;
			}
		}

IL_0075:
		{
			IL2CPP_LEAVE(0x85, FINALLY_0077);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0077;
	}

FINALLY_0077:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_2), /*hidden argument*/Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
		IL2CPP_END_FINALLY(119)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(119)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x85, IL_0085)
	}

IL_0085:
	{
		// Disconnect(toBeDisconnected);
		List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F * L_26 = V_1;
		PlanarField_Disconnect_mD3C7194C16CE3178255C1CED2865AE0857B04791(L_26, (bool)1, /*hidden argument*/NULL);
		// return result;
		HashSet_1_tECD88AFDAAD067393EDB3DB9FE11BBDF60475296 * L_27 = V_0;
		return L_27;
	}
}
// System.Boolean LEGOModelImporter.PlanarField::GetOverlap(LEGOModelImporter.PlanarField,LEGOModelImporter.PlanarField,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Vector2Int&,UnityEngine.Vector2Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarField_GetOverlap_mFDEFCF79D3C4F4FAB1C25264A59058785356C420 (PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * ___f10, PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * ___f21, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___f1Transform2, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___f2Transform3, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * ___min4, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * ___max5, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_12;
	memset((&V_12), 0, sizeof(V_12));
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	float V_20 = 0.0f;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	{
		// var f1Size = new Vector3(f1.gridSize.x, 0.0f, f1.gridSize.y) * BrickBuildingUtility.LU_5;
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_0 = ___f10;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_1 = L_0->get_address_of_gridSize_10();
		int32_t L_2;
		L_2 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_1, /*hidden argument*/NULL);
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_3 = ___f10;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_4 = L_3->get_address_of_gridSize_10();
		int32_t L_5;
		L_5 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((float)((float)L_2)), (0.0f), ((float)((float)L_5)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_6, (0.399999976f), /*hidden argument*/NULL);
		V_0 = L_7;
		// var f2Size = new Vector3(f2.gridSize.x, 0.0f, f2.gridSize.y) * BrickBuildingUtility.LU_5;
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_8 = ___f21;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_9 = L_8->get_address_of_gridSize_10();
		int32_t L_10;
		L_10 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_9, /*hidden argument*/NULL);
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_11 = ___f21;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_12 = L_11->get_address_of_gridSize_10();
		int32_t L_13;
		L_13 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_14), ((float)((float)L_10)), (0.0f), ((float)((float)L_13)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_14, (0.399999976f), /*hidden argument*/NULL);
		V_1 = L_15;
		// var f1_1 = new Vector3(0.0f, 0.0f, 0.0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_16), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// var f1_2 = new Vector3(-f1Size.x, 0.0f, f1Size.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_0;
		float L_18 = L_17.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_0;
		float L_20 = L_19.get_z_4();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), ((-L_18)), (0.0f), L_20, /*hidden argument*/NULL);
		// var f1_3 = new Vector3(-f1Size.x, 0.0f, 0.0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_0;
		float L_22 = L_21.get_x_2();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), ((-L_22)), (0.0f), (0.0f), /*hidden argument*/NULL);
		// var f1_4 = new Vector3(0.0f, 0.0f, f1Size.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_0;
		float L_24 = L_23.get_z_4();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), (0.0f), (0.0f), L_24, /*hidden argument*/NULL);
		// var f2_1 = new Vector3(0.0f, 0.0f, 0.0f);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_5), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// var f2_2 = new Vector3(-f2Size.x, 0.0f, f2Size.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = V_1;
		float L_26 = L_25.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_1;
		float L_28 = L_27.get_z_4();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_6), ((-L_26)), (0.0f), L_28, /*hidden argument*/NULL);
		// var f2_3 = new Vector3(-f2Size.x, 0.0f, 0.0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = V_1;
		float L_30 = L_29.get_x_2();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_7), ((-L_30)), (0.0f), (0.0f), /*hidden argument*/NULL);
		// var f2_4 = new Vector3(0.0f, 0.0f, f2Size.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = V_1;
		float L_32 = L_31.get_z_4();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_8), (0.0f), (0.0f), L_32, /*hidden argument*/NULL);
		// var f1Inverse = f1Transform.inverse;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_33;
		L_33 = Matrix4x4_get_inverse_mFA34ECC790B269522F60FC32370D628DAFCAE225((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&___f1Transform2), /*hidden argument*/NULL);
		V_9 = L_33;
		// var s1 = f1Inverse.MultiplyPoint(f2Transform.MultiplyPoint(f2_1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&___f2Transform3), L_34, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_9), L_35, /*hidden argument*/NULL);
		// var s2 = f1Inverse.MultiplyPoint(f2Transform.MultiplyPoint(f2_2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&___f2Transform3), L_37, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_9), L_38, /*hidden argument*/NULL);
		V_10 = L_39;
		// var s3 = f1Inverse.MultiplyPoint(f2Transform.MultiplyPoint(f2_3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = V_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&___f2Transform3), L_40, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_9), L_41, /*hidden argument*/NULL);
		V_11 = L_42;
		// var s4 = f1Inverse.MultiplyPoint(f2Transform.MultiplyPoint(f2_4));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = V_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&___f2Transform3), L_43, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_9), L_44, /*hidden argument*/NULL);
		V_12 = L_45;
		// var sMinX = Mathf.Min(s1.x, Mathf.Min(s2.x, Mathf.Min(s3.x, s4.x)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = L_36;
		float L_47 = L_46.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48 = V_10;
		float L_49 = L_48.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50 = V_11;
		float L_51 = L_50.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52 = V_12;
		float L_53 = L_52.get_x_2();
		float L_54;
		L_54 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_51, L_53, /*hidden argument*/NULL);
		float L_55;
		L_55 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_49, L_54, /*hidden argument*/NULL);
		float L_56;
		L_56 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_47, L_55, /*hidden argument*/NULL);
		V_13 = L_56;
		// var sMinZ = Mathf.Min(s1.z, Mathf.Min(s2.z, Mathf.Min(s3.z, s4.z)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57 = L_46;
		float L_58 = L_57.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59 = V_10;
		float L_60 = L_59.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61 = V_11;
		float L_62 = L_61.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63 = V_12;
		float L_64 = L_63.get_z_4();
		float L_65;
		L_65 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_62, L_64, /*hidden argument*/NULL);
		float L_66;
		L_66 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_60, L_65, /*hidden argument*/NULL);
		float L_67;
		L_67 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_58, L_66, /*hidden argument*/NULL);
		V_14 = L_67;
		// var sMaxX = Mathf.Max(s1.x, Mathf.Max(s2.x, Mathf.Max(s3.x, s4.x)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68 = L_57;
		float L_69 = L_68.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70 = V_10;
		float L_71 = L_70.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72 = V_11;
		float L_73 = L_72.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74 = V_12;
		float L_75 = L_74.get_x_2();
		float L_76;
		L_76 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_73, L_75, /*hidden argument*/NULL);
		float L_77;
		L_77 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_71, L_76, /*hidden argument*/NULL);
		float L_78;
		L_78 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_69, L_77, /*hidden argument*/NULL);
		V_15 = L_78;
		// var sMaxZ = Mathf.Max(s1.z, Mathf.Max(s2.z, Mathf.Max(s3.z, s4.z)));
		float L_79 = L_68.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_80 = V_10;
		float L_81 = L_80.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82 = V_11;
		float L_83 = L_82.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_84 = V_12;
		float L_85 = L_84.get_z_4();
		float L_86;
		L_86 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_83, L_85, /*hidden argument*/NULL);
		float L_87;
		L_87 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_81, L_86, /*hidden argument*/NULL);
		float L_88;
		L_88 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_79, L_87, /*hidden argument*/NULL);
		V_16 = L_88;
		// var fMinX = Mathf.Min(f1_1.x, Mathf.Min(f1_2.x, Mathf.Min(f1_3.x, f1_4.x)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89 = L_16;
		float L_90 = L_89.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_91 = V_2;
		float L_92 = L_91.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_93 = V_3;
		float L_94 = L_93.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95 = V_4;
		float L_96 = L_95.get_x_2();
		float L_97;
		L_97 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_94, L_96, /*hidden argument*/NULL);
		float L_98;
		L_98 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_92, L_97, /*hidden argument*/NULL);
		float L_99;
		L_99 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_90, L_98, /*hidden argument*/NULL);
		V_17 = L_99;
		// var fMinZ = Mathf.Min(f1_1.z, Mathf.Min(f1_2.z, Mathf.Min(f1_3.z, f1_4.z)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_100 = L_89;
		float L_101 = L_100.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_102 = V_2;
		float L_103 = L_102.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_104 = V_3;
		float L_105 = L_104.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_106 = V_4;
		float L_107 = L_106.get_z_4();
		float L_108;
		L_108 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_105, L_107, /*hidden argument*/NULL);
		float L_109;
		L_109 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_103, L_108, /*hidden argument*/NULL);
		float L_110;
		L_110 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_101, L_109, /*hidden argument*/NULL);
		V_18 = L_110;
		// var fMaxX = Mathf.Max(f1_1.x, Mathf.Max(f1_2.x, Mathf.Max(f1_3.x, f1_4.x)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_111 = L_100;
		float L_112 = L_111.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_113 = V_2;
		float L_114 = L_113.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_115 = V_3;
		float L_116 = L_115.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_117 = V_4;
		float L_118 = L_117.get_x_2();
		float L_119;
		L_119 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_116, L_118, /*hidden argument*/NULL);
		float L_120;
		L_120 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_114, L_119, /*hidden argument*/NULL);
		float L_121;
		L_121 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_112, L_120, /*hidden argument*/NULL);
		V_19 = L_121;
		// var fMaxZ = Mathf.Max(f1_1.z, Mathf.Max(f1_2.z, Mathf.Max(f1_3.z, f1_4.z)));
		float L_122 = L_111.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_123 = V_2;
		float L_124 = L_123.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_125 = V_3;
		float L_126 = L_125.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_127 = V_4;
		float L_128 = L_127.get_z_4();
		float L_129;
		L_129 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_126, L_128, /*hidden argument*/NULL);
		float L_130;
		L_130 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_124, L_129, /*hidden argument*/NULL);
		float L_131;
		L_131 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_122, L_130, /*hidden argument*/NULL);
		V_20 = L_131;
		// if (sMinX > fMaxX || fMinX > sMaxX || sMinZ > fMaxZ || fMinZ > sMaxZ)
		float L_132 = V_13;
		float L_133 = V_19;
		if ((((float)L_132) > ((float)L_133)))
		{
			goto IL_02d1;
		}
	}
	{
		float L_134 = V_17;
		float L_135 = V_15;
		if ((((float)L_134) > ((float)L_135)))
		{
			goto IL_02d1;
		}
	}
	{
		float L_136 = V_14;
		float L_137 = V_20;
		if ((((float)L_136) > ((float)L_137)))
		{
			goto IL_02d1;
		}
	}
	{
		float L_138 = V_18;
		float L_139 = V_16;
		if ((!(((float)L_138) > ((float)L_139))))
		{
			goto IL_02eb;
		}
	}

IL_02d1:
	{
		// min = Vector2Int.zero;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_140 = ___min4;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_141;
		L_141 = Vector2Int_get_zero_m89F24AE488182BAB38B381B445B8868B3DD5A2AE(/*hidden argument*/NULL);
		*(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_140 = L_141;
		// max = Vector2Int.zero;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_142 = ___max5;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_143;
		L_143 = Vector2Int_get_zero_m89F24AE488182BAB38B381B445B8868B3DD5A2AE(/*hidden argument*/NULL);
		*(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_142 = L_143;
		// return false;
		return (bool)0;
	}

IL_02eb:
	{
		// var minX = Mathf.RoundToInt(Mathf.Max(sMinX, fMinX) / BrickBuildingUtility.LU_5);
		float L_144 = V_13;
		float L_145 = V_17;
		float L_146;
		L_146 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_144, L_145, /*hidden argument*/NULL);
		int32_t L_147;
		L_147 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)((float)L_146/(float)(0.399999976f))), /*hidden argument*/NULL);
		V_21 = L_147;
		// var maxX = Mathf.RoundToInt(Mathf.Min(sMaxX, fMaxX) / BrickBuildingUtility.LU_5);
		float L_148 = V_15;
		float L_149 = V_19;
		float L_150;
		L_150 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_148, L_149, /*hidden argument*/NULL);
		int32_t L_151;
		L_151 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)((float)L_150/(float)(0.399999976f))), /*hidden argument*/NULL);
		V_22 = L_151;
		// var minZ = Mathf.RoundToInt(Mathf.Max(sMinZ, fMinZ) / BrickBuildingUtility.LU_5);
		float L_152 = V_14;
		float L_153 = V_18;
		float L_154;
		L_154 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_152, L_153, /*hidden argument*/NULL);
		int32_t L_155;
		L_155 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)((float)L_154/(float)(0.399999976f))), /*hidden argument*/NULL);
		V_23 = L_155;
		// var maxZ = Mathf.RoundToInt(Mathf.Min(sMaxZ, fMaxZ) / BrickBuildingUtility.LU_5);
		float L_156 = V_16;
		float L_157 = V_20;
		float L_158;
		L_158 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_156, L_157, /*hidden argument*/NULL);
		int32_t L_159;
		L_159 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)((float)L_158/(float)(0.399999976f))), /*hidden argument*/NULL);
		V_24 = L_159;
		// min = new Vector2Int(minX, minZ);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_160 = ___min4;
		int32_t L_161 = V_21;
		int32_t L_162 = V_23;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_163;
		memset((&L_163), 0, sizeof(L_163));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_163), L_161, L_162, /*hidden argument*/NULL);
		*(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_160 = L_163;
		// max = new Vector2Int(maxX, maxZ);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_164 = ___max5;
		int32_t L_165 = V_22;
		int32_t L_166 = V_24;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_167;
		memset((&L_167), 0, sizeof(L_167));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_167), L_165, L_166, /*hidden argument*/NULL);
		*(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_164 = L_167;
		// return true;
		return (bool)1;
	}
}
// System.Void LEGOModelImporter.PlanarField::GetConnectedTransformation(LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarField_GetConnectedTransformation_m22A33AB0612F2AF496FDF21879824A86D612946D (PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * ___src0, PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * ___dst1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pivot2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___offset3, float* ___angle4, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___axis5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (src.field == null || dst.field == null)
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_0 = ___src0;
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_1 = ((Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 *)L_0)->get_field_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_3 = ___dst1;
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_4 = ((Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 *)L_3)->get_field_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}

IL_001c:
	{
		// offset = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_6 = ___offset3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_6 = L_7;
		// angle = 0.0f;
		float* L_8 = ___angle4;
		*((float*)L_8) = (float)(0.0f);
		// axis = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = ___axis5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_9 = L_10;
		// return;
		return;
	}

IL_003c:
	{
		// AlignRotation(src.field.transform.localToWorldMatrix, dst.field.transform.localToWorldMatrix, out Quaternion rot);
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_11 = ___src0;
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_12 = ((Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 *)L_11)->get_field_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_14;
		L_14 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC(L_13, /*hidden argument*/NULL);
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_15 = ___dst1;
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_16 = ((Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 *)L_15)->get_field_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_16, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_18;
		L_18 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC(L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = PlanarField_AlignRotation_mAA5F4EDABD9DCB6720894545F50E941C2FDB0468(L_14, L_18, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_0), /*hidden argument*/NULL);
		// rot.ToAngleAxis(out angle, out axis);
		float* L_20 = ___angle4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_21 = ___axis5;
		Quaternion_ToAngleAxis_m4282D6D010AFDC7F8F4E1EB2558A298D5E3BCBEE_inline((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_0), (float*)L_20, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_21, /*hidden argument*/NULL);
		// var srcPosition = (rot * (src.GetPosition() - pivot)) + pivot;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_22 = V_0;
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_23 = ___src0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = PlanarFeature_GetPosition_m398B3DFF11F85F34F18E35F057E24013DB543DA8(L_23, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = ___pivot2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_24, L_25, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_22, L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = ___pivot2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_27, L_28, /*hidden argument*/NULL);
		V_1 = L_29;
		// var dstPosition = dst.GetPosition();
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_30 = ___dst1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = PlanarFeature_GetPosition_m398B3DFF11F85F34F18E35F057E24013DB543DA8(L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		// offset = dstPosition - srcPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_32 = ___offset3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_33, L_34, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_32 = L_35;
		// }
		return;
	}
}
// System.Collections.Generic.List`1<System.Int32> LEGOModelImporter.PlanarField::GetConnectedConnections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * PlanarField_GetConnectedConnections_m78B59C683E10A59630A4A6261984EE16839F98C3 (PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * __this, const RuntimeMethod* method)
{
	{
		// return connected;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = __this->get_connected_7();
		return L_0;
	}
}
// System.Boolean LEGOModelImporter.PlanarField::HasAvailableConnections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarField_HasAvailableConnections_m3060485697696CB23EC3696E78CBAB0393EEF5FC (PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return connected.Count < connectableConnections;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = __this->get_connected_7();
		int32_t L_1;
		L_1 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_0, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		int32_t L_2 = __this->get_connectableConnections_8();
		return (bool)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
	}
}
// System.Void LEGOModelImporter.PlanarField::OnConnectionChanged(LEGOModelImporter.PlanarFeature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarField_OnConnectionChanged_m51A5D6875A1634E1AED86CD7DE8C1F1E4615E3E4 (PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * __this, PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * ___connection0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var index = connection.index;
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_0 = ___connection0;
		int32_t L_1 = L_0->get_index_5();
		V_0 = L_1;
		// if(connection.HasConnection())
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_2 = ___connection0;
		bool L_3;
		L_3 = PlanarFeature_HasConnection_m808FBBDA3F64ED6C1612E1D65B2C04672329081F(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// if(!connected.Contains(index))
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_4 = __this->get_connected_7();
		int32_t L_5 = V_0;
		bool L_6;
		L_6 = List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2(L_4, L_5, /*hidden argument*/List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0045;
		}
	}
	{
		// connected.Add(index);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_7 = __this->get_connected_7();
		int32_t L_8 = V_0;
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_7, L_8, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// }
		return;
	}

IL_002a:
	{
		// if(connected.Contains(index))
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_9 = __this->get_connected_7();
		int32_t L_10 = V_0;
		bool L_11;
		L_11 = List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2(L_9, L_10, /*hidden argument*/List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_0045;
		}
	}
	{
		// connected.Remove(index);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_12 = __this->get_connected_7();
		int32_t L_13 = V_0;
		bool L_14;
		L_14 = List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F(L_12, L_13, /*hidden argument*/List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F_RuntimeMethod_var);
	}

IL_0045:
	{
		// }
		return;
	}
}
// LEGOModelImporter.PlanarFeature LEGOModelImporter.PlanarField::GetConnection(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * PlanarField_GetConnection_m180AAC326845CE5303ED676D2CD90A354D2B5A2E (PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * V_0 = NULL;
	{
		// if(index < 0 || index >= connections.Length)
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___index0;
		PlanarFeatureU5BU5D_tBC900E26A810AE80A97E3E8D3610EAE6CB31145B* L_2 = __this->get_connections_6();
		if ((((int32_t)L_1) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0011;
		}
	}

IL_000f:
	{
		// return null;
		return (PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 *)NULL;
	}

IL_0011:
	{
		// var entry = connectedTo[index];
		ConnectionTupleU5BU5D_t80F8B02DEBE727BD9FA89FE2E09F0CF9815F7D97* L_3 = __this->get_connectedTo_9();
		int32_t L_4 = ___index0;
		int32_t L_5 = L_4;
		ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		// if(entry == null || !entry.field)
		ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * L_7 = V_0;
		if (!L_7)
		{
			goto IL_002a;
		}
	}
	{
		ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * L_8 = V_0;
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_9 = L_8->get_field_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_002c;
		}
	}

IL_002a:
	{
		// return null;
		return (PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 *)NULL;
	}

IL_002c:
	{
		// return entry.field.connections[entry.indexOfConnection];
		ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * L_11 = V_0;
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_12 = L_11->get_field_0();
		PlanarFeatureU5BU5D_tBC900E26A810AE80A97E3E8D3610EAE6CB31145B* L_13 = L_12->get_connections_6();
		ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * L_14 = V_0;
		int32_t L_15 = L_14->get_indexOfConnection_1();
		int32_t L_16 = L_15;
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_17 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		return L_17;
	}
}
// System.Void LEGOModelImporter.PlanarField::Connect(LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarField_Connect_m12FB14B1C04ABF8EB4810A704BF8DB80977085FC (PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * __this, PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * ___src0, PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * ___dst1, bool ___updateKnobsAndTubes2, const RuntimeMethod* method)
{
	{
		// Connect(src.index, dst, updateKnobsAndTubes);
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_0 = ___src0;
		int32_t L_1 = L_0->get_index_5();
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_2 = ___dst1;
		bool L_3 = ___updateKnobsAndTubes2;
		PlanarField_Connect_mC3A89F7F89C27E8B944465F3E768EF8B7431FDFE(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2Int LEGOModelImporter.PlanarField::ToGridPos(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  PlanarField_ToGridPos_m1400D5DD1D663A102513139264A56492B01CC42B (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPos0, const RuntimeMethod* method)
{
	{
		// return new Vector2Int(Mathf.RoundToInt(localPos.x / BrickBuildingUtility.LU_5) * -1, Mathf.RoundToInt(localPos.z / BrickBuildingUtility.LU_5));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___localPos0;
		float L_1 = L_0.get_x_2();
		int32_t L_2;
		L_2 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)((float)L_1/(float)(0.399999976f))), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___localPos0;
		float L_4 = L_3.get_z_4();
		int32_t L_5;
		L_5 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)((float)L_4/(float)(0.399999976f))), /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_6), ((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)(-1))), L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// LEGOModelImporter.PlanarFeature LEGOModelImporter.PlanarField::GetConnectionAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * PlanarField_GetConnectionAt_m536BD2208FF22106D084B0485F60DEA1E1E75E71 (PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPos0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var localPos = transform.InverseTransformPoint(worldPos);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___worldPos0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// return GetConnectionAt(ToGridPos(localPos));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = V_0;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_4;
		L_4 = PlanarField_ToGridPos_m1400D5DD1D663A102513139264A56492B01CC42B(L_3, /*hidden argument*/NULL);
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_5;
		L_5 = PlanarField_GetConnectionAt_m20597BF9520137B32BA448206D6045B7F5336495(__this, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// LEGOModelImporter.PlanarFeature LEGOModelImporter.PlanarField::GetConnectionAt(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * PlanarField_GetConnectionAt_m20597BF9520137B32BA448206D6045B7F5336495 (PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___gridPos0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if(gridPos.x > gridSize.x + 1 || gridPos.y > gridSize.y + 1 ||
		//     gridPos.x < 0 || gridPos.y < 0)
		int32_t L_0;
		L_0 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___gridPos0), /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_1 = __this->get_address_of_gridSize_10();
		int32_t L_2;
		L_2 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_0) > ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_3;
		L_3 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___gridPos0), /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_4 = __this->get_address_of_gridSize_10();
		int32_t L_5;
		L_5 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_3) > ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_6;
		L_6 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___gridPos0), /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_7;
		L_7 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___gridPos0), /*hidden argument*/NULL);
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}

IL_0040:
	{
		// return null;
		return (PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 *)NULL;
	}

IL_0042:
	{
		// var index = GetIndex(gridPos);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_8 = ___gridPos0;
		int32_t L_9;
		L_9 = PlanarField_GetIndex_m1B88267B6E69EF29ED7849419037653881FF6477(__this, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// if(index >= connections.Length || index < 0)
		int32_t L_10 = V_0;
		PlanarFeatureU5BU5D_tBC900E26A810AE80A97E3E8D3610EAE6CB31145B* L_11 = __this->get_connections_6();
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_005b;
		}
	}

IL_0059:
	{
		// return null;
		return (PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 *)NULL;
	}

IL_005b:
	{
		// return connections[index];
		PlanarFeatureU5BU5D_tBC900E26A810AE80A97E3E8D3610EAE6CB31145B* L_13 = __this->get_connections_6();
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		return L_16;
	}
}
// System.Int32 LEGOModelImporter.PlanarField::GetIndex(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlanarField_GetIndex_m1B88267B6E69EF29ED7849419037653881FF6477 (PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___gridPos0, const RuntimeMethod* method)
{
	{
		// return gridPos.x + (gridSize.x + 1) * gridPos.y;
		int32_t L_0;
		L_0 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___gridPos0), /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_1 = __this->get_address_of_gridSize_10();
		int32_t L_2;
		L_2 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_1, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___gridPos0), /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)), (int32_t)L_3))));
	}
}
// UnityEngine.Vector3 LEGOModelImporter.PlanarField::GetPosition(LEGOModelImporter.PlanarFeature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PlanarField_GetPosition_m0C60AD9C05965F971872CE76ADA13FCDEC3016BD (PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * __this, PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * ___connection0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// var row = connection.index % (gridSize.x + 1);
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_0 = ___connection0;
		int32_t L_1 = L_0->get_index_5();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_2 = __this->get_address_of_gridSize_10();
		int32_t L_3;
		L_3 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_2, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_1%(int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1))));
		// var column = connection.index / (gridSize.x + 1);
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_4 = ___connection0;
		int32_t L_5 = L_4->get_index_5();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_6 = __this->get_address_of_gridSize_10();
		int32_t L_7;
		L_7 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_6, /*hidden argument*/NULL);
		// var x = row * -BrickBuildingUtility.LU_5;
		int32_t L_8 = V_0;
		V_1 = ((float)il2cpp_codegen_multiply((float)((float)((float)L_8)), (float)(-0.399999976f)));
		// var z = column * BrickBuildingUtility.LU_5;
		V_2 = ((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)((int32_t)L_5/(int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)))))), (float)(0.399999976f)));
		// var worldPos = transform.TransformPoint(new Vector3(x, 0.0f, z));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_10 = V_1;
		float L_11 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), L_10, (0.0f), L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_9, L_12, /*hidden argument*/NULL);
		// return worldPos;
		return L_13;
	}
}
// System.Boolean LEGOModelImporter.PlanarField::AlignRotation(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarField_AlignRotation_mAA5F4EDABD9DCB6720894545F50E941C2FDB0468 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___source0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___destination1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___resultRotation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var srcForward = MathUtils.GetColumn(source, 0);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0 = ___source0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = MathUtils_GetColumn_m3D8B6FC2507F32D6210A72790C619B5372AB728D(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var srcUp = MathUtils.GetColumn(source, 1);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_2 = ___source0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = MathUtils_GetColumn_m3D8B6FC2507F32D6210A72790C619B5372AB728D(L_2, 1, /*hidden argument*/NULL);
		V_1 = L_3;
		// var srcRight = MathUtils.GetColumn(source, 2);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_4 = ___source0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = MathUtils_GetColumn_m3D8B6FC2507F32D6210A72790C619B5372AB728D(L_4, 2, /*hidden argument*/NULL);
		V_2 = L_5;
		// var dstUp = MathUtils.GetColumn(destination, 1);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_6 = ___destination1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = MathUtils_GetColumn_m3D8B6FC2507F32D6210A72790C619B5372AB728D(L_6, 1, /*hidden argument*/NULL);
		V_3 = L_7;
		// var cosAngle = Vector3.Dot(srcUp, dstUp);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_3;
		float L_10;
		L_10 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_8, L_9, /*hidden argument*/NULL);
		// if (cosAngle < BrickBuildingUtility.Cos80)
		if ((!(((float)L_10) < ((float)(0.173611999f)))))
		{
			goto IL_003b;
		}
	}
	{
		// resultRotation = Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_11 = ___resultRotation2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		L_12 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_11 = L_12;
		// return false;
		return (bool)0;
	}

IL_003b:
	{
		// Quaternion alignedRotation = Quaternion.FromToRotation(srcUp, dstUp);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_3;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15;
		L_15 = Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80(L_13, L_14, /*hidden argument*/NULL);
		V_4 = L_15;
		// srcForward = alignedRotation * srcForward;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_16, L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		// srcRight = alignedRotation * srcRight;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_19, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
		// resultRotation = MathUtils.AlignRotation(destination, srcRight, srcForward);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_22 = ___resultRotation2;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_23 = ___destination1;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_24 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)2);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_25 = L_24;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = V_2;
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_26);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_27 = L_25;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = V_0;
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_28);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_29;
		L_29 = MathUtils_AlignRotation_m0098F3322C8D47A211F7FF55AAB8035C7F11AD0D(L_23, L_27, /*hidden argument*/NULL);
		*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_22 = L_29;
		// resultRotation *= alignedRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_30 = ___resultRotation2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_31 = ___resultRotation2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_32 = (*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_31);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_33 = V_4;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_34;
		L_34 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_32, L_33, /*hidden argument*/NULL);
		*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_30 = L_34;
		// return true;
		return (bool)1;
	}
}
// System.Collections.Generic.HashSet`1<System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>> LEGOModelImporter.PlanarField::GetConnectionsOnOverlap(LEGOModelImporter.PlanarField,LEGOModelImporter.PlanarField,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Vector2Int,UnityEngine.Vector2Int,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3 * PlanarField_GetConnectionsOnOverlap_mC3EB086B23235728EB27F7E19F0954250C223118 (PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * ___lhs0, PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * ___rhs1, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___lhsTransformation2, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___rhsTransformation3, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___min4, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___max5, bool* ___reject6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mEE5C2C6FFD1C4DF64BCCA3972352B78FE4FF1B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Clear_m480D16A39C17FA7EAE3DBA201077B9955841B37D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mEA02ECDF08DE797E2DA2CAF23CF363D6CFB67889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mFF3538F7A84D1D0A9AF7312B4D28100580E26E2F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3 * V_0 = NULL;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * V_6 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * V_10 = NULL;
	int32_t V_11 = 0;
	{
		// reject = false;
		bool* L_0 = ___reject6;
		*((int8_t*)L_0) = (int8_t)0;
		// HashSet<(PlanarFeature, PlanarFeature)> validConnections = new HashSet<(PlanarFeature, PlanarFeature)>();
		HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3 * L_1 = (HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3 *)il2cpp_codegen_object_new(HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mEA02ECDF08DE797E2DA2CAF23CF363D6CFB67889(L_1, /*hidden argument*/HashSet_1__ctor_mEA02ECDF08DE797E2DA2CAF23CF363D6CFB67889_RuntimeMethod_var);
		V_0 = L_1;
		// var rhsInverse = rhsTransformation.inverse;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_2;
		L_2 = Matrix4x4_get_inverse_mFA34ECC790B269522F60FC32370D628DAFCAE225((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&___rhsTransformation3), /*hidden argument*/NULL);
		V_1 = L_2;
		// for (int xDst = 0; xDst < Mathf.Abs(max.x - min.x) + 1; xDst++)
		V_2 = 0;
		goto IL_0117;
	}

IL_0019:
	{
		// for (int zDst = 0; zDst < Mathf.Abs(max.y - min.y) + 1; zDst++)
		V_3 = 0;
		goto IL_00f7;
	}

IL_0020:
	{
		// var posLhs = min + new Vector2Int(xDst, zDst);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_3 = ___min4;
		int32_t L_4 = V_2;
		int32_t L_5 = V_3;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_6), L_4, L_5, /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_7;
		L_7 = Vector2Int_op_Addition_mD8F595C79642BE4C542F070C7D65C255D1A19C29_inline(L_3, L_6, /*hidden argument*/NULL);
		V_4 = L_7;
		// posLhs.x = -posLhs.x;
		int32_t L_8;
		L_8 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_4), /*hidden argument*/NULL);
		Vector2Int_set_x_m58F3B1895453A0A4BC964CA331D56B7C3D873B7C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_4), ((-L_8)), /*hidden argument*/NULL);
		// var lhsIndex = lhs.GetIndex(posLhs);
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_9 = ___lhs0;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_10 = V_4;
		int32_t L_11;
		L_11 = PlanarField_GetIndex_m1B88267B6E69EF29ED7849419037653881FF6477(L_9, L_10, /*hidden argument*/NULL);
		V_5 = L_11;
		// var lhsConnection = lhs.connections[lhsIndex];
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_12 = ___lhs0;
		PlanarFeatureU5BU5D_tBC900E26A810AE80A97E3E8D3610EAE6CB31145B* L_13 = L_12->get_connections_6();
		int32_t L_14 = V_5;
		int32_t L_15 = L_14;
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		// if (lhsConnection != null && !lhsConnection.HasConnection())
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_17 = V_6;
		if (!L_17)
		{
			goto IL_00f3;
		}
	}
	{
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_18 = V_6;
		bool L_19;
		L_19 = PlanarFeature_HasConnection_m808FBBDA3F64ED6C1612E1D65B2C04672329081F(L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00f3;
		}
	}
	{
		// var worldPos = lhsConnection.GetPosition();
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_20 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = PlanarFeature_GetPosition_m398B3DFF11F85F34F18E35F057E24013DB543DA8(L_20, /*hidden argument*/NULL);
		V_7 = L_21;
		// var localPos = rhsInverse.MultiplyPoint(worldPos);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_1), L_22, /*hidden argument*/NULL);
		V_8 = L_23;
		// var index = rhs.GetIndex(ToGridPos(localPos));
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_24 = ___rhs1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = V_8;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_26;
		L_26 = PlanarField_ToGridPos_m1400D5DD1D663A102513139264A56492B01CC42B(L_25, /*hidden argument*/NULL);
		int32_t L_27;
		L_27 = PlanarField_GetIndex_m1B88267B6E69EF29ED7849419037653881FF6477(L_24, L_26, /*hidden argument*/NULL);
		V_9 = L_27;
		// if (index >= rhs.connections.Length || index < 0)
		int32_t L_28 = V_9;
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_29 = ___rhs1;
		PlanarFeatureU5BU5D_tBC900E26A810AE80A97E3E8D3610EAE6CB31145B* L_30 = L_29->get_connections_6();
		if ((((int32_t)L_28) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))))))
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_31 = V_9;
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_00f3;
		}
	}
	{
		// var rhsConnection = rhs.connections[index];
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_32 = ___rhs1;
		PlanarFeatureU5BU5D_tBC900E26A810AE80A97E3E8D3610EAE6CB31145B* L_33 = L_32->get_connections_6();
		int32_t L_34 = V_9;
		int32_t L_35 = L_34;
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		V_10 = L_36;
		// if (rhsConnection != null && !rhsConnection.HasConnection())
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_37 = V_10;
		if (!L_37)
		{
			goto IL_00f3;
		}
	}
	{
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_38 = V_10;
		bool L_39;
		L_39 = PlanarFeature_HasConnection_m808FBBDA3F64ED6C1612E1D65B2C04672329081F(L_38, /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_00f3;
		}
	}
	{
		// var pairMatch = lhsConnection.MatchTypes(rhsConnection);
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_40 = V_6;
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_41 = V_10;
		int32_t L_42;
		L_42 = VirtFuncInvoker1< int32_t, Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 * >::Invoke(4 /* LEGOModelImporter.Connection/ConnectionInteraction LEGOModelImporter.Connection::MatchTypes(LEGOModelImporter.Connection) */, L_40, L_41);
		V_11 = L_42;
		// if (pairMatch == Connection.ConnectionInteraction.Ignore)
		int32_t L_43 = V_11;
		if ((((int32_t)L_43) == ((int32_t)1)))
		{
			goto IL_00f3;
		}
	}
	{
		// else if (pairMatch == Connection.ConnectionInteraction.Reject)
		int32_t L_44 = V_11;
		if (L_44)
		{
			goto IL_00e3;
		}
	}
	{
		// reject = true;
		bool* L_45 = ___reject6;
		*((int8_t*)L_45) = (int8_t)1;
		// validConnections.Clear();
		HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3 * L_46 = V_0;
		HashSet_1_Clear_m480D16A39C17FA7EAE3DBA201077B9955841B37D(L_46, /*hidden argument*/HashSet_1_Clear_m480D16A39C17FA7EAE3DBA201077B9955841B37D_RuntimeMethod_var);
		// validConnections.Add((rhsConnection, lhsConnection));
		HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3 * L_47 = V_0;
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_48 = V_10;
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_49 = V_6;
		ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  L_50;
		memset((&L_50), 0, sizeof(L_50));
		ValueTuple_2__ctor_mFF3538F7A84D1D0A9AF7312B4D28100580E26E2F((&L_50), L_48, L_49, /*hidden argument*/ValueTuple_2__ctor_mFF3538F7A84D1D0A9AF7312B4D28100580E26E2F_RuntimeMethod_var);
		bool L_51;
		L_51 = HashSet_1_Add_mEE5C2C6FFD1C4DF64BCCA3972352B78FE4FF1B4A(L_47, L_50, /*hidden argument*/HashSet_1_Add_mEE5C2C6FFD1C4DF64BCCA3972352B78FE4FF1B4A_RuntimeMethod_var);
		// return validConnections;
		HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3 * L_52 = V_0;
		return L_52;
	}

IL_00e3:
	{
		// validConnections.Add((rhsConnection, lhsConnection));
		HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3 * L_53 = V_0;
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_54 = V_10;
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_55 = V_6;
		ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  L_56;
		memset((&L_56), 0, sizeof(L_56));
		ValueTuple_2__ctor_mFF3538F7A84D1D0A9AF7312B4D28100580E26E2F((&L_56), L_54, L_55, /*hidden argument*/ValueTuple_2__ctor_mFF3538F7A84D1D0A9AF7312B4D28100580E26E2F_RuntimeMethod_var);
		bool L_57;
		L_57 = HashSet_1_Add_mEE5C2C6FFD1C4DF64BCCA3972352B78FE4FF1B4A(L_53, L_56, /*hidden argument*/HashSet_1_Add_mEE5C2C6FFD1C4DF64BCCA3972352B78FE4FF1B4A_RuntimeMethod_var);
	}

IL_00f3:
	{
		// for (int zDst = 0; zDst < Mathf.Abs(max.y - min.y) + 1; zDst++)
		int32_t L_58 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
	}

IL_00f7:
	{
		// for (int zDst = 0; zDst < Mathf.Abs(max.y - min.y) + 1; zDst++)
		int32_t L_59 = V_3;
		int32_t L_60;
		L_60 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___max5), /*hidden argument*/NULL);
		int32_t L_61;
		L_61 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___min4), /*hidden argument*/NULL);
		int32_t L_62;
		L_62 = Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0(((int32_t)il2cpp_codegen_subtract((int32_t)L_60, (int32_t)L_61)), /*hidden argument*/NULL);
		if ((((int32_t)L_59) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1)))))
		{
			goto IL_0020;
		}
	}
	{
		// for (int xDst = 0; xDst < Mathf.Abs(max.x - min.x) + 1; xDst++)
		int32_t L_63 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
	}

IL_0117:
	{
		// for (int xDst = 0; xDst < Mathf.Abs(max.x - min.x) + 1; xDst++)
		int32_t L_64 = V_2;
		int32_t L_65;
		L_65 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___max5), /*hidden argument*/NULL);
		int32_t L_66;
		L_66 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___min4), /*hidden argument*/NULL);
		int32_t L_67;
		L_67 = Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0(((int32_t)il2cpp_codegen_subtract((int32_t)L_65, (int32_t)L_66)), /*hidden argument*/NULL);
		if ((((int32_t)L_64) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1)))))
		{
			goto IL_0019;
		}
	}
	{
		// return validConnections;
		HashSet_1_t8BB8B28362F7A186D3CFD4CDFE81E8D61304FAB3 * L_68 = V_0;
		return L_68;
	}
}
// System.Void LEGOModelImporter.PlanarField::Disconnect(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarField_Disconnect_mB720B796126A8EB74E8A4AC70B62BB9131F604CA (PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * __this, int32_t ___index0, bool ___updateKnobsAndTubes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if(index >= connectedTo.Length)
		int32_t L_0 = ___index0;
		ConnectionTupleU5BU5D_t80F8B02DEBE727BD9FA89FE2E09F0CF9815F7D97* L_1 = __this->get_connectedTo_9();
		if ((((int32_t)L_0) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_000c;
		}
	}
	{
		// return;
		return;
	}

IL_000c:
	{
		// var entry = connectedTo[index];
		ConnectionTupleU5BU5D_t80F8B02DEBE727BD9FA89FE2E09F0CF9815F7D97* L_2 = __this->get_connectedTo_9();
		int32_t L_3 = ___index0;
		int32_t L_4 = L_3;
		ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		// var otherField = entry.field;
		ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * L_6 = L_5;
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_7 = L_6->get_field_0();
		V_0 = L_7;
		// var indexOfConnection = entry.indexOfConnection;
		int32_t L_8 = L_6->get_indexOfConnection_1();
		V_1 = L_8;
		// if(!otherField)
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_002a;
		}
	}
	{
		// return;
		return;
	}

IL_002a:
	{
		// connectedTo[index].field = null;
		ConnectionTupleU5BU5D_t80F8B02DEBE727BD9FA89FE2E09F0CF9815F7D97* L_11 = __this->get_connectedTo_9();
		int32_t L_12 = ___index0;
		int32_t L_13 = L_12;
		ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		L_14->set_field_0((PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 *)NULL);
		// connectedTo[index].indexOfConnection = -1;
		ConnectionTupleU5BU5D_t80F8B02DEBE727BD9FA89FE2E09F0CF9815F7D97* L_15 = __this->get_connectedTo_9();
		int32_t L_16 = ___index0;
		int32_t L_17 = L_16;
		ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		L_18->set_indexOfConnection_1((-1));
		// OnConnectionChanged(connections[index]);
		PlanarFeatureU5BU5D_tBC900E26A810AE80A97E3E8D3610EAE6CB31145B* L_19 = __this->get_connections_6();
		int32_t L_20 = ___index0;
		int32_t L_21 = L_20;
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		PlanarField_OnConnectionChanged_m51A5D6875A1634E1AED86CD7DE8C1F1E4615E3E4(__this, L_22, /*hidden argument*/NULL);
		// otherField.connectedTo[indexOfConnection].field = null;
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_23 = V_0;
		ConnectionTupleU5BU5D_t80F8B02DEBE727BD9FA89FE2E09F0CF9815F7D97* L_24 = L_23->get_connectedTo_9();
		int32_t L_25 = V_1;
		int32_t L_26 = L_25;
		ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		L_27->set_field_0((PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 *)NULL);
		// otherField.connectedTo[indexOfConnection].indexOfConnection = -1;
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_28 = V_0;
		ConnectionTupleU5BU5D_t80F8B02DEBE727BD9FA89FE2E09F0CF9815F7D97* L_29 = L_28->get_connectedTo_9();
		int32_t L_30 = V_1;
		int32_t L_31 = L_30;
		ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * L_32 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		L_32->set_indexOfConnection_1((-1));
		// otherField.OnConnectionChanged(otherField.connections[indexOfConnection]);
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_33 = V_0;
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_34 = V_0;
		PlanarFeatureU5BU5D_tBC900E26A810AE80A97E3E8D3610EAE6CB31145B* L_35 = L_34->get_connections_6();
		int32_t L_36 = V_1;
		int32_t L_37 = L_36;
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_38 = (L_35)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		PlanarField_OnConnectionChanged_m51A5D6875A1634E1AED86CD7DE8C1F1E4615E3E4(L_33, L_38, /*hidden argument*/NULL);
		// if(updateKnobsAndTubes)
		bool L_39 = ___updateKnobsAndTubes1;
		if (!L_39)
		{
			goto IL_009b;
		}
	}
	{
		// connections[index].UpdateKnobsAndTubes();
		PlanarFeatureU5BU5D_tBC900E26A810AE80A97E3E8D3610EAE6CB31145B* L_40 = __this->get_connections_6();
		int32_t L_41 = ___index0;
		int32_t L_42 = L_41;
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_43 = (L_40)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_42));
		PlanarFeature_UpdateKnobsAndTubes_m272C668B6E8A725AB110AAD72DD9A0E7242226DF(L_43, /*hidden argument*/NULL);
		// otherField.connections[indexOfConnection].UpdateKnobsAndTubes();
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_44 = V_0;
		PlanarFeatureU5BU5D_tBC900E26A810AE80A97E3E8D3610EAE6CB31145B* L_45 = L_44->get_connections_6();
		int32_t L_46 = V_1;
		int32_t L_47 = L_46;
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_48 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_47));
		PlanarFeature_UpdateKnobsAndTubes_m272C668B6E8A725AB110AAD72DD9A0E7242226DF(L_48, /*hidden argument*/NULL);
	}

IL_009b:
	{
		// }
		return;
	}
}
// System.Void LEGOModelImporter.PlanarField::Disconnect(LEGOModelImporter.PlanarFeature,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarField_Disconnect_mC9E0228E042E8CFF8C69EC04B646977018996A08 (PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * __this, PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * ___connection0, bool ___updateKnobsAndTubes1, const RuntimeMethod* method)
{
	{
		// if(connection.index >= connections.Length)
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_0 = ___connection0;
		int32_t L_1 = L_0->get_index_5();
		PlanarFeatureU5BU5D_tBC900E26A810AE80A97E3E8D3610EAE6CB31145B* L_2 = __this->get_connections_6();
		if ((((int32_t)L_1) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0011;
		}
	}
	{
		// return;
		return;
	}

IL_0011:
	{
		// Disconnect(connection.index, updateKnobsAndTubes);
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_3 = ___connection0;
		int32_t L_4 = L_3->get_index_5();
		bool L_5 = ___updateKnobsAndTubes1;
		PlanarField_Disconnect_mB720B796126A8EB74E8A4AC70B62BB9131F604CA(__this, L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LEGOModelImporter.PlanarField::Connect(System.Int32,LEGOModelImporter.PlanarFeature,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarField_Connect_mC3A89F7F89C27E8B944465F3E768EF8B7431FDFE (PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * __this, int32_t ___src0, PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * ___dst1, bool ___updateKnobsAndTubes2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * V_0 = NULL;
	ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if(src >= connections.Length)
		int32_t L_0 = ___src0;
		PlanarFeatureU5BU5D_tBC900E26A810AE80A97E3E8D3610EAE6CB31145B* L_1 = __this->get_connections_6();
		if ((((int32_t)L_0) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_000c;
		}
	}
	{
		// return;
		return;
	}

IL_000c:
	{
		// var srcConnection = connections[src];
		PlanarFeatureU5BU5D_tBC900E26A810AE80A97E3E8D3610EAE6CB31145B* L_2 = __this->get_connections_6();
		int32_t L_3 = ___src0;
		int32_t L_4 = L_3;
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		// if(dst != null && srcConnection.field == dst.field)
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_6 = ___dst1;
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_7 = V_0;
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_8 = ((Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 *)L_7)->get_field_0();
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_9 = ___dst1;
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_10 = ((Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 *)L_9)->get_field_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_002c;
		}
	}
	{
		// return;
		return;
	}

IL_002c:
	{
		// var entry = connectedTo[src];
		ConnectionTupleU5BU5D_t80F8B02DEBE727BD9FA89FE2E09F0CF9815F7D97* L_12 = __this->get_connectedTo_9();
		int32_t L_13 = ___src0;
		int32_t L_14 = L_13;
		ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = L_15;
		// if(dst != null && entry != null && dst.field == entry.field)
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_16 = ___dst1;
		if (!L_16)
		{
			goto IL_004f;
		}
	}
	{
		ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * L_17 = V_1;
		if (!L_17)
		{
			goto IL_004f;
		}
	}
	{
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_18 = ___dst1;
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_19 = ((Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 *)L_18)->get_field_0();
		ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * L_20 = V_1;
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_21 = L_20->get_field_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_19, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_004f;
		}
	}
	{
		// return;
		return;
	}

IL_004f:
	{
		// if(entry != null && entry.field != null)
		ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * L_23 = V_1;
		if (!L_23)
		{
			goto IL_0072;
		}
	}
	{
		ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * L_24 = V_1;
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_25 = L_24->get_field_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_25, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0072;
		}
	}
	{
		// entry.field.Disconnect(entry.indexOfConnection, updateKnobsAndTubes);
		ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * L_27 = V_1;
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_28 = L_27->get_field_0();
		ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * L_29 = V_1;
		int32_t L_30 = L_29->get_indexOfConnection_1();
		bool L_31 = ___updateKnobsAndTubes2;
		PlanarField_Disconnect_mB720B796126A8EB74E8A4AC70B62BB9131F604CA(L_28, L_30, L_31, /*hidden argument*/NULL);
	}

IL_0072:
	{
		// if(dst == null)
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_32 = ___dst1;
		if (L_32)
		{
			goto IL_0086;
		}
	}
	{
		// connectedTo[src] = null;
		ConnectionTupleU5BU5D_t80F8B02DEBE727BD9FA89FE2E09F0CF9815F7D97* L_33 = __this->get_connectedTo_9();
		int32_t L_34 = ___src0;
		ArrayElementTypeCheck (L_33, NULL);
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34), (ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F *)NULL);
		// OnConnectionChanged(srcConnection);
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_35 = V_0;
		PlanarField_OnConnectionChanged_m51A5D6875A1634E1AED86CD7DE8C1F1E4615E3E4(__this, L_35, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0086:
	{
		// var dstIndex = dst.index;
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_36 = ___dst1;
		int32_t L_37 = L_36->get_index_5();
		V_2 = L_37;
		// if(entry != null && entry.field == dst.field && entry.indexOfConnection == dstIndex)
		ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * L_38 = V_1;
		if (!L_38)
		{
			goto IL_00ad;
		}
	}
	{
		ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * L_39 = V_1;
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_40 = L_39->get_field_0();
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_41 = ___dst1;
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_42 = ((Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 *)L_41)->get_field_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_40, L_42, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_00ad;
		}
	}
	{
		ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * L_44 = V_1;
		int32_t L_45 = L_44->get_indexOfConnection_1();
		int32_t L_46 = V_2;
		if ((!(((uint32_t)L_45) == ((uint32_t)L_46))))
		{
			goto IL_00ad;
		}
	}
	{
		// return;
		return;
	}

IL_00ad:
	{
		// connectedTo[src] = new ConnectionTuple{field = dst.Field, indexOfConnection = dstIndex};
		ConnectionTupleU5BU5D_t80F8B02DEBE727BD9FA89FE2E09F0CF9815F7D97* L_47 = __this->get_connectedTo_9();
		int32_t L_48 = ___src0;
		ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * L_49 = (ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F *)il2cpp_codegen_object_new(ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F_il2cpp_TypeInfo_var);
		ConnectionTuple__ctor_m108DC725639DDA52DDCFF0817F5C25AAFD9763B8(L_49, /*hidden argument*/NULL);
		ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * L_50 = L_49;
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_51 = ___dst1;
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_52;
		L_52 = PlanarFeature_get_Field_mB68F7D4AFECD9B6E3FDF8272EC1103C16EDB7804(L_51, /*hidden argument*/NULL);
		L_50->set_field_0(L_52);
		ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * L_53 = L_50;
		int32_t L_54 = V_2;
		L_53->set_indexOfConnection_1(L_54);
		ArrayElementTypeCheck (L_47, L_53);
		(L_47)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48), (ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F *)L_53);
		// dst.Field.Connect(dstIndex, srcConnection);
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_55 = ___dst1;
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_56;
		L_56 = PlanarFeature_get_Field_mB68F7D4AFECD9B6E3FDF8272EC1103C16EDB7804(L_55, /*hidden argument*/NULL);
		int32_t L_57 = V_2;
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_58 = V_0;
		PlanarField_Connect_mC3A89F7F89C27E8B944465F3E768EF8B7431FDFE(L_56, L_57, L_58, (bool)1, /*hidden argument*/NULL);
		// if(updateKnobsAndTubes)
		bool L_59 = ___updateKnobsAndTubes2;
		if (!L_59)
		{
			goto IL_00e4;
		}
	}
	{
		// srcConnection.UpdateKnobsAndTubes();
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_60 = V_0;
		PlanarFeature_UpdateKnobsAndTubes_m272C668B6E8A725AB110AAD72DD9A0E7242226DF(L_60, /*hidden argument*/NULL);
	}

IL_00e4:
	{
		// OnConnectionChanged(srcConnection);
		PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_61 = V_0;
		PlanarField_OnConnectionChanged_m51A5D6875A1634E1AED86CD7DE8C1F1E4615E3E4(__this, L_61, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LEGOModelImporter.PlanarField::Disconnect(System.Collections.Generic.ICollection`1<System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarField_Disconnect_mD3C7194C16CE3178255C1CED2865AE0857B04791 (RuntimeObject* ___toBeDisconnected0, bool ___updateKnobsAndTubes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tC4903CA757C4A4432618D1F61807A6AD93ABFE3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5B82E38E5267CC9F7B61159C3744F2FFBF0E6022_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach ((PlanarFeature c1, PlanarFeature c2) in toBeDisconnected)
		RuntimeObject* L_0 = ___toBeDisconnected0;
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>>::GetEnumerator() */, IEnumerable_1_tC4903CA757C4A4432618D1F61807A6AD93ABFE3E_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003d;
		}

IL_0009:
		{
			// foreach ((PlanarFeature c1, PlanarFeature c2) in toBeDisconnected)
			RuntimeObject* L_2 = V_0;
			ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  L_3;
			L_3 = InterfaceFuncInvoker0< ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>>::get_Current() */, IEnumerator_1_t5B82E38E5267CC9F7B61159C3744F2FFBF0E6022_il2cpp_TypeInfo_var, L_2);
			ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  L_4 = L_3;
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_5 = L_4.get_Item1_0();
			V_1 = L_5;
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_6 = L_4.get_Item2_1();
			// c1.Field.Disconnect(c1, updateKnobsAndTubes);
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_7 = V_1;
			PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_8;
			L_8 = PlanarFeature_get_Field_mB68F7D4AFECD9B6E3FDF8272EC1103C16EDB7804(L_7, /*hidden argument*/NULL);
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_9 = V_1;
			bool L_10 = ___updateKnobsAndTubes1;
			PlanarField_Disconnect_mC9E0228E042E8CFF8C69EC04B646977018996A08(L_8, L_9, L_10, /*hidden argument*/NULL);
			// Connection.RegisterPrefabChanges(c1.field);
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_11 = V_1;
			ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_12 = ((Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 *)L_11)->get_field_0();
			Connection_RegisterPrefabChanges_m610AA31575C04683CE051065C245AC0041B0E0BA(L_12, /*hidden argument*/NULL);
			// Connection.RegisterPrefabChanges(c2.field);
			ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_13 = ((Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 *)L_6)->get_field_0();
			Connection_RegisterPrefabChanges_m610AA31575C04683CE051065C245AC0041B0E0BA(L_13, /*hidden argument*/NULL);
		}

IL_003d:
		{
			// foreach ((PlanarFeature c1, PlanarFeature c2) in toBeDisconnected)
			RuntimeObject* L_14 = V_0;
			bool L_15;
			L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0009;
			}
		}

IL_0045:
		{
			IL2CPP_LEAVE(0x51, FINALLY_0047);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0047;
	}

FINALLY_0047:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_0;
			if (!L_16)
			{
				goto IL_0050;
			}
		}

IL_004a:
		{
			RuntimeObject* L_17 = V_0;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_17);
		}

IL_0050:
		{
			IL2CPP_END_FINALLY(71)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(71)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x51, IL_0051)
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void LEGOModelImporter.PlanarField::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarField__ctor_mD7C0DF54247B15557E0990A50AC6C81ABF591DCF (PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public List<int> connected = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_0, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		__this->set_connected_7(L_0);
		ConnectionField__ctor_m0EE83D94D3A5E9CD34958A602CDCB4DC67BD08B9(__this, /*hidden argument*/NULL);
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
// System.Void LEGOModelImporter.ScaleChecker::EditorUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleChecker_EditorUpdate_m0CB8EC73464734E1ED333D859334F0FCA2112210 (ScaleChecker_t01DBF635B151BAAEDEE8A0A793D2A604CC9B7D7C * __this, const RuntimeMethod* method)
{
	{
		// EnsureScale();
		ScaleChecker_EnsureScale_m4B9F17922E711B55F8F3782181914D9C4D981094(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LEGOModelImporter.ScaleChecker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleChecker_Update_m908DB3C7DCB5F6C57C6F8E3AF9A473FFC82CA74C (ScaleChecker_t01DBF635B151BAAEDEE8A0A793D2A604CC9B7D7C * __this, const RuntimeMethod* method)
{
	{
		// EnsureScale();
		ScaleChecker_EnsureScale_m4B9F17922E711B55F8F3782181914D9C4D981094(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LEGOModelImporter.ScaleChecker::EnsureScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleChecker_EnsureScale_m4B9F17922E711B55F8F3782181914D9C4D981094 (ScaleChecker_t01DBF635B151BAAEDEE8A0A793D2A604CC9B7D7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9AB80EB4C5665A68EB04E23992D4A81F117C090);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (transform.localScale == Vector3.one)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		bool L_3;
		L_3 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// return;
		return;
	}

IL_0018:
	{
		// Debug.LogError("Scaling of LEGO assets is not allowed");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralE9AB80EB4C5665A68EB04E23992D4A81F117C090, /*hidden argument*/NULL);
		// transform.localScale = Vector3.one;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LEGOModelImporter.ScaleChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleChecker__ctor_m2AEB59ED70CEA146ADCCDE2ED804F244B0362359 (ScaleChecker_t01DBF635B151BAAEDEE8A0A793D2A604CC9B7D7C * __this, const RuntimeMethod* method)
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
// System.Boolean LEGOModelImporter.Tube::IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tube_IsVisible_m3B3641F3CB37D972953EA89E168668A610B04DC9 (Tube_t2D49285A2D8CDFDFFDC7D96CF4BA7FAD9950F5C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouldingColour_t8656B0A2D1A075B8656AD830D6F1A8BC4195C298_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * V_2 = NULL;
	PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * V_3 = NULL;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	{
		// foreach (var connectionIndex in connections)
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = __this->get_connections_5();
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  L_1;
		L_1 = List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24(L_0, /*hidden argument*/List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0095;
		}

IL_0011:
		{
			// foreach (var connectionIndex in connections)
			int32_t L_2;
			L_2 = Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_0), /*hidden argument*/Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var);
			V_1 = L_2;
			// var connection = field.connections[connectionIndex];
			PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_3 = __this->get_field_6();
			PlanarFeatureU5BU5D_tBC900E26A810AE80A97E3E8D3610EAE6CB31145B* L_4 = L_3->get_connections_6();
			int32_t L_5 = V_1;
			int32_t L_6 = L_5;
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
			V_2 = L_7;
			// if (connection.IsRelevantForTube())
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_8 = V_2;
			bool L_9;
			L_9 = PlanarFeature_IsRelevantForTube_mB988AA0836A3517168BA7D28F012EE7A33C91039(L_8, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0095;
			}
		}

IL_002f:
		{
			// var connectedTo = connection.GetConnection() as PlanarFeature;
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_10 = V_2;
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_11;
			L_11 = PlanarFeature_GetConnection_mE995115297A5C7DFB09355FD4CBC583B46932ABB(L_10, /*hidden argument*/NULL);
			V_3 = L_11;
			// if (connectedTo == null)
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_12 = V_3;
			if (L_12)
			{
				goto IL_003e;
			}
		}

IL_0039:
		{
			// return true;
			V_4 = (bool)1;
			IL2CPP_LEAVE(0xB3, FINALLY_00a3);
		}

IL_003e:
		{
			// var notCovering = (connection.flags & PlanarFeature.flagsCoveringTube) == 0 || (connectedTo.flags & PlanarFeature.flagsCoveringTube) == 0;
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_13 = V_2;
			int32_t L_14 = L_13->get_flags_6();
			IL2CPP_RUNTIME_CLASS_INIT(PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445_il2cpp_TypeInfo_var);
			int32_t L_15 = ((PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445_StaticFields*)il2cpp_codegen_static_fields_for(PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445_il2cpp_TypeInfo_var))->get_flagsCoveringTube_2();
			if (!((int32_t)((int32_t)L_14&(int32_t)L_15)))
			{
				goto IL_005d;
			}
		}

IL_004c:
		{
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_16 = V_3;
			int32_t L_17 = L_16->get_flags_6();
			IL2CPP_RUNTIME_CLASS_INIT(PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445_il2cpp_TypeInfo_var);
			int32_t L_18 = ((PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445_StaticFields*)il2cpp_codegen_static_fields_for(PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445_il2cpp_TypeInfo_var))->get_flagsCoveringTube_2();
			G_B8_0 = ((((int32_t)((int32_t)((int32_t)L_17&(int32_t)L_18))) == ((int32_t)0))? 1 : 0);
			goto IL_005e;
		}

IL_005d:
		{
			G_B8_0 = 1;
		}

IL_005e:
		{
			// notCovering |= MouldingColour.IsAnyTransparent(part.materialIDs) || MouldingColour.IsAnyTransparent(connectedTo.field.connectivity.part.materialIDs);
			Part_tF559450A02A6BE32049B9167745FA5412AF33987 * L_19 = ((CommonPart_t5CE5E257A8662BD13B645124A193CA0A47E16BE0 *)__this)->get_part_4();
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_20 = L_19->get_materialIDs_7();
			IL2CPP_RUNTIME_CLASS_INIT(MouldingColour_t8656B0A2D1A075B8656AD830D6F1A8BC4195C298_il2cpp_TypeInfo_var);
			bool L_21;
			L_21 = MouldingColour_IsAnyTransparent_mC39AF1D59CF4D51E700F3AE7EB68B0B5C9663F62(L_20, /*hidden argument*/NULL);
			G_B9_0 = G_B8_0;
			if (L_21)
			{
				G_B10_0 = G_B8_0;
				goto IL_008c;
			}
		}

IL_0070:
		{
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_22 = V_3;
			ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_23 = ((Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 *)L_22)->get_field_0();
			Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF * L_24 = L_23->get_connectivity_4();
			Part_tF559450A02A6BE32049B9167745FA5412AF33987 * L_25 = L_24->get_part_5();
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_26 = L_25->get_materialIDs_7();
			IL2CPP_RUNTIME_CLASS_INIT(MouldingColour_t8656B0A2D1A075B8656AD830D6F1A8BC4195C298_il2cpp_TypeInfo_var);
			bool L_27;
			L_27 = MouldingColour_IsAnyTransparent_mC39AF1D59CF4D51E700F3AE7EB68B0B5C9663F62(L_26, /*hidden argument*/NULL);
			G_B11_0 = ((int32_t)(L_27));
			G_B11_1 = G_B9_0;
			goto IL_008d;
		}

IL_008c:
		{
			G_B11_0 = 1;
			G_B11_1 = G_B10_0;
		}

IL_008d:
		{
			// if (notCovering)
			if (!((int32_t)((int32_t)G_B11_1|(int32_t)G_B11_0)))
			{
				goto IL_0095;
			}
		}

IL_0090:
		{
			// return true;
			V_4 = (bool)1;
			IL2CPP_LEAVE(0xB3, FINALLY_00a3);
		}

IL_0095:
		{
			// foreach (var connectionIndex in connections)
			bool L_28;
			L_28 = Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
			if (L_28)
			{
				goto IL_0011;
			}
		}

IL_00a1:
		{
			IL2CPP_LEAVE(0xB1, FINALLY_00a3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a3;
	}

FINALLY_00a3:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_0), /*hidden argument*/Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
		IL2CPP_END_FINALLY(163)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(163)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_JUMP_TBL(0xB1, IL_00b1)
	}

IL_00b1:
	{
		// return false;
		return (bool)0;
	}

IL_00b3:
	{
		// }
		bool L_29 = V_4;
		return L_29;
	}
}
// System.Void LEGOModelImporter.Tube::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tube__ctor_m3382BC41BCEFAC23E928218BE41505B91CB78D2A (Tube_t2D49285A2D8CDFDFFDC7D96CF4BA7FAD9950F5C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<int> connections = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_0, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		__this->set_connections_5(L_0);
		CommonPart__ctor_m27E83872442C4B591385305EF4B0383FE3A9BF3C(__this, /*hidden argument*/NULL);
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
// UnityEngine.Vector3 LEGOModelImporter.Vector3Ext::Clamp(UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3Ext_Clamp_m15237D7F2005B5B4FFAFBDCB8DBC70C1E10282C6 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, float ___min1, float ___max2, const RuntimeMethod* method)
{
	{
		// return new Vector3(Mathf.Clamp(v.x, min, max), Mathf.Clamp(v.y, min, max), Mathf.Clamp(v.z, min, max));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___min1;
		float L_3 = ___max2;
		float L_4;
		L_4 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_1, L_2, L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___v0;
		float L_6 = L_5.get_y_3();
		float L_7 = ___min1;
		float L_8 = ___max2;
		float L_9;
		L_9 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_6, L_7, L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___v0;
		float L_11 = L_10.get_z_4();
		float L_12 = ___min1;
		float L_13 = ___max2;
		float L_14;
		L_14 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_11, L_12, L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), L_4, L_9, L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
// UnityEngine.Vector3 LEGOModelImporter.Vector3Ext::Clamp01(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3Ext_Clamp01_mAAD34254F2D107237A39B7468CBBDEAF37889CED (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	{
		// return new Vector3(Mathf.Clamp01(v.x), Mathf.Clamp01(v.y), Mathf.Clamp01(v.z));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		float L_2;
		L_2 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___v0;
		float L_4 = L_3.get_y_3();
		float L_5;
		L_5 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___v0;
		float L_7 = L_6.get_z_4();
		float L_8;
		L_8 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Vector3 LEGOModelImporter.Vector3Ext::Abs(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3Ext_Abs_m7441AEB8FEBDA44D52F0BE4CF69C6B47D36DEBD8 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	{
		// return new Vector3(Mathf.Abs(v.x), Mathf.Abs(v.y), Mathf.Abs(v.z));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		float L_2;
		L_2 = fabsf(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___v0;
		float L_4 = L_3.get_y_3();
		float L_5;
		L_5 = fabsf(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___v0;
		float L_7 = L_6.get_z_4();
		float L_8;
		L_8 = fabsf(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Vector3 LEGOModelImporter.Vector3Ext::Sign(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3Ext_Sign_m234E527D6B7451D039198DF5EAEE5CADA77CFF03 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	{
		// return new Vector3(Mathf.Sign(v.x), Mathf.Sign(v.y), Mathf.Sign(v.z));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		float L_2;
		L_2 = Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___v0;
		float L_4 = L_3.get_y_3();
		float L_5;
		L_5 = Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___v0;
		float L_7 = L_6.get_z_4();
		float L_8;
		L_8 = Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Int32 LEGOModelImporter.Vector3Ext::MajorAxis(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3Ext_MajorAxis_m45F320B4EF93E54C8188C61C704EBBB063BECB85 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// float x = Mathf.Abs(v.x);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		float L_2;
		L_2 = fabsf(L_1);
		V_0 = L_2;
		// float y = Mathf.Abs(v.y);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___v0;
		float L_4 = L_3.get_y_3();
		float L_5;
		L_5 = fabsf(L_4);
		V_1 = L_5;
		// float z = Mathf.Abs(v.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___v0;
		float L_7 = L_6.get_z_4();
		float L_8;
		L_8 = fabsf(L_7);
		V_2 = L_8;
		// if (x > y && x > z)
		float L_9 = V_0;
		float L_10 = V_1;
		if ((!(((float)L_9) > ((float)L_10))))
		{
			goto IL_002e;
		}
	}
	{
		float L_11 = V_0;
		float L_12 = V_2;
		if ((!(((float)L_11) > ((float)L_12))))
		{
			goto IL_002e;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_002e:
	{
		// if (y > z)
		float L_13 = V_1;
		float L_14 = V_2;
		if ((!(((float)L_13) > ((float)L_14))))
		{
			goto IL_0034;
		}
	}
	{
		// return 1;
		return 1;
	}

IL_0034:
	{
		// return 2;
		return 2;
	}
}
// UnityEngine.Vector3 LEGOModelImporter.Vector3Ext::SnapToMajorAxis(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3Ext_SnapToMajorAxis_mB735F0C55E1B4B105E2F60314DD8642EBA28A05C (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// Vector3 v2 = new Vector3();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		// int axis = v.MajorAxis();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		int32_t L_1;
		L_1 = Vector3Ext_MajorAxis_m45F320B4EF93E54C8188C61C704EBBB063BECB85(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		// v2[axis] = Mathf.Sign(v[axis]);
		int32_t L_2 = V_1;
		int32_t L_3 = V_1;
		float L_4;
		L_4 = Vector3_get_Item_m7E5B57E02F6873804F40DD48F8BEA00247AFF5AC((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___v0), L_3, /*hidden argument*/NULL);
		float L_5;
		L_5 = Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB(L_4, /*hidden argument*/NULL);
		Vector3_set_Item_mF3E5D7FFAD5F81973283AE6C1D15C9B238AEE346((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), L_2, L_5, /*hidden argument*/NULL);
		// return v2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		return L_6;
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
// System.Void LEGOModelImporter.AxleField/ConnectionTuple::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionTuple__ctor_m12B36565415B27B7C46CEFB2AB758ABD9ACF9AE9 (ConnectionTuple_t87F3138616E6A6C55E1E7CBFF8178D55C4A9A70B * __this, const RuntimeMethod* method)
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
// System.Void LEGOModelImporter.BrickBuildingUtility/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m51D28BA2AC5E72377539CAA62BE6DF2F3CF1F810 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3CB44C086FE13BB27D8E8857E6F65F503B89F717_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3CB44C086FE13BB27D8E8857E6F65F503B89F717 * L_0 = (U3CU3Ec_t3CB44C086FE13BB27D8E8857E6F65F503B89F717 *)il2cpp_codegen_object_new(U3CU3Ec_t3CB44C086FE13BB27D8E8857E6F65F503B89F717_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mCA5F5241E5DD6491D4EA1ECE965341BDD60A4184(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3CB44C086FE13BB27D8E8857E6F65F503B89F717_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3CB44C086FE13BB27D8E8857E6F65F503B89F717_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void LEGOModelImporter.BrickBuildingUtility/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCA5F5241E5DD6491D4EA1ECE965341BDD60A4184 (U3CU3Ec_t3CB44C086FE13BB27D8E8857E6F65F503B89F717 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single LEGOModelImporter.BrickBuildingUtility/<>c::<FindBestConnectionOnBrick>b__42_1(System.ValueTuple`2<LEGOModelImporter.ConnectionField,LEGOModelImporter.ConnectionField>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CFindBestConnectionOnBrickU3Eb__42_1_m487232B2A5819132E1AE7E2FD2694F6992AEEAC1 (U3CU3Ec_t3CB44C086FE13BB27D8E8857E6F65F503B89F717 * __this, ValueTuple_2_tAD27F69A4DCED6F5988CAF46B1AE9AE441F44BD7  ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedField_t54C0D973EBCF8097CB0AF444508F22ADFA6EA79F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// if (f.Item1 is PlanarField)
		ValueTuple_2_tAD27F69A4DCED6F5988CAF46B1AE9AE441F44BD7  L_0 = ___f0;
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_1 = L_0.get_Item1_0();
		if (!((PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 *)IsInstClass((RuntimeObject*)L_1, PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65_il2cpp_TypeInfo_var)))
		{
			goto IL_0033;
		}
	}
	{
		// return Vector3.Dot(f.Item1.transform.up, f.Item2.transform.up);
		ValueTuple_2_tAD27F69A4DCED6F5988CAF46B1AE9AE441F44BD7  L_2 = ___f0;
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_3 = L_2.get_Item1_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_4, /*hidden argument*/NULL);
		ValueTuple_2_tAD27F69A4DCED6F5988CAF46B1AE9AE441F44BD7  L_6 = ___f0;
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_7 = L_6.get_Item2_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_8, /*hidden argument*/NULL);
		float L_10;
		L_10 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_5, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0033:
	{
		// else if (f.Item1 is AxleField)
		ValueTuple_2_tAD27F69A4DCED6F5988CAF46B1AE9AE441F44BD7  L_11 = ___f0;
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_12 = L_11.get_Item1_0();
		if (!((AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277 *)IsInstClass((RuntimeObject*)L_12, AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277_il2cpp_TypeInfo_var)))
		{
			goto IL_0097;
		}
	}
	{
		// var cosUp = Vector3.Dot(f.Item1.transform.up, f.Item2.transform.up);
		ValueTuple_2_tAD27F69A4DCED6F5988CAF46B1AE9AE441F44BD7  L_13 = ___f0;
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_14 = L_13.get_Item1_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_15, /*hidden argument*/NULL);
		ValueTuple_2_tAD27F69A4DCED6F5988CAF46B1AE9AE441F44BD7  L_17 = ___f0;
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_18 = L_17.get_Item2_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_19, /*hidden argument*/NULL);
		float L_21;
		L_21 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_16, L_20, /*hidden argument*/NULL);
		// var cosDown = Vector3.Dot(f.Item1.transform.up, -f.Item2.transform.up);
		ValueTuple_2_tAD27F69A4DCED6F5988CAF46B1AE9AE441F44BD7  L_22 = ___f0;
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_23 = L_22.get_Item1_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_23, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_24, /*hidden argument*/NULL);
		ValueTuple_2_tAD27F69A4DCED6F5988CAF46B1AE9AE441F44BD7  L_26 = ___f0;
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_27 = L_26.get_Item2_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_27, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_28, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_29, /*hidden argument*/NULL);
		float L_31;
		L_31 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_25, L_30, /*hidden argument*/NULL);
		V_0 = L_31;
		// return Mathf.Max(cosUp, cosDown);
		float L_32 = V_0;
		float L_33;
		L_33 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_21, L_32, /*hidden argument*/NULL);
		return L_33;
	}

IL_0097:
	{
		// else if(f.Item1 is FixedField f1)
		ValueTuple_2_tAD27F69A4DCED6F5988CAF46B1AE9AE441F44BD7  L_34 = ___f0;
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_35 = L_34.get_Item1_0();
		if (!((FixedField_t54C0D973EBCF8097CB0AF444508F22ADFA6EA79F *)IsInstClass((RuntimeObject*)L_35, FixedField_t54C0D973EBCF8097CB0AF444508F22ADFA6EA79F_il2cpp_TypeInfo_var)))
		{
			goto IL_0112;
		}
	}
	{
		// FixedField f2 = f.Item2 as FixedField;
		ValueTuple_2_tAD27F69A4DCED6F5988CAF46B1AE9AE441F44BD7  L_36 = ___f0;
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_37 = L_36.get_Item2_1();
		// var cosUp = Vector3.Dot(f.Item1.transform.up, f.Item2.transform.up);
		ValueTuple_2_tAD27F69A4DCED6F5988CAF46B1AE9AE441F44BD7  L_38 = ___f0;
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_39 = L_38.get_Item1_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_39, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_40, /*hidden argument*/NULL);
		ValueTuple_2_tAD27F69A4DCED6F5988CAF46B1AE9AE441F44BD7  L_42 = ___f0;
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_43 = L_42.get_Item2_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_43, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_44, /*hidden argument*/NULL);
		float L_46;
		L_46 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_41, L_45, /*hidden argument*/NULL);
		V_1 = L_46;
		// if(f2.feature.axisType == FixedFeature.AxisType.Dual)
		FixedFeature_tB93897E645B98A4B477010C4669270FFB5CC96A4 * L_47 = ((FixedField_t54C0D973EBCF8097CB0AF444508F22ADFA6EA79F *)IsInstClass((RuntimeObject*)L_37, FixedField_t54C0D973EBCF8097CB0AF444508F22ADFA6EA79F_il2cpp_TypeInfo_var))->get_feature_6();
		int32_t L_48 = L_47->get_axisType_2();
		if ((!(((uint32_t)L_48) == ((uint32_t)1))))
		{
			goto IL_0110;
		}
	}
	{
		// var cosRight = Vector3.Dot(f.Item1.transform.right, f.Item2.transform.right);
		ValueTuple_2_tAD27F69A4DCED6F5988CAF46B1AE9AE441F44BD7  L_49 = ___f0;
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_50 = L_49.get_Item1_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_50, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_51, /*hidden argument*/NULL);
		ValueTuple_2_tAD27F69A4DCED6F5988CAF46B1AE9AE441F44BD7  L_53 = ___f0;
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_54 = L_53.get_Item2_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_55;
		L_55 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_54, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56;
		L_56 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_55, /*hidden argument*/NULL);
		float L_57;
		L_57 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_52, L_56, /*hidden argument*/NULL);
		V_2 = L_57;
		// cosUp = Mathf.Max(cosUp, cosRight);
		float L_58 = V_1;
		float L_59 = V_2;
		float L_60;
		L_60 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_58, L_59, /*hidden argument*/NULL);
		V_1 = L_60;
	}

IL_0110:
	{
		// return cosUp;
		float L_61 = V_1;
		return L_61;
	}

IL_0112:
	{
		// return 0.0f;
		return (0.0f);
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
// System.Void LEGOModelImporter.BrickBuildingUtility/<>c__DisplayClass36_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0__ctor_m8F5F466D9A223C2092AD2D5BABD74CE2F8F9CCDD (U3CU3Ec__DisplayClass36_0_t2F583D8DB9676E67215E16602C3DE9DE725A658E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 LEGOModelImporter.BrickBuildingUtility/<>c__DisplayClass36_0::<FindBestConnection>b__0(LEGOModelImporter.Brick,LEGOModelImporter.Brick)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass36_0_U3CFindBestConnectionU3Eb__0_m3695EDA50D5061F535605E642B4B16C749664DD8 (U3CU3Ec__DisplayClass36_0_t2F583D8DB9676E67215E16602C3DE9DE725A658E * __this, Brick_t4E2078428A9FDB510CB1D407CE70A9084C8A72EB * ___b10, Brick_t4E2078428A9FDB510CB1D407CE70A9084C8A72EB * ___b21, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var p1 = inverseViewTransform.MultiplyPoint(b1.transform.TransformPoint(b1.totalBounds.center));
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_0 = __this->get_address_of_inverseViewTransform_0();
		Brick_t4E2078428A9FDB510CB1D407CE70A9084C8A72EB * L_1 = ___b10;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_1, /*hidden argument*/NULL);
		Brick_t4E2078428A9FDB510CB1D407CE70A9084C8A72EB * L_3 = ___b10;
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * L_4 = L_3->get_address_of_totalBounds_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_2, L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_0, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// var p2 = inverseViewTransform.MultiplyPoint(b2.transform.TransformPoint(b2.totalBounds.center));
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_8 = __this->get_address_of_inverseViewTransform_0();
		Brick_t4E2078428A9FDB510CB1D407CE70A9084C8A72EB * L_9 = ___b21;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		Brick_t4E2078428A9FDB510CB1D407CE70A9084C8A72EB * L_11 = ___b21;
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * L_12 = L_11->get_address_of_totalBounds_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_10, L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_8, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		// return p1.z.CompareTo(p2.z);
		float* L_16 = (&V_0)->get_address_of_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_1;
		float L_18 = L_17.get_z_4();
		int32_t L_19;
		L_19 = Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4((float*)L_16, L_18, /*hidden argument*/NULL);
		return L_19;
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
// System.Void LEGOModelImporter.BrickBuildingUtility/<>c__DisplayClass42_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass42_0__ctor_m035511DB04C06DFE422C2FAB93085155C3F062DE (U3CU3Ec__DisplayClass42_0_t1A87E3B23D5D9B02BAF2098EE6D9E0C2508D2FFA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single LEGOModelImporter.BrickBuildingUtility/<>c__DisplayClass42_0::<FindBestConnectionOnBrick>b__0(System.ValueTuple`2<LEGOModelImporter.ConnectionField,LEGOModelImporter.ConnectionField>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass42_0_U3CFindBestConnectionOnBrickU3Eb__0_mD2BE45B65F4AED31A66BCC01F314A5118050D274 (U3CU3Ec__DisplayClass42_0_t1A87E3B23D5D9B02BAF2098EE6D9E0C2508D2FFA * __this, ValueTuple_2_tAD27F69A4DCED6F5988CAF46B1AE9AE441F44BD7  ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedField_t54C0D973EBCF8097CB0AF444508F22ADFA6EA79F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * V_0 = NULL;
	PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * V_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277 * V_5 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// var field = f.Item1;
		ValueTuple_2_tAD27F69A4DCED6F5988CAF46B1AE9AE441F44BD7  L_0 = ___f0;
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_1 = L_0.get_Item1_0();
		V_0 = L_1;
		// if (field is PlanarField planarField)
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_2 = V_0;
		V_1 = ((PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 *)IsInstClass((RuntimeObject*)L_2, PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65_il2cpp_TypeInfo_var));
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_3 = V_1;
		if (!L_3)
		{
			goto IL_0082;
		}
	}
	{
		// var fieldSize = new Vector3(planarField.gridSize.x, 0.0f, planarField.gridSize.y) * LU_5 * 0.5f;
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_4 = V_1;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_5 = L_4->get_address_of_gridSize_10();
		int32_t L_6;
		L_6 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_5, /*hidden argument*/NULL);
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_7 = V_1;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_8 = L_7->get_address_of_gridSize_10();
		int32_t L_9;
		L_9 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), ((float)((float)L_6)), (0.0f), ((float)((float)L_9)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_10, (0.399999976f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_11, (0.5f), /*hidden argument*/NULL);
		V_2 = L_12;
		// var localCenter = new Vector3(-fieldSize.x, 0.0f, fieldSize.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_2;
		float L_14 = L_13.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_2;
		float L_16 = L_15.get_z_4();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), ((-L_14)), (0.0f), L_16, /*hidden argument*/NULL);
		// var fieldCenter = planarField.transform.TransformPoint(localCenter);
		PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_17 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_18, L_19, /*hidden argument*/NULL);
		V_4 = L_20;
		// return MathUtils.DistanceSquared(ray.origin, fieldCenter);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * L_21 = __this->get_address_of_ray_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_4;
		float L_24;
		L_24 = MathUtils_DistanceSquared_mE1C9074C9468B321E35688D78441790A2E774424(L_22, L_23, /*hidden argument*/NULL);
		return L_24;
	}

IL_0082:
	{
		// else if (field is AxleField axleField)
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_25 = V_0;
		if (!((AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277 *)IsInstClass((RuntimeObject*)L_25, AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277_il2cpp_TypeInfo_var)))
		{
			goto IL_00ee;
		}
	}
	{
		// var sourceField = f.Item2 as AxleField;
		ValueTuple_2_tAD27F69A4DCED6F5988CAF46B1AE9AE441F44BD7  L_26 = ___f0;
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_27 = L_26.get_Item2_1();
		V_5 = ((AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277 *)IsInstClass((RuntimeObject*)L_27, AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277_il2cpp_TypeInfo_var));
		// var position = field.transform.position;
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_28 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_28, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_29, /*hidden argument*/NULL);
		V_6 = L_30;
		// var bottomPosition = sourceField.transform.position;
		AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277 * L_31 = V_5;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_31, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_32, /*hidden argument*/NULL);
		V_7 = L_33;
		// var topPosition = sourceField.transform.TransformPoint(new Vector3(0.0f, sourceField.length, 0.0f));
		AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277 * L_34 = V_5;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_34, /*hidden argument*/NULL);
		AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277 * L_36 = V_5;
		float L_37 = L_36->get_length_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_38), (0.0f), L_37, (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_35, L_38, /*hidden argument*/NULL);
		V_8 = L_39;
		// return Mathf.Min(MathUtils.DistanceSquared(position, bottomPosition), MathUtils.DistanceSquared(position, topPosition));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = V_7;
		float L_42;
		L_42 = MathUtils_DistanceSquared_mE1C9074C9468B321E35688D78441790A2E774424(L_40, L_41, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44 = V_8;
		float L_45;
		L_45 = MathUtils_DistanceSquared_mE1C9074C9468B321E35688D78441790A2E774424(L_43, L_44, /*hidden argument*/NULL);
		float L_46;
		L_46 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_42, L_45, /*hidden argument*/NULL);
		return L_46;
	}

IL_00ee:
	{
		// else if(field is FixedField fixedField)
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_47 = V_0;
		if (!((FixedField_t54C0D973EBCF8097CB0AF444508F22ADFA6EA79F *)IsInstClass((RuntimeObject*)L_47, FixedField_t54C0D973EBCF8097CB0AF444508F22ADFA6EA79F_il2cpp_TypeInfo_var)))
		{
			goto IL_0117;
		}
	}
	{
		// return MathUtils.DistanceSquared(ray.origin, f.Item2.transform.position);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * L_48 = __this->get_address_of_ray_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		L_49 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)L_48, /*hidden argument*/NULL);
		ValueTuple_2_tAD27F69A4DCED6F5988CAF46B1AE9AE441F44BD7  L_50 = ___f0;
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_51 = L_50.get_Item2_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
		L_52 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_51, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_52, /*hidden argument*/NULL);
		float L_54;
		L_54 = MathUtils_DistanceSquared_mE1C9074C9468B321E35688D78441790A2E774424(L_49, L_53, /*hidden argument*/NULL);
		return L_54;
	}

IL_0117:
	{
		// return float.PositiveInfinity;
		return (std::numeric_limits<float>::infinity());
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
// Conversion methods for marshalling of: LEGOModelImporter.BrickBuildingUtility/ConnectionResult
IL2CPP_EXTERN_C void ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0_marshal_pinvoke(const ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0& unmarshaled, ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0_marshaled_pinvoke& marshaled)
{
	Exception_t* ___srcConnection_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'srcConnection' of type 'ConnectionResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___srcConnection_0Exception, NULL);
}
IL2CPP_EXTERN_C void ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0_marshal_pinvoke_back(const ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0_marshaled_pinvoke& marshaled, ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0& unmarshaled)
{
	Exception_t* ___srcConnection_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'srcConnection' of type 'ConnectionResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___srcConnection_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LEGOModelImporter.BrickBuildingUtility/ConnectionResult
IL2CPP_EXTERN_C void ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0_marshal_pinvoke_cleanup(ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LEGOModelImporter.BrickBuildingUtility/ConnectionResult
IL2CPP_EXTERN_C void ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0_marshal_com(const ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0& unmarshaled, ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0_marshaled_com& marshaled)
{
	Exception_t* ___srcConnection_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'srcConnection' of type 'ConnectionResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___srcConnection_0Exception, NULL);
}
IL2CPP_EXTERN_C void ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0_marshal_com_back(const ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0_marshaled_com& marshaled, ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0& unmarshaled)
{
	Exception_t* ___srcConnection_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'srcConnection' of type 'ConnectionResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___srcConnection_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LEGOModelImporter.BrickBuildingUtility/ConnectionResult
IL2CPP_EXTERN_C void ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0_marshal_com_cleanup(ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0_marshaled_com& marshaled)
{
}
// LEGOModelImporter.BrickBuildingUtility/ConnectionResult LEGOModelImporter.BrickBuildingUtility/ConnectionResult::Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0  ConnectionResult_Empty_m1789FBAF5BDDD33EB80ECDB6D5BD0F250938B8CF (const RuntimeMethod* method)
{
	ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// ConnectionResult result = new ConnectionResult{};
		il2cpp_codegen_initobj((&V_1), sizeof(ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0 ));
		ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0  L_0 = V_1;
		V_0 = L_0;
		// result.srcConnection = null;
		(&V_0)->set_srcConnection_0((Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 *)NULL);
		// result.dstConnection = null;
		(&V_0)->set_dstConnection_1((Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 *)NULL);
		// result.interaction = Connection.ConnectionInteraction.Ignore;
		(&V_0)->set_interaction_2(1);
		// result.intersectionPoint =  Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		(&V_0)->set_intersectionPoint_3(L_1);
		// result.maxSqrDistance = float.PositiveInfinity;
		(&V_0)->set_maxSqrDistance_4((std::numeric_limits<float>::infinity()));
		// result.angleToConnect = 0.0f;
		(&V_0)->set_angleToConnect_5((0.0f));
		// result.rotationAxisToConnect = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		(&V_0)->set_rotationAxisToConnect_6(L_2);
		// result.connectionOffset = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		(&V_0)->set_connectionOffset_7(L_3);
		// result.colliding = false;
		(&V_0)->set_colliding_8((bool)0);
		// return result;
		ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0  L_4 = V_0;
		return L_4;
	}
}
// System.Boolean LEGOModelImporter.BrickBuildingUtility/ConnectionResult::IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionResult_IsEmpty_m3C822F290FA6EF3F1192B434C869518F9BE27453 (ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (srcConnection == null && dstConnection == null) || (srcConnection != null && !srcConnection.field) || (dstConnection != null && !dstConnection.field);
		Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 * L_0 = __this->get_srcConnection_0();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 * L_1 = __this->get_dstConnection_1();
		if (!L_1)
		{
			goto IL_0048;
		}
	}

IL_0010:
	{
		Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 * L_2 = __this->get_srcConnection_0();
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 * L_3 = __this->get_srcConnection_0();
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_4 = L_3->get_field_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0048;
		}
	}

IL_002a:
	{
		Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 * L_6 = __this->get_dstConnection_1();
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		Connection_t9843448B4FC6ADA3BA3080FC8CDEB56E36DA33C5 * L_7 = __this->get_dstConnection_1();
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_8 = L_7->get_field_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_8, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
	}

IL_0046:
	{
		return (bool)0;
	}

IL_0048:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool ConnectionResult_IsEmpty_m3C822F290FA6EF3F1192B434C869518F9BE27453_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0 * _thisAdjusted = reinterpret_cast<ConnectionResult_tE59990EECC4D903F6A93E254ADCC5FD6A3538FD0 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ConnectionResult_IsEmpty_m3C822F290FA6EF3F1192B434C869518F9BE27453(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LEGOModelImporter.Colliders/<GetEnumerator>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__3__ctor_m5F86F9F4CC77FB7BD90DF0618096908A56F00082 (U3CGetEnumeratorU3Ed__3_t894FD38B75EDD4C1A39A55BADD3FC15B81275C7C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void LEGOModelImporter.Colliders/<GetEnumerator>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__3_System_IDisposable_Dispose_m9F2CDEA2DD584BF58C672B7800AFAD0BA2F6D04F (U3CGetEnumeratorU3Ed__3_t894FD38B75EDD4C1A39A55BADD3FC15B81275C7C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CGetEnumeratorU3Ed__3_U3CU3Em__Finally1_m22020BBD7225222D23D111CE2462C4B6394E4AC8(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean LEGOModelImporter.Colliders/<GetEnumerator>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__3_MoveNext_m45668988811DE4DB3598FD1C3250603FFD5EDE30 (U3CGetEnumeratorU3Ed__3_t894FD38B75EDD4C1A39A55BADD3FC15B81275C7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5C79C0EB3EAC684514CA5A703D1FF749464B8A4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m731F0CD1A6FC3AA134F92A5FF4620AD6F70F97E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m58E2D47394110BC4AC8216E1ED13CE109A1DCF57_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Colliders_t8550080A1AAF3F64E65676118544E13AE34DF6BE * V_2 = NULL;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			Colliders_t8550080A1AAF3F64E65676118544E13AE34DF6BE * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0059;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_008b;
		}

IL_0019:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach(var collider in colliders)
			Colliders_t8550080A1AAF3F64E65676118544E13AE34DF6BE * L_4 = V_2;
			List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * L_5 = L_4->get_colliders_5();
			Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B  L_6;
			L_6 = List_1_GetEnumerator_m58E2D47394110BC4AC8216E1ED13CE109A1DCF57(L_5, /*hidden argument*/List_1_GetEnumerator_m58E2D47394110BC4AC8216E1ED13CE109A1DCF57_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_3(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0061;
		}

IL_003b:
		{
			// foreach(var collider in colliders)
			Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B * L_7 = __this->get_address_of_U3CU3E7__wrap1_3();
			Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_8;
			L_8 = Enumerator_get_Current_m731F0CD1A6FC3AA134F92A5FF4620AD6F70F97E7_inline((Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B *)L_7, /*hidden argument*/Enumerator_get_Current_m731F0CD1A6FC3AA134F92A5FF4620AD6F70F97E7_RuntimeMethod_var);
			V_3 = L_8;
			// yield return collider;
			Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_9 = V_3;
			__this->set_U3CU3E2__current_1(L_9);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_008b;
		}

IL_0059:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0061:
		{
			// foreach(var collider in colliders)
			Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B * L_10 = __this->get_address_of_U3CU3E7__wrap1_3();
			bool L_11;
			L_11 = Enumerator_MoveNext_m5C79C0EB3EAC684514CA5A703D1FF749464B8A4E((Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B *)L_10, /*hidden argument*/Enumerator_MoveNext_m5C79C0EB3EAC684514CA5A703D1FF749464B8A4E_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_003b;
			}
		}

IL_006e:
		{
			U3CGetEnumeratorU3Ed__3_U3CU3Em__Finally1_m22020BBD7225222D23D111CE2462C4B6394E4AC8(__this, /*hidden argument*/NULL);
			Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B * L_12 = __this->get_address_of_U3CU3E7__wrap1_3();
			il2cpp_codegen_initobj(L_12, sizeof(Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B ));
			// }
			V_0 = (bool)0;
			goto IL_008b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0084;
	}

FAULT_0084:
	{ // begin fault (depth: 1)
		U3CGetEnumeratorU3Ed__3_System_IDisposable_Dispose_m9F2CDEA2DD584BF58C672B7800AFAD0BA2F6D04F(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(132)
	} // end fault
	IL2CPP_CLEANUP(132)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008b:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Void LEGOModelImporter.Colliders/<GetEnumerator>d__3::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__3_U3CU3Em__Finally1_m22020BBD7225222D23D111CE2462C4B6394E4AC8 (U3CGetEnumeratorU3Ed__3_t894FD38B75EDD4C1A39A55BADD3FC15B81275C7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m08CF469D7C501041243B4B790EFF3F7ECDA57B17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B * L_0 = __this->get_address_of_U3CU3E7__wrap1_3();
		Enumerator_Dispose_m08CF469D7C501041243B4B790EFF3F7ECDA57B17((Enumerator_t8986589F1C5D1228624DF019533A2CB23D0F9E3B *)L_0, /*hidden argument*/Enumerator_Dispose_m08CF469D7C501041243B4B790EFF3F7ECDA57B17_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.Collider LEGOModelImporter.Colliders/<GetEnumerator>d__3::System.Collections.Generic.IEnumerator<UnityEngine.Collider>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * U3CGetEnumeratorU3Ed__3_System_Collections_Generic_IEnumeratorU3CUnityEngine_ColliderU3E_get_Current_m24E5DED4D0152FAA9BBA7B4534E91A7111003AF0 (U3CGetEnumeratorU3Ed__3_t894FD38B75EDD4C1A39A55BADD3FC15B81275C7C * __this, const RuntimeMethod* method)
{
	{
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void LEGOModelImporter.Colliders/<GetEnumerator>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__3_System_Collections_IEnumerator_Reset_m60E2F8EF8E184319A1F2AB94C8E358943F3AA46D (U3CGetEnumeratorU3Ed__3_t894FD38B75EDD4C1A39A55BADD3FC15B81275C7C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__3_System_Collections_IEnumerator_Reset_m60E2F8EF8E184319A1F2AB94C8E358943F3AA46D_RuntimeMethod_var)));
	}
}
// System.Object LEGOModelImporter.Colliders/<GetEnumerator>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__3_System_Collections_IEnumerator_get_Current_m9B0699BC41FA47A492315D9164CA500E6F45EA8B (U3CGetEnumeratorU3Ed__3_t894FD38B75EDD4C1A39A55BADD3FC15B81275C7C * __this, const RuntimeMethod* method)
{
	{
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void LEGOModelImporter.Connectivity/<GetEnumerator>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__10__ctor_m9698A803991F5D8AD47B8FB76EBB501AC9F2B061 (U3CGetEnumeratorU3Ed__10_t46BBD5E759B3EEB496C5555266DCBBCF89D009D4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void LEGOModelImporter.Connectivity/<GetEnumerator>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__10_System_IDisposable_Dispose_m34446D189A772D800800B537CC2673BAD19333E4 (U3CGetEnumeratorU3Ed__10_t46BBD5E759B3EEB496C5555266DCBBCF89D009D4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-5))))
		{
			case 0:
			{
				goto IL_0049;
			}
			case 1:
			{
				goto IL_003f;
			}
			case 2:
			{
				goto IL_0035;
			}
			case 3:
			{
				goto IL_0053;
			}
			case 4:
			{
				goto IL_0053;
			}
			case 5:
			{
				goto IL_0053;
			}
			case 6:
			{
				goto IL_0035;
			}
			case 7:
			{
				goto IL_003f;
			}
			case 8:
			{
				goto IL_0049;
			}
		}
	}
	{
		return;
	}

IL_0035:
	{
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x53, FINALLY_0038);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{ // begin finally (depth: 1)
		U3CGetEnumeratorU3Ed__10_U3CU3Em__Finally1_mDB0FAFDC515313B3678817FD8DB19D591DFCA2E5(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(56)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x53, IL_0053)
	}

IL_003f:
	{
	}

IL_0040:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x53, FINALLY_0042);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		U3CGetEnumeratorU3Ed__10_U3CU3Em__Finally2_m9A902C5E4987CF0A3E6E3151D77249A6E61F4B3F(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(66)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x53, IL_0053)
	}

IL_0049:
	{
	}

IL_004a:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x53, FINALLY_004c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		U3CGetEnumeratorU3Ed__10_U3CU3Em__Finally3_m28AE438E184F1DCF38593AA20A84546DC212C239(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(76)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x53, IL_0053)
	}

IL_0053:
	{
		return;
	}
}
// System.Boolean LEGOModelImporter.Connectivity/<GetEnumerator>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__10_MoveNext_m95E24527945358B78DB2B30DD1758476162A7483 (U3CGetEnumeratorU3Ed__10_t46BBD5E759B3EEB496C5555266DCBBCF89D009D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1DDC1086B8CE59E62530A4550C6AEF632A808D58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2F55082A50A2A575723488ACFFA75DFCB89E6A95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9043E8A15BAECAB48DDA51412A0C8192CAF39572_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3B897B3683F04E335ED6F79B725C6194C9FCEE18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m852DFE900EC23728666BBFCFB311761EE4270967_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB0C22AC582C54E6D79D408B5BB1F21E7DCF27EDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m08039C498B0989ED96EEC96EC2DB04C028DAEA90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m257D50DDBEA83CAA47F7D322A44BC0D1F148A1B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFED7103EFF2AD902BDD0676C82F0CB3368E3466F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF * V_2 = NULL;
	PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * V_3 = NULL;
	AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277 * V_4 = NULL;
	FixedField_t54C0D973EBCF8097CB0AF444508F22ADFA6EA79F * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_002b;
				}
				case 1:
				{
					goto IL_006e;
				}
				case 2:
				{
					goto IL_00d3;
				}
				case 3:
				{
					goto IL_0135;
				}
			}
		}

IL_0024:
		{
			V_0 = (bool)0;
			goto IL_0167;
		}

IL_002b:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (var field in planarFields)
			Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF * L_3 = V_2;
			List_1_tEBF6868521218B8961BF50B2E3E2A4808B56253D * L_4 = L_3->get_planarFields_7();
			Enumerator_tF7E2E75243ECEA6C0697BE2FCF715D2513E2D196  L_5;
			L_5 = List_1_GetEnumerator_mFED7103EFF2AD902BDD0676C82F0CB3368E3466F(L_4, /*hidden argument*/List_1_GetEnumerator_mFED7103EFF2AD902BDD0676C82F0CB3368E3466F_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_3(L_5);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0076;
		}

IL_004d:
		{
			// foreach (var field in planarFields)
			Enumerator_tF7E2E75243ECEA6C0697BE2FCF715D2513E2D196 * L_6 = __this->get_address_of_U3CU3E7__wrap1_3();
			PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_7;
			L_7 = Enumerator_get_Current_mB0C22AC582C54E6D79D408B5BB1F21E7DCF27EDA_inline((Enumerator_tF7E2E75243ECEA6C0697BE2FCF715D2513E2D196 *)L_6, /*hidden argument*/Enumerator_get_Current_mB0C22AC582C54E6D79D408B5BB1F21E7DCF27EDA_RuntimeMethod_var);
			V_3 = L_7;
			// yield return field;
			PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * L_8 = V_3;
			__this->set_U3CU3E2__current_1(L_8);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0167;
		}

IL_006e:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0076:
		{
			// foreach (var field in planarFields)
			Enumerator_tF7E2E75243ECEA6C0697BE2FCF715D2513E2D196 * L_9 = __this->get_address_of_U3CU3E7__wrap1_3();
			bool L_10;
			L_10 = Enumerator_MoveNext_m9043E8A15BAECAB48DDA51412A0C8192CAF39572((Enumerator_tF7E2E75243ECEA6C0697BE2FCF715D2513E2D196 *)L_9, /*hidden argument*/Enumerator_MoveNext_m9043E8A15BAECAB48DDA51412A0C8192CAF39572_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_004d;
			}
		}

IL_0083:
		{
			U3CGetEnumeratorU3Ed__10_U3CU3Em__Finally1_mDB0FAFDC515313B3678817FD8DB19D591DFCA2E5(__this, /*hidden argument*/NULL);
			Enumerator_tF7E2E75243ECEA6C0697BE2FCF715D2513E2D196 * L_11 = __this->get_address_of_U3CU3E7__wrap1_3();
			il2cpp_codegen_initobj(L_11, sizeof(Enumerator_tF7E2E75243ECEA6C0697BE2FCF715D2513E2D196 ));
			// foreach (var field in axleFields)
			Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF * L_12 = V_2;
			List_1_t1B8E248437FE7A019F683CE60E7553A98F8C89DD * L_13 = L_12->get_axleFields_8();
			Enumerator_t057F70045655EA8DAF287DDE95A85CABE256714D  L_14;
			L_14 = List_1_GetEnumerator_m257D50DDBEA83CAA47F7D322A44BC0D1F148A1B7(L_13, /*hidden argument*/List_1_GetEnumerator_m257D50DDBEA83CAA47F7D322A44BC0D1F148A1B7_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap2_4(L_14);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_00db;
		}

IL_00b0:
		{
			// foreach (var field in axleFields)
			Enumerator_t057F70045655EA8DAF287DDE95A85CABE256714D * L_15 = __this->get_address_of_U3CU3E7__wrap2_4();
			AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277 * L_16;
			L_16 = Enumerator_get_Current_m3B897B3683F04E335ED6F79B725C6194C9FCEE18_inline((Enumerator_t057F70045655EA8DAF287DDE95A85CABE256714D *)L_15, /*hidden argument*/Enumerator_get_Current_m3B897B3683F04E335ED6F79B725C6194C9FCEE18_RuntimeMethod_var);
			V_4 = L_16;
			// yield return field;
			AxleField_t59B4B666E99E9B256083D67F78C2398A09DA8277 * L_17 = V_4;
			__this->set_U3CU3E2__current_1(L_17);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_0167;
		}

IL_00d3:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
		}

IL_00db:
		{
			// foreach (var field in axleFields)
			Enumerator_t057F70045655EA8DAF287DDE95A85CABE256714D * L_18 = __this->get_address_of_U3CU3E7__wrap2_4();
			bool L_19;
			L_19 = Enumerator_MoveNext_m2F55082A50A2A575723488ACFFA75DFCB89E6A95((Enumerator_t057F70045655EA8DAF287DDE95A85CABE256714D *)L_18, /*hidden argument*/Enumerator_MoveNext_m2F55082A50A2A575723488ACFFA75DFCB89E6A95_RuntimeMethod_var);
			if (L_19)
			{
				goto IL_00b0;
			}
		}

IL_00e8:
		{
			U3CGetEnumeratorU3Ed__10_U3CU3Em__Finally2_m9A902C5E4987CF0A3E6E3151D77249A6E61F4B3F(__this, /*hidden argument*/NULL);
			Enumerator_t057F70045655EA8DAF287DDE95A85CABE256714D * L_20 = __this->get_address_of_U3CU3E7__wrap2_4();
			il2cpp_codegen_initobj(L_20, sizeof(Enumerator_t057F70045655EA8DAF287DDE95A85CABE256714D ));
			// foreach (var field in fixedFields)
			Connectivity_t8835CB91D026F4DAEA8F81526FACF268A624A0BF * L_21 = V_2;
			List_1_t1AA4D82EFDD45B199AA932D2FCCCD9CFB46B055A * L_22 = L_21->get_fixedFields_9();
			Enumerator_tFBB1B137B772289C585FEC808CB15BEFD895832D  L_23;
			L_23 = List_1_GetEnumerator_m08039C498B0989ED96EEC96EC2DB04C028DAEA90(L_22, /*hidden argument*/List_1_GetEnumerator_m08039C498B0989ED96EEC96EC2DB04C028DAEA90_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap3_5(L_23);
			__this->set_U3CU3E1__state_0(((int32_t)-5));
			goto IL_013d;
		}

IL_0115:
		{
			// foreach (var field in fixedFields)
			Enumerator_tFBB1B137B772289C585FEC808CB15BEFD895832D * L_24 = __this->get_address_of_U3CU3E7__wrap3_5();
			FixedField_t54C0D973EBCF8097CB0AF444508F22ADFA6EA79F * L_25;
			L_25 = Enumerator_get_Current_m852DFE900EC23728666BBFCFB311761EE4270967_inline((Enumerator_tFBB1B137B772289C585FEC808CB15BEFD895832D *)L_24, /*hidden argument*/Enumerator_get_Current_m852DFE900EC23728666BBFCFB311761EE4270967_RuntimeMethod_var);
			V_5 = L_25;
			// yield return field;
			FixedField_t54C0D973EBCF8097CB0AF444508F22ADFA6EA79F * L_26 = V_5;
			__this->set_U3CU3E2__current_1(L_26);
			__this->set_U3CU3E1__state_0(3);
			V_0 = (bool)1;
			goto IL_0167;
		}

IL_0135:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-5));
		}

IL_013d:
		{
			// foreach (var field in fixedFields)
			Enumerator_tFBB1B137B772289C585FEC808CB15BEFD895832D * L_27 = __this->get_address_of_U3CU3E7__wrap3_5();
			bool L_28;
			L_28 = Enumerator_MoveNext_m1DDC1086B8CE59E62530A4550C6AEF632A808D58((Enumerator_tFBB1B137B772289C585FEC808CB15BEFD895832D *)L_27, /*hidden argument*/Enumerator_MoveNext_m1DDC1086B8CE59E62530A4550C6AEF632A808D58_RuntimeMethod_var);
			if (L_28)
			{
				goto IL_0115;
			}
		}

IL_014a:
		{
			U3CGetEnumeratorU3Ed__10_U3CU3Em__Finally3_m28AE438E184F1DCF38593AA20A84546DC212C239(__this, /*hidden argument*/NULL);
			Enumerator_tFBB1B137B772289C585FEC808CB15BEFD895832D * L_29 = __this->get_address_of_U3CU3E7__wrap3_5();
			il2cpp_codegen_initobj(L_29, sizeof(Enumerator_tFBB1B137B772289C585FEC808CB15BEFD895832D ));
			// }
			V_0 = (bool)0;
			goto IL_0167;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0160;
	}

FAULT_0160:
	{ // begin fault (depth: 1)
		U3CGetEnumeratorU3Ed__10_System_IDisposable_Dispose_m34446D189A772D800800B537CC2673BAD19333E4(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(352)
	} // end fault
	IL2CPP_CLEANUP(352)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0167:
	{
		bool L_30 = V_0;
		return L_30;
	}
}
// System.Void LEGOModelImporter.Connectivity/<GetEnumerator>d__10::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__10_U3CU3Em__Finally1_mDB0FAFDC515313B3678817FD8DB19D591DFCA2E5 (U3CGetEnumeratorU3Ed__10_t46BBD5E759B3EEB496C5555266DCBBCF89D009D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m750DA8D47E352DBC654782E48523B38EE4C8AD30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_tF7E2E75243ECEA6C0697BE2FCF715D2513E2D196 * L_0 = __this->get_address_of_U3CU3E7__wrap1_3();
		Enumerator_Dispose_m750DA8D47E352DBC654782E48523B38EE4C8AD30((Enumerator_tF7E2E75243ECEA6C0697BE2FCF715D2513E2D196 *)L_0, /*hidden argument*/Enumerator_Dispose_m750DA8D47E352DBC654782E48523B38EE4C8AD30_RuntimeMethod_var);
		return;
	}
}
// System.Void LEGOModelImporter.Connectivity/<GetEnumerator>d__10::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__10_U3CU3Em__Finally2_m9A902C5E4987CF0A3E6E3151D77249A6E61F4B3F (U3CGetEnumeratorU3Ed__10_t46BBD5E759B3EEB496C5555266DCBBCF89D009D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF8FE0DBAFD36F2DCC7576FC15E1DF31A7B18B9CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t057F70045655EA8DAF287DDE95A85CABE256714D * L_0 = __this->get_address_of_U3CU3E7__wrap2_4();
		Enumerator_Dispose_mF8FE0DBAFD36F2DCC7576FC15E1DF31A7B18B9CE((Enumerator_t057F70045655EA8DAF287DDE95A85CABE256714D *)L_0, /*hidden argument*/Enumerator_Dispose_mF8FE0DBAFD36F2DCC7576FC15E1DF31A7B18B9CE_RuntimeMethod_var);
		return;
	}
}
// System.Void LEGOModelImporter.Connectivity/<GetEnumerator>d__10::<>m__Finally3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__10_U3CU3Em__Finally3_m28AE438E184F1DCF38593AA20A84546DC212C239 (U3CGetEnumeratorU3Ed__10_t46BBD5E759B3EEB496C5555266DCBBCF89D009D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m81B7A0C7B4F59F66CCE6CB7DF8A3168F231DED97_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_tFBB1B137B772289C585FEC808CB15BEFD895832D * L_0 = __this->get_address_of_U3CU3E7__wrap3_5();
		Enumerator_Dispose_m81B7A0C7B4F59F66CCE6CB7DF8A3168F231DED97((Enumerator_tFBB1B137B772289C585FEC808CB15BEFD895832D *)L_0, /*hidden argument*/Enumerator_Dispose_m81B7A0C7B4F59F66CCE6CB7DF8A3168F231DED97_RuntimeMethod_var);
		return;
	}
}
// LEGOModelImporter.ConnectionField LEGOModelImporter.Connectivity/<GetEnumerator>d__10::System.Collections.Generic.IEnumerator<LEGOModelImporter.ConnectionField>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * U3CGetEnumeratorU3Ed__10_System_Collections_Generic_IEnumeratorU3CLEGOModelImporter_ConnectionFieldU3E_get_Current_m51A1EF93C2548CB7161A28B473D62E4A72E8E9A5 (U3CGetEnumeratorU3Ed__10_t46BBD5E759B3EEB496C5555266DCBBCF89D009D4 * __this, const RuntimeMethod* method)
{
	{
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void LEGOModelImporter.Connectivity/<GetEnumerator>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__10_System_Collections_IEnumerator_Reset_m57C68676C9989F3A1CF1677249F7E7144CB5D0D1 (U3CGetEnumeratorU3Ed__10_t46BBD5E759B3EEB496C5555266DCBBCF89D009D4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__10_System_Collections_IEnumerator_Reset_m57C68676C9989F3A1CF1677249F7E7144CB5D0D1_RuntimeMethod_var)));
	}
}
// System.Object LEGOModelImporter.Connectivity/<GetEnumerator>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__10_System_Collections_IEnumerator_get_Current_mF3FBC5CEB0D5C6A04222C8CCC4484F8548820D8F (U3CGetEnumeratorU3Ed__10_t46BBD5E759B3EEB496C5555266DCBBCF89D009D4 * __this, const RuntimeMethod* method)
{
	{
		ConnectionField_tD2955E93962124B855779C186FE5C071203BB1AC * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void LEGOModelImporter.Connectivity/ConnectionIterator::.ctor(System.Collections.Generic.List`1<System.ValueTuple`2<LEGOModelImporter.PlanarFeature,LEGOModelImporter.PlanarFeature>>,System.Collections.Generic.List`1<System.ValueTuple`2<LEGOModelImporter.AxleFeature,LEGOModelImporter.AxleFeature>>,System.Collections.Generic.List`1<System.ValueTuple`2<LEGOModelImporter.FixedFeature,LEGOModelImporter.FixedFeature>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionIterator__ctor_m02E972B0A9A8C7CDFD02CB15F51EBF2B111AA60F (ConnectionIterator_t415B158FEA77755C5FD134944C1DCCAED078E30B * __this, List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F * ___planarConnections0, List_1_t4D75E148C8A391EA6FE426AA11BCF9320E8D69A1 * ___axleConnections1, List_1_t4A4637B03D6E6F14E0E9EF3A64B6F9152CA7524D * ___fixedConnections2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m16456A7292CE17197A0C71EAC02C0E57291AF1A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8408480FB919A52C36A120C2FBBFB30A3DEFCFA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAF0B9D01231BA918A5FC41F38907C86CDEFF3D18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A4637B03D6E6F14E0E9EF3A64B6F9152CA7524D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4D75E148C8A391EA6FE426AA11BCF9320E8D69A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public List<(PlanarFeature, PlanarFeature)> planarFeatures = new List<(PlanarFeature, PlanarFeature)>();
		List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F * L_0 = (List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F *)il2cpp_codegen_object_new(List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F_il2cpp_TypeInfo_var);
		List_1__ctor_m16456A7292CE17197A0C71EAC02C0E57291AF1A1(L_0, /*hidden argument*/List_1__ctor_m16456A7292CE17197A0C71EAC02C0E57291AF1A1_RuntimeMethod_var);
		__this->set_planarFeatures_0(L_0);
		// [HideInInspector] public List<(AxleFeature, AxleFeature)> axleFeatures = new List<(AxleFeature, AxleFeature)>();
		List_1_t4D75E148C8A391EA6FE426AA11BCF9320E8D69A1 * L_1 = (List_1_t4D75E148C8A391EA6FE426AA11BCF9320E8D69A1 *)il2cpp_codegen_object_new(List_1_t4D75E148C8A391EA6FE426AA11BCF9320E8D69A1_il2cpp_TypeInfo_var);
		List_1__ctor_mAF0B9D01231BA918A5FC41F38907C86CDEFF3D18(L_1, /*hidden argument*/List_1__ctor_mAF0B9D01231BA918A5FC41F38907C86CDEFF3D18_RuntimeMethod_var);
		__this->set_axleFeatures_1(L_1);
		// [HideInInspector] public List<(FixedFeature, FixedFeature)> fixedFeatures = new List<(FixedFeature, FixedFeature)>();
		List_1_t4A4637B03D6E6F14E0E9EF3A64B6F9152CA7524D * L_2 = (List_1_t4A4637B03D6E6F14E0E9EF3A64B6F9152CA7524D *)il2cpp_codegen_object_new(List_1_t4A4637B03D6E6F14E0E9EF3A64B6F9152CA7524D_il2cpp_TypeInfo_var);
		List_1__ctor_m8408480FB919A52C36A120C2FBBFB30A3DEFCFA7(L_2, /*hidden argument*/List_1__ctor_m8408480FB919A52C36A120C2FBBFB30A3DEFCFA7_RuntimeMethod_var);
		__this->set_fixedFeatures_2(L_2);
		// public ConnectionIterator(List<(PlanarFeature, PlanarFeature)> planarConnections, List<(AxleFeature, AxleFeature)> axleConnections, List<(FixedFeature, FixedFeature)> fixedConnections)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// planarFeatures = planarConnections;
		List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F * L_3 = ___planarConnections0;
		__this->set_planarFeatures_0(L_3);
		// axleFeatures = axleConnections;
		List_1_t4D75E148C8A391EA6FE426AA11BCF9320E8D69A1 * L_4 = ___axleConnections1;
		__this->set_axleFeatures_1(L_4);
		// fixedFeatures = fixedConnections;
		List_1_t4A4637B03D6E6F14E0E9EF3A64B6F9152CA7524D * L_5 = ___fixedConnections2;
		__this->set_fixedFeatures_2(L_5);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<LEGOModelImporter.Connection,LEGOModelImporter.Connection>> LEGOModelImporter.Connectivity/ConnectionIterator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionIterator_GetEnumerator_m631A6A307362C710813BC421F184B84F69C0CE67 (ConnectionIterator_t415B158FEA77755C5FD134944C1DCCAED078E30B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__4_t323214E45DA8AE991432AD6782BA8C009E277613_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetEnumeratorU3Ed__4_t323214E45DA8AE991432AD6782BA8C009E277613 * L_0 = (U3CGetEnumeratorU3Ed__4_t323214E45DA8AE991432AD6782BA8C009E277613 *)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__4_t323214E45DA8AE991432AD6782BA8C009E277613_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ed__4__ctor_m810BCB6986B4487133CD38D96FC4742149706E9F(L_0, 0, /*hidden argument*/NULL);
		U3CGetEnumeratorU3Ed__4_t323214E45DA8AE991432AD6782BA8C009E277613 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator LEGOModelImporter.Connectivity/ConnectionIterator::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionIterator_System_Collections_IEnumerable_GetEnumerator_mE9CF5FD0E874B14AB4590A20DD121C240A1AE304 (ConnectionIterator_t415B158FEA77755C5FD134944C1DCCAED078E30B * __this, const RuntimeMethod* method)
{
	{
		// return GetEnumerator();
		RuntimeObject* L_0;
		L_0 = ConnectionIterator_GetEnumerator_m631A6A307362C710813BC421F184B84F69C0CE67(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LEGOModelImporter.MathUtils/Cone::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cone__ctor_mDD954BD1C037B941E2C4511EA9E6F6AABADFE7A6 (Cone_t8B730118881F66B4A24038D5755C2B6F513DE4B5 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, float ___angle2, const RuntimeMethod* method)
{
	{
		// public Cone(Vector3 origin, Vector3 direction, float angle)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.origin = origin;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___origin0;
		__this->set_origin_0(L_0);
		// this.direction = direction;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___direction1;
		__this->set_direction_1(L_1);
		// this.angle = angle;
		float L_2 = ___angle2;
		__this->set_angle_2(L_2);
		// cosAngle = Mathf.Cos(angle);
		float L_3 = ___angle2;
		float L_4;
		L_4 = cosf(L_3);
		__this->set_cosAngle_3(L_4);
		// sinAngle = Mathf.Sin(angle);
		float L_5 = ___angle2;
		float L_6;
		L_6 = sinf(L_5);
		__this->set_sinAngle_4(L_6);
		// invSinAngle = 1.0f / sinAngle;
		float L_7 = __this->get_sinAngle_4();
		__this->set_invSinAngle_5(((float)((float)(1.0f)/(float)L_7)));
		// cosAngleSqr = cosAngle * cosAngle;
		float L_8 = __this->get_cosAngle_3();
		float L_9 = __this->get_cosAngle_3();
		__this->set_cosAngleSqr_6(((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)));
		// }
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
// System.Void LEGOModelImporter.PlanarField/ConnectionTuple::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionTuple__ctor_m108DC725639DDA52DDCFF0817F5C25AAFD9763B8 (ConnectionTuple_t766C1D09F75A29E64435CEA5F0D4AE015143BE3F * __this, const RuntimeMethod* method)
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
// System.Void LEGOModelImporter.Connectivity/ConnectionIterator/<GetEnumerator>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__4__ctor_m810BCB6986B4487133CD38D96FC4742149706E9F (U3CGetEnumeratorU3Ed__4_t323214E45DA8AE991432AD6782BA8C009E277613 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void LEGOModelImporter.Connectivity/ConnectionIterator/<GetEnumerator>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__4_System_IDisposable_Dispose_m04529C43F724FD8CA2CD4664F3E9B22212B83556 (U3CGetEnumeratorU3Ed__4_t323214E45DA8AE991432AD6782BA8C009E277613 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-5))))
		{
			case 0:
			{
				goto IL_0049;
			}
			case 1:
			{
				goto IL_003f;
			}
			case 2:
			{
				goto IL_0035;
			}
			case 3:
			{
				goto IL_0053;
			}
			case 4:
			{
				goto IL_0053;
			}
			case 5:
			{
				goto IL_0053;
			}
			case 6:
			{
				goto IL_0035;
			}
			case 7:
			{
				goto IL_003f;
			}
			case 8:
			{
				goto IL_0049;
			}
		}
	}
	{
		return;
	}

IL_0035:
	{
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x53, FINALLY_0038);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{ // begin finally (depth: 1)
		U3CGetEnumeratorU3Ed__4_U3CU3Em__Finally1_m077B3E7489011AFAEDE36F54CB654EBA0CEDA51A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(56)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x53, IL_0053)
	}

IL_003f:
	{
	}

IL_0040:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x53, FINALLY_0042);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		U3CGetEnumeratorU3Ed__4_U3CU3Em__Finally2_m4FE7BEBB2B84605DDB11448F8705B3DFF805F467(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(66)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x53, IL_0053)
	}

IL_0049:
	{
	}

IL_004a:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x53, FINALLY_004c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		U3CGetEnumeratorU3Ed__4_U3CU3Em__Finally3_mE2EF86644AF41C8DA68D3D6C2092377D76718B61(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(76)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x53, IL_0053)
	}

IL_0053:
	{
		return;
	}
}
// System.Boolean LEGOModelImporter.Connectivity/ConnectionIterator/<GetEnumerator>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__4_MoveNext_m074874B013FA934FF171D5F921F4139E3600E373 (U3CGetEnumeratorU3Ed__4_t323214E45DA8AE991432AD6782BA8C009E277613 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m21DE5F6F4F02A017CF13A33503F07A028D8C23DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m58A7AA6622ED93EA4FC726FA83E48C3C346F5B91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE27C69036A3B097CAC95861472954FC1788A8FDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m713E3A8ED8D32513F58164C403488D00E61188FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBED58BB2E0EED68287506206BFF61E984C4C3317_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mEAEC25F05C0DDA413D41FF18653B78ADA596B27A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5A4380C5A74D43813622531A3DFE226565955E38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7638E8537FC9C1FDFC115049037106C8006B4FF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m9B05D6655D3872809C8C39A9DC867321433CBA06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_m403716C8ED2D73C79170287DA962B5F8ABB21F6F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ConnectionIterator_t415B158FEA77755C5FD134944C1DCCAED078E30B * V_2 = NULL;
	ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	ValueTuple_2_t31B74A8DC82469F1344229CABDC9F02B498A35A4  V_5;
	memset((&V_5), 0, sizeof(V_5));
	ValueTuple_2_t31B74A8DC82469F1344229CABDC9F02B498A35A4  V_6;
	memset((&V_6), 0, sizeof(V_6));
	ValueTuple_2_t5CE28F612013D255B27043753ADEC34426B7AD90  V_7;
	memset((&V_7), 0, sizeof(V_7));
	ValueTuple_2_t5CE28F612013D255B27043753ADEC34426B7AD90  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			ConnectionIterator_t415B158FEA77755C5FD134944C1DCCAED078E30B * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_002b;
				}
				case 1:
				{
					goto IL_0083;
				}
				case 2:
				{
					goto IL_00fd;
				}
				case 3:
				{
					goto IL_0174;
				}
			}
		}

IL_0024:
		{
			V_0 = (bool)0;
			goto IL_01a6;
		}

IL_002b:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (var feature in planarFeatures)
			ConnectionIterator_t415B158FEA77755C5FD134944C1DCCAED078E30B * L_3 = V_2;
			List_1_tED824CA6F2B77942B0C5A31F919FA5BAFD0CC92F * L_4 = L_3->get_planarFeatures_0();
			Enumerator_tB1664E9614254B8BA9DBF8A2E43FDDE49C3E7220  L_5;
			L_5 = List_1_GetEnumerator_m9B05D6655D3872809C8C39A9DC867321433CBA06(L_4, /*hidden argument*/List_1_GetEnumerator_m9B05D6655D3872809C8C39A9DC867321433CBA06_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_3(L_5);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_008b;
		}

IL_004d:
		{
			// foreach (var feature in planarFeatures)
			Enumerator_tB1664E9614254B8BA9DBF8A2E43FDDE49C3E7220 * L_6 = __this->get_address_of_U3CU3E7__wrap1_3();
			ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  L_7;
			L_7 = Enumerator_get_Current_mEAEC25F05C0DDA413D41FF18653B78ADA596B27A_inline((Enumerator_tB1664E9614254B8BA9DBF8A2E43FDDE49C3E7220 *)L_6, /*hidden argument*/Enumerator_get_Current_mEAEC25F05C0DDA413D41FF18653B78ADA596B27A_RuntimeMethod_var);
			V_3 = L_7;
			// yield return feature;
			ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  L_8 = V_3;
			V_4 = L_8;
			ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  L_9 = V_4;
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_10 = L_9.get_Item1_0();
			ValueTuple_2_t55834DB45FC66B737BD555B7551F18FC5FB5D12E  L_11 = V_4;
			PlanarFeature_t4ADE84C391B7A6A21B67EC45BC5160BA994E4445 * L_12 = L_11.get_Item2_1();
			ValueTuple_2_tE31844093EA6E41DA2EECECABE9C6C6D09CD170D  L_13;
			memset((&L_13), 0, sizeof(L_13));
			ValueTuple_2__ctor_m403716C8ED2D73C79170287DA962B5F8ABB21F6F((&L_13), L_10, L_12, /*hidden argument*/ValueTuple_2__ctor_m403716C8ED2D73C79170287DA962B5F8ABB21F6F_RuntimeMethod_var);
			__this->set_U3CU3E2__current_1(L_13);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_01a6;
		}

IL_0083:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_008b:
		{
			// foreach (var feature in planarFeatures)
			Enumerator_tB1664E9614254B8BA9DBF8A2E43FDDE49C3E7220 * L_14 = __this->get_address_of_U3CU3E7__wrap1_3();
			bool L_15;
			L_15 = Enumerator_MoveNext_m21DE5F6F4F02A017CF13A33503F07A028D8C23DB((Enumerator_tB1664E9614254B8BA9DBF8A2E43FDDE49C3E7220 *)L_14, /*hidden argument*/Enumerator_MoveNext_m21DE5F6F4F02A017CF13A33503F07A028D8C23DB_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_004d;
			}
		}

IL_0098:
		{
			U3CGetEnumeratorU3Ed__4_U3CU3Em__Finally1_m077B3E7489011AFAEDE36F54CB654EBA0CEDA51A(__this, /*hidden argument*/NULL);
			Enumerator_tB1664E9614254B8BA9DBF8A2E43FDDE49C3E7220 * L_16 = __this->get_address_of_U3CU3E7__wrap1_3();
			il2cpp_codegen_initobj(L_16, sizeof(Enumerator_tB1664E9614254B8BA9DBF8A2E43FDDE49C3E7220 ));
			// foreach (var feature in axleFeatures)
			ConnectionIterator_t415B158FEA77755C5FD134944C1DCCAED078E30B * L_17 = V_2;
			List_1_t4D75E148C8A391EA6FE426AA11BCF9320E8D69A1 * L_18 = L_17->get_axleFeatures_1();
			Enumerator_t3E6A94099410C50805F319CC16CC0D93BE4436D8  L_19;
			L_19 = List_1_GetEnumerator_m7638E8537FC9C1FDFC115049037106C8006B4FF3(L_18, /*hidden argument*/List_1_GetEnumerator_m7638E8537FC9C1FDFC115049037106C8006B4FF3_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap2_4(L_19);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_0105;
		}

IL_00c5:
		{
			// foreach (var feature in axleFeatures)
			Enumerator_t3E6A94099410C50805F319CC16CC0D93BE4436D8 * L_20 = __this->get_address_of_U3CU3E7__wrap2_4();
			ValueTuple_2_t31B74A8DC82469F1344229CABDC9F02B498A35A4  L_21;
			L_21 = Enumerator_get_Current_m713E3A8ED8D32513F58164C403488D00E61188FB_inline((Enumerator_t3E6A94099410C50805F319CC16CC0D93BE4436D8 *)L_20, /*hidden argument*/Enumerator_get_Current_m713E3A8ED8D32513F58164C403488D00E61188FB_RuntimeMethod_var);
			V_5 = L_21;
			// yield return feature;
			ValueTuple_2_t31B74A8DC82469F1344229CABDC9F02B498A35A4  L_22 = V_5;
			V_6 = L_22;
			ValueTuple_2_t31B74A8DC82469F1344229CABDC9F02B498A35A4  L_23 = V_6;
			AxleFeature_t721BA35E67B746326439A431C1DA97F1355138F2 * L_24 = L_23.get_Item1_0();
			ValueTuple_2_t31B74A8DC82469F1344229CABDC9F02B498A35A4  L_25 = V_6;
			AxleFeature_t721BA35E67B746326439A431C1DA97F1355138F2 * L_26 = L_25.get_Item2_1();
			ValueTuple_2_tE31844093EA6E41DA2EECECABE9C6C6D09CD170D  L_27;
			memset((&L_27), 0, sizeof(L_27));
			ValueTuple_2__ctor_m403716C8ED2D73C79170287DA962B5F8ABB21F6F((&L_27), L_24, L_26, /*hidden argument*/ValueTuple_2__ctor_m403716C8ED2D73C79170287DA962B5F8ABB21F6F_RuntimeMethod_var);
			__this->set_U3CU3E2__current_1(L_27);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_01a6;
		}

IL_00fd:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
		}

IL_0105:
		{
			// foreach (var feature in axleFeatures)
			Enumerator_t3E6A94099410C50805F319CC16CC0D93BE4436D8 * L_28 = __this->get_address_of_U3CU3E7__wrap2_4();
			bool L_29;
			L_29 = Enumerator_MoveNext_mE27C69036A3B097CAC95861472954FC1788A8FDB((Enumerator_t3E6A94099410C50805F319CC16CC0D93BE4436D8 *)L_28, /*hidden argument*/Enumerator_MoveNext_mE27C69036A3B097CAC95861472954FC1788A8FDB_RuntimeMethod_var);
			if (L_29)
			{
				goto IL_00c5;
			}
		}

IL_0112:
		{
			U3CGetEnumeratorU3Ed__4_U3CU3Em__Finally2_m4FE7BEBB2B84605DDB11448F8705B3DFF805F467(__this, /*hidden argument*/NULL);
			Enumerator_t3E6A94099410C50805F319CC16CC0D93BE4436D8 * L_30 = __this->get_address_of_U3CU3E7__wrap2_4();
			il2cpp_codegen_initobj(L_30, sizeof(Enumerator_t3E6A94099410C50805F319CC16CC0D93BE4436D8 ));
			// foreach (var feature in fixedFeatures)
			ConnectionIterator_t415B158FEA77755C5FD134944C1DCCAED078E30B * L_31 = V_2;
			List_1_t4A4637B03D6E6F14E0E9EF3A64B6F9152CA7524D * L_32 = L_31->get_fixedFeatures_2();
			Enumerator_t77AA1B6D4815D37C0F1C70571BCF17C9C631AB0D  L_33;
			L_33 = List_1_GetEnumerator_m5A4380C5A74D43813622531A3DFE226565955E38(L_32, /*hidden argument*/List_1_GetEnumerator_m5A4380C5A74D43813622531A3DFE226565955E38_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap3_5(L_33);
			__this->set_U3CU3E1__state_0(((int32_t)-5));
			goto IL_017c;
		}

IL_013f:
		{
			// foreach (var feature in fixedFeatures)
			Enumerator_t77AA1B6D4815D37C0F1C70571BCF17C9C631AB0D * L_34 = __this->get_address_of_U3CU3E7__wrap3_5();
			ValueTuple_2_t5CE28F612013D255B27043753ADEC34426B7AD90  L_35;
			L_35 = Enumerator_get_Current_mBED58BB2E0EED68287506206BFF61E984C4C3317_inline((Enumerator_t77AA1B6D4815D37C0F1C70571BCF17C9C631AB0D *)L_34, /*hidden argument*/Enumerator_get_Current_mBED58BB2E0EED68287506206BFF61E984C4C3317_RuntimeMethod_var);
			V_7 = L_35;
			// yield return feature;
			ValueTuple_2_t5CE28F612013D255B27043753ADEC34426B7AD90  L_36 = V_7;
			V_8 = L_36;
			ValueTuple_2_t5CE28F612013D255B27043753ADEC34426B7AD90  L_37 = V_8;
			FixedFeature_tB93897E645B98A4B477010C4669270FFB5CC96A4 * L_38 = L_37.get_Item1_0();
			ValueTuple_2_t5CE28F612013D255B27043753ADEC34426B7AD90  L_39 = V_8;
			FixedFeature_tB93897E645B98A4B477010C4669270FFB5CC96A4 * L_40 = L_39.get_Item2_1();
			ValueTuple_2_tE31844093EA6E41DA2EECECABE9C6C6D09CD170D  L_41;
			memset((&L_41), 0, sizeof(L_41));
			ValueTuple_2__ctor_m403716C8ED2D73C79170287DA962B5F8ABB21F6F((&L_41), L_38, L_40, /*hidden argument*/ValueTuple_2__ctor_m403716C8ED2D73C79170287DA962B5F8ABB21F6F_RuntimeMethod_var);
			__this->set_U3CU3E2__current_1(L_41);
			__this->set_U3CU3E1__state_0(3);
			V_0 = (bool)1;
			goto IL_01a6;
		}

IL_0174:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-5));
		}

IL_017c:
		{
			// foreach (var feature in fixedFeatures)
			Enumerator_t77AA1B6D4815D37C0F1C70571BCF17C9C631AB0D * L_42 = __this->get_address_of_U3CU3E7__wrap3_5();
			bool L_43;
			L_43 = Enumerator_MoveNext_m58A7AA6622ED93EA4FC726FA83E48C3C346F5B91((Enumerator_t77AA1B6D4815D37C0F1C70571BCF17C9C631AB0D *)L_42, /*hidden argument*/Enumerator_MoveNext_m58A7AA6622ED93EA4FC726FA83E48C3C346F5B91_RuntimeMethod_var);
			if (L_43)
			{
				goto IL_013f;
			}
		}

IL_0189:
		{
			U3CGetEnumeratorU3Ed__4_U3CU3Em__Finally3_mE2EF86644AF41C8DA68D3D6C2092377D76718B61(__this, /*hidden argument*/NULL);
			Enumerator_t77AA1B6D4815D37C0F1C70571BCF17C9C631AB0D * L_44 = __this->get_address_of_U3CU3E7__wrap3_5();
			il2cpp_codegen_initobj(L_44, sizeof(Enumerator_t77AA1B6D4815D37C0F1C70571BCF17C9C631AB0D ));
			// }
			V_0 = (bool)0;
			goto IL_01a6;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_019f;
	}

FAULT_019f:
	{ // begin fault (depth: 1)
		U3CGetEnumeratorU3Ed__4_System_IDisposable_Dispose_m04529C43F724FD8CA2CD4664F3E9B22212B83556(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(415)
	} // end fault
	IL2CPP_CLEANUP(415)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01a6:
	{
		bool L_45 = V_0;
		return L_45;
	}
}
// System.Void LEGOModelImporter.Connectivity/ConnectionIterator/<GetEnumerator>d__4::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__4_U3CU3Em__Finally1_m077B3E7489011AFAEDE36F54CB654EBA0CEDA51A (U3CGetEnumeratorU3Ed__4_t323214E45DA8AE991432AD6782BA8C009E277613 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4144D82524B48FA317E229268511BD7222A672FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_tB1664E9614254B8BA9DBF8A2E43FDDE49C3E7220 * L_0 = __this->get_address_of_U3CU3E7__wrap1_3();
		Enumerator_Dispose_m4144D82524B48FA317E229268511BD7222A672FE((Enumerator_tB1664E9614254B8BA9DBF8A2E43FDDE49C3E7220 *)L_0, /*hidden argument*/Enumerator_Dispose_m4144D82524B48FA317E229268511BD7222A672FE_RuntimeMethod_var);
		return;
	}
}
// System.Void LEGOModelImporter.Connectivity/ConnectionIterator/<GetEnumerator>d__4::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__4_U3CU3Em__Finally2_m4FE7BEBB2B84605DDB11448F8705B3DFF805F467 (U3CGetEnumeratorU3Ed__4_t323214E45DA8AE991432AD6782BA8C009E277613 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD9BA2B185D7A3DCC3A5F882F72711C501FE8743E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t3E6A94099410C50805F319CC16CC0D93BE4436D8 * L_0 = __this->get_address_of_U3CU3E7__wrap2_4();
		Enumerator_Dispose_mD9BA2B185D7A3DCC3A5F882F72711C501FE8743E((Enumerator_t3E6A94099410C50805F319CC16CC0D93BE4436D8 *)L_0, /*hidden argument*/Enumerator_Dispose_mD9BA2B185D7A3DCC3A5F882F72711C501FE8743E_RuntimeMethod_var);
		return;
	}
}
// System.Void LEGOModelImporter.Connectivity/ConnectionIterator/<GetEnumerator>d__4::<>m__Finally3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__4_U3CU3Em__Finally3_mE2EF86644AF41C8DA68D3D6C2092377D76718B61 (U3CGetEnumeratorU3Ed__4_t323214E45DA8AE991432AD6782BA8C009E277613 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5093995C07A147520FEBE867F98F2D27C7CDECB1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t77AA1B6D4815D37C0F1C70571BCF17C9C631AB0D * L_0 = __this->get_address_of_U3CU3E7__wrap3_5();
		Enumerator_Dispose_m5093995C07A147520FEBE867F98F2D27C7CDECB1((Enumerator_t77AA1B6D4815D37C0F1C70571BCF17C9C631AB0D *)L_0, /*hidden argument*/Enumerator_Dispose_m5093995C07A147520FEBE867F98F2D27C7CDECB1_RuntimeMethod_var);
		return;
	}
}
// System.ValueTuple`2<LEGOModelImporter.Connection,LEGOModelImporter.Connection> LEGOModelImporter.Connectivity/ConnectionIterator/<GetEnumerator>d__4::System.Collections.Generic.IEnumerator<(LEGOModelImporter.Connection,LEGOModelImporter.Connection)>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tE31844093EA6E41DA2EECECABE9C6C6D09CD170D  U3CGetEnumeratorU3Ed__4_System_Collections_Generic_IEnumeratorU3CU28LEGOModelImporter_ConnectionU2CLEGOModelImporter_ConnectionU29U3E_get_Current_mA3A1639CB6480F936FDB95BF0374FF55F734A779 (U3CGetEnumeratorU3Ed__4_t323214E45DA8AE991432AD6782BA8C009E277613 * __this, const RuntimeMethod* method)
{
	{
		ValueTuple_2_tE31844093EA6E41DA2EECECABE9C6C6D09CD170D  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void LEGOModelImporter.Connectivity/ConnectionIterator/<GetEnumerator>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__4_System_Collections_IEnumerator_Reset_m13CF60923B14E6770FFA8197ACB211E8C8920E75 (U3CGetEnumeratorU3Ed__4_t323214E45DA8AE991432AD6782BA8C009E277613 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__4_System_Collections_IEnumerator_Reset_m13CF60923B14E6770FFA8197ACB211E8C8920E75_RuntimeMethod_var)));
	}
}
// System.Object LEGOModelImporter.Connectivity/ConnectionIterator/<GetEnumerator>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__4_System_Collections_IEnumerator_get_Current_mA33E0B8F2728E4A6F72B1F24FCEFDC52DBD736BD (U3CGetEnumeratorU3Ed__4_t323214E45DA8AE991432AD6782BA8C009E277613 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2_tE31844093EA6E41DA2EECECABE9C6C6D09CD170D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ValueTuple_2_tE31844093EA6E41DA2EECECABE9C6C6D09CD170D  L_0 = __this->get_U3CU3E2__current_1();
		ValueTuple_2_tE31844093EA6E41DA2EECECABE9C6C6D09CD170D  L_1 = L_0;
		RuntimeObject * L_2 = Box(ValueTuple_2_tE31844093EA6E41DA2EECECABE9C6C6D09CD170D_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BrickBuildingUtility_get_IgnoreMask_m05BF714B41E26C92A89CEBC990AADF4B9A864492_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BrickBuildingUtility_t9BB0DA76B8CCBFAB0FD4E7A51C3D7411952C767E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int IgnoreMask => ignoreMask;
		IL2CPP_RUNTIME_CLASS_INIT(BrickBuildingUtility_t9BB0DA76B8CCBFAB0FD4E7A51C3D7411952C767E_il2cpp_TypeInfo_var);
		int32_t L_0 = ((BrickBuildingUtility_t9BB0DA76B8CCBFAB0FD4E7A51C3D7411952C767E_StaticFields*)il2cpp_codegen_static_fields_for(BrickBuildingUtility_t9BB0DA76B8CCBFAB0FD4E7A51C3D7411952C767E_il2cpp_TypeInfo_var))->get_ignoreMask_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_X_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Y_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* BrickBuildingUtility_get_ColliderBuffer_m90E3B3B0BC31339A5C434E8C5DDE6B142D9FA9F6_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BrickBuildingUtility_t9BB0DA76B8CCBFAB0FD4E7A51C3D7411952C767E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Collider[] ColliderBuffer => colliderBuffer;
		IL2CPP_RUNTIME_CLASS_INIT(BrickBuildingUtility_t9BB0DA76B8CCBFAB0FD4E7A51C3D7411952C767E_il2cpp_TypeInfo_var);
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_0 = ((BrickBuildingUtility_t9BB0DA76B8CCBFAB0FD4E7A51C3D7411952C767E_StaticFields*)il2cpp_codegen_static_fields_for(BrickBuildingUtility_t9BB0DA76B8CCBFAB0FD4E7A51C3D7411952C767E_il2cpp_TypeInfo_var))->get_colliderBuffer_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rhs1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___lhs0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___rhs1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___lhs0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___rhs1;
		float L_11 = L_10.get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * PlanarField_GetConnectedConnections_m78B59C683E10A59630A4A6261984EE16839F98C3_inline (PlanarField_t4EE19196A503401B1B606CDF16E8A3066F7F4F65 * __this, const RuntimeMethod* method)
{
	{
		// return connected;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = __this->get_connected_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___x0;
		__this->set_m_X_0(L_0);
		int32_t L_1 = ___y1;
		__this->set_m_Y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_ToAngleAxis_m4282D6D010AFDC7F8F4E1EB2558A298D5E3BCBEE_inline (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, float* ___angle0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___axis1, const RuntimeMethod* method)
{
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = (*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)__this);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = ___axis1;
		float* L_2 = ___angle0;
		Quaternion_Internal_ToAxisAngleRad_m23B56B716466DB8582FCE8AC02EF094AA1C6C2F5(L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_1, (float*)L_2, /*hidden argument*/NULL);
		float* L_3 = ___angle0;
		float* L_4 = ___angle0;
		float L_5 = *((float*)L_4);
		*((float*)L_3) = (float)((float)il2cpp_codegen_multiply((float)L_5, (float)(57.2957802f)));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Vector2Int_op_Addition_mD8F595C79642BE4C542F070C7D65C255D1A19C29_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___a0, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___b1, const RuntimeMethod* method)
{
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___a0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___b1), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___a0), /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___b1), /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_4), ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_x_m58F3B1895453A0A4BC964CA331D56B7C3D873B7C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_X_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC55AF9E2F45639649E40AF5919D6169FD9543E01_gshared_inline (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get__current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  Enumerator_get_Current_m1C7F1E4BCF91D730C26F7D52DEE3737D7B683CE3_gshared_inline (Enumerator_t7DD1F5182F2AF49975E789B7B9B55148BBD46D65 * __this, const RuntimeMethod* method)
{
	{
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_0 = (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )__this->get__current_3();
		return (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_current_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  Enumerator_get_Current_m8B737F0ABD2247C4E13D52C15DEAB59C34368B56_gshared_inline (Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 * __this, const RuntimeMethod* method)
{
	{
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_0 = (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )__this->get_current_3();
		return (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_0;
	}
}
