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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedList_1_tA10B31EBEC493C82ECB77F028307E3CCC8F0EDF9;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.CmdLogItem>
struct Queue_1_t72958C8E3CB523A6E076117E0712B4EAF263FEB7;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.StreamBuffer>
struct Queue_1_t2B2612F7BE61301DEDF4F890E4F5367D778FC12F;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>
struct Queue_1_t8436C2B4A16DF42BF18573DEDB0F4D5064C2B8AE;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// ExitGames.Client.Photon.EventData
struct EventData_tDF6852AC8418EFC44C9C88CCC25226400C9FAA31;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// Photon.SocketServer.Security.ICryptoProvider
struct ICryptoProvider_t45AF0B7A1D230BA087DE740DDFEBFD876076E75B;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80;
// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF;
// ExitGames.Client.Photon.IProtocol
struct IProtocol_tE34131CF5A8A0FF12F4C6264A2B3BCB449F4174A;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// ExitGames.Client.Photon.NCommand
struct NCommand_t851CF93131DA111A6A039850168F376D0050D038;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t4A1C331EC3287275813D225F252C36EF3DE2AE4C;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// ExitGames.Client.Photon.SocketWebTcp
struct SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3;
// System.String
struct String_t;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// ExitGames.Client.Photon.WaitForRealSeconds
struct WaitForRealSeconds_t019FE804AE5457DE4E53B86DD95F9BD9348FE00D;
// WebSocket
struct WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0;
// ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12
struct U3CReceiveLoopU3Ed__12_t30BCC1D0885EE392586B5EB02827348CCA1BB42A;
// ExitGames.Client.Photon.SocketWebTcp/MonoBehaviourExt
struct MonoBehaviourExt_t3E9922DCD27F4FD7B3C00046BCFFFE1C9D063717;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonSocketState_tC9A83DC96CCE242EDCFFF9861BF05C2ADA7FFF9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CReceiveLoopU3Ed__12_t30BCC1D0885EE392586B5EB02827348CCA1BB42A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForRealSeconds_t019FE804AE5457DE4E53B86DD95F9BD9348FE00D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral062C159E09943C99E139190E5A591006A545AA4A;
IL2CPP_EXTERN_C String_t* _stringLiteral14B62430EC3FF6AF6C57F10516C6EC5C8D0497F3;
IL2CPP_EXTERN_C String_t* _stringLiteral1D8DE4CB154AC0296896C7FD3192C85F2FE4730D;
IL2CPP_EXTERN_C String_t* _stringLiteral37422C200CFCABD757B9019D3ABA76E55A7A5DA5;
IL2CPP_EXTERN_C String_t* _stringLiteral4B6F259D090A7AB0D2DC04B00C4CAA926D17DD6D;
IL2CPP_EXTERN_C String_t* _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C;
IL2CPP_EXTERN_C String_t* _stringLiteral57181476910FA4C16EFCC0E7443CD9C417D2514B;
IL2CPP_EXTERN_C String_t* _stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95;
IL2CPP_EXTERN_C String_t* _stringLiteral595137F8C876A16A4A12C20E052B255B02F22D8D;
IL2CPP_EXTERN_C String_t* _stringLiteral665908BFFBC2A550A5A9FF79CD8BAB040074DC9A;
IL2CPP_EXTERN_C String_t* _stringLiteral6694B5F6F3666B90EF97D3CC74C9D8B36A63411A;
IL2CPP_EXTERN_C String_t* _stringLiteral6A328C89F6BA1B16C6636D0A5824840B5CFB5593;
IL2CPP_EXTERN_C String_t* _stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64;
IL2CPP_EXTERN_C String_t* _stringLiteral8334317A1EF5557A23201DAC301958FB87859F5B;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3;
IL2CPP_EXTERN_C String_t* _stringLiteral92AD75AD6FCA907A1DC04172D9D3B3DCA5284978;
IL2CPP_EXTERN_C String_t* _stringLiteral95F53809B4EBC36EDD99FA5DD91761569389BB23;
IL2CPP_EXTERN_C String_t* _stringLiteralA2076A563A22DA628C30B53A80EA51616D9C8C7C;
IL2CPP_EXTERN_C String_t* _stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF;
IL2CPP_EXTERN_C String_t* _stringLiteralCA9193E11FC474EEF79F82B6F77150AE7F202155;
IL2CPP_EXTERN_C String_t* _stringLiteralEA04D4286952D44B4CB5C87E7D30E05FE4153434;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMonoBehaviourExt_t3E9922DCD27F4FD7B3C00046BCFFFE1C9D063717_mF7C0588322E66F2F9EB476B071BFF8015203D57F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReceiveLoopU3Ed__12_System_Collections_IEnumerator_Reset_m9ACEC68DED142D9FDF364298D151F1DE69745ECE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket__ctor_m8902CC3AD1E8BF87C80407B04F0FC5E8AFD8DF65_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t00DDB26693B7BCCD40544DBD546A67E6CCF39740 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// System.Text.Encoding
struct  Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
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
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// WebSocket
struct  WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0  : public RuntimeObject
{
public:
	// System.Uri WebSocket::mUrl
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___mUrl_0;
	// System.String WebSocket::protocols
	String_t* ___protocols_1;
	// System.Int32 WebSocket::m_NativeRef
	int32_t ___m_NativeRef_2;

public:
	inline static int32_t get_offset_of_mUrl_0() { return static_cast<int32_t>(offsetof(WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0, ___mUrl_0)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_mUrl_0() const { return ___mUrl_0; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_mUrl_0() { return &___mUrl_0; }
	inline void set_mUrl_0(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___mUrl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mUrl_0), (void*)value);
	}

	inline static int32_t get_offset_of_protocols_1() { return static_cast<int32_t>(offsetof(WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0, ___protocols_1)); }
	inline String_t* get_protocols_1() const { return ___protocols_1; }
	inline String_t** get_address_of_protocols_1() { return &___protocols_1; }
	inline void set_protocols_1(String_t* value)
	{
		___protocols_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___protocols_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_NativeRef_2() { return static_cast<int32_t>(offsetof(WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0, ___m_NativeRef_2)); }
	inline int32_t get_m_NativeRef_2() const { return ___m_NativeRef_2; }
	inline int32_t* get_address_of_m_NativeRef_2() { return &___m_NativeRef_2; }
	inline void set_m_NativeRef_2(int32_t value)
	{
		___m_NativeRef_2 = value;
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
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

// ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12
struct  U3CReceiveLoopU3Ed__12_t30BCC1D0885EE392586B5EB02827348CCA1BB42A  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ExitGames.Client.Photon.SocketWebTcp ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::<>4__this
	SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReceiveLoopU3Ed__12_t30BCC1D0885EE392586B5EB02827348CCA1BB42A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CReceiveLoopU3Ed__12_t30BCC1D0885EE392586B5EB02827348CCA1BB42A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CReceiveLoopU3Ed__12_t30BCC1D0885EE392586B5EB02827348CCA1BB42A, ___U3CU3E4__this_2)); }
	inline SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct  IntPtr_t 
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


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// ExitGames.Client.Photon.WaitForRealSeconds
struct  WaitForRealSeconds_t019FE804AE5457DE4E53B86DD95F9BD9348FE00D  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Single ExitGames.Client.Photon.WaitForRealSeconds::_endTime
	float ____endTime_0;

public:
	inline static int32_t get_offset_of__endTime_0() { return static_cast<int32_t>(offsetof(WaitForRealSeconds_t019FE804AE5457DE4E53B86DD95F9BD9348FE00D, ____endTime_0)); }
	inline float get__endTime_0() const { return ____endTime_0; }
	inline float* get_address_of__endTime_0() { return &____endTime_0; }
	inline void set__endTime_0(float value)
	{
		____endTime_0 = value;
	}
};


// ExitGames.Client.Photon.ConnectionProtocol
struct  ConnectionProtocol_tE1E52FB16671F42D905FF339B6DB6104717B8470 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionProtocol_tE1E52FB16671F42D905FF339B6DB6104717B8470, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.ConnectionStateValue
struct  ConnectionStateValue_t632C7ED12C80052ADD64C243BC3EC72F835CBFA6 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionStateValue::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionStateValue_t632C7ED12C80052ADD64C243BC3EC72F835CBFA6, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
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

// ExitGames.Client.Photon.DebugLevel
struct  DebugLevel_t1AA68061A2483F5935F6403B972903DBFCA6ECDE 
{
public:
	// System.Byte ExitGames.Client.Photon.DebugLevel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugLevel_t1AA68061A2483F5935F6403B972903DBFCA6ECDE, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
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

// UnityEngine.HideFlags
struct  HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// ExitGames.Client.Photon.PhotonSocketError
struct  PhotonSocketError_tCC031685ABF681EDD524482F9392F2750FC3FDCD 
{
public:
	// System.Int32 ExitGames.Client.Photon.PhotonSocketError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PhotonSocketError_tCC031685ABF681EDD524482F9392F2750FC3FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.PhotonSocketState
struct  PhotonSocketState_tC9A83DC96CCE242EDCFFF9861BF05C2ADA7FFF9C 
{
public:
	// System.Int32 ExitGames.Client.Photon.PhotonSocketState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PhotonSocketState_tC9A83DC96CCE242EDCFFF9861BF05C2ADA7FFF9C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.StatusCode
struct  StatusCode_t6F87CDCBF50905676077CA9EE99D37785B1CB9A3 
{
public:
	// System.Int32 ExitGames.Client.Photon.StatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StatusCode_t6F87CDCBF50905676077CA9EE99D37785B1CB9A3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct  UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Uri/Flags
struct  Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// ExitGames.Client.Photon.IPhotonSocket
struct  IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.IPhotonSocket::peerBase
	PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * ___peerBase_0;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.IPhotonSocket::Protocol
	uint8_t ___Protocol_1;
	// System.Boolean ExitGames.Client.Photon.IPhotonSocket::PollReceive
	bool ___PollReceive_2;
	// ExitGames.Client.Photon.PhotonSocketState ExitGames.Client.Photon.IPhotonSocket::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_3;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField_4;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ProxyServerAddress>k__BackingField
	String_t* ___U3CProxyServerAddressU3Ek__BackingField_5;
	// System.Int32 ExitGames.Client.Photon.IPhotonSocket::<ServerPort>k__BackingField
	int32_t ___U3CServerPortU3Ek__BackingField_7;
	// System.Boolean ExitGames.Client.Photon.IPhotonSocket::<AddressResolvedAsIpv6>k__BackingField
	bool ___U3CAddressResolvedAsIpv6U3Ek__BackingField_8;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<UrlProtocol>k__BackingField
	String_t* ___U3CUrlProtocolU3Ek__BackingField_9;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<UrlPath>k__BackingField
	String_t* ___U3CUrlPathU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_peerBase_0() { return static_cast<int32_t>(offsetof(IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF, ___peerBase_0)); }
	inline PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * get_peerBase_0() const { return ___peerBase_0; }
	inline PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 ** get_address_of_peerBase_0() { return &___peerBase_0; }
	inline void set_peerBase_0(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * value)
	{
		___peerBase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peerBase_0), (void*)value);
	}

	inline static int32_t get_offset_of_Protocol_1() { return static_cast<int32_t>(offsetof(IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF, ___Protocol_1)); }
	inline uint8_t get_Protocol_1() const { return ___Protocol_1; }
	inline uint8_t* get_address_of_Protocol_1() { return &___Protocol_1; }
	inline void set_Protocol_1(uint8_t value)
	{
		___Protocol_1 = value;
	}

	inline static int32_t get_offset_of_PollReceive_2() { return static_cast<int32_t>(offsetof(IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF, ___PollReceive_2)); }
	inline bool get_PollReceive_2() const { return ___PollReceive_2; }
	inline bool* get_address_of_PollReceive_2() { return &___PollReceive_2; }
	inline void set_PollReceive_2(bool value)
	{
		___PollReceive_2 = value;
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF, ___U3CStateU3Ek__BackingField_3)); }
	inline int32_t get_U3CStateU3Ek__BackingField_3() const { return ___U3CStateU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_3() { return &___U3CStateU3Ek__BackingField_3; }
	inline void set_U3CStateU3Ek__BackingField_3(int32_t value)
	{
		___U3CStateU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CServerAddressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF, ___U3CServerAddressU3Ek__BackingField_4)); }
	inline String_t* get_U3CServerAddressU3Ek__BackingField_4() const { return ___U3CServerAddressU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CServerAddressU3Ek__BackingField_4() { return &___U3CServerAddressU3Ek__BackingField_4; }
	inline void set_U3CServerAddressU3Ek__BackingField_4(String_t* value)
	{
		___U3CServerAddressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServerAddressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProxyServerAddressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF, ___U3CProxyServerAddressU3Ek__BackingField_5)); }
	inline String_t* get_U3CProxyServerAddressU3Ek__BackingField_5() const { return ___U3CProxyServerAddressU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CProxyServerAddressU3Ek__BackingField_5() { return &___U3CProxyServerAddressU3Ek__BackingField_5; }
	inline void set_U3CProxyServerAddressU3Ek__BackingField_5(String_t* value)
	{
		___U3CProxyServerAddressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProxyServerAddressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerPortU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF, ___U3CServerPortU3Ek__BackingField_7)); }
	inline int32_t get_U3CServerPortU3Ek__BackingField_7() const { return ___U3CServerPortU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CServerPortU3Ek__BackingField_7() { return &___U3CServerPortU3Ek__BackingField_7; }
	inline void set_U3CServerPortU3Ek__BackingField_7(int32_t value)
	{
		___U3CServerPortU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CAddressResolvedAsIpv6U3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF, ___U3CAddressResolvedAsIpv6U3Ek__BackingField_8)); }
	inline bool get_U3CAddressResolvedAsIpv6U3Ek__BackingField_8() const { return ___U3CAddressResolvedAsIpv6U3Ek__BackingField_8; }
	inline bool* get_address_of_U3CAddressResolvedAsIpv6U3Ek__BackingField_8() { return &___U3CAddressResolvedAsIpv6U3Ek__BackingField_8; }
	inline void set_U3CAddressResolvedAsIpv6U3Ek__BackingField_8(bool value)
	{
		___U3CAddressResolvedAsIpv6U3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CUrlProtocolU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF, ___U3CUrlProtocolU3Ek__BackingField_9)); }
	inline String_t* get_U3CUrlProtocolU3Ek__BackingField_9() const { return ___U3CUrlProtocolU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CUrlProtocolU3Ek__BackingField_9() { return &___U3CUrlProtocolU3Ek__BackingField_9; }
	inline void set_U3CUrlProtocolU3Ek__BackingField_9(String_t* value)
	{
		___U3CUrlProtocolU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUrlProtocolU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUrlPathU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF, ___U3CUrlPathU3Ek__BackingField_10)); }
	inline String_t* get_U3CUrlPathU3Ek__BackingField_10() const { return ___U3CUrlPathU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CUrlPathU3Ek__BackingField_10() { return &___U3CUrlPathU3Ek__BackingField_10; }
	inline void set_U3CUrlPathU3Ek__BackingField_10(String_t* value)
	{
		___U3CUrlPathU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUrlPathU3Ek__BackingField_10), (void*)value);
	}
};

struct IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF_StaticFields
{
public:
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ServerIpAddress>k__BackingField
	String_t* ___U3CServerIpAddressU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CServerIpAddressU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF_StaticFields, ___U3CServerIpAddressU3Ek__BackingField_6)); }
	inline String_t* get_U3CServerIpAddressU3Ek__BackingField_6() const { return ___U3CServerIpAddressU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CServerIpAddressU3Ek__BackingField_6() { return &___U3CServerIpAddressU3Ek__BackingField_6; }
	inline void set_U3CServerIpAddressU3Ek__BackingField_6(String_t* value)
	{
		___U3CServerIpAddressU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServerIpAddressU3Ek__BackingField_6), (void*)value);
	}
};


// ExitGames.Client.Photon.PeerBase
struct  PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.PhotonPeer ExitGames.Client.Photon.PeerBase::photonPeer
	PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2 * ___photonPeer_0;
	// ExitGames.Client.Photon.IProtocol ExitGames.Client.Photon.PeerBase::SerializationProtocol
	IProtocol_tE34131CF5A8A0FF12F4C6264A2B3BCB449F4174A * ___SerializationProtocol_1;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PeerBase::usedTransportProtocol
	uint8_t ___usedTransportProtocol_2;
	// ExitGames.Client.Photon.IPhotonSocket ExitGames.Client.Photon.PeerBase::PhotonSocket
	IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * ___PhotonSocket_3;
	// System.String ExitGames.Client.Photon.PeerBase::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField_4;
	// System.String ExitGames.Client.Photon.PeerBase::<ProxyServerAddress>k__BackingField
	String_t* ___U3CProxyServerAddressU3Ek__BackingField_5;
	// ExitGames.Client.Photon.ConnectionStateValue ExitGames.Client.Photon.PeerBase::peerConnectionState
	uint8_t ___peerConnectionState_6;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountLastOperation
	int32_t ___ByteCountLastOperation_7;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountCurrentDispatch
	int32_t ___ByteCountCurrentDispatch_8;
	// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.PeerBase::CommandInCurrentDispatch
	NCommand_t851CF93131DA111A6A039850168F376D0050D038 * ___CommandInCurrentDispatch_9;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByCrc
	int32_t ___packetLossByCrc_10;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByChallenge
	int32_t ___packetLossByChallenge_11;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction> ExitGames.Client.Photon.PeerBase::ActionQueue
	Queue_1_t8436C2B4A16DF42BF18573DEDB0F4D5064C2B8AE * ___ActionQueue_12;
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerID
	int16_t ___peerID_13;
	// System.Int32 ExitGames.Client.Photon.PeerBase::serverTimeOffset
	int32_t ___serverTimeOffset_14;
	// System.Boolean ExitGames.Client.Photon.PeerBase::serverTimeOffsetIsAvailable
	bool ___serverTimeOffsetIsAvailable_15;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTime
	int32_t ___roundTripTime_16;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTimeVariance
	int32_t ___roundTripTimeVariance_17;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lastRoundTripTime
	int32_t ___lastRoundTripTime_18;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lowestRoundTripTime
	int32_t ___lowestRoundTripTime_19;
	// System.Int32 ExitGames.Client.Photon.PeerBase::highestRoundTripTimeVariance
	int32_t ___highestRoundTripTimeVariance_20;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timestampOfLastReceive
	int32_t ___timestampOfLastReceive_21;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesOut
	int64_t ___bytesOut_23;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesIn
	int64_t ___bytesIn_24;
	// System.Object ExitGames.Client.Photon.PeerBase::CustomInitData
	RuntimeObject * ___CustomInitData_25;
	// System.String ExitGames.Client.Photon.PeerBase::AppId
	String_t* ___AppId_26;
	// ExitGames.Client.Photon.EventData ExitGames.Client.Photon.PeerBase::reusableEventData
	EventData_tDF6852AC8418EFC44C9C88CCC25226400C9FAA31 * ___reusableEventData_27;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeBase
	int32_t ___timeBase_28;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeoutInt
	int32_t ___timeoutInt_29;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastAckReceive
	int32_t ___timeLastAckReceive_30;
	// System.Int32 ExitGames.Client.Photon.PeerBase::longestSentCall
	int32_t ___longestSentCall_31;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendAck
	int32_t ___timeLastSendAck_32;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendOutgoing
	int32_t ___timeLastSendOutgoing_33;
	// System.Boolean ExitGames.Client.Photon.PeerBase::ApplicationIsInitialized
	bool ___ApplicationIsInitialized_34;
	// System.Boolean ExitGames.Client.Photon.PeerBase::isEncryptionAvailable
	bool ___isEncryptionAvailable_35;
	// System.Int32 ExitGames.Client.Photon.PeerBase::outgoingCommandsInStream
	int32_t ___outgoingCommandsInStream_36;
	// Photon.SocketServer.Security.ICryptoProvider ExitGames.Client.Photon.PeerBase::CryptoProvider
	RuntimeObject* ___CryptoProvider_38;
	// System.Random ExitGames.Client.Photon.PeerBase::lagRandomizer
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___lagRandomizer_39;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListOutgoing
	LinkedList_1_tA10B31EBEC493C82ECB77F028307E3CCC8F0EDF9 * ___NetSimListOutgoing_40;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListIncoming
	LinkedList_1_tA10B31EBEC493C82ECB77F028307E3CCC8F0EDF9 * ___NetSimListIncoming_41;
	// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::networkSimulationSettings
	NetworkSimulationSet_t4A1C331EC3287275813D225F252C36EF3DE2AE4C * ___networkSimulationSettings_42;
	// System.Int32 ExitGames.Client.Photon.PeerBase::TrafficPackageHeaderSize
	int32_t ___TrafficPackageHeaderSize_43;
	// System.Int32 ExitGames.Client.Photon.PeerBase::commandLogSize
	int32_t ___commandLogSize_44;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.CmdLogItem> ExitGames.Client.Photon.PeerBase::CommandLog
	Queue_1_t72958C8E3CB523A6E076117E0712B4EAF263FEB7 * ___CommandLog_45;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.CmdLogItem> ExitGames.Client.Photon.PeerBase::InReliableLog
	Queue_1_t72958C8E3CB523A6E076117E0712B4EAF263FEB7 * ___InReliableLog_46;

public:
	inline static int32_t get_offset_of_photonPeer_0() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___photonPeer_0)); }
	inline PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2 * get_photonPeer_0() const { return ___photonPeer_0; }
	inline PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2 ** get_address_of_photonPeer_0() { return &___photonPeer_0; }
	inline void set_photonPeer_0(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2 * value)
	{
		___photonPeer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonPeer_0), (void*)value);
	}

	inline static int32_t get_offset_of_SerializationProtocol_1() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___SerializationProtocol_1)); }
	inline IProtocol_tE34131CF5A8A0FF12F4C6264A2B3BCB449F4174A * get_SerializationProtocol_1() const { return ___SerializationProtocol_1; }
	inline IProtocol_tE34131CF5A8A0FF12F4C6264A2B3BCB449F4174A ** get_address_of_SerializationProtocol_1() { return &___SerializationProtocol_1; }
	inline void set_SerializationProtocol_1(IProtocol_tE34131CF5A8A0FF12F4C6264A2B3BCB449F4174A * value)
	{
		___SerializationProtocol_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SerializationProtocol_1), (void*)value);
	}

	inline static int32_t get_offset_of_usedTransportProtocol_2() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___usedTransportProtocol_2)); }
	inline uint8_t get_usedTransportProtocol_2() const { return ___usedTransportProtocol_2; }
	inline uint8_t* get_address_of_usedTransportProtocol_2() { return &___usedTransportProtocol_2; }
	inline void set_usedTransportProtocol_2(uint8_t value)
	{
		___usedTransportProtocol_2 = value;
	}

	inline static int32_t get_offset_of_PhotonSocket_3() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___PhotonSocket_3)); }
	inline IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * get_PhotonSocket_3() const { return ___PhotonSocket_3; }
	inline IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF ** get_address_of_PhotonSocket_3() { return &___PhotonSocket_3; }
	inline void set_PhotonSocket_3(IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * value)
	{
		___PhotonSocket_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PhotonSocket_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerAddressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___U3CServerAddressU3Ek__BackingField_4)); }
	inline String_t* get_U3CServerAddressU3Ek__BackingField_4() const { return ___U3CServerAddressU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CServerAddressU3Ek__BackingField_4() { return &___U3CServerAddressU3Ek__BackingField_4; }
	inline void set_U3CServerAddressU3Ek__BackingField_4(String_t* value)
	{
		___U3CServerAddressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServerAddressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProxyServerAddressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___U3CProxyServerAddressU3Ek__BackingField_5)); }
	inline String_t* get_U3CProxyServerAddressU3Ek__BackingField_5() const { return ___U3CProxyServerAddressU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CProxyServerAddressU3Ek__BackingField_5() { return &___U3CProxyServerAddressU3Ek__BackingField_5; }
	inline void set_U3CProxyServerAddressU3Ek__BackingField_5(String_t* value)
	{
		___U3CProxyServerAddressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProxyServerAddressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_peerConnectionState_6() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___peerConnectionState_6)); }
	inline uint8_t get_peerConnectionState_6() const { return ___peerConnectionState_6; }
	inline uint8_t* get_address_of_peerConnectionState_6() { return &___peerConnectionState_6; }
	inline void set_peerConnectionState_6(uint8_t value)
	{
		___peerConnectionState_6 = value;
	}

	inline static int32_t get_offset_of_ByteCountLastOperation_7() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___ByteCountLastOperation_7)); }
	inline int32_t get_ByteCountLastOperation_7() const { return ___ByteCountLastOperation_7; }
	inline int32_t* get_address_of_ByteCountLastOperation_7() { return &___ByteCountLastOperation_7; }
	inline void set_ByteCountLastOperation_7(int32_t value)
	{
		___ByteCountLastOperation_7 = value;
	}

	inline static int32_t get_offset_of_ByteCountCurrentDispatch_8() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___ByteCountCurrentDispatch_8)); }
	inline int32_t get_ByteCountCurrentDispatch_8() const { return ___ByteCountCurrentDispatch_8; }
	inline int32_t* get_address_of_ByteCountCurrentDispatch_8() { return &___ByteCountCurrentDispatch_8; }
	inline void set_ByteCountCurrentDispatch_8(int32_t value)
	{
		___ByteCountCurrentDispatch_8 = value;
	}

	inline static int32_t get_offset_of_CommandInCurrentDispatch_9() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___CommandInCurrentDispatch_9)); }
	inline NCommand_t851CF93131DA111A6A039850168F376D0050D038 * get_CommandInCurrentDispatch_9() const { return ___CommandInCurrentDispatch_9; }
	inline NCommand_t851CF93131DA111A6A039850168F376D0050D038 ** get_address_of_CommandInCurrentDispatch_9() { return &___CommandInCurrentDispatch_9; }
	inline void set_CommandInCurrentDispatch_9(NCommand_t851CF93131DA111A6A039850168F376D0050D038 * value)
	{
		___CommandInCurrentDispatch_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CommandInCurrentDispatch_9), (void*)value);
	}

	inline static int32_t get_offset_of_packetLossByCrc_10() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___packetLossByCrc_10)); }
	inline int32_t get_packetLossByCrc_10() const { return ___packetLossByCrc_10; }
	inline int32_t* get_address_of_packetLossByCrc_10() { return &___packetLossByCrc_10; }
	inline void set_packetLossByCrc_10(int32_t value)
	{
		___packetLossByCrc_10 = value;
	}

	inline static int32_t get_offset_of_packetLossByChallenge_11() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___packetLossByChallenge_11)); }
	inline int32_t get_packetLossByChallenge_11() const { return ___packetLossByChallenge_11; }
	inline int32_t* get_address_of_packetLossByChallenge_11() { return &___packetLossByChallenge_11; }
	inline void set_packetLossByChallenge_11(int32_t value)
	{
		___packetLossByChallenge_11 = value;
	}

	inline static int32_t get_offset_of_ActionQueue_12() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___ActionQueue_12)); }
	inline Queue_1_t8436C2B4A16DF42BF18573DEDB0F4D5064C2B8AE * get_ActionQueue_12() const { return ___ActionQueue_12; }
	inline Queue_1_t8436C2B4A16DF42BF18573DEDB0F4D5064C2B8AE ** get_address_of_ActionQueue_12() { return &___ActionQueue_12; }
	inline void set_ActionQueue_12(Queue_1_t8436C2B4A16DF42BF18573DEDB0F4D5064C2B8AE * value)
	{
		___ActionQueue_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActionQueue_12), (void*)value);
	}

	inline static int32_t get_offset_of_peerID_13() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___peerID_13)); }
	inline int16_t get_peerID_13() const { return ___peerID_13; }
	inline int16_t* get_address_of_peerID_13() { return &___peerID_13; }
	inline void set_peerID_13(int16_t value)
	{
		___peerID_13 = value;
	}

	inline static int32_t get_offset_of_serverTimeOffset_14() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___serverTimeOffset_14)); }
	inline int32_t get_serverTimeOffset_14() const { return ___serverTimeOffset_14; }
	inline int32_t* get_address_of_serverTimeOffset_14() { return &___serverTimeOffset_14; }
	inline void set_serverTimeOffset_14(int32_t value)
	{
		___serverTimeOffset_14 = value;
	}

	inline static int32_t get_offset_of_serverTimeOffsetIsAvailable_15() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___serverTimeOffsetIsAvailable_15)); }
	inline bool get_serverTimeOffsetIsAvailable_15() const { return ___serverTimeOffsetIsAvailable_15; }
	inline bool* get_address_of_serverTimeOffsetIsAvailable_15() { return &___serverTimeOffsetIsAvailable_15; }
	inline void set_serverTimeOffsetIsAvailable_15(bool value)
	{
		___serverTimeOffsetIsAvailable_15 = value;
	}

	inline static int32_t get_offset_of_roundTripTime_16() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___roundTripTime_16)); }
	inline int32_t get_roundTripTime_16() const { return ___roundTripTime_16; }
	inline int32_t* get_address_of_roundTripTime_16() { return &___roundTripTime_16; }
	inline void set_roundTripTime_16(int32_t value)
	{
		___roundTripTime_16 = value;
	}

	inline static int32_t get_offset_of_roundTripTimeVariance_17() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___roundTripTimeVariance_17)); }
	inline int32_t get_roundTripTimeVariance_17() const { return ___roundTripTimeVariance_17; }
	inline int32_t* get_address_of_roundTripTimeVariance_17() { return &___roundTripTimeVariance_17; }
	inline void set_roundTripTimeVariance_17(int32_t value)
	{
		___roundTripTimeVariance_17 = value;
	}

	inline static int32_t get_offset_of_lastRoundTripTime_18() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___lastRoundTripTime_18)); }
	inline int32_t get_lastRoundTripTime_18() const { return ___lastRoundTripTime_18; }
	inline int32_t* get_address_of_lastRoundTripTime_18() { return &___lastRoundTripTime_18; }
	inline void set_lastRoundTripTime_18(int32_t value)
	{
		___lastRoundTripTime_18 = value;
	}

	inline static int32_t get_offset_of_lowestRoundTripTime_19() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___lowestRoundTripTime_19)); }
	inline int32_t get_lowestRoundTripTime_19() const { return ___lowestRoundTripTime_19; }
	inline int32_t* get_address_of_lowestRoundTripTime_19() { return &___lowestRoundTripTime_19; }
	inline void set_lowestRoundTripTime_19(int32_t value)
	{
		___lowestRoundTripTime_19 = value;
	}

	inline static int32_t get_offset_of_highestRoundTripTimeVariance_20() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___highestRoundTripTimeVariance_20)); }
	inline int32_t get_highestRoundTripTimeVariance_20() const { return ___highestRoundTripTimeVariance_20; }
	inline int32_t* get_address_of_highestRoundTripTimeVariance_20() { return &___highestRoundTripTimeVariance_20; }
	inline void set_highestRoundTripTimeVariance_20(int32_t value)
	{
		___highestRoundTripTimeVariance_20 = value;
	}

	inline static int32_t get_offset_of_timestampOfLastReceive_21() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___timestampOfLastReceive_21)); }
	inline int32_t get_timestampOfLastReceive_21() const { return ___timestampOfLastReceive_21; }
	inline int32_t* get_address_of_timestampOfLastReceive_21() { return &___timestampOfLastReceive_21; }
	inline void set_timestampOfLastReceive_21(int32_t value)
	{
		___timestampOfLastReceive_21 = value;
	}

	inline static int32_t get_offset_of_bytesOut_23() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___bytesOut_23)); }
	inline int64_t get_bytesOut_23() const { return ___bytesOut_23; }
	inline int64_t* get_address_of_bytesOut_23() { return &___bytesOut_23; }
	inline void set_bytesOut_23(int64_t value)
	{
		___bytesOut_23 = value;
	}

	inline static int32_t get_offset_of_bytesIn_24() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___bytesIn_24)); }
	inline int64_t get_bytesIn_24() const { return ___bytesIn_24; }
	inline int64_t* get_address_of_bytesIn_24() { return &___bytesIn_24; }
	inline void set_bytesIn_24(int64_t value)
	{
		___bytesIn_24 = value;
	}

	inline static int32_t get_offset_of_CustomInitData_25() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___CustomInitData_25)); }
	inline RuntimeObject * get_CustomInitData_25() const { return ___CustomInitData_25; }
	inline RuntimeObject ** get_address_of_CustomInitData_25() { return &___CustomInitData_25; }
	inline void set_CustomInitData_25(RuntimeObject * value)
	{
		___CustomInitData_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomInitData_25), (void*)value);
	}

	inline static int32_t get_offset_of_AppId_26() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___AppId_26)); }
	inline String_t* get_AppId_26() const { return ___AppId_26; }
	inline String_t** get_address_of_AppId_26() { return &___AppId_26; }
	inline void set_AppId_26(String_t* value)
	{
		___AppId_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppId_26), (void*)value);
	}

	inline static int32_t get_offset_of_reusableEventData_27() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___reusableEventData_27)); }
	inline EventData_tDF6852AC8418EFC44C9C88CCC25226400C9FAA31 * get_reusableEventData_27() const { return ___reusableEventData_27; }
	inline EventData_tDF6852AC8418EFC44C9C88CCC25226400C9FAA31 ** get_address_of_reusableEventData_27() { return &___reusableEventData_27; }
	inline void set_reusableEventData_27(EventData_tDF6852AC8418EFC44C9C88CCC25226400C9FAA31 * value)
	{
		___reusableEventData_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reusableEventData_27), (void*)value);
	}

	inline static int32_t get_offset_of_timeBase_28() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___timeBase_28)); }
	inline int32_t get_timeBase_28() const { return ___timeBase_28; }
	inline int32_t* get_address_of_timeBase_28() { return &___timeBase_28; }
	inline void set_timeBase_28(int32_t value)
	{
		___timeBase_28 = value;
	}

	inline static int32_t get_offset_of_timeoutInt_29() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___timeoutInt_29)); }
	inline int32_t get_timeoutInt_29() const { return ___timeoutInt_29; }
	inline int32_t* get_address_of_timeoutInt_29() { return &___timeoutInt_29; }
	inline void set_timeoutInt_29(int32_t value)
	{
		___timeoutInt_29 = value;
	}

	inline static int32_t get_offset_of_timeLastAckReceive_30() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___timeLastAckReceive_30)); }
	inline int32_t get_timeLastAckReceive_30() const { return ___timeLastAckReceive_30; }
	inline int32_t* get_address_of_timeLastAckReceive_30() { return &___timeLastAckReceive_30; }
	inline void set_timeLastAckReceive_30(int32_t value)
	{
		___timeLastAckReceive_30 = value;
	}

	inline static int32_t get_offset_of_longestSentCall_31() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___longestSentCall_31)); }
	inline int32_t get_longestSentCall_31() const { return ___longestSentCall_31; }
	inline int32_t* get_address_of_longestSentCall_31() { return &___longestSentCall_31; }
	inline void set_longestSentCall_31(int32_t value)
	{
		___longestSentCall_31 = value;
	}

	inline static int32_t get_offset_of_timeLastSendAck_32() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___timeLastSendAck_32)); }
	inline int32_t get_timeLastSendAck_32() const { return ___timeLastSendAck_32; }
	inline int32_t* get_address_of_timeLastSendAck_32() { return &___timeLastSendAck_32; }
	inline void set_timeLastSendAck_32(int32_t value)
	{
		___timeLastSendAck_32 = value;
	}

	inline static int32_t get_offset_of_timeLastSendOutgoing_33() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___timeLastSendOutgoing_33)); }
	inline int32_t get_timeLastSendOutgoing_33() const { return ___timeLastSendOutgoing_33; }
	inline int32_t* get_address_of_timeLastSendOutgoing_33() { return &___timeLastSendOutgoing_33; }
	inline void set_timeLastSendOutgoing_33(int32_t value)
	{
		___timeLastSendOutgoing_33 = value;
	}

	inline static int32_t get_offset_of_ApplicationIsInitialized_34() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___ApplicationIsInitialized_34)); }
	inline bool get_ApplicationIsInitialized_34() const { return ___ApplicationIsInitialized_34; }
	inline bool* get_address_of_ApplicationIsInitialized_34() { return &___ApplicationIsInitialized_34; }
	inline void set_ApplicationIsInitialized_34(bool value)
	{
		___ApplicationIsInitialized_34 = value;
	}

	inline static int32_t get_offset_of_isEncryptionAvailable_35() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___isEncryptionAvailable_35)); }
	inline bool get_isEncryptionAvailable_35() const { return ___isEncryptionAvailable_35; }
	inline bool* get_address_of_isEncryptionAvailable_35() { return &___isEncryptionAvailable_35; }
	inline void set_isEncryptionAvailable_35(bool value)
	{
		___isEncryptionAvailable_35 = value;
	}

	inline static int32_t get_offset_of_outgoingCommandsInStream_36() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___outgoingCommandsInStream_36)); }
	inline int32_t get_outgoingCommandsInStream_36() const { return ___outgoingCommandsInStream_36; }
	inline int32_t* get_address_of_outgoingCommandsInStream_36() { return &___outgoingCommandsInStream_36; }
	inline void set_outgoingCommandsInStream_36(int32_t value)
	{
		___outgoingCommandsInStream_36 = value;
	}

	inline static int32_t get_offset_of_CryptoProvider_38() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___CryptoProvider_38)); }
	inline RuntimeObject* get_CryptoProvider_38() const { return ___CryptoProvider_38; }
	inline RuntimeObject** get_address_of_CryptoProvider_38() { return &___CryptoProvider_38; }
	inline void set_CryptoProvider_38(RuntimeObject* value)
	{
		___CryptoProvider_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CryptoProvider_38), (void*)value);
	}

	inline static int32_t get_offset_of_lagRandomizer_39() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___lagRandomizer_39)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_lagRandomizer_39() const { return ___lagRandomizer_39; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_lagRandomizer_39() { return &___lagRandomizer_39; }
	inline void set_lagRandomizer_39(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___lagRandomizer_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lagRandomizer_39), (void*)value);
	}

	inline static int32_t get_offset_of_NetSimListOutgoing_40() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___NetSimListOutgoing_40)); }
	inline LinkedList_1_tA10B31EBEC493C82ECB77F028307E3CCC8F0EDF9 * get_NetSimListOutgoing_40() const { return ___NetSimListOutgoing_40; }
	inline LinkedList_1_tA10B31EBEC493C82ECB77F028307E3CCC8F0EDF9 ** get_address_of_NetSimListOutgoing_40() { return &___NetSimListOutgoing_40; }
	inline void set_NetSimListOutgoing_40(LinkedList_1_tA10B31EBEC493C82ECB77F028307E3CCC8F0EDF9 * value)
	{
		___NetSimListOutgoing_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetSimListOutgoing_40), (void*)value);
	}

	inline static int32_t get_offset_of_NetSimListIncoming_41() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___NetSimListIncoming_41)); }
	inline LinkedList_1_tA10B31EBEC493C82ECB77F028307E3CCC8F0EDF9 * get_NetSimListIncoming_41() const { return ___NetSimListIncoming_41; }
	inline LinkedList_1_tA10B31EBEC493C82ECB77F028307E3CCC8F0EDF9 ** get_address_of_NetSimListIncoming_41() { return &___NetSimListIncoming_41; }
	inline void set_NetSimListIncoming_41(LinkedList_1_tA10B31EBEC493C82ECB77F028307E3CCC8F0EDF9 * value)
	{
		___NetSimListIncoming_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetSimListIncoming_41), (void*)value);
	}

	inline static int32_t get_offset_of_networkSimulationSettings_42() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___networkSimulationSettings_42)); }
	inline NetworkSimulationSet_t4A1C331EC3287275813D225F252C36EF3DE2AE4C * get_networkSimulationSettings_42() const { return ___networkSimulationSettings_42; }
	inline NetworkSimulationSet_t4A1C331EC3287275813D225F252C36EF3DE2AE4C ** get_address_of_networkSimulationSettings_42() { return &___networkSimulationSettings_42; }
	inline void set_networkSimulationSettings_42(NetworkSimulationSet_t4A1C331EC3287275813D225F252C36EF3DE2AE4C * value)
	{
		___networkSimulationSettings_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networkSimulationSettings_42), (void*)value);
	}

	inline static int32_t get_offset_of_TrafficPackageHeaderSize_43() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___TrafficPackageHeaderSize_43)); }
	inline int32_t get_TrafficPackageHeaderSize_43() const { return ___TrafficPackageHeaderSize_43; }
	inline int32_t* get_address_of_TrafficPackageHeaderSize_43() { return &___TrafficPackageHeaderSize_43; }
	inline void set_TrafficPackageHeaderSize_43(int32_t value)
	{
		___TrafficPackageHeaderSize_43 = value;
	}

	inline static int32_t get_offset_of_commandLogSize_44() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___commandLogSize_44)); }
	inline int32_t get_commandLogSize_44() const { return ___commandLogSize_44; }
	inline int32_t* get_address_of_commandLogSize_44() { return &___commandLogSize_44; }
	inline void set_commandLogSize_44(int32_t value)
	{
		___commandLogSize_44 = value;
	}

	inline static int32_t get_offset_of_CommandLog_45() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___CommandLog_45)); }
	inline Queue_1_t72958C8E3CB523A6E076117E0712B4EAF263FEB7 * get_CommandLog_45() const { return ___CommandLog_45; }
	inline Queue_1_t72958C8E3CB523A6E076117E0712B4EAF263FEB7 ** get_address_of_CommandLog_45() { return &___CommandLog_45; }
	inline void set_CommandLog_45(Queue_1_t72958C8E3CB523A6E076117E0712B4EAF263FEB7 * value)
	{
		___CommandLog_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CommandLog_45), (void*)value);
	}

	inline static int32_t get_offset_of_InReliableLog_46() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8, ___InReliableLog_46)); }
	inline Queue_1_t72958C8E3CB523A6E076117E0712B4EAF263FEB7 * get_InReliableLog_46() const { return ___InReliableLog_46; }
	inline Queue_1_t72958C8E3CB523A6E076117E0712B4EAF263FEB7 ** get_address_of_InReliableLog_46() { return &___InReliableLog_46; }
	inline void set_InReliableLog_46(Queue_1_t72958C8E3CB523A6E076117E0712B4EAF263FEB7 * value)
	{
		___InReliableLog_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InReliableLog_46), (void*)value);
	}
};

struct PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8_StaticFields
{
public:
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerCount
	int16_t ___peerCount_22;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.StreamBuffer> ExitGames.Client.Photon.PeerBase::MessageBufferPool
	Queue_1_t2B2612F7BE61301DEDF4F890E4F5367D778FC12F * ___MessageBufferPool_37;

public:
	inline static int32_t get_offset_of_peerCount_22() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8_StaticFields, ___peerCount_22)); }
	inline int16_t get_peerCount_22() const { return ___peerCount_22; }
	inline int16_t* get_address_of_peerCount_22() { return &___peerCount_22; }
	inline void set_peerCount_22(int16_t value)
	{
		___peerCount_22 = value;
	}

	inline static int32_t get_offset_of_MessageBufferPool_37() { return static_cast<int32_t>(offsetof(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8_StaticFields, ___MessageBufferPool_37)); }
	inline Queue_1_t2B2612F7BE61301DEDF4F890E4F5367D778FC12F * get_MessageBufferPool_37() const { return ___MessageBufferPool_37; }
	inline Queue_1_t2B2612F7BE61301DEDF4F890E4F5367D778FC12F ** get_address_of_MessageBufferPool_37() { return &___MessageBufferPool_37; }
	inline void set_MessageBufferPool_37(Queue_1_t2B2612F7BE61301DEDF4F890E4F5367D778FC12F * value)
	{
		___MessageBufferPool_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageBufferPool_37), (void*)value);
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Uri
struct  Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;

public:
	inline static int32_t get_offset_of_m_String_13() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_String_13)); }
	inline String_t* get_m_String_13() const { return ___m_String_13; }
	inline String_t** get_address_of_m_String_13() { return &___m_String_13; }
	inline void set_m_String_13(String_t* value)
	{
		___m_String_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_14() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_originalUnicodeString_14)); }
	inline String_t* get_m_originalUnicodeString_14() const { return ___m_originalUnicodeString_14; }
	inline String_t** get_address_of_m_originalUnicodeString_14() { return &___m_originalUnicodeString_14; }
	inline void set_m_originalUnicodeString_14(String_t* value)
	{
		___m_originalUnicodeString_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_15() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Syntax_15)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_m_Syntax_15() const { return ___m_Syntax_15; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_m_Syntax_15() { return &___m_Syntax_15; }
	inline void set_m_Syntax_15(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___m_Syntax_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_16() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_DnsSafeHost_16)); }
	inline String_t* get_m_DnsSafeHost_16() const { return ___m_DnsSafeHost_16; }
	inline String_t** get_address_of_m_DnsSafeHost_16() { return &___m_DnsSafeHost_16; }
	inline void set_m_DnsSafeHost_16(String_t* value)
	{
		___m_DnsSafeHost_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_17() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Flags_17)); }
	inline uint64_t get_m_Flags_17() const { return ___m_Flags_17; }
	inline uint64_t* get_address_of_m_Flags_17() { return &___m_Flags_17; }
	inline void set_m_Flags_17(uint64_t value)
	{
		___m_Flags_17 = value;
	}

	inline static int32_t get_offset_of_m_Info_18() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Info_18)); }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * get_m_Info_18() const { return ___m_Info_18; }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 ** get_address_of_m_Info_18() { return &___m_Info_18; }
	inline void set_m_Info_18(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * value)
	{
		___m_Info_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_19() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_iriParsing_19)); }
	inline bool get_m_iriParsing_19() const { return ___m_iriParsing_19; }
	inline bool* get_address_of_m_iriParsing_19() { return &___m_iriParsing_19; }
	inline void set_m_iriParsing_19(bool value)
	{
		___m_iriParsing_19 = value;
	}
};

struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____WSchars_28;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_20() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitialized_20)); }
	inline bool get_s_ConfigInitialized_20() const { return ___s_ConfigInitialized_20; }
	inline bool* get_address_of_s_ConfigInitialized_20() { return &___s_ConfigInitialized_20; }
	inline void set_s_ConfigInitialized_20(bool value)
	{
		___s_ConfigInitialized_20 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_21() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitializing_21)); }
	inline bool get_s_ConfigInitializing_21() const { return ___s_ConfigInitializing_21; }
	inline bool* get_address_of_s_ConfigInitializing_21() { return &___s_ConfigInitializing_21; }
	inline void set_s_ConfigInitializing_21(bool value)
	{
		___s_ConfigInitializing_21 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_22() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IdnScope_22)); }
	inline int32_t get_s_IdnScope_22() const { return ___s_IdnScope_22; }
	inline int32_t* get_address_of_s_IdnScope_22() { return &___s_IdnScope_22; }
	inline void set_s_IdnScope_22(int32_t value)
	{
		___s_IdnScope_22 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_23() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IriParsing_23)); }
	inline bool get_s_IriParsing_23() const { return ___s_IriParsing_23; }
	inline bool* get_address_of_s_IriParsing_23() { return &___s_IriParsing_23; }
	inline void set_s_IriParsing_23(bool value)
	{
		___s_IriParsing_23 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_24() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___useDotNetRelativeOrAbsolute_24)); }
	inline bool get_useDotNetRelativeOrAbsolute_24() const { return ___useDotNetRelativeOrAbsolute_24; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_24() { return &___useDotNetRelativeOrAbsolute_24; }
	inline void set_useDotNetRelativeOrAbsolute_24(bool value)
	{
		___useDotNetRelativeOrAbsolute_24 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_25() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___IsWindowsFileSystem_25)); }
	inline bool get_IsWindowsFileSystem_25() const { return ___IsWindowsFileSystem_25; }
	inline bool* get_address_of_IsWindowsFileSystem_25() { return &___IsWindowsFileSystem_25; }
	inline void set_IsWindowsFileSystem_25(bool value)
	{
		___IsWindowsFileSystem_25 = value;
	}

	inline static int32_t get_offset_of_s_initLock_26() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_initLock_26)); }
	inline RuntimeObject * get_s_initLock_26() const { return ___s_initLock_26; }
	inline RuntimeObject ** get_address_of_s_initLock_26() { return &___s_initLock_26; }
	inline void set_s_initLock_26(RuntimeObject * value)
	{
		___s_initLock_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_26), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_27() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___HexLowerChars_27)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HexLowerChars_27() const { return ___HexLowerChars_27; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HexLowerChars_27() { return &___HexLowerChars_27; }
	inline void set_HexLowerChars_27(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HexLowerChars_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_27), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_28() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ____WSchars_28)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__WSchars_28() const { return ____WSchars_28; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__WSchars_28() { return &____WSchars_28; }
	inline void set__WSchars_28(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____WSchars_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_28), (void*)value);
	}
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// ExitGames.Client.Photon.SocketWebTcp
struct  SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3  : public IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF
{
public:
	// WebSocket ExitGames.Client.Photon.SocketWebTcp::sock
	WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * ___sock_11;
	// System.Object ExitGames.Client.Photon.SocketWebTcp::syncer
	RuntimeObject * ___syncer_12;
	// UnityEngine.GameObject ExitGames.Client.Photon.SocketWebTcp::websocketConnectionObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___websocketConnectionObject_13;

public:
	inline static int32_t get_offset_of_sock_11() { return static_cast<int32_t>(offsetof(SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3, ___sock_11)); }
	inline WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * get_sock_11() const { return ___sock_11; }
	inline WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 ** get_address_of_sock_11() { return &___sock_11; }
	inline void set_sock_11(WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * value)
	{
		___sock_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sock_11), (void*)value);
	}

	inline static int32_t get_offset_of_syncer_12() { return static_cast<int32_t>(offsetof(SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3, ___syncer_12)); }
	inline RuntimeObject * get_syncer_12() const { return ___syncer_12; }
	inline RuntimeObject ** get_address_of_syncer_12() { return &___syncer_12; }
	inline void set_syncer_12(RuntimeObject * value)
	{
		___syncer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncer_12), (void*)value);
	}

	inline static int32_t get_offset_of_websocketConnectionObject_13() { return static_cast<int32_t>(offsetof(SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3, ___websocketConnectionObject_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_websocketConnectionObject_13() const { return ___websocketConnectionObject_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_websocketConnectionObject_13() { return &___websocketConnectionObject_13; }
	inline void set_websocketConnectionObject_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___websocketConnectionObject_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___websocketConnectionObject_13), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// ExitGames.Client.Photon.SocketWebTcp/MonoBehaviourExt
struct  MonoBehaviourExt_t3E9922DCD27F4FD7B3C00046BCFFFE1C9D063717  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::.ctor(ExitGames.Client.Photon.PeerBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket__ctor_m71E6E6973C7EE5F9C600D5EE84E3CDF9B7043B0F (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * ___peerBase0, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.PeerBase::get_ServerAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PeerBase_get_ServerAddress_m09A47C70720235340C390D98A2277B8BF94CB288_inline (PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_ServerAddress(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IPhotonSocket_set_ServerAddress_mD133E8D5EA1DA7E24E70676D0D0AF5D8E5403C6D_inline (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::ReportDebugOfLevel(ExitGames.Client.Photon.DebugLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380 (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, uint8_t ___levelOfMessage0, const RuntimeMethod* method);
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.IPhotonSocket::get_Listener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IPhotonSocket_get_Listener_mE1767799EA32C7BBC23E3F1CE0F3E9DD1F508514 (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.IPhotonSocket::get_ServerAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IPhotonSocket_get_ServerAddress_mC37D2749260619C6182508E30BFF8D267D4C06C5_inline (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_State(ExitGames.Client.Photon.PhotonSocketState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IPhotonSocket_set_State_m3E012C91299675DDE497811E6E3C71072C5EAC14_inline (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean WebSocket::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocket_get_Connected_m57802C4DE45F62A8E7D792AD4ECDEF69F75B3369 (WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * __this, const RuntimeMethod* method);
// System.Void WebSocket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Close_mF736608D5FEADAD61DDB10BB273045E829D46EA8 (WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::EnqueueDebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket_EnqueueDebugReturn_m3EFE15EAC913CE16CDE0D9A811C2759F5D54EF7A (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, uint8_t ___debugLevel0, String_t* ___message1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<ExitGames.Client.Photon.SocketWebTcp/MonoBehaviourExt>()
inline MonoBehaviourExt_t3E9922DCD27F4FD7B3C00046BCFFFE1C9D063717 * GameObject_AddComponent_TisMonoBehaviourExt_t3E9922DCD27F4FD7B3C00046BCFFFE1C9D063717_mF7C0588322E66F2F9EB476B071BFF8015203D57F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MonoBehaviourExt_t3E9922DCD27F4FD7B3C00046BCFFFE1C9D063717 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___uriString0, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.IPhotonSocket::get_SerializationProtocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IPhotonSocket_get_SerializationProtocol_mB5BC219F558040CD522CA50CC17FDEAEE10CBBD7 (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, const RuntimeMethod* method);
// System.Void WebSocket::.ctor(System.Uri,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_m8902CC3AD1E8BF87C80407B04F0FC5E8AFD8DF65 (WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___url0, String_t* ___serialization1, const RuntimeMethod* method);
// System.Void WebSocket::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Connect_mE4D8116577F4515A9FEACAC3560FF337509FFC65 (WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator ExitGames.Client.Photon.SocketWebTcp::ReceiveLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SocketWebTcp_ReceiveLoop_m11B4C74930DDEEBE82AA68BB4AFAD780609C4861 (SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// ExitGames.Client.Photon.PhotonSocketState ExitGames.Client.Photon.IPhotonSocket::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725 (RuntimeArray * ___src0, int32_t ___srcOffset1, RuntimeArray * ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.SupportClass::ByteArrayToString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportClass_ByteArrayToString_m5D9691BD295E534DB92BA8EC9F03799D67C2457E (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___list0, const RuntimeMethod* method);
// System.Void WebSocket::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Send_mFB3E62DBAB8F953149234C392CCAA3557CDCCED4 (WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleException(ExitGames.Client.Photon.StatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket_HandleException_mF7643306A79896E98986A71CA9E253F285E7056A (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, int32_t ___statusCode0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveLoopU3Ed__12__ctor_m286B3F4F4ED140D282B2AB7D7E5131F3B6FD9312 (U3CReceiveLoopU3Ed__12_t30BCC1D0885EE392586B5EB02827348CCA1BB42A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B (const RuntimeMethod* method);
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_m01929E3EEB78B751510038B32D889061960DA1BE (CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7 * __this, const RuntimeMethod* method);
// System.String System.Uri::get_Scheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Byte[] WebSocket::Recv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WebSocket_Recv_m7D13080B88A33AB9FC3B736290B4C53A377321CE (WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * __this, const RuntimeMethod* method);
// System.Void WebSocket::SocketSend(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketSend_m53248BBE03BDD59D83DD310208170727907BB685 (int32_t ___socketInstance0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___ptr1, int32_t ___length2, const RuntimeMethod* method);
// System.Int32 WebSocket::SocketRecvLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketRecvLength_m7A4EAA66F39295519F96AC1CBC859203AE512B8D (int32_t ___socketInstance0, const RuntimeMethod* method);
// System.Void WebSocket::SocketRecv(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketRecv_mA1D554A02A40FBF79BDF8E58A6C2B39DEC3E7704 (int32_t ___socketInstance0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___ptr1, int32_t ___length2, const RuntimeMethod* method);
// System.Int32 WebSocket::SocketCreate(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketCreate_m95EECFB4B8774CD31521B33E99501CFC405FCBEC (String_t* ___url0, String_t* ___protocols1, const RuntimeMethod* method);
// System.Void WebSocket::SocketClose(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketClose_m980F0EAA4841665F7D852127233CB3523280815E (int32_t ___socketInstance0, const RuntimeMethod* method);
// System.Int32 WebSocket::SocketState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketState_m1C13D43FF24A08493D209E62599FAD2BAC5E6330 (int32_t ___socketInstance0, const RuntimeMethod* method);
// System.Int32 WebSocket::SocketError(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketError_mF7B2F5AD83B417189BF7321995CAFB5AA0A1C66B (int32_t ___socketInstance0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___ptr1, int32_t ___length2, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.WaitForRealSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForRealSeconds__ctor_m610407B7BECF6B23C0077E8C6B95F30AE878D4ED (WaitForRealSeconds_t019FE804AE5457DE4E53B86DD95F9BD9348FE00D * __this, float ___seconds0, const RuntimeMethod* method);
// System.String WebSocket::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocket_get_Error_m56F32FF29D95FB3ACCD779567AC836C80F35FBE5 (WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.IPhotonSocket::get_ServerPort()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_ServerPort_m87E9048311458445C04EFE6CFAC0B672B9BC96CD_inline (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleReceivedDatagram(System.Byte[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket_HandleReceivedDatagram_mCF72964805372D053B54F92E2BA4B53F9845FC07 (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___inBuffer0, int32_t ___length1, bool ___willBeReused2, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SocketCreate(char*, char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SocketState(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL SocketSend(int32_t, uint8_t*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL SocketRecv(int32_t, uint8_t*, int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SocketRecvLength(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL SocketClose(int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SocketError(int32_t, uint8_t*, int32_t);
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
// System.Void ExitGames.Client.Photon.SocketWebTcp::.ctor(ExitGames.Client.Photon.PeerBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketWebTcp__ctor_m3C70D57ECDA84F894804371592CE0C30E8E93B8D (SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * __this, PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * ___npeer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B6F259D090A7AB0D2DC04B00C4CAA926D17DD6D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly object syncer = new object();
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		__this->set_syncer_12(L_0);
		// public SocketWebTcp(PeerBase npeer) : base(npeer)
		PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * L_1 = ___npeer0;
		IPhotonSocket__ctor_m71E6E6973C7EE5F9C600D5EE84E3CDF9B7043B0F(__this, L_1, /*hidden argument*/NULL);
		// this.ServerAddress = npeer.ServerAddress;
		PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * L_2 = ___npeer0;
		String_t* L_3;
		L_3 = PeerBase_get_ServerAddress_m09A47C70720235340C390D98A2277B8BF94CB288_inline(L_2, /*hidden argument*/NULL);
		IPhotonSocket_set_ServerAddress_mD133E8D5EA1DA7E24E70676D0D0AF5D8E5403C6D_inline(__this, L_3, /*hidden argument*/NULL);
		// if (this.ReportDebugOfLevel(DebugLevel.INFO))
		bool L_4;
		L_4 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(__this, 3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.INFO, "new SocketWebTcp() for Unity. Server: " + this.ServerAddress);
		RuntimeObject* L_5;
		L_5 = IPhotonSocket_get_Listener_mE1767799EA32C7BBC23E3F1CE0F3E9DD1F508514(__this, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = IPhotonSocket_get_ServerAddress_mC37D2749260619C6182508E30BFF8D267D4C06C5_inline(__this, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral4B6F259D090A7AB0D2DC04B00C4CAA926D17DD6D, L_6, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var, L_5, 3, L_7);
	}

IL_0043:
	{
		// this.PollReceive = false;
		((IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF *)__this)->set_PollReceive_2((bool)0);
		// }
		return;
	}
}
// System.Void ExitGames.Client.Photon.SocketWebTcp::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketWebTcp_Dispose_mA1CED3CD90615B8EB2BCFFC99750ED3021EAAC57 (SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * __this, const RuntimeMethod* method)
{
	Exception_t * V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Exception_t * G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	int32_t G_B6_2 = 0;
	SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * G_B6_3 = NULL;
	Exception_t * G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	int32_t G_B5_2 = 0;
	SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * G_B5_3 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	int32_t G_B7_2 = 0;
	SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * G_B7_3 = NULL;
	{
		// this.State = PhotonSocketState.Disconnecting;
		IPhotonSocket_set_State_m3E012C91299675DDE497811E6E3C71072C5EAC14_inline(__this, 3, /*hidden argument*/NULL);
		// if (this.sock != null)
		WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * L_0 = __this->get_sock_11();
		if (!L_0)
		{
			goto IL_004a;
		}
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// if (this.sock.Connected) this.sock.Close();
			WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * L_1 = __this->get_sock_11();
			bool L_2;
			L_2 = WebSocket_get_Connected_m57802C4DE45F62A8E7D792AD4ECDEF69F75B3369(L_1, /*hidden argument*/NULL);
			if (!L_2)
			{
				goto IL_0027;
			}
		}

IL_001c:
		{
			// if (this.sock.Connected) this.sock.Close();
			WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * L_3 = __this->get_sock_11();
			WebSocket_Close_mF736608D5FEADAD61DDB10BB273045E829D46EA8(L_3, /*hidden argument*/NULL);
		}

IL_0027:
		{
			// }
			goto IL_004a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{ // begin catch(System.Exception)
		{
			// catch (Exception ex)
			V_0 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// this.EnqueueDebugReturn(DebugLevel.INFO, "Exception in Dispose(): " + ex);
			Exception_t * L_4 = V_0;
			Exception_t * L_5 = L_4;
			G_B5_0 = L_5;
			G_B5_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral665908BFFBC2A550A5A9FF79CD8BAB040074DC9A));
			G_B5_2 = 3;
			G_B5_3 = __this;
			if (L_5)
			{
				G_B6_0 = L_5;
				G_B6_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral665908BFFBC2A550A5A9FF79CD8BAB040074DC9A));
				G_B6_2 = 3;
				G_B6_3 = __this;
				goto IL_0039;
			}
		}

IL_0035:
		{
			G_B7_0 = ((String_t*)(NULL));
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_003e;
		}

IL_0039:
		{
			String_t* L_6;
			L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B6_0);
			G_B7_0 = L_6;
			G_B7_1 = G_B6_1;
			G_B7_2 = G_B6_2;
			G_B7_3 = G_B6_3;
		}

IL_003e:
		{
			String_t* L_7;
			L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B7_1, G_B7_0, /*hidden argument*/NULL);
			IPhotonSocket_EnqueueDebugReturn_m3EFE15EAC913CE16CDE0D9A811C2759F5D54EF7A(G_B7_3, G_B7_2, L_7, /*hidden argument*/NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_004a;
		}
	} // end catch (depth: 1)

IL_004a:
	{
		// this.sock = null;
		__this->set_sock_11((WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 *)NULL);
		// this.State = PhotonSocketState.Disconnected;
		IPhotonSocket_set_State_m3E012C91299675DDE497811E6E3C71072C5EAC14_inline(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketWebTcp::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SocketWebTcp_Connect_mE109A3B06DE76A5A244B85B0DC94090F0DA81376 (SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMonoBehaviourExt_t3E9922DCD27F4FD7B3C00046BCFFFE1C9D063717_mF7C0588322E66F2F9EB476B071BFF8015203D57F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14B62430EC3FF6AF6C57F10516C6EC5C8D0497F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.State = PhotonSocketState.Connecting;
		IPhotonSocket_set_State_m3E012C91299675DDE497811E6E3C71072C5EAC14_inline(__this, 1, /*hidden argument*/NULL);
		// if (this.websocketConnectionObject != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_websocketConnectionObject_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// UnityEngine.Object.Destroy(this.websocketConnectionObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_websocketConnectionObject_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// this.websocketConnectionObject = new GameObject("websocketConnectionObject");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_3, _stringLiteral14B62430EC3FF6AF6C57F10516C6EC5C8D0497F3, /*hidden argument*/NULL);
		__this->set_websocketConnectionObject_13(L_3);
		// MonoBehaviour mb = this.websocketConnectionObject.AddComponent<MonoBehaviourExt>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_websocketConnectionObject_13();
		MonoBehaviourExt_t3E9922DCD27F4FD7B3C00046BCFFFE1C9D063717 * L_5;
		L_5 = GameObject_AddComponent_TisMonoBehaviourExt_t3E9922DCD27F4FD7B3C00046BCFFFE1C9D063717_mF7C0588322E66F2F9EB476B071BFF8015203D57F(L_4, /*hidden argument*/GameObject_AddComponent_TisMonoBehaviourExt_t3E9922DCD27F4FD7B3C00046BCFFFE1C9D063717_mF7C0588322E66F2F9EB476B071BFF8015203D57F_RuntimeMethod_var);
		// this.websocketConnectionObject.hideFlags = HideFlags.HideInHierarchy;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_websocketConnectionObject_13();
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_6, 1, /*hidden argument*/NULL);
		// UnityEngine.Object.DontDestroyOnLoad(this.websocketConnectionObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_websocketConnectionObject_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_7, /*hidden argument*/NULL);
		// this.sock = new WebSocket(new Uri(this.ServerAddress), this.SerializationProtocol);
		String_t* L_8;
		L_8 = IPhotonSocket_get_ServerAddress_mC37D2749260619C6182508E30BFF8D267D4C06C5_inline(__this, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_9 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C(L_9, L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = IPhotonSocket_get_SerializationProtocol_mB5BC219F558040CD522CA50CC17FDEAEE10CBBD7(__this, /*hidden argument*/NULL);
		WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * L_11 = (WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 *)il2cpp_codegen_object_new(WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0_il2cpp_TypeInfo_var);
		WebSocket__ctor_m8902CC3AD1E8BF87C80407B04F0FC5E8AFD8DF65(L_11, L_9, L_10, /*hidden argument*/NULL);
		__this->set_sock_11(L_11);
		// this.sock.Connect();
		WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * L_12 = __this->get_sock_11();
		WebSocket_Connect_mE4D8116577F4515A9FEACAC3560FF337509FFC65(L_12, /*hidden argument*/NULL);
		// mb.StartCoroutine(this.ReceiveLoop());
		RuntimeObject* L_13;
		L_13 = SocketWebTcp_ReceiveLoop_m11B4C74930DDEEBE82AA68BB4AFAD780609C4861(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_14;
		L_14 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_5, L_13, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketWebTcp::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SocketWebTcp_Disconnect_m3131CB00CC89912FC425F29DA31C19DE7DE05F66 (SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92AD75AD6FCA907A1DC04172D9D3B3DCA5284978);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	Exception_t * G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	int32_t G_B7_2 = 0;
	RuntimeObject* G_B7_3 = NULL;
	Exception_t * G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	int32_t G_B6_2 = 0;
	RuntimeObject* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	int32_t G_B8_2 = 0;
	RuntimeObject* G_B8_3 = NULL;
	{
		// if (this.ReportDebugOfLevel(DebugLevel.INFO))
		bool L_0;
		L_0 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(__this, 3, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.INFO, "SocketWebTcp.Disconnect()");
		RuntimeObject* L_1;
		L_1 = IPhotonSocket_get_Listener_mE1767799EA32C7BBC23E3F1CE0F3E9DD1F508514(__this, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var, L_1, 3, _stringLiteral92AD75AD6FCA907A1DC04172D9D3B3DCA5284978);
	}

IL_001a:
	{
		// this.State = PhotonSocketState.Disconnecting;
		IPhotonSocket_set_State_m3E012C91299675DDE497811E6E3C71072C5EAC14_inline(__this, 3, /*hidden argument*/NULL);
		// lock (this.syncer)
		RuntimeObject * L_2 = __this->get_syncer_12();
		V_0 = L_2;
		V_1 = (bool)0;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_3 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_3, (bool*)(&V_1), /*hidden argument*/NULL);
			// if (this.sock != null)
			WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * L_4 = __this->get_sock_11();
			if (!L_4)
			{
				goto IL_0074;
			}
		}

IL_003a:
		try
		{ // begin try (depth: 2)
			// this.sock.Close();
			WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * L_5 = __this->get_sock_11();
			WebSocket_Close_mF736608D5FEADAD61DDB10BB273045E829D46EA8(L_5, /*hidden argument*/NULL);
			// }
			goto IL_006d;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0047;
			}
			throw e;
		}

CATCH_0047:
		{ // begin catch(System.Exception)
			{
				// catch (Exception ex)
				V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
				// this.Listener.DebugReturn(DebugLevel.ERROR, "Exception in Disconnect(): " + ex);
				RuntimeObject* L_6;
				L_6 = IPhotonSocket_get_Listener_mE1767799EA32C7BBC23E3F1CE0F3E9DD1F508514(__this, /*hidden argument*/NULL);
				Exception_t * L_7 = V_2;
				Exception_t * L_8 = L_7;
				G_B6_0 = L_8;
				G_B6_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA2076A563A22DA628C30B53A80EA51616D9C8C7C));
				G_B6_2 = 1;
				G_B6_3 = L_6;
				if (L_8)
				{
					G_B7_0 = L_8;
					G_B7_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA2076A563A22DA628C30B53A80EA51616D9C8C7C));
					G_B7_2 = 1;
					G_B7_3 = L_6;
					goto IL_005c;
				}
			}

IL_0058:
			{
				G_B8_0 = ((String_t*)(NULL));
				G_B8_1 = G_B6_1;
				G_B8_2 = G_B6_2;
				G_B8_3 = G_B6_3;
				goto IL_0061;
			}

IL_005c:
			{
				String_t* L_9;
				L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B7_0);
				G_B8_0 = L_9;
				G_B8_1 = G_B7_1;
				G_B8_2 = G_B7_2;
				G_B8_3 = G_B7_3;
			}

IL_0061:
			{
				String_t* L_10;
				L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B8_1, G_B8_0, /*hidden argument*/NULL);
				InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var)), G_B8_3, G_B8_2, L_10);
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_006d;
			}
		} // end catch (depth: 2)

IL_006d:
		{
			// this.sock = null;
			__this->set_sock_11((WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 *)NULL);
		}

IL_0074:
		{
			// }
			IL2CPP_LEAVE(0x80, FINALLY_0076);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0076;
	}

FINALLY_0076:
	{ // begin finally (depth: 1)
		{
			bool L_11 = V_1;
			if (!L_11)
			{
				goto IL_007f;
			}
		}

IL_0079:
		{
			RuntimeObject * L_12 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_12, /*hidden argument*/NULL);
		}

IL_007f:
		{
			IL2CPP_END_FINALLY(118)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(118)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x80, IL_0080)
	}

IL_0080:
	{
		// if (this.websocketConnectionObject != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_websocketConnectionObject_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0099;
		}
	}
	{
		// UnityEngine.Object.Destroy(this.websocketConnectionObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_websocketConnectionObject_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_15, /*hidden argument*/NULL);
	}

IL_0099:
	{
		// this.State = PhotonSocketState.Disconnected;
		IPhotonSocket_set_State_m3E012C91299675DDE497811E6E3C71072C5EAC14_inline(__this, 0, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketWebTcp::Send(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketWebTcp_Send_m1705A149271C8DC99DF9C38FFA6820BC4D167DB2 (SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6694B5F6F3666B90EF97D3CC74C9D8B36A63411A);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	Exception_t * V_1 = NULL;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (this.State != PhotonSocketState.Connected)
		int32_t L_0;
		L_0 = IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_000b;
		}
	}
	{
		// return PhotonSocketError.Skipped;
		return (int32_t)(1);
	}

IL_000b:
	{
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			// if (data.Length > length)
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___data0;
			int32_t L_2 = ___length1;
			if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))) <= ((int32_t)L_2)))
			{
				goto IL_0026;
			}
		}

IL_0012:
		{
			// byte[] trimmedData = new byte[length];
			int32_t L_3 = ___length1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_3);
			V_0 = L_4;
			// Buffer.BlockCopy(data, 0, trimmedData, 0, length);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___data0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_0;
			int32_t L_7 = ___length1;
			Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_5, 0, (RuntimeArray *)(RuntimeArray *)L_6, 0, L_7, /*hidden argument*/NULL);
			// data = trimmedData;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_0;
			___data0 = L_8;
		}

IL_0026:
		{
			// if (this.ReportDebugOfLevel(DebugLevel.ALL))
			bool L_9;
			L_9 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(__this, 5, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_004b;
			}
		}

IL_002f:
		{
			// this.Listener.DebugReturn(DebugLevel.ALL, "Sending: " + SupportClassPun.ByteArrayToString(data));
			RuntimeObject* L_10;
			L_10 = IPhotonSocket_get_Listener_mE1767799EA32C7BBC23E3F1CE0F3E9DD1F508514(__this, /*hidden argument*/NULL);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = ___data0;
			IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
			String_t* L_12;
			L_12 = SupportClass_ByteArrayToString_m5D9691BD295E534DB92BA8EC9F03799D67C2457E(L_11, /*hidden argument*/NULL);
			String_t* L_13;
			L_13 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral6694B5F6F3666B90EF97D3CC74C9D8B36A63411A, L_12, /*hidden argument*/NULL);
			InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var, L_10, 5, L_13);
		}

IL_004b:
		{
			// if (this.sock != null)
			WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * L_14 = __this->get_sock_11();
			if (!L_14)
			{
				goto IL_005f;
			}
		}

IL_0053:
		{
			// this.sock.Send(data);
			WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * L_15 = __this->get_sock_11();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = ___data0;
			WebSocket_Send_mFB3E62DBAB8F953149234C392CCAA3557CDCCED4(L_15, L_16, /*hidden argument*/NULL);
		}

IL_005f:
		{
			// }
			goto IL_0098;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0061;
		}
		throw e;
	}

CATCH_0061:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_1 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// this.Listener.DebugReturn(DebugLevel.ERROR, "Cannot send to: " + this.ServerAddress + ". " + e.Message);
		RuntimeObject* L_17;
		L_17 = IPhotonSocket_get_Listener_mE1767799EA32C7BBC23E3F1CE0F3E9DD1F508514(__this, /*hidden argument*/NULL);
		String_t* L_18;
		L_18 = IPhotonSocket_get_ServerAddress_mC37D2749260619C6182508E30BFF8D267D4C06C5_inline(__this, /*hidden argument*/NULL);
		Exception_t * L_19 = V_1;
		String_t* L_20;
		L_20 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_19);
		String_t* L_21;
		L_21 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6A328C89F6BA1B16C6636D0A5824840B5CFB5593)), L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA04D4286952D44B4CB5C87E7D30E05FE4153434)), L_20, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var)), L_17, 1, L_21);
		// this.HandleException(StatusCode.Exception);
		IPhotonSocket_HandleException_mF7643306A79896E98986A71CA9E253F285E7056A(__this, ((int32_t)1026), /*hidden argument*/NULL);
		// return PhotonSocketError.Exception;
		V_2 = 3;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_009a;
	} // end catch (depth: 1)

IL_0098:
	{
		// return PhotonSocketError.Success;
		return (int32_t)(0);
	}

IL_009a:
	{
		// }
		int32_t L_22 = V_2;
		return L_22;
	}
}
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketWebTcp::Receive(System.Byte[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketWebTcp_Receive_m1409334F912CCA38CA56D7010C92B4A717D490AC (SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** ___data0, const RuntimeMethod* method)
{
	{
		// data = null;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** L_0 = ___data0;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		// return PhotonSocketError.NoData;
		return (int32_t)(2);
	}
}
// System.Collections.IEnumerator ExitGames.Client.Photon.SocketWebTcp::ReceiveLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SocketWebTcp_ReceiveLoop_m11B4C74930DDEEBE82AA68BB4AFAD780609C4861 (SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CReceiveLoopU3Ed__12_t30BCC1D0885EE392586B5EB02827348CCA1BB42A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CReceiveLoopU3Ed__12_t30BCC1D0885EE392586B5EB02827348CCA1BB42A * L_0 = (U3CReceiveLoopU3Ed__12_t30BCC1D0885EE392586B5EB02827348CCA1BB42A *)il2cpp_codegen_object_new(U3CReceiveLoopU3Ed__12_t30BCC1D0885EE392586B5EB02827348CCA1BB42A_il2cpp_TypeInfo_var);
		U3CReceiveLoopU3Ed__12__ctor_m286B3F4F4ED140D282B2AB7D7E5131F3B6FD9312(L_0, 0, /*hidden argument*/NULL);
		U3CReceiveLoopU3Ed__12_t30BCC1D0885EE392586B5EB02827348CCA1BB42A * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
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
// System.Boolean ExitGames.Client.Photon.WaitForRealSeconds::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForRealSeconds_get_keepWaiting_m0B49D994D9ECDDD0D15B9C3885A290CB86106156 (WaitForRealSeconds_t019FE804AE5457DE4E53B86DD95F9BD9348FE00D * __this, const RuntimeMethod* method)
{
	{
		// get { return this._endTime > Time.realtimeSinceStartup; }
		float L_0 = __this->get__endTime_0();
		float L_1;
		L_1 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		return (bool)((((float)L_0) > ((float)L_1))? 1 : 0);
	}
}
// System.Void ExitGames.Client.Photon.WaitForRealSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForRealSeconds__ctor_m610407B7BECF6B23C0077E8C6B95F30AE878D4ED (WaitForRealSeconds_t019FE804AE5457DE4E53B86DD95F9BD9348FE00D * __this, float ___seconds0, const RuntimeMethod* method)
{
	{
		// public WaitForRealSeconds(float seconds)
		CustomYieldInstruction__ctor_m01929E3EEB78B751510038B32D889061960DA1BE(__this, /*hidden argument*/NULL);
		// this._endTime = Time.realtimeSinceStartup + seconds;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		float L_1 = ___seconds0;
		__this->set__endTime_0(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
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
// System.Void WebSocket::.ctor(System.Uri,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_m8902CC3AD1E8BF87C80407B04F0FC5E8AFD8DF65 (WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___url0, String_t* ___serialization1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral595137F8C876A16A4A12C20E052B255B02F22D8D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// private string protocols = "GpBinaryV16";
		__this->set_protocols_1(_stringLiteral595137F8C876A16A4A12C20E052B255B02F22D8D);
		// public WebSocket(Uri url, string serialization = null)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.mUrl = url;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = ___url0;
		__this->set_mUrl_0(L_0);
		// if (serialization != null)
		String_t* L_1 = ___serialization1;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// this.protocols = serialization;
		String_t* L_2 = ___serialization1;
		__this->set_protocols_1(L_2);
	}

IL_0022:
	{
		// string protocol = mUrl.Scheme;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_3 = __this->get_mUrl_0();
		String_t* L_4;
		L_4 = Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// if (!protocol.Equals("ws") && !protocol.Equals("wss"))
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_5, _stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_7, _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0059;
		}
	}
	{
		// throw new ArgumentException("Unsupported protocol: " + protocol);
		String_t* L_9 = V_0;
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral37422C200CFCABD757B9019D3ABA76E55A7A5DA5)), L_9, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_11 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocket__ctor_m8902CC3AD1E8BF87C80407B04F0FC5E8AFD8DF65_RuntimeMethod_var)));
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void WebSocket::SendString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SendString_m3260EB71AD4FD4B9C7E9B427E3F57DEB0E590441 (WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	{
		// Send(Encoding.UTF8.GetBytes (str));
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0;
		L_0 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		String_t* L_1 = ___str0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		WebSocket_Send_mFB3E62DBAB8F953149234C392CCAA3557CDCCED4(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String WebSocket::RecvString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocket_RecvString_m162C78C7C6AFA3B7E70B0600D9118017665E7AC6 (WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		// byte[] retval = Recv();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = WebSocket_Recv_m7D13080B88A33AB9FC3B736290B4C53A377321CE(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (retval == null)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_000c:
	{
		// return Encoding.UTF8.GetString (retval);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_2;
		L_2 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		String_t* L_4;
		L_4 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_2, L_3);
		return L_4;
	}
}
// System.Int32 WebSocket::SocketCreate(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketCreate_m95EECFB4B8774CD31521B33E99501CFC405FCBEC (String_t* ___url0, String_t* ___protocols1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___url0' to native representation
	char* ____url0_marshaled = NULL;
	____url0_marshaled = il2cpp_codegen_marshal_string(___url0);

	// Marshaling of parameter '___protocols1' to native representation
	char* ____protocols1_marshaled = NULL;
	____protocols1_marshaled = il2cpp_codegen_marshal_string(___protocols1);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketCreate)(____url0_marshaled, ____protocols1_marshaled);

	// Marshaling cleanup of parameter '___url0' native representation
	il2cpp_codegen_marshal_free(____url0_marshaled);
	____url0_marshaled = NULL;

	// Marshaling cleanup of parameter '___protocols1' native representation
	il2cpp_codegen_marshal_free(____protocols1_marshaled);
	____protocols1_marshaled = NULL;

	return returnValue;
}
// System.Int32 WebSocket::SocketState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketState_m1C13D43FF24A08493D209E62599FAD2BAC5E6330 (int32_t ___socketInstance0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketState)(___socketInstance0);

	return returnValue;
}
// System.Void WebSocket::SocketSend(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketSend_m53248BBE03BDD59D83DD310208170727907BB685 (int32_t ___socketInstance0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___ptr1, int32_t ___length2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___ptr1' to native representation
	uint8_t* ____ptr1_marshaled = NULL;
	if (___ptr1 != NULL)
	{
		____ptr1_marshaled = reinterpret_cast<uint8_t*>((___ptr1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SocketSend)(___socketInstance0, ____ptr1_marshaled, ___length2);

}
// System.Void WebSocket::SocketRecv(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketRecv_mA1D554A02A40FBF79BDF8E58A6C2B39DEC3E7704 (int32_t ___socketInstance0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___ptr1, int32_t ___length2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___ptr1' to native representation
	uint8_t* ____ptr1_marshaled = NULL;
	if (___ptr1 != NULL)
	{
		____ptr1_marshaled = reinterpret_cast<uint8_t*>((___ptr1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SocketRecv)(___socketInstance0, ____ptr1_marshaled, ___length2);

}
// System.Int32 WebSocket::SocketRecvLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketRecvLength_m7A4EAA66F39295519F96AC1CBC859203AE512B8D (int32_t ___socketInstance0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketRecvLength)(___socketInstance0);

	return returnValue;
}
// System.Void WebSocket::SocketClose(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketClose_m980F0EAA4841665F7D852127233CB3523280815E (int32_t ___socketInstance0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SocketClose)(___socketInstance0);

}
// System.Int32 WebSocket::SocketError(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketError_mF7B2F5AD83B417189BF7321995CAFB5AA0A1C66B (int32_t ___socketInstance0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___ptr1, int32_t ___length2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___ptr1' to native representation
	uint8_t* ____ptr1_marshaled = NULL;
	if (___ptr1 != NULL)
	{
		____ptr1_marshaled = reinterpret_cast<uint8_t*>((___ptr1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketError)(___socketInstance0, ____ptr1_marshaled, ___length2);

	return returnValue;
}
// System.Void WebSocket::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Send_mFB3E62DBAB8F953149234C392CCAA3557CDCCED4 (WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, const RuntimeMethod* method)
{
	{
		// SocketSend (m_NativeRef, buffer, buffer.Length);
		int32_t L_0 = __this->get_m_NativeRef_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___buffer0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___buffer0;
		WebSocket_SocketSend_m53248BBE03BDD59D83DD310208170727907BB685(L_0, L_1, ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Byte[] WebSocket::Recv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WebSocket_Recv_m7D13080B88A33AB9FC3B736290B4C53A377321CE (WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	{
		// int length = SocketRecvLength (m_NativeRef);
		int32_t L_0 = __this->get_m_NativeRef_2();
		int32_t L_1;
		L_1 = WebSocket_SocketRecvLength_m7A4EAA66F39295519F96AC1CBC859203AE512B8D(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (length == 0)
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return null;
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
	}

IL_0011:
	{
		// byte[] buffer = new byte[length];
		int32_t L_3 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		// SocketRecv (m_NativeRef, buffer, length);
		int32_t L_5 = __this->get_m_NativeRef_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_1;
		int32_t L_7 = V_0;
		WebSocket_SocketRecv_mA1D554A02A40FBF79BDF8E58A6C2B39DEC3E7704(L_5, L_6, L_7, /*hidden argument*/NULL);
		// return buffer;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_1;
		return L_8;
	}
}
// System.Void WebSocket::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Connect_mE4D8116577F4515A9FEACAC3560FF337509FFC65 (WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * __this, const RuntimeMethod* method)
{
	{
		// m_NativeRef = SocketCreate (mUrl.ToString(), this.protocols);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = __this->get_mUrl_0();
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		String_t* L_2 = __this->get_protocols_1();
		int32_t L_3;
		L_3 = WebSocket_SocketCreate_m95EECFB4B8774CD31521B33E99501CFC405FCBEC(L_1, L_2, /*hidden argument*/NULL);
		__this->set_m_NativeRef_2(L_3);
		// }
		return;
	}
}
// System.Void WebSocket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Close_mF736608D5FEADAD61DDB10BB273045E829D46EA8 (WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * __this, const RuntimeMethod* method)
{
	{
		// SocketClose(m_NativeRef);
		int32_t L_0 = __this->get_m_NativeRef_2();
		WebSocket_SocketClose_m980F0EAA4841665F7D852127233CB3523280815E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean WebSocket::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocket_get_Connected_m57802C4DE45F62A8E7D792AD4ECDEF69F75B3369 (WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * __this, const RuntimeMethod* method)
{
	{
		// get { return SocketState(m_NativeRef) != 0; }
		int32_t L_0 = __this->get_m_NativeRef_2();
		int32_t L_1;
		L_1 = WebSocket_SocketState_m1C13D43FF24A08493D209E62599FAD2BAC5E6330(L_0, /*hidden argument*/NULL);
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.String WebSocket::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocket_get_Error_m56F32FF29D95FB3ACCD779567AC836C80F35FBE5 (WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		// byte[] buffer = new byte[bufsize];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		V_0 = L_0;
		// int result = SocketError (m_NativeRef, buffer, bufsize);
		int32_t L_1 = __this->get_m_NativeRef_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = V_0;
		int32_t L_3;
		L_3 = WebSocket_SocketError_mF7B2F5AD83B417189BF7321995CAFB5AA0A1C66B(L_1, L_2, ((int32_t)1024), /*hidden argument*/NULL);
		// if (result == 0)
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0020:
	{
		// return Encoding.UTF8.GetString (buffer);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_4;
		L_4 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		String_t* L_6;
		L_6 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_4, L_5);
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
// System.Void ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveLoopU3Ed__12__ctor_m286B3F4F4ED140D282B2AB7D7E5131F3B6FD9312 (U3CReceiveLoopU3Ed__12_t30BCC1D0885EE392586B5EB02827348CCA1BB42A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveLoopU3Ed__12_System_IDisposable_Dispose_m31891F6AFAD9E6092AA258C477EFE9BCA0C667E6 (U3CReceiveLoopU3Ed__12_t30BCC1D0885EE392586B5EB02827348CCA1BB42A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReceiveLoopU3Ed__12_MoveNext_mAC2F8AE608B6271E894286358BB12F98D0A9F575 (U3CReceiveLoopU3Ed__12_t30BCC1D0885EE392586B5EB02827348CCA1BB42A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonSocketState_tC9A83DC96CCE242EDCFFF9861BF05C2ADA7FFF9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForRealSeconds_t019FE804AE5457DE4E53B86DD95F9BD9348FE00D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062C159E09943C99E139190E5A591006A545AA4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8DE4CB154AC0296896C7FD3192C85F2FE4730D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8334317A1EF5557A23201DAC301958FB87859F5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95F53809B4EBC36EDD99FA5DD91761569389BB23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA9193E11FC474EEF79F82B6F77150AE7F202155);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_4 = NULL;
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Exception_t * G_B31_0 = NULL;
	int32_t G_B31_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B31_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B31_3 = NULL;
	int32_t G_B31_4 = 0;
	SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * G_B31_5 = NULL;
	Exception_t * G_B30_0 = NULL;
	int32_t G_B30_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B30_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B30_3 = NULL;
	int32_t G_B30_4 = 0;
	SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * G_B30_5 = NULL;
	String_t* G_B32_0 = NULL;
	int32_t G_B32_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B32_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B32_3 = NULL;
	int32_t G_B32_4 = 0;
	SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * G_B32_5 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_004f;
			}
			case 2:
			{
				goto IL_01e4;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (this.sock != null)
		SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_3 = V_1;
		WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * L_4 = L_3->get_sock_11();
		if (!L_4)
		{
			goto IL_02d1;
		}
	}
	{
		goto IL_0056;
	}

IL_0036:
	{
		// yield return new WaitForRealSeconds(0.1f);
		WaitForRealSeconds_t019FE804AE5457DE4E53B86DD95F9BD9348FE00D * L_5 = (WaitForRealSeconds_t019FE804AE5457DE4E53B86DD95F9BD9348FE00D *)il2cpp_codegen_object_new(WaitForRealSeconds_t019FE804AE5457DE4E53B86DD95F9BD9348FE00D_il2cpp_TypeInfo_var);
		WaitForRealSeconds__ctor_m610407B7BECF6B23C0077E8C6B95F30AE878D4ED(L_5, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004f:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0056:
	{
		// while (this.sock != null && !this.sock.Connected && this.sock.Error == null)
		SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_6 = V_1;
		WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * L_7 = L_6->get_sock_11();
		if (!L_7)
		{
			goto IL_0078;
		}
	}
	{
		SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_8 = V_1;
		WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * L_9 = L_8->get_sock_11();
		bool L_10;
		L_10 = WebSocket_get_Connected_m57802C4DE45F62A8E7D792AD4ECDEF69F75B3369(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0078;
		}
	}
	{
		SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_11 = V_1;
		WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * L_12 = L_11->get_sock_11();
		String_t* L_13;
		L_13 = WebSocket_get_Error_m56F32FF29D95FB3ACCD779567AC836C80F35FBE5(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0036;
		}
	}

IL_0078:
	{
		// if (this.sock != null)
		SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_14 = V_1;
		WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * L_15 = L_14->get_sock_11();
		if (!L_15)
		{
			goto IL_02d1;
		}
	}
	{
		// if (this.sock.Error != null)
		SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_16 = V_1;
		WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * L_17 = L_16->get_sock_11();
		String_t* L_18;
		L_18 = WebSocket_get_Error_m56F32FF29D95FB3ACCD779567AC836C80F35FBE5(L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00f7;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.ERROR, "Exiting receive thread. Server: " + this.ServerAddress + ":" + this.ServerPort + " Error: " + this.sock.Error);
		SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_19 = V_1;
		RuntimeObject* L_20;
		L_20 = IPhotonSocket_get_Listener_mE1767799EA32C7BBC23E3F1CE0F3E9DD1F508514(L_19, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = L_21;
		ArrayElementTypeCheck (L_22, _stringLiteral95F53809B4EBC36EDD99FA5DD91761569389BB23);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral95F53809B4EBC36EDD99FA5DD91761569389BB23);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_22;
		SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_24 = V_1;
		String_t* L_25;
		L_25 = IPhotonSocket_get_ServerAddress_mC37D2749260619C6182508E30BFF8D267D4C06C5_inline(L_24, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_25);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = L_23;
		ArrayElementTypeCheck (L_26, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = L_26;
		SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_28 = V_1;
		int32_t L_29;
		L_29 = IPhotonSocket_get_ServerPort_m87E9048311458445C04EFE6CFAC0B672B9BC96CD_inline(L_28, /*hidden argument*/NULL);
		V_2 = L_29;
		String_t* L_30;
		L_30 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_30);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = L_27;
		ArrayElementTypeCheck (L_31, _stringLiteral062C159E09943C99E139190E5A591006A545AA4A);
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral062C159E09943C99E139190E5A591006A545AA4A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = L_31;
		SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_33 = V_1;
		WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * L_34 = L_33->get_sock_11();
		String_t* L_35;
		L_35 = WebSocket_get_Error_m56F32FF29D95FB3ACCD779567AC836C80F35FBE5(L_34, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_32, L_35);
		(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_35);
		String_t* L_36;
		L_36 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_32, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var, L_20, 1, L_36);
		// this.HandleException(StatusCode.ExceptionOnConnect);
		SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_37 = V_1;
		IPhotonSocket_HandleException_mF7643306A79896E98986A71CA9E253F285E7056A(L_37, ((int32_t)1023), /*hidden argument*/NULL);
		// }
		goto IL_02d1;
	}

IL_00f7:
	{
		// if (this.ReportDebugOfLevel(DebugLevel.ALL))
		SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_38 = V_1;
		bool L_39;
		L_39 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(L_38, 5, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_012a;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.ALL, "Receiving by websocket. this.State: " + this.State);
		SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_40 = V_1;
		RuntimeObject* L_41;
		L_41 = IPhotonSocket_get_Listener_mE1767799EA32C7BBC23E3F1CE0F3E9DD1F508514(L_40, /*hidden argument*/NULL);
		SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_42 = V_1;
		int32_t L_43;
		L_43 = IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline(L_42, /*hidden argument*/NULL);
		V_3 = L_43;
		RuntimeObject * L_44 = Box(PhotonSocketState_tC9A83DC96CCE242EDCFFF9861BF05C2ADA7FFF9C_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_45;
		L_45 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_44);
		V_3 = *(int32_t*)UnBox(L_44);
		String_t* L_46;
		L_46 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8334317A1EF5557A23201DAC301958FB87859F5B, L_45, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var, L_41, 5, L_46);
	}

IL_012a:
	{
		// this.State = PhotonSocketState.Connected;
		SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_47 = V_1;
		IPhotonSocket_set_State_m3E012C91299675DDE497811E6E3C71072C5EAC14_inline(L_47, 2, /*hidden argument*/NULL);
		goto IL_02c5;
	}

IL_0136:
	{
		// if (this.sock != null)
		SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_48 = V_1;
		WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * L_49 = L_48->get_sock_11();
		if (!L_49)
		{
			goto IL_02c5;
		}
	}
	{
		// if (this.sock.Error != null)
		SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_50 = V_1;
		WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * L_51 = L_50->get_sock_11();
		String_t* L_52;
		L_52 = WebSocket_get_Error_m56F32FF29D95FB3ACCD779567AC836C80F35FBE5(L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_01b5;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.ERROR, "Exiting receive thread (inside loop). Server: " + this.ServerAddress + ":" + this.ServerPort + " Error: " + this.sock.Error);
		SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_53 = V_1;
		RuntimeObject* L_54;
		L_54 = IPhotonSocket_get_Listener_mE1767799EA32C7BBC23E3F1CE0F3E9DD1F508514(L_53, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_55 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_56 = L_55;
		ArrayElementTypeCheck (L_56, _stringLiteralCA9193E11FC474EEF79F82B6F77150AE7F202155);
		(L_56)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralCA9193E11FC474EEF79F82B6F77150AE7F202155);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_57 = L_56;
		SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_58 = V_1;
		String_t* L_59;
		L_59 = IPhotonSocket_get_ServerAddress_mC37D2749260619C6182508E30BFF8D267D4C06C5_inline(L_58, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_57, L_59);
		(L_57)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_59);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_60 = L_57;
		ArrayElementTypeCheck (L_60, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_60)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_61 = L_60;
		SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_62 = V_1;
		int32_t L_63;
		L_63 = IPhotonSocket_get_ServerPort_m87E9048311458445C04EFE6CFAC0B672B9BC96CD_inline(L_62, /*hidden argument*/NULL);
		V_2 = L_63;
		String_t* L_64;
		L_64 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_61, L_64);
		(L_61)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_64);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_65 = L_61;
		ArrayElementTypeCheck (L_65, _stringLiteral062C159E09943C99E139190E5A591006A545AA4A);
		(L_65)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral062C159E09943C99E139190E5A591006A545AA4A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_66 = L_65;
		SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_67 = V_1;
		WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * L_68 = L_67->get_sock_11();
		String_t* L_69;
		L_69 = WebSocket_get_Error_m56F32FF29D95FB3ACCD779567AC836C80F35FBE5(L_68, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_66, L_69);
		(L_66)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_69);
		String_t* L_70;
		L_70 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_66, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var, L_54, 1, L_70);
		// this.HandleException(StatusCode.ExceptionOnReceive);
		SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_71 = V_1;
		IPhotonSocket_HandleException_mF7643306A79896E98986A71CA9E253F285E7056A(L_71, ((int32_t)1039), /*hidden argument*/NULL);
		// break;
		goto IL_02d1;
	}

IL_01b5:
	{
		// byte[] inBuff = this.sock.Recv();
		SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_72 = V_1;
		WebSocket_tF0FC81665D3740B1F3EA68A4953BCC96D3F693E0 * L_73 = L_72->get_sock_11();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_74;
		L_74 = WebSocket_Recv_m7D13080B88A33AB9FC3B736290B4C53A377321CE(L_73, /*hidden argument*/NULL);
		V_4 = L_74;
		// if (inBuff == null || inBuff.Length == 0)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_75 = V_4;
		if (!L_75)
		{
			goto IL_01cb;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_76 = V_4;
		if ((((RuntimeArray*)L_76)->max_length))
		{
			goto IL_01f0;
		}
	}

IL_01cb:
	{
		// yield return new WaitForRealSeconds(0.02f);
		WaitForRealSeconds_t019FE804AE5457DE4E53B86DD95F9BD9348FE00D * L_77 = (WaitForRealSeconds_t019FE804AE5457DE4E53B86DD95F9BD9348FE00D *)il2cpp_codegen_object_new(WaitForRealSeconds_t019FE804AE5457DE4E53B86DD95F9BD9348FE00D_il2cpp_TypeInfo_var);
		WaitForRealSeconds__ctor_m610407B7BECF6B23C0077E8C6B95F30AE878D4ED(L_77, (0.0199999996f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_77);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_01e4:
	{
		__this->set_U3CU3E1__state_0((-1));
		// continue;
		goto IL_02c5;
	}

IL_01f0:
	{
		// if (this.ReportDebugOfLevel(DebugLevel.ALL))
		SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_78 = V_1;
		bool L_79;
		L_79 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(L_78, 5, /*hidden argument*/NULL);
		if (!L_79)
		{
			goto IL_0227;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.ALL, "TCP << " + inBuff.Length + " = " + SupportClassPun.ByteArrayToString(inBuff));
		SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_80 = V_1;
		RuntimeObject* L_81;
		L_81 = IPhotonSocket_get_Listener_mE1767799EA32C7BBC23E3F1CE0F3E9DD1F508514(L_80, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_82 = V_4;
		V_2 = ((int32_t)((int32_t)(((RuntimeArray*)L_82)->max_length)));
		String_t* L_83;
		L_83 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_84 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		String_t* L_85;
		L_85 = SupportClass_ByteArrayToString_m5D9691BD295E534DB92BA8EC9F03799D67C2457E(L_84, /*hidden argument*/NULL);
		String_t* L_86;
		L_86 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral1D8DE4CB154AC0296896C7FD3192C85F2FE4730D, L_83, _stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64, L_85, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var, L_81, 5, L_86);
	}

IL_0227:
	{
		// if (inBuff.Length > 0)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_87 = V_4;
		if (!(((RuntimeArray*)L_87)->max_length))
		{
			goto IL_02c5;
		}
	}

IL_022f:
	try
	{ // begin try (depth: 1)
		// this.HandleReceivedDatagram(inBuff, inBuff.Length, false);
		SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_88 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_89 = V_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_90 = V_4;
		IPhotonSocket_HandleReceivedDatagram_mCF72964805372D053B54F92E2BA4B53F9845FC07(L_88, L_89, ((int32_t)((int32_t)(((RuntimeArray*)L_90)->max_length))), (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_02c5;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0241;
		}
		throw e;
	}

CATCH_0241:
	{ // begin catch(System.Exception)
		{
			// catch (Exception e)
			V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// if (this.State != PhotonSocketState.Disconnecting && this.State != PhotonSocketState.Disconnected)
			SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_91 = V_1;
			int32_t L_92;
			L_92 = IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline(L_91, /*hidden argument*/NULL);
			if ((((int32_t)L_92) == ((int32_t)3)))
			{
				goto IL_02c3;
			}
		}

IL_024c:
		{
			SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_93 = V_1;
			int32_t L_94;
			L_94 = IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline(L_93, /*hidden argument*/NULL);
			if (!L_94)
			{
				goto IL_02c3;
			}
		}

IL_0254:
		{
			// if (this.ReportDebugOfLevel(DebugLevel.ERROR))
			SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_95 = V_1;
			bool L_96;
			L_96 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(L_95, 1, /*hidden argument*/NULL);
			if (!L_96)
			{
				goto IL_02b8;
			}
		}

IL_025d:
		{
			// this.EnqueueDebugReturn(DebugLevel.ERROR, "Receive issue. State: " + this.State + ". Server: '" + this.ServerAddress + "' Exception: " + e);
			SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_97 = V_1;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_98 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var)), (uint32_t)6);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_99 = L_98;
			ArrayElementTypeCheck (L_99, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF)));
			(L_99)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF)));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_100 = L_99;
			SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_101 = V_1;
			int32_t L_102;
			L_102 = IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline(L_101, /*hidden argument*/NULL);
			V_3 = L_102;
			RuntimeObject * L_103 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PhotonSocketState_tC9A83DC96CCE242EDCFFF9861BF05C2ADA7FFF9C_il2cpp_TypeInfo_var)), (&V_3));
			String_t* L_104;
			L_104 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_103);
			V_3 = *(int32_t*)UnBox(L_103);
			ArrayElementTypeCheck (L_100, L_104);
			(L_100)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_104);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_105 = L_100;
			ArrayElementTypeCheck (L_105, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3)));
			(L_105)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3)));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_106 = L_105;
			SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_107 = V_1;
			String_t* L_108;
			L_108 = IPhotonSocket_get_ServerAddress_mC37D2749260619C6182508E30BFF8D267D4C06C5_inline(L_107, /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_106, L_108);
			(L_106)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_108);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_109 = L_106;
			ArrayElementTypeCheck (L_109, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral57181476910FA4C16EFCC0E7443CD9C417D2514B)));
			(L_109)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral57181476910FA4C16EFCC0E7443CD9C417D2514B)));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_110 = L_109;
			Exception_t * L_111 = V_5;
			Exception_t * L_112 = L_111;
			G_B30_0 = L_112;
			G_B30_1 = 5;
			G_B30_2 = L_110;
			G_B30_3 = L_110;
			G_B30_4 = 1;
			G_B30_5 = L_97;
			if (L_112)
			{
				G_B31_0 = L_112;
				G_B31_1 = 5;
				G_B31_2 = L_110;
				G_B31_3 = L_110;
				G_B31_4 = 1;
				G_B31_5 = L_97;
				goto IL_02a8;
			}
		}

IL_02a4:
		{
			G_B32_0 = ((String_t*)(NULL));
			G_B32_1 = G_B30_1;
			G_B32_2 = G_B30_2;
			G_B32_3 = G_B30_3;
			G_B32_4 = G_B30_4;
			G_B32_5 = G_B30_5;
			goto IL_02ad;
		}

IL_02a8:
		{
			String_t* L_113;
			L_113 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B31_0);
			G_B32_0 = L_113;
			G_B32_1 = G_B31_1;
			G_B32_2 = G_B31_2;
			G_B32_3 = G_B31_3;
			G_B32_4 = G_B31_4;
			G_B32_5 = G_B31_5;
		}

IL_02ad:
		{
			ArrayElementTypeCheck (G_B32_2, G_B32_0);
			(G_B32_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B32_1), (String_t*)G_B32_0);
			String_t* L_114;
			L_114 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(G_B32_3, /*hidden argument*/NULL);
			IPhotonSocket_EnqueueDebugReturn_m3EFE15EAC913CE16CDE0D9A811C2759F5D54EF7A(G_B32_5, G_B32_4, L_114, /*hidden argument*/NULL);
		}

IL_02b8:
		{
			// this.HandleException(StatusCode.ExceptionOnReceive);
			SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_115 = V_1;
			IPhotonSocket_HandleException_mF7643306A79896E98986A71CA9E253F285E7056A(L_115, ((int32_t)1039), /*hidden argument*/NULL);
		}

IL_02c3:
		{
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_02c5;
		}
	} // end catch (depth: 1)

IL_02c5:
	{
		// while (this.State == PhotonSocketState.Connected)
		SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_116 = V_1;
		int32_t L_117;
		L_117 = IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline(L_116, /*hidden argument*/NULL);
		if ((((int32_t)L_117) == ((int32_t)2)))
		{
			goto IL_0136;
		}
	}

IL_02d1:
	{
		// this.Disconnect();
		SocketWebTcp_tC7351D6D7422A8226BEAC5AB7CBDCDCC35A3CFA3 * L_118 = V_1;
		bool L_119;
		L_119 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean ExitGames.Client.Photon.IPhotonSocket::Disconnect() */, L_118);
		// }
		return (bool)0;
	}
}
// System.Object ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CReceiveLoopU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF3F751C02065E12E353E72DA76D16526DEED8635 (U3CReceiveLoopU3Ed__12_t30BCC1D0885EE392586B5EB02827348CCA1BB42A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveLoopU3Ed__12_System_Collections_IEnumerator_Reset_m9ACEC68DED142D9FDF364298D151F1DE69745ECE (U3CReceiveLoopU3Ed__12_t30BCC1D0885EE392586B5EB02827348CCA1BB42A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReceiveLoopU3Ed__12_System_Collections_IEnumerator_Reset_m9ACEC68DED142D9FDF364298D151F1DE69745ECE_RuntimeMethod_var)));
	}
}
// System.Object ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CReceiveLoopU3Ed__12_System_Collections_IEnumerator_get_Current_m2DE552FBF7F140965ACA7E215AA975220D2A2CAD (U3CReceiveLoopU3Ed__12_t30BCC1D0885EE392586B5EB02827348CCA1BB42A * __this, const RuntimeMethod* method)
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
// System.Void ExitGames.Client.Photon.SocketWebTcp/MonoBehaviourExt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourExt__ctor_m9FDBAA4606431C29E9B75F6FF7AF868B51482B19 (MonoBehaviourExt_t3E9922DCD27F4FD7B3C00046BCFFFE1C9D063717 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PeerBase_get_ServerAddress_m09A47C70720235340C390D98A2277B8BF94CB288_inline (PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CServerAddressU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IPhotonSocket_set_ServerAddress_mD133E8D5EA1DA7E24E70676D0D0AF5D8E5403C6D_inline (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CServerAddressU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IPhotonSocket_get_ServerAddress_mC37D2749260619C6182508E30BFF8D267D4C06C5_inline (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CServerAddressU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IPhotonSocket_set_State_m3E012C91299675DDE497811E6E3C71072C5EAC14_inline (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStateU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_ServerPort_m87E9048311458445C04EFE6CFAC0B672B9BC96CD_inline (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CServerPortU3Ek__BackingField_7();
		return L_0;
	}
}
