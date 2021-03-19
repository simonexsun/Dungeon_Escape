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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct Dictionary_2_t3B3B3663ECCD2D47C05F241EC6B8A170CFAE8A77;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`2<System.Net.IPAddress,System.String>
struct Func_2_t07AA32ABA3AA42B99EB1A0D449B0292901F35822;
// System.Collections.Generic.IEqualityComparer`1<System.Byte>
struct IEqualityComparer_1_t95750B1CF3F7626EC7AB30893A86E08F445DD75D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>
struct KeyCollection_tA998D765590D33F85EB3DE2B7074233953998022;
// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedList_1_tA10B31EBEC493C82ECB77F028307E3CCC8F0EDF9;
// System.Collections.Generic.List`1<System.Reflection.MethodInfo>
struct List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>
struct List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12;
// System.Collections.Generic.List`1<System.Threading.Thread>
struct List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118;
// System.Collections.Generic.Queue`1<System.Byte[]>
struct Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.CmdLogItem>
struct Queue_1_t72958C8E3CB523A6E076117E0712B4EAF263FEB7;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.StreamBuffer>
struct Queue_1_t2B2612F7BE61301DEDF4F890E4F5367D778FC12F;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>
struct Queue_1_t8436C2B4A16DF42BF18573DEDB0F4D5064C2B8AE;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Object>
struct ValueCollection_t34CD6712C06BB62D73CFFB44390425C11A63AB16;
// System.Collections.Generic.Dictionary`2/Entry<System.Byte,System.Object>[]
struct EntryU5BU5D_t615ACEB7BB0C90B6E4CC324A2EAA23513755256E;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// ExitGames.Client.Photon.StreamBuffer[]
struct StreamBufferU5BU5D_t70EB2141FAAA8872B7A9BC0D8EFF6ADBD31D8EE4;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Threading.Thread[]
struct ThreadU5BU5D_t9AB1EEE437F00EABE533CB2261E519C3976BD81F;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// ExitGames.Client.Photon.PeerBase/MyAction[]
struct MyActionU5BU5D_tB1DBE66043749431A076D3309B76AD9CA7B940D1;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IO.EndOfStreamException
struct EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059;
// System.Net.EndPoint
struct EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA;
// ExitGames.Client.Photon.EventData
struct EventData_tDF6852AC8418EFC44C9C88CCC25226400C9FAA31;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Photon.SocketServer.Security.ICryptoProvider
struct ICryptoProvider_t45AF0B7A1D230BA087DE740DDFEBFD876076E75B;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.IOAsyncCallback
struct IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E;
// System.Net.IPAddress
struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE;
// ExitGames.Client.Photon.Encryption.IPhotonEncryptor
struct IPhotonEncryptor_t26E13211CF09200ECE9F822BEA059DD44D8228F6;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80;
// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// ExitGames.Client.Photon.IProtocol
struct IProtocol_tE34131CF5A8A0FF12F4C6264A2B3BCB449F4174A;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MulticastDelegate
struct MulticastDelegate_t;
// ExitGames.Client.Photon.NCommand
struct NCommand_t851CF93131DA111A6A039850168F376D0050D038;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t4A1C331EC3287275813D225F252C36EF3DE2AE4C;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_tA44F0646DDF55EC1521DA535F772BDEB7F5AA045;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2;
// ExitGames.Client.Photon.Protocol16
struct Protocol16_tB45C23B7BF100A5B796B76E7664272E2A9EF5DA1;
// ExitGames.Client.Photon.Protocol18
struct Protocol18_t1382440B8DB2E3E20DEB341B824D368093B93C47;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// ExitGames.Client.Photon.SerializeMethod
struct SerializeMethod_t390646D2A9C94E6966CA88C4A16C97F711D9D4AC;
// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_t5E36C0898409DCF68798F12D4899F2255F289DC5;
// ExitGames.Client.Photon.SimulationItem
struct SimulationItem_t3318AB795652255E3A5C52FFE136E586CFE57076;
// System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09;
// System.Net.Sockets.SocketException
struct SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88;
// ExitGames.Client.Photon.SocketNative
struct SocketNative_t4955989E680FD53BE6ECDCC6BCEE93BA28208032;
// ExitGames.Client.Photon.SocketTcp
struct SocketTcp_t6DA1B64C0FCE8B978387AB8EC153932CADD27F02;
// ExitGames.Client.Photon.SocketUdp
struct SocketUdp_tFB179A3EA0410DDDDCAAF22E21B1445810D4BAFA;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// ExitGames.Client.Photon.StreamBuffer
struct StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// ExitGames.Client.Photon.TPeer
struct TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65;
// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// System.Threading.ThreadStart
struct ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate
struct LogCallbackDelegate_t97F0F61712F0ED77B58D43AF35C1E3B721BB93E9;
// ExitGames.Client.Photon.IPhotonSocket/<>c
struct U3CU3Ec_t2D8D1E94B69E582A8C0C13685C2552A5222E2716;
// ExitGames.Client.Photon.PeerBase/<>c__DisplayClass108_0
struct U3CU3Ec__DisplayClass108_0_t64F864F04C05F82F58AE9D771DC44FA10FAB5E68;
// ExitGames.Client.Photon.PeerBase/<>c__DisplayClass109_0
struct U3CU3Ec__DisplayClass109_0_t357C7AE2AB9EF03C4423B72CC4BEDEADE6DDF769;
// ExitGames.Client.Photon.PeerBase/MyAction
struct MyAction_tC825FCD41C6AA4314F2D66D0FF11992F6CBAC017;
// ExitGames.Client.Photon.SupportClass/<>c
struct U3CU3Ec_tE76D54910C712C6B8061D714E4BEF54AB4280F63;
// ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t525AE973CC2659D877AEC9706B1BC60424D154A8;
// ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate
struct IntegerMillisecondsDelegate_tFA09AD82FF54A8E784DF5B0AE0B27FDE48D70A9E;

IL2CPP_EXTERN_C RuntimeClass* AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionStateValue_t632C7ED12C80052ADD64C243BC3EC72F835CBFA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeliveryMode_t24B37E13B9A45C2DE24E1B5B70C57E977C31FF7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICryptoProvider_t45AF0B7A1D230BA087DE740DDFEBFD876076E75B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntegerMillisecondsDelegate_tFA09AD82FF54A8E784DF5B0AE0B27FDE48D70A9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MyAction_tC825FCD41C6AA4314F2D66D0FF11992F6CBAC017_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonCodes_tD1A9077B43D53F53C2951300FDAC9FCFCB1EEDCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonSocketState_tC9A83DC96CCE242EDCFFF9861BF05C2ADA7FFF9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Protocol16_tB45C23B7BF100A5B796B76E7664272E2A9EF5DA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Protocol18_t1382440B8DB2E3E20DEB341B824D368093B93C47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Protocol_t8FFDD4F2A9126501AFA64394B4F67A354A016491_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecurityException_t3BE23C00ECC638A4EDCAA33572C4DCC21F2FA769_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketError_tA0135DFDFBD5E43BC2F44D8AAC13CDB444074F80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketNative_t4955989E680FD53BE6ECDCC6BCEE93BA28208032_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketTcp_t6DA1B64C0FCE8B978387AB8EC153932CADD27F02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadSafeRandom_t3541F287E963FC1137741E2776EB5E1CCA878164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_t525AE973CC2659D877AEC9706B1BC60424D154A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2D8D1E94B69E582A8C0C13685C2552A5222E2716_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE76D54910C712C6B8061D714E4BEF54AB4280F63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Version_t31FCFBC69DBE1651E4680B850872F26C26A91BAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t3609B4DBF30D23669B25407E61F7E8BBF7C3206F____6668D4903321030E42A6CE59AB96ADD9D0214FAC_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t3609B4DBF30D23669B25407E61F7E8BBF7C3206F____9438AAAAC3906291F3DF6BE5FE89F45BBFD3B269_3_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0236BACCD260A20F0738D0E7EDBB60850D17B36A;
IL2CPP_EXTERN_C String_t* _stringLiteral070D193C86BF98D0196B0B2AB6F7CF0437FEF24B;
IL2CPP_EXTERN_C String_t* _stringLiteral0844A3E92F62DCD91CD00D9084B9DB82474F02CA;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral105DCD844D9A45876F13A3503C14C3FC3A5186BA;
IL2CPP_EXTERN_C String_t* _stringLiteral106BEAE98A63EADA0EA9A8EBE5B91FD6703219EE;
IL2CPP_EXTERN_C String_t* _stringLiteral191D7F30D495BBE4F52FE89B64D411898274ED12;
IL2CPP_EXTERN_C String_t* _stringLiteral1D13C9FF2BABB29CC1B62A9FA42C9A371FA95548;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466;
IL2CPP_EXTERN_C String_t* _stringLiteral23C9C8C814E62464300FF7E74593ED2ECBD8DD97;
IL2CPP_EXTERN_C String_t* _stringLiteral2A2D33772A2965A6EC7A260D6AEF68730D411384;
IL2CPP_EXTERN_C String_t* _stringLiteral2FB2C3D548AEAEA2F3E1AEAA8D132ED0E13EDF9E;
IL2CPP_EXTERN_C String_t* _stringLiteral331681871198787BC7941BD421E635F40B86CE38;
IL2CPP_EXTERN_C String_t* _stringLiteral3A5C73D4EFF4A8952E9F05744AF2498E099ACC1F;
IL2CPP_EXTERN_C String_t* _stringLiteral3CC8D7011607DEE69C89FE518BB89125A3FD0309;
IL2CPP_EXTERN_C String_t* _stringLiteral3DFD22CDAE88D39C18071D0212A92D70D0C3F850;
IL2CPP_EXTERN_C String_t* _stringLiteral4D5285CF040B43C9DE99AD4CEF2B806147D29654;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral57181476910FA4C16EFCC0E7443CD9C417D2514B;
IL2CPP_EXTERN_C String_t* _stringLiteral5A22EC4707797C7AF782D7EE636368480C673139;
IL2CPP_EXTERN_C String_t* _stringLiteral5AF74A218C743A64A61DCB2CB5C232805167A4B2;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral665908BFFBC2A550A5A9FF79CD8BAB040074DC9A;
IL2CPP_EXTERN_C String_t* _stringLiteral6694B5F6F3666B90EF97D3CC74C9D8B36A63411A;
IL2CPP_EXTERN_C String_t* _stringLiteral6A328C89F6BA1B16C6636D0A5824840B5CFB5593;
IL2CPP_EXTERN_C String_t* _stringLiteral7320E85A8DE6C28D8BEFAC38D01CE66FADFE0968;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral75D46515E5FA1E41165D1F1235FDED4C00F15F43;
IL2CPP_EXTERN_C String_t* _stringLiteral842A27E71750F8CF75D57999C7CBBC93D24F416D;
IL2CPP_EXTERN_C String_t* _stringLiteral85278D80D353BA481AED82DD9BDB4E99BB5FD7B2;
IL2CPP_EXTERN_C String_t* _stringLiteral86A8294451A16C9100336EDF55F2B68CBD45BD67;
IL2CPP_EXTERN_C String_t* _stringLiteral872832AF3EB23DF490D84F89198394B33CB88A29;
IL2CPP_EXTERN_C String_t* _stringLiteral872DE60CB2239200B569B73387AEE6DEF5D86F24;
IL2CPP_EXTERN_C String_t* _stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3;
IL2CPP_EXTERN_C String_t* _stringLiteral8CBACC8665E098574C09F925D61F052BBB7E22B8;
IL2CPP_EXTERN_C String_t* _stringLiteral908BEA1D5D8065EACBEE7F2EC16BAE6A218408FB;
IL2CPP_EXTERN_C String_t* _stringLiteral919A195066BDFAFE43F7191F4F6DE66CCB82EF97;
IL2CPP_EXTERN_C String_t* _stringLiteral97568619B8C86463263770205820BF59EFA6457B;
IL2CPP_EXTERN_C String_t* _stringLiteral9CDB75C7B635278885D0B7EA4B060ED5D6CDDC2B;
IL2CPP_EXTERN_C String_t* _stringLiteral9CEE2204F2243F41DEEA3BB1E28F0E8465F59A5B;
IL2CPP_EXTERN_C String_t* _stringLiteral9D09DA33FDC3D1BC48C84D54B554B437D7EB433B;
IL2CPP_EXTERN_C String_t* _stringLiteralA11767B3AA037BEA810EDDF4B485E8DEC8406BC8;
IL2CPP_EXTERN_C String_t* _stringLiteralA1C16855D8192424FC88BE50A772F28AFBF3D5E6;
IL2CPP_EXTERN_C String_t* _stringLiteralA2076A563A22DA628C30B53A80EA51616D9C8C7C;
IL2CPP_EXTERN_C String_t* _stringLiteralAAF8F05C11CD4B88A9CDCF0903EAA82BF03A32B6;
IL2CPP_EXTERN_C String_t* _stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF;
IL2CPP_EXTERN_C String_t* _stringLiteralAC74A02B4CEED8538DF27EC8749B19526C0B8E0A;
IL2CPP_EXTERN_C String_t* _stringLiteralAD1E171FE9E55598FC5280CDCCB06C8AA67B5883;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB597C7CD7AC9D5522EBA8E601D6EF041517C29E6;
IL2CPP_EXTERN_C String_t* _stringLiteralB73EE191F0E9F1AF4D345769EC47718AC55BF4D3;
IL2CPP_EXTERN_C String_t* _stringLiteralB81392BCA2007DEE74931CF1CFAD610D20C2AE97;
IL2CPP_EXTERN_C String_t* _stringLiteralBE1F6C3A75FB4C487B1F6461877D572F20E3FAAF;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC5D2CD2003AC311D1311272EE1AF3A6A597BFE17;
IL2CPP_EXTERN_C String_t* _stringLiteralC6F3CFE29387EC26E2DA25035AE8EFD559875EF5;
IL2CPP_EXTERN_C String_t* _stringLiteralC7D39E360ACE7C6B120D7DEAA16B87D3B72EF7DD;
IL2CPP_EXTERN_C String_t* _stringLiteralC8B903907D31435907E8AF7300E995E55A75F00B;
IL2CPP_EXTERN_C String_t* _stringLiteralC8C9B128ACA303C17E5837E2ACD6F203E1E4CC69;
IL2CPP_EXTERN_C String_t* _stringLiteralCB5FDD5E178BD05010055C518503A047E0BAB175;
IL2CPP_EXTERN_C String_t* _stringLiteralCCD622A0C172A17233733204AD188DD1F1207FAC;
IL2CPP_EXTERN_C String_t* _stringLiteralD6789EA58E424F90511FD4613F868E6EBBA26766;
IL2CPP_EXTERN_C String_t* _stringLiteralD6BDFCC62C3AECFF329B627E97D9AD57E39F9978;
IL2CPP_EXTERN_C String_t* _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDE6D36863561CF61A2704576F72C7B86C5569EB2;
IL2CPP_EXTERN_C String_t* _stringLiteralE0414ECB1A82762D41F652890CF9961FD7FCCDAF;
IL2CPP_EXTERN_C String_t* _stringLiteralE43E64E1F69748B6D15E9C8A2E69C9A3A3C4D800;
IL2CPP_EXTERN_C String_t* _stringLiteralEA04D4286952D44B4CB5C87E7D30E05FE4153434;
IL2CPP_EXTERN_C String_t* _stringLiteralEB3AA2628BF342A84CE7EB2AD8B7E300B7A91D26;
IL2CPP_EXTERN_C String_t* _stringLiteralF09647061E14A6AB82D0FE232AB0BC1838440C6D;
IL2CPP_EXTERN_C String_t* _stringLiteralF712C5F62331F2870DB319ED66CDF53B831F3CA1;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m8EAE235A8AA510698BE04B4EC44DCA6979E58D29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m383F9AF12DF2593726E7F63FE9438E8ECEA542BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6C79F9A026ACCB196BD430F260975C794ED4BD9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m791BCFDD5F935FDC5E54CA8742E870ACA926689B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF58D22F35D225408FD85AED23F90A8650B555E06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m317C461C1E14AC1BD319AA6CD3258B5833E41850_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m36355704B10200ABC2B12900E77E4A9987640F3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3C888313B73CFAA9196022BCADD304B04ED400D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m861458629F616BF514394E7BBA1E6AD2B2570E25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF4F192665FB9D652A220E87BD65C5EFF1AA3476D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m5E1CC2412904B8E2604B5BA8296F55109C633442_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_m83F66337973B90D44B04DA1302077D6CCA463BCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m2EA4ED50C9D3AFC5608B9ACDF7C611D244872F0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mD1D7E79FFDA16CE4A8E84DF66F14C7BF490D5138_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m7970BCC9C6190DE84A9EAE57CF52472B3795380A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m77A700976BCE8508C7EEC542FA014BB67577F610_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m1D55723B47270D04849E24BC09480DCD17C0CEBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m27B008601F73A4AFC69DFA5FF40110D298744D7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketTcp_DnsAndConnect_m8FDC09A2ABDE3AFD160F87EF57904CF3C2B33EEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketTcp_ReceiveLoop_m2B86048740D1B4BB94F0B784774B8E5387ED13C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketUdp_DnsAndConnect_mDBCB843FE2B9753BEC5BFE76F2CA6B6EC2DDD58E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketUdp_ReceiveLoop_m29A1F65FA0A8ED5C8C4AC50155FEB83C50F754A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamBuffer_ReadByte_m1D6111443077B74A57D9DC1340E14D0625F2AE39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamBuffer_Seek_m9C0861B49198D468C8B13E526F39BD0E4772E0B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TPeer_EnqueueMessageAsPayload_m831B8E40556A6FD07A355BD79D090827DBA55D11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__20_0_m982F5A6F95B91823E6902368221AA21A3C64C55E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CStartBackgroundCallsU3Eb__0_mE22D3544AD11BDC9AA7279CD28FFEDF725AFBD46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Hashtable_tD51304A6145CE3C16DA891982FF77FCF264C2646_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB;
struct MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct  Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t615ACEB7BB0C90B6E4CC324A2EAA23513755256E* ___entries_1;
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
	KeyCollection_tA998D765590D33F85EB3DE2B7074233953998022 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t34CD6712C06BB62D73CFFB44390425C11A63AB16 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___entries_1)); }
	inline EntryU5BU5D_t615ACEB7BB0C90B6E4CC324A2EAA23513755256E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t615ACEB7BB0C90B6E4CC324A2EAA23513755256E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t615ACEB7BB0C90B6E4CC324A2EAA23513755256E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___keys_7)); }
	inline KeyCollection_tA998D765590D33F85EB3DE2B7074233953998022 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tA998D765590D33F85EB3DE2B7074233953998022 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tA998D765590D33F85EB3DE2B7074233953998022 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___values_8)); }
	inline ValueCollection_t34CD6712C06BB62D73CFFB44390425C11A63AB16 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t34CD6712C06BB62D73CFFB44390425C11A63AB16 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t34CD6712C06BB62D73CFFB44390425C11A63AB16 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Reflection.MethodInfo>
struct  List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4, ____items_1)); }
	inline MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* get__items_1() const { return ____items_1; }
	inline MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4_StaticFields, ____emptyArray_5)); }
	inline MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>
struct  List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StreamBufferU5BU5D_t70EB2141FAAA8872B7A9BC0D8EFF6ADBD31D8EE4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12, ____items_1)); }
	inline StreamBufferU5BU5D_t70EB2141FAAA8872B7A9BC0D8EFF6ADBD31D8EE4* get__items_1() const { return ____items_1; }
	inline StreamBufferU5BU5D_t70EB2141FAAA8872B7A9BC0D8EFF6ADBD31D8EE4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StreamBufferU5BU5D_t70EB2141FAAA8872B7A9BC0D8EFF6ADBD31D8EE4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StreamBufferU5BU5D_t70EB2141FAAA8872B7A9BC0D8EFF6ADBD31D8EE4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12_StaticFields, ____emptyArray_5)); }
	inline StreamBufferU5BU5D_t70EB2141FAAA8872B7A9BC0D8EFF6ADBD31D8EE4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StreamBufferU5BU5D_t70EB2141FAAA8872B7A9BC0D8EFF6ADBD31D8EE4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StreamBufferU5BU5D_t70EB2141FAAA8872B7A9BC0D8EFF6ADBD31D8EE4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Threading.Thread>
struct  List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ThreadU5BU5D_t9AB1EEE437F00EABE533CB2261E519C3976BD81F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118, ____items_1)); }
	inline ThreadU5BU5D_t9AB1EEE437F00EABE533CB2261E519C3976BD81F* get__items_1() const { return ____items_1; }
	inline ThreadU5BU5D_t9AB1EEE437F00EABE533CB2261E519C3976BD81F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ThreadU5BU5D_t9AB1EEE437F00EABE533CB2261E519C3976BD81F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ThreadU5BU5D_t9AB1EEE437F00EABE533CB2261E519C3976BD81F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118_StaticFields, ____emptyArray_5)); }
	inline ThreadU5BU5D_t9AB1EEE437F00EABE533CB2261E519C3976BD81F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ThreadU5BU5D_t9AB1EEE437F00EABE533CB2261E519C3976BD81F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ThreadU5BU5D_t9AB1EEE437F00EABE533CB2261E519C3976BD81F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Byte[]>
struct  Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4, ____array_0)); }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* get__array_0() const { return ____array_0; }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct  Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>
struct  Queue_1_t8436C2B4A16DF42BF18573DEDB0F4D5064C2B8AE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	MyActionU5BU5D_tB1DBE66043749431A076D3309B76AD9CA7B940D1* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t8436C2B4A16DF42BF18573DEDB0F4D5064C2B8AE, ____array_0)); }
	inline MyActionU5BU5D_tB1DBE66043749431A076D3309B76AD9CA7B940D1* get__array_0() const { return ____array_0; }
	inline MyActionU5BU5D_tB1DBE66043749431A076D3309B76AD9CA7B940D1** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(MyActionU5BU5D_tB1DBE66043749431A076D3309B76AD9CA7B940D1* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t8436C2B4A16DF42BF18573DEDB0F4D5064C2B8AE, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t8436C2B4A16DF42BF18573DEDB0F4D5064C2B8AE, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t8436C2B4A16DF42BF18573DEDB0F4D5064C2B8AE, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t8436C2B4A16DF42BF18573DEDB0F4D5064C2B8AE, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t8436C2B4A16DF42BF18573DEDB0F4D5064C2B8AE, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// System.Net.EndPoint
struct  EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA  : public RuntimeObject
{
public:

public:
};


// ExitGames.Client.Photon.IProtocol
struct  IProtocol_tE34131CF5A8A0FF12F4C6264A2B3BCB449F4174A  : public RuntimeObject
{
public:

public:
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// ExitGames.Client.Photon.NetworkSimulationSet
struct  NetworkSimulationSet_t4A1C331EC3287275813D225F252C36EF3DE2AE4C  : public RuntimeObject
{
public:
	// System.Boolean ExitGames.Client.Photon.NetworkSimulationSet::isSimulationEnabled
	bool ___isSimulationEnabled_0;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::outgoingLag
	int32_t ___outgoingLag_1;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::outgoingJitter
	int32_t ___outgoingJitter_2;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::outgoingLossPercentage
	int32_t ___outgoingLossPercentage_3;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::incomingLag
	int32_t ___incomingLag_4;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::incomingJitter
	int32_t ___incomingJitter_5;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::incomingLossPercentage
	int32_t ___incomingLossPercentage_6;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.NetworkSimulationSet::peerBase
	PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * ___peerBase_7;
	// System.Threading.Thread ExitGames.Client.Photon.NetworkSimulationSet::netSimThread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___netSimThread_8;
	// System.Threading.ManualResetEvent ExitGames.Client.Photon.NetworkSimulationSet::NetSimManualResetEvent
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___NetSimManualResetEvent_9;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::<LostPackagesOut>k__BackingField
	int32_t ___U3CLostPackagesOutU3Ek__BackingField_10;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::<LostPackagesIn>k__BackingField
	int32_t ___U3CLostPackagesInU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_isSimulationEnabled_0() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t4A1C331EC3287275813D225F252C36EF3DE2AE4C, ___isSimulationEnabled_0)); }
	inline bool get_isSimulationEnabled_0() const { return ___isSimulationEnabled_0; }
	inline bool* get_address_of_isSimulationEnabled_0() { return &___isSimulationEnabled_0; }
	inline void set_isSimulationEnabled_0(bool value)
	{
		___isSimulationEnabled_0 = value;
	}

	inline static int32_t get_offset_of_outgoingLag_1() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t4A1C331EC3287275813D225F252C36EF3DE2AE4C, ___outgoingLag_1)); }
	inline int32_t get_outgoingLag_1() const { return ___outgoingLag_1; }
	inline int32_t* get_address_of_outgoingLag_1() { return &___outgoingLag_1; }
	inline void set_outgoingLag_1(int32_t value)
	{
		___outgoingLag_1 = value;
	}

	inline static int32_t get_offset_of_outgoingJitter_2() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t4A1C331EC3287275813D225F252C36EF3DE2AE4C, ___outgoingJitter_2)); }
	inline int32_t get_outgoingJitter_2() const { return ___outgoingJitter_2; }
	inline int32_t* get_address_of_outgoingJitter_2() { return &___outgoingJitter_2; }
	inline void set_outgoingJitter_2(int32_t value)
	{
		___outgoingJitter_2 = value;
	}

	inline static int32_t get_offset_of_outgoingLossPercentage_3() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t4A1C331EC3287275813D225F252C36EF3DE2AE4C, ___outgoingLossPercentage_3)); }
	inline int32_t get_outgoingLossPercentage_3() const { return ___outgoingLossPercentage_3; }
	inline int32_t* get_address_of_outgoingLossPercentage_3() { return &___outgoingLossPercentage_3; }
	inline void set_outgoingLossPercentage_3(int32_t value)
	{
		___outgoingLossPercentage_3 = value;
	}

	inline static int32_t get_offset_of_incomingLag_4() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t4A1C331EC3287275813D225F252C36EF3DE2AE4C, ___incomingLag_4)); }
	inline int32_t get_incomingLag_4() const { return ___incomingLag_4; }
	inline int32_t* get_address_of_incomingLag_4() { return &___incomingLag_4; }
	inline void set_incomingLag_4(int32_t value)
	{
		___incomingLag_4 = value;
	}

	inline static int32_t get_offset_of_incomingJitter_5() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t4A1C331EC3287275813D225F252C36EF3DE2AE4C, ___incomingJitter_5)); }
	inline int32_t get_incomingJitter_5() const { return ___incomingJitter_5; }
	inline int32_t* get_address_of_incomingJitter_5() { return &___incomingJitter_5; }
	inline void set_incomingJitter_5(int32_t value)
	{
		___incomingJitter_5 = value;
	}

	inline static int32_t get_offset_of_incomingLossPercentage_6() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t4A1C331EC3287275813D225F252C36EF3DE2AE4C, ___incomingLossPercentage_6)); }
	inline int32_t get_incomingLossPercentage_6() const { return ___incomingLossPercentage_6; }
	inline int32_t* get_address_of_incomingLossPercentage_6() { return &___incomingLossPercentage_6; }
	inline void set_incomingLossPercentage_6(int32_t value)
	{
		___incomingLossPercentage_6 = value;
	}

	inline static int32_t get_offset_of_peerBase_7() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t4A1C331EC3287275813D225F252C36EF3DE2AE4C, ___peerBase_7)); }
	inline PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * get_peerBase_7() const { return ___peerBase_7; }
	inline PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 ** get_address_of_peerBase_7() { return &___peerBase_7; }
	inline void set_peerBase_7(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * value)
	{
		___peerBase_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peerBase_7), (void*)value);
	}

	inline static int32_t get_offset_of_netSimThread_8() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t4A1C331EC3287275813D225F252C36EF3DE2AE4C, ___netSimThread_8)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_netSimThread_8() const { return ___netSimThread_8; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_netSimThread_8() { return &___netSimThread_8; }
	inline void set_netSimThread_8(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___netSimThread_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___netSimThread_8), (void*)value);
	}

	inline static int32_t get_offset_of_NetSimManualResetEvent_9() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t4A1C331EC3287275813D225F252C36EF3DE2AE4C, ___NetSimManualResetEvent_9)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_NetSimManualResetEvent_9() const { return ___NetSimManualResetEvent_9; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_NetSimManualResetEvent_9() { return &___NetSimManualResetEvent_9; }
	inline void set_NetSimManualResetEvent_9(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___NetSimManualResetEvent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetSimManualResetEvent_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLostPackagesOutU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t4A1C331EC3287275813D225F252C36EF3DE2AE4C, ___U3CLostPackagesOutU3Ek__BackingField_10)); }
	inline int32_t get_U3CLostPackagesOutU3Ek__BackingField_10() const { return ___U3CLostPackagesOutU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CLostPackagesOutU3Ek__BackingField_10() { return &___U3CLostPackagesOutU3Ek__BackingField_10; }
	inline void set_U3CLostPackagesOutU3Ek__BackingField_10(int32_t value)
	{
		___U3CLostPackagesOutU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CLostPackagesInU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_t4A1C331EC3287275813D225F252C36EF3DE2AE4C, ___U3CLostPackagesInU3Ek__BackingField_11)); }
	inline int32_t get_U3CLostPackagesInU3Ek__BackingField_11() const { return ___U3CLostPackagesInU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CLostPackagesInU3Ek__BackingField_11() { return &___U3CLostPackagesInU3Ek__BackingField_11; }
	inline void set_U3CLostPackagesInU3Ek__BackingField_11(int32_t value)
	{
		___U3CLostPackagesInU3Ek__BackingField_11 = value;
	}
};


// ExitGames.Client.Photon.OperationResponse
struct  OperationResponse_tA44F0646DDF55EC1521DA535F772BDEB7F5AA045  : public RuntimeObject
{
public:
	// System.Byte ExitGames.Client.Photon.OperationResponse::OperationCode
	uint8_t ___OperationCode_0;
	// System.Int16 ExitGames.Client.Photon.OperationResponse::ReturnCode
	int16_t ___ReturnCode_1;
	// System.String ExitGames.Client.Photon.OperationResponse::DebugMessage
	String_t* ___DebugMessage_2;
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.OperationResponse::Parameters
	Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * ___Parameters_3;

public:
	inline static int32_t get_offset_of_OperationCode_0() { return static_cast<int32_t>(offsetof(OperationResponse_tA44F0646DDF55EC1521DA535F772BDEB7F5AA045, ___OperationCode_0)); }
	inline uint8_t get_OperationCode_0() const { return ___OperationCode_0; }
	inline uint8_t* get_address_of_OperationCode_0() { return &___OperationCode_0; }
	inline void set_OperationCode_0(uint8_t value)
	{
		___OperationCode_0 = value;
	}

	inline static int32_t get_offset_of_ReturnCode_1() { return static_cast<int32_t>(offsetof(OperationResponse_tA44F0646DDF55EC1521DA535F772BDEB7F5AA045, ___ReturnCode_1)); }
	inline int16_t get_ReturnCode_1() const { return ___ReturnCode_1; }
	inline int16_t* get_address_of_ReturnCode_1() { return &___ReturnCode_1; }
	inline void set_ReturnCode_1(int16_t value)
	{
		___ReturnCode_1 = value;
	}

	inline static int32_t get_offset_of_DebugMessage_2() { return static_cast<int32_t>(offsetof(OperationResponse_tA44F0646DDF55EC1521DA535F772BDEB7F5AA045, ___DebugMessage_2)); }
	inline String_t* get_DebugMessage_2() const { return ___DebugMessage_2; }
	inline String_t** get_address_of_DebugMessage_2() { return &___DebugMessage_2; }
	inline void set_DebugMessage_2(String_t* value)
	{
		___DebugMessage_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DebugMessage_2), (void*)value);
	}

	inline static int32_t get_offset_of_Parameters_3() { return static_cast<int32_t>(offsetof(OperationResponse_tA44F0646DDF55EC1521DA535F772BDEB7F5AA045, ___Parameters_3)); }
	inline Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * get_Parameters_3() const { return ___Parameters_3; }
	inline Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A ** get_address_of_Parameters_3() { return &___Parameters_3; }
	inline void set_Parameters_3(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * value)
	{
		___Parameters_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Parameters_3), (void*)value);
	}
};


// ExitGames.Client.Photon.PhotonCodes
struct  PhotonCodes_tD1A9077B43D53F53C2951300FDAC9FCFCB1EEDCD  : public RuntimeObject
{
public:

public:
};

struct PhotonCodes_tD1A9077B43D53F53C2951300FDAC9FCFCB1EEDCD_StaticFields
{
public:
	// System.Byte ExitGames.Client.Photon.PhotonCodes::ClientKey
	uint8_t ___ClientKey_0;
	// System.Byte ExitGames.Client.Photon.PhotonCodes::ModeKey
	uint8_t ___ModeKey_1;
	// System.Byte ExitGames.Client.Photon.PhotonCodes::ServerKey
	uint8_t ___ServerKey_2;
	// System.Byte ExitGames.Client.Photon.PhotonCodes::InitEncryption
	uint8_t ___InitEncryption_3;
	// System.Byte ExitGames.Client.Photon.PhotonCodes::Ping
	uint8_t ___Ping_4;

public:
	inline static int32_t get_offset_of_ClientKey_0() { return static_cast<int32_t>(offsetof(PhotonCodes_tD1A9077B43D53F53C2951300FDAC9FCFCB1EEDCD_StaticFields, ___ClientKey_0)); }
	inline uint8_t get_ClientKey_0() const { return ___ClientKey_0; }
	inline uint8_t* get_address_of_ClientKey_0() { return &___ClientKey_0; }
	inline void set_ClientKey_0(uint8_t value)
	{
		___ClientKey_0 = value;
	}

	inline static int32_t get_offset_of_ModeKey_1() { return static_cast<int32_t>(offsetof(PhotonCodes_tD1A9077B43D53F53C2951300FDAC9FCFCB1EEDCD_StaticFields, ___ModeKey_1)); }
	inline uint8_t get_ModeKey_1() const { return ___ModeKey_1; }
	inline uint8_t* get_address_of_ModeKey_1() { return &___ModeKey_1; }
	inline void set_ModeKey_1(uint8_t value)
	{
		___ModeKey_1 = value;
	}

	inline static int32_t get_offset_of_ServerKey_2() { return static_cast<int32_t>(offsetof(PhotonCodes_tD1A9077B43D53F53C2951300FDAC9FCFCB1EEDCD_StaticFields, ___ServerKey_2)); }
	inline uint8_t get_ServerKey_2() const { return ___ServerKey_2; }
	inline uint8_t* get_address_of_ServerKey_2() { return &___ServerKey_2; }
	inline void set_ServerKey_2(uint8_t value)
	{
		___ServerKey_2 = value;
	}

	inline static int32_t get_offset_of_InitEncryption_3() { return static_cast<int32_t>(offsetof(PhotonCodes_tD1A9077B43D53F53C2951300FDAC9FCFCB1EEDCD_StaticFields, ___InitEncryption_3)); }
	inline uint8_t get_InitEncryption_3() const { return ___InitEncryption_3; }
	inline uint8_t* get_address_of_InitEncryption_3() { return &___InitEncryption_3; }
	inline void set_InitEncryption_3(uint8_t value)
	{
		___InitEncryption_3 = value;
	}

	inline static int32_t get_offset_of_Ping_4() { return static_cast<int32_t>(offsetof(PhotonCodes_tD1A9077B43D53F53C2951300FDAC9FCFCB1EEDCD_StaticFields, ___Ping_4)); }
	inline uint8_t get_Ping_4() const { return ___Ping_4; }
	inline uint8_t* get_address_of_Ping_4() { return &___Ping_4; }
	inline void set_Ping_4(uint8_t value)
	{
		___Ping_4 = value;
	}
};


// System.Random
struct  Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_3;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_4;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___SeedArray_5;

public:
	inline static int32_t get_offset_of_inext_3() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inext_3)); }
	inline int32_t get_inext_3() const { return ___inext_3; }
	inline int32_t* get_address_of_inext_3() { return &___inext_3; }
	inline void set_inext_3(int32_t value)
	{
		___inext_3 = value;
	}

	inline static int32_t get_offset_of_inextp_4() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inextp_4)); }
	inline int32_t get_inextp_4() const { return ___inextp_4; }
	inline int32_t* get_address_of_inextp_4() { return &___inextp_4; }
	inline void set_inextp_4(int32_t value)
	{
		___inextp_4 = value;
	}

	inline static int32_t get_offset_of_SeedArray_5() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___SeedArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_SeedArray_5() const { return ___SeedArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_SeedArray_5() { return &___SeedArray_5; }
	inline void set_SeedArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___SeedArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_5), (void*)value);
	}
};


// ExitGames.Client.Photon.SerializationProtocolFactory
struct  SerializationProtocolFactory_t6562F60BE4501A3EA76790330D48B24FFB098A27  : public RuntimeObject
{
public:

public:
};


// ExitGames.Client.Photon.SimulationItem
struct  SimulationItem_t3318AB795652255E3A5C52FFE136E586CFE57076  : public RuntimeObject
{
public:
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.SimulationItem::stopw
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___stopw_0;
	// System.Int32 ExitGames.Client.Photon.SimulationItem::TimeToExecute
	int32_t ___TimeToExecute_1;
	// System.Byte[] ExitGames.Client.Photon.SimulationItem::DelayedData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___DelayedData_2;
	// System.Int32 ExitGames.Client.Photon.SimulationItem::<Delay>k__BackingField
	int32_t ___U3CDelayU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_stopw_0() { return static_cast<int32_t>(offsetof(SimulationItem_t3318AB795652255E3A5C52FFE136E586CFE57076, ___stopw_0)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_stopw_0() const { return ___stopw_0; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_stopw_0() { return &___stopw_0; }
	inline void set_stopw_0(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___stopw_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stopw_0), (void*)value);
	}

	inline static int32_t get_offset_of_TimeToExecute_1() { return static_cast<int32_t>(offsetof(SimulationItem_t3318AB795652255E3A5C52FFE136E586CFE57076, ___TimeToExecute_1)); }
	inline int32_t get_TimeToExecute_1() const { return ___TimeToExecute_1; }
	inline int32_t* get_address_of_TimeToExecute_1() { return &___TimeToExecute_1; }
	inline void set_TimeToExecute_1(int32_t value)
	{
		___TimeToExecute_1 = value;
	}

	inline static int32_t get_offset_of_DelayedData_2() { return static_cast<int32_t>(offsetof(SimulationItem_t3318AB795652255E3A5C52FFE136E586CFE57076, ___DelayedData_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_DelayedData_2() const { return ___DelayedData_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_DelayedData_2() { return &___DelayedData_2; }
	inline void set_DelayedData_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___DelayedData_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DelayedData_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDelayU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SimulationItem_t3318AB795652255E3A5C52FFE136E586CFE57076, ___U3CDelayU3Ek__BackingField_3)); }
	inline int32_t get_U3CDelayU3Ek__BackingField_3() const { return ___U3CDelayU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CDelayU3Ek__BackingField_3() { return &___U3CDelayU3Ek__BackingField_3; }
	inline void set_U3CDelayU3Ek__BackingField_3(int32_t value)
	{
		___U3CDelayU3Ek__BackingField_3 = value;
	}
};


// System.Diagnostics.Stopwatch
struct  Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
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


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// ExitGames.Client.Photon.SupportClass
struct  SupportClass_tD932090A80B499007165429CE65D20F934AE52E8  : public RuntimeObject
{
public:

public:
};

struct SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Threading.Thread> ExitGames.Client.Photon.SupportClass::threadList
	List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * ___threadList_0;
	// ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate ExitGames.Client.Photon.SupportClass::IntegerMilliseconds
	IntegerMillisecondsDelegate_tFA09AD82FF54A8E784DF5B0AE0B27FDE48D70A9E * ___IntegerMilliseconds_1;
	// System.UInt32[] ExitGames.Client.Photon.SupportClass::crcLookupTable
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___crcLookupTable_2;

public:
	inline static int32_t get_offset_of_threadList_0() { return static_cast<int32_t>(offsetof(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_StaticFields, ___threadList_0)); }
	inline List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * get_threadList_0() const { return ___threadList_0; }
	inline List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 ** get_address_of_threadList_0() { return &___threadList_0; }
	inline void set_threadList_0(List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * value)
	{
		___threadList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___threadList_0), (void*)value);
	}

	inline static int32_t get_offset_of_IntegerMilliseconds_1() { return static_cast<int32_t>(offsetof(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_StaticFields, ___IntegerMilliseconds_1)); }
	inline IntegerMillisecondsDelegate_tFA09AD82FF54A8E784DF5B0AE0B27FDE48D70A9E * get_IntegerMilliseconds_1() const { return ___IntegerMilliseconds_1; }
	inline IntegerMillisecondsDelegate_tFA09AD82FF54A8E784DF5B0AE0B27FDE48D70A9E ** get_address_of_IntegerMilliseconds_1() { return &___IntegerMilliseconds_1; }
	inline void set_IntegerMilliseconds_1(IntegerMillisecondsDelegate_tFA09AD82FF54A8E784DF5B0AE0B27FDE48D70A9E * value)
	{
		___IntegerMilliseconds_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IntegerMilliseconds_1), (void*)value);
	}

	inline static int32_t get_offset_of_crcLookupTable_2() { return static_cast<int32_t>(offsetof(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_StaticFields, ___crcLookupTable_2)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_crcLookupTable_2() const { return ___crcLookupTable_2; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_crcLookupTable_2() { return &___crcLookupTable_2; }
	inline void set_crcLookupTable_2(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___crcLookupTable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___crcLookupTable_2), (void*)value);
	}
};


// ExitGames.Client.Photon.TrafficStats
struct  TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<PackageHeaderSize>k__BackingField
	int32_t ___U3CPackageHeaderSizeU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ReliableCommandCount>k__BackingField
	int32_t ___U3CReliableCommandCountU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<UnreliableCommandCount>k__BackingField
	int32_t ___U3CUnreliableCommandCountU3Ek__BackingField_2;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<FragmentCommandCount>k__BackingField
	int32_t ___U3CFragmentCommandCountU3Ek__BackingField_3;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ControlCommandCount>k__BackingField
	int32_t ___U3CControlCommandCountU3Ek__BackingField_4;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TotalPacketCount>k__BackingField
	int32_t ___U3CTotalPacketCountU3Ek__BackingField_5;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TotalCommandsInPackets>k__BackingField
	int32_t ___U3CTotalCommandsInPacketsU3Ek__BackingField_6;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ReliableCommandBytes>k__BackingField
	int32_t ___U3CReliableCommandBytesU3Ek__BackingField_7;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<UnreliableCommandBytes>k__BackingField
	int32_t ___U3CUnreliableCommandBytesU3Ek__BackingField_8;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<FragmentCommandBytes>k__BackingField
	int32_t ___U3CFragmentCommandBytesU3Ek__BackingField_9;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ControlCommandBytes>k__BackingField
	int32_t ___U3CControlCommandBytesU3Ek__BackingField_10;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TimestampOfLastAck>k__BackingField
	int32_t ___U3CTimestampOfLastAckU3Ek__BackingField_11;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TimestampOfLastReliableCommand>k__BackingField
	int32_t ___U3CTimestampOfLastReliableCommandU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_U3CPackageHeaderSizeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7, ___U3CPackageHeaderSizeU3Ek__BackingField_0)); }
	inline int32_t get_U3CPackageHeaderSizeU3Ek__BackingField_0() const { return ___U3CPackageHeaderSizeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CPackageHeaderSizeU3Ek__BackingField_0() { return &___U3CPackageHeaderSizeU3Ek__BackingField_0; }
	inline void set_U3CPackageHeaderSizeU3Ek__BackingField_0(int32_t value)
	{
		___U3CPackageHeaderSizeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CReliableCommandCountU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7, ___U3CReliableCommandCountU3Ek__BackingField_1)); }
	inline int32_t get_U3CReliableCommandCountU3Ek__BackingField_1() const { return ___U3CReliableCommandCountU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CReliableCommandCountU3Ek__BackingField_1() { return &___U3CReliableCommandCountU3Ek__BackingField_1; }
	inline void set_U3CReliableCommandCountU3Ek__BackingField_1(int32_t value)
	{
		___U3CReliableCommandCountU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CUnreliableCommandCountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7, ___U3CUnreliableCommandCountU3Ek__BackingField_2)); }
	inline int32_t get_U3CUnreliableCommandCountU3Ek__BackingField_2() const { return ___U3CUnreliableCommandCountU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CUnreliableCommandCountU3Ek__BackingField_2() { return &___U3CUnreliableCommandCountU3Ek__BackingField_2; }
	inline void set_U3CUnreliableCommandCountU3Ek__BackingField_2(int32_t value)
	{
		___U3CUnreliableCommandCountU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CFragmentCommandCountU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7, ___U3CFragmentCommandCountU3Ek__BackingField_3)); }
	inline int32_t get_U3CFragmentCommandCountU3Ek__BackingField_3() const { return ___U3CFragmentCommandCountU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CFragmentCommandCountU3Ek__BackingField_3() { return &___U3CFragmentCommandCountU3Ek__BackingField_3; }
	inline void set_U3CFragmentCommandCountU3Ek__BackingField_3(int32_t value)
	{
		___U3CFragmentCommandCountU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CControlCommandCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7, ___U3CControlCommandCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CControlCommandCountU3Ek__BackingField_4() const { return ___U3CControlCommandCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CControlCommandCountU3Ek__BackingField_4() { return &___U3CControlCommandCountU3Ek__BackingField_4; }
	inline void set_U3CControlCommandCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CControlCommandCountU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CTotalPacketCountU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7, ___U3CTotalPacketCountU3Ek__BackingField_5)); }
	inline int32_t get_U3CTotalPacketCountU3Ek__BackingField_5() const { return ___U3CTotalPacketCountU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CTotalPacketCountU3Ek__BackingField_5() { return &___U3CTotalPacketCountU3Ek__BackingField_5; }
	inline void set_U3CTotalPacketCountU3Ek__BackingField_5(int32_t value)
	{
		___U3CTotalPacketCountU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CTotalCommandsInPacketsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7, ___U3CTotalCommandsInPacketsU3Ek__BackingField_6)); }
	inline int32_t get_U3CTotalCommandsInPacketsU3Ek__BackingField_6() const { return ___U3CTotalCommandsInPacketsU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CTotalCommandsInPacketsU3Ek__BackingField_6() { return &___U3CTotalCommandsInPacketsU3Ek__BackingField_6; }
	inline void set_U3CTotalCommandsInPacketsU3Ek__BackingField_6(int32_t value)
	{
		___U3CTotalCommandsInPacketsU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CReliableCommandBytesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7, ___U3CReliableCommandBytesU3Ek__BackingField_7)); }
	inline int32_t get_U3CReliableCommandBytesU3Ek__BackingField_7() const { return ___U3CReliableCommandBytesU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CReliableCommandBytesU3Ek__BackingField_7() { return &___U3CReliableCommandBytesU3Ek__BackingField_7; }
	inline void set_U3CReliableCommandBytesU3Ek__BackingField_7(int32_t value)
	{
		___U3CReliableCommandBytesU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CUnreliableCommandBytesU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7, ___U3CUnreliableCommandBytesU3Ek__BackingField_8)); }
	inline int32_t get_U3CUnreliableCommandBytesU3Ek__BackingField_8() const { return ___U3CUnreliableCommandBytesU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CUnreliableCommandBytesU3Ek__BackingField_8() { return &___U3CUnreliableCommandBytesU3Ek__BackingField_8; }
	inline void set_U3CUnreliableCommandBytesU3Ek__BackingField_8(int32_t value)
	{
		___U3CUnreliableCommandBytesU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CFragmentCommandBytesU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7, ___U3CFragmentCommandBytesU3Ek__BackingField_9)); }
	inline int32_t get_U3CFragmentCommandBytesU3Ek__BackingField_9() const { return ___U3CFragmentCommandBytesU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CFragmentCommandBytesU3Ek__BackingField_9() { return &___U3CFragmentCommandBytesU3Ek__BackingField_9; }
	inline void set_U3CFragmentCommandBytesU3Ek__BackingField_9(int32_t value)
	{
		___U3CFragmentCommandBytesU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CControlCommandBytesU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7, ___U3CControlCommandBytesU3Ek__BackingField_10)); }
	inline int32_t get_U3CControlCommandBytesU3Ek__BackingField_10() const { return ___U3CControlCommandBytesU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CControlCommandBytesU3Ek__BackingField_10() { return &___U3CControlCommandBytesU3Ek__BackingField_10; }
	inline void set_U3CControlCommandBytesU3Ek__BackingField_10(int32_t value)
	{
		___U3CControlCommandBytesU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CTimestampOfLastAckU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7, ___U3CTimestampOfLastAckU3Ek__BackingField_11)); }
	inline int32_t get_U3CTimestampOfLastAckU3Ek__BackingField_11() const { return ___U3CTimestampOfLastAckU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CTimestampOfLastAckU3Ek__BackingField_11() { return &___U3CTimestampOfLastAckU3Ek__BackingField_11; }
	inline void set_U3CTimestampOfLastAckU3Ek__BackingField_11(int32_t value)
	{
		___U3CTimestampOfLastAckU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CTimestampOfLastReliableCommandU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7, ___U3CTimestampOfLastReliableCommandU3Ek__BackingField_12)); }
	inline int32_t get_U3CTimestampOfLastReliableCommandU3Ek__BackingField_12() const { return ___U3CTimestampOfLastReliableCommandU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CTimestampOfLastReliableCommandU3Ek__BackingField_12() { return &___U3CTimestampOfLastReliableCommandU3Ek__BackingField_12; }
	inline void set_U3CTimestampOfLastReliableCommandU3Ek__BackingField_12(int32_t value)
	{
		___U3CTimestampOfLastReliableCommandU3Ek__BackingField_12 = value;
	}
};


// ExitGames.Client.Photon.TrafficStatsGameLevel
struct  TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::timeOfLastDispatchCall
	int32_t ___timeOfLastDispatchCall_0;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::timeOfLastSendCall
	int32_t ___timeOfLastSendCall_1;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<OperationByteCount>k__BackingField
	int32_t ___U3COperationByteCountU3Ek__BackingField_2;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<OperationCount>k__BackingField
	int32_t ___U3COperationCountU3Ek__BackingField_3;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<ResultByteCount>k__BackingField
	int32_t ___U3CResultByteCountU3Ek__BackingField_4;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<ResultCount>k__BackingField
	int32_t ___U3CResultCountU3Ek__BackingField_5;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<EventByteCount>k__BackingField
	int32_t ___U3CEventByteCountU3Ek__BackingField_6;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<EventCount>k__BackingField
	int32_t ___U3CEventCountU3Ek__BackingField_7;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestOpResponseCallback>k__BackingField
	int32_t ___U3CLongestOpResponseCallbackU3Ek__BackingField_8;
	// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestOpResponseCallbackOpCode>k__BackingField
	uint8_t ___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestEventCallback>k__BackingField
	int32_t ___U3CLongestEventCallbackU3Ek__BackingField_10;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestMessageCallback>k__BackingField
	int32_t ___U3CLongestMessageCallbackU3Ek__BackingField_11;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestRawMessageCallback>k__BackingField
	int32_t ___U3CLongestRawMessageCallbackU3Ek__BackingField_12;
	// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestEventCallbackCode>k__BackingField
	uint8_t ___U3CLongestEventCallbackCodeU3Ek__BackingField_13;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestDeltaBetweenDispatching>k__BackingField
	int32_t ___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestDeltaBetweenSending>k__BackingField
	int32_t ___U3CLongestDeltaBetweenSendingU3Ek__BackingField_15;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<DispatchIncomingCommandsCalls>k__BackingField
	int32_t ___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<SendOutgoingCommandsCalls>k__BackingField
	int32_t ___U3CSendOutgoingCommandsCallsU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_timeOfLastDispatchCall_0() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725, ___timeOfLastDispatchCall_0)); }
	inline int32_t get_timeOfLastDispatchCall_0() const { return ___timeOfLastDispatchCall_0; }
	inline int32_t* get_address_of_timeOfLastDispatchCall_0() { return &___timeOfLastDispatchCall_0; }
	inline void set_timeOfLastDispatchCall_0(int32_t value)
	{
		___timeOfLastDispatchCall_0 = value;
	}

	inline static int32_t get_offset_of_timeOfLastSendCall_1() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725, ___timeOfLastSendCall_1)); }
	inline int32_t get_timeOfLastSendCall_1() const { return ___timeOfLastSendCall_1; }
	inline int32_t* get_address_of_timeOfLastSendCall_1() { return &___timeOfLastSendCall_1; }
	inline void set_timeOfLastSendCall_1(int32_t value)
	{
		___timeOfLastSendCall_1 = value;
	}

	inline static int32_t get_offset_of_U3COperationByteCountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725, ___U3COperationByteCountU3Ek__BackingField_2)); }
	inline int32_t get_U3COperationByteCountU3Ek__BackingField_2() const { return ___U3COperationByteCountU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3COperationByteCountU3Ek__BackingField_2() { return &___U3COperationByteCountU3Ek__BackingField_2; }
	inline void set_U3COperationByteCountU3Ek__BackingField_2(int32_t value)
	{
		___U3COperationByteCountU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3COperationCountU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725, ___U3COperationCountU3Ek__BackingField_3)); }
	inline int32_t get_U3COperationCountU3Ek__BackingField_3() const { return ___U3COperationCountU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3COperationCountU3Ek__BackingField_3() { return &___U3COperationCountU3Ek__BackingField_3; }
	inline void set_U3COperationCountU3Ek__BackingField_3(int32_t value)
	{
		___U3COperationCountU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CResultByteCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725, ___U3CResultByteCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CResultByteCountU3Ek__BackingField_4() const { return ___U3CResultByteCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CResultByteCountU3Ek__BackingField_4() { return &___U3CResultByteCountU3Ek__BackingField_4; }
	inline void set_U3CResultByteCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CResultByteCountU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CResultCountU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725, ___U3CResultCountU3Ek__BackingField_5)); }
	inline int32_t get_U3CResultCountU3Ek__BackingField_5() const { return ___U3CResultCountU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CResultCountU3Ek__BackingField_5() { return &___U3CResultCountU3Ek__BackingField_5; }
	inline void set_U3CResultCountU3Ek__BackingField_5(int32_t value)
	{
		___U3CResultCountU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CEventByteCountU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725, ___U3CEventByteCountU3Ek__BackingField_6)); }
	inline int32_t get_U3CEventByteCountU3Ek__BackingField_6() const { return ___U3CEventByteCountU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CEventByteCountU3Ek__BackingField_6() { return &___U3CEventByteCountU3Ek__BackingField_6; }
	inline void set_U3CEventByteCountU3Ek__BackingField_6(int32_t value)
	{
		___U3CEventByteCountU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CEventCountU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725, ___U3CEventCountU3Ek__BackingField_7)); }
	inline int32_t get_U3CEventCountU3Ek__BackingField_7() const { return ___U3CEventCountU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CEventCountU3Ek__BackingField_7() { return &___U3CEventCountU3Ek__BackingField_7; }
	inline void set_U3CEventCountU3Ek__BackingField_7(int32_t value)
	{
		___U3CEventCountU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CLongestOpResponseCallbackU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725, ___U3CLongestOpResponseCallbackU3Ek__BackingField_8)); }
	inline int32_t get_U3CLongestOpResponseCallbackU3Ek__BackingField_8() const { return ___U3CLongestOpResponseCallbackU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CLongestOpResponseCallbackU3Ek__BackingField_8() { return &___U3CLongestOpResponseCallbackU3Ek__BackingField_8; }
	inline void set_U3CLongestOpResponseCallbackU3Ek__BackingField_8(int32_t value)
	{
		___U3CLongestOpResponseCallbackU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725, ___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9)); }
	inline uint8_t get_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9() const { return ___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9; }
	inline uint8_t* get_address_of_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9() { return &___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9; }
	inline void set_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9(uint8_t value)
	{
		___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CLongestEventCallbackU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725, ___U3CLongestEventCallbackU3Ek__BackingField_10)); }
	inline int32_t get_U3CLongestEventCallbackU3Ek__BackingField_10() const { return ___U3CLongestEventCallbackU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CLongestEventCallbackU3Ek__BackingField_10() { return &___U3CLongestEventCallbackU3Ek__BackingField_10; }
	inline void set_U3CLongestEventCallbackU3Ek__BackingField_10(int32_t value)
	{
		___U3CLongestEventCallbackU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CLongestMessageCallbackU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725, ___U3CLongestMessageCallbackU3Ek__BackingField_11)); }
	inline int32_t get_U3CLongestMessageCallbackU3Ek__BackingField_11() const { return ___U3CLongestMessageCallbackU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CLongestMessageCallbackU3Ek__BackingField_11() { return &___U3CLongestMessageCallbackU3Ek__BackingField_11; }
	inline void set_U3CLongestMessageCallbackU3Ek__BackingField_11(int32_t value)
	{
		___U3CLongestMessageCallbackU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CLongestRawMessageCallbackU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725, ___U3CLongestRawMessageCallbackU3Ek__BackingField_12)); }
	inline int32_t get_U3CLongestRawMessageCallbackU3Ek__BackingField_12() const { return ___U3CLongestRawMessageCallbackU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CLongestRawMessageCallbackU3Ek__BackingField_12() { return &___U3CLongestRawMessageCallbackU3Ek__BackingField_12; }
	inline void set_U3CLongestRawMessageCallbackU3Ek__BackingField_12(int32_t value)
	{
		___U3CLongestRawMessageCallbackU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CLongestEventCallbackCodeU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725, ___U3CLongestEventCallbackCodeU3Ek__BackingField_13)); }
	inline uint8_t get_U3CLongestEventCallbackCodeU3Ek__BackingField_13() const { return ___U3CLongestEventCallbackCodeU3Ek__BackingField_13; }
	inline uint8_t* get_address_of_U3CLongestEventCallbackCodeU3Ek__BackingField_13() { return &___U3CLongestEventCallbackCodeU3Ek__BackingField_13; }
	inline void set_U3CLongestEventCallbackCodeU3Ek__BackingField_13(uint8_t value)
	{
		___U3CLongestEventCallbackCodeU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725, ___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14)); }
	inline int32_t get_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14() const { return ___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14() { return &___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14; }
	inline void set_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14(int32_t value)
	{
		___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CLongestDeltaBetweenSendingU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725, ___U3CLongestDeltaBetweenSendingU3Ek__BackingField_15)); }
	inline int32_t get_U3CLongestDeltaBetweenSendingU3Ek__BackingField_15() const { return ___U3CLongestDeltaBetweenSendingU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CLongestDeltaBetweenSendingU3Ek__BackingField_15() { return &___U3CLongestDeltaBetweenSendingU3Ek__BackingField_15; }
	inline void set_U3CLongestDeltaBetweenSendingU3Ek__BackingField_15(int32_t value)
	{
		___U3CLongestDeltaBetweenSendingU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725, ___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16)); }
	inline int32_t get_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16() const { return ___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16() { return &___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16; }
	inline void set_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16(int32_t value)
	{
		___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CSendOutgoingCommandsCallsU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725, ___U3CSendOutgoingCommandsCallsU3Ek__BackingField_17)); }
	inline int32_t get_U3CSendOutgoingCommandsCallsU3Ek__BackingField_17() const { return ___U3CSendOutgoingCommandsCallsU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CSendOutgoingCommandsCallsU3Ek__BackingField_17() { return &___U3CSendOutgoingCommandsCallsU3Ek__BackingField_17; }
	inline void set_U3CSendOutgoingCommandsCallsU3Ek__BackingField_17(int32_t value)
	{
		___U3CSendOutgoingCommandsCallsU3Ek__BackingField_17 = value;
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

// ExitGames.Client.Photon.Version
struct  Version_t31FCFBC69DBE1651E4680B850872F26C26A91BAC  : public RuntimeObject
{
public:

public:
};

struct Version_t31FCFBC69DBE1651E4680B850872F26C26A91BAC_StaticFields
{
public:
	// System.Byte[] ExitGames.Client.Photon.Version::clientVersion
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___clientVersion_0;

public:
	inline static int32_t get_offset_of_clientVersion_0() { return static_cast<int32_t>(offsetof(Version_t31FCFBC69DBE1651E4680B850872F26C26A91BAC_StaticFields, ___clientVersion_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_clientVersion_0() const { return ___clientVersion_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_clientVersion_0() { return &___clientVersion_0; }
	inline void set_clientVersion_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___clientVersion_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientVersion_0), (void*)value);
	}
};


// ExitGames.Client.Photon.IPhotonSocket/<>c
struct  U3CU3Ec_t2D8D1E94B69E582A8C0C13685C2552A5222E2716  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2D8D1E94B69E582A8C0C13685C2552A5222E2716_StaticFields
{
public:
	// ExitGames.Client.Photon.IPhotonSocket/<>c ExitGames.Client.Photon.IPhotonSocket/<>c::<>9
	U3CU3Ec_t2D8D1E94B69E582A8C0C13685C2552A5222E2716 * ___U3CU3E9_0;
	// System.Func`2<System.Net.IPAddress,System.String> ExitGames.Client.Photon.IPhotonSocket/<>c::<>9__56_0
	Func_2_t07AA32ABA3AA42B99EB1A0D449B0292901F35822 * ___U3CU3E9__56_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2D8D1E94B69E582A8C0C13685C2552A5222E2716_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2D8D1E94B69E582A8C0C13685C2552A5222E2716 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2D8D1E94B69E582A8C0C13685C2552A5222E2716 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2D8D1E94B69E582A8C0C13685C2552A5222E2716 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__56_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2D8D1E94B69E582A8C0C13685C2552A5222E2716_StaticFields, ___U3CU3E9__56_0_1)); }
	inline Func_2_t07AA32ABA3AA42B99EB1A0D449B0292901F35822 * get_U3CU3E9__56_0_1() const { return ___U3CU3E9__56_0_1; }
	inline Func_2_t07AA32ABA3AA42B99EB1A0D449B0292901F35822 ** get_address_of_U3CU3E9__56_0_1() { return &___U3CU3E9__56_0_1; }
	inline void set_U3CU3E9__56_0_1(Func_2_t07AA32ABA3AA42B99EB1A0D449B0292901F35822 * value)
	{
		___U3CU3E9__56_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__56_0_1), (void*)value);
	}
};


// ExitGames.Client.Photon.SupportClass/<>c
struct  U3CU3Ec_tE76D54910C712C6B8061D714E4BEF54AB4280F63  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE76D54910C712C6B8061D714E4BEF54AB4280F63_StaticFields
{
public:
	// ExitGames.Client.Photon.SupportClass/<>c ExitGames.Client.Photon.SupportClass/<>c::<>9
	U3CU3Ec_tE76D54910C712C6B8061D714E4BEF54AB4280F63 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE76D54910C712C6B8061D714E4BEF54AB4280F63_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE76D54910C712C6B8061D714E4BEF54AB4280F63 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE76D54910C712C6B8061D714E4BEF54AB4280F63 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE76D54910C712C6B8061D714E4BEF54AB4280F63 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0
struct  U3CU3Ec__DisplayClass6_0_t525AE973CC2659D877AEC9706B1BC60424D154A8  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0::millisecondsInterval
	int32_t ___millisecondsInterval_0;
	// System.Func`1<System.Boolean> ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0::myThread
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___myThread_1;

public:
	inline static int32_t get_offset_of_millisecondsInterval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t525AE973CC2659D877AEC9706B1BC60424D154A8, ___millisecondsInterval_0)); }
	inline int32_t get_millisecondsInterval_0() const { return ___millisecondsInterval_0; }
	inline int32_t* get_address_of_millisecondsInterval_0() { return &___millisecondsInterval_0; }
	inline void set_millisecondsInterval_0(int32_t value)
	{
		___millisecondsInterval_0 = value;
	}

	inline static int32_t get_offset_of_myThread_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t525AE973CC2659D877AEC9706B1BC60424D154A8, ___myThread_1)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_myThread_1() const { return ___myThread_1; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_myThread_1() { return &___myThread_1; }
	inline void set_myThread_1(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___myThread_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myThread_1), (void*)value);
	}
};


// ExitGames.Client.Photon.SupportClass/ThreadSafeRandom
struct  ThreadSafeRandom_t3541F287E963FC1137741E2776EB5E1CCA878164  : public RuntimeObject
{
public:

public:
};

struct ThreadSafeRandom_t3541F287E963FC1137741E2776EB5E1CCA878164_StaticFields
{
public:
	// System.Random ExitGames.Client.Photon.SupportClass/ThreadSafeRandom::_r
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ____r_0;

public:
	inline static int32_t get_offset_of__r_0() { return static_cast<int32_t>(offsetof(ThreadSafeRandom_t3541F287E963FC1137741E2776EB5E1CCA878164_StaticFields, ____r_0)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get__r_0() const { return ____r_0; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of__r_0() { return &____r_0; }
	inline void set__r_0(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		____r_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____r_0), (void*)value);
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

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int16
struct  Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
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


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// ExitGames.Client.Photon.Protocol16
struct  Protocol16_tB45C23B7BF100A5B796B76E7664272E2A9EF5DA1  : public IProtocol_tE34131CF5A8A0FF12F4C6264A2B3BCB449F4174A
{
public:
	// System.Byte[] ExitGames.Client.Photon.Protocol16::versionBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___versionBytes_0;
	// System.Byte[] ExitGames.Client.Photon.Protocol16::memShort
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___memShort_1;
	// System.Int64[] ExitGames.Client.Photon.Protocol16::memLongBlock
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ___memLongBlock_2;
	// System.Byte[] ExitGames.Client.Photon.Protocol16::memLongBlockBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___memLongBlockBytes_3;
	// System.Double[] ExitGames.Client.Photon.Protocol16::memDoubleBlock
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___memDoubleBlock_6;
	// System.Byte[] ExitGames.Client.Photon.Protocol16::memDoubleBlockBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___memDoubleBlockBytes_7;
	// System.Byte[] ExitGames.Client.Photon.Protocol16::memInteger
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___memInteger_8;
	// System.Byte[] ExitGames.Client.Photon.Protocol16::memLong
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___memLong_9;
	// System.Byte[] ExitGames.Client.Photon.Protocol16::memFloat
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___memFloat_10;
	// System.Byte[] ExitGames.Client.Photon.Protocol16::memDouble
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___memDouble_11;
	// System.Byte[] ExitGames.Client.Photon.Protocol16::memString
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___memString_12;

public:
	inline static int32_t get_offset_of_versionBytes_0() { return static_cast<int32_t>(offsetof(Protocol16_tB45C23B7BF100A5B796B76E7664272E2A9EF5DA1, ___versionBytes_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_versionBytes_0() const { return ___versionBytes_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_versionBytes_0() { return &___versionBytes_0; }
	inline void set_versionBytes_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___versionBytes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___versionBytes_0), (void*)value);
	}

	inline static int32_t get_offset_of_memShort_1() { return static_cast<int32_t>(offsetof(Protocol16_tB45C23B7BF100A5B796B76E7664272E2A9EF5DA1, ___memShort_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_memShort_1() const { return ___memShort_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_memShort_1() { return &___memShort_1; }
	inline void set_memShort_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___memShort_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memShort_1), (void*)value);
	}

	inline static int32_t get_offset_of_memLongBlock_2() { return static_cast<int32_t>(offsetof(Protocol16_tB45C23B7BF100A5B796B76E7664272E2A9EF5DA1, ___memLongBlock_2)); }
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* get_memLongBlock_2() const { return ___memLongBlock_2; }
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6** get_address_of_memLongBlock_2() { return &___memLongBlock_2; }
	inline void set_memLongBlock_2(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* value)
	{
		___memLongBlock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memLongBlock_2), (void*)value);
	}

	inline static int32_t get_offset_of_memLongBlockBytes_3() { return static_cast<int32_t>(offsetof(Protocol16_tB45C23B7BF100A5B796B76E7664272E2A9EF5DA1, ___memLongBlockBytes_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_memLongBlockBytes_3() const { return ___memLongBlockBytes_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_memLongBlockBytes_3() { return &___memLongBlockBytes_3; }
	inline void set_memLongBlockBytes_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___memLongBlockBytes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memLongBlockBytes_3), (void*)value);
	}

	inline static int32_t get_offset_of_memDoubleBlock_6() { return static_cast<int32_t>(offsetof(Protocol16_tB45C23B7BF100A5B796B76E7664272E2A9EF5DA1, ___memDoubleBlock_6)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_memDoubleBlock_6() const { return ___memDoubleBlock_6; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_memDoubleBlock_6() { return &___memDoubleBlock_6; }
	inline void set_memDoubleBlock_6(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___memDoubleBlock_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memDoubleBlock_6), (void*)value);
	}

	inline static int32_t get_offset_of_memDoubleBlockBytes_7() { return static_cast<int32_t>(offsetof(Protocol16_tB45C23B7BF100A5B796B76E7664272E2A9EF5DA1, ___memDoubleBlockBytes_7)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_memDoubleBlockBytes_7() const { return ___memDoubleBlockBytes_7; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_memDoubleBlockBytes_7() { return &___memDoubleBlockBytes_7; }
	inline void set_memDoubleBlockBytes_7(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___memDoubleBlockBytes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memDoubleBlockBytes_7), (void*)value);
	}

	inline static int32_t get_offset_of_memInteger_8() { return static_cast<int32_t>(offsetof(Protocol16_tB45C23B7BF100A5B796B76E7664272E2A9EF5DA1, ___memInteger_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_memInteger_8() const { return ___memInteger_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_memInteger_8() { return &___memInteger_8; }
	inline void set_memInteger_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___memInteger_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memInteger_8), (void*)value);
	}

	inline static int32_t get_offset_of_memLong_9() { return static_cast<int32_t>(offsetof(Protocol16_tB45C23B7BF100A5B796B76E7664272E2A9EF5DA1, ___memLong_9)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_memLong_9() const { return ___memLong_9; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_memLong_9() { return &___memLong_9; }
	inline void set_memLong_9(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___memLong_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memLong_9), (void*)value);
	}

	inline static int32_t get_offset_of_memFloat_10() { return static_cast<int32_t>(offsetof(Protocol16_tB45C23B7BF100A5B796B76E7664272E2A9EF5DA1, ___memFloat_10)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_memFloat_10() const { return ___memFloat_10; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_memFloat_10() { return &___memFloat_10; }
	inline void set_memFloat_10(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___memFloat_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memFloat_10), (void*)value);
	}

	inline static int32_t get_offset_of_memDouble_11() { return static_cast<int32_t>(offsetof(Protocol16_tB45C23B7BF100A5B796B76E7664272E2A9EF5DA1, ___memDouble_11)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_memDouble_11() const { return ___memDouble_11; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_memDouble_11() { return &___memDouble_11; }
	inline void set_memDouble_11(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___memDouble_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memDouble_11), (void*)value);
	}

	inline static int32_t get_offset_of_memString_12() { return static_cast<int32_t>(offsetof(Protocol16_tB45C23B7BF100A5B796B76E7664272E2A9EF5DA1, ___memString_12)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_memString_12() const { return ___memString_12; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_memString_12() { return &___memString_12; }
	inline void set_memString_12(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___memString_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memString_12), (void*)value);
	}
};

struct Protocol16_tB45C23B7BF100A5B796B76E7664272E2A9EF5DA1_StaticFields
{
public:
	// System.Single[] ExitGames.Client.Photon.Protocol16::memFloatBlock
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___memFloatBlock_4;
	// System.Byte[] ExitGames.Client.Photon.Protocol16::memFloatBlockBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___memFloatBlockBytes_5;

public:
	inline static int32_t get_offset_of_memFloatBlock_4() { return static_cast<int32_t>(offsetof(Protocol16_tB45C23B7BF100A5B796B76E7664272E2A9EF5DA1_StaticFields, ___memFloatBlock_4)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_memFloatBlock_4() const { return ___memFloatBlock_4; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_memFloatBlock_4() { return &___memFloatBlock_4; }
	inline void set_memFloatBlock_4(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___memFloatBlock_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memFloatBlock_4), (void*)value);
	}

	inline static int32_t get_offset_of_memFloatBlockBytes_5() { return static_cast<int32_t>(offsetof(Protocol16_tB45C23B7BF100A5B796B76E7664272E2A9EF5DA1_StaticFields, ___memFloatBlockBytes_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_memFloatBlockBytes_5() const { return ___memFloatBlockBytes_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_memFloatBlockBytes_5() { return &___memFloatBlockBytes_5; }
	inline void set_memFloatBlockBytes_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___memFloatBlockBytes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memFloatBlockBytes_5), (void*)value);
	}
};


// ExitGames.Client.Photon.Protocol18
struct  Protocol18_t1382440B8DB2E3E20DEB341B824D368093B93C47  : public IProtocol_tE34131CF5A8A0FF12F4C6264A2B3BCB449F4174A
{
public:
	// System.Byte[] ExitGames.Client.Photon.Protocol18::versionBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___versionBytes_0;
	// System.Double[] ExitGames.Client.Photon.Protocol18::memDoubleBlock
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___memDoubleBlock_2;
	// System.Single[] ExitGames.Client.Photon.Protocol18::memFloatBlock
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___memFloatBlock_3;
	// System.Byte[] ExitGames.Client.Photon.Protocol18::memCustomTypeBodyLengthSerialized
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___memCustomTypeBodyLengthSerialized_4;
	// System.Byte[] ExitGames.Client.Photon.Protocol18::memCompressedUInt32
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___memCompressedUInt32_5;
	// System.Byte[] ExitGames.Client.Photon.Protocol18::memCompressedUInt64
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___memCompressedUInt64_6;

public:
	inline static int32_t get_offset_of_versionBytes_0() { return static_cast<int32_t>(offsetof(Protocol18_t1382440B8DB2E3E20DEB341B824D368093B93C47, ___versionBytes_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_versionBytes_0() const { return ___versionBytes_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_versionBytes_0() { return &___versionBytes_0; }
	inline void set_versionBytes_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___versionBytes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___versionBytes_0), (void*)value);
	}

	inline static int32_t get_offset_of_memDoubleBlock_2() { return static_cast<int32_t>(offsetof(Protocol18_t1382440B8DB2E3E20DEB341B824D368093B93C47, ___memDoubleBlock_2)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_memDoubleBlock_2() const { return ___memDoubleBlock_2; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_memDoubleBlock_2() { return &___memDoubleBlock_2; }
	inline void set_memDoubleBlock_2(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___memDoubleBlock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memDoubleBlock_2), (void*)value);
	}

	inline static int32_t get_offset_of_memFloatBlock_3() { return static_cast<int32_t>(offsetof(Protocol18_t1382440B8DB2E3E20DEB341B824D368093B93C47, ___memFloatBlock_3)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_memFloatBlock_3() const { return ___memFloatBlock_3; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_memFloatBlock_3() { return &___memFloatBlock_3; }
	inline void set_memFloatBlock_3(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___memFloatBlock_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memFloatBlock_3), (void*)value);
	}

	inline static int32_t get_offset_of_memCustomTypeBodyLengthSerialized_4() { return static_cast<int32_t>(offsetof(Protocol18_t1382440B8DB2E3E20DEB341B824D368093B93C47, ___memCustomTypeBodyLengthSerialized_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_memCustomTypeBodyLengthSerialized_4() const { return ___memCustomTypeBodyLengthSerialized_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_memCustomTypeBodyLengthSerialized_4() { return &___memCustomTypeBodyLengthSerialized_4; }
	inline void set_memCustomTypeBodyLengthSerialized_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___memCustomTypeBodyLengthSerialized_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memCustomTypeBodyLengthSerialized_4), (void*)value);
	}

	inline static int32_t get_offset_of_memCompressedUInt32_5() { return static_cast<int32_t>(offsetof(Protocol18_t1382440B8DB2E3E20DEB341B824D368093B93C47, ___memCompressedUInt32_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_memCompressedUInt32_5() const { return ___memCompressedUInt32_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_memCompressedUInt32_5() { return &___memCompressedUInt32_5; }
	inline void set_memCompressedUInt32_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___memCompressedUInt32_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memCompressedUInt32_5), (void*)value);
	}

	inline static int32_t get_offset_of_memCompressedUInt64_6() { return static_cast<int32_t>(offsetof(Protocol18_t1382440B8DB2E3E20DEB341B824D368093B93C47, ___memCompressedUInt64_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_memCompressedUInt64_6() const { return ___memCompressedUInt64_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_memCompressedUInt64_6() { return &___memCompressedUInt64_6; }
	inline void set_memCompressedUInt64_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___memCompressedUInt64_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memCompressedUInt64_6), (void*)value);
	}
};

struct Protocol18_t1382440B8DB2E3E20DEB341B824D368093B93C47_StaticFields
{
public:
	// System.Byte[] ExitGames.Client.Photon.Protocol18::boolMasks
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___boolMasks_1;

public:
	inline static int32_t get_offset_of_boolMasks_1() { return static_cast<int32_t>(offsetof(Protocol18_t1382440B8DB2E3E20DEB341B824D368093B93C47_StaticFields, ___boolMasks_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_boolMasks_1() const { return ___boolMasks_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_boolMasks_1() { return &___boolMasks_1; }
	inline void set_boolMasks_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___boolMasks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boolMasks_1), (void*)value);
	}
};


// System.IO.TextWriter
struct  TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
};


// System.Threading.Thread
struct  Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___internal_thread_6)); }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
	}
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1212
struct  __StaticArrayInitTypeSizeU3D1212_t8CACC007E5814846C0A17B1A03739B710E3AA350 
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
		uint8_t __StaticArrayInitTypeSizeU3D1212_t8CACC007E5814846C0A17B1A03739B710E3AA350__padding[1212];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct  __StaticArrayInitTypeSizeU3D128_t0F79A6BA893CF1395BA389E9F7D8CCBFDE9063CB 
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
		uint8_t __StaticArrayInitTypeSizeU3D128_t0F79A6BA893CF1395BA389E9F7D8CCBFDE9063CB__padding[128];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192
struct  __StaticArrayInitTypeSizeU3D192_t229A10985DE4E8379C2F701A3053AA15A695B585 
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
		uint8_t __StaticArrayInitTypeSizeU3D192_t229A10985DE4E8379C2F701A3053AA15A695B585__padding[192];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9
struct  __StaticArrayInitTypeSizeU3D9_tBF2063D25294F3CB8B554ED15B572032154A353C 
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
		uint8_t __StaticArrayInitTypeSizeU3D9_tBF2063D25294F3CB8B554ED15B572032154A353C__padding[9];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96
struct  __StaticArrayInitTypeSizeU3D96_tBBD68F9E9D22D0C101FA820B15C3DAB8A5592F2D 
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
		uint8_t __StaticArrayInitTypeSizeU3D96_tBBD68F9E9D22D0C101FA820B15C3DAB8A5592F2D__padding[96];
	};

public:
};


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3609B4DBF30D23669B25407E61F7E8BBF7C3206F  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3609B4DBF30D23669B25407E61F7E8BBF7C3206F_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::4989E5469B40416DC5AFB739C747E32B40CC5C77
	__StaticArrayInitTypeSizeU3D96_tBBD68F9E9D22D0C101FA820B15C3DAB8A5592F2D  ___4989E5469B40416DC5AFB739C747E32B40CC5C77_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192 <PrivateImplementationDetails>::49ECABA9727A1AF0636082C467485A1A9A04B669
	__StaticArrayInitTypeSizeU3D192_t229A10985DE4E8379C2F701A3053AA15A695B585  ___49ECABA9727A1AF0636082C467485A1A9A04B669_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::6668D4903321030E42A6CE59AB96ADD9D0214FAC
	__StaticArrayInitTypeSizeU3D9_tBF2063D25294F3CB8B554ED15B572032154A353C  ___6668D4903321030E42A6CE59AB96ADD9D0214FAC_2;
	// System.Int32 <PrivateImplementationDetails>::9438AAAAC3906291F3DF6BE5FE89F45BBFD3B269
	int32_t ___9438AAAAC3906291F3DF6BE5FE89F45BBFD3B269_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1212 <PrivateImplementationDetails>::AEAF34DCCF141E917F02F7768DAEA80AA2B13B95
	__StaticArrayInitTypeSizeU3D1212_t8CACC007E5814846C0A17B1A03739B710E3AA350  ___AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::C033BD4351FBA3732545EA2E016D52B0FC3E69EC
	__StaticArrayInitTypeSizeU3D128_t0F79A6BA893CF1395BA389E9F7D8CCBFDE9063CB  ___C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5;
	// System.Int64 <PrivateImplementationDetails>::C5E8AB60ED9C473EBFB92E52109524A608BCFBE2
	int64_t ___C5E8AB60ED9C473EBFB92E52109524A608BCFBE2_6;

public:
	inline static int32_t get_offset_of_U34989E5469B40416DC5AFB739C747E32B40CC5C77_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3609B4DBF30D23669B25407E61F7E8BBF7C3206F_StaticFields, ___4989E5469B40416DC5AFB739C747E32B40CC5C77_0)); }
	inline __StaticArrayInitTypeSizeU3D96_tBBD68F9E9D22D0C101FA820B15C3DAB8A5592F2D  get_U34989E5469B40416DC5AFB739C747E32B40CC5C77_0() const { return ___4989E5469B40416DC5AFB739C747E32B40CC5C77_0; }
	inline __StaticArrayInitTypeSizeU3D96_tBBD68F9E9D22D0C101FA820B15C3DAB8A5592F2D * get_address_of_U34989E5469B40416DC5AFB739C747E32B40CC5C77_0() { return &___4989E5469B40416DC5AFB739C747E32B40CC5C77_0; }
	inline void set_U34989E5469B40416DC5AFB739C747E32B40CC5C77_0(__StaticArrayInitTypeSizeU3D96_tBBD68F9E9D22D0C101FA820B15C3DAB8A5592F2D  value)
	{
		___4989E5469B40416DC5AFB739C747E32B40CC5C77_0 = value;
	}

	inline static int32_t get_offset_of_U349ECABA9727A1AF0636082C467485A1A9A04B669_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3609B4DBF30D23669B25407E61F7E8BBF7C3206F_StaticFields, ___49ECABA9727A1AF0636082C467485A1A9A04B669_1)); }
	inline __StaticArrayInitTypeSizeU3D192_t229A10985DE4E8379C2F701A3053AA15A695B585  get_U349ECABA9727A1AF0636082C467485A1A9A04B669_1() const { return ___49ECABA9727A1AF0636082C467485A1A9A04B669_1; }
	inline __StaticArrayInitTypeSizeU3D192_t229A10985DE4E8379C2F701A3053AA15A695B585 * get_address_of_U349ECABA9727A1AF0636082C467485A1A9A04B669_1() { return &___49ECABA9727A1AF0636082C467485A1A9A04B669_1; }
	inline void set_U349ECABA9727A1AF0636082C467485A1A9A04B669_1(__StaticArrayInitTypeSizeU3D192_t229A10985DE4E8379C2F701A3053AA15A695B585  value)
	{
		___49ECABA9727A1AF0636082C467485A1A9A04B669_1 = value;
	}

	inline static int32_t get_offset_of_U36668D4903321030E42A6CE59AB96ADD9D0214FAC_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3609B4DBF30D23669B25407E61F7E8BBF7C3206F_StaticFields, ___6668D4903321030E42A6CE59AB96ADD9D0214FAC_2)); }
	inline __StaticArrayInitTypeSizeU3D9_tBF2063D25294F3CB8B554ED15B572032154A353C  get_U36668D4903321030E42A6CE59AB96ADD9D0214FAC_2() const { return ___6668D4903321030E42A6CE59AB96ADD9D0214FAC_2; }
	inline __StaticArrayInitTypeSizeU3D9_tBF2063D25294F3CB8B554ED15B572032154A353C * get_address_of_U36668D4903321030E42A6CE59AB96ADD9D0214FAC_2() { return &___6668D4903321030E42A6CE59AB96ADD9D0214FAC_2; }
	inline void set_U36668D4903321030E42A6CE59AB96ADD9D0214FAC_2(__StaticArrayInitTypeSizeU3D9_tBF2063D25294F3CB8B554ED15B572032154A353C  value)
	{
		___6668D4903321030E42A6CE59AB96ADD9D0214FAC_2 = value;
	}

	inline static int32_t get_offset_of_U39438AAAAC3906291F3DF6BE5FE89F45BBFD3B269_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3609B4DBF30D23669B25407E61F7E8BBF7C3206F_StaticFields, ___9438AAAAC3906291F3DF6BE5FE89F45BBFD3B269_3)); }
	inline int32_t get_U39438AAAAC3906291F3DF6BE5FE89F45BBFD3B269_3() const { return ___9438AAAAC3906291F3DF6BE5FE89F45BBFD3B269_3; }
	inline int32_t* get_address_of_U39438AAAAC3906291F3DF6BE5FE89F45BBFD3B269_3() { return &___9438AAAAC3906291F3DF6BE5FE89F45BBFD3B269_3; }
	inline void set_U39438AAAAC3906291F3DF6BE5FE89F45BBFD3B269_3(int32_t value)
	{
		___9438AAAAC3906291F3DF6BE5FE89F45BBFD3B269_3 = value;
	}

	inline static int32_t get_offset_of_AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3609B4DBF30D23669B25407E61F7E8BBF7C3206F_StaticFields, ___AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_4)); }
	inline __StaticArrayInitTypeSizeU3D1212_t8CACC007E5814846C0A17B1A03739B710E3AA350  get_AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_4() const { return ___AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_4; }
	inline __StaticArrayInitTypeSizeU3D1212_t8CACC007E5814846C0A17B1A03739B710E3AA350 * get_address_of_AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_4() { return &___AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_4; }
	inline void set_AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_4(__StaticArrayInitTypeSizeU3D1212_t8CACC007E5814846C0A17B1A03739B710E3AA350  value)
	{
		___AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_4 = value;
	}

	inline static int32_t get_offset_of_C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3609B4DBF30D23669B25407E61F7E8BBF7C3206F_StaticFields, ___C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5)); }
	inline __StaticArrayInitTypeSizeU3D128_t0F79A6BA893CF1395BA389E9F7D8CCBFDE9063CB  get_C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5() const { return ___C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5; }
	inline __StaticArrayInitTypeSizeU3D128_t0F79A6BA893CF1395BA389E9F7D8CCBFDE9063CB * get_address_of_C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5() { return &___C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5; }
	inline void set_C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5(__StaticArrayInitTypeSizeU3D128_t0F79A6BA893CF1395BA389E9F7D8CCBFDE9063CB  value)
	{
		___C033BD4351FBA3732545EA2E016D52B0FC3E69EC_5 = value;
	}

	inline static int32_t get_offset_of_C5E8AB60ED9C473EBFB92E52109524A608BCFBE2_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3609B4DBF30D23669B25407E61F7E8BBF7C3206F_StaticFields, ___C5E8AB60ED9C473EBFB92E52109524A608BCFBE2_6)); }
	inline int64_t get_C5E8AB60ED9C473EBFB92E52109524A608BCFBE2_6() const { return ___C5E8AB60ED9C473EBFB92E52109524A608BCFBE2_6; }
	inline int64_t* get_address_of_C5E8AB60ED9C473EBFB92E52109524A608BCFBE2_6() { return &___C5E8AB60ED9C473EBFB92E52109524A608BCFBE2_6; }
	inline void set_C5E8AB60ED9C473EBFB92E52109524A608BCFBE2_6(int64_t value)
	{
		___C5E8AB60ED9C473EBFB92E52109524A608BCFBE2_6 = value;
	}
};


// System.Net.Sockets.AddressFamily
struct  AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
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


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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

// ExitGames.Client.Photon.DeliveryMode
struct  DeliveryMode_t24B37E13B9A45C2DE24E1B5B70C57E977C31FF7C 
{
public:
	// System.Int32 ExitGames.Client.Photon.DeliveryMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeliveryMode_t24B37E13B9A45C2DE24E1B5B70C57E977C31FF7C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.EgMessageType
struct  EgMessageType_tDD05EBA7A27129AAA0BA219677EF63D7A2D96512 
{
public:
	// System.Byte ExitGames.Client.Photon.EgMessageType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EgMessageType_tDD05EBA7A27129AAA0BA219677EF63D7A2D96512, ___value___2)); }
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

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
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


// System.Net.Sockets.ProtocolType
struct  ProtocolType_t07C7AB65B583B132A2D99BC06BB2A909BDDCE156 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProtocolType_t07C7AB65B583B132A2D99BC06BB2A909BDDCE156, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
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
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
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


// System.IO.SeekOrigin
struct  SeekOrigin_t4A91B37D046CD7A6578066059AE9F6269A888D4F 
{
public:
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SeekOrigin_t4A91B37D046CD7A6578066059AE9F6269A888D4F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.SerializationProtocol
struct  SerializationProtocol_t78ABADB69FCC83FCF1CAD9C50B57846147F9A34D 
{
public:
	// System.Int32 ExitGames.Client.Photon.SerializationProtocol::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SerializationProtocol_t78ABADB69FCC83FCF1CAD9C50B57846147F9A34D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketError
struct  SocketError_tA0135DFDFBD5E43BC2F44D8AAC13CDB444074F80 
{
public:
	// System.Int32 System.Net.Sockets.SocketError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketError_tA0135DFDFBD5E43BC2F44D8AAC13CDB444074F80, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketFlags
struct  SocketFlags_tF0B10EB763B26956198DACD9942489DC65D8B248 
{
public:
	// System.Int32 System.Net.Sockets.SocketFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketFlags_tF0B10EB763B26956198DACD9942489DC65D8B248, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketType
struct  SocketType_t234FBD298C115F92305ABC40D2E592FC535DFF94 
{
public:
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketType_t234FBD298C115F92305ABC40D2E592FC535DFF94, ___value___2)); }
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


// ExitGames.Client.Photon.StreamBuffer
struct  StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.StreamBuffer::pos
	int32_t ___pos_1;
	// System.Int32 ExitGames.Client.Photon.StreamBuffer::len
	int32_t ___len_2;
	// System.Byte[] ExitGames.Client.Photon.StreamBuffer::buf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_3;
	// System.Guid ExitGames.Client.Photon.StreamBuffer::guid
	Guid_t  ___guid_4;

public:
	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F, ___pos_1)); }
	inline int32_t get_pos_1() const { return ___pos_1; }
	inline int32_t* get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(int32_t value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_len_2() { return static_cast<int32_t>(offsetof(StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F, ___len_2)); }
	inline int32_t get_len_2() const { return ___len_2; }
	inline int32_t* get_address_of_len_2() { return &___len_2; }
	inline void set_len_2(int32_t value)
	{
		___len_2 = value;
	}

	inline static int32_t get_offset_of_buf_3() { return static_cast<int32_t>(offsetof(StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F, ___buf_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_3() const { return ___buf_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_3() { return &___buf_3; }
	inline void set_buf_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_3), (void*)value);
	}

	inline static int32_t get_offset_of_guid_4() { return static_cast<int32_t>(offsetof(StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F, ___guid_4)); }
	inline Guid_t  get_guid_4() const { return ___guid_4; }
	inline Guid_t * get_address_of_guid_4() { return &___guid_4; }
	inline void set_guid_4(Guid_t  value)
	{
		___guid_4 = value;
	}
};


// ExitGames.Client.Photon.Encryption.EncryptorNative/egDebugLevel
struct  egDebugLevel_tC6EB5C15915FA679A20AA664F1296EB11999824E 
{
public:
	// System.Int32 ExitGames.Client.Photon.Encryption.EncryptorNative/egDebugLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(egDebugLevel_tC6EB5C15915FA679A20AA664F1296EB11999824E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.Protocol16/GpType
struct  GpType_tF004E227FC1F684FA193588BEB55DFCD1332243F 
{
public:
	// System.Byte ExitGames.Client.Photon.Protocol16/GpType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GpType_tF004E227FC1F684FA193588BEB55DFCD1332243F, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.Protocol18/GpType
struct  GpType_t0A56D8E700A498A93E91E63F1B1EAC8F8B0D1E8A 
{
public:
	// System.Byte ExitGames.Client.Photon.Protocol18/GpType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GpType_t0A56D8E700A498A93E91E63F1B1EAC8F8B0D1E8A, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Net.IPAddress
struct  IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_5;
	// System.String System.Net.IPAddress::m_ToString
	String_t* ___m_ToString_6;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_10;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___m_Numbers_11;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_12;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_13;

public:
	inline static int32_t get_offset_of_m_Address_5() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Address_5)); }
	inline int64_t get_m_Address_5() const { return ___m_Address_5; }
	inline int64_t* get_address_of_m_Address_5() { return &___m_Address_5; }
	inline void set_m_Address_5(int64_t value)
	{
		___m_Address_5 = value;
	}

	inline static int32_t get_offset_of_m_ToString_6() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_ToString_6)); }
	inline String_t* get_m_ToString_6() const { return ___m_ToString_6; }
	inline String_t** get_address_of_m_ToString_6() { return &___m_ToString_6; }
	inline void set_m_ToString_6(String_t* value)
	{
		___m_ToString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToString_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_10() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Family_10)); }
	inline int32_t get_m_Family_10() const { return ___m_Family_10; }
	inline int32_t* get_address_of_m_Family_10() { return &___m_Family_10; }
	inline void set_m_Family_10(int32_t value)
	{
		___m_Family_10 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_11() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Numbers_11)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_m_Numbers_11() const { return ___m_Numbers_11; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_m_Numbers_11() { return &___m_Numbers_11; }
	inline void set_m_Numbers_11(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___m_Numbers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Numbers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScopeId_12() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_ScopeId_12)); }
	inline int64_t get_m_ScopeId_12() const { return ___m_ScopeId_12; }
	inline int64_t* get_address_of_m_ScopeId_12() { return &___m_ScopeId_12; }
	inline void set_m_ScopeId_12(int64_t value)
	{
		___m_ScopeId_12 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_13() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_HashCode_13)); }
	inline int32_t get_m_HashCode_13() const { return ___m_HashCode_13; }
	inline int32_t* get_address_of_m_HashCode_13() { return &___m_HashCode_13; }
	inline void set_m_HashCode_13(int32_t value)
	{
		___m_HashCode_13 = value;
	}
};

struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6Any_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6Loopback_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6None_9;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Any_0)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Any_0() const { return ___Any_0; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Any_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_0), (void*)value);
	}

	inline static int32_t get_offset_of_Loopback_1() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Loopback_1)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Loopback_1() const { return ___Loopback_1; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Loopback_1() { return &___Loopback_1; }
	inline void set_Loopback_1(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Loopback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Loopback_1), (void*)value);
	}

	inline static int32_t get_offset_of_Broadcast_2() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Broadcast_2)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Broadcast_2() const { return ___Broadcast_2; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Broadcast_2() { return &___Broadcast_2; }
	inline void set_Broadcast_2(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Broadcast_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Broadcast_2), (void*)value);
	}

	inline static int32_t get_offset_of_None_3() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___None_3)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_None_3() const { return ___None_3; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_None_3() { return &___None_3; }
	inline void set_None_3(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___None_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_3), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_7() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6Any_7)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6Any_7() const { return ___IPv6Any_7; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6Any_7() { return &___IPv6Any_7; }
	inline void set_IPv6Any_7(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6Any_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_7), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_8() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6Loopback_8)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6Loopback_8() const { return ___IPv6Loopback_8; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6Loopback_8() { return &___IPv6Loopback_8; }
	inline void set_IPv6Loopback_8(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6Loopback_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Loopback_8), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6None_9() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6None_9)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6None_9() const { return ___IPv6None_9; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6None_9() { return &___IPv6None_9; }
	inline void set_IPv6None_9(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6None_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6None_9), (void*)value);
	}
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


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
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


// ExitGames.Client.Photon.PhotonPeer
struct  PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CommandBufferSize>k__BackingField
	int32_t ___U3CCommandBufferSizeU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<LimitOfUnreliableCommands>k__BackingField
	int32_t ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::WarningSize
	int32_t ___WarningSize_2;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ClientSdkId
	uint8_t ___ClientSdkId_6;
	// System.String ExitGames.Client.Photon.PhotonPeer::clientVersion
	String_t* ___clientVersion_7;
	// ExitGames.Client.Photon.SerializationProtocol ExitGames.Client.Photon.PhotonPeer::<SerializationProtocolType>k__BackingField
	int32_t ___U3CSerializationProtocolTypeU3Ek__BackingField_12;
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type> ExitGames.Client.Photon.PhotonPeer::SocketImplementationConfig
	Dictionary_2_t3B3B3663ECCD2D47C05F241EC6B8A170CFAE8A77 * ___SocketImplementationConfig_13;
	// System.Type ExitGames.Client.Photon.PhotonPeer::<SocketImplementation>k__BackingField
	Type_t * ___U3CSocketImplementationU3Ek__BackingField_14;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PhotonPeer::DebugOut
	uint8_t ___DebugOut_15;
	// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::<Listener>k__BackingField
	RuntimeObject* ___U3CListenerU3Ek__BackingField_16;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::reuseEventInstance
	bool ___reuseEventInstance_17;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendInCreationOrder
	bool ___SendInCreationOrder_18;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<EnableServerTracing>k__BackingField
	bool ___U3CEnableServerTracingU3Ek__BackingField_19;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::quickResendAttempts
	uint8_t ___quickResendAttempts_20;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::RhttpMinConnections
	int32_t ___RhttpMinConnections_21;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::RhttpMaxConnections
	int32_t ___RhttpMaxConnections_22;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ChannelCount
	uint8_t ___ChannelCount_23;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::EnableEncryptedFlag
	bool ___EnableEncryptedFlag_24;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::crcEnabled
	bool ___crcEnabled_25;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SentCountAllowance
	int32_t ___SentCountAllowance_26;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::InitialResendTimeMax
	int32_t ___InitialResendTimeMax_27;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::TimePingInterval
	int32_t ___TimePingInterval_28;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::DisconnectTimeout
	int32_t ___DisconnectTimeout_29;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::<TransportProtocol>k__BackingField
	uint8_t ___U3CTransportProtocolU3Ek__BackingField_30;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::mtu
	int32_t ___mtu_32;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<IsSendingOnlyAcks>k__BackingField
	bool ___U3CIsSendingOnlyAcksU3Ek__BackingField_33;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RandomizeSequenceNumbers
	bool ___RandomizeSequenceNumbers_35;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::RandomizedSequenceNumbers
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___RandomizedSequenceNumbers_36;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsIncoming>k__BackingField
	TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * ___U3CTrafficStatsIncomingU3Ek__BackingField_37;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsOutgoing>k__BackingField
	TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * ___U3CTrafficStatsOutgoingU3Ek__BackingField_38;
	// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::<TrafficStatsGameLevel>k__BackingField
	TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * ___U3CTrafficStatsGameLevelU3Ek__BackingField_39;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PhotonPeer::trafficStatsStopwatch
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___trafficStatsStopwatch_40;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::trafficStatsEnabled
	bool ___trafficStatsEnabled_41;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PhotonPeer::peerBase
	PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * ___peerBase_42;
	// System.Object ExitGames.Client.Photon.PhotonPeer::SendOutgoingLockObject
	RuntimeObject * ___SendOutgoingLockObject_43;
	// System.Object ExitGames.Client.Photon.PhotonPeer::DispatchLockObject
	RuntimeObject * ___DispatchLockObject_44;
	// System.Object ExitGames.Client.Photon.PhotonPeer::EnqueueLock
	RuntimeObject * ___EnqueueLock_45;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::PayloadEncryptionSecret
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___PayloadEncryptionSecret_46;
	// System.Type ExitGames.Client.Photon.PhotonPeer::encryptorType
	Type_t * ___encryptorType_47;
	// ExitGames.Client.Photon.Encryption.IPhotonEncryptor ExitGames.Client.Photon.PhotonPeer::Encryptor
	RuntimeObject* ___Encryptor_48;

public:
	inline static int32_t get_offset_of_U3CCommandBufferSizeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___U3CCommandBufferSizeU3Ek__BackingField_0)); }
	inline int32_t get_U3CCommandBufferSizeU3Ek__BackingField_0() const { return ___U3CCommandBufferSizeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCommandBufferSizeU3Ek__BackingField_0() { return &___U3CCommandBufferSizeU3Ek__BackingField_0; }
	inline void set_U3CCommandBufferSizeU3Ek__BackingField_0(int32_t value)
	{
		___U3CCommandBufferSizeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1)); }
	inline int32_t get_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() const { return ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() { return &___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1; }
	inline void set_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1(int32_t value)
	{
		___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_WarningSize_2() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___WarningSize_2)); }
	inline int32_t get_WarningSize_2() const { return ___WarningSize_2; }
	inline int32_t* get_address_of_WarningSize_2() { return &___WarningSize_2; }
	inline void set_WarningSize_2(int32_t value)
	{
		___WarningSize_2 = value;
	}

	inline static int32_t get_offset_of_ClientSdkId_6() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___ClientSdkId_6)); }
	inline uint8_t get_ClientSdkId_6() const { return ___ClientSdkId_6; }
	inline uint8_t* get_address_of_ClientSdkId_6() { return &___ClientSdkId_6; }
	inline void set_ClientSdkId_6(uint8_t value)
	{
		___ClientSdkId_6 = value;
	}

	inline static int32_t get_offset_of_clientVersion_7() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___clientVersion_7)); }
	inline String_t* get_clientVersion_7() const { return ___clientVersion_7; }
	inline String_t** get_address_of_clientVersion_7() { return &___clientVersion_7; }
	inline void set_clientVersion_7(String_t* value)
	{
		___clientVersion_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientVersion_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSerializationProtocolTypeU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___U3CSerializationProtocolTypeU3Ek__BackingField_12)); }
	inline int32_t get_U3CSerializationProtocolTypeU3Ek__BackingField_12() const { return ___U3CSerializationProtocolTypeU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CSerializationProtocolTypeU3Ek__BackingField_12() { return &___U3CSerializationProtocolTypeU3Ek__BackingField_12; }
	inline void set_U3CSerializationProtocolTypeU3Ek__BackingField_12(int32_t value)
	{
		___U3CSerializationProtocolTypeU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_SocketImplementationConfig_13() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___SocketImplementationConfig_13)); }
	inline Dictionary_2_t3B3B3663ECCD2D47C05F241EC6B8A170CFAE8A77 * get_SocketImplementationConfig_13() const { return ___SocketImplementationConfig_13; }
	inline Dictionary_2_t3B3B3663ECCD2D47C05F241EC6B8A170CFAE8A77 ** get_address_of_SocketImplementationConfig_13() { return &___SocketImplementationConfig_13; }
	inline void set_SocketImplementationConfig_13(Dictionary_2_t3B3B3663ECCD2D47C05F241EC6B8A170CFAE8A77 * value)
	{
		___SocketImplementationConfig_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SocketImplementationConfig_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSocketImplementationU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___U3CSocketImplementationU3Ek__BackingField_14)); }
	inline Type_t * get_U3CSocketImplementationU3Ek__BackingField_14() const { return ___U3CSocketImplementationU3Ek__BackingField_14; }
	inline Type_t ** get_address_of_U3CSocketImplementationU3Ek__BackingField_14() { return &___U3CSocketImplementationU3Ek__BackingField_14; }
	inline void set_U3CSocketImplementationU3Ek__BackingField_14(Type_t * value)
	{
		___U3CSocketImplementationU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSocketImplementationU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_DebugOut_15() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___DebugOut_15)); }
	inline uint8_t get_DebugOut_15() const { return ___DebugOut_15; }
	inline uint8_t* get_address_of_DebugOut_15() { return &___DebugOut_15; }
	inline void set_DebugOut_15(uint8_t value)
	{
		___DebugOut_15 = value;
	}

	inline static int32_t get_offset_of_U3CListenerU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___U3CListenerU3Ek__BackingField_16)); }
	inline RuntimeObject* get_U3CListenerU3Ek__BackingField_16() const { return ___U3CListenerU3Ek__BackingField_16; }
	inline RuntimeObject** get_address_of_U3CListenerU3Ek__BackingField_16() { return &___U3CListenerU3Ek__BackingField_16; }
	inline void set_U3CListenerU3Ek__BackingField_16(RuntimeObject* value)
	{
		___U3CListenerU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CListenerU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_reuseEventInstance_17() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___reuseEventInstance_17)); }
	inline bool get_reuseEventInstance_17() const { return ___reuseEventInstance_17; }
	inline bool* get_address_of_reuseEventInstance_17() { return &___reuseEventInstance_17; }
	inline void set_reuseEventInstance_17(bool value)
	{
		___reuseEventInstance_17 = value;
	}

	inline static int32_t get_offset_of_SendInCreationOrder_18() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___SendInCreationOrder_18)); }
	inline bool get_SendInCreationOrder_18() const { return ___SendInCreationOrder_18; }
	inline bool* get_address_of_SendInCreationOrder_18() { return &___SendInCreationOrder_18; }
	inline void set_SendInCreationOrder_18(bool value)
	{
		___SendInCreationOrder_18 = value;
	}

	inline static int32_t get_offset_of_U3CEnableServerTracingU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___U3CEnableServerTracingU3Ek__BackingField_19)); }
	inline bool get_U3CEnableServerTracingU3Ek__BackingField_19() const { return ___U3CEnableServerTracingU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CEnableServerTracingU3Ek__BackingField_19() { return &___U3CEnableServerTracingU3Ek__BackingField_19; }
	inline void set_U3CEnableServerTracingU3Ek__BackingField_19(bool value)
	{
		___U3CEnableServerTracingU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_quickResendAttempts_20() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___quickResendAttempts_20)); }
	inline uint8_t get_quickResendAttempts_20() const { return ___quickResendAttempts_20; }
	inline uint8_t* get_address_of_quickResendAttempts_20() { return &___quickResendAttempts_20; }
	inline void set_quickResendAttempts_20(uint8_t value)
	{
		___quickResendAttempts_20 = value;
	}

	inline static int32_t get_offset_of_RhttpMinConnections_21() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___RhttpMinConnections_21)); }
	inline int32_t get_RhttpMinConnections_21() const { return ___RhttpMinConnections_21; }
	inline int32_t* get_address_of_RhttpMinConnections_21() { return &___RhttpMinConnections_21; }
	inline void set_RhttpMinConnections_21(int32_t value)
	{
		___RhttpMinConnections_21 = value;
	}

	inline static int32_t get_offset_of_RhttpMaxConnections_22() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___RhttpMaxConnections_22)); }
	inline int32_t get_RhttpMaxConnections_22() const { return ___RhttpMaxConnections_22; }
	inline int32_t* get_address_of_RhttpMaxConnections_22() { return &___RhttpMaxConnections_22; }
	inline void set_RhttpMaxConnections_22(int32_t value)
	{
		___RhttpMaxConnections_22 = value;
	}

	inline static int32_t get_offset_of_ChannelCount_23() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___ChannelCount_23)); }
	inline uint8_t get_ChannelCount_23() const { return ___ChannelCount_23; }
	inline uint8_t* get_address_of_ChannelCount_23() { return &___ChannelCount_23; }
	inline void set_ChannelCount_23(uint8_t value)
	{
		___ChannelCount_23 = value;
	}

	inline static int32_t get_offset_of_EnableEncryptedFlag_24() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___EnableEncryptedFlag_24)); }
	inline bool get_EnableEncryptedFlag_24() const { return ___EnableEncryptedFlag_24; }
	inline bool* get_address_of_EnableEncryptedFlag_24() { return &___EnableEncryptedFlag_24; }
	inline void set_EnableEncryptedFlag_24(bool value)
	{
		___EnableEncryptedFlag_24 = value;
	}

	inline static int32_t get_offset_of_crcEnabled_25() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___crcEnabled_25)); }
	inline bool get_crcEnabled_25() const { return ___crcEnabled_25; }
	inline bool* get_address_of_crcEnabled_25() { return &___crcEnabled_25; }
	inline void set_crcEnabled_25(bool value)
	{
		___crcEnabled_25 = value;
	}

	inline static int32_t get_offset_of_SentCountAllowance_26() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___SentCountAllowance_26)); }
	inline int32_t get_SentCountAllowance_26() const { return ___SentCountAllowance_26; }
	inline int32_t* get_address_of_SentCountAllowance_26() { return &___SentCountAllowance_26; }
	inline void set_SentCountAllowance_26(int32_t value)
	{
		___SentCountAllowance_26 = value;
	}

	inline static int32_t get_offset_of_InitialResendTimeMax_27() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___InitialResendTimeMax_27)); }
	inline int32_t get_InitialResendTimeMax_27() const { return ___InitialResendTimeMax_27; }
	inline int32_t* get_address_of_InitialResendTimeMax_27() { return &___InitialResendTimeMax_27; }
	inline void set_InitialResendTimeMax_27(int32_t value)
	{
		___InitialResendTimeMax_27 = value;
	}

	inline static int32_t get_offset_of_TimePingInterval_28() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___TimePingInterval_28)); }
	inline int32_t get_TimePingInterval_28() const { return ___TimePingInterval_28; }
	inline int32_t* get_address_of_TimePingInterval_28() { return &___TimePingInterval_28; }
	inline void set_TimePingInterval_28(int32_t value)
	{
		___TimePingInterval_28 = value;
	}

	inline static int32_t get_offset_of_DisconnectTimeout_29() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___DisconnectTimeout_29)); }
	inline int32_t get_DisconnectTimeout_29() const { return ___DisconnectTimeout_29; }
	inline int32_t* get_address_of_DisconnectTimeout_29() { return &___DisconnectTimeout_29; }
	inline void set_DisconnectTimeout_29(int32_t value)
	{
		___DisconnectTimeout_29 = value;
	}

	inline static int32_t get_offset_of_U3CTransportProtocolU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___U3CTransportProtocolU3Ek__BackingField_30)); }
	inline uint8_t get_U3CTransportProtocolU3Ek__BackingField_30() const { return ___U3CTransportProtocolU3Ek__BackingField_30; }
	inline uint8_t* get_address_of_U3CTransportProtocolU3Ek__BackingField_30() { return &___U3CTransportProtocolU3Ek__BackingField_30; }
	inline void set_U3CTransportProtocolU3Ek__BackingField_30(uint8_t value)
	{
		___U3CTransportProtocolU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_mtu_32() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___mtu_32)); }
	inline int32_t get_mtu_32() const { return ___mtu_32; }
	inline int32_t* get_address_of_mtu_32() { return &___mtu_32; }
	inline void set_mtu_32(int32_t value)
	{
		___mtu_32 = value;
	}

	inline static int32_t get_offset_of_U3CIsSendingOnlyAcksU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___U3CIsSendingOnlyAcksU3Ek__BackingField_33)); }
	inline bool get_U3CIsSendingOnlyAcksU3Ek__BackingField_33() const { return ___U3CIsSendingOnlyAcksU3Ek__BackingField_33; }
	inline bool* get_address_of_U3CIsSendingOnlyAcksU3Ek__BackingField_33() { return &___U3CIsSendingOnlyAcksU3Ek__BackingField_33; }
	inline void set_U3CIsSendingOnlyAcksU3Ek__BackingField_33(bool value)
	{
		___U3CIsSendingOnlyAcksU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_RandomizeSequenceNumbers_35() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___RandomizeSequenceNumbers_35)); }
	inline bool get_RandomizeSequenceNumbers_35() const { return ___RandomizeSequenceNumbers_35; }
	inline bool* get_address_of_RandomizeSequenceNumbers_35() { return &___RandomizeSequenceNumbers_35; }
	inline void set_RandomizeSequenceNumbers_35(bool value)
	{
		___RandomizeSequenceNumbers_35 = value;
	}

	inline static int32_t get_offset_of_RandomizedSequenceNumbers_36() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___RandomizedSequenceNumbers_36)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_RandomizedSequenceNumbers_36() const { return ___RandomizedSequenceNumbers_36; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_RandomizedSequenceNumbers_36() { return &___RandomizedSequenceNumbers_36; }
	inline void set_RandomizedSequenceNumbers_36(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___RandomizedSequenceNumbers_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RandomizedSequenceNumbers_36), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsIncomingU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___U3CTrafficStatsIncomingU3Ek__BackingField_37)); }
	inline TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * get_U3CTrafficStatsIncomingU3Ek__BackingField_37() const { return ___U3CTrafficStatsIncomingU3Ek__BackingField_37; }
	inline TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 ** get_address_of_U3CTrafficStatsIncomingU3Ek__BackingField_37() { return &___U3CTrafficStatsIncomingU3Ek__BackingField_37; }
	inline void set_U3CTrafficStatsIncomingU3Ek__BackingField_37(TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * value)
	{
		___U3CTrafficStatsIncomingU3Ek__BackingField_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsIncomingU3Ek__BackingField_37), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsOutgoingU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___U3CTrafficStatsOutgoingU3Ek__BackingField_38)); }
	inline TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * get_U3CTrafficStatsOutgoingU3Ek__BackingField_38() const { return ___U3CTrafficStatsOutgoingU3Ek__BackingField_38; }
	inline TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 ** get_address_of_U3CTrafficStatsOutgoingU3Ek__BackingField_38() { return &___U3CTrafficStatsOutgoingU3Ek__BackingField_38; }
	inline void set_U3CTrafficStatsOutgoingU3Ek__BackingField_38(TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * value)
	{
		___U3CTrafficStatsOutgoingU3Ek__BackingField_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsOutgoingU3Ek__BackingField_38), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsGameLevelU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___U3CTrafficStatsGameLevelU3Ek__BackingField_39)); }
	inline TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * get_U3CTrafficStatsGameLevelU3Ek__BackingField_39() const { return ___U3CTrafficStatsGameLevelU3Ek__BackingField_39; }
	inline TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 ** get_address_of_U3CTrafficStatsGameLevelU3Ek__BackingField_39() { return &___U3CTrafficStatsGameLevelU3Ek__BackingField_39; }
	inline void set_U3CTrafficStatsGameLevelU3Ek__BackingField_39(TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * value)
	{
		___U3CTrafficStatsGameLevelU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsGameLevelU3Ek__BackingField_39), (void*)value);
	}

	inline static int32_t get_offset_of_trafficStatsStopwatch_40() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___trafficStatsStopwatch_40)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_trafficStatsStopwatch_40() const { return ___trafficStatsStopwatch_40; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_trafficStatsStopwatch_40() { return &___trafficStatsStopwatch_40; }
	inline void set_trafficStatsStopwatch_40(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___trafficStatsStopwatch_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trafficStatsStopwatch_40), (void*)value);
	}

	inline static int32_t get_offset_of_trafficStatsEnabled_41() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___trafficStatsEnabled_41)); }
	inline bool get_trafficStatsEnabled_41() const { return ___trafficStatsEnabled_41; }
	inline bool* get_address_of_trafficStatsEnabled_41() { return &___trafficStatsEnabled_41; }
	inline void set_trafficStatsEnabled_41(bool value)
	{
		___trafficStatsEnabled_41 = value;
	}

	inline static int32_t get_offset_of_peerBase_42() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___peerBase_42)); }
	inline PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * get_peerBase_42() const { return ___peerBase_42; }
	inline PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 ** get_address_of_peerBase_42() { return &___peerBase_42; }
	inline void set_peerBase_42(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * value)
	{
		___peerBase_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peerBase_42), (void*)value);
	}

	inline static int32_t get_offset_of_SendOutgoingLockObject_43() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___SendOutgoingLockObject_43)); }
	inline RuntimeObject * get_SendOutgoingLockObject_43() const { return ___SendOutgoingLockObject_43; }
	inline RuntimeObject ** get_address_of_SendOutgoingLockObject_43() { return &___SendOutgoingLockObject_43; }
	inline void set_SendOutgoingLockObject_43(RuntimeObject * value)
	{
		___SendOutgoingLockObject_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendOutgoingLockObject_43), (void*)value);
	}

	inline static int32_t get_offset_of_DispatchLockObject_44() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___DispatchLockObject_44)); }
	inline RuntimeObject * get_DispatchLockObject_44() const { return ___DispatchLockObject_44; }
	inline RuntimeObject ** get_address_of_DispatchLockObject_44() { return &___DispatchLockObject_44; }
	inline void set_DispatchLockObject_44(RuntimeObject * value)
	{
		___DispatchLockObject_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DispatchLockObject_44), (void*)value);
	}

	inline static int32_t get_offset_of_EnqueueLock_45() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___EnqueueLock_45)); }
	inline RuntimeObject * get_EnqueueLock_45() const { return ___EnqueueLock_45; }
	inline RuntimeObject ** get_address_of_EnqueueLock_45() { return &___EnqueueLock_45; }
	inline void set_EnqueueLock_45(RuntimeObject * value)
	{
		___EnqueueLock_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnqueueLock_45), (void*)value);
	}

	inline static int32_t get_offset_of_PayloadEncryptionSecret_46() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___PayloadEncryptionSecret_46)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_PayloadEncryptionSecret_46() const { return ___PayloadEncryptionSecret_46; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_PayloadEncryptionSecret_46() { return &___PayloadEncryptionSecret_46; }
	inline void set_PayloadEncryptionSecret_46(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___PayloadEncryptionSecret_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PayloadEncryptionSecret_46), (void*)value);
	}

	inline static int32_t get_offset_of_encryptorType_47() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___encryptorType_47)); }
	inline Type_t * get_encryptorType_47() const { return ___encryptorType_47; }
	inline Type_t ** get_address_of_encryptorType_47() { return &___encryptorType_47; }
	inline void set_encryptorType_47(Type_t * value)
	{
		___encryptorType_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encryptorType_47), (void*)value);
	}

	inline static int32_t get_offset_of_Encryptor_48() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___Encryptor_48)); }
	inline RuntimeObject* get_Encryptor_48() const { return ___Encryptor_48; }
	inline RuntimeObject** get_address_of_Encryptor_48() { return &___Encryptor_48; }
	inline void set_Encryptor_48(RuntimeObject* value)
	{
		___Encryptor_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Encryptor_48), (void*)value);
	}
};

struct PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2_StaticFields
{
public:
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::checkedNativeLibs
	bool ___checkedNativeLibs_8;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useSocketNative
	bool ___useSocketNative_9;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useDiffieHellmanCryptoProvider
	bool ___useDiffieHellmanCryptoProvider_10;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useEncryptorNative
	bool ___useEncryptorNative_11;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::OutgoingStreamBufferSize
	int32_t ___OutgoingStreamBufferSize_31;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::AsyncKeyExchange
	bool ___AsyncKeyExchange_34;

public:
	inline static int32_t get_offset_of_checkedNativeLibs_8() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2_StaticFields, ___checkedNativeLibs_8)); }
	inline bool get_checkedNativeLibs_8() const { return ___checkedNativeLibs_8; }
	inline bool* get_address_of_checkedNativeLibs_8() { return &___checkedNativeLibs_8; }
	inline void set_checkedNativeLibs_8(bool value)
	{
		___checkedNativeLibs_8 = value;
	}

	inline static int32_t get_offset_of_useSocketNative_9() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2_StaticFields, ___useSocketNative_9)); }
	inline bool get_useSocketNative_9() const { return ___useSocketNative_9; }
	inline bool* get_address_of_useSocketNative_9() { return &___useSocketNative_9; }
	inline void set_useSocketNative_9(bool value)
	{
		___useSocketNative_9 = value;
	}

	inline static int32_t get_offset_of_useDiffieHellmanCryptoProvider_10() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2_StaticFields, ___useDiffieHellmanCryptoProvider_10)); }
	inline bool get_useDiffieHellmanCryptoProvider_10() const { return ___useDiffieHellmanCryptoProvider_10; }
	inline bool* get_address_of_useDiffieHellmanCryptoProvider_10() { return &___useDiffieHellmanCryptoProvider_10; }
	inline void set_useDiffieHellmanCryptoProvider_10(bool value)
	{
		___useDiffieHellmanCryptoProvider_10 = value;
	}

	inline static int32_t get_offset_of_useEncryptorNative_11() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2_StaticFields, ___useEncryptorNative_11)); }
	inline bool get_useEncryptorNative_11() const { return ___useEncryptorNative_11; }
	inline bool* get_address_of_useEncryptorNative_11() { return &___useEncryptorNative_11; }
	inline void set_useEncryptorNative_11(bool value)
	{
		___useEncryptorNative_11 = value;
	}

	inline static int32_t get_offset_of_OutgoingStreamBufferSize_31() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2_StaticFields, ___OutgoingStreamBufferSize_31)); }
	inline int32_t get_OutgoingStreamBufferSize_31() const { return ___OutgoingStreamBufferSize_31; }
	inline int32_t* get_address_of_OutgoingStreamBufferSize_31() { return &___OutgoingStreamBufferSize_31; }
	inline void set_OutgoingStreamBufferSize_31(int32_t value)
	{
		___OutgoingStreamBufferSize_31 = value;
	}

	inline static int32_t get_offset_of_AsyncKeyExchange_34() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2_StaticFields, ___AsyncKeyExchange_34)); }
	inline bool get_AsyncKeyExchange_34() const { return ___AsyncKeyExchange_34; }
	inline bool* get_address_of_AsyncKeyExchange_34() { return &___AsyncKeyExchange_34; }
	inline void set_AsyncKeyExchange_34(bool value)
	{
		___AsyncKeyExchange_34 = value;
	}
};


// ExitGames.Client.Photon.SendOptions
struct  SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E 
{
public:
	// ExitGames.Client.Photon.DeliveryMode ExitGames.Client.Photon.SendOptions::DeliveryMode
	int32_t ___DeliveryMode_2;
	// System.Boolean ExitGames.Client.Photon.SendOptions::Encrypt
	bool ___Encrypt_3;
	// System.Byte ExitGames.Client.Photon.SendOptions::Channel
	uint8_t ___Channel_4;

public:
	inline static int32_t get_offset_of_DeliveryMode_2() { return static_cast<int32_t>(offsetof(SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E, ___DeliveryMode_2)); }
	inline int32_t get_DeliveryMode_2() const { return ___DeliveryMode_2; }
	inline int32_t* get_address_of_DeliveryMode_2() { return &___DeliveryMode_2; }
	inline void set_DeliveryMode_2(int32_t value)
	{
		___DeliveryMode_2 = value;
	}

	inline static int32_t get_offset_of_Encrypt_3() { return static_cast<int32_t>(offsetof(SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E, ___Encrypt_3)); }
	inline bool get_Encrypt_3() const { return ___Encrypt_3; }
	inline bool* get_address_of_Encrypt_3() { return &___Encrypt_3; }
	inline void set_Encrypt_3(bool value)
	{
		___Encrypt_3 = value;
	}

	inline static int32_t get_offset_of_Channel_4() { return static_cast<int32_t>(offsetof(SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E, ___Channel_4)); }
	inline uint8_t get_Channel_4() const { return ___Channel_4; }
	inline uint8_t* get_address_of_Channel_4() { return &___Channel_4; }
	inline void set_Channel_4(uint8_t value)
	{
		___Channel_4 = value;
	}
};

struct SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E_StaticFields
{
public:
	// ExitGames.Client.Photon.SendOptions ExitGames.Client.Photon.SendOptions::SendReliable
	SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E  ___SendReliable_0;
	// ExitGames.Client.Photon.SendOptions ExitGames.Client.Photon.SendOptions::SendUnreliable
	SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E  ___SendUnreliable_1;

public:
	inline static int32_t get_offset_of_SendReliable_0() { return static_cast<int32_t>(offsetof(SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E_StaticFields, ___SendReliable_0)); }
	inline SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E  get_SendReliable_0() const { return ___SendReliable_0; }
	inline SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E * get_address_of_SendReliable_0() { return &___SendReliable_0; }
	inline void set_SendReliable_0(SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E  value)
	{
		___SendReliable_0 = value;
	}

	inline static int32_t get_offset_of_SendUnreliable_1() { return static_cast<int32_t>(offsetof(SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E_StaticFields, ___SendUnreliable_1)); }
	inline SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E  get_SendUnreliable_1() const { return ___SendUnreliable_1; }
	inline SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E * get_address_of_SendUnreliable_1() { return &___SendUnreliable_1; }
	inline void set_SendUnreliable_1(SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E  value)
	{
		___SendUnreliable_1 = value;
	}
};

// Native definition for P/Invoke marshalling of ExitGames.Client.Photon.SendOptions
struct SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E_marshaled_pinvoke
{
	int32_t ___DeliveryMode_2;
	int32_t ___Encrypt_3;
	uint8_t ___Channel_4;
};
// Native definition for COM marshalling of ExitGames.Client.Photon.SendOptions
struct SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E_marshaled_com
{
	int32_t ___DeliveryMode_2;
	int32_t ___Encrypt_3;
	uint8_t ___Channel_4;
};

// System.Net.Sockets.Socket
struct  Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_6;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_7;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_8;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_9;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_10;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_11;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_12;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * ___m_Handle_13;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___seed_endpoint_14;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ___ReadSem_15;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ___WriteSem_16;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_17;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_18;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_19;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_20;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_21;
	// System.Int32 System.Net.Sockets.Socket::ID
	int32_t ___ID_22;

public:
	inline static int32_t get_offset_of_is_closed_6() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_closed_6)); }
	inline bool get_is_closed_6() const { return ___is_closed_6; }
	inline bool* get_address_of_is_closed_6() { return &___is_closed_6; }
	inline void set_is_closed_6(bool value)
	{
		___is_closed_6 = value;
	}

	inline static int32_t get_offset_of_is_listening_7() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_listening_7)); }
	inline bool get_is_listening_7() const { return ___is_listening_7; }
	inline bool* get_address_of_is_listening_7() { return &___is_listening_7; }
	inline void set_is_listening_7(bool value)
	{
		___is_listening_7 = value;
	}

	inline static int32_t get_offset_of_useOverlappedIO_8() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___useOverlappedIO_8)); }
	inline bool get_useOverlappedIO_8() const { return ___useOverlappedIO_8; }
	inline bool* get_address_of_useOverlappedIO_8() { return &___useOverlappedIO_8; }
	inline void set_useOverlappedIO_8(bool value)
	{
		___useOverlappedIO_8 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_9() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___linger_timeout_9)); }
	inline int32_t get_linger_timeout_9() const { return ___linger_timeout_9; }
	inline int32_t* get_address_of_linger_timeout_9() { return &___linger_timeout_9; }
	inline void set_linger_timeout_9(int32_t value)
	{
		___linger_timeout_9 = value;
	}

	inline static int32_t get_offset_of_addressFamily_10() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___addressFamily_10)); }
	inline int32_t get_addressFamily_10() const { return ___addressFamily_10; }
	inline int32_t* get_address_of_addressFamily_10() { return &___addressFamily_10; }
	inline void set_addressFamily_10(int32_t value)
	{
		___addressFamily_10 = value;
	}

	inline static int32_t get_offset_of_socketType_11() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___socketType_11)); }
	inline int32_t get_socketType_11() const { return ___socketType_11; }
	inline int32_t* get_address_of_socketType_11() { return &___socketType_11; }
	inline void set_socketType_11(int32_t value)
	{
		___socketType_11 = value;
	}

	inline static int32_t get_offset_of_protocolType_12() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___protocolType_12)); }
	inline int32_t get_protocolType_12() const { return ___protocolType_12; }
	inline int32_t* get_address_of_protocolType_12() { return &___protocolType_12; }
	inline void set_protocolType_12(int32_t value)
	{
		___protocolType_12 = value;
	}

	inline static int32_t get_offset_of_m_Handle_13() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___m_Handle_13)); }
	inline SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * get_m_Handle_13() const { return ___m_Handle_13; }
	inline SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 ** get_address_of_m_Handle_13() { return &___m_Handle_13; }
	inline void set_m_Handle_13(SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * value)
	{
		___m_Handle_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Handle_13), (void*)value);
	}

	inline static int32_t get_offset_of_seed_endpoint_14() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___seed_endpoint_14)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_seed_endpoint_14() const { return ___seed_endpoint_14; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_seed_endpoint_14() { return &___seed_endpoint_14; }
	inline void set_seed_endpoint_14(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___seed_endpoint_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seed_endpoint_14), (void*)value);
	}

	inline static int32_t get_offset_of_ReadSem_15() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___ReadSem_15)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get_ReadSem_15() const { return ___ReadSem_15; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of_ReadSem_15() { return &___ReadSem_15; }
	inline void set_ReadSem_15(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		___ReadSem_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReadSem_15), (void*)value);
	}

	inline static int32_t get_offset_of_WriteSem_16() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___WriteSem_16)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get_WriteSem_16() const { return ___WriteSem_16; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of_WriteSem_16() { return &___WriteSem_16; }
	inline void set_WriteSem_16(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		___WriteSem_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WriteSem_16), (void*)value);
	}

	inline static int32_t get_offset_of_is_blocking_17() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_blocking_17)); }
	inline bool get_is_blocking_17() const { return ___is_blocking_17; }
	inline bool* get_address_of_is_blocking_17() { return &___is_blocking_17; }
	inline void set_is_blocking_17(bool value)
	{
		___is_blocking_17 = value;
	}

	inline static int32_t get_offset_of_is_bound_18() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_bound_18)); }
	inline bool get_is_bound_18() const { return ___is_bound_18; }
	inline bool* get_address_of_is_bound_18() { return &___is_bound_18; }
	inline void set_is_bound_18(bool value)
	{
		___is_bound_18 = value;
	}

	inline static int32_t get_offset_of_is_connected_19() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_connected_19)); }
	inline bool get_is_connected_19() const { return ___is_connected_19; }
	inline bool* get_address_of_is_connected_19() { return &___is_connected_19; }
	inline void set_is_connected_19(bool value)
	{
		___is_connected_19 = value;
	}

	inline static int32_t get_offset_of_m_IntCleanedUp_20() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___m_IntCleanedUp_20)); }
	inline int32_t get_m_IntCleanedUp_20() const { return ___m_IntCleanedUp_20; }
	inline int32_t* get_address_of_m_IntCleanedUp_20() { return &___m_IntCleanedUp_20; }
	inline void set_m_IntCleanedUp_20(int32_t value)
	{
		___m_IntCleanedUp_20 = value;
	}

	inline static int32_t get_offset_of_connect_in_progress_21() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___connect_in_progress_21)); }
	inline bool get_connect_in_progress_21() const { return ___connect_in_progress_21; }
	inline bool* get_address_of_connect_in_progress_21() { return &___connect_in_progress_21; }
	inline void set_connect_in_progress_21(bool value)
	{
		___connect_in_progress_21 = value;
	}

	inline static int32_t get_offset_of_ID_22() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___ID_22)); }
	inline int32_t get_ID_22() const { return ___ID_22; }
	inline int32_t* get_address_of_ID_22() { return &___ID_22; }
	inline void set_ID_22(int32_t value)
	{
		___ID_22 = value;
	}
};

struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields
{
public:
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_1;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_5;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___AcceptAsyncCallback_23;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginAcceptCallback_24;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginAcceptReceiveCallback_25;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ConnectAsyncCallback_26;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginConnectCallback_27;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___DisconnectAsyncCallback_28;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginDisconnectCallback_29;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ReceiveAsyncCallback_30;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveCallback_31;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveGenericCallback_32;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ReceiveFromAsyncCallback_33;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveFromCallback_34;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___SendAsyncCallback_35;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginSendGenericCallback_36;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___SendToAsyncCallback_37;

public:
	inline static int32_t get_offset_of_s_InternalSyncObject_0() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_InternalSyncObject_0)); }
	inline RuntimeObject * get_s_InternalSyncObject_0() const { return ___s_InternalSyncObject_0; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_0() { return &___s_InternalSyncObject_0; }
	inline void set_s_InternalSyncObject_0(RuntimeObject * value)
	{
		___s_InternalSyncObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_SupportsIPv4_1() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_SupportsIPv4_1)); }
	inline bool get_s_SupportsIPv4_1() const { return ___s_SupportsIPv4_1; }
	inline bool* get_address_of_s_SupportsIPv4_1() { return &___s_SupportsIPv4_1; }
	inline void set_s_SupportsIPv4_1(bool value)
	{
		___s_SupportsIPv4_1 = value;
	}

	inline static int32_t get_offset_of_s_SupportsIPv6_2() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_SupportsIPv6_2)); }
	inline bool get_s_SupportsIPv6_2() const { return ___s_SupportsIPv6_2; }
	inline bool* get_address_of_s_SupportsIPv6_2() { return &___s_SupportsIPv6_2; }
	inline void set_s_SupportsIPv6_2(bool value)
	{
		___s_SupportsIPv6_2 = value;
	}

	inline static int32_t get_offset_of_s_OSSupportsIPv6_3() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_OSSupportsIPv6_3)); }
	inline bool get_s_OSSupportsIPv6_3() const { return ___s_OSSupportsIPv6_3; }
	inline bool* get_address_of_s_OSSupportsIPv6_3() { return &___s_OSSupportsIPv6_3; }
	inline void set_s_OSSupportsIPv6_3(bool value)
	{
		___s_OSSupportsIPv6_3 = value;
	}

	inline static int32_t get_offset_of_s_Initialized_4() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_Initialized_4)); }
	inline bool get_s_Initialized_4() const { return ___s_Initialized_4; }
	inline bool* get_address_of_s_Initialized_4() { return &___s_Initialized_4; }
	inline void set_s_Initialized_4(bool value)
	{
		___s_Initialized_4 = value;
	}

	inline static int32_t get_offset_of_s_LoggingEnabled_5() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_LoggingEnabled_5)); }
	inline bool get_s_LoggingEnabled_5() const { return ___s_LoggingEnabled_5; }
	inline bool* get_address_of_s_LoggingEnabled_5() { return &___s_LoggingEnabled_5; }
	inline void set_s_LoggingEnabled_5(bool value)
	{
		___s_LoggingEnabled_5 = value;
	}

	inline static int32_t get_offset_of_AcceptAsyncCallback_23() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___AcceptAsyncCallback_23)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_AcceptAsyncCallback_23() const { return ___AcceptAsyncCallback_23; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_AcceptAsyncCallback_23() { return &___AcceptAsyncCallback_23; }
	inline void set_AcceptAsyncCallback_23(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___AcceptAsyncCallback_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AcceptAsyncCallback_23), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptCallback_24() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginAcceptCallback_24)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginAcceptCallback_24() const { return ___BeginAcceptCallback_24; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginAcceptCallback_24() { return &___BeginAcceptCallback_24; }
	inline void set_BeginAcceptCallback_24(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginAcceptCallback_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptCallback_24), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptReceiveCallback_25() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginAcceptReceiveCallback_25)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginAcceptReceiveCallback_25() const { return ___BeginAcceptReceiveCallback_25; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginAcceptReceiveCallback_25() { return &___BeginAcceptReceiveCallback_25; }
	inline void set_BeginAcceptReceiveCallback_25(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginAcceptReceiveCallback_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptReceiveCallback_25), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectAsyncCallback_26() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ConnectAsyncCallback_26)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ConnectAsyncCallback_26() const { return ___ConnectAsyncCallback_26; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ConnectAsyncCallback_26() { return &___ConnectAsyncCallback_26; }
	inline void set_ConnectAsyncCallback_26(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ConnectAsyncCallback_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectAsyncCallback_26), (void*)value);
	}

	inline static int32_t get_offset_of_BeginConnectCallback_27() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginConnectCallback_27)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginConnectCallback_27() const { return ___BeginConnectCallback_27; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginConnectCallback_27() { return &___BeginConnectCallback_27; }
	inline void set_BeginConnectCallback_27(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginConnectCallback_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginConnectCallback_27), (void*)value);
	}

	inline static int32_t get_offset_of_DisconnectAsyncCallback_28() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___DisconnectAsyncCallback_28)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_DisconnectAsyncCallback_28() const { return ___DisconnectAsyncCallback_28; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_DisconnectAsyncCallback_28() { return &___DisconnectAsyncCallback_28; }
	inline void set_DisconnectAsyncCallback_28(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___DisconnectAsyncCallback_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisconnectAsyncCallback_28), (void*)value);
	}

	inline static int32_t get_offset_of_BeginDisconnectCallback_29() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginDisconnectCallback_29)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginDisconnectCallback_29() const { return ___BeginDisconnectCallback_29; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginDisconnectCallback_29() { return &___BeginDisconnectCallback_29; }
	inline void set_BeginDisconnectCallback_29(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginDisconnectCallback_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginDisconnectCallback_29), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveAsyncCallback_30() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ReceiveAsyncCallback_30)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ReceiveAsyncCallback_30() const { return ___ReceiveAsyncCallback_30; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ReceiveAsyncCallback_30() { return &___ReceiveAsyncCallback_30; }
	inline void set_ReceiveAsyncCallback_30(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ReceiveAsyncCallback_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveAsyncCallback_30), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveCallback_31() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveCallback_31)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveCallback_31() const { return ___BeginReceiveCallback_31; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveCallback_31() { return &___BeginReceiveCallback_31; }
	inline void set_BeginReceiveCallback_31(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveCallback_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveCallback_31), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveGenericCallback_32() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveGenericCallback_32)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveGenericCallback_32() const { return ___BeginReceiveGenericCallback_32; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveGenericCallback_32() { return &___BeginReceiveGenericCallback_32; }
	inline void set_BeginReceiveGenericCallback_32(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveGenericCallback_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveGenericCallback_32), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveFromAsyncCallback_33() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ReceiveFromAsyncCallback_33)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ReceiveFromAsyncCallback_33() const { return ___ReceiveFromAsyncCallback_33; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ReceiveFromAsyncCallback_33() { return &___ReceiveFromAsyncCallback_33; }
	inline void set_ReceiveFromAsyncCallback_33(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ReceiveFromAsyncCallback_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveFromAsyncCallback_33), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveFromCallback_34() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveFromCallback_34)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveFromCallback_34() const { return ___BeginReceiveFromCallback_34; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveFromCallback_34() { return &___BeginReceiveFromCallback_34; }
	inline void set_BeginReceiveFromCallback_34(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveFromCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveFromCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_SendAsyncCallback_35() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___SendAsyncCallback_35)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_SendAsyncCallback_35() const { return ___SendAsyncCallback_35; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_SendAsyncCallback_35() { return &___SendAsyncCallback_35; }
	inline void set_SendAsyncCallback_35(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___SendAsyncCallback_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendAsyncCallback_35), (void*)value);
	}

	inline static int32_t get_offset_of_BeginSendGenericCallback_36() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginSendGenericCallback_36)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginSendGenericCallback_36() const { return ___BeginSendGenericCallback_36; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginSendGenericCallback_36() { return &___BeginSendGenericCallback_36; }
	inline void set_BeginSendGenericCallback_36(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginSendGenericCallback_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginSendGenericCallback_36), (void*)value);
	}

	inline static int32_t get_offset_of_SendToAsyncCallback_37() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___SendToAsyncCallback_37)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_SendToAsyncCallback_37() const { return ___SendToAsyncCallback_37; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_SendToAsyncCallback_37() { return &___SendToAsyncCallback_37; }
	inline void set_SendToAsyncCallback_37(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___SendToAsyncCallback_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendToAsyncCallback_37), (void*)value);
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
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


// ExitGames.Client.Photon.PeerBase/<>c__DisplayClass108_0
struct  U3CU3Ec__DisplayClass108_0_t64F864F04C05F82F58AE9D771DC44FA10FAB5E68  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PeerBase/<>c__DisplayClass108_0::<>4__this
	PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * ___U3CU3E4__this_0;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PeerBase/<>c__DisplayClass108_0::level
	uint8_t ___level_1;
	// System.String ExitGames.Client.Photon.PeerBase/<>c__DisplayClass108_0::debugReturn
	String_t* ___debugReturn_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass108_0_t64F864F04C05F82F58AE9D771DC44FA10FAB5E68, ___U3CU3E4__this_0)); }
	inline PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_level_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass108_0_t64F864F04C05F82F58AE9D771DC44FA10FAB5E68, ___level_1)); }
	inline uint8_t get_level_1() const { return ___level_1; }
	inline uint8_t* get_address_of_level_1() { return &___level_1; }
	inline void set_level_1(uint8_t value)
	{
		___level_1 = value;
	}

	inline static int32_t get_offset_of_debugReturn_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass108_0_t64F864F04C05F82F58AE9D771DC44FA10FAB5E68, ___debugReturn_2)); }
	inline String_t* get_debugReturn_2() const { return ___debugReturn_2; }
	inline String_t** get_address_of_debugReturn_2() { return &___debugReturn_2; }
	inline void set_debugReturn_2(String_t* value)
	{
		___debugReturn_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debugReturn_2), (void*)value);
	}
};


// ExitGames.Client.Photon.PeerBase/<>c__DisplayClass109_0
struct  U3CU3Ec__DisplayClass109_0_t357C7AE2AB9EF03C4423B72CC4BEDEADE6DDF769  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PeerBase/<>c__DisplayClass109_0::<>4__this
	PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * ___U3CU3E4__this_0;
	// ExitGames.Client.Photon.StatusCode ExitGames.Client.Photon.PeerBase/<>c__DisplayClass109_0::statusValue
	int32_t ___statusValue_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass109_0_t357C7AE2AB9EF03C4423B72CC4BEDEADE6DDF769, ___U3CU3E4__this_0)); }
	inline PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_statusValue_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass109_0_t357C7AE2AB9EF03C4423B72CC4BEDEADE6DDF769, ___statusValue_1)); }
	inline int32_t get_statusValue_1() const { return ___statusValue_1; }
	inline int32_t* get_address_of_statusValue_1() { return &___statusValue_1; }
	inline void set_statusValue_1(int32_t value)
	{
		___statusValue_1 = value;
	}
};


// System.Func`1<System.Boolean>
struct  Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
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


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.Runtime.InteropServices.ExternalException
struct  ExternalException_tC18275DD0AEB2CDF9F85D94670C5A49A4DC3B783  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.IO.IOException
struct  IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.Security.SecurityException
struct  SecurityException_t3BE23C00ECC638A4EDCAA33572C4DCC21F2FA769  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.Security.SecurityException::permissionState
	String_t* ___permissionState_17;

public:
	inline static int32_t get_offset_of_permissionState_17() { return static_cast<int32_t>(offsetof(SecurityException_t3BE23C00ECC638A4EDCAA33572C4DCC21F2FA769, ___permissionState_17)); }
	inline String_t* get_permissionState_17() const { return ___permissionState_17; }
	inline String_t** get_address_of_permissionState_17() { return &___permissionState_17; }
	inline void set_permissionState_17(String_t* value)
	{
		___permissionState_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___permissionState_17), (void*)value);
	}
};


// ExitGames.Client.Photon.SerializeMethod
struct  SerializeMethod_t390646D2A9C94E6966CA88C4A16C97F711D9D4AC  : public MulticastDelegate_t
{
public:

public:
};


// ExitGames.Client.Photon.SerializeStreamMethod
struct  SerializeStreamMethod_t5E36C0898409DCF68798F12D4899F2255F289DC5  : public MulticastDelegate_t
{
public:

public:
};


// ExitGames.Client.Photon.SocketNative
struct  SocketNative_t4955989E680FD53BE6ECDCC6BCEE93BA28208032  : public IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF
{
public:
	// System.IntPtr ExitGames.Client.Photon.SocketNative::pConnectionHandler
	intptr_t ___pConnectionHandler_11;

public:
	inline static int32_t get_offset_of_pConnectionHandler_11() { return static_cast<int32_t>(offsetof(SocketNative_t4955989E680FD53BE6ECDCC6BCEE93BA28208032, ___pConnectionHandler_11)); }
	inline intptr_t get_pConnectionHandler_11() const { return ___pConnectionHandler_11; }
	inline intptr_t* get_address_of_pConnectionHandler_11() { return &___pConnectionHandler_11; }
	inline void set_pConnectionHandler_11(intptr_t value)
	{
		___pConnectionHandler_11 = value;
	}
};

struct SocketNative_t4955989E680FD53BE6ECDCC6BCEE93BA28208032_StaticFields
{
public:
	// System.Object ExitGames.Client.Photon.SocketNative::syncer
	RuntimeObject * ___syncer_12;

public:
	inline static int32_t get_offset_of_syncer_12() { return static_cast<int32_t>(offsetof(SocketNative_t4955989E680FD53BE6ECDCC6BCEE93BA28208032_StaticFields, ___syncer_12)); }
	inline RuntimeObject * get_syncer_12() const { return ___syncer_12; }
	inline RuntimeObject ** get_address_of_syncer_12() { return &___syncer_12; }
	inline void set_syncer_12(RuntimeObject * value)
	{
		___syncer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncer_12), (void*)value);
	}
};


// ExitGames.Client.Photon.SocketTcp
struct  SocketTcp_t6DA1B64C0FCE8B978387AB8EC153932CADD27F02  : public IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF
{
public:
	// System.Net.Sockets.Socket ExitGames.Client.Photon.SocketTcp::sock
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___sock_11;
	// System.Object ExitGames.Client.Photon.SocketTcp::syncer
	RuntimeObject * ___syncer_12;

public:
	inline static int32_t get_offset_of_sock_11() { return static_cast<int32_t>(offsetof(SocketTcp_t6DA1B64C0FCE8B978387AB8EC153932CADD27F02, ___sock_11)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_sock_11() const { return ___sock_11; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_sock_11() { return &___sock_11; }
	inline void set_sock_11(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___sock_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sock_11), (void*)value);
	}

	inline static int32_t get_offset_of_syncer_12() { return static_cast<int32_t>(offsetof(SocketTcp_t6DA1B64C0FCE8B978387AB8EC153932CADD27F02, ___syncer_12)); }
	inline RuntimeObject * get_syncer_12() const { return ___syncer_12; }
	inline RuntimeObject ** get_address_of_syncer_12() { return &___syncer_12; }
	inline void set_syncer_12(RuntimeObject * value)
	{
		___syncer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncer_12), (void*)value);
	}
};


// ExitGames.Client.Photon.SocketUdp
struct  SocketUdp_tFB179A3EA0410DDDDCAAF22E21B1445810D4BAFA  : public IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF
{
public:
	// System.Net.Sockets.Socket ExitGames.Client.Photon.SocketUdp::sock
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___sock_11;
	// System.Object ExitGames.Client.Photon.SocketUdp::syncer
	RuntimeObject * ___syncer_12;

public:
	inline static int32_t get_offset_of_sock_11() { return static_cast<int32_t>(offsetof(SocketUdp_tFB179A3EA0410DDDDCAAF22E21B1445810D4BAFA, ___sock_11)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_sock_11() const { return ___sock_11; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_sock_11() { return &___sock_11; }
	inline void set_sock_11(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___sock_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sock_11), (void*)value);
	}

	inline static int32_t get_offset_of_syncer_12() { return static_cast<int32_t>(offsetof(SocketUdp_tFB179A3EA0410DDDDCAAF22E21B1445810D4BAFA, ___syncer_12)); }
	inline RuntimeObject * get_syncer_12() const { return ___syncer_12; }
	inline RuntimeObject ** get_address_of_syncer_12() { return &___syncer_12; }
	inline void set_syncer_12(RuntimeObject * value)
	{
		___syncer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncer_12), (void*)value);
	}
};


// ExitGames.Client.Photon.TPeer
struct  TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65  : public PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8
{
public:
	// System.Collections.Generic.Queue`1<System.Byte[]> ExitGames.Client.Photon.TPeer::incomingList
	Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * ___incomingList_47;
	// System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer> ExitGames.Client.Photon.TPeer::outgoingStream
	List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12 * ___outgoingStream_48;
	// System.Int32 ExitGames.Client.Photon.TPeer::lastPingResult
	int32_t ___lastPingResult_49;
	// System.Byte[] ExitGames.Client.Photon.TPeer::pingRequest
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___pingRequest_50;
	// System.Byte[] ExitGames.Client.Photon.TPeer::messageHeader
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___messageHeader_53;
	// System.Boolean ExitGames.Client.Photon.TPeer::DoFraming
	bool ___DoFraming_54;

public:
	inline static int32_t get_offset_of_incomingList_47() { return static_cast<int32_t>(offsetof(TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65, ___incomingList_47)); }
	inline Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * get_incomingList_47() const { return ___incomingList_47; }
	inline Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 ** get_address_of_incomingList_47() { return &___incomingList_47; }
	inline void set_incomingList_47(Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * value)
	{
		___incomingList_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___incomingList_47), (void*)value);
	}

	inline static int32_t get_offset_of_outgoingStream_48() { return static_cast<int32_t>(offsetof(TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65, ___outgoingStream_48)); }
	inline List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12 * get_outgoingStream_48() const { return ___outgoingStream_48; }
	inline List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12 ** get_address_of_outgoingStream_48() { return &___outgoingStream_48; }
	inline void set_outgoingStream_48(List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12 * value)
	{
		___outgoingStream_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outgoingStream_48), (void*)value);
	}

	inline static int32_t get_offset_of_lastPingResult_49() { return static_cast<int32_t>(offsetof(TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65, ___lastPingResult_49)); }
	inline int32_t get_lastPingResult_49() const { return ___lastPingResult_49; }
	inline int32_t* get_address_of_lastPingResult_49() { return &___lastPingResult_49; }
	inline void set_lastPingResult_49(int32_t value)
	{
		___lastPingResult_49 = value;
	}

	inline static int32_t get_offset_of_pingRequest_50() { return static_cast<int32_t>(offsetof(TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65, ___pingRequest_50)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_pingRequest_50() const { return ___pingRequest_50; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_pingRequest_50() { return &___pingRequest_50; }
	inline void set_pingRequest_50(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___pingRequest_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pingRequest_50), (void*)value);
	}

	inline static int32_t get_offset_of_messageHeader_53() { return static_cast<int32_t>(offsetof(TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65, ___messageHeader_53)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_messageHeader_53() const { return ___messageHeader_53; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_messageHeader_53() { return &___messageHeader_53; }
	inline void set_messageHeader_53(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___messageHeader_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageHeader_53), (void*)value);
	}

	inline static int32_t get_offset_of_DoFraming_54() { return static_cast<int32_t>(offsetof(TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65, ___DoFraming_54)); }
	inline bool get_DoFraming_54() const { return ___DoFraming_54; }
	inline bool* get_address_of_DoFraming_54() { return &___DoFraming_54; }
	inline void set_DoFraming_54(bool value)
	{
		___DoFraming_54 = value;
	}
};

struct TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65_StaticFields
{
public:
	// System.Byte[] ExitGames.Client.Photon.TPeer::tcpFramedMessageHead
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___tcpFramedMessageHead_51;
	// System.Byte[] ExitGames.Client.Photon.TPeer::tcpMsgHead
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___tcpMsgHead_52;

public:
	inline static int32_t get_offset_of_tcpFramedMessageHead_51() { return static_cast<int32_t>(offsetof(TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65_StaticFields, ___tcpFramedMessageHead_51)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_tcpFramedMessageHead_51() const { return ___tcpFramedMessageHead_51; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_tcpFramedMessageHead_51() { return &___tcpFramedMessageHead_51; }
	inline void set_tcpFramedMessageHead_51(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___tcpFramedMessageHead_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tcpFramedMessageHead_51), (void*)value);
	}

	inline static int32_t get_offset_of_tcpMsgHead_52() { return static_cast<int32_t>(offsetof(TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65_StaticFields, ___tcpMsgHead_52)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_tcpMsgHead_52() const { return ___tcpMsgHead_52; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_tcpMsgHead_52() { return &___tcpMsgHead_52; }
	inline void set_tcpMsgHead_52(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___tcpMsgHead_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tcpMsgHead_52), (void*)value);
	}
};


// System.Threading.ThreadAbortException
struct  ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Threading.ThreadStart
struct  ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687  : public MulticastDelegate_t
{
public:

public:
};


// ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate
struct  LogCallbackDelegate_t97F0F61712F0ED77B58D43AF35C1E3B721BB93E9  : public MulticastDelegate_t
{
public:

public:
};


// ExitGames.Client.Photon.PeerBase/MyAction
struct  MyAction_tC825FCD41C6AA4314F2D66D0FF11992F6CBAC017  : public MulticastDelegate_t
{
public:

public:
};


// ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate
struct  IntegerMillisecondsDelegate_tFA09AD82FF54A8E784DF5B0AE0B27FDE48D70A9E  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.IO.EndOfStreamException
struct  EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059  : public IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA
{
public:

public:
};


// System.ComponentModel.Win32Exception
struct  Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950  : public ExternalException_tC18275DD0AEB2CDF9F85D94670C5A49A4DC3B783
{
public:
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_17;

public:
	inline static int32_t get_offset_of_nativeErrorCode_17() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950, ___nativeErrorCode_17)); }
	inline int32_t get_nativeErrorCode_17() const { return ___nativeErrorCode_17; }
	inline int32_t* get_address_of_nativeErrorCode_17() { return &___nativeErrorCode_17; }
	inline void set_nativeErrorCode_17(int32_t value)
	{
		___nativeErrorCode_17 = value;
	}
};

struct Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields
{
public:
	// System.Boolean System.ComponentModel.Win32Exception::s_ErrorMessagesInitialized
	bool ___s_ErrorMessagesInitialized_18;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> System.ComponentModel.Win32Exception::s_ErrorMessage
	Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * ___s_ErrorMessage_19;

public:
	inline static int32_t get_offset_of_s_ErrorMessagesInitialized_18() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields, ___s_ErrorMessagesInitialized_18)); }
	inline bool get_s_ErrorMessagesInitialized_18() const { return ___s_ErrorMessagesInitialized_18; }
	inline bool* get_address_of_s_ErrorMessagesInitialized_18() { return &___s_ErrorMessagesInitialized_18; }
	inline void set_s_ErrorMessagesInitialized_18(bool value)
	{
		___s_ErrorMessagesInitialized_18 = value;
	}

	inline static int32_t get_offset_of_s_ErrorMessage_19() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields, ___s_ErrorMessage_19)); }
	inline Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * get_s_ErrorMessage_19() const { return ___s_ErrorMessage_19; }
	inline Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB ** get_address_of_s_ErrorMessage_19() { return &___s_ErrorMessage_19; }
	inline void set_s_ErrorMessage_19(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * value)
	{
		___s_ErrorMessage_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ErrorMessage_19), (void*)value);
	}
};


// System.Net.Sockets.SocketException
struct  SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88  : public Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950
{
public:
	// System.Net.EndPoint System.Net.Sockets.SocketException::m_EndPoint
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___m_EndPoint_20;

public:
	inline static int32_t get_offset_of_m_EndPoint_20() { return static_cast<int32_t>(offsetof(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88, ___m_EndPoint_20)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_m_EndPoint_20() const { return ___m_EndPoint_20; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_m_EndPoint_20() { return &___m_EndPoint_20; }
	inline void set_m_EndPoint_20(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___m_EndPoint_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EndPoint_20), (void*)value);
	}
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
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Net.IPAddress[]
struct IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * m_Items[1];

public:
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MethodInfo_t * m_Items[1];

public:
	inline MethodInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MethodInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MethodInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MethodInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MethodInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MethodInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m3B357BA0DCB9E5A38ACBDFCA728A40E7F83104FF_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m123D9273AFF968BD5C248D721870170B26FBEF6C_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_gshared (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_gshared (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m8EAE235A8AA510698BE04B4EC44DCA6979E58D29_gshared (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, uint8_t ___key0, const RuntimeMethod* method);
// !0 System.Func`1<System.Boolean>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, const RuntimeMethod* method);

// System.Void ExitGames.Client.Photon.SendOptions::set_Reliability(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOptions_set_Reliability_mF24CB7F6B67005976B51DC0BACF4C3FF1782B11E (SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E * __this, bool ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.Protocol18::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Protocol18__ctor_m27AEA016FA7CD73CF25166789D0D433C9EEA7D0B (Protocol18_t1382440B8DB2E3E20DEB341B824D368093B93C47 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.Protocol16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Protocol16__ctor_mE52EF48F8AB7B0D8DED1AE19007E13C3BAE71B3D (Protocol16_tB45C23B7BF100A5B796B76E7664272E2A9EF5DA1 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::ReportDebugOfLevel(ExitGames.Client.Photon.DebugLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380 (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, uint8_t ___levelOfMessage0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::EnqueueDebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket_EnqueueDebugReturn_m3EFE15EAC913CE16CDE0D9A811C2759F5D54EF7A (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, uint8_t ___debugLevel0, String_t* ___message1, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_State(ExitGames.Client.Photon.PhotonSocketState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IPhotonSocket_set_State_m3E012C91299675DDE497811E6E3C71072C5EAC14_inline (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SocketNative::egdisconnect(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketNative_egdisconnect_m67DFF2FD15EE17C564644E9741A9360AD1519D68 (intptr_t ___pConnectionHandler0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// ExitGames.Client.Photon.PhotonSocketState ExitGames.Client.Photon.IPhotonSocket::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.IPhotonSocket::get_Listener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IPhotonSocket_get_Listener_mE1767799EA32C7BBC23E3F1CE0F3E9DD1F508514 (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.SocketNative::egsend(System.IntPtr,System.Byte[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SocketNative_egsend_m1C16B14CD87B9865E1EF26552FA14C63FF9B847D (intptr_t ___pConnectionHandler0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___arr1, uint32_t ___size2, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.IPhotonSocket::get_ServerAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IPhotonSocket_get_ServerAddress_mC37D2749260619C6182508E30BFF8D267D4C06C5_inline (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleException(ExitGames.Client.Photon.StatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket_HandleException_mF7643306A79896E98986A71CA9E253F285E7056A (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, int32_t ___statusCode0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::.ctor(ExitGames.Client.Photon.PeerBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket__ctor_m71E6E6973C7EE5F9C600D5EE84E3CDF9B7043B0F (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * ___peerBase0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SocketTcp::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketTcp_Dispose_mE9359064FA4CCAF89DC7B3C5CF80FF26921F2B90 (SocketTcp_t6DA1B64C0FCE8B978387AB8EC153932CADD27F02 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.Socket::get_Connected()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Close_m24AB78F5DAC1C39BB7FFB30A9620B2B07E01DEEB (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPhotonSocket_Connect_mE8C1D75665883EF1B17833D074D00A24D00E927D (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, const RuntimeMethod* method);
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * ___start0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_Send_mF70EF17396CEA161F628B1923DA32463720D9A1E (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___size2, int32_t ___socketFlags3, const RuntimeMethod* method);
// System.Net.EndPoint System.Net.Sockets.Socket::get_LocalEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * Socket_get_LocalEndPoint_m327EB4A6DD9260037F648B5ABA719BB305D40EB0 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method);
// System.Net.EndPoint System.Net.Sockets.Socket::get_RemoteEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * Socket_get_RemoteEndPoint_m262E08E8CD25A908CB87450FC73683AB9DF636A7 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.Socket::get_IsBound()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Socket_get_IsBound_m67D559154A1B175E8B384DF0DBCC98EB0EA53830_inline (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.SupportClass::GetTickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportClass_GetTickCount_mDD38F1B27059098AE7B5CC7B2072AAFC43D2D145 (const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::get_AddressResolvedAsIpv6()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IPhotonSocket_get_AddressResolvedAsIpv6_m8B9FA46DEC433CF686621624F90CDA7BF94B10EE_inline (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, const RuntimeMethod* method);
// System.Net.IPAddress[] ExitGames.Client.Photon.IPhotonSocket::GetIpAddresses(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* IPhotonSocket_GetIpAddresses_m4C6A83421725E73E3C9E55A93B894327FAB905D6 (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, String_t* ___hostname0, const RuntimeMethod* method);
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline (IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket__ctor_m5A4B335AEC1450ABE31CF1151F3F5A93D9D0280C (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, int32_t ___addressFamily0, int32_t ___socketType1, int32_t ___protocolType2, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::set_NoDelay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_set_NoDelay_m34DCB8BF5275A85E1687308D0D016E860F229732 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.PeerBase::get_DisconnectTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PeerBase_get_DisconnectTimeout_mC0227A4EB0303EAA031894D38213189C83D750B9 (PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::set_ReceiveTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_set_ReceiveTimeout_mF081C1A1416112CE1ED3609594F76062B4B4DB23 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::set_SendTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_set_SendTimeout_mD92AF13D6A05318E6F892F0B145136138E2181E5 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.IPhotonSocket::get_ServerPort()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_ServerPort_m87E9048311458445C04EFE6CFAC0B672B9BC96CD_inline (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Connect(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Connect_mA7BB443E475AC35010CFB96E8F7091D34AC61247 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___address0, int32_t ___port1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306 (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::get_AddressFamily()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Socket_get_AddressFamily_m390B53FAAF0DFF8E8BE844F83AFB06D9E53D891B_inline (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_AddressResolvedAsIpv6(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IPhotonSocket_set_AddressResolvedAsIpv6_mC0250298B4648ED31FA30D7FCA8309A20DC6B2E8_inline (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, bool ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_ServerIpAddress(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IPhotonSocket_set_ServerIpAddress_m700599277934976851AB99868552BFB7DFFD356B_inline (String_t* ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.IPhotonSocket::get_MTU()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_MTU_m47C1172A728F33C1A9F152E3C6F90B586D0BE9C8 (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.StreamBuffer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer__ctor_mCD82E110B43F1667367053A5E72397A584E97B7E (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.StreamBuffer::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer_SetLength_m3556630F44704F5289A2D4C9A74CA313EBBE8C86 (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_Receive_mA08EE1F9A870791CECAAC2FA2D4144ACBA6B4962 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___size2, int32_t ___socketFlags3, const RuntimeMethod* method);
// System.Net.Sockets.SocketError System.Net.Sockets.SocketException::get_SocketErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketException_get_SocketErrorCode_m05A48632F6CC75FBD904E8E1AC56FC6B2577A131 (SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.SocketException::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketException__ctor_m4AA74DE46D28204456EFCCBBC5ACC841DA2941EF (SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * __this, int32_t ___errorCode0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleReceivedDatagram(System.Byte[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket_HandleReceivedDatagram_mCF72964805372D053B54F92E2BA4B53F9845FC07 (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___inBuffer0, int32_t ___length1, bool ___willBeReused2, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.PeerBase::get_TrafficStatsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PeerBase_get_TrafficStatsEnabled_m745BEA2E615BFFFD518E477AA0EA4C6CD7AC00B8 (PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PeerBase::get_TrafficStatsIncoming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * PeerBase_get_TrafficStatsIncoming_m67030FC7D58D6D219E6AA9323BE2F8AC9B8CB408 (PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::CountReliableOpCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_CountReliableOpCommand_m7E7C10B9007D42A130900FB011FCAF286F445FAB (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::CountUnreliableOpCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_CountUnreliableOpCommand_m07A3ACC43B0E5C619543A30799AA57F1C6236C23 (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.StreamBuffer::SetCapacityMinimum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer_SetCapacityMinimum_m059D9DC4DD33D770F55ED0CD4DE52F1EEE0A185A (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * __this, int32_t ___neededSize0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.StreamBuffer::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer_Write_m177FE649E0A724563BC39C5C690561260D365E5C (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___srcOffset1, int32_t ___count2, const RuntimeMethod* method);
// System.Byte[] ExitGames.Client.Photon.StreamBuffer::GetBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* StreamBuffer_GetBuffer_m2637CD4CB25C3B82A095F960BC10155293FA4D45 (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.StreamBuffer::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamBuffer_get_Position_mB61D5BDF4E82A966CFD147969A2553E4FC8ADBCB (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.StreamBuffer::set_Position(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer_set_Position_mAA9AE04E65AD59F2E361E9CE8278AE1ACE7F0ECC (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Byte[] ExitGames.Client.Photon.StreamBuffer::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* StreamBuffer_ToArray_m8DFFFA4DB1FEA0D3CC1B63B66A47B14A45907A99 (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.StreamBuffer::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamBuffer_get_Length_mAB8A53234D8D18994F517A80C8FA69CC480444CF (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SocketUdp::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketUdp_Dispose_mFD0D1EEDD507BE74D36127075E54C082DE579D0F (SocketUdp_tFB179A3EA0410DDDDCAAF22E21B1445810D4BAFA * __this, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_Receive_mD76EDDF7BFF5A9AB3D7FC197A13B8CF024DEC482 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725 (RuntimeArray * ___src0, int32_t ___srcOffset1, RuntimeArray * ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.StreamBuffer::CheckSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamBuffer_CheckSize_m9B122D8362435FB50F708B4EC207D7CB97951536 (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.IO.EndOfStreamException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfStreamException__ctor_m62AD97E22305B690B74C4EA6E3EAC36D10CE3800 (EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::.ctor()
inline void List_1__ctor_m3C888313B73CFAA9196022BCADD304B04ED400D2 (List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Add(!0)
inline void List_1_Add_m6C79F9A026ACCB196BD430F260975C794ED4BD9B (List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 * __this, MethodInfo_t * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 *, MethodInfo_t *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntegerMillisecondsDelegate_Invoke_m44C51909DB47602A5973F532806E64614AA4AF07 (IntegerMillisecondsDelegate_tFA09AD82FF54A8E784DF5B0AE0B27FDE48D70A9E * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mE9026AAB9A0969A773F0E43C836EBBF4BA574B05 (U3CU3Ec__DisplayClass6_0_t525AE973CC2659D877AEC9706B1BC60424D154A8 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Threading.Thread>::.ctor()
inline void List_1__ctor_m36355704B10200ABC2B12900E77E4A9987640F3C (List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_Name_m920049DFD1306F42613F13CF7AD74C03661F4BAE (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Threading.Thread>::Add(!0)
inline void List_1_Add_m383F9AF12DF2593726E7F63FE9438E8ECEA542BA (List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * __this, Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 *, Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Threading.Thread>::get_Count()
inline int32_t List_1_get_Count_mF4F192665FB9D652A220E87BD65C5EFF1AA3476D_inline (List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Diagnostics.Debug::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_WriteLine_m2B08D80ABA95E71F063FA07FB6BF1771C7799ED0 (String_t* ___message0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SupportClass::WriteStackTrace(System.Exception,System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportClass_WriteStackTrace_mBF7ADA2EAABB5EFCFDFA373589D1A1583FDF7510 (Exception_t * ___throwable0, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___stream1, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportClass_DictionaryToString_m91CAC3F4015753CE713D852742E8BE38E5D4059E (RuntimeObject* ___dictionary0, bool ___includeTypes1, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportClass_DictionaryToString_mC354B4124BE156344885F6C45345787CA433F604 (RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8846EB11F0A221BDE237DE041D17764B36065404 (String_t* ___separator0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m97C4AAABA51FCC2D426BD22FE05BEC045AB9D6F8 (StringBuilder_t * __this, String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m37B348187DD9186C2451ACCA3DBC4ABCD4632AD4 (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String System.BitConverter::ToString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BitConverter_ToString_mD476DB63219FD7C7FFB472ABEB04A8BB2D171F30 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method);
// System.UInt32[] ExitGames.Client.Photon.SupportClass::InitializeTable(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* SupportClass_InitializeTable_mB5CA35538B383D17DCBF916C674A6D736A493A4B (uint32_t ___polynomial0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegerMillisecondsDelegate__ctor_mF3E421A854961B378BBECDD5A1F32574040582B1 (IntegerMillisecondsDelegate_tFA09AD82FF54A8E784DF5B0AE0B27FDE48D70A9E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Byte[]>::.ctor(System.Int32)
inline void Queue_1__ctor_m77A700976BCE8508C7EEC542FA014BB67577F610 (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 *, int32_t, const RuntimeMethod*))Queue_1__ctor_m3B357BA0DCB9E5A38ACBDFCA728A40E7F83104FF_gshared)(__this, ___capacity0, method);
}
// System.Void ExitGames.Client.Photon.PeerBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase__ctor_mC53B466463778E5DD65096C9F985D28F667AD809 (PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase::InitPeerBase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase_InitPeerBase_m4FA936463FFAA85AECEA46897D2B0EB773CD465D (PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PeerBase::get_Listener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PeerBase_get_Listener_m383691FE451B45BDBC3E7280D12F16A7FCCF0509 (PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PeerBase::get_debugOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PeerBase_get_debugOut_mD36CF36130C16BD3F9480A2A81DC2B65305A0638 (PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase::set_ServerAddress(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PeerBase_set_ServerAddress_mBCE816CF33B01452174111254F1B86B1EA04BC69_inline (PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase::set_ProxyServerAddress(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PeerBase_set_ProxyServerAddress_mA0B000E3D8B55AF5CDAF626BBE6DABEE52EB593F_inline (PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>::.ctor()
inline void List_1__ctor_m317C461C1E14AC1BD319AA6CD3258B5833E41850 (List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.String ExitGames.Client.Photon.PeerBase::PepareWebSocketUrl(System.String,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PeerBase_PepareWebSocketUrl_mD4993B109B2762A594294F8950ADD0E86D520D34 (PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * __this, String_t* ___serverAddress0, String_t* ___appId1, RuntimeObject * ___customData2, const RuntimeMethod* method);
// System.Type ExitGames.Client.Photon.PeerBase::get_SocketImplementation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * PeerBase_get_SocketImplementation_m13FD5EFF0219DB29B9D256033241D560BEBB5DEC (PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * __this, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_mF3E09E8AC19EE563314B326117091D4B9CC918C1 (Type_t * ___type0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SocketTcp::.ctor(ExitGames.Client.Photon.PeerBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketTcp__ctor_mAAA906AF41E549320EA636E67F960AE91E112AC4 (SocketTcp_t6DA1B64C0FCE8B978387AB8EC153932CADD27F02 * __this, PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * ___npeer0, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.PeerBase::get_ServerAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PeerBase_get_ServerAddress_m09A47C70720235340C390D98A2277B8BF94CB288_inline (PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * __this, const RuntimeMethod* method);
// System.Byte[] ExitGames.Client.Photon.PeerBase::PrepareConnectData(System.String,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* PeerBase_PrepareConnectData_m7CD66D9D095DA0B65F8F7FB44A5391B62C2EA80C (PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * __this, String_t* ___serverAddress0, String_t* ___appID1, RuntimeObject * ___custom2, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TPeer::EnqueueInit(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_EnqueueInit_mF7D65C4459548F9FF2354EE6AE2F3B9CCD05DAC7 (TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Byte[]>::Clear()
inline void Queue_1_Clear_m83F66337973B90D44B04DA1302077D6CCA463BCB (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 *, const RuntimeMethod*))Queue_1_Clear_m123D9273AFF968BD5C248D721870170B26FBEF6C_gshared)(__this, method);
}
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueStatusCallback(ExitGames.Client.Photon.StatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase_EnqueueStatusCallback_m58613E00F19BEF9AB23B55D50E7517BE73842CF2 (PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * __this, int32_t ___statusValue0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TPeer::SendPing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_SendPing_m4B399854FCD3E0E647CE9042A64A44AD66265EA5 (TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.Protocol::Serialize(System.Int32,System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Protocol_Serialize_mBB601C9D17432A08A159105E2A7E2AAF9BB519D5 (int32_t ___value0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___target1, int32_t* ___targetOffset2, const RuntimeMethod* method);
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PeerBase::get_TrafficStatsOutgoing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * PeerBase_get_TrafficStatsOutgoing_m328B4CEC35B683E97258A6416744E9245283DD3D (PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalPacketCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalPacketCount_m608185872F34EA2B3A8FC72BC137F554D0C891EA_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_TotalPacketCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_TotalPacketCount_m2D07017330D78709B0F13D1079F01DCDE46C1788_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandsInPackets()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalCommandsInPackets_mF3FB9D78F73AA8CF2047A081E84A68DD449C0130_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_TotalCommandsInPackets(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_TotalCommandsInPackets_m2A4B5B4235859BE6DD2237BF0D3463846630A32D_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::CountControlCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_CountControlCommand_m1F3BADE16E8ED14581CB43FB50C0C00DA3E9ADEF (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.TPeer::EnqueueMessageAsPayload(ExitGames.Client.Photon.DeliveryMode,ExitGames.Client.Photon.StreamBuffer,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPeer_EnqueueMessageAsPayload_m831B8E40556A6FD07A355BD79D090827DBA55D11 (TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65 * __this, int32_t ___deliveryMode0, StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * ___opMessage1, uint8_t ___channelId2, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase/MyAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyAction__ctor_m4ECF3F683EBFF98616377DB6F31A5A354C1A603D (MyAction_tC825FCD41C6AA4314F2D66D0FF11992F6CBAC017 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueActionForDispatch(ExitGames.Client.Photon.PeerBase/MyAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase_EnqueueActionForDispatch_mC1EEE5B3EF1240737789D8CE22B2CFE26D299A86 (PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * __this, MyAction_tC825FCD41C6AA4314F2D66D0FF11992F6CBAC017 * ___action0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::get_Count()
inline int32_t Queue_1_get_Count_m27B008601F73A4AFC69DFA5FF40110D298744D7D_inline (Queue_1_t8436C2B4A16DF42BF18573DEDB0F4D5064C2B8AE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t8436C2B4A16DF42BF18573DEDB0F4D5064C2B8AE *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::Dequeue()
inline MyAction_tC825FCD41C6AA4314F2D66D0FF11992F6CBAC017 * Queue_1_Dequeue_mD1D7E79FFDA16CE4A8E84DF66F14C7BF490D5138 (Queue_1_t8436C2B4A16DF42BF18573DEDB0F4D5064C2B8AE * __this, const RuntimeMethod* method)
{
	return ((  MyAction_tC825FCD41C6AA4314F2D66D0FF11992F6CBAC017 * (*) (Queue_1_t8436C2B4A16DF42BF18573DEDB0F4D5064C2B8AE *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// System.Void ExitGames.Client.Photon.PeerBase/MyAction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyAction_Invoke_m919C8F75ACF20A06CFE09588173962C600052C34 (MyAction_tC825FCD41C6AA4314F2D66D0FF11992F6CBAC017 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Byte[]>::get_Count()
inline int32_t Queue_1_get_Count_m1D55723B47270D04849E24BC09480DCD17C0CEBA_inline (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<System.Byte[]>::Dequeue()
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Queue_1_Dequeue_m2EA4ED50C9D3AFC5608B9ACDF7C611D244872F0D (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// System.Void ExitGames.Client.Photon.StreamBuffer::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer__ctor_m359C02BE509B1FA8594480BA59FC8500681F464F (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf0, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPhotonSocket_get_Connected_mF4FC07D90A5CF561AEF88E3248F84CD3D46DE9EB (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.PeerBase::get_timeInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PeerBase_get_timeInt_m1E1E3B2BC3A1E62FCBDD98EE9AF6B0AB49929D66 (PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.PeerBase::get_timePingInterval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PeerBase_get_timePingInterval_mC4FDEF910DDAFAD59491D4D1449A9FBF804B240A (PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>::get_Item(System.Int32)
inline StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * List_1_get_Item_m5E1CC2412904B8E2604B5BA8296F55109C633442_inline (List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * (*) (List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void ExitGames.Client.Photon.TPeer::SendData(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_SendData_m299CD3002DB0E3FA0A804030E063C0363443A20F (TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___length1, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase::MessageBufferPoolPut(ExitGames.Client.Photon.StreamBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase_MessageBufferPoolPut_m959FE967A50DE44E8B8C40EE995FB62B012B14F8 (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * ___buff0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>::get_Count()
inline int32_t List_1_get_Count_m861458629F616BF514394E7BBA1E6AD2B2570E25_inline (List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>::Clear()
inline void List_1_Clear_mF58D22F35D225408FD85AED23F90A8650B555E06 (List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Byte ExitGames.Client.Photon.PeerBase::get_ChannelCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PeerBase_get_ChannelCount_m2ED2B31EDEA73E83E453CE76C4E2523E7BB172B5 (PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.StreamBuffer ExitGames.Client.Photon.PeerBase::MessageBufferPoolGet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * PeerBase_MessageBufferPoolGet_mA53C1CE161627D76D130B05B015506C55BC257A8 (const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, RuntimeObject * ___actualValue1, String_t* ___message2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>::Add(!0)
inline void List_1_Add_m791BCFDD5F935FDC5E54CA8742E870ACA926689B (List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12 * __this, StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12 *, StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PeerBase::get_TrafficStatsGameLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * PeerBase_get_TrafficStatsGameLevel_m004F540D39B278D32344189978D5672630FC3552 (PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::CountOperation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_CountOperation_mD54E8BD76B50DE47B7E6CADDDD8C23D81CD13B05 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___operationBytes0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor()
inline void Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, const RuntimeMethod*))Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1)
inline void Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947 (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, uint8_t, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_gshared)(__this, ___key0, ___value1, method);
}
// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::get_NetworkSimulationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkSimulationSet_t4A1C331EC3287275813D225F252C36EF3DE2AE4C * PeerBase_get_NetworkSimulationSettings_mE26E11AAC2C9E9E3E734336ADAF0BBBC88DD25A1 (PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * __this, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.NetworkSimulationSet::get_IsSimulationEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkSimulationSet_get_IsSimulationEnabled_m2CD09604AD6A7620BC4D49CEE0A202674E712CF1 (NetworkSimulationSet_t4A1C331EC3287275813D225F252C36EF3DE2AE4C * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase::SendNetworkSimulated(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase_SendNetworkSimulated_m50A38974B0F8A5F48D05E61F0098C27A52CB5DA1 (PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___dataToSend0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SupportClass::WriteStackTrace(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportClass_WriteStackTrace_m48F93451487D9B87081A6F40B515939133AB5E51 (Exception_t * ___throwable0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueDebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase_EnqueueDebugReturn_m0C1DD16A5285EDA74381182E039486EC1963FB34 (PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * __this, uint8_t ___level0, String_t* ___debugReturn1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Byte[]>::Enqueue(!0)
inline void Queue_1_Enqueue_m7970BCC9C6190DE84A9EAE57CF52472B3795380A (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*))Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared)(__this, ___item0, method);
}
// System.Void ExitGames.Client.Photon.TPeer::ReadPingResult(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_ReadPingResult_mB8F5CE468BFCB27F3765349831929E64763E9F07 (TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___inbuff0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.Protocol::Deserialize(System.Int32&,System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Protocol_Deserialize_m72F597869310FFE1FB9D7FDA4194D07CEC6D5E94 (int32_t* ___value0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___source1, int32_t* ___offset2, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase::UpdateRoundTripTimeAndVariance(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase_UpdateRoundTripTimeAndVariance_m0F0F98CA6B9BBB9A4A7774E6307BF76408C9A9CC (PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * __this, int32_t ___lastRoundtripTime0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_m8EAE235A8AA510698BE04B4EC44DCA6979E58D29 (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, uint8_t ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, uint8_t, const RuntimeMethod*))Dictionary_2_get_Item_m8EAE235A8AA510698BE04B4EC44DCA6979E58D29_gshared)(__this, ___key0, method);
}
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_PackageHeaderSize(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_PackageHeaderSize_m329D3967A6F6B46754851CC379837AD2C8786248_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ReliableCommandBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ReliableCommandBytes_m04718249CD1C4442B781C141DA2FD2C8125EE5D2_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_UnreliableCommandBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_UnreliableCommandBytes_m8506C7BE4F04E675C0089A3AC023E8BD28ABC76B_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_FragmentCommandBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_FragmentCommandBytes_mBD296E8D5A90D6BD30D850BDA7100C7DFE41A3F3_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ControlCommandBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ControlCommandBytes_mEC0F5A3F691E0E049D235CE3B4877F5A0C74C22F_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalCommandBytes_m9FD02B5EF78357E3F1BED6A5CB72D51A50BD432C (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_PackageHeaderSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_PackageHeaderSize_mDE76ACAB46B4639FDE0EB7EF773DDFBD6609E449_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_ControlCommandBytes(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ControlCommandBytes_mEA50B961FA3BEFF89A78DB1AE17E79E1BC6B11D2_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ControlCommandCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ControlCommandCount_m026E794FF80AA93016416590955E269D15B6D249_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_ControlCommandCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ControlCommandCount_mB7F382CF2607264D46D713674601632599717B15_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_ReliableCommandBytes(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ReliableCommandBytes_mFBBE10414D00CE7D29F3B9823848330EEB0FA64B_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ReliableCommandCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ReliableCommandCount_mD2657BD0EDFE74A39AA88CAC60975F4C2BD515C0_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_ReliableCommandCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ReliableCommandCount_m1F9ECE9135A8CECC1DC28C87462139A6330819F4_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_UnreliableCommandBytes(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_UnreliableCommandBytes_m2BB8A3F13E60BAD0AA3A0C7EAF9B9EBF719FE753_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_UnreliableCommandCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_UnreliableCommandCount_m91FB9C2F30A054D67F477755601FD1D82A23375F_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_UnreliableCommandCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_UnreliableCommandCount_m49AEEFE91F07241FDB30484C3971C264FB04B3A1_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_FragmentCommandBytes(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_FragmentCommandBytes_mC2833B3F028419D19BB83358993D02A7D638A145_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_FragmentCommandCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_FragmentCommandCount_mE731A5BD2EDA4F9CC4751ADCD3ED8319F3AF4D02_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_FragmentCommandCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_FragmentCommandCount_m43A7AFA2ED06F1CE0BE5F2C3F7EA1D95E8590334_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalPacketBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalPacketBytes_m867682D40D3F415706D7C3385BB7306A590F88C8 (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_OperationCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_OperationCount_m61623EACDD968BDDEE2644723859743E9EEFCD43_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_ResultCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_ResultCount_m99795E62ED93B4F3127B614D8B7102BAF9065456_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_EventCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_EventCount_mB9DBE07DB1415BA94CDE2E5F6302435B6E4AC365_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_OperationByteCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_OperationByteCount_m7B2C20D8D7C277D4F77039F78D1956EF5963E3B7_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_OperationByteCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_OperationByteCount_m864ED7436CDB85D762DD77AE968642FA8B72A851_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_OperationCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_OperationCount_m8C635294CA4A8BD9E6CF17483F7B22C5EF899475_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_ResultByteCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_ResultByteCount_m2527CDECE3CC03F803121B2BBE72B418C4A01C17_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_ResultByteCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_ResultByteCount_m5D5642D6479D6D0F01A6ADFD61C7945E580A3E74_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_ResultCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_ResultCount_m4642BF78251131A5B3FAE090F307329A37CE469B_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_EventByteCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_EventByteCount_m7763AB2CEF3FB7D4A35546CA0EC89686D24D9C7A_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_EventByteCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_EventByteCount_m9BC0673D942893D8364633AF0D74200C6E25AF8D_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_EventCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_EventCount_m3494775084CF4444B99359F393170B3D4324C4F1_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestOpResponseCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestOpResponseCallback_m91AEC3E69AF80132674B96129DCEEA187B77CC2C_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestOpResponseCallback(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestOpResponseCallback_m4FDD926A23F6AB9B8B8BC3E00D8FD229976BC966_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestOpResponseCallbackOpCode(System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m33C3CD50E6C60E98372128E3D484C66965B6B893_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestEventCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestEventCallback_m34E28B192A4B171DFD898A04C5E00F04ED723B56_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestEventCallback(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestEventCallback_m18FA4AC4DB062A42B4288F235C0C85D7B4AB3FDC_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestEventCallbackCode(System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestEventCallbackCode_mF50720C5AD01CC2BFFE259E67C9985E8DCF47D9D_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestMessageCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestMessageCallback_m63D3F75C2DEE203AFFAE9A79097302AEB5149F1A_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestMessageCallback(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestMessageCallback_mF6BC881F3943EF24403FB38484DDB6EE441E879B_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestRawMessageCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestRawMessageCallback_m9A933EED8E91F7A1A22E817A8FF018E3181CB1B4_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestRawMessageCallback(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestRawMessageCallback_m860F94B6D10D574F1AF597FF9794B4C5748EE4D0_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestDeltaBetweenDispatching()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m36EC17217EB7B8D72234AD1FF40093E8373CFEBD_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestDeltaBetweenDispatching(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_m3C1FB50D9A0E60490595CFC04F63E23FBEFADDC9_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_DispatchIncomingCommandsCalls()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m4A81DD26276510308CE3A5F0DF1A71F50D5089FE_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_DispatchIncomingCommandsCalls(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_mA71298D91EFBB72603A4851C5E4FA422C571F1D2_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestDeltaBetweenSending()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m0DAE8C894F2D78AEC98F47039C664DDD0B838C0F_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestDeltaBetweenSending(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m9B3D50017E4056D6F2517B4358E189086C426387_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_SendOutgoingCommandsCalls()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m34CACEB62C0B8521ED0E3F7C2462397CF2844C97_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_SendOutgoingCommandsCalls(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_mB0E01F167C7AB9BB57F04B8F84E43CD9BE45A54C_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestEventCallbackCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t TrafficStatsGameLevel_get_LongestEventCallbackCode_m16D24A9E9234048A41B04638BBE5D9533D95B554_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method);
// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestOpResponseCallbackOpCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_mFFE8772E80AF7E4038025DDDF6C8822965AC3B74_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m57F659051F3A9147D73FDF8F878ADA7302895B3E (U3CU3Ec_t2D8D1E94B69E582A8C0C13685C2552A5222E2716 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SupportClass/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2EB1BFF2E31E7EF24A082E59DF62231823B3CEDB (U3CU3Ec_tE76D54910C712C6B8061D714E4BEF54AB4280F63 * __this, const RuntimeMethod* method);
// System.Int32 System.Environment::get_TickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_mBA4279B1C0BC197BF2121166E7C1F6A46D2B5D4E (const RuntimeMethod* method);
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC (int32_t ___millisecondsTimeout0, const RuntimeMethod* method);
// !0 System.Func`1<System.Boolean>::Invoke()
inline bool Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, const RuntimeMethod*))Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_gshared)(__this, method);
}
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05 (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonSocketPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL egdisconnect(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonSocketPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL egsend(intptr_t, uint8_t*, uint32_t);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: ExitGames.Client.Photon.SendOptions
IL2CPP_EXTERN_C void SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E_marshal_pinvoke(const SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E& unmarshaled, SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E_marshaled_pinvoke& marshaled)
{
	marshaled.___DeliveryMode_2 = unmarshaled.get_DeliveryMode_2();
	marshaled.___Encrypt_3 = static_cast<int32_t>(unmarshaled.get_Encrypt_3());
	marshaled.___Channel_4 = unmarshaled.get_Channel_4();
}
IL2CPP_EXTERN_C void SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E_marshal_pinvoke_back(const SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E_marshaled_pinvoke& marshaled, SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E& unmarshaled)
{
	int32_t unmarshaled_DeliveryMode_temp_0 = 0;
	unmarshaled_DeliveryMode_temp_0 = marshaled.___DeliveryMode_2;
	unmarshaled.set_DeliveryMode_2(unmarshaled_DeliveryMode_temp_0);
	bool unmarshaled_Encrypt_temp_1 = false;
	unmarshaled_Encrypt_temp_1 = static_cast<bool>(marshaled.___Encrypt_3);
	unmarshaled.set_Encrypt_3(unmarshaled_Encrypt_temp_1);
	uint8_t unmarshaled_Channel_temp_2 = 0x0;
	unmarshaled_Channel_temp_2 = marshaled.___Channel_4;
	unmarshaled.set_Channel_4(unmarshaled_Channel_temp_2);
}
// Conversion method for clean up from marshalling of: ExitGames.Client.Photon.SendOptions
IL2CPP_EXTERN_C void SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E_marshal_pinvoke_cleanup(SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ExitGames.Client.Photon.SendOptions
IL2CPP_EXTERN_C void SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E_marshal_com(const SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E& unmarshaled, SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E_marshaled_com& marshaled)
{
	marshaled.___DeliveryMode_2 = unmarshaled.get_DeliveryMode_2();
	marshaled.___Encrypt_3 = static_cast<int32_t>(unmarshaled.get_Encrypt_3());
	marshaled.___Channel_4 = unmarshaled.get_Channel_4();
}
IL2CPP_EXTERN_C void SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E_marshal_com_back(const SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E_marshaled_com& marshaled, SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E& unmarshaled)
{
	int32_t unmarshaled_DeliveryMode_temp_0 = 0;
	unmarshaled_DeliveryMode_temp_0 = marshaled.___DeliveryMode_2;
	unmarshaled.set_DeliveryMode_2(unmarshaled_DeliveryMode_temp_0);
	bool unmarshaled_Encrypt_temp_1 = false;
	unmarshaled_Encrypt_temp_1 = static_cast<bool>(marshaled.___Encrypt_3);
	unmarshaled.set_Encrypt_3(unmarshaled_Encrypt_temp_1);
	uint8_t unmarshaled_Channel_temp_2 = 0x0;
	unmarshaled_Channel_temp_2 = marshaled.___Channel_4;
	unmarshaled.set_Channel_4(unmarshaled_Channel_temp_2);
}
// Conversion method for clean up from marshalling of: ExitGames.Client.Photon.SendOptions
IL2CPP_EXTERN_C void SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E_marshal_com_cleanup(SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E_marshaled_com& marshaled)
{
}
// System.Void ExitGames.Client.Photon.SendOptions::set_Reliability(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOptions_set_Reliability_mF24CB7F6B67005976B51DC0BACF4C3FF1782B11E (SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E * __this, bool ___value0, const RuntimeMethod* method)
{
	SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E * G_B2_0 = NULL;
	SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E * G_B3_1 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0008;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0009;
	}

IL_0008:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0009:
	{
		G_B3_1->set_DeliveryMode_2(G_B3_0);
		return;
	}
}
IL2CPP_EXTERN_C  void SendOptions_set_Reliability_mF24CB7F6B67005976B51DC0BACF4C3FF1782B11E_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E * _thisAdjusted = reinterpret_cast<SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E *>(__this + _offset);
	SendOptions_set_Reliability_mF24CB7F6B67005976B51DC0BACF4C3FF1782B11E(_thisAdjusted, ___value0, method);
}
// System.Void ExitGames.Client.Photon.SendOptions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOptions__cctor_mC7E7914E9C5A341CC4DD59226D8E42A18F66391D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E ));
		SendOptions_set_Reliability_mF24CB7F6B67005976B51DC0BACF4C3FF1782B11E((SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E *)(&V_0), (bool)1, /*hidden argument*/NULL);
		SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E  L_0 = V_0;
		((SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E_il2cpp_TypeInfo_var))->set_SendReliable_0(L_0);
		il2cpp_codegen_initobj((&V_0), sizeof(SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E ));
		SendOptions_set_Reliability_mF24CB7F6B67005976B51DC0BACF4C3FF1782B11E((SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E *)(&V_0), (bool)0, /*hidden argument*/NULL);
		SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E  L_1 = V_0;
		((SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E_il2cpp_TypeInfo_var))->set_SendUnreliable_1(L_1);
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
// ExitGames.Client.Photon.IProtocol ExitGames.Client.Photon.SerializationProtocolFactory::Create(ExitGames.Client.Photon.SerializationProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IProtocol_tE34131CF5A8A0FF12F4C6264A2B3BCB449F4174A * SerializationProtocolFactory_Create_m3F370348C063AC6BA2A0484350A966994933BAD2 (int32_t ___serializationProtocol0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Protocol16_tB45C23B7BF100A5B796B76E7664272E2A9EF5DA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Protocol18_t1382440B8DB2E3E20DEB341B824D368093B93C47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	IProtocol_tE34131CF5A8A0FF12F4C6264A2B3BCB449F4174A * V_1 = NULL;
	{
		int32_t L_0 = ___serializationProtocol0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		goto IL_0011;
	}

IL_0009:
	{
		Protocol18_t1382440B8DB2E3E20DEB341B824D368093B93C47 * L_2 = (Protocol18_t1382440B8DB2E3E20DEB341B824D368093B93C47 *)il2cpp_codegen_object_new(Protocol18_t1382440B8DB2E3E20DEB341B824D368093B93C47_il2cpp_TypeInfo_var);
		Protocol18__ctor_m27AEA016FA7CD73CF25166789D0D433C9EEA7D0B(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_0019;
	}

IL_0011:
	{
		Protocol16_tB45C23B7BF100A5B796B76E7664272E2A9EF5DA1 * L_3 = (Protocol16_tB45C23B7BF100A5B796B76E7664272E2A9EF5DA1 *)il2cpp_codegen_object_new(Protocol16_tB45C23B7BF100A5B796B76E7664272E2A9EF5DA1_il2cpp_TypeInfo_var);
		Protocol16__ctor_mE52EF48F8AB7B0D8DED1AE19007E13C3BAE71B3D(L_3, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0019;
	}

IL_0019:
	{
		IProtocol_tE34131CF5A8A0FF12F4C6264A2B3BCB449F4174A * L_4 = V_1;
		return L_4;
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
// System.Void ExitGames.Client.Photon.SerializeMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializeMethod__ctor_m0D71CE7C3018B35FB76A6D17FFA454572C4E73A6 (SerializeMethod_t390646D2A9C94E6966CA88C4A16C97F711D9D4AC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Byte[] ExitGames.Client.Photon.SerializeMethod::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* SerializeMethod_Invoke_mD159075E363FCFBE2F34148B7EFB3A001AD30373 (SerializeMethod_t390646D2A9C94E6966CA88C4A16C97F711D9D4AC * __this, RuntimeObject * ___customObject0, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___customObject0, targetMethod);
			}
			else
			{
				// closed
				typedef ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___customObject0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(targetMethod, ___customObject0);
					else
						result = GenericVirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(targetMethod, ___customObject0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___customObject0);
					else
						result = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___customObject0);
				}
			}
			else
			{
				typedef ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___customObject0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, RuntimeObject * >::Invoke(targetMethod, targetThis, ___customObject0);
					else
						result = GenericVirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, RuntimeObject * >::Invoke(targetMethod, targetThis, ___customObject0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___customObject0);
					else
						result = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___customObject0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___customObject0, targetMethod);
				}
				else
				{
					typedef ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___customObject0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult ExitGames.Client.Photon.SerializeMethod::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializeMethod_BeginInvoke_mA4896AC4FBDCE5A0DE1FA276FD233C27AA3A407D (SerializeMethod_t390646D2A9C94E6966CA88C4A16C97F711D9D4AC * __this, RuntimeObject * ___customObject0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___customObject0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Byte[] ExitGames.Client.Photon.SerializeMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* SerializeMethod_EndInvoke_mD8D7FA45812FB29DEE11AB4A4295D9E4B01DD571 (SerializeMethod_t390646D2A9C94E6966CA88C4A16C97F711D9D4AC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitGames.Client.Photon.SerializeStreamMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializeStreamMethod__ctor_m6E85219E59CD9A8271F7331857241897A4F6EF61 (SerializeStreamMethod_t5E36C0898409DCF68798F12D4899F2255F289DC5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int16 ExitGames.Client.Photon.SerializeStreamMethod::Invoke(ExitGames.Client.Photon.StreamBuffer,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t SerializeStreamMethod_Invoke_mFA4729AD2F7C9D6314629320B169A4A0DD2A7BE3 (SerializeStreamMethod_t5E36C0898409DCF68798F12D4899F2255F289DC5 * __this, StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * ___outStream0, RuntimeObject * ___customObject1, const RuntimeMethod* method)
{
	int16_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef int16_t (*FunctionPointerType) (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___outStream0, ___customObject1, targetMethod);
			}
			else
			{
				// closed
				typedef int16_t (*FunctionPointerType) (void*, StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___outStream0, ___customObject1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< int16_t, RuntimeObject * >::Invoke(targetMethod, ___outStream0, ___customObject1);
					else
						result = GenericVirtFuncInvoker1< int16_t, RuntimeObject * >::Invoke(targetMethod, ___outStream0, ___customObject1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< int16_t, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___outStream0, ___customObject1);
					else
						result = VirtFuncInvoker1< int16_t, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___outStream0, ___customObject1);
				}
			}
			else
			{
				typedef int16_t (*FunctionPointerType) (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___outStream0, ___customObject1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int16_t, StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___outStream0, ___customObject1);
					else
						result = GenericVirtFuncInvoker2< int16_t, StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___outStream0, ___customObject1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int16_t, StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___outStream0, ___customObject1);
					else
						result = VirtFuncInvoker2< int16_t, StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___outStream0, ___customObject1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef int16_t (*FunctionPointerType) (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F *, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___outStream0, ___customObject1, targetMethod);
				}
				else
				{
					typedef int16_t (*FunctionPointerType) (void*, StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F *, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___outStream0, ___customObject1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult ExitGames.Client.Photon.SerializeStreamMethod::BeginInvoke(ExitGames.Client.Photon.StreamBuffer,System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializeStreamMethod_BeginInvoke_m007F896CF4710AC8C03E2011F56D90EF832CD8B0 (SerializeStreamMethod_t5E36C0898409DCF68798F12D4899F2255F289DC5 * __this, StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * ___outStream0, RuntimeObject * ___customObject1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___outStream0;
	__d_args[1] = ___customObject1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Int16 ExitGames.Client.Photon.SerializeStreamMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t SerializeStreamMethod_EndInvoke_mFEDC6BCD5527A6BF283B69DF0CC89C34BD5EE785 (SerializeStreamMethod_t5E36C0898409DCF68798F12D4899F2255F289DC5 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int16_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitGames.Client.Photon.SimulationItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulationItem__ctor_mADE77D6A5E6EB91A4EE89558C32432F1D4D5DAC8 (SimulationItem_t3318AB795652255E3A5C52FFE136E586CFE57076 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_0 = (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)il2cpp_codegen_object_new(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7(L_0, /*hidden argument*/NULL);
		__this->set_stopw_0(L_0);
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_1 = __this->get_stopw_0();
		Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.SimulationItem::get_Delay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimulationItem_get_Delay_m9B451FD7F4C2DD4CCA0EE81EE2F67668B7314030 (SimulationItem_t3318AB795652255E3A5C52FFE136E586CFE57076 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CDelayU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.SimulationItem::set_Delay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulationItem_set_Delay_m0EFCF7BFF3CA8F78FCD5C29162BCF5C9942EFC43 (SimulationItem_t3318AB795652255E3A5C52FFE136E586CFE57076 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CDelayU3Ek__BackingField_3(L_0);
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
// System.Void ExitGames.Client.Photon.SocketNative::egdisconnect(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketNative_egdisconnect_m67DFF2FD15EE17C564644E9741A9360AD1519D68 (intptr_t ___pConnectionHandler0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonSocketPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonSocketPlugin"), "egdisconnect", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonSocketPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(egdisconnect)(___pConnectionHandler0);
	#else
	il2cppPInvokeFunc(___pConnectionHandler0);
	#endif

}
// System.Boolean ExitGames.Client.Photon.SocketNative::egsend(System.IntPtr,System.Byte[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SocketNative_egsend_m1C16B14CD87B9865E1EF26552FA14C63FF9B847D (intptr_t ___pConnectionHandler0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___arr1, uint32_t ___size2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PhotonSocketPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonSocketPlugin"), "egsend", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___arr1' to native representation
	uint8_t* ____arr1_marshaled = NULL;
	if (___arr1 != NULL)
	{
		____arr1_marshaled = reinterpret_cast<uint8_t*>((___arr1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PhotonSocketPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(egsend)(___pConnectionHandler0, ____arr1_marshaled, ___size2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___pConnectionHandler0, ____arr1_marshaled, ___size2);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean ExitGames.Client.Photon.SocketNative::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SocketNative_Disconnect_m1BCEFFA1ADC000297105B2AB524BE3A208F1364C (SocketNative_t4955989E680FD53BE6ECDCC6BCEE93BA28208032 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketNative_t4955989E680FD53BE6ECDCC6BCEE93BA28208032_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5D2CD2003AC311D1311272EE1AF3A6A597BFE17);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	Exception_t * V_3 = NULL;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		bool L_0;
		L_0 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(__this, 3, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		IPhotonSocket_EnqueueDebugReturn_m3EFE15EAC913CE16CDE0D9A811C2759F5D54EF7A(__this, 3, _stringLiteralC5D2CD2003AC311D1311272EE1AF3A6A597BFE17, /*hidden argument*/NULL);
	}

IL_001b:
	{
		IPhotonSocket_set_State_m3E012C91299675DDE497811E6E3C71072C5EAC14_inline(__this, 3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SocketNative_t4955989E680FD53BE6ECDCC6BCEE93BA28208032_il2cpp_TypeInfo_var);
		RuntimeObject * L_2 = ((SocketNative_t4955989E680FD53BE6ECDCC6BCEE93BA28208032_StaticFields*)il2cpp_codegen_static_fields_for(SocketNative_t4955989E680FD53BE6ECDCC6BCEE93BA28208032_il2cpp_TypeInfo_var))->get_syncer_12();
		V_1 = L_2;
		RuntimeObject * L_3 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_3, /*hidden argument*/NULL);
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_4 = __this->get_pConnectionHandler_11();
			bool L_5;
			L_5 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
			V_2 = L_5;
			bool L_6 = V_2;
			if (!L_6)
			{
				goto IL_007a;
			}
		}

IL_0045:
		{
		}

IL_0046:
		try
		{ // begin try (depth: 2)
			intptr_t L_7 = __this->get_pConnectionHandler_11();
			IL2CPP_RUNTIME_CLASS_INIT(SocketNative_t4955989E680FD53BE6ECDCC6BCEE93BA28208032_il2cpp_TypeInfo_var);
			SocketNative_egdisconnect_m67DFF2FD15EE17C564644E9741A9360AD1519D68((intptr_t)L_7, /*hidden argument*/NULL);
			__this->set_pConnectionHandler_11((intptr_t)(0));
			goto IL_0079;
		} // end try (depth: 2)
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
			V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			Exception_t * L_8 = V_3;
			String_t* L_9;
			L_9 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA2076A563A22DA628C30B53A80EA51616D9C8C7C)), L_8, /*hidden argument*/NULL);
			IPhotonSocket_EnqueueDebugReturn_m3EFE15EAC913CE16CDE0D9A811C2759F5D54EF7A(__this, 3, L_9, /*hidden argument*/NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0079;
		} // end catch (depth: 2)

IL_0079:
		{
		}

IL_007a:
		{
			IL2CPP_LEAVE(0x85, FINALLY_007d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007d;
	}

FINALLY_007d:
	{ // begin finally (depth: 1)
		RuntimeObject * L_10 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(125)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x85, IL_0085)
	}

IL_0085:
	{
		IPhotonSocket_set_State_m3E012C91299675DDE497811E6E3C71072C5EAC14_inline(__this, 0, /*hidden argument*/NULL);
		V_4 = (bool)1;
		goto IL_0092;
	}

IL_0092:
	{
		bool L_11 = V_4;
		return L_11;
	}
}
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketNative::Send(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketNative_Send_mA768C231CDAB053A0FF24C9A905ECBBC11E33480 (SocketNative_t4955989E680FD53BE6ECDCC6BCEE93BA28208032 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketNative_t4955989E680FD53BE6ECDCC6BCEE93BA28208032_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6694B5F6F3666B90EF97D3CC74C9D8B36A63411A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	bool V_4 = false;
	Exception_t * V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	int32_t G_B14_0 = 0;
	{
		int32_t L_0;
		L_0 = IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		V_1 = 1;
		goto IL_00f3;
	}

IL_0019:
	{
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			bool L_2;
			L_2 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(__this, 5, /*hidden argument*/NULL);
			V_2 = L_2;
			bool L_3 = V_2;
			if (!L_3)
			{
				goto IL_0045;
			}
		}

IL_0026:
		{
			RuntimeObject* L_4;
			L_4 = IPhotonSocket_get_Listener_mE1767799EA32C7BBC23E3F1CE0F3E9DD1F508514(__this, /*hidden argument*/NULL);
			int32_t L_5 = ___length1;
			int32_t L_6 = L_5;
			RuntimeObject * L_7 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_6);
			String_t* L_8;
			L_8 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteral6694B5F6F3666B90EF97D3CC74C9D8B36A63411A, L_7, /*hidden argument*/NULL);
			InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var, L_4, 5, L_8);
		}

IL_0045:
		{
			IL2CPP_RUNTIME_CLASS_INIT(SocketNative_t4955989E680FD53BE6ECDCC6BCEE93BA28208032_il2cpp_TypeInfo_var);
			RuntimeObject * L_9 = ((SocketNative_t4955989E680FD53BE6ECDCC6BCEE93BA28208032_StaticFields*)il2cpp_codegen_static_fields_for(SocketNative_t4955989E680FD53BE6ECDCC6BCEE93BA28208032_il2cpp_TypeInfo_var))->get_syncer_12();
			V_3 = L_9;
			RuntimeObject * L_10 = V_3;
			Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_10, /*hidden argument*/NULL);
		}

IL_0052:
		try
		{ // begin try (depth: 2)
			{
				intptr_t L_11 = __this->get_pConnectionHandler_11();
				bool L_12;
				L_12 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_11, (intptr_t)(0), /*hidden argument*/NULL);
				V_4 = L_12;
				bool L_13 = V_4;
				if (!L_13)
				{
					goto IL_0079;
				}
			}

IL_0069:
			{
				intptr_t L_14 = __this->get_pConnectionHandler_11();
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = ___data0;
				int32_t L_16 = ___length1;
				IL2CPP_RUNTIME_CLASS_INIT(SocketNative_t4955989E680FD53BE6ECDCC6BCEE93BA28208032_il2cpp_TypeInfo_var);
				bool L_17;
				L_17 = SocketNative_egsend_m1C16B14CD87B9865E1EF26552FA14C63FF9B847D((intptr_t)L_14, L_15, L_16, /*hidden argument*/NULL);
			}

IL_0079:
			{
				IL2CPP_LEAVE(0x84, FINALLY_007c);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_007c;
		}

FINALLY_007c:
		{ // begin finally (depth: 2)
			RuntimeObject * L_18 = V_3;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_18, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(124)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(124)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x84, IL_0084)
		}

IL_0084:
		{
			goto IL_00ef;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0087;
		}
		throw e;
	}

CATCH_0087:
	{ // begin catch(System.Exception)
		{
			V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			int32_t L_19;
			L_19 = IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline(__this, /*hidden argument*/NULL);
			if ((((int32_t)L_19) == ((int32_t)3)))
			{
				goto IL_009e;
			}
		}

IL_0093:
		{
			int32_t L_20;
			L_20 = IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline(__this, /*hidden argument*/NULL);
			G_B14_0 = ((!(((uint32_t)L_20) <= ((uint32_t)0)))? 1 : 0);
			goto IL_009f;
		}

IL_009e:
		{
			G_B14_0 = 0;
		}

IL_009f:
		{
			V_6 = (bool)G_B14_0;
			bool L_21 = V_6;
			if (!L_21)
			{
				goto IL_00eb;
			}
		}

IL_00a5:
		{
			bool L_22;
			L_22 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(__this, 3, /*hidden argument*/NULL);
			V_7 = L_22;
			bool L_23 = V_7;
			if (!L_23)
			{
				goto IL_00de;
			}
		}

IL_00b3:
		{
			RuntimeObject* L_24;
			L_24 = IPhotonSocket_get_Listener_mE1767799EA32C7BBC23E3F1CE0F3E9DD1F508514(__this, /*hidden argument*/NULL);
			String_t* L_25;
			L_25 = IPhotonSocket_get_ServerAddress_mC37D2749260619C6182508E30BFF8D267D4C06C5_inline(__this, /*hidden argument*/NULL);
			Exception_t * L_26 = V_5;
			String_t* L_27;
			L_27 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_26);
			String_t* L_28;
			L_28 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6A328C89F6BA1B16C6636D0A5824840B5CFB5593)), L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA04D4286952D44B4CB5C87E7D30E05FE4153434)), L_27, /*hidden argument*/NULL);
			InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var)), L_24, 3, L_28);
		}

IL_00de:
		{
			IPhotonSocket_HandleException_mF7643306A79896E98986A71CA9E253F285E7056A(__this, ((int32_t)1030), /*hidden argument*/NULL);
		}

IL_00eb:
		{
			V_1 = 3;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00f3;
		}
	} // end catch (depth: 1)

IL_00ef:
	{
		V_1 = 0;
		goto IL_00f3;
	}

IL_00f3:
	{
		int32_t L_29 = V_1;
		return L_29;
	}
}
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketNative::Receive(System.Byte[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketNative_Receive_mC0F35CC18FC04E224F6D1590F8BE362335CFC4B2 (SocketNative_t4955989E680FD53BE6ECDCC6BCEE93BA28208032 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** ___data0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** L_0 = ___data0;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		V_0 = 2;
		goto IL_0008;
	}

IL_0008:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void ExitGames.Client.Photon.SocketNative::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketNative__cctor_m0CE3A62ECC9BED536DE4B70DE4D0D202D74BF77A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketNative_t4955989E680FD53BE6ECDCC6BCEE93BA28208032_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		((SocketNative_t4955989E680FD53BE6ECDCC6BCEE93BA28208032_StaticFields*)il2cpp_codegen_static_fields_for(SocketNative_t4955989E680FD53BE6ECDCC6BCEE93BA28208032_il2cpp_TypeInfo_var))->set_syncer_12(L_0);
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
// System.Void ExitGames.Client.Photon.SocketTcp::.ctor(ExitGames.Client.Photon.PeerBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketTcp__ctor_mAAA906AF41E549320EA636E67F960AE91E112AC4 (SocketTcp_t6DA1B64C0FCE8B978387AB8EC153932CADD27F02 * __this, PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * ___npeer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0414ECB1A82762D41F652890CF9961FD7FCCDAF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		__this->set_syncer_12(L_0);
		PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * L_1 = ___npeer0;
		IPhotonSocket__ctor_m71E6E6973C7EE5F9C600D5EE84E3CDF9B7043B0F(__this, L_1, /*hidden argument*/NULL);
		bool L_2;
		L_2 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(__this, 3, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_4;
		L_4 = IPhotonSocket_get_Listener_mE1767799EA32C7BBC23E3F1CE0F3E9DD1F508514(__this, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var, L_4, 3, _stringLiteralE0414ECB1A82762D41F652890CF9961FD7FCCDAF);
	}

IL_0033:
	{
		((IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF *)__this)->set_PollReceive_2((bool)0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.SocketTcp::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketTcp_Finalize_mBB414EAFC5F02E1932E446AF9C7FC741FAD0B910 (SocketTcp_t6DA1B64C0FCE8B978387AB8EC153932CADD27F02 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		SocketTcp_Dispose_mE9359064FA4CCAF89DC7B3C5CF80FF26921F2B90(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x13, IL_0013)
	}

IL_0013:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.SocketTcp::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketTcp_Dispose_mE9359064FA4CCAF89DC7B3C5CF80FF26921F2B90 (SocketTcp_t6DA1B64C0FCE8B978387AB8EC153932CADD27F02 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		IPhotonSocket_set_State_m3E012C91299675DDE497811E6E3C71072C5EAC14_inline(__this, 3, /*hidden argument*/NULL);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = __this->get_sock_11();
		V_0 = (bool)((!(((RuntimeObject*)(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0051;
		}
	}
	{
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_2 = __this->get_sock_11();
			bool L_3;
			L_3 = Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline(L_2, /*hidden argument*/NULL);
			V_1 = L_3;
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0035;
			}
		}

IL_0027:
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_5 = __this->get_sock_11();
			Socket_Close_m24AB78F5DAC1C39BB7FFB30A9620B2B07E01DEEB(L_5, /*hidden argument*/NULL);
		}

IL_0035:
		{
			goto IL_0050;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0038;
		}
		throw e;
	}

CATCH_0038:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_6 = V_2;
		String_t* L_7;
		L_7 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral665908BFFBC2A550A5A9FF79CD8BAB040074DC9A)), L_6, /*hidden argument*/NULL);
		IPhotonSocket_EnqueueDebugReturn_m3EFE15EAC913CE16CDE0D9A811C2759F5D54EF7A(__this, 3, L_7, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0050;
	} // end catch (depth: 1)

IL_0050:
	{
	}

IL_0051:
	{
		__this->set_sock_11((Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)NULL);
		IPhotonSocket_set_State_m3E012C91299675DDE497811E6E3C71072C5EAC14_inline(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketTcp::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SocketTcp_Connect_mF0E031339E5AF0415FC53F98FAFF6E6926CF743E (SocketTcp_t6DA1B64C0FCE8B978387AB8EC153932CADD27F02 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketTcp_DnsAndConnect_m8FDC09A2ABDE3AFD160F87EF57904CF3C2B33EEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		RuntimeObject * L_0 = __this->get_syncer_12();
		V_1 = L_0;
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			bool L_2;
			L_2 = IPhotonSocket_Connect_mE8C1D75665883EF1B17833D074D00A24D00E927D(__this, /*hidden argument*/NULL);
			V_2 = L_2;
			bool L_3 = V_2;
			V_3 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
			bool L_4 = V_3;
			if (!L_4)
			{
				goto IL_0025;
			}
		}

IL_001f:
		{
			V_4 = (bool)0;
			IL2CPP_LEAVE(0x5E, FINALLY_0030);
		}

IL_0025:
		{
			IPhotonSocket_set_State_m3E012C91299675DDE497811E6E3C71072C5EAC14_inline(__this, 1, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x38, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		RuntimeObject * L_5 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
		IL2CPP_JUMP_TBL(0x38, IL_0038)
	}

IL_0038:
	{
		ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * L_6 = (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 *)il2cpp_codegen_object_new(ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F(L_6, __this, (intptr_t)((intptr_t)SocketTcp_DnsAndConnect_m8FDC09A2ABDE3AFD160F87EF57904CF3C2B33EEC_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_7 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90(L_7, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_8 = V_0;
		Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0(L_8, (bool)1, /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_9 = V_0;
		Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B(L_9, /*hidden argument*/NULL);
		V_4 = (bool)1;
		goto IL_005e;
	}

IL_005e:
	{
		bool L_10 = V_4;
		return L_10;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketTcp::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SocketTcp_Disconnect_mB5D605AFF44E0EB72DD5D1B529D8CF776C03297D (SocketTcp_t6DA1B64C0FCE8B978387AB8EC153932CADD27F02 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE1F6C3A75FB4C487B1F6461877D572F20E3FAAF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	Exception_t * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		bool L_0;
		L_0 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(__this, 3, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		IPhotonSocket_EnqueueDebugReturn_m3EFE15EAC913CE16CDE0D9A811C2759F5D54EF7A(__this, 3, _stringLiteralBE1F6C3A75FB4C487B1F6461877D572F20E3FAAF, /*hidden argument*/NULL);
	}

IL_001b:
	{
		RuntimeObject * L_2 = __this->get_syncer_12();
		V_1 = L_2;
		RuntimeObject * L_3 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_3, /*hidden argument*/NULL);
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		{
			IPhotonSocket_set_State_m3E012C91299675DDE497811E6E3C71072C5EAC14_inline(__this, 3, /*hidden argument*/NULL);
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_4 = __this->get_sock_11();
			V_2 = (bool)((!(((RuntimeObject*)(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_0078;
			}
		}

IL_003f:
		{
		}

IL_0040:
		try
		{ // begin try (depth: 2)
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_6 = __this->get_sock_11();
			Socket_Close_m24AB78F5DAC1C39BB7FFB30A9620B2B07E01DEEB(L_6, /*hidden argument*/NULL);
			goto IL_0077;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0050;
			}
			throw e;
		}

CATCH_0050:
		{ // begin catch(System.Exception)
			{
				V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
				bool L_7;
				L_7 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(__this, 3, /*hidden argument*/NULL);
				V_4 = L_7;
				bool L_8 = V_4;
				if (!L_8)
				{
					goto IL_0074;
				}
			}

IL_005f:
			{
				Exception_t * L_9 = V_3;
				String_t* L_10;
				L_10 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA2076A563A22DA628C30B53A80EA51616D9C8C7C)), L_9, /*hidden argument*/NULL);
				IPhotonSocket_EnqueueDebugReturn_m3EFE15EAC913CE16CDE0D9A811C2759F5D54EF7A(__this, 3, L_10, /*hidden argument*/NULL);
			}

IL_0074:
			{
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0077;
			}
		} // end catch (depth: 2)

IL_0077:
		{
		}

IL_0078:
		{
			IPhotonSocket_set_State_m3E012C91299675DDE497811E6E3C71072C5EAC14_inline(__this, 0, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x8B, FINALLY_0083);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0083;
	}

FINALLY_0083:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(131)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(131)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8B, IL_008b)
	}

IL_008b:
	{
		V_5 = (bool)1;
		goto IL_0090;
	}

IL_0090:
	{
		bool L_12 = V_5;
		return L_12;
	}
}
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketTcp::Send(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketTcp_Send_m90C54D9CADDE4E5F22437670AADCD7D93F4AE0F3 (SocketTcp_t6DA1B64C0FCE8B978387AB8EC153932CADD27F02 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___length1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	Exception_t * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	String_t* V_5 = NULL;
	bool V_6 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	int32_t G_B4_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B15_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B15_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B15_2 = NULL;
	String_t* G_B15_3 = NULL;
	int32_t G_B14_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B14_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B14_2 = NULL;
	String_t* G_B14_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B16_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B16_3 = NULL;
	String_t* G_B16_4 = NULL;
	int32_t G_B18_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B18_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B18_2 = NULL;
	String_t* G_B18_3 = NULL;
	int32_t G_B17_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B17_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B17_2 = NULL;
	String_t* G_B17_3 = NULL;
	String_t* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B19_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B19_3 = NULL;
	String_t* G_B19_4 = NULL;
	int32_t G_B22_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B22_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B22_2 = NULL;
	String_t* G_B22_3 = NULL;
	int32_t G_B22_4 = 0;
	SocketTcp_t6DA1B64C0FCE8B978387AB8EC153932CADD27F02 * G_B22_5 = NULL;
	int32_t G_B21_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B21_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B21_2 = NULL;
	String_t* G_B21_3 = NULL;
	int32_t G_B21_4 = 0;
	SocketTcp_t6DA1B64C0FCE8B978387AB8EC153932CADD27F02 * G_B21_5 = NULL;
	String_t* G_B23_0 = NULL;
	int32_t G_B23_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B23_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B23_3 = NULL;
	String_t* G_B23_4 = NULL;
	int32_t G_B23_5 = 0;
	SocketTcp_t6DA1B64C0FCE8B978387AB8EC153932CADD27F02 * G_B23_6 = NULL;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = __this->get_sock_11();
			if (!L_0)
			{
				goto IL_001a;
			}
		}

IL_000a:
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_1 = __this->get_sock_11();
			bool L_2;
			L_2 = Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline(L_1, /*hidden argument*/NULL);
			G_B4_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
			goto IL_001b;
		}

IL_001a:
		{
			G_B4_0 = 1;
		}

IL_001b:
		{
			V_0 = (bool)G_B4_0;
			bool L_3 = V_0;
			if (!L_3)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			V_1 = 1;
			goto IL_015b;
		}

IL_0027:
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_4 = __this->get_sock_11();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___data0;
			int32_t L_6 = ___length1;
			int32_t L_7;
			L_7 = Socket_Send_mF70EF17396CEA161F628B1923DA32463720D9A1E(L_4, L_5, 0, L_6, 0, /*hidden argument*/NULL);
			goto IL_0157;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003d;
		}
		throw e;
	}

CATCH_003d:
	{ // begin catch(System.Exception)
		{
			V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			int32_t L_8;
			L_8 = IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline(__this, /*hidden argument*/NULL);
			if ((((int32_t)L_8) == ((int32_t)3)))
			{
				goto IL_0053;
			}
		}

IL_0048:
		{
			int32_t L_9;
			L_9 = IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline(__this, /*hidden argument*/NULL);
			G_B10_0 = ((!(((uint32_t)L_9) <= ((uint32_t)0)))? 1 : 0);
			goto IL_0054;
		}

IL_0053:
		{
			G_B10_0 = 0;
		}

IL_0054:
		{
			V_3 = (bool)G_B10_0;
			bool L_10 = V_3;
			if (!L_10)
			{
				goto IL_0153;
			}
		}

IL_005b:
		{
			bool L_11;
			L_11 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(__this, 3, /*hidden argument*/NULL);
			V_4 = L_11;
			bool L_12 = V_4;
			if (!L_12)
			{
				goto IL_0146;
			}
		}

IL_006c:
		{
			V_5 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709));
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_13 = __this->get_sock_11();
			V_6 = (bool)((!(((RuntimeObject*)(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)L_13) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_14 = V_6;
			if (!L_14)
			{
				goto IL_00eb;
			}
		}

IL_0083:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)4);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_15;
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_17 = __this->get_sock_11();
			EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_18;
			L_18 = Socket_get_LocalEndPoint_m327EB4A6DD9260037F648B5ABA719BB305D40EB0(L_17, /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_16, L_18);
			(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_18);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = L_16;
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_20 = __this->get_sock_11();
			EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_21;
			L_21 = Socket_get_RemoteEndPoint_m262E08E8CD25A908CB87450FC73683AB9DF636A7(L_20, /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_19, L_21);
			(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_21);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = L_19;
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_23 = __this->get_sock_11();
			bool L_24;
			L_24 = Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline(L_23, /*hidden argument*/NULL);
			G_B14_0 = 2;
			G_B14_1 = L_22;
			G_B14_2 = L_22;
			G_B14_3 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral105DCD844D9A45876F13A3503C14C3FC3A5186BA));
			if (L_24)
			{
				G_B15_0 = 2;
				G_B15_1 = L_22;
				G_B15_2 = L_22;
				G_B15_3 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral105DCD844D9A45876F13A3503C14C3FC3A5186BA));
				goto IL_00c1;
			}
		}

IL_00ba:
		{
			G_B16_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3CC8D7011607DEE69C89FE518BB89125A3FD0309));
			G_B16_1 = G_B14_0;
			G_B16_2 = G_B14_1;
			G_B16_3 = G_B14_2;
			G_B16_4 = G_B14_3;
			goto IL_00c6;
		}

IL_00c1:
		{
			G_B16_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral872832AF3EB23DF490D84F89198394B33CB88A29));
			G_B16_1 = G_B15_0;
			G_B16_2 = G_B15_1;
			G_B16_3 = G_B15_2;
			G_B16_4 = G_B15_3;
		}

IL_00c6:
		{
			ArrayElementTypeCheck (G_B16_2, G_B16_0);
			(G_B16_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B16_1), (RuntimeObject *)G_B16_0);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = G_B16_3;
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_26 = __this->get_sock_11();
			bool L_27;
			L_27 = Socket_get_IsBound_m67D559154A1B175E8B384DF0DBCC98EB0EA53830_inline(L_26, /*hidden argument*/NULL);
			G_B17_0 = 3;
			G_B17_1 = L_25;
			G_B17_2 = L_25;
			G_B17_3 = G_B16_4;
			if (L_27)
			{
				G_B18_0 = 3;
				G_B18_1 = L_25;
				G_B18_2 = L_25;
				G_B18_3 = G_B16_4;
				goto IL_00dd;
			}
		}

IL_00d6:
		{
			G_B19_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC8C9B128ACA303C17E5837E2ACD6F203E1E4CC69));
			G_B19_1 = G_B17_0;
			G_B19_2 = G_B17_1;
			G_B19_3 = G_B17_2;
			G_B19_4 = G_B17_3;
			goto IL_00e2;
		}

IL_00dd:
		{
			G_B19_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9CEE2204F2243F41DEEA3BB1E28F0E8465F59A5B));
			G_B19_1 = G_B18_0;
			G_B19_2 = G_B18_1;
			G_B19_3 = G_B18_2;
			G_B19_4 = G_B18_3;
		}

IL_00e2:
		{
			ArrayElementTypeCheck (G_B19_2, G_B19_0);
			(G_B19_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B19_1), (RuntimeObject *)G_B19_0);
			String_t* L_28;
			L_28 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(G_B19_4, G_B19_3, /*hidden argument*/NULL);
			V_5 = L_28;
		}

IL_00eb:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_29 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)5);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_30 = L_29;
			String_t* L_31;
			L_31 = IPhotonSocket_get_ServerAddress_mC37D2749260619C6182508E30BFF8D267D4C06C5_inline(__this, /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_30, L_31);
			(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_31);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_32 = L_30;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var)));
			int32_t L_33;
			L_33 = SupportClass_GetTickCount_mDD38F1B27059098AE7B5CC7B2072AAFC43D2D145(/*hidden argument*/NULL);
			PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * L_34 = ((IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF *)__this)->get_peerBase_0();
			int32_t L_35 = L_34->get_timeBase_28();
			int32_t L_36 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)L_35));
			RuntimeObject * L_37 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_36);
			ArrayElementTypeCheck (L_32, L_37);
			(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_37);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_38 = L_32;
			bool L_39;
			L_39 = IPhotonSocket_get_AddressResolvedAsIpv6_m8B9FA46DEC433CF686621624F90CDA7BF94B10EE_inline(__this, /*hidden argument*/NULL);
			G_B21_0 = 2;
			G_B21_1 = L_38;
			G_B21_2 = L_38;
			G_B21_3 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB81392BCA2007DEE74931CF1CFAD610D20C2AE97));
			G_B21_4 = 3;
			G_B21_5 = __this;
			if (L_39)
			{
				G_B22_0 = 2;
				G_B22_1 = L_38;
				G_B22_2 = L_38;
				G_B22_3 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB81392BCA2007DEE74931CF1CFAD610D20C2AE97));
				G_B22_4 = 3;
				G_B22_5 = __this;
				goto IL_012b;
			}
		}

IL_0124:
		{
			String_t* L_40 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->get_Empty_5();
			G_B23_0 = L_40;
			G_B23_1 = G_B21_0;
			G_B23_2 = G_B21_1;
			G_B23_3 = G_B21_2;
			G_B23_4 = G_B21_3;
			G_B23_5 = G_B21_4;
			G_B23_6 = G_B21_5;
			goto IL_0130;
		}

IL_012b:
		{
			G_B23_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB5FDD5E178BD05010055C518503A047E0BAB175));
			G_B23_1 = G_B22_0;
			G_B23_2 = G_B22_1;
			G_B23_3 = G_B22_2;
			G_B23_4 = G_B22_3;
			G_B23_5 = G_B22_4;
			G_B23_6 = G_B22_5;
		}

IL_0130:
		{
			ArrayElementTypeCheck (G_B23_2, G_B23_0);
			(G_B23_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B23_1), (RuntimeObject *)G_B23_0);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_41 = G_B23_3;
			String_t* L_42 = V_5;
			ArrayElementTypeCheck (L_41, L_42);
			(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_42);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_43 = L_41;
			Exception_t * L_44 = V_2;
			ArrayElementTypeCheck (L_43, L_44);
			(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_44);
			String_t* L_45;
			L_45 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(G_B23_4, L_43, /*hidden argument*/NULL);
			IPhotonSocket_EnqueueDebugReturn_m3EFE15EAC913CE16CDE0D9A811C2759F5D54EF7A(G_B23_6, G_B23_5, L_45, /*hidden argument*/NULL);
		}

IL_0146:
		{
			IPhotonSocket_HandleException_mF7643306A79896E98986A71CA9E253F285E7056A(__this, ((int32_t)1030), /*hidden argument*/NULL);
		}

IL_0153:
		{
			V_1 = 3;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_015b;
		}
	} // end catch (depth: 1)

IL_0157:
	{
		V_1 = 0;
		goto IL_015b;
	}

IL_015b:
	{
		int32_t L_46 = V_1;
		return L_46;
	}
}
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketTcp::Receive(System.Byte[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketTcp_Receive_m43768925542B4FE2209B266A89B08B6BDAB48D73 (SocketTcp_t6DA1B64C0FCE8B978387AB8EC153932CADD27F02 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** ___data0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** L_0 = ___data0;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		V_0 = 2;
		goto IL_0008;
	}

IL_0008:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void ExitGames.Client.Photon.SocketTcp::DnsAndConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketTcp_DnsAndConnect_m8FDC09A2ABDE3AFD160F87EF57904CF3C2B33EEC (SocketTcp_t6DA1B64C0FCE8B978387AB8EC153932CADD27F02 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketTcp_ReceiveLoop_m2B86048740D1B4BB94F0B784774B8E5387ED13C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral191D7F30D495BBE4F52FE89B64D411898274ED12);
		s_Il2CppMethodInitialized = true;
	}
	IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* V_0 = NULL;
	String_t* V_1 = NULL;
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * V_2 = NULL;
	bool V_3 = false;
	IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* V_4 = NULL;
	int32_t V_5 = 0;
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * V_6 = NULL;
	bool V_7 = false;
	SecurityException_t3BE23C00ECC638A4EDCAA33572C4DCC21F2FA769 * V_8 = NULL;
	bool V_9 = false;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * V_10 = NULL;
	bool V_11 = false;
	Exception_t * V_12 = NULL;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	int32_t G_B7_0 = 0;
	int32_t G_B24_0 = 0;
	{
		String_t* L_0;
		L_0 = IPhotonSocket_get_ServerAddress_mC37D2749260619C6182508E30BFF8D267D4C06C5_inline(__this, /*hidden argument*/NULL);
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_1;
		L_1 = IPhotonSocket_GetIpAddresses_m4C6A83421725E73E3C9E55A93B894327FAB905D6(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_2 = V_0;
		V_3 = (bool)((((RuntimeObject*)(IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB*)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		goto IL_0276;
	}

IL_001c:
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_1 = L_4;
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_5 = V_0;
		V_4 = L_5;
		V_5 = 0;
		goto IL_01ba;
	}

IL_002e:
	{
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_6 = V_4;
		int32_t L_7 = V_5;
		int32_t L_8 = L_7;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_6 = L_9;
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		{
			IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_10 = V_6;
			int32_t L_11;
			L_11 = IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline(L_10, /*hidden argument*/NULL);
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_12 = (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)il2cpp_codegen_object_new(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var);
			Socket__ctor_m5A4B335AEC1450ABE31CF1151F3F5A93D9D0280C(L_12, L_11, 1, 6, /*hidden argument*/NULL);
			__this->set_sock_11(L_12);
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_13 = __this->get_sock_11();
			Socket_set_NoDelay_m34DCB8BF5275A85E1687308D0D016E860F229732(L_13, (bool)1, /*hidden argument*/NULL);
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_14 = __this->get_sock_11();
			PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * L_15 = ((IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF *)__this)->get_peerBase_0();
			int32_t L_16;
			L_16 = PeerBase_get_DisconnectTimeout_mC0227A4EB0303EAA031894D38213189C83D750B9(L_15, /*hidden argument*/NULL);
			Socket_set_ReceiveTimeout_mF081C1A1416112CE1ED3609594F76062B4B4DB23(L_14, L_16, /*hidden argument*/NULL);
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_17 = __this->get_sock_11();
			PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * L_18 = ((IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF *)__this)->get_peerBase_0();
			int32_t L_19;
			L_19 = PeerBase_get_DisconnectTimeout_mC0227A4EB0303EAA031894D38213189C83D750B9(L_18, /*hidden argument*/NULL);
			Socket_set_SendTimeout_mD92AF13D6A05318E6F892F0B145136138E2181E5(L_17, L_19, /*hidden argument*/NULL);
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_20 = __this->get_sock_11();
			IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_21 = V_6;
			int32_t L_22;
			L_22 = IPhotonSocket_get_ServerPort_m87E9048311458445C04EFE6CFAC0B672B9BC96CD_inline(__this, /*hidden argument*/NULL);
			Socket_Connect_mA7BB443E475AC35010CFB96E8F7091D34AC61247(L_20, L_21, L_22, /*hidden argument*/NULL);
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_23 = __this->get_sock_11();
			if (!L_23)
			{
				goto IL_00af;
			}
		}

IL_00a2:
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_24 = __this->get_sock_11();
			bool L_25;
			L_25 = Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline(L_24, /*hidden argument*/NULL);
			G_B7_0 = ((int32_t)(L_25));
			goto IL_00b0;
		}

IL_00af:
		{
			G_B7_0 = 0;
		}

IL_00b0:
		{
			V_7 = (bool)G_B7_0;
			bool L_26 = V_7;
			if (!L_26)
			{
				goto IL_00bc;
			}
		}

IL_00b6:
		{
			goto IL_01c5;
		}

IL_00bc:
		{
			goto IL_01b3;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SecurityException_t3BE23C00ECC638A4EDCAA33572C4DCC21F2FA769_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c2;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00fc;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_017c;
		}
		throw e;
	}

CATCH_00c2:
	{ // begin catch(System.Security.SecurityException)
		{
			V_8 = ((SecurityException_t3BE23C00ECC638A4EDCAA33572C4DCC21F2FA769 *)IL2CPP_GET_ACTIVE_EXCEPTION(SecurityException_t3BE23C00ECC638A4EDCAA33572C4DCC21F2FA769 *));
			bool L_27;
			L_27 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(__this, 1, /*hidden argument*/NULL);
			V_9 = L_27;
			bool L_28 = V_9;
			if (!L_28)
			{
				goto IL_00f6;
			}
		}

IL_00d2:
		{
			String_t* L_29 = V_1;
			SecurityException_t3BE23C00ECC638A4EDCAA33572C4DCC21F2FA769 * L_30 = V_8;
			String_t* L_31;
			L_31 = String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57(L_29, L_30, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745)), /*hidden argument*/NULL);
			V_1 = L_31;
			SecurityException_t3BE23C00ECC638A4EDCAA33572C4DCC21F2FA769 * L_32 = V_8;
			String_t* L_33;
			L_33 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23C9C8C814E62464300FF7E74593ED2ECBD8DD97)), L_32, /*hidden argument*/NULL);
			IPhotonSocket_EnqueueDebugReturn_m3EFE15EAC913CE16CDE0D9A811C2759F5D54EF7A(__this, 2, L_33, /*hidden argument*/NULL);
		}

IL_00f6:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01b3;
		}
	} // end catch (depth: 1)

CATCH_00fc:
	{ // begin catch(System.Net.Sockets.SocketException)
		{
			V_10 = ((SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *));
			bool L_34;
			L_34 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(__this, 2, /*hidden argument*/NULL);
			V_11 = L_34;
			bool L_35 = V_11;
			if (!L_35)
			{
				goto IL_0179;
			}
		}

IL_010c:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)5);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_37 = L_36;
			String_t* L_38 = V_1;
			ArrayElementTypeCheck (L_37, L_38);
			(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_38);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_39 = L_37;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_40 = V_10;
			ArrayElementTypeCheck (L_39, L_40);
			(L_39)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_40);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_41 = L_39;
			ArrayElementTypeCheck (L_41, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745)));
			(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745)));
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_42 = L_41;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_43 = V_10;
			int32_t L_44;
			L_44 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Runtime.InteropServices.ExternalException::get_ErrorCode() */, L_43);
			int32_t L_45 = L_44;
			RuntimeObject * L_46 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_45);
			ArrayElementTypeCheck (L_42, L_46);
			(L_42)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_46);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_47 = L_42;
			ArrayElementTypeCheck (L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF712C5F62331F2870DB319ED66CDF53B831F3CA1)));
			(L_47)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF712C5F62331F2870DB319ED66CDF53B831F3CA1)));
			String_t* L_48;
			L_48 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_47, /*hidden argument*/NULL);
			V_1 = L_48;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_49 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)4);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_50 = L_49;
			ArrayElementTypeCheck (L_50, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral86A8294451A16C9100336EDF55F2B68CBD45BD67)));
			(L_50)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral86A8294451A16C9100336EDF55F2B68CBD45BD67)));
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_51 = L_50;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_52 = V_10;
			ArrayElementTypeCheck (L_51, L_52);
			(L_51)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_52);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_53 = L_51;
			ArrayElementTypeCheck (L_53, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD6789EA58E424F90511FD4613F868E6EBBA26766)));
			(L_53)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD6789EA58E424F90511FD4613F868E6EBBA26766)));
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_54 = L_53;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_55 = V_10;
			int32_t L_56;
			L_56 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Runtime.InteropServices.ExternalException::get_ErrorCode() */, L_55);
			int32_t L_57 = L_56;
			RuntimeObject * L_58 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_57);
			ArrayElementTypeCheck (L_54, L_58);
			(L_54)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_58);
			String_t* L_59;
			L_59 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_54, /*hidden argument*/NULL);
			IPhotonSocket_EnqueueDebugReturn_m3EFE15EAC913CE16CDE0D9A811C2759F5D54EF7A(__this, 2, L_59, /*hidden argument*/NULL);
		}

IL_0179:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01b3;
		}
	} // end catch (depth: 1)

CATCH_017c:
	{ // begin catch(System.Exception)
		{
			V_12 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			bool L_60;
			L_60 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(__this, 2, /*hidden argument*/NULL);
			V_13 = L_60;
			bool L_61 = V_13;
			if (!L_61)
			{
				goto IL_01b0;
			}
		}

IL_018c:
		{
			String_t* L_62 = V_1;
			Exception_t * L_63 = V_12;
			String_t* L_64;
			L_64 = String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57(L_62, L_63, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF712C5F62331F2870DB319ED66CDF53B831F3CA1)), /*hidden argument*/NULL);
			V_1 = L_64;
			Exception_t * L_65 = V_12;
			String_t* L_66;
			L_66 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB73EE191F0E9F1AF4D345769EC47718AC55BF4D3)), L_65, /*hidden argument*/NULL);
			IPhotonSocket_EnqueueDebugReturn_m3EFE15EAC913CE16CDE0D9A811C2759F5D54EF7A(__this, 2, L_66, /*hidden argument*/NULL);
		}

IL_01b0:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01b3;
		}
	} // end catch (depth: 1)

IL_01b3:
	{
		int32_t L_67 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
	}

IL_01ba:
	{
		int32_t L_68 = V_5;
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_69 = V_4;
		if ((((int32_t)L_68) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_01c5:
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_70 = __this->get_sock_11();
		if (!L_70)
		{
			goto IL_01dd;
		}
	}
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_71 = __this->get_sock_11();
		bool L_72;
		L_72 = Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline(L_71, /*hidden argument*/NULL);
		G_B24_0 = ((((int32_t)L_72) == ((int32_t)0))? 1 : 0);
		goto IL_01de;
	}

IL_01dd:
	{
		G_B24_0 = 1;
	}

IL_01de:
	{
		V_14 = (bool)G_B24_0;
		bool L_73 = V_14;
		if (!L_73)
		{
			goto IL_0215;
		}
	}
	{
		bool L_74;
		L_74 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(__this, 1, /*hidden argument*/NULL);
		V_15 = L_74;
		bool L_75 = V_15;
		if (!L_75)
		{
			goto IL_0207;
		}
	}
	{
		String_t* L_76 = V_1;
		String_t* L_77;
		L_77 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral191D7F30D495BBE4F52FE89B64D411898274ED12, L_76, /*hidden argument*/NULL);
		IPhotonSocket_EnqueueDebugReturn_m3EFE15EAC913CE16CDE0D9A811C2759F5D54EF7A(__this, 1, L_77, /*hidden argument*/NULL);
	}

IL_0207:
	{
		IPhotonSocket_HandleException_mF7643306A79896E98986A71CA9E253F285E7056A(__this, ((int32_t)1023), /*hidden argument*/NULL);
		goto IL_0276;
	}

IL_0215:
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_78 = __this->get_sock_11();
		int32_t L_79;
		L_79 = Socket_get_AddressFamily_m390B53FAAF0DFF8E8BE844F83AFB06D9E53D891B_inline(L_78, /*hidden argument*/NULL);
		IPhotonSocket_set_AddressResolvedAsIpv6_mC0250298B4648ED31FA30D7FCA8309A20DC6B2E8_inline(__this, (bool)((((int32_t)L_79) == ((int32_t)((int32_t)23)))? 1 : 0), /*hidden argument*/NULL);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_80 = __this->get_sock_11();
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_81;
		L_81 = Socket_get_RemoteEndPoint_m262E08E8CD25A908CB87450FC73683AB9DF636A7(L_80, /*hidden argument*/NULL);
		String_t* L_82;
		L_82 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_81);
		IPhotonSocket_set_ServerIpAddress_m700599277934976851AB99868552BFB7DFFD356B_inline(L_82, /*hidden argument*/NULL);
		IPhotonSocket_set_State_m3E012C91299675DDE497811E6E3C71072C5EAC14_inline(__this, 2, /*hidden argument*/NULL);
		PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * L_83 = ((IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF *)__this)->get_peerBase_0();
		VirtActionInvoker0::Invoke(7 /* System.Void ExitGames.Client.Photon.PeerBase::OnConnect() */, L_83);
		ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * L_84 = (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 *)il2cpp_codegen_object_new(ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F(L_84, __this, (intptr_t)((intptr_t)SocketTcp_ReceiveLoop_m2B86048740D1B4BB94F0B784774B8E5387ED13C0_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_85 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90(L_85, L_84, /*hidden argument*/NULL);
		V_2 = L_85;
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_86 = V_2;
		Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0(L_86, (bool)1, /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_87 = V_2;
		Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B(L_87, /*hidden argument*/NULL);
	}

IL_0276:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.SocketTcp::ReceiveLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketTcp_ReceiveLoop_m2B86048740D1B4BB94F0B784774B8E5387ED13C0 (SocketTcp_t6DA1B64C0FCE8B978387AB8EC153932CADD27F02 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DFD22CDAE88D39C18071D0212A92D70D0C3F850);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB597C7CD7AC9D5522EBA8E601D6EF041517C29E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6BDFCC62C3AECFF329B627E97D9AD57E39F9978);
		s_Il2CppMethodInitialized = true;
	}
	StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * V_15 = NULL;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * V_21 = NULL;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	Exception_t * V_25 = NULL;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 8> __leave_targets;
	int32_t G_B9_0 = 0;
	int32_t G_B34_0 = 0;
	RuntimeObject * G_B46_0 = NULL;
	String_t* G_B46_1 = NULL;
	int32_t G_B46_2 = 0;
	SocketTcp_t6DA1B64C0FCE8B978387AB8EC153932CADD27F02 * G_B46_3 = NULL;
	RuntimeObject * G_B45_0 = NULL;
	String_t* G_B45_1 = NULL;
	int32_t G_B45_2 = 0;
	SocketTcp_t6DA1B64C0FCE8B978387AB8EC153932CADD27F02 * G_B45_3 = NULL;
	String_t* G_B47_0 = NULL;
	RuntimeObject * G_B47_1 = NULL;
	String_t* G_B47_2 = NULL;
	int32_t G_B47_3 = 0;
	SocketTcp_t6DA1B64C0FCE8B978387AB8EC153932CADD27F02 * G_B47_4 = NULL;
	int32_t G_B52_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B66_0 = 0;
	{
		int32_t L_0;
		L_0 = IPhotonSocket_get_MTU_m47C1172A728F33C1A9F152E3C6F90B586D0BE9C8(__this, /*hidden argument*/NULL);
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_1 = (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F *)il2cpp_codegen_object_new(StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F_il2cpp_TypeInfo_var);
		StreamBuffer__ctor_mCD82E110B43F1667367053A5E72397A584E97B7E(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		V_1 = L_2;
		goto IL_03b4;
	}

IL_001a:
	{
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_3 = V_0;
		StreamBuffer_SetLength_m3556630F44704F5289A2D4C9A74CA313EBBE8C86(L_3, ((int64_t)((int64_t)0)), /*hidden argument*/NULL);
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		{
			V_2 = 0;
			V_3 = 0;
			goto IL_00ae;
		}

IL_002e:
		{
		}

IL_002f:
		try
		{ // begin try (depth: 2)
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_4 = __this->get_sock_11();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_1;
			int32_t L_6 = V_2;
			int32_t L_7 = V_2;
			int32_t L_8;
			L_8 = Socket_Receive_mA08EE1F9A870791CECAAC2FA2D4144ACBA6B4962(L_4, L_5, L_6, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)9), (int32_t)L_7)), 0, /*hidden argument*/NULL);
			V_3 = L_8;
			goto IL_0093;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0046;
			}
			throw e;
		}

CATCH_0046:
		{ // begin catch(System.Net.Sockets.SocketException)
			{
				V_5 = ((SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *));
				int32_t L_9;
				L_9 = IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline(__this, /*hidden argument*/NULL);
				if ((((int32_t)L_9) == ((int32_t)3)))
				{
					goto IL_006b;
				}
			}

IL_0052:
			{
				int32_t L_10;
				L_10 = IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline(__this, /*hidden argument*/NULL);
				if ((((int32_t)L_10) <= ((int32_t)0)))
				{
					goto IL_006b;
				}
			}

IL_005b:
			{
				SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_11 = V_5;
				int32_t L_12;
				L_12 = SocketException_get_SocketErrorCode_m05A48632F6CC75FBD904E8E1AC56FC6B2577A131(L_11, /*hidden argument*/NULL);
				G_B9_0 = ((((int32_t)L_12) == ((int32_t)((int32_t)10035)))? 1 : 0);
				goto IL_006c;
			}

IL_006b:
			{
				G_B9_0 = 0;
			}

IL_006c:
			{
				V_6 = (bool)G_B9_0;
				bool L_13 = V_6;
				if (!L_13)
				{
					goto IL_0091;
				}
			}

IL_0072:
			{
				bool L_14;
				L_14 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(__this, 5, /*hidden argument*/NULL);
				V_7 = L_14;
				bool L_15 = V_7;
				if (!L_15)
				{
					goto IL_008f;
				}
			}

IL_0080:
			{
				IPhotonSocket_EnqueueDebugReturn_m3EFE15EAC913CE16CDE0D9A811C2759F5D54EF7A(__this, 5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDE6D36863561CF61A2704576F72C7B86C5569EB2)), /*hidden argument*/NULL);
			}

IL_008f:
			{
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00ae;
			}

IL_0091:
			{
				IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketTcp_ReceiveLoop_m2B86048740D1B4BB94F0B784774B8E5387ED13C0_RuntimeMethod_var)));
			}
		} // end catch (depth: 2)

IL_0093:
		{
			int32_t L_16 = V_2;
			int32_t L_17 = V_3;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_17));
			int32_t L_18 = V_3;
			V_8 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
			bool L_19 = V_8;
			if (!L_19)
			{
				goto IL_00ad;
			}
		}

IL_00a1:
		{
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_20 = (SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var)));
			SocketException__ctor_m4AA74DE46D28204456EFCCBBC5ACC841DA2941EF(L_20, ((int32_t)10054), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketTcp_ReceiveLoop_m2B86048740D1B4BB94F0B784774B8E5387ED13C0_RuntimeMethod_var)));
		}

IL_00ad:
		{
		}

IL_00ae:
		{
			int32_t L_21 = V_2;
			V_9 = (bool)((((int32_t)L_21) < ((int32_t)((int32_t)9)))? 1 : 0);
			bool L_22 = V_9;
			if (L_22)
			{
				goto IL_002e;
			}
		}

IL_00bc:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = V_1;
			int32_t L_24 = 0;
			uint8_t L_25 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
			V_10 = (bool)((((int32_t)L_25) == ((int32_t)((int32_t)240)))? 1 : 0);
			bool L_26 = V_10;
			if (!L_26)
			{
				goto IL_00de;
			}
		}

IL_00cc:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = V_1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28 = V_1;
			IPhotonSocket_HandleReceivedDatagram_mCF72964805372D053B54F92E2BA4B53F9845FC07(__this, L_27, ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))), (bool)1, /*hidden argument*/NULL);
			goto IL_03b4;
		}

IL_00de:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = V_1;
			int32_t L_30 = 1;
			uint8_t L_31 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32 = V_1;
			int32_t L_33 = 2;
			uint8_t L_34 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35 = V_1;
			int32_t L_36 = 3;
			uint8_t L_37 = (L_35)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36));
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = V_1;
			int32_t L_39 = 4;
			uint8_t L_40 = (L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
			V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_31<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_34<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_37<<(int32_t)8))))|(int32_t)L_40));
			PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * L_41 = ((IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF *)__this)->get_peerBase_0();
			bool L_42;
			L_42 = PeerBase_get_TrafficStatsEnabled_m745BEA2E615BFFFD518E477AA0EA4C6CD7AC00B8(L_41, /*hidden argument*/NULL);
			V_11 = L_42;
			bool L_43 = V_11;
			if (!L_43)
			{
				goto IL_0146;
			}
		}

IL_0108:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_44 = V_1;
			int32_t L_45 = 5;
			uint8_t L_46 = (L_44)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
			V_12 = (bool)((((int32_t)L_46) == ((int32_t)0))? 1 : 0);
			bool L_47 = V_12;
			V_13 = L_47;
			bool L_48 = V_13;
			if (!L_48)
			{
				goto IL_0130;
			}
		}

IL_0119:
		{
			PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * L_49 = ((IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF *)__this)->get_peerBase_0();
			TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * L_50;
			L_50 = PeerBase_get_TrafficStatsIncoming_m67030FC7D58D6D219E6AA9323BE2F8AC9B8CB408(L_49, /*hidden argument*/NULL);
			int32_t L_51 = V_4;
			TrafficStats_CountReliableOpCommand_m7E7C10B9007D42A130900FB011FCAF286F445FAB(L_50, L_51, /*hidden argument*/NULL);
			goto IL_0145;
		}

IL_0130:
		{
			PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * L_52 = ((IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF *)__this)->get_peerBase_0();
			TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * L_53;
			L_53 = PeerBase_get_TrafficStatsIncoming_m67030FC7D58D6D219E6AA9323BE2F8AC9B8CB408(L_52, /*hidden argument*/NULL);
			int32_t L_54 = V_4;
			TrafficStats_CountUnreliableOpCommand_m07A3ACC43B0E5C619543A30799AA57F1C6236C23(L_53, L_54, /*hidden argument*/NULL);
		}

IL_0145:
		{
		}

IL_0146:
		{
			bool L_55;
			L_55 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(__this, 5, /*hidden argument*/NULL);
			V_14 = L_55;
			bool L_56 = V_14;
			if (!L_56)
			{
				goto IL_016e;
			}
		}

IL_0153:
		{
			int32_t L_57 = V_4;
			int32_t L_58 = L_57;
			RuntimeObject * L_59 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_58);
			String_t* L_60;
			L_60 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteralD6BDFCC62C3AECFF329B627E97D9AD57E39F9978, L_59, /*hidden argument*/NULL);
			IPhotonSocket_EnqueueDebugReturn_m3EFE15EAC913CE16CDE0D9A811C2759F5D54EF7A(__this, 5, L_60, /*hidden argument*/NULL);
		}

IL_016e:
		{
			StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_61 = V_0;
			int32_t L_62 = V_4;
			StreamBuffer_SetCapacityMinimum_m059D9DC4DD33D770F55ED0CD4DE52F1EEE0A185A(L_61, ((int32_t)il2cpp_codegen_subtract((int32_t)L_62, (int32_t)7)), /*hidden argument*/NULL);
			StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_63 = V_0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_64 = V_1;
			int32_t L_65 = V_2;
			StreamBuffer_Write_m177FE649E0A724563BC39C5C690561260D365E5C(L_63, L_64, 7, ((int32_t)il2cpp_codegen_subtract((int32_t)L_65, (int32_t)7)), /*hidden argument*/NULL);
			V_2 = 0;
			int32_t L_66 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_66, (int32_t)((int32_t)9)));
			goto IL_022c;
		}

IL_0193:
		{
		}

IL_0194:
		try
		{ // begin try (depth: 2)
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_67 = __this->get_sock_11();
			StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_68 = V_0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_69;
			L_69 = StreamBuffer_GetBuffer_m2637CD4CB25C3B82A095F960BC10155293FA4D45(L_68, /*hidden argument*/NULL);
			StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_70 = V_0;
			int32_t L_71;
			L_71 = StreamBuffer_get_Position_mB61D5BDF4E82A966CFD147969A2553E4FC8ADBCB(L_70, /*hidden argument*/NULL);
			int32_t L_72 = V_4;
			int32_t L_73 = V_2;
			int32_t L_74;
			L_74 = Socket_Receive_mA08EE1F9A870791CECAAC2FA2D4144ACBA6B4962(L_67, L_69, L_71, ((int32_t)il2cpp_codegen_subtract((int32_t)L_72, (int32_t)L_73)), 0, /*hidden argument*/NULL);
			V_3 = L_74;
			goto IL_0202;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01b5;
			}
			throw e;
		}

CATCH_01b5:
		{ // begin catch(System.Net.Sockets.SocketException)
			{
				V_15 = ((SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *));
				int32_t L_75;
				L_75 = IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline(__this, /*hidden argument*/NULL);
				if ((((int32_t)L_75) == ((int32_t)3)))
				{
					goto IL_01da;
				}
			}

IL_01c1:
			{
				int32_t L_76;
				L_76 = IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline(__this, /*hidden argument*/NULL);
				if ((((int32_t)L_76) <= ((int32_t)0)))
				{
					goto IL_01da;
				}
			}

IL_01ca:
			{
				SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_77 = V_15;
				int32_t L_78;
				L_78 = SocketException_get_SocketErrorCode_m05A48632F6CC75FBD904E8E1AC56FC6B2577A131(L_77, /*hidden argument*/NULL);
				G_B34_0 = ((((int32_t)L_78) == ((int32_t)((int32_t)10035)))? 1 : 0);
				goto IL_01db;
			}

IL_01da:
			{
				G_B34_0 = 0;
			}

IL_01db:
			{
				V_16 = (bool)G_B34_0;
				bool L_79 = V_16;
				if (!L_79)
				{
					goto IL_0200;
				}
			}

IL_01e1:
			{
				bool L_80;
				L_80 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(__this, 5, /*hidden argument*/NULL);
				V_17 = L_80;
				bool L_81 = V_17;
				if (!L_81)
				{
					goto IL_01fe;
				}
			}

IL_01ef:
			{
				IPhotonSocket_EnqueueDebugReturn_m3EFE15EAC913CE16CDE0D9A811C2759F5D54EF7A(__this, 5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDE6D36863561CF61A2704576F72C7B86C5569EB2)), /*hidden argument*/NULL);
			}

IL_01fe:
			{
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_022c;
			}

IL_0200:
			{
				IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketTcp_ReceiveLoop_m2B86048740D1B4BB94F0B784774B8E5387ED13C0_RuntimeMethod_var)));
			}
		} // end catch (depth: 2)

IL_0202:
		{
			StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_82 = V_0;
			StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_83 = L_82;
			int32_t L_84;
			L_84 = StreamBuffer_get_Position_mB61D5BDF4E82A966CFD147969A2553E4FC8ADBCB(L_83, /*hidden argument*/NULL);
			int32_t L_85 = V_3;
			StreamBuffer_set_Position_mAA9AE04E65AD59F2E361E9CE8278AE1ACE7F0ECC(L_83, ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)L_85)), /*hidden argument*/NULL);
			int32_t L_86 = V_2;
			int32_t L_87 = V_3;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)L_87));
			int32_t L_88 = V_3;
			V_18 = (bool)((((int32_t)L_88) == ((int32_t)0))? 1 : 0);
			bool L_89 = V_18;
			if (!L_89)
			{
				goto IL_022b;
			}
		}

IL_021f:
		{
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_90 = (SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var)));
			SocketException__ctor_m4AA74DE46D28204456EFCCBBC5ACC841DA2941EF(L_90, ((int32_t)10054), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_90, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketTcp_ReceiveLoop_m2B86048740D1B4BB94F0B784774B8E5387ED13C0_RuntimeMethod_var)));
		}

IL_022b:
		{
		}

IL_022c:
		{
			int32_t L_91 = V_2;
			int32_t L_92 = V_4;
			V_19 = (bool)((((int32_t)L_91) < ((int32_t)L_92))? 1 : 0);
			bool L_93 = V_19;
			if (L_93)
			{
				goto IL_0193;
			}
		}

IL_023a:
		{
			StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_94 = V_0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_95;
			L_95 = StreamBuffer_ToArray_m8DFFFA4DB1FEA0D3CC1B63B66A47B14A45907A99(L_94, /*hidden argument*/NULL);
			StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_96 = V_0;
			int32_t L_97;
			L_97 = StreamBuffer_get_Length_mAB8A53234D8D18994F517A80C8FA69CC480444CF(L_96, /*hidden argument*/NULL);
			IPhotonSocket_HandleReceivedDatagram_mCF72964805372D053B54F92E2BA4B53F9845FC07(__this, L_95, L_97, (bool)0, /*hidden argument*/NULL);
			bool L_98;
			L_98 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(__this, 5, /*hidden argument*/NULL);
			V_20 = L_98;
			bool L_99 = V_20;
			if (!L_99)
			{
				goto IL_0292;
			}
		}

IL_025b:
		{
			StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_100 = V_0;
			int32_t L_101;
			L_101 = StreamBuffer_get_Length_mAB8A53234D8D18994F517A80C8FA69CC480444CF(L_100, /*hidden argument*/NULL);
			int32_t L_102 = L_101;
			RuntimeObject * L_103 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_102);
			StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_104 = V_0;
			int32_t L_105;
			L_105 = StreamBuffer_get_Length_mAB8A53234D8D18994F517A80C8FA69CC480444CF(L_104, /*hidden argument*/NULL);
			int32_t L_106 = V_4;
			G_B45_0 = L_103;
			G_B45_1 = _stringLiteralD6BDFCC62C3AECFF329B627E97D9AD57E39F9978;
			G_B45_2 = 5;
			G_B45_3 = __this;
			if ((((int32_t)L_105) == ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)2)))))
			{
				G_B46_0 = L_103;
				G_B46_1 = _stringLiteralD6BDFCC62C3AECFF329B627E97D9AD57E39F9978;
				G_B46_2 = 5;
				G_B46_3 = __this;
				goto IL_0281;
			}
		}

IL_027a:
		{
			G_B47_0 = _stringLiteralB597C7CD7AC9D5522EBA8E601D6EF041517C29E6;
			G_B47_1 = G_B45_0;
			G_B47_2 = G_B45_1;
			G_B47_3 = G_B45_2;
			G_B47_4 = G_B45_3;
			goto IL_0286;
		}

IL_0281:
		{
			G_B47_0 = _stringLiteral3DFD22CDAE88D39C18071D0212A92D70D0C3F850;
			G_B47_1 = G_B46_0;
			G_B47_2 = G_B46_1;
			G_B47_3 = G_B46_2;
			G_B47_4 = G_B46_3;
		}

IL_0286:
		{
			String_t* L_107;
			L_107 = String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57(G_B47_2, G_B47_1, G_B47_0, /*hidden argument*/NULL);
			IPhotonSocket_EnqueueDebugReturn_m3EFE15EAC913CE16CDE0D9A811C2759F5D54EF7A(G_B47_4, G_B47_3, L_107, /*hidden argument*/NULL);
		}

IL_0292:
		{
			goto IL_03b3;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0298;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_032e;
		}
		throw e;
	}

CATCH_0298:
	{ // begin catch(System.Net.Sockets.SocketException)
		{
			V_21 = ((SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *));
			int32_t L_108;
			L_108 = IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline(__this, /*hidden argument*/NULL);
			if ((((int32_t)L_108) == ((int32_t)3)))
			{
				goto IL_02af;
			}
		}

IL_02a4:
		{
			int32_t L_109;
			L_109 = IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline(__this, /*hidden argument*/NULL);
			G_B52_0 = ((!(((uint32_t)L_109) <= ((uint32_t)0)))? 1 : 0);
			goto IL_02b0;
		}

IL_02af:
		{
			G_B52_0 = 0;
		}

IL_02b0:
		{
			V_22 = (bool)G_B52_0;
			bool L_110 = V_22;
			if (!L_110)
			{
				goto IL_0328;
			}
		}

IL_02b6:
		{
			bool L_111;
			L_111 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(__this, 1, /*hidden argument*/NULL);
			V_23 = L_111;
			bool L_112 = V_23;
			if (!L_112)
			{
				goto IL_02e4;
			}
		}

IL_02c4:
		{
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_113 = V_21;
			int32_t L_114;
			L_114 = SocketException_get_SocketErrorCode_m05A48632F6CC75FBD904E8E1AC56FC6B2577A131(L_113, /*hidden argument*/NULL);
			int32_t L_115 = L_114;
			RuntimeObject * L_116 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketError_tA0135DFDFBD5E43BC2F44D8AAC13CDB444074F80_il2cpp_TypeInfo_var)), &L_115);
			String_t* L_117;
			L_117 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2FB2C3D548AEAEA2F3E1AEAA8D132ED0E13EDF9E)), L_116, /*hidden argument*/NULL);
			IPhotonSocket_EnqueueDebugReturn_m3EFE15EAC913CE16CDE0D9A811C2759F5D54EF7A(__this, 1, L_117, /*hidden argument*/NULL);
		}

IL_02e4:
		{
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_118 = V_21;
			int32_t L_119;
			L_119 = SocketException_get_SocketErrorCode_m05A48632F6CC75FBD904E8E1AC56FC6B2577A131(L_118, /*hidden argument*/NULL);
			if ((((int32_t)L_119) == ((int32_t)((int32_t)10054))))
			{
				goto IL_0302;
			}
		}

IL_02f2:
		{
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_120 = V_21;
			int32_t L_121;
			L_121 = SocketException_get_SocketErrorCode_m05A48632F6CC75FBD904E8E1AC56FC6B2577A131(L_120, /*hidden argument*/NULL);
			G_B58_0 = ((((int32_t)L_121) == ((int32_t)((int32_t)10053)))? 1 : 0);
			goto IL_0303;
		}

IL_0302:
		{
			G_B58_0 = 1;
		}

IL_0303:
		{
			V_24 = (bool)G_B58_0;
			bool L_122 = V_24;
			if (!L_122)
			{
				goto IL_0319;
			}
		}

IL_0309:
		{
			IPhotonSocket_HandleException_mF7643306A79896E98986A71CA9E253F285E7056A(__this, ((int32_t)1041), /*hidden argument*/NULL);
			goto IL_0327;
		}

IL_0319:
		{
			IPhotonSocket_HandleException_mF7643306A79896E98986A71CA9E253F285E7056A(__this, ((int32_t)1039), /*hidden argument*/NULL);
		}

IL_0327:
		{
		}

IL_0328:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_03b3;
		}
	} // end catch (depth: 1)

CATCH_032e:
	{ // begin catch(System.Exception)
		{
			V_25 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			int32_t L_123;
			L_123 = IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline(__this, /*hidden argument*/NULL);
			if ((((int32_t)L_123) == ((int32_t)3)))
			{
				goto IL_0345;
			}
		}

IL_033a:
		{
			int32_t L_124;
			L_124 = IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline(__this, /*hidden argument*/NULL);
			G_B66_0 = ((!(((uint32_t)L_124) <= ((uint32_t)0)))? 1 : 0);
			goto IL_0346;
		}

IL_0345:
		{
			G_B66_0 = 0;
		}

IL_0346:
		{
			V_26 = (bool)G_B66_0;
			bool L_125 = V_26;
			if (!L_125)
			{
				goto IL_03b0;
			}
		}

IL_034c:
		{
			bool L_126;
			L_126 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(__this, 1, /*hidden argument*/NULL);
			V_27 = L_126;
			bool L_127 = V_27;
			if (!L_127)
			{
				goto IL_03a3;
			}
		}

IL_035a:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_128 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)6);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_129 = L_128;
			ArrayElementTypeCheck (L_129, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF)));
			(L_129)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF)));
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_130 = L_129;
			int32_t L_131;
			L_131 = IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline(__this, /*hidden argument*/NULL);
			int32_t L_132 = L_131;
			RuntimeObject * L_133 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PhotonSocketState_tC9A83DC96CCE242EDCFFF9861BF05C2ADA7FFF9C_il2cpp_TypeInfo_var)), &L_132);
			ArrayElementTypeCheck (L_130, L_133);
			(L_130)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_133);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_134 = L_130;
			ArrayElementTypeCheck (L_134, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3)));
			(L_134)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3)));
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_135 = L_134;
			String_t* L_136;
			L_136 = IPhotonSocket_get_ServerAddress_mC37D2749260619C6182508E30BFF8D267D4C06C5_inline(__this, /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_135, L_136);
			(L_135)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_136);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_137 = L_135;
			ArrayElementTypeCheck (L_137, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral57181476910FA4C16EFCC0E7443CD9C417D2514B)));
			(L_137)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral57181476910FA4C16EFCC0E7443CD9C417D2514B)));
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_138 = L_137;
			Exception_t * L_139 = V_25;
			ArrayElementTypeCheck (L_138, L_139);
			(L_138)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_139);
			String_t* L_140;
			L_140 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_138, /*hidden argument*/NULL);
			IPhotonSocket_EnqueueDebugReturn_m3EFE15EAC913CE16CDE0D9A811C2759F5D54EF7A(__this, 1, L_140, /*hidden argument*/NULL);
		}

IL_03a3:
		{
			IPhotonSocket_HandleException_mF7643306A79896E98986A71CA9E253F285E7056A(__this, ((int32_t)1039), /*hidden argument*/NULL);
		}

IL_03b0:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_03b3;
		}
	} // end catch (depth: 1)

IL_03b3:
	{
	}

IL_03b4:
	{
		int32_t L_141;
		L_141 = IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline(__this, /*hidden argument*/NULL);
		V_28 = (bool)((((int32_t)L_141) == ((int32_t)2))? 1 : 0);
		bool L_142 = V_28;
		if (L_142)
		{
			goto IL_001a;
		}
	}
	{
		bool L_143;
		L_143 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean ExitGames.Client.Photon.IPhotonSocket::Disconnect() */, __this);
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
// System.Void ExitGames.Client.Photon.SocketUdp::.ctor(ExitGames.Client.Photon.PeerBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketUdp__ctor_m6650DE6FDAF661DEEF5745E987C70A7384B9593C (SocketUdp_tFB179A3EA0410DDDDCAAF22E21B1445810D4BAFA * __this, PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * ___npeer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A2D33772A2965A6EC7A260D6AEF68730D411384);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		__this->set_syncer_12(L_0);
		PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * L_1 = ___npeer0;
		IPhotonSocket__ctor_m71E6E6973C7EE5F9C600D5EE84E3CDF9B7043B0F(__this, L_1, /*hidden argument*/NULL);
		bool L_2;
		L_2 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(__this, 3, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_4;
		L_4 = IPhotonSocket_get_Listener_mE1767799EA32C7BBC23E3F1CE0F3E9DD1F508514(__this, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var, L_4, 3, _stringLiteral2A2D33772A2965A6EC7A260D6AEF68730D411384);
	}

IL_0033:
	{
		((IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF *)__this)->set_PollReceive_2((bool)0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.SocketUdp::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketUdp_Finalize_mF49A126A509D5AE573A8A58275A70D7931BE0967 (SocketUdp_tFB179A3EA0410DDDDCAAF22E21B1445810D4BAFA * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		SocketUdp_Dispose_mFD0D1EEDD507BE74D36127075E54C082DE579D0F(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x13, IL_0013)
	}

IL_0013:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.SocketUdp::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketUdp_Dispose_mFD0D1EEDD507BE74D36127075E54C082DE579D0F (SocketUdp_tFB179A3EA0410DDDDCAAF22E21B1445810D4BAFA * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		IPhotonSocket_set_State_m3E012C91299675DDE497811E6E3C71072C5EAC14_inline(__this, 3, /*hidden argument*/NULL);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = __this->get_sock_11();
		V_0 = (bool)((!(((RuntimeObject*)(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0051;
		}
	}
	{
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_2 = __this->get_sock_11();
			bool L_3;
			L_3 = Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline(L_2, /*hidden argument*/NULL);
			V_1 = L_3;
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0035;
			}
		}

IL_0027:
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_5 = __this->get_sock_11();
			Socket_Close_m24AB78F5DAC1C39BB7FFB30A9620B2B07E01DEEB(L_5, /*hidden argument*/NULL);
		}

IL_0035:
		{
			goto IL_0050;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0038;
		}
		throw e;
	}

CATCH_0038:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_6 = V_2;
		String_t* L_7;
		L_7 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral665908BFFBC2A550A5A9FF79CD8BAB040074DC9A)), L_6, /*hidden argument*/NULL);
		IPhotonSocket_EnqueueDebugReturn_m3EFE15EAC913CE16CDE0D9A811C2759F5D54EF7A(__this, 3, L_7, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0050;
	} // end catch (depth: 1)

IL_0050:
	{
	}

IL_0051:
	{
		__this->set_sock_11((Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)NULL);
		IPhotonSocket_set_State_m3E012C91299675DDE497811E6E3C71072C5EAC14_inline(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketUdp::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SocketUdp_Connect_m610E32873E13C6FE2F55445CA9E986520DF840D7 (SocketUdp_tFB179A3EA0410DDDDCAAF22E21B1445810D4BAFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketUdp_DnsAndConnect_mDBCB843FE2B9753BEC5BFE76F2CA6B6EC2DDD58E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		RuntimeObject * L_0 = __this->get_syncer_12();
		V_1 = L_0;
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			bool L_2;
			L_2 = IPhotonSocket_Connect_mE8C1D75665883EF1B17833D074D00A24D00E927D(__this, /*hidden argument*/NULL);
			V_2 = L_2;
			bool L_3 = V_2;
			V_3 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
			bool L_4 = V_3;
			if (!L_4)
			{
				goto IL_0025;
			}
		}

IL_001f:
		{
			V_4 = (bool)0;
			IL2CPP_LEAVE(0x5E, FINALLY_0030);
		}

IL_0025:
		{
			IPhotonSocket_set_State_m3E012C91299675DDE497811E6E3C71072C5EAC14_inline(__this, 1, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x38, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		RuntimeObject * L_5 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
		IL2CPP_JUMP_TBL(0x38, IL_0038)
	}

IL_0038:
	{
		ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * L_6 = (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 *)il2cpp_codegen_object_new(ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F(L_6, __this, (intptr_t)((intptr_t)SocketUdp_DnsAndConnect_mDBCB843FE2B9753BEC5BFE76F2CA6B6EC2DDD58E_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_7 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90(L_7, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_8 = V_0;
		Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0(L_8, (bool)1, /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_9 = V_0;
		Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B(L_9, /*hidden argument*/NULL);
		V_4 = (bool)1;
		goto IL_005e;
	}

IL_005e:
	{
		bool L_10 = V_4;
		return L_10;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketUdp::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SocketUdp_Disconnect_mB89E4DA3B077A5EC5FA773BD740144B1434D7A2E (SocketUdp_tFB179A3EA0410DDDDCAAF22E21B1445810D4BAFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85278D80D353BA481AED82DD9BDB4E99BB5FD7B2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	Exception_t * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		bool L_0;
		L_0 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(__this, 3, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		IPhotonSocket_EnqueueDebugReturn_m3EFE15EAC913CE16CDE0D9A811C2759F5D54EF7A(__this, 3, _stringLiteral85278D80D353BA481AED82DD9BDB4E99BB5FD7B2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		RuntimeObject * L_2 = __this->get_syncer_12();
		V_1 = L_2;
		RuntimeObject * L_3 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_3, /*hidden argument*/NULL);
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		{
			IPhotonSocket_set_State_m3E012C91299675DDE497811E6E3C71072C5EAC14_inline(__this, 3, /*hidden argument*/NULL);
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_4 = __this->get_sock_11();
			V_2 = (bool)((!(((RuntimeObject*)(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_0078;
			}
		}

IL_003f:
		{
		}

IL_0040:
		try
		{ // begin try (depth: 2)
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_6 = __this->get_sock_11();
			Socket_Close_m24AB78F5DAC1C39BB7FFB30A9620B2B07E01DEEB(L_6, /*hidden argument*/NULL);
			goto IL_0077;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0050;
			}
			throw e;
		}

CATCH_0050:
		{ // begin catch(System.Exception)
			{
				V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
				bool L_7;
				L_7 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(__this, 3, /*hidden argument*/NULL);
				V_4 = L_7;
				bool L_8 = V_4;
				if (!L_8)
				{
					goto IL_0074;
				}
			}

IL_005f:
			{
				Exception_t * L_9 = V_3;
				String_t* L_10;
				L_10 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA2076A563A22DA628C30B53A80EA51616D9C8C7C)), L_9, /*hidden argument*/NULL);
				IPhotonSocket_EnqueueDebugReturn_m3EFE15EAC913CE16CDE0D9A811C2759F5D54EF7A(__this, 3, L_10, /*hidden argument*/NULL);
			}

IL_0074:
			{
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0077;
			}
		} // end catch (depth: 2)

IL_0077:
		{
		}

IL_0078:
		{
			IPhotonSocket_set_State_m3E012C91299675DDE497811E6E3C71072C5EAC14_inline(__this, 0, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x8B, FINALLY_0083);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0083;
	}

FINALLY_0083:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(131)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(131)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8B, IL_008b)
	}

IL_008b:
	{
		V_5 = (bool)1;
		goto IL_0090;
	}

IL_0090:
	{
		bool L_12 = V_5;
		return L_12;
	}
}
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketUdp::Send(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketUdp_Send_m21849F5D94EEEFACFCEC735E65718A6576E7F9E6 (SocketUdp_tFB179A3EA0410DDDDCAAF22E21B1445810D4BAFA * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___length1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	Exception_t * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	String_t* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	int32_t G_B4_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B15_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B15_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B15_2 = NULL;
	String_t* G_B15_3 = NULL;
	int32_t G_B14_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B14_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B14_2 = NULL;
	String_t* G_B14_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B16_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B16_3 = NULL;
	String_t* G_B16_4 = NULL;
	int32_t G_B18_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B18_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B18_2 = NULL;
	String_t* G_B18_3 = NULL;
	int32_t G_B17_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B17_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B17_2 = NULL;
	String_t* G_B17_3 = NULL;
	String_t* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B19_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B19_3 = NULL;
	String_t* G_B19_4 = NULL;
	int32_t G_B22_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B22_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B22_2 = NULL;
	String_t* G_B22_3 = NULL;
	int32_t G_B22_4 = 0;
	SocketUdp_tFB179A3EA0410DDDDCAAF22E21B1445810D4BAFA * G_B22_5 = NULL;
	int32_t G_B21_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B21_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B21_2 = NULL;
	String_t* G_B21_3 = NULL;
	int32_t G_B21_4 = 0;
	SocketUdp_tFB179A3EA0410DDDDCAAF22E21B1445810D4BAFA * G_B21_5 = NULL;
	String_t* G_B23_0 = NULL;
	int32_t G_B23_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B23_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B23_3 = NULL;
	String_t* G_B23_4 = NULL;
	int32_t G_B23_5 = 0;
	SocketUdp_tFB179A3EA0410DDDDCAAF22E21B1445810D4BAFA * G_B23_6 = NULL;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = __this->get_sock_11();
			if (!L_0)
			{
				goto IL_001a;
			}
		}

IL_000a:
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_1 = __this->get_sock_11();
			bool L_2;
			L_2 = Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline(L_1, /*hidden argument*/NULL);
			G_B4_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
			goto IL_001b;
		}

IL_001a:
		{
			G_B4_0 = 1;
		}

IL_001b:
		{
			V_0 = (bool)G_B4_0;
			bool L_3 = V_0;
			if (!L_3)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			V_1 = 1;
			goto IL_017e;
		}

IL_0027:
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_4 = __this->get_sock_11();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___data0;
			int32_t L_6 = ___length1;
			int32_t L_7;
			L_7 = Socket_Send_mF70EF17396CEA161F628B1923DA32463720D9A1E(L_4, L_5, 0, L_6, 0, /*hidden argument*/NULL);
			goto IL_017a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003d;
		}
		throw e;
	}

CATCH_003d:
	{ // begin catch(System.Exception)
		{
			V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			int32_t L_8;
			L_8 = IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline(__this, /*hidden argument*/NULL);
			if ((((int32_t)L_8) == ((int32_t)3)))
			{
				goto IL_0053;
			}
		}

IL_0048:
		{
			int32_t L_9;
			L_9 = IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline(__this, /*hidden argument*/NULL);
			G_B10_0 = ((!(((uint32_t)L_9) <= ((uint32_t)0)))? 1 : 0);
			goto IL_0054;
		}

IL_0053:
		{
			G_B10_0 = 0;
		}

IL_0054:
		{
			V_3 = (bool)G_B10_0;
			bool L_10 = V_3;
			if (!L_10)
			{
				goto IL_0176;
			}
		}

IL_005b:
		{
			bool L_11;
			L_11 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(__this, 3, /*hidden argument*/NULL);
			V_4 = L_11;
			bool L_12 = V_4;
			if (!L_12)
			{
				goto IL_0146;
			}
		}

IL_006c:
		{
			V_5 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709));
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_13 = __this->get_sock_11();
			V_6 = (bool)((!(((RuntimeObject*)(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)L_13) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_14 = V_6;
			if (!L_14)
			{
				goto IL_00eb;
			}
		}

IL_0083:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)4);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_15;
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_17 = __this->get_sock_11();
			EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_18;
			L_18 = Socket_get_LocalEndPoint_m327EB4A6DD9260037F648B5ABA719BB305D40EB0(L_17, /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_16, L_18);
			(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_18);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = L_16;
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_20 = __this->get_sock_11();
			EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_21;
			L_21 = Socket_get_RemoteEndPoint_m262E08E8CD25A908CB87450FC73683AB9DF636A7(L_20, /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_19, L_21);
			(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_21);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = L_19;
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_23 = __this->get_sock_11();
			bool L_24;
			L_24 = Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline(L_23, /*hidden argument*/NULL);
			G_B14_0 = 2;
			G_B14_1 = L_22;
			G_B14_2 = L_22;
			G_B14_3 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral105DCD844D9A45876F13A3503C14C3FC3A5186BA));
			if (L_24)
			{
				G_B15_0 = 2;
				G_B15_1 = L_22;
				G_B15_2 = L_22;
				G_B15_3 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral105DCD844D9A45876F13A3503C14C3FC3A5186BA));
				goto IL_00c1;
			}
		}

IL_00ba:
		{
			G_B16_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3CC8D7011607DEE69C89FE518BB89125A3FD0309));
			G_B16_1 = G_B14_0;
			G_B16_2 = G_B14_1;
			G_B16_3 = G_B14_2;
			G_B16_4 = G_B14_3;
			goto IL_00c6;
		}

IL_00c1:
		{
			G_B16_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral872832AF3EB23DF490D84F89198394B33CB88A29));
			G_B16_1 = G_B15_0;
			G_B16_2 = G_B15_1;
			G_B16_3 = G_B15_2;
			G_B16_4 = G_B15_3;
		}

IL_00c6:
		{
			ArrayElementTypeCheck (G_B16_2, G_B16_0);
			(G_B16_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B16_1), (RuntimeObject *)G_B16_0);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = G_B16_3;
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_26 = __this->get_sock_11();
			bool L_27;
			L_27 = Socket_get_IsBound_m67D559154A1B175E8B384DF0DBCC98EB0EA53830_inline(L_26, /*hidden argument*/NULL);
			G_B17_0 = 3;
			G_B17_1 = L_25;
			G_B17_2 = L_25;
			G_B17_3 = G_B16_4;
			if (L_27)
			{
				G_B18_0 = 3;
				G_B18_1 = L_25;
				G_B18_2 = L_25;
				G_B18_3 = G_B16_4;
				goto IL_00dd;
			}
		}

IL_00d6:
		{
			G_B19_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC8C9B128ACA303C17E5837E2ACD6F203E1E4CC69));
			G_B19_1 = G_B17_0;
			G_B19_2 = G_B17_1;
			G_B19_3 = G_B17_2;
			G_B19_4 = G_B17_3;
			goto IL_00e2;
		}

IL_00dd:
		{
			G_B19_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9CEE2204F2243F41DEEA3BB1E28F0E8465F59A5B));
			G_B19_1 = G_B18_0;
			G_B19_2 = G_B18_1;
			G_B19_3 = G_B18_2;
			G_B19_4 = G_B18_3;
		}

IL_00e2:
		{
			ArrayElementTypeCheck (G_B19_2, G_B19_0);
			(G_B19_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B19_1), (RuntimeObject *)G_B19_0);
			String_t* L_28;
			L_28 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(G_B19_4, G_B19_3, /*hidden argument*/NULL);
			V_5 = L_28;
		}

IL_00eb:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_29 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)5);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_30 = L_29;
			String_t* L_31;
			L_31 = IPhotonSocket_get_ServerAddress_mC37D2749260619C6182508E30BFF8D267D4C06C5_inline(__this, /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_30, L_31);
			(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_31);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_32 = L_30;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var)));
			int32_t L_33;
			L_33 = SupportClass_GetTickCount_mDD38F1B27059098AE7B5CC7B2072AAFC43D2D145(/*hidden argument*/NULL);
			PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * L_34 = ((IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF *)__this)->get_peerBase_0();
			int32_t L_35 = L_34->get_timeBase_28();
			int32_t L_36 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)L_35));
			RuntimeObject * L_37 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_36);
			ArrayElementTypeCheck (L_32, L_37);
			(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_37);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_38 = L_32;
			bool L_39;
			L_39 = IPhotonSocket_get_AddressResolvedAsIpv6_m8B9FA46DEC433CF686621624F90CDA7BF94B10EE_inline(__this, /*hidden argument*/NULL);
			G_B21_0 = 2;
			G_B21_1 = L_38;
			G_B21_2 = L_38;
			G_B21_3 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC8B903907D31435907E8AF7300E995E55A75F00B));
			G_B21_4 = 3;
			G_B21_5 = __this;
			if (L_39)
			{
				G_B22_0 = 2;
				G_B22_1 = L_38;
				G_B22_2 = L_38;
				G_B22_3 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC8B903907D31435907E8AF7300E995E55A75F00B));
				G_B22_4 = 3;
				G_B22_5 = __this;
				goto IL_012b;
			}
		}

IL_0124:
		{
			String_t* L_40 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->get_Empty_5();
			G_B23_0 = L_40;
			G_B23_1 = G_B21_0;
			G_B23_2 = G_B21_1;
			G_B23_3 = G_B21_2;
			G_B23_4 = G_B21_3;
			G_B23_5 = G_B21_4;
			G_B23_6 = G_B21_5;
			goto IL_0130;
		}

IL_012b:
		{
			G_B23_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB5FDD5E178BD05010055C518503A047E0BAB175));
			G_B23_1 = G_B22_0;
			G_B23_2 = G_B22_1;
			G_B23_3 = G_B22_2;
			G_B23_4 = G_B22_3;
			G_B23_5 = G_B22_4;
			G_B23_6 = G_B22_5;
		}

IL_0130:
		{
			ArrayElementTypeCheck (G_B23_2, G_B23_0);
			(G_B23_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B23_1), (RuntimeObject *)G_B23_0);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_41 = G_B23_3;
			String_t* L_42 = V_5;
			ArrayElementTypeCheck (L_41, L_42);
			(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_42);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_43 = L_41;
			Exception_t * L_44 = V_2;
			ArrayElementTypeCheck (L_43, L_44);
			(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_44);
			String_t* L_45;
			L_45 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(G_B23_4, L_43, /*hidden argument*/NULL);
			IPhotonSocket_EnqueueDebugReturn_m3EFE15EAC913CE16CDE0D9A811C2759F5D54EF7A(G_B23_6, G_B23_5, L_45, /*hidden argument*/NULL);
		}

IL_0146:
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_46 = __this->get_sock_11();
			bool L_47;
			L_47 = Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline(L_46, /*hidden argument*/NULL);
			V_7 = (bool)((((int32_t)L_47) == ((int32_t)0))? 1 : 0);
			bool L_48 = V_7;
			if (!L_48)
			{
				goto IL_0175;
			}
		}

IL_015a:
		{
			IPhotonSocket_EnqueueDebugReturn_m3EFE15EAC913CE16CDE0D9A811C2759F5D54EF7A(__this, 3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AF74A218C743A64A61DCB2CB5C232805167A4B2)), /*hidden argument*/NULL);
			IPhotonSocket_HandleException_mF7643306A79896E98986A71CA9E253F285E7056A(__this, ((int32_t)1030), /*hidden argument*/NULL);
		}

IL_0175:
		{
		}

IL_0176:
		{
			V_1 = 3;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_017e;
		}
	} // end catch (depth: 1)

IL_017a:
	{
		V_1 = 0;
		goto IL_017e;
	}

IL_017e:
	{
		int32_t L_49 = V_1;
		return L_49;
	}
}
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketUdp::Receive(System.Byte[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketUdp_Receive_m82071976741926EA66EA10CE1342416590987352 (SocketUdp_tFB179A3EA0410DDDDCAAF22E21B1445810D4BAFA * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** ___data0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** L_0 = ___data0;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		V_0 = 2;
		goto IL_0008;
	}

IL_0008:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void ExitGames.Client.Photon.SocketUdp::DnsAndConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketUdp_DnsAndConnect_mDBCB843FE2B9753BEC5BFE76F2CA6B6EC2DDD58E (SocketUdp_tFB179A3EA0410DDDDCAAF22E21B1445810D4BAFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketUdp_ReceiveLoop_m29A1F65FA0A8ED5C8C4AC50155FEB83C50F754A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral191D7F30D495BBE4F52FE89B64D411898274ED12);
		s_Il2CppMethodInitialized = true;
	}
	IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* V_0 = NULL;
	String_t* V_1 = NULL;
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * V_2 = NULL;
	bool V_3 = false;
	IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* V_4 = NULL;
	int32_t V_5 = 0;
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * V_6 = NULL;
	bool V_7 = false;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * V_8 = NULL;
	bool V_9 = false;
	Exception_t * V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	int32_t G_B7_0 = 0;
	int32_t G_B21_0 = 0;
	{
		String_t* L_0;
		L_0 = IPhotonSocket_get_ServerAddress_mC37D2749260619C6182508E30BFF8D267D4C06C5_inline(__this, /*hidden argument*/NULL);
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_1;
		L_1 = IPhotonSocket_GetIpAddresses_m4C6A83421725E73E3C9E55A93B894327FAB905D6(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_2 = V_0;
		V_3 = (bool)((((RuntimeObject*)(IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB*)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		goto IL_0202;
	}

IL_001c:
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_1 = L_4;
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_5 = V_0;
		V_4 = L_5;
		V_5 = 0;
		goto IL_0146;
	}

IL_002e:
	{
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_6 = V_4;
		int32_t L_7 = V_5;
		int32_t L_8 = L_7;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_6 = L_9;
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		{
			IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_10 = V_6;
			int32_t L_11;
			L_11 = IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline(L_10, /*hidden argument*/NULL);
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_12 = (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)il2cpp_codegen_object_new(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var);
			Socket__ctor_m5A4B335AEC1450ABE31CF1151F3F5A93D9D0280C(L_12, L_11, 2, ((int32_t)17), /*hidden argument*/NULL);
			__this->set_sock_11(L_12);
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_13 = __this->get_sock_11();
			IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_14 = V_6;
			int32_t L_15;
			L_15 = IPhotonSocket_get_ServerPort_m87E9048311458445C04EFE6CFAC0B672B9BC96CD_inline(__this, /*hidden argument*/NULL);
			Socket_Connect_mA7BB443E475AC35010CFB96E8F7091D34AC61247(L_13, L_14, L_15, /*hidden argument*/NULL);
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_16 = __this->get_sock_11();
			if (!L_16)
			{
				goto IL_0075;
			}
		}

IL_0068:
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_17 = __this->get_sock_11();
			bool L_18;
			L_18 = Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline(L_17, /*hidden argument*/NULL);
			G_B7_0 = ((int32_t)(L_18));
			goto IL_0076;
		}

IL_0075:
		{
			G_B7_0 = 0;
		}

IL_0076:
		{
			V_7 = (bool)G_B7_0;
			bool L_19 = V_7;
			if (!L_19)
			{
				goto IL_0082;
			}
		}

IL_007c:
		{
			goto IL_0151;
		}

IL_0082:
		{
			goto IL_013f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0088;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0108;
		}
		throw e;
	}

CATCH_0088:
	{ // begin catch(System.Net.Sockets.SocketException)
		{
			V_8 = ((SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *));
			bool L_20;
			L_20 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(__this, 2, /*hidden argument*/NULL);
			V_9 = L_20;
			bool L_21 = V_9;
			if (!L_21)
			{
				goto IL_0105;
			}
		}

IL_0098:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)5);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = L_22;
			String_t* L_24 = V_1;
			ArrayElementTypeCheck (L_23, L_24);
			(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_24);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = L_23;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_26 = V_8;
			ArrayElementTypeCheck (L_25, L_26);
			(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_26);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = L_25;
			ArrayElementTypeCheck (L_27, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745)));
			(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745)));
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_28 = L_27;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_29 = V_8;
			int32_t L_30;
			L_30 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Runtime.InteropServices.ExternalException::get_ErrorCode() */, L_29);
			int32_t L_31 = L_30;
			RuntimeObject * L_32 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_31);
			ArrayElementTypeCheck (L_28, L_32);
			(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_32);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_33 = L_28;
			ArrayElementTypeCheck (L_33, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF712C5F62331F2870DB319ED66CDF53B831F3CA1)));
			(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF712C5F62331F2870DB319ED66CDF53B831F3CA1)));
			String_t* L_34;
			L_34 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_33, /*hidden argument*/NULL);
			V_1 = L_34;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_35 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)4);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = L_35;
			ArrayElementTypeCheck (L_36, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral86A8294451A16C9100336EDF55F2B68CBD45BD67)));
			(L_36)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral86A8294451A16C9100336EDF55F2B68CBD45BD67)));
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_37 = L_36;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_38 = V_8;
			ArrayElementTypeCheck (L_37, L_38);
			(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_38);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_39 = L_37;
			ArrayElementTypeCheck (L_39, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD6789EA58E424F90511FD4613F868E6EBBA26766)));
			(L_39)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD6789EA58E424F90511FD4613F868E6EBBA26766)));
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_40 = L_39;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_41 = V_8;
			int32_t L_42;
			L_42 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Runtime.InteropServices.ExternalException::get_ErrorCode() */, L_41);
			int32_t L_43 = L_42;
			RuntimeObject * L_44 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_43);
			ArrayElementTypeCheck (L_40, L_44);
			(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_44);
			String_t* L_45;
			L_45 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_40, /*hidden argument*/NULL);
			IPhotonSocket_EnqueueDebugReturn_m3EFE15EAC913CE16CDE0D9A811C2759F5D54EF7A(__this, 2, L_45, /*hidden argument*/NULL);
		}

IL_0105:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_013f;
		}
	} // end catch (depth: 1)

CATCH_0108:
	{ // begin catch(System.Exception)
		{
			V_10 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			bool L_46;
			L_46 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(__this, 2, /*hidden argument*/NULL);
			V_11 = L_46;
			bool L_47 = V_11;
			if (!L_47)
			{
				goto IL_013c;
			}
		}

IL_0118:
		{
			String_t* L_48 = V_1;
			Exception_t * L_49 = V_10;
			String_t* L_50;
			L_50 = String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57(L_48, L_49, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF712C5F62331F2870DB319ED66CDF53B831F3CA1)), /*hidden argument*/NULL);
			V_1 = L_50;
			Exception_t * L_51 = V_10;
			String_t* L_52;
			L_52 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB73EE191F0E9F1AF4D345769EC47718AC55BF4D3)), L_51, /*hidden argument*/NULL);
			IPhotonSocket_EnqueueDebugReturn_m3EFE15EAC913CE16CDE0D9A811C2759F5D54EF7A(__this, 2, L_52, /*hidden argument*/NULL);
		}

IL_013c:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_013f;
		}
	} // end catch (depth: 1)

IL_013f:
	{
		int32_t L_53 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
	}

IL_0146:
	{
		int32_t L_54 = V_5;
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_55 = V_4;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0151:
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_56 = __this->get_sock_11();
		if (!L_56)
		{
			goto IL_0169;
		}
	}
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_57 = __this->get_sock_11();
		bool L_58;
		L_58 = Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline(L_57, /*hidden argument*/NULL);
		G_B21_0 = ((((int32_t)L_58) == ((int32_t)0))? 1 : 0);
		goto IL_016a;
	}

IL_0169:
	{
		G_B21_0 = 1;
	}

IL_016a:
	{
		V_12 = (bool)G_B21_0;
		bool L_59 = V_12;
		if (!L_59)
		{
			goto IL_01a1;
		}
	}
	{
		bool L_60;
		L_60 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(__this, 1, /*hidden argument*/NULL);
		V_13 = L_60;
		bool L_61 = V_13;
		if (!L_61)
		{
			goto IL_0193;
		}
	}
	{
		String_t* L_62 = V_1;
		String_t* L_63;
		L_63 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral191D7F30D495BBE4F52FE89B64D411898274ED12, L_62, /*hidden argument*/NULL);
		IPhotonSocket_EnqueueDebugReturn_m3EFE15EAC913CE16CDE0D9A811C2759F5D54EF7A(__this, 1, L_63, /*hidden argument*/NULL);
	}

IL_0193:
	{
		IPhotonSocket_HandleException_mF7643306A79896E98986A71CA9E253F285E7056A(__this, ((int32_t)1023), /*hidden argument*/NULL);
		goto IL_0202;
	}

IL_01a1:
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_64 = __this->get_sock_11();
		int32_t L_65;
		L_65 = Socket_get_AddressFamily_m390B53FAAF0DFF8E8BE844F83AFB06D9E53D891B_inline(L_64, /*hidden argument*/NULL);
		IPhotonSocket_set_AddressResolvedAsIpv6_mC0250298B4648ED31FA30D7FCA8309A20DC6B2E8_inline(__this, (bool)((((int32_t)L_65) == ((int32_t)((int32_t)23)))? 1 : 0), /*hidden argument*/NULL);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_66 = __this->get_sock_11();
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_67;
		L_67 = Socket_get_RemoteEndPoint_m262E08E8CD25A908CB87450FC73683AB9DF636A7(L_66, /*hidden argument*/NULL);
		String_t* L_68;
		L_68 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_67);
		IPhotonSocket_set_ServerIpAddress_m700599277934976851AB99868552BFB7DFFD356B_inline(L_68, /*hidden argument*/NULL);
		IPhotonSocket_set_State_m3E012C91299675DDE497811E6E3C71072C5EAC14_inline(__this, 2, /*hidden argument*/NULL);
		PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * L_69 = ((IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF *)__this)->get_peerBase_0();
		VirtActionInvoker0::Invoke(7 /* System.Void ExitGames.Client.Photon.PeerBase::OnConnect() */, L_69);
		ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * L_70 = (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 *)il2cpp_codegen_object_new(ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F(L_70, __this, (intptr_t)((intptr_t)SocketUdp_ReceiveLoop_m29A1F65FA0A8ED5C8C4AC50155FEB83C50F754A3_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_71 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90(L_71, L_70, /*hidden argument*/NULL);
		V_2 = L_71;
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_72 = V_2;
		Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0(L_72, (bool)1, /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_73 = V_2;
		Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B(L_73, /*hidden argument*/NULL);
	}

IL_0202:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.SocketUdp::ReceiveLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketUdp_ReceiveLoop_m29A1F65FA0A8ED5C8C4AC50155FEB83C50F754A3 (SocketUdp_tFB179A3EA0410DDDDCAAF22E21B1445810D4BAFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	int32_t V_1 = 0;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Exception_t * V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	{
		int32_t L_0;
		L_0 = IPhotonSocket_get_MTU_m47C1172A728F33C1A9F152E3C6F90B586D0BE9C8(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		goto IL_0194;
	}

IL_0012:
	{
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_2 = __this->get_sock_11();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		int32_t L_4;
		L_4 = Socket_Receive_mD76EDDF7BFF5A9AB3D7FC197A13B8CF024DEC482(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		int32_t L_6 = V_1;
		IPhotonSocket_HandleReceivedDatagram_mCF72964805372D053B54F92E2BA4B53F9845FC07(__this, L_5, L_6, (bool)1, /*hidden argument*/NULL);
		goto IL_0193;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0031;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00fc;
		}
		throw e;
	}

CATCH_0031:
	{ // begin catch(System.Net.Sockets.SocketException)
		{
			V_2 = ((SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *));
			int32_t L_7;
			L_7 = IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline(__this, /*hidden argument*/NULL);
			if ((((int32_t)L_7) == ((int32_t)3)))
			{
				goto IL_0047;
			}
		}

IL_003c:
		{
			int32_t L_8;
			L_8 = IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline(__this, /*hidden argument*/NULL);
			G_B6_0 = ((!(((uint32_t)L_8) <= ((uint32_t)0)))? 1 : 0);
			goto IL_0048;
		}

IL_0047:
		{
			G_B6_0 = 0;
		}

IL_0048:
		{
			V_3 = (bool)G_B6_0;
			bool L_9 = V_3;
			if (!L_9)
			{
				goto IL_00f6;
			}
		}

IL_004f:
		{
			bool L_10;
			L_10 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(__this, 1, /*hidden argument*/NULL);
			V_4 = L_10;
			bool L_11 = V_4;
			if (!L_11)
			{
				goto IL_00e9;
			}
		}

IL_0060:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)((int32_t)12));
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_12;
			ArrayElementTypeCheck (L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF)));
			(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF)));
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_13;
			int32_t L_15;
			L_15 = IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline(__this, /*hidden argument*/NULL);
			int32_t L_16 = L_15;
			RuntimeObject * L_17 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PhotonSocketState_tC9A83DC96CCE242EDCFFF9861BF05C2ADA7FFF9C_il2cpp_TypeInfo_var)), &L_16);
			ArrayElementTypeCheck (L_14, L_17);
			(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_17);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_14;
			ArrayElementTypeCheck (L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3)));
			(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3)));
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = L_18;
			String_t* L_20;
			L_20 = IPhotonSocket_get_ServerAddress_mC37D2749260619C6182508E30BFF8D267D4C06C5_inline(__this, /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_19, L_20);
			(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_20);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = L_19;
			ArrayElementTypeCheck (L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D09DA33FDC3D1BC48C84D54B554B437D7EB433B)));
			(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D09DA33FDC3D1BC48C84D54B554B437D7EB433B)));
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = L_21;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_23 = V_2;
			int32_t L_24;
			L_24 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Runtime.InteropServices.ExternalException::get_ErrorCode() */, L_23);
			int32_t L_25 = L_24;
			RuntimeObject * L_26 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_25);
			ArrayElementTypeCheck (L_22, L_26);
			(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_26);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = L_22;
			ArrayElementTypeCheck (L_27, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7D39E360ACE7C6B120D7DEAA16B87D3B72EF7DD)));
			(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7D39E360ACE7C6B120D7DEAA16B87D3B72EF7DD)));
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_28 = L_27;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_29 = V_2;
			int32_t L_30;
			L_30 = SocketException_get_SocketErrorCode_m05A48632F6CC75FBD904E8E1AC56FC6B2577A131(L_29, /*hidden argument*/NULL);
			int32_t L_31 = L_30;
			RuntimeObject * L_32 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketError_tA0135DFDFBD5E43BC2F44D8AAC13CDB444074F80_il2cpp_TypeInfo_var)), &L_31);
			ArrayElementTypeCheck (L_28, L_32);
			(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_32);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_33 = L_28;
			ArrayElementTypeCheck (L_33, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCCD622A0C172A17233733204AD188DD1F1207FAC)));
			(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCCD622A0C172A17233733204AD188DD1F1207FAC)));
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_34 = L_33;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_35 = V_2;
			String_t* L_36;
			L_36 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_35);
			ArrayElementTypeCheck (L_34, L_36);
			(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)L_36);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_37 = L_34;
			ArrayElementTypeCheck (L_37, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745)));
			(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745)));
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_38 = L_37;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_39 = V_2;
			ArrayElementTypeCheck (L_38, L_39);
			(L_38)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject *)L_39);
			String_t* L_40;
			L_40 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_38, /*hidden argument*/NULL);
			IPhotonSocket_EnqueueDebugReturn_m3EFE15EAC913CE16CDE0D9A811C2759F5D54EF7A(__this, 1, L_40, /*hidden argument*/NULL);
		}

IL_00e9:
		{
			IPhotonSocket_HandleException_mF7643306A79896E98986A71CA9E253F285E7056A(__this, ((int32_t)1039), /*hidden argument*/NULL);
		}

IL_00f6:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0193;
		}
	} // end catch (depth: 1)

CATCH_00fc:
	{ // begin catch(System.Exception)
		{
			V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			int32_t L_41;
			L_41 = IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline(__this, /*hidden argument*/NULL);
			if ((((int32_t)L_41) == ((int32_t)3)))
			{
				goto IL_0113;
			}
		}

IL_0108:
		{
			int32_t L_42;
			L_42 = IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline(__this, /*hidden argument*/NULL);
			G_B14_0 = ((!(((uint32_t)L_42) <= ((uint32_t)0)))? 1 : 0);
			goto IL_0114;
		}

IL_0113:
		{
			G_B14_0 = 0;
		}

IL_0114:
		{
			V_6 = (bool)G_B14_0;
			bool L_43 = V_6;
			if (!L_43)
			{
				goto IL_0190;
			}
		}

IL_011a:
		{
			bool L_44;
			L_44 = IPhotonSocket_ReportDebugOfLevel_m3C23C3764779312D5A76A39CD3A15C8462178380(__this, 1, /*hidden argument*/NULL);
			V_7 = L_44;
			bool L_45 = V_7;
			if (!L_45)
			{
				goto IL_0183;
			}
		}

IL_0128:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_46 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)8);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_47 = L_46;
			ArrayElementTypeCheck (L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF)));
			(L_47)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF)));
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_48 = L_47;
			int32_t L_49;
			L_49 = IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline(__this, /*hidden argument*/NULL);
			int32_t L_50 = L_49;
			RuntimeObject * L_51 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PhotonSocketState_tC9A83DC96CCE242EDCFFF9861BF05C2ADA7FFF9C_il2cpp_TypeInfo_var)), &L_50);
			ArrayElementTypeCheck (L_48, L_51);
			(L_48)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_51);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_52 = L_48;
			ArrayElementTypeCheck (L_52, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3)));
			(L_52)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3)));
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_53 = L_52;
			String_t* L_54;
			L_54 = IPhotonSocket_get_ServerAddress_mC37D2749260619C6182508E30BFF8D267D4C06C5_inline(__this, /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_53, L_54);
			(L_53)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_54);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_55 = L_53;
			ArrayElementTypeCheck (L_55, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC6F3CFE29387EC26E2DA25035AE8EFD559875EF5)));
			(L_55)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC6F3CFE29387EC26E2DA25035AE8EFD559875EF5)));
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_56 = L_55;
			Exception_t * L_57 = V_5;
			String_t* L_58;
			L_58 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_57);
			ArrayElementTypeCheck (L_56, L_58);
			(L_56)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_58);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_59 = L_56;
			ArrayElementTypeCheck (L_59, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1D13C9FF2BABB29CC1B62A9FA42C9A371FA95548)));
			(L_59)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1D13C9FF2BABB29CC1B62A9FA42C9A371FA95548)));
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_60 = L_59;
			Exception_t * L_61 = V_5;
			ArrayElementTypeCheck (L_60, L_61);
			(L_60)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_61);
			String_t* L_62;
			L_62 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_60, /*hidden argument*/NULL);
			IPhotonSocket_EnqueueDebugReturn_m3EFE15EAC913CE16CDE0D9A811C2759F5D54EF7A(__this, 1, L_62, /*hidden argument*/NULL);
		}

IL_0183:
		{
			IPhotonSocket_HandleException_mF7643306A79896E98986A71CA9E253F285E7056A(__this, ((int32_t)1039), /*hidden argument*/NULL);
		}

IL_0190:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0193;
		}
	} // end catch (depth: 1)

IL_0193:
	{
	}

IL_0194:
	{
		int32_t L_63;
		L_63 = IPhotonSocket_get_State_mB7559AF058FF693702A83F3979A38F7B519E1697_inline(__this, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)L_63) == ((int32_t)2))? 1 : 0);
		bool L_64 = V_8;
		if (L_64)
		{
			goto IL_0012;
		}
	}
	{
		bool L_65;
		L_65 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean ExitGames.Client.Photon.IPhotonSocket::Disconnect() */, __this);
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
// System.Void ExitGames.Client.Photon.StreamBuffer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer__ctor_mCD82E110B43F1667367053A5E72397A584E97B7E (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * __this, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___size0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->set_buf_3(L_1);
		return;
	}
}
// System.Void ExitGames.Client.Photon.StreamBuffer::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer__ctor_m359C02BE509B1FA8594480BA59FC8500681F464F (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___buf0;
		__this->set_buf_3(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___buf0;
		__this->set_len_2(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))));
		return;
	}
}
// System.Byte[] ExitGames.Client.Photon.StreamBuffer::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* StreamBuffer_ToArray_m8DFFFA4DB1FEA0D3CC1B63B66A47B14A45907A99 (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	{
		int32_t L_0 = __this->get_len_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_buf_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		int32_t L_4 = __this->get_len_2();
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_2, 0, (RuntimeArray *)(RuntimeArray *)L_3, 0, L_4, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		V_1 = L_5;
		goto IL_0026;
	}

IL_0026:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_1;
		return L_6;
	}
}
// System.Byte[] ExitGames.Client.Photon.StreamBuffer::ToArrayFromPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* StreamBuffer_ToArrayFromPos_m04B59AC14019332F95AD62C5D6FC7478B9F2EE8A (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	bool V_2 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	{
		int32_t L_0 = __this->get_len_2();
		int32_t L_1 = __this->get_pos_1();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		int32_t L_2 = V_0;
		V_2 = (bool)((((int32_t)((((int32_t)L_2) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)0);
		V_3 = L_4;
		goto IL_0044;
	}

IL_0024:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_1 = L_6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = __this->get_buf_3();
		int32_t L_8 = __this->get_pos_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_1;
		int32_t L_10 = V_0;
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_7, L_8, (RuntimeArray *)(RuntimeArray *)L_9, 0, L_10, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_1;
		V_3 = L_11;
		goto IL_0044;
	}

IL_0044:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = V_3;
		return L_12;
	}
}
// System.Void ExitGames.Client.Photon.StreamBuffer::Compact()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer_Compact_mBABE0137532613596891E68DAD9B1486D3EED490 (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0;
		L_0 = StreamBuffer_get_Length_mAB8A53234D8D18994F517A80C8FA69CC480444CF(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = StreamBuffer_get_Position_mB61D5BDF4E82A966CFD147969A2553E4FC8ADBCB(__this, /*hidden argument*/NULL);
		V_0 = ((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1))));
		int64_t L_2 = V_0;
		V_1 = (bool)((((int64_t)L_2) > ((int64_t)((int64_t)((int64_t)0))))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_buf_3();
		int32_t L_5;
		L_5 = StreamBuffer_get_Position_mB61D5BDF4E82A966CFD147969A2553E4FC8ADBCB(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_buf_3();
		int64_t L_7 = V_0;
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_4, L_5, (RuntimeArray *)(RuntimeArray *)L_6, 0, ((int32_t)((int32_t)L_7)), /*hidden argument*/NULL);
	}

IL_0036:
	{
		StreamBuffer_set_Position_mAA9AE04E65AD59F2E361E9CE8278AE1ACE7F0ECC(__this, 0, /*hidden argument*/NULL);
		int64_t L_8 = V_0;
		StreamBuffer_SetLength_m3556630F44704F5289A2D4C9A74CA313EBBE8C86(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] ExitGames.Client.Photon.StreamBuffer::GetBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* StreamBuffer_GetBuffer_m2637CD4CB25C3B82A095F960BC10155293FA4D45 (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_buf_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] ExitGames.Client.Photon.StreamBuffer::GetBufferAndAdvance(System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* StreamBuffer_GetBufferAndAdvance_m8E061091CB92166C7D484E7F759D0B48647CB3EE (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * __this, int32_t ___length0, int32_t* ___offset1, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		int32_t* L_0 = ___offset1;
		int32_t L_1;
		L_1 = StreamBuffer_get_Position_mB61D5BDF4E82A966CFD147969A2553E4FC8ADBCB(__this, /*hidden argument*/NULL);
		*((int32_t*)L_0) = (int32_t)L_1;
		int32_t L_2;
		L_2 = StreamBuffer_get_Position_mB61D5BDF4E82A966CFD147969A2553E4FC8ADBCB(__this, /*hidden argument*/NULL);
		int32_t L_3 = ___length0;
		StreamBuffer_set_Position_mAA9AE04E65AD59F2E361E9CE8278AE1ACE7F0ECC(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_buf_3();
		V_0 = L_4;
		goto IL_0021;
	}

IL_0021:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		return L_5;
	}
}
// System.Int32 ExitGames.Client.Photon.StreamBuffer::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamBuffer_get_Length_mAB8A53234D8D18994F517A80C8FA69CC480444CF (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_len_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 ExitGames.Client.Photon.StreamBuffer::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamBuffer_get_Position_mB61D5BDF4E82A966CFD147969A2553E4FC8ADBCB (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_pos_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void ExitGames.Client.Photon.StreamBuffer::set_Position(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer_set_Position_mAA9AE04E65AD59F2E361E9CE8278AE1ACE7F0ECC (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___value0;
		__this->set_pos_1(L_0);
		int32_t L_1 = __this->get_len_2();
		int32_t L_2 = __this->get_pos_1();
		V_0 = (bool)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_4 = __this->get_pos_1();
		__this->set_len_2(L_4);
		int32_t L_5 = __this->get_len_2();
		bool L_6;
		L_6 = StreamBuffer_CheckSize_m9B122D8362435FB50F708B4EC207D7CB97951536(__this, L_5, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Int64 ExitGames.Client.Photon.StreamBuffer::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t StreamBuffer_Seek_m9C0861B49198D468C8B13E526F39BD0E4772E0B8 (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int64_t V_4 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___origin1;
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_001e;
			}
			case 2:
			{
				goto IL_002a;
			}
		}
	}
	{
		goto IL_0036;
	}

IL_0019:
	{
		int64_t L_2 = ___offset0;
		V_0 = ((int32_t)((int32_t)L_2));
		goto IL_0041;
	}

IL_001e:
	{
		int32_t L_3 = __this->get_pos_1();
		int64_t L_4 = ___offset0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)((int32_t)((int32_t)L_4))));
		goto IL_0041;
	}

IL_002a:
	{
		int32_t L_5 = __this->get_len_2();
		int64_t L_6 = ___offset0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)((int32_t)((int32_t)L_6))));
		goto IL_0041;
	}

IL_0036:
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_7 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral106BEAE98A63EADA0EA9A8EBE5B91FD6703219EE)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamBuffer_Seek_m9C0861B49198D468C8B13E526F39BD0E4772E0B8_RuntimeMethod_var)));
	}

IL_0041:
	{
		int32_t L_8 = V_0;
		V_2 = (bool)((((int32_t)L_8) < ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_10 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4D5285CF040B43C9DE99AD4CEF2B806147D29654)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamBuffer_Seek_m9C0861B49198D468C8B13E526F39BD0E4772E0B8_RuntimeMethod_var)));
	}

IL_0055:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->get_len_2();
		V_3 = (bool)((((int32_t)L_11) > ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_006e;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_14 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A5C73D4EFF4A8952E9F05744AF2498E099ACC1F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamBuffer_Seek_m9C0861B49198D468C8B13E526F39BD0E4772E0B8_RuntimeMethod_var)));
	}

IL_006e:
	{
		int32_t L_15 = V_0;
		__this->set_pos_1(L_15);
		int32_t L_16 = __this->get_pos_1();
		V_4 = ((int64_t)((int64_t)L_16));
		goto IL_0080;
	}

IL_0080:
	{
		int64_t L_17 = V_4;
		return L_17;
	}
}
// System.Void ExitGames.Client.Photon.StreamBuffer::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer_SetLength_m3556630F44704F5289A2D4C9A74CA313EBBE8C86 (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * __this, int64_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int64_t L_0 = ___value0;
		__this->set_len_2(((int32_t)((int32_t)L_0)));
		int32_t L_1 = __this->get_len_2();
		bool L_2;
		L_2 = StreamBuffer_CheckSize_m9B122D8362435FB50F708B4EC207D7CB97951536(__this, L_1, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_pos_1();
		int32_t L_4 = __this->get_len_2();
		V_0 = (bool)((((int32_t)L_3) > ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_6 = __this->get_len_2();
		__this->set_pos_1(L_6);
	}

IL_0036:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.StreamBuffer::SetCapacityMinimum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer_SetCapacityMinimum_m059D9DC4DD33D770F55ED0CD4DE52F1EEE0A185A (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * __this, int32_t ___neededSize0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___neededSize0;
		bool L_1;
		L_1 = StreamBuffer_CheckSize_m9B122D8362435FB50F708B4EC207D7CB97951536(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.StreamBuffer::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamBuffer_Read_m7F3A134D03F86BB785AE0B3E553ABD3A463D0E6F (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		int32_t L_0 = __this->get_len_2();
		int32_t L_1 = __this->get_pos_1();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)((((int32_t)L_2) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		V_2 = 0;
		goto IL_0053;
	}

IL_001f:
	{
		int32_t L_4 = ___count2;
		int32_t L_5 = V_0;
		V_3 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_7 = V_0;
		___count2 = L_7;
	}

IL_002c:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = __this->get_buf_3();
		int32_t L_9 = __this->get_pos_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = ___buffer0;
		int32_t L_11 = ___offset1;
		int32_t L_12 = ___count2;
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_8, L_9, (RuntimeArray *)(RuntimeArray *)L_10, L_11, L_12, /*hidden argument*/NULL);
		int32_t L_13 = __this->get_pos_1();
		int32_t L_14 = ___count2;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14)));
		int32_t L_15 = ___count2;
		V_2 = L_15;
		goto IL_0053;
	}

IL_0053:
	{
		int32_t L_16 = V_2;
		return L_16;
	}
}
// System.Void ExitGames.Client.Photon.StreamBuffer::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer_Write_m177FE649E0A724563BC39C5C690561260D365E5C (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___srcOffset1, int32_t ___count2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_pos_1();
		int32_t L_1 = ___count2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		int32_t L_2 = V_0;
		bool L_3;
		L_3 = StreamBuffer_CheckSize_m9B122D8362435FB50F708B4EC207D7CB97951536(__this, L_2, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		int32_t L_5 = __this->get_len_2();
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_7 = V_0;
		__this->set_len_2(L_7);
	}

IL_0028:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = ___buffer0;
		int32_t L_9 = ___srcOffset1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = __this->get_buf_3();
		int32_t L_11 = __this->get_pos_1();
		int32_t L_12 = ___count2;
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_8, L_9, (RuntimeArray *)(RuntimeArray *)L_10, L_11, L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		__this->set_pos_1(L_13);
		return;
	}
}
// System.Byte ExitGames.Client.Photon.StreamBuffer::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t StreamBuffer_ReadByte_m1D6111443077B74A57D9DC1340E14D0625F2AE39 (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		int32_t L_0 = __this->get_pos_1();
		int32_t L_1 = __this->get_len_2();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		ArrayElementTypeCheck (L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97568619B8C86463263770205820BF59EFA6457B)));
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97568619B8C86463263770205820BF59EFA6457B)));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_4;
		int32_t L_6 = __this->get_pos_1();
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_7);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_5;
		ArrayElementTypeCheck (L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE43E64E1F69748B6D15E9C8A2E69C9A3A3C4D800)));
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE43E64E1F69748B6D15E9C8A2E69C9A3A3C4D800)));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_9;
		int32_t L_11 = __this->get_len_2();
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_12);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_13);
		String_t* L_14;
		L_14 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_10, /*hidden argument*/NULL);
		EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 * L_15 = (EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059_il2cpp_TypeInfo_var)));
		EndOfStreamException__ctor_m62AD97E22305B690B74C4EA6E3EAC36D10CE3800(L_15, L_14, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamBuffer_ReadByte_m1D6111443077B74A57D9DC1340E14D0625F2AE39_RuntimeMethod_var)));
	}

IL_0054:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = __this->get_buf_3();
		int32_t L_17 = __this->get_pos_1();
		V_1 = L_17;
		int32_t L_18 = V_1;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
		int32_t L_19 = V_1;
		int32_t L_20 = L_19;
		uint8_t L_21 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		V_2 = L_21;
		goto IL_006f;
	}

IL_006f:
	{
		uint8_t L_22 = V_2;
		return L_22;
	}
}
// System.Void ExitGames.Client.Photon.StreamBuffer::WriteByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer_WriteByte_m7C8DEB0B74ACCF9230186154AE7AEEA440376CA9 (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->get_pos_1();
		int32_t L_1 = __this->get_len_2();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_3 = __this->get_pos_1();
		__this->set_len_2(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		int32_t L_4 = __this->get_len_2();
		bool L_5;
		L_5 = StreamBuffer_CheckSize_m9B122D8362435FB50F708B4EC207D7CB97951536(__this, L_4, /*hidden argument*/NULL);
	}

IL_0033:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_buf_3();
		int32_t L_7 = __this->get_pos_1();
		V_1 = L_7;
		int32_t L_8 = V_1;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		int32_t L_9 = V_1;
		uint8_t L_10 = ___value0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)L_10);
		return;
	}
}
// System.Void ExitGames.Client.Photon.StreamBuffer::WriteBytes(System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer_WriteBytes_m4ABCB48FADB3995117B2DDE27A768B89D6DAE0E5 (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * __this, uint8_t ___v00, uint8_t ___v11, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_pos_1();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)2));
		int32_t L_1 = __this->get_len_2();
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_4 = V_0;
		__this->set_len_2(L_4);
		int32_t L_5 = __this->get_len_2();
		bool L_6;
		L_6 = StreamBuffer_CheckSize_m9B122D8362435FB50F708B4EC207D7CB97951536(__this, L_5, /*hidden argument*/NULL);
	}

IL_002d:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = __this->get_buf_3();
		int32_t L_8 = __this->get_pos_1();
		V_2 = L_8;
		int32_t L_9 = V_2;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
		int32_t L_10 = V_2;
		uint8_t L_11 = ___v00;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10), (uint8_t)L_11);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = __this->get_buf_3();
		int32_t L_13 = __this->get_pos_1();
		V_2 = L_13;
		int32_t L_14 = V_2;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)));
		int32_t L_15 = V_2;
		uint8_t L_16 = ___v11;
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (uint8_t)L_16);
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.StreamBuffer::CheckSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamBuffer_CheckSize_m9B122D8362435FB50F708B4EC207D7CB97951536 (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * __this, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		int32_t L_0 = ___size0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_buf_3();
		V_2 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_006a;
	}

IL_0018:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_buf_3();
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)));
		int32_t L_4 = V_0;
		V_4 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		V_0 = 1;
	}

IL_002f:
	{
		goto IL_0037;
	}

IL_0031:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)2));
	}

IL_0037:
	{
		int32_t L_7 = ___size0;
		int32_t L_8 = V_0;
		V_5 = (bool)((((int32_t)L_7) > ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_5;
		if (L_9)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_10 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_10);
		V_1 = L_11;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = __this->get_buf_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = __this->get_buf_3();
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_12, 0, (RuntimeArray *)(RuntimeArray *)L_13, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = V_1;
		__this->set_buf_3(L_15);
		V_3 = (bool)1;
		goto IL_006a;
	}

IL_006a:
	{
		bool L_16 = V_3;
		return L_16;
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
// System.Collections.Generic.List`1<System.Reflection.MethodInfo> ExitGames.Client.Photon.SupportClass::GetMethods(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 * SupportClass_GetMethods_m73F4E528CD59BE9BFC3AAB9A6B869C0B50FB2C7B (Type_t * ___type0, Type_t * ___attribute1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6C79F9A026ACCB196BD430F260975C794ED4BD9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3C888313B73CFAA9196022BCADD304B04ED400D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 * V_0 = NULL;
	MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* V_1 = NULL;
	bool V_2 = false;
	List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 * V_3 = NULL;
	MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* V_4 = NULL;
	int32_t V_5 = 0;
	MethodInfo_t * V_6 = NULL;
	bool V_7 = false;
	int32_t G_B6_0 = 0;
	{
		List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 * L_0 = (List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 *)il2cpp_codegen_object_new(List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4_il2cpp_TypeInfo_var);
		List_1__ctor_m3C888313B73CFAA9196022BCADD304B04ED400D2(L_0, /*hidden argument*/List_1__ctor_m3C888313B73CFAA9196022BCADD304B04ED400D2_RuntimeMethod_var);
		V_0 = L_0;
		Type_t * L_1 = ___type0;
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 * L_3 = V_0;
		V_3 = L_3;
		goto IL_0061;
	}

IL_0014:
	{
		Type_t * L_4 = ___type0;
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_5;
		L_5 = VirtFuncInvoker1< MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E*, int32_t >::Invoke(41 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_4, ((int32_t)52));
		V_1 = L_5;
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_6 = V_1;
		V_4 = L_6;
		V_5 = 0;
		goto IL_0055;
	}

IL_0026:
	{
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_7 = V_4;
		int32_t L_8 = V_5;
		int32_t L_9 = L_8;
		MethodInfo_t * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_6 = L_10;
		Type_t * L_11 = ___attribute1;
		if (!L_11)
		{
			goto IL_003c;
		}
	}
	{
		MethodInfo_t * L_12 = V_6;
		Type_t * L_13 = ___attribute1;
		bool L_14;
		L_14 = VirtFuncInvoker2< bool, Type_t *, bool >::Invoke(12 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_12, L_13, (bool)0);
		G_B6_0 = ((int32_t)(L_14));
		goto IL_003d;
	}

IL_003c:
	{
		G_B6_0 = 1;
	}

IL_003d:
	{
		V_7 = (bool)G_B6_0;
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_004e;
		}
	}
	{
		List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 * L_16 = V_0;
		MethodInfo_t * L_17 = V_6;
		List_1_Add_m6C79F9A026ACCB196BD430F260975C794ED4BD9B(L_16, L_17, /*hidden argument*/List_1_Add_m6C79F9A026ACCB196BD430F260975C794ED4BD9B_RuntimeMethod_var);
	}

IL_004e:
	{
		int32_t L_18 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0055:
	{
		int32_t L_19 = V_5;
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_20 = V_4;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_0026;
		}
	}
	{
		List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 * L_21 = V_0;
		V_3 = L_21;
		goto IL_0061;
	}

IL_0061:
	{
		List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 * L_22 = V_3;
		return L_22;
	}
}
// System.Int32 ExitGames.Client.Photon.SupportClass::GetTickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportClass_GetTickCount_mDD38F1B27059098AE7B5CC7B2072AAFC43D2D145 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		IntegerMillisecondsDelegate_tFA09AD82FF54A8E784DF5B0AE0B27FDE48D70A9E * L_0 = ((SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var))->get_IntegerMilliseconds_1();
		int32_t L_1;
		L_1 = IntegerMillisecondsDelegate_Invoke_m44C51909DB47602A5973F532806E64614AA4AF07(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Byte ExitGames.Client.Photon.SupportClass::StartBackgroundCalls(System.Func`1<System.Boolean>,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t SupportClass_StartBackgroundCalls_m2A48A9B2B16ECCA88A21E168CA9955C8586D5877 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___myThread0, int32_t ___millisecondsInterval1, String_t* ___taskName2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m383F9AF12DF2593726E7F63FE9438E8ECEA542BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m36355704B10200ABC2B12900E77E4A9987640F3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF4F192665FB9D652A220E87BD65C5EFF1AA3476D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CStartBackgroundCallsU3Eb__0_mE22D3544AD11BDC9AA7279CD28FFEDF725AFBD46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_t525AE973CC2659D877AEC9706B1BC60424D154A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_t525AE973CC2659D877AEC9706B1BC60424D154A8 * V_0 = NULL;
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	uint8_t V_4 = 0x0;
	{
		U3CU3Ec__DisplayClass6_0_t525AE973CC2659D877AEC9706B1BC60424D154A8 * L_0 = (U3CU3Ec__DisplayClass6_0_t525AE973CC2659D877AEC9706B1BC60424D154A8 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_t525AE973CC2659D877AEC9706B1BC60424D154A8_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass6_0__ctor_mE9026AAB9A0969A773F0E43C836EBBF4BA574B05(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_t525AE973CC2659D877AEC9706B1BC60424D154A8 * L_1 = V_0;
		int32_t L_2 = ___millisecondsInterval1;
		L_1->set_millisecondsInterval_0(L_2);
		U3CU3Ec__DisplayClass6_0_t525AE973CC2659D877AEC9706B1BC60424D154A8 * L_3 = V_0;
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_4 = ___myThread0;
		L_3->set_myThread_1(L_4);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * L_5 = ((SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var))->get_threadList_0();
		V_2 = (bool)((((RuntimeObject*)(List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 *)L_5) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * L_7 = (List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 *)il2cpp_codegen_object_new(List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118_il2cpp_TypeInfo_var);
		List_1__ctor_m36355704B10200ABC2B12900E77E4A9987640F3C(L_7, /*hidden argument*/List_1__ctor_m36355704B10200ABC2B12900E77E4A9987640F3C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		((SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var))->set_threadList_0(L_7);
	}

IL_002d:
	{
		U3CU3Ec__DisplayClass6_0_t525AE973CC2659D877AEC9706B1BC60424D154A8 * L_8 = V_0;
		ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * L_9 = (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 *)il2cpp_codegen_object_new(ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass6_0_U3CStartBackgroundCallsU3Eb__0_mE22D3544AD11BDC9AA7279CD28FFEDF725AFBD46_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_10 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90(L_10, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t* L_11 = ___taskName2;
		bool L_12;
		L_12 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_11, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0056;
		}
	}
	{
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_14 = V_1;
		String_t* L_15 = ___taskName2;
		Thread_set_Name_m920049DFD1306F42613F13CF7AD74C03661F4BAE(L_14, L_15, /*hidden argument*/NULL);
	}

IL_0056:
	{
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_16 = V_1;
		Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0(L_16, (bool)1, /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_17 = V_1;
		Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * L_18 = ((SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var))->get_threadList_0();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_19 = V_1;
		List_1_Add_m383F9AF12DF2593726E7F63FE9438E8ECEA542BA(L_18, L_19, /*hidden argument*/List_1_Add_m383F9AF12DF2593726E7F63FE9438E8ECEA542BA_RuntimeMethod_var);
		List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * L_20 = ((SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var))->get_threadList_0();
		int32_t L_21;
		L_21 = List_1_get_Count_mF4F192665FB9D652A220E87BD65C5EFF1AA3476D_inline(L_20, /*hidden argument*/List_1_get_Count_mF4F192665FB9D652A220E87BD65C5EFF1AA3476D_RuntimeMethod_var);
		V_4 = (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1))));
		goto IL_0082;
	}

IL_0082:
	{
		uint8_t L_22 = V_4;
		return L_22;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass::WriteStackTrace(System.Exception,System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportClass_WriteStackTrace_mBF7ADA2EAABB5EFCFDFA373589D1A1583FDF7510 (Exception_t * ___throwable0, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___stream1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = ___stream1;
		V_0 = (bool)((!(((RuntimeObject*)(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_2 = ___stream1;
		Exception_t * L_3 = ___throwable0;
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_2, L_4);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_5 = ___stream1;
		Exception_t * L_6 = ___throwable0;
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_6);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_5, L_7);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_8 = ___stream1;
		VirtActionInvoker0::Invoke(10 /* System.Void System.IO.TextWriter::Flush() */, L_8);
		goto IL_0048;
	}

IL_002e:
	{
		Exception_t * L_9 = ___throwable0;
		String_t* L_10;
		L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		Debug_WriteLine_m2B08D80ABA95E71F063FA07FB6BF1771C7799ED0(L_10, /*hidden argument*/NULL);
		Exception_t * L_11 = ___throwable0;
		String_t* L_12;
		L_12 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_11);
		Debug_WriteLine_m2B08D80ABA95E71F063FA07FB6BF1771C7799ED0(L_12, /*hidden argument*/NULL);
	}

IL_0048:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass::WriteStackTrace(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportClass_WriteStackTrace_m48F93451487D9B87081A6F40B515939133AB5E51 (Exception_t * ___throwable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = ___throwable0;
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		SupportClass_WriteStackTrace_mBF7ADA2EAABB5EFCFDFA373589D1A1583FDF7510(L_0, (TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportClass_DictionaryToString_mC354B4124BE156344885F6C45345787CA433F604 (RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = SupportClass_DictionaryToString_m91CAC3F4015753CE713D852742E8BE38E5D4059E(L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportClass_DictionaryToString_m91CAC3F4015753CE713D852742E8BE38E5D4059E (RuntimeObject* ___dictionary0, bool ___includeTypes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tD51304A6145CE3C16DA891982FF77FCF264C2646_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0236BACCD260A20F0738D0E7EDBB60850D17B36A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral331681871198787BC7941BD421E635F40B86CE38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A22EC4707797C7AF782D7EE636368480C673139);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD1E171FE9E55598FC5280CDCCB06C8AA67B5883);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	String_t* V_2 = NULL;
	bool V_3 = false;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B12_0 = 0;
	{
		RuntimeObject* L_0 = ___dictionary0;
		V_3 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		V_4 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
		goto IL_01d3;
	}

IL_0016:
	{
		StringBuilder_t * L_2 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		StringBuilder_t * L_3 = V_0;
		StringBuilder_t * L_4;
		L_4 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_3, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, /*hidden argument*/NULL);
		RuntimeObject* L_5 = ___dictionary0;
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_6);
		V_5 = L_7;
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0199;
		}

IL_003b:
		{
			RuntimeObject* L_8 = V_5;
			RuntimeObject * L_9;
			L_9 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_8);
			V_6 = L_9;
			StringBuilder_t * L_10 = V_0;
			int32_t L_11;
			L_11 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_10, /*hidden argument*/NULL);
			V_7 = (bool)((((int32_t)L_11) > ((int32_t)1))? 1 : 0);
			bool L_12 = V_7;
			if (!L_12)
			{
				goto IL_0062;
			}
		}

IL_0054:
		{
			StringBuilder_t * L_13 = V_0;
			StringBuilder_t * L_14;
			L_14 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_13, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
		}

IL_0062:
		{
			RuntimeObject* L_15 = ___dictionary0;
			RuntimeObject * L_16 = V_6;
			RuntimeObject * L_17;
			L_17 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_15, L_16);
			V_8 = (bool)((((RuntimeObject*)(RuntimeObject *)L_17) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_18 = V_8;
			if (!L_18)
			{
				goto IL_0088;
			}
		}

IL_0073:
		{
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_20;
			L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_19, /*hidden argument*/NULL);
			V_1 = L_20;
			V_2 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
			goto IL_00a6;
		}

IL_0088:
		{
			RuntimeObject* L_21 = ___dictionary0;
			RuntimeObject * L_22 = V_6;
			RuntimeObject * L_23;
			L_23 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_21, L_22);
			Type_t * L_24;
			L_24 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_23, /*hidden argument*/NULL);
			V_1 = L_24;
			RuntimeObject* L_25 = ___dictionary0;
			RuntimeObject * L_26 = V_6;
			RuntimeObject * L_27;
			L_27 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_25, L_26);
			String_t* L_28;
			L_28 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_27);
			V_2 = L_28;
		}

IL_00a6:
		{
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_29 = { reinterpret_cast<intptr_t> (IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_30;
			L_30 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_29, /*hidden argument*/NULL);
			Type_t * L_31 = V_1;
			if ((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_31)))
			{
				goto IL_00c2;
			}
		}

IL_00b3:
		{
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_32 = { reinterpret_cast<intptr_t> (Hashtable_tD51304A6145CE3C16DA891982FF77FCF264C2646_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_33;
			L_33 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_32, /*hidden argument*/NULL);
			Type_t * L_34 = V_1;
			G_B12_0 = ((((RuntimeObject*)(Type_t *)L_33) == ((RuntimeObject*)(Type_t *)L_34))? 1 : 0);
			goto IL_00c3;
		}

IL_00c2:
		{
			G_B12_0 = 1;
		}

IL_00c3:
		{
			V_9 = (bool)G_B12_0;
			bool L_35 = V_9;
			if (!L_35)
			{
				goto IL_00de;
			}
		}

IL_00c9:
		{
			RuntimeObject* L_36 = ___dictionary0;
			RuntimeObject * L_37 = V_6;
			RuntimeObject * L_38;
			L_38 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_36, L_37);
			IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
			String_t* L_39;
			L_39 = SupportClass_DictionaryToString_mC354B4124BE156344885F6C45345787CA433F604(((RuntimeObject*)Castclass((RuntimeObject*)L_38, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			V_2 = L_39;
		}

IL_00de:
		{
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_40 = { reinterpret_cast<intptr_t> (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_41;
			L_41 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_40, /*hidden argument*/NULL);
			Type_t * L_42 = V_1;
			V_10 = (bool)((((RuntimeObject*)(Type_t *)L_41) == ((RuntimeObject*)(Type_t *)L_42))? 1 : 0);
			bool L_43 = V_10;
			if (!L_43)
			{
				goto IL_0115;
			}
		}

IL_00f1:
		{
			RuntimeObject* L_44 = ___dictionary0;
			RuntimeObject * L_45 = V_6;
			RuntimeObject * L_46;
			L_46 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_44, L_45);
			String_t* L_47;
			L_47 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, ((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)Castclass((RuntimeObject*)L_46, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			String_t* L_48;
			L_48 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral5A22EC4707797C7AF782D7EE636368480C673139, L_47, /*hidden argument*/NULL);
			V_2 = L_48;
		}

IL_0115:
		{
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_50;
			L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_49, /*hidden argument*/NULL);
			Type_t * L_51 = V_1;
			V_11 = (bool)((((RuntimeObject*)(Type_t *)L_50) == ((RuntimeObject*)(Type_t *)L_51))? 1 : 0);
			bool L_52 = V_11;
			if (!L_52)
			{
				goto IL_0149;
			}
		}

IL_0128:
		{
			RuntimeObject* L_53 = ___dictionary0;
			RuntimeObject * L_54 = V_6;
			RuntimeObject * L_55;
			L_55 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_53, L_54);
			int32_t L_56 = ((int32_t)((int32_t)(((RuntimeArray*)((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_55, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var)))->max_length)));
			RuntimeObject * L_57 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_56);
			String_t* L_58;
			L_58 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralAD1E171FE9E55598FC5280CDCCB06C8AA67B5883, L_57, /*hidden argument*/NULL);
			V_2 = L_58;
		}

IL_0149:
		{
			bool L_59 = ___includeTypes1;
			V_12 = L_59;
			bool L_60 = V_12;
			if (!L_60)
			{
				goto IL_0187;
			}
		}

IL_0150:
		{
			StringBuilder_t * L_61 = V_0;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_62 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_63 = L_62;
			RuntimeObject * L_64 = V_6;
			Type_t * L_65;
			L_65 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_64, /*hidden argument*/NULL);
			String_t* L_66;
			L_66 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_65);
			ArrayElementTypeCheck (L_63, L_66);
			(L_63)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_66);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_67 = L_63;
			RuntimeObject * L_68 = V_6;
			ArrayElementTypeCheck (L_67, L_68);
			(L_67)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_68);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_69 = L_67;
			Type_t * L_70 = V_1;
			String_t* L_71;
			L_71 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_70);
			ArrayElementTypeCheck (L_69, L_71);
			(L_69)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_71);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_72 = L_69;
			String_t* L_73 = V_2;
			ArrayElementTypeCheck (L_72, L_73);
			(L_72)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_73);
			StringBuilder_t * L_74;
			L_74 = StringBuilder_AppendFormat_m97C4AAABA51FCC2D426BD22FE05BEC045AB9D6F8(L_61, _stringLiteral331681871198787BC7941BD421E635F40B86CE38, L_72, /*hidden argument*/NULL);
			goto IL_0198;
		}

IL_0187:
		{
			StringBuilder_t * L_75 = V_0;
			RuntimeObject * L_76 = V_6;
			String_t* L_77 = V_2;
			StringBuilder_t * L_78;
			L_78 = StringBuilder_AppendFormat_m37B348187DD9186C2451ACCA3DBC4ABCD4632AD4(L_75, _stringLiteral0236BACCD260A20F0738D0E7EDBB60850D17B36A, L_76, L_77, /*hidden argument*/NULL);
		}

IL_0198:
		{
		}

IL_0199:
		{
			RuntimeObject* L_79 = V_5;
			bool L_80;
			L_80 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_79);
			if (L_80)
			{
				goto IL_003b;
			}
		}

IL_01a5:
		{
			IL2CPP_LEAVE(0x1BD, FINALLY_01a7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01a7;
	}

FINALLY_01a7:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_81 = V_5;
			V_13 = ((RuntimeObject*)IsInst((RuntimeObject*)L_81, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_82 = V_13;
			if (!L_82)
			{
				goto IL_01bc;
			}
		}

IL_01b4:
		{
			RuntimeObject* L_83 = V_13;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_83);
		}

IL_01bc:
		{
			IL2CPP_END_FINALLY(423)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(423)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1BD, IL_01bd)
	}

IL_01bd:
	{
		StringBuilder_t * L_84 = V_0;
		StringBuilder_t * L_85;
		L_85 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_84, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, /*hidden argument*/NULL);
		StringBuilder_t * L_86 = V_0;
		String_t* L_87;
		L_87 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_86);
		V_4 = L_87;
		goto IL_01d3;
	}

IL_01d3:
	{
		String_t* L_88 = V_4;
		return L_88;
	}
}
// System.String ExitGames.Client.Photon.SupportClass::ByteArrayToString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportClass_ByteArrayToString_m5D9691BD295E534DB92BA8EC9F03799D67C2457E (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___list0;
		V_0 = (bool)((((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_1 = L_2;
		goto IL_001b;
	}

IL_0012:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___list0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = BitConverter_ToString_mD476DB63219FD7C7FFB472ABEB04A8BB2D171F30(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		String_t* L_5 = V_1;
		return L_5;
	}
}
// System.UInt32[] ExitGames.Client.Photon.SupportClass::InitializeTable(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* SupportClass_InitializeTable_mB5CA35538B383D17DCBF916C674A6D736A493A4B (uint32_t ___polynomial0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_0 = NULL;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_7 = NULL;
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		V_0 = L_0;
		V_1 = 0;
		goto IL_004c;
	}

IL_0010:
	{
		int32_t L_1 = V_1;
		V_2 = L_1;
		V_3 = 0;
		goto IL_0039;
	}

IL_0017:
	{
		uint32_t L_2 = V_2;
		V_4 = (bool)((((int32_t)((int32_t)((int32_t)L_2&(int32_t)1))) == ((int32_t)1))? 1 : 0);
		bool L_3 = V_4;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		uint32_t L_4 = V_2;
		uint32_t L_5 = ___polynomial0;
		V_2 = ((int32_t)((int32_t)((int32_t)((uint32_t)L_4>>1))^(int32_t)L_5));
		goto IL_0034;
	}

IL_002e:
	{
		uint32_t L_6 = V_2;
		V_2 = ((int32_t)((uint32_t)L_6>>1));
	}

IL_0034:
	{
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0039:
	{
		int32_t L_8 = V_3;
		V_5 = (bool)((((int32_t)L_8) < ((int32_t)8))? 1 : 0);
		bool L_9 = V_5;
		if (L_9)
		{
			goto IL_0017;
		}
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_10 = V_0;
		int32_t L_11 = V_1;
		uint32_t L_12 = V_2;
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11), (uint32_t)L_12);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_004c:
	{
		int32_t L_14 = V_1;
		V_6 = (bool)((((int32_t)L_14) < ((int32_t)((int32_t)256)))? 1 : 0);
		bool L_15 = V_6;
		if (L_15)
		{
			goto IL_0010;
		}
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_16 = V_0;
		V_7 = L_16;
		goto IL_005f;
	}

IL_005f:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_17 = V_7;
		return L_17;
	}
}
// System.UInt32 ExitGames.Client.Photon.SupportClass::CalculateCrc(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SupportClass_CalculateCrc_m7EFB1AFB0442BFC2FAE581015D1FF1CDE450A983 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	uint32_t V_5 = 0;
	{
		V_0 = (-1);
		V_1 = ((int32_t)-306674912);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = ((SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var))->get_crcLookupTable_2();
		V_2 = (bool)((((RuntimeObject*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		uint32_t L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_3;
		L_3 = SupportClass_InitializeTable_mB5CA35538B383D17DCBF916C674A6D736A493A4B(L_2, /*hidden argument*/NULL);
		((SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var))->set_crcLookupTable_2(L_3);
	}

IL_0022:
	{
		V_3 = 0;
		goto IL_0042;
	}

IL_0026:
	{
		uint32_t L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_5 = ((SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var))->get_crcLookupTable_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___buffer0;
		int32_t L_7 = V_3;
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		uint32_t L_10 = V_0;
		int32_t L_11 = ((int32_t)((int32_t)L_9^(int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)255)))));
		uint32_t L_12 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)((int32_t)((int32_t)((uint32_t)L_4>>8))^(int32_t)L_12));
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0042:
	{
		int32_t L_14 = V_3;
		int32_t L_15 = ___length1;
		V_4 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_4;
		if (L_16)
		{
			goto IL_0026;
		}
	}
	{
		uint32_t L_17 = V_0;
		V_5 = L_17;
		goto IL_0051;
	}

IL_0051:
	{
		uint32_t L_18 = V_5;
		return L_18;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportClass__cctor_mA8E2F7FB1501E2523A5017E1F01B28C2D6CF6D7B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegerMillisecondsDelegate_tFA09AD82FF54A8E784DF5B0AE0B27FDE48D70A9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__20_0_m982F5A6F95B91823E6902368221AA21A3C64C55E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE76D54910C712C6B8061D714E4BEF54AB4280F63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE76D54910C712C6B8061D714E4BEF54AB4280F63_il2cpp_TypeInfo_var);
		U3CU3Ec_tE76D54910C712C6B8061D714E4BEF54AB4280F63 * L_0 = ((U3CU3Ec_tE76D54910C712C6B8061D714E4BEF54AB4280F63_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE76D54910C712C6B8061D714E4BEF54AB4280F63_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		IntegerMillisecondsDelegate_tFA09AD82FF54A8E784DF5B0AE0B27FDE48D70A9E * L_1 = (IntegerMillisecondsDelegate_tFA09AD82FF54A8E784DF5B0AE0B27FDE48D70A9E *)il2cpp_codegen_object_new(IntegerMillisecondsDelegate_tFA09AD82FF54A8E784DF5B0AE0B27FDE48D70A9E_il2cpp_TypeInfo_var);
		IntegerMillisecondsDelegate__ctor_mF3E421A854961B378BBECDD5A1F32574040582B1(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__20_0_m982F5A6F95B91823E6902368221AA21A3C64C55E_RuntimeMethod_var), /*hidden argument*/NULL);
		((SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var))->set_IntegerMilliseconds_1(L_1);
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
// System.Void ExitGames.Client.Photon.TPeer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer__ctor_m44C61B071BAAD842876B788684D840077CD9CF7A (TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m77A700976BCE8508C7EEC542FA014BB67577F610_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_0 = (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 *)il2cpp_codegen_object_new(Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4_il2cpp_TypeInfo_var);
		Queue_1__ctor_m77A700976BCE8508C7EEC542FA014BB67577F610(L_0, ((int32_t)32), /*hidden argument*/Queue_1__ctor_m77A700976BCE8508C7EEC542FA014BB67577F610_RuntimeMethod_var);
		__this->set_incomingList_47(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)5);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = L_1;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)240));
		__this->set_pingRequest_50(L_2);
		__this->set_DoFraming_54((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8_il2cpp_TypeInfo_var);
		PeerBase__ctor_mC53B466463778E5DD65096C9F985D28F667AD809(__this, /*hidden argument*/NULL);
		((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->set_TrafficPackageHeaderSize_43(0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::InitPeerBase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_InitPeerBase_m7F204B139B75B6C7CD1EB07D476CB8D82B523B02 (TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m77A700976BCE8508C7EEC542FA014BB67577F610_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PeerBase_InitPeerBase_m4FA936463FFAA85AECEA46897D2B0EB773CD465D(__this, /*hidden argument*/NULL);
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_0 = (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 *)il2cpp_codegen_object_new(Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4_il2cpp_TypeInfo_var);
		Queue_1__ctor_m77A700976BCE8508C7EEC542FA014BB67577F610(L_0, ((int32_t)32), /*hidden argument*/Queue_1__ctor_m77A700976BCE8508C7EEC542FA014BB67577F610_RuntimeMethod_var);
		__this->set_incomingList_47(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = SupportClass_GetTickCount_mDD38F1B27059098AE7B5CC7B2072AAFC43D2D145(/*hidden argument*/NULL);
		((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->set_timestampOfLastReceive_21(L_1);
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::Connect(System.String,System.String,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPeer_Connect_m5266B375B047DE7D6DAF87C52111A3911E612B28 (TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65 * __this, String_t* ___serverAddress0, String_t* ___proxyServerAddress1, String_t* ___appID2, RuntimeObject * ___customData3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m317C461C1E14AC1BD319AA6CD3258B5833E41850_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketTcp_t6DA1B64C0FCE8B978387AB8EC153932CADD27F02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7320E85A8DE6C28D8BEFAC38D01CE66FADFE0968);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA11767B3AA037BEA810EDDF4B485E8DEC8406BC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB3AA2628BF342A84CE7EB2AD8B7E300B7A91D26);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65 * G_B16_0 = NULL;
	TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65 * G_B15_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B17_0 = NULL;
	TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65 * G_B17_1 = NULL;
	{
		uint8_t L_0 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_peerConnectionState_6();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = PeerBase_get_Listener_m383691FE451B45BDBC3E7280D12F16A7FCCF0509(__this, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var, L_2, 2, _stringLiteral7320E85A8DE6C28D8BEFAC38D01CE66FADFE0968);
		V_1 = (bool)0;
		goto IL_0149;
	}

IL_0028:
	{
		uint8_t L_3;
		L_3 = PeerBase_get_debugOut_mD36CF36130C16BD3F9480A2A81DC2B65305A0638(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_5;
		L_5 = PeerBase_get_Listener_m383691FE451B45BDBC3E7280D12F16A7FCCF0509(__this, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var, L_5, 5, _stringLiteralEB3AA2628BF342A84CE7EB2AD8B7E300B7A91D26);
	}

IL_004c:
	{
		String_t* L_6 = ___serverAddress0;
		PeerBase_set_ServerAddress_mBCE816CF33B01452174111254F1B86B1EA04BC69_inline(__this, L_6, /*hidden argument*/NULL);
		String_t* L_7 = ___proxyServerAddress1;
		PeerBase_set_ProxyServerAddress_mA0B000E3D8B55AF5CDAF626BBE6DABEE52EB593F_inline(__this, L_7, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(5 /* System.Void ExitGames.Client.Photon.PeerBase::InitPeerBase() */, __this);
		List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12 * L_8 = (List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12 *)il2cpp_codegen_object_new(List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12_il2cpp_TypeInfo_var);
		List_1__ctor_m317C461C1E14AC1BD319AA6CD3258B5833E41850(L_8, /*hidden argument*/List_1__ctor_m317C461C1E14AC1BD319AA6CD3258B5833E41850_RuntimeMethod_var);
		__this->set_outgoingStream_48(L_8);
		uint8_t L_9 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_usedTransportProtocol_2();
		if ((((int32_t)L_9) == ((int32_t)4)))
		{
			goto IL_0082;
		}
	}
	{
		uint8_t L_10 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_usedTransportProtocol_2();
		G_B7_0 = ((((int32_t)L_10) == ((int32_t)5))? 1 : 0);
		goto IL_0083;
	}

IL_0082:
	{
		G_B7_0 = 1;
	}

IL_0083:
	{
		V_3 = (bool)G_B7_0;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0095;
		}
	}
	{
		String_t* L_12 = ___serverAddress0;
		String_t* L_13 = ___appID2;
		RuntimeObject * L_14 = ___customData3;
		String_t* L_15;
		L_15 = PeerBase_PepareWebSocketUrl_mD4993B109B2762A594294F8950ADD0E86D520D34(__this, L_12, L_13, L_14, /*hidden argument*/NULL);
		___serverAddress0 = L_15;
	}

IL_0095:
	{
		Type_t * L_16;
		L_16 = PeerBase_get_SocketImplementation_m13FD5EFF0219DB29B9D256033241D560BEBB5DEC(__this, /*hidden argument*/NULL);
		V_4 = (bool)((!(((RuntimeObject*)(Type_t *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_00c8;
		}
	}
	{
		Type_t * L_18;
		L_18 = PeerBase_get_SocketImplementation_m13FD5EFF0219DB29B9D256033241D560BEBB5DEC(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = L_19;
		ArrayElementTypeCheck (L_20, __this);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)__this);
		RuntimeObject * L_21;
		L_21 = Activator_CreateInstance_mF3E09E8AC19EE563314B326117091D4B9CC918C1(L_18, L_20, /*hidden argument*/NULL);
		((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->set_PhotonSocket_3(((IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF *)CastclassClass((RuntimeObject*)L_21, IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF_il2cpp_TypeInfo_var)));
		goto IL_00d6;
	}

IL_00c8:
	{
		SocketTcp_t6DA1B64C0FCE8B978387AB8EC153932CADD27F02 * L_22 = (SocketTcp_t6DA1B64C0FCE8B978387AB8EC153932CADD27F02 *)il2cpp_codegen_object_new(SocketTcp_t6DA1B64C0FCE8B978387AB8EC153932CADD27F02_il2cpp_TypeInfo_var);
		SocketTcp__ctor_mAAA906AF41E549320EA636E67F960AE91E112AC4(L_22, __this, /*hidden argument*/NULL);
		((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->set_PhotonSocket_3(L_22);
	}

IL_00d6:
	{
		IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * L_23 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_PhotonSocket_3();
		V_5 = (bool)((((RuntimeObject*)(IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF *)L_23) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_0107;
		}
	}
	{
		RuntimeObject* L_25;
		L_25 = PeerBase_get_Listener_m383691FE451B45BDBC3E7280D12F16A7FCCF0509(__this, /*hidden argument*/NULL);
		Type_t * L_26;
		L_26 = PeerBase_get_SocketImplementation_m13FD5EFF0219DB29B9D256033241D560BEBB5DEC(__this, /*hidden argument*/NULL);
		String_t* L_27;
		L_27 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteralA11767B3AA037BEA810EDDF4B485E8DEC8406BC8, L_26, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var, L_25, 1, L_27);
		V_1 = (bool)0;
		goto IL_0149;
	}

IL_0107:
	{
		bool L_28 = __this->get_DoFraming_54();
		G_B15_0 = __this;
		if (L_28)
		{
			G_B16_0 = __this;
			goto IL_0117;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = ((TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65_StaticFields*)il2cpp_codegen_static_fields_for(TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65_il2cpp_TypeInfo_var))->get_tcpMsgHead_52();
		G_B17_0 = L_29;
		G_B17_1 = G_B15_0;
		goto IL_011c;
	}

IL_0117:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = ((TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65_StaticFields*)il2cpp_codegen_static_fields_for(TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65_il2cpp_TypeInfo_var))->get_tcpFramedMessageHead_51();
		G_B17_0 = L_30;
		G_B17_1 = G_B16_0;
	}

IL_011c:
	{
		G_B17_1->set_messageHeader_53(G_B17_0);
		IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * L_31 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_PhotonSocket_3();
		bool L_32;
		L_32 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean ExitGames.Client.Photon.IPhotonSocket::Connect() */, L_31);
		V_6 = L_32;
		bool L_33 = V_6;
		if (!L_33)
		{
			goto IL_013e;
		}
	}
	{
		((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->set_peerConnectionState_6(1);
		V_1 = (bool)1;
		goto IL_0149;
	}

IL_013e:
	{
		((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->set_peerConnectionState_6(0);
		V_1 = (bool)0;
		goto IL_0149;
	}

IL_0149:
	{
		bool L_34 = V_1;
		return L_34;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::OnConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_OnConnect_m560D69E089F12096F81DEFB2B58155BE2A102CC5 (TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = SupportClass_GetTickCount_mDD38F1B27059098AE7B5CC7B2072AAFC43D2D145(/*hidden argument*/NULL);
		__this->set_lastPingResult_49(L_0);
		String_t* L_1;
		L_1 = PeerBase_get_ServerAddress_m09A47C70720235340C390D98A2277B8BF94CB288_inline(__this, /*hidden argument*/NULL);
		String_t* L_2 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_AppId_26();
		RuntimeObject * L_3 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_CustomInitData_25();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = PeerBase_PrepareConnectData_m7CD66D9D095DA0B65F8F7FB44A5391B62C2EA80C(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		TPeer_EnqueueInit_mF7D65C4459548F9FF2354EE6AE2F3B9CCD05DAC7(__this, L_5, /*hidden argument*/NULL);
		bool L_6;
		L_6 = VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean ExitGames.Client.Photon.PeerBase::SendOutgoingCommands() */, __this);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_Disconnect_mC100C0180E39271B2829445180520E1EE0071408 (TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral070D193C86BF98D0196B0B2AB6F7CF0437FEF24B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		uint8_t L_0 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_peerConnectionState_6();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		uint8_t L_1 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_peerConnectionState_6();
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		goto IL_0047;
	}

IL_001c:
	{
		uint8_t L_3;
		L_3 = PeerBase_get_debugOut_mD36CF36130C16BD3F9480A2A81DC2B65305A0638(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_5;
		L_5 = PeerBase_get_Listener_m383691FE451B45BDBC3E7280D12F16A7FCCF0509(__this, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var, L_5, 5, _stringLiteral070D193C86BF98D0196B0B2AB6F7CF0437FEF24B);
	}

IL_0040:
	{
		VirtActionInvoker0::Invoke(9 /* System.Void ExitGames.Client.Photon.PeerBase::StopConnection() */, __this);
	}

IL_0047:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::StopConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_StopConnection_m0FCB9CECEA615FF834CA3FA2A9D8FB8C0F19F5FD (TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_m83F66337973B90D44B04DA1302077D6CCA463BCB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->set_peerConnectionState_6(4);
		IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * L_0 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_PhotonSocket_3();
		V_0 = (bool)((!(((RuntimeObject*)(IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * L_2 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_PhotonSocket_3();
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean ExitGames.Client.Photon.IPhotonSocket::Disconnect() */, L_2);
	}

IL_0023:
	{
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_4 = __this->get_incomingList_47();
		V_1 = L_4;
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_5 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_5, /*hidden argument*/NULL);
	}

IL_0031:
	try
	{ // begin try (depth: 1)
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_6 = __this->get_incomingList_47();
		Queue_1_Clear_m83F66337973B90D44B04DA1302077D6CCA463BCB(L_6, /*hidden argument*/Queue_1_Clear_m83F66337973B90D44B04DA1302077D6CCA463BCB_RuntimeMethod_var);
		IL2CPP_LEAVE(0x49, FINALLY_0041);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_7 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(65)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x49, IL_0049)
	}

IL_0049:
	{
		((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->set_peerConnectionState_6(0);
		PeerBase_EnqueueStatusCallback_m58613E00F19BEF9AB23B55D50E7517BE73842CF2(__this, ((int32_t)1025), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::FetchServerTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_FetchServerTimestamp_m5E2E5D1DC187018F8561D182915D79F80E08071A (TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionStateValue_t632C7ED12C80052ADD64C243BC3EC72F835CBFA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0844A3E92F62DCD91CD00D9084B9DB82474F02CA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		uint8_t L_0 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_peerConnectionState_6();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		uint8_t L_2;
		L_2 = PeerBase_get_debugOut_mD36CF36130C16BD3F9480A2A81DC2B65305A0638(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_4;
		L_4 = PeerBase_get_Listener_m383691FE451B45BDBC3E7280D12F16A7FCCF0509(__this, /*hidden argument*/NULL);
		uint8_t L_5 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_peerConnectionState_6();
		uint8_t L_6 = L_5;
		RuntimeObject * L_7 = Box(ConnectionStateValue_t632C7ED12C80052ADD64C243BC3EC72F835CBFA6_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteral0844A3E92F62DCD91CD00D9084B9DB82474F02CA, L_7, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var, L_4, 3, L_8);
	}

IL_0046:
	{
		RuntimeObject* L_9;
		L_9 = PeerBase_get_Listener_m383691FE451B45BDBC3E7280D12F16A7FCCF0509(__this, /*hidden argument*/NULL);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::OnStatusChanged(ExitGames.Client.Photon.StatusCode) */, IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var, L_9, ((int32_t)1030));
		goto IL_0067;
	}

IL_0059:
	{
		TPeer_SendPing_m4B399854FCD3E0E647CE9042A64A44AD66265EA5(__this, /*hidden argument*/NULL);
		((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->set_serverTimeOffsetIsAvailable_15((bool)0);
	}

IL_0067:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::EnqueueInit(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_EnqueueInit_mF7D65C4459548F9FF2354EE6AE2F3B9CCD05DAC7 (TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Protocol_t8FFDD4F2A9126501AFA64394B4F67A354A016491_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	{
		bool L_0 = __this->get_DoFraming_54();
		V_3 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_00b7;
	}

IL_0014:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___data0;
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_3 = (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F *)il2cpp_codegen_object_new(StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F_il2cpp_TypeInfo_var);
		StreamBuffer__ctor_mCD82E110B43F1667367053A5E72397A584E97B7E(L_3, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), (int32_t)((int32_t)32))), /*hidden argument*/NULL);
		V_0 = L_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)7);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = L_4;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)251));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = L_5;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (uint8_t)1);
		V_1 = L_6;
		V_2 = 1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___data0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Protocol_t8FFDD4F2A9126501AFA64394B4F67A354A016491_il2cpp_TypeInfo_var);
		Protocol_Serialize_mBB601C9D17432A08A159105E2A7E2AAF9BB519D5(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))), (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))), L_9, (int32_t*)(&V_2), /*hidden argument*/NULL);
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_10 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = V_1;
		StreamBuffer_Write_m177FE649E0A724563BC39C5C690561260D365E5C(L_10, L_11, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))), /*hidden argument*/NULL);
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_13 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = ___data0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = ___data0;
		StreamBuffer_Write_m177FE649E0A724563BC39C5C690561260D365E5C(L_13, L_14, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))), /*hidden argument*/NULL);
		bool L_16;
		L_16 = PeerBase_get_TrafficStatsEnabled_m745BEA2E615BFFFD518E477AA0EA4C6CD7AC00B8(__this, /*hidden argument*/NULL);
		V_4 = L_16;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * L_18;
		L_18 = PeerBase_get_TrafficStatsOutgoing_m328B4CEC35B683E97258A6416744E9245283DD3D(__this, /*hidden argument*/NULL);
		TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * L_19 = L_18;
		int32_t L_20;
		L_20 = TrafficStats_get_TotalPacketCount_m608185872F34EA2B3A8FC72BC137F554D0C891EA_inline(L_19, /*hidden argument*/NULL);
		V_5 = L_20;
		int32_t L_21 = V_5;
		TrafficStats_set_TotalPacketCount_m2D07017330D78709B0F13D1079F01DCDE46C1788_inline(L_19, ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)), /*hidden argument*/NULL);
		TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * L_22;
		L_22 = PeerBase_get_TrafficStatsOutgoing_m328B4CEC35B683E97258A6416744E9245283DD3D(__this, /*hidden argument*/NULL);
		TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * L_23 = L_22;
		int32_t L_24;
		L_24 = TrafficStats_get_TotalCommandsInPackets_mF3FB9D78F73AA8CF2047A081E84A68DD449C0130_inline(L_23, /*hidden argument*/NULL);
		V_5 = L_24;
		int32_t L_25 = V_5;
		TrafficStats_set_TotalCommandsInPackets_m2A4B5B4235859BE6DD2237BF0D3463846630A32D_inline(L_23, ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1)), /*hidden argument*/NULL);
		TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * L_26;
		L_26 = PeerBase_get_TrafficStatsOutgoing_m328B4CEC35B683E97258A6416744E9245283DD3D(__this, /*hidden argument*/NULL);
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_27 = V_0;
		int32_t L_28;
		L_28 = StreamBuffer_get_Length_mAB8A53234D8D18994F517A80C8FA69CC480444CF(L_27, /*hidden argument*/NULL);
		TrafficStats_CountControlCommand_m1F3BADE16E8ED14581CB43FB50C0C00DA3E9ADEF(L_26, L_28, /*hidden argument*/NULL);
	}

IL_00ad:
	{
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_29 = V_0;
		bool L_30;
		L_30 = TPeer_EnqueueMessageAsPayload_m831B8E40556A6FD07A355BD79D090827DBA55D11(__this, 1, L_29, (uint8_t)0, /*hidden argument*/NULL);
	}

IL_00b7:
	{
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::DispatchIncomingCommands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPeer_DispatchIncomingCommands_mA696BC69F08B65A4EA4A313DCECDEE5FC1826CD3 (TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MyAction_tC825FCD41C6AA4314F2D66D0FF11992F6CBAC017_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m2EA4ED50C9D3AFC5608B9ACDF7C611D244872F0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mD1D7E79FFDA16CE4A8E84DF66F14C7BF490D5138_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m1D55723B47270D04849E24BC09480DCD17C0CEBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m27B008601F73A4AFC69DFA5FF40110D298744D7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MyAction_tC825FCD41C6AA4314F2D66D0FF11992F6CBAC017 * V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	bool V_2 = false;
	Queue_1_t8436C2B4A16DF42BF18573DEDB0F4D5064C2B8AE * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	int32_t G_B3_0 = 0;
	{
		uint8_t L_0 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_peerConnectionState_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = SupportClass_GetTickCount_mDD38F1B27059098AE7B5CC7B2072AAFC43D2D145(/*hidden argument*/NULL);
		int32_t L_2 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_timestampOfLastReceive_21();
		int32_t L_3;
		L_3 = PeerBase_get_DisconnectTimeout_mC0227A4EB0303EAA031894D38213189C83D750B9(__this, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2))) > ((int32_t)L_3))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 0;
	}

IL_0021:
	{
		V_2 = (bool)G_B3_0;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		PeerBase_EnqueueStatusCallback_m58613E00F19BEF9AB23B55D50E7517BE73842CF2(__this, ((int32_t)1040), /*hidden argument*/NULL);
		MyAction_tC825FCD41C6AA4314F2D66D0FF11992F6CBAC017 * L_5 = (MyAction_tC825FCD41C6AA4314F2D66D0FF11992F6CBAC017 *)il2cpp_codegen_object_new(MyAction_tC825FCD41C6AA4314F2D66D0FF11992F6CBAC017_il2cpp_TypeInfo_var);
		MyAction__ctor_m4ECF3F683EBFF98616377DB6F31A5A354C1A603D(L_5, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 8)), /*hidden argument*/NULL);
		PeerBase_EnqueueActionForDispatch_mC1EEE5B3EF1240737789D8CE22B2CFE26D299A86(__this, L_5, /*hidden argument*/NULL);
	}

IL_0047:
	{
		goto IL_0092;
	}

IL_0049:
	{
		Queue_1_t8436C2B4A16DF42BF18573DEDB0F4D5064C2B8AE * L_6 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_ActionQueue_12();
		V_3 = L_6;
		Queue_1_t8436C2B4A16DF42BF18573DEDB0F4D5064C2B8AE * L_7 = V_3;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_7, /*hidden argument*/NULL);
	}

IL_0058:
	try
	{ // begin try (depth: 1)
		{
			Queue_1_t8436C2B4A16DF42BF18573DEDB0F4D5064C2B8AE * L_8 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_ActionQueue_12();
			int32_t L_9;
			L_9 = Queue_1_get_Count_m27B008601F73A4AFC69DFA5FF40110D298744D7D_inline(L_8, /*hidden argument*/Queue_1_get_Count_m27B008601F73A4AFC69DFA5FF40110D298744D7D_RuntimeMethod_var);
			V_4 = (bool)((((int32_t)((((int32_t)L_9) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_10 = V_4;
			if (!L_10)
			{
				goto IL_0073;
			}
		}

IL_0070:
		{
			IL2CPP_LEAVE(0x97, FINALLY_0082);
		}

IL_0073:
		{
			Queue_1_t8436C2B4A16DF42BF18573DEDB0F4D5064C2B8AE * L_11 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_ActionQueue_12();
			MyAction_tC825FCD41C6AA4314F2D66D0FF11992F6CBAC017 * L_12;
			L_12 = Queue_1_Dequeue_mD1D7E79FFDA16CE4A8E84DF66F14C7BF490D5138(L_11, /*hidden argument*/Queue_1_Dequeue_mD1D7E79FFDA16CE4A8E84DF66F14C7BF490D5138_RuntimeMethod_var);
			V_0 = L_12;
			IL2CPP_LEAVE(0x8A, FINALLY_0082);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0082;
	}

FINALLY_0082:
	{ // begin finally (depth: 1)
		Queue_1_t8436C2B4A16DF42BF18573DEDB0F4D5064C2B8AE * L_13 = V_3;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_13, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(130)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(130)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x97, IL_0097)
		IL2CPP_JUMP_TBL(0x8A, IL_008a)
	}

IL_008a:
	{
		MyAction_tC825FCD41C6AA4314F2D66D0FF11992F6CBAC017 * L_14 = V_0;
		MyAction_Invoke_m919C8F75ACF20A06CFE09588173962C600052C34(L_14, /*hidden argument*/NULL);
	}

IL_0092:
	{
		V_5 = (bool)1;
		goto IL_0049;
	}

IL_0097:
	{
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_15 = __this->get_incomingList_47();
		V_6 = L_15;
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_16 = V_6;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_16, /*hidden argument*/NULL);
	}

IL_00a7:
	try
	{ // begin try (depth: 1)
		{
			Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_17 = __this->get_incomingList_47();
			int32_t L_18;
			L_18 = Queue_1_get_Count_m1D55723B47270D04849E24BC09480DCD17C0CEBA_inline(L_17, /*hidden argument*/Queue_1_get_Count_m1D55723B47270D04849E24BC09480DCD17C0CEBA_RuntimeMethod_var);
			V_7 = (bool)((((int32_t)((((int32_t)L_18) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_19 = V_7;
			if (!L_19)
			{
				goto IL_00c5;
			}
		}

IL_00bf:
		{
			V_8 = (bool)0;
			IL2CPP_LEAVE(0xF8, FINALLY_00d4);
		}

IL_00c5:
		{
			Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_20 = __this->get_incomingList_47();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21;
			L_21 = Queue_1_Dequeue_m2EA4ED50C9D3AFC5608B9ACDF7C611D244872F0D(L_20, /*hidden argument*/Queue_1_Dequeue_m2EA4ED50C9D3AFC5608B9ACDF7C611D244872F0D_RuntimeMethod_var);
			V_1 = L_21;
			IL2CPP_LEAVE(0xDD, FINALLY_00d4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d4;
	}

FINALLY_00d4:
	{ // begin finally (depth: 1)
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_22 = V_6;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_22, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(212)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(212)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xF8, IL_00f8)
		IL2CPP_JUMP_TBL(0xDD, IL_00dd)
	}

IL_00dd:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = V_1;
		((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->set_ByteCountCurrentDispatch_8(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))), (int32_t)3)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = V_1;
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_25 = (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F *)il2cpp_codegen_object_new(StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F_il2cpp_TypeInfo_var);
		StreamBuffer__ctor_m359C02BE509B1FA8594480BA59FC8500681F464F(L_25, L_24, /*hidden argument*/NULL);
		bool L_26;
		L_26 = VirtFuncInvoker1< bool, StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * >::Invoke(17 /* System.Boolean ExitGames.Client.Photon.PeerBase::DeserializeMessageAndCallback(ExitGames.Client.Photon.StreamBuffer) */, __this, L_25);
		V_8 = L_26;
		goto IL_00f8;
	}

IL_00f8:
	{
		bool L_27 = V_8;
		return L_27;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::SendOutgoingCommands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPeer_SendOutgoingCommands_mD14FE989C83438A511A14B4E8027D6CD89C0583C (TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF58D22F35D225408FD85AED23F90A8650B555E06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m861458629F616BF514394E7BBA1E6AD2B2570E25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m5E1CC2412904B8E2604B5BA8296F55109C633442_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12 * V_4 = NULL;
	int32_t V_5 = 0;
	StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * V_6 = NULL;
	bool V_7 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B7_0 = 0;
	{
		uint8_t L_0 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_peerConnectionState_6();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_00f0;
	}

IL_0016:
	{
		IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * L_2 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_PhotonSocket_3();
		bool L_3;
		L_3 = IPhotonSocket_get_Connected_mF4FC07D90A5CF561AEF88E3248F84CD3D46DE9EB(L_2, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_00f0;
	}

IL_0030:
	{
		int32_t L_5;
		L_5 = PeerBase_get_timeInt_m1E1E3B2BC3A1E62FCBDD98EE9AF6B0AB49929D66(__this, /*hidden argument*/NULL);
		((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->set_timeLastSendOutgoing_33(L_5);
		uint8_t L_6 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_peerConnectionState_6();
		if ((!(((uint32_t)L_6) == ((uint32_t)3))))
		{
			goto IL_0060;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = SupportClass_GetTickCount_mDD38F1B27059098AE7B5CC7B2072AAFC43D2D145(/*hidden argument*/NULL);
		int32_t L_8 = __this->get_lastPingResult_49();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = il2cpp_codegen_abs(((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8)));
		int32_t L_10;
		L_10 = PeerBase_get_timePingInterval_mC4FDEF910DDAFAD59491D4D1449A9FBF804B240A(__this, /*hidden argument*/NULL);
		G_B7_0 = ((((int32_t)L_9) > ((int32_t)L_10))? 1 : 0);
		goto IL_0061;
	}

IL_0060:
	{
		G_B7_0 = 0;
	}

IL_0061:
	{
		V_3 = (bool)G_B7_0;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_006e;
		}
	}
	{
		TPeer_SendPing_m4B399854FCD3E0E647CE9042A64A44AD66265EA5(__this, /*hidden argument*/NULL);
	}

IL_006e:
	{
		List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12 * L_12 = __this->get_outgoingStream_48();
		V_4 = L_12;
		List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12 * L_13 = V_4;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_13, /*hidden argument*/NULL);
	}

IL_007e:
	try
	{ // begin try (depth: 1)
		{
			V_5 = 0;
			goto IL_00b8;
		}

IL_0084:
		{
			List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12 * L_14 = __this->get_outgoingStream_48();
			int32_t L_15 = V_5;
			StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_16;
			L_16 = List_1_get_Item_m5E1CC2412904B8E2604B5BA8296F55109C633442_inline(L_14, L_15, /*hidden argument*/List_1_get_Item_m5E1CC2412904B8E2604B5BA8296F55109C633442_RuntimeMethod_var);
			V_6 = L_16;
			StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_17 = V_6;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18;
			L_18 = StreamBuffer_GetBuffer_m2637CD4CB25C3B82A095F960BC10155293FA4D45(L_17, /*hidden argument*/NULL);
			StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_19 = V_6;
			int32_t L_20;
			L_20 = StreamBuffer_get_Length_mAB8A53234D8D18994F517A80C8FA69CC480444CF(L_19, /*hidden argument*/NULL);
			TPeer_SendData_m299CD3002DB0E3FA0A804030E063C0363443A20F(__this, L_18, L_20, /*hidden argument*/NULL);
			StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_21 = V_6;
			IL2CPP_RUNTIME_CLASS_INIT(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8_il2cpp_TypeInfo_var);
			PeerBase_MessageBufferPoolPut_m959FE967A50DE44E8B8C40EE995FB62B012B14F8(L_21, /*hidden argument*/NULL);
			int32_t L_22 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		}

IL_00b8:
		{
			int32_t L_23 = V_5;
			List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12 * L_24 = __this->get_outgoingStream_48();
			int32_t L_25;
			L_25 = List_1_get_Count_m861458629F616BF514394E7BBA1E6AD2B2570E25_inline(L_24, /*hidden argument*/List_1_get_Count_m861458629F616BF514394E7BBA1E6AD2B2570E25_RuntimeMethod_var);
			V_7 = (bool)((((int32_t)L_23) < ((int32_t)L_25))? 1 : 0);
			bool L_26 = V_7;
			if (L_26)
			{
				goto IL_0084;
			}
		}

IL_00cd:
		{
			List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12 * L_27 = __this->get_outgoingStream_48();
			List_1_Clear_mF58D22F35D225408FD85AED23F90A8650B555E06(L_27, /*hidden argument*/List_1_Clear_mF58D22F35D225408FD85AED23F90A8650B555E06_RuntimeMethod_var);
			((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->set_outgoingCommandsInStream_36(0);
			IL2CPP_LEAVE(0xEC, FINALLY_00e3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e3;
	}

FINALLY_00e3:
	{ // begin finally (depth: 1)
		List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12 * L_28 = V_4;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_28, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(227)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(227)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xEC, IL_00ec)
	}

IL_00ec:
	{
		V_1 = (bool)0;
		goto IL_00f0;
	}

IL_00f0:
	{
		bool L_29 = V_1;
		return L_29;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::SendAcksOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPeer_SendAcksOnly_m75E98152C1B9B16A81F1422C274D74D44FD704A2 (TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * L_0 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_PhotonSocket_3();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * L_1 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_PhotonSocket_3();
		bool L_2;
		L_2 = IPhotonSocket_get_Connected_mF4FC07D90A5CF561AEF88E3248F84CD3D46DE9EB(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0054;
	}

IL_0023:
	{
		uint8_t L_4 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_peerConnectionState_6();
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = SupportClass_GetTickCount_mDD38F1B27059098AE7B5CC7B2072AAFC43D2D145(/*hidden argument*/NULL);
		int32_t L_6 = __this->get_lastPingResult_49();
		int32_t L_7;
		L_7 = PeerBase_get_timePingInterval_mC4FDEF910DDAFAD59491D4D1449A9FBF804B240A(__this, /*hidden argument*/NULL);
		G_B8_0 = ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6))) > ((int32_t)L_7))? 1 : 0);
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = (bool)G_B8_0;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0050;
		}
	}
	{
		TPeer_SendPing_m4B399854FCD3E0E647CE9042A64A44AD66265EA5(__this, /*hidden argument*/NULL);
	}

IL_0050:
	{
		V_1 = (bool)0;
		goto IL_0054;
	}

IL_0054:
	{
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::EnqueueOperation(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Byte,ExitGames.Client.Photon.SendOptions,ExitGames.Client.Photon.EgMessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPeer_EnqueueOperation_mB3889DEEA98B943150D3FEB366236FA1758DBD07 (TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65 * __this, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * ___parameters0, uint8_t ___opCode1, SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E  ___sendParams2, uint8_t ___messageType3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionStateValue_t632C7ED12C80052ADD64C243BC3EC72F835CBFA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75D46515E5FA1E41165D1F1235FDED4C00F15F43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CBACC8665E098574C09F925D61F052BBB7E22B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CDB75C7B635278885D0B7EA4B060ED5D6CDDC2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1C16855D8192424FC88BE50A772F28AFBF3D5E6);
		s_Il2CppMethodInitialized = true;
	}
	StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		uint8_t L_0 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_peerConnectionState_6();
		V_1 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_007b;
		}
	}
	{
		uint8_t L_2;
		L_2 = PeerBase_get_debugOut_mD36CF36130C16BD3F9480A2A81DC2B65305A0638(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0063;
		}
	}
	{
		RuntimeObject* L_4;
		L_4 = PeerBase_get_Listener_m383691FE451B45BDBC3E7280D12F16A7FCCF0509(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_5;
		ArrayElementTypeCheck (L_6, _stringLiteralA1C16855D8192424FC88BE50A772F28AFBF3D5E6);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralA1C16855D8192424FC88BE50A772F28AFBF3D5E6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_6;
		uint8_t L_8 = ___opCode1;
		uint8_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_7;
		ArrayElementTypeCheck (L_11, _stringLiteral8CBACC8665E098574C09F925D61F052BBB7E22B8);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral8CBACC8665E098574C09F925D61F052BBB7E22B8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_11;
		uint8_t L_13 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_peerConnectionState_6();
		uint8_t L_14 = L_13;
		RuntimeObject * L_15 = Box(ConnectionStateValue_t632C7ED12C80052ADD64C243BC3EC72F835CBFA6_il2cpp_TypeInfo_var, &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		String_t* L_16;
		L_16 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_12, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var, L_4, 1, L_16);
	}

IL_0063:
	{
		RuntimeObject* L_17;
		L_17 = PeerBase_get_Listener_m383691FE451B45BDBC3E7280D12F16A7FCCF0509(__this, /*hidden argument*/NULL);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::OnStatusChanged(ExitGames.Client.Photon.StatusCode) */, IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var, L_17, ((int32_t)1030));
		V_3 = (bool)0;
		goto IL_012f;
	}

IL_007b:
	{
		SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E  L_18 = ___sendParams2;
		uint8_t L_19 = L_18.get_Channel_4();
		uint8_t L_20;
		L_20 = PeerBase_get_ChannelCount_m2ED2B31EDEA73E83E453CE76C4E2523E7BB172B5(__this, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)L_20))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_0108;
		}
	}
	{
		uint8_t L_22;
		L_22 = PeerBase_get_debugOut_mD36CF36130C16BD3F9480A2A81DC2B65305A0638(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_22) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_00f3;
		}
	}
	{
		RuntimeObject* L_24;
		L_24 = PeerBase_get_Listener_m383691FE451B45BDBC3E7280D12F16A7FCCF0509(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = L_25;
		ArrayElementTypeCheck (L_26, _stringLiteral75D46515E5FA1E41165D1F1235FDED4C00F15F43);
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral75D46515E5FA1E41165D1F1235FDED4C00F15F43);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = L_26;
		SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E  L_28 = ___sendParams2;
		uint8_t L_29 = L_28.get_Channel_4();
		uint8_t L_30 = L_29;
		RuntimeObject * L_31 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_30);
		ArrayElementTypeCheck (L_27, L_31);
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_31);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_32 = L_27;
		ArrayElementTypeCheck (L_32, _stringLiteral9CDB75C7B635278885D0B7EA4B060ED5D6CDDC2B);
		(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral9CDB75C7B635278885D0B7EA4B060ED5D6CDDC2B);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_33 = L_32;
		uint8_t L_34;
		L_34 = PeerBase_get_ChannelCount_m2ED2B31EDEA73E83E453CE76C4E2523E7BB172B5(__this, /*hidden argument*/NULL);
		uint8_t L_35 = L_34;
		RuntimeObject * L_36 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_35);
		ArrayElementTypeCheck (L_33, L_36);
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_36);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_37 = L_33;
		ArrayElementTypeCheck (L_37, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		String_t* L_38;
		L_38 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_37, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var, L_24, 1, L_38);
	}

IL_00f3:
	{
		RuntimeObject* L_39;
		L_39 = PeerBase_get_Listener_m383691FE451B45BDBC3E7280D12F16A7FCCF0509(__this, /*hidden argument*/NULL);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::OnStatusChanged(ExitGames.Client.Photon.StatusCode) */, IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var, L_39, ((int32_t)1030));
		V_3 = (bool)0;
		goto IL_012f;
	}

IL_0108:
	{
		uint8_t L_40 = ___opCode1;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_41 = ___parameters0;
		uint8_t L_42 = ___messageType3;
		SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E  L_43 = ___sendParams2;
		bool L_44 = L_43.get_Encrypt_3();
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_45;
		L_45 = VirtFuncInvoker4< StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F *, uint8_t, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, uint8_t, bool >::Invoke(12 /* ExitGames.Client.Photon.StreamBuffer ExitGames.Client.Photon.PeerBase::SerializeOperationToMessage(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.EgMessageType,System.Boolean) */, __this, L_40, L_41, L_42, L_44);
		V_0 = L_45;
		SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E  L_46 = ___sendParams2;
		int32_t L_47 = L_46.get_DeliveryMode_2();
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_48 = V_0;
		SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E  L_49 = ___sendParams2;
		uint8_t L_50 = L_49.get_Channel_4();
		bool L_51;
		L_51 = TPeer_EnqueueMessageAsPayload_m831B8E40556A6FD07A355BD79D090827DBA55D11(__this, L_47, L_48, L_50, /*hidden argument*/NULL);
		V_3 = L_51;
		goto IL_012f;
	}

IL_012f:
	{
		bool L_52 = V_3;
		return L_52;
	}
}
// ExitGames.Client.Photon.StreamBuffer ExitGames.Client.Photon.TPeer::SerializeOperationToMessage(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.EgMessageType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * TPeer_SerializeOperationToMessage_m8C14C5020F80D69E5E948DA827E8E8F86490C072 (TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65 * __this, uint8_t ___opCode0, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * ___parameters1, uint8_t ___messageType2, bool ___encrypt3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICryptoProvider_t45AF0B7A1D230BA087DE740DDFEBFD876076E75B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Protocol_t8FFDD4F2A9126501AFA64394B4F67A354A016491_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * V_1 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * V_10 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B15_0 = 0;
	{
		bool L_0 = ___encrypt3;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		uint8_t L_1 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_usedTransportProtocol_2();
		G_B3_0 = ((((int32_t)((((int32_t)L_1) == ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		IL2CPP_RUNTIME_CLASS_INIT(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8_il2cpp_TypeInfo_var);
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_2;
		L_2 = PeerBase_MessageBufferPoolGet_mA53C1CE161627D76D130B05B015506C55BC257A8(/*hidden argument*/NULL);
		V_1 = L_2;
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_3 = V_1;
		StreamBuffer_SetLength_m3556630F44704F5289A2D4C9A74CA313EBBE8C86(L_3, ((int64_t)((int64_t)0)), /*hidden argument*/NULL);
		bool L_4 = V_0;
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_6 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = __this->get_messageHeader_53();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = __this->get_messageHeader_53();
		StreamBuffer_Write_m177FE649E0A724563BC39C5C690561260D365E5C(L_6, L_7, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))), /*hidden argument*/NULL);
	}

IL_0044:
	{
		IProtocol_tE34131CF5A8A0FF12F4C6264A2B3BCB449F4174A * L_9 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_SerializationProtocol_1();
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_10 = V_1;
		uint8_t L_11 = ___opCode0;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_12 = ___parameters1;
		VirtActionInvoker4< StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F *, uint8_t, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, bool >::Invoke(10 /* System.Void ExitGames.Client.Photon.IProtocol::SerializeOperationRequest(ExitGames.Client.Photon.StreamBuffer,System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean) */, L_9, L_10, L_11, L_12, (bool)0);
		bool L_13 = V_0;
		V_4 = L_13;
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_00a4;
		}
	}
	{
		RuntimeObject* L_15 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_CryptoProvider_38();
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_16 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17;
		L_17 = StreamBuffer_GetBuffer_m2637CD4CB25C3B82A095F960BC10155293FA4D45(L_16, /*hidden argument*/NULL);
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_18 = V_1;
		int32_t L_19;
		L_19 = StreamBuffer_get_Length_mAB8A53234D8D18994F517A80C8FA69CC480444CF(L_18, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20;
		L_20 = InterfaceFuncInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(2 /* System.Byte[] Photon.SocketServer.Security.ICryptoProvider::Encrypt(System.Byte[],System.Int32,System.Int32) */, ICryptoProvider_t45AF0B7A1D230BA087DE740DDFEBFD876076E75B_il2cpp_TypeInfo_var, L_15, L_17, 0, L_19);
		V_5 = L_20;
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_21 = V_1;
		StreamBuffer_SetLength_m3556630F44704F5289A2D4C9A74CA313EBBE8C86(L_21, ((int64_t)((int64_t)0)), /*hidden argument*/NULL);
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_22 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = __this->get_messageHeader_53();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = __this->get_messageHeader_53();
		StreamBuffer_Write_m177FE649E0A724563BC39C5C690561260D365E5C(L_22, L_23, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))), /*hidden argument*/NULL);
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_25 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26 = V_5;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = V_5;
		StreamBuffer_Write_m177FE649E0A724563BC39C5C690561260D365E5C(L_25, L_26, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))), /*hidden argument*/NULL);
	}

IL_00a4:
	{
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_28 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29;
		L_29 = StreamBuffer_GetBuffer_m2637CD4CB25C3B82A095F960BC10155293FA4D45(L_28, /*hidden argument*/NULL);
		V_2 = L_29;
		uint8_t L_30 = ___messageType2;
		V_6 = (bool)((((int32_t)((((int32_t)L_30) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_00c7;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33 = __this->get_messageHeader_53();
		uint8_t L_34 = ___messageType2;
		(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))), (int32_t)1))), (uint8_t)L_34);
	}

IL_00c7:
	{
		bool L_35 = V_0;
		if (L_35)
		{
			goto IL_00de;
		}
	}
	{
		bool L_36 = ___encrypt3;
		if (!L_36)
		{
			goto IL_00db;
		}
	}
	{
		PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2 * L_37 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_photonPeer_0();
		bool L_38 = L_37->get_EnableEncryptedFlag_24();
		G_B13_0 = ((int32_t)(L_38));
		goto IL_00dc;
	}

IL_00db:
	{
		G_B13_0 = 0;
	}

IL_00dc:
	{
		G_B15_0 = G_B13_0;
		goto IL_00df;
	}

IL_00de:
	{
		G_B15_0 = 1;
	}

IL_00df:
	{
		V_7 = (bool)G_B15_0;
		bool L_39 = V_7;
		if (!L_39)
		{
			goto IL_0106;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_40 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_41 = __this->get_messageHeader_53();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_42 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_43 = __this->get_messageHeader_53();
		int32_t L_44 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length))), (int32_t)1));
		uint8_t L_45 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44));
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length))), (int32_t)1))), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_45|(int32_t)((int32_t)128))))));
	}

IL_0106:
	{
		bool L_46 = __this->get_DoFraming_54();
		V_8 = L_46;
		bool L_47 = V_8;
		if (!L_47)
		{
			goto IL_0126;
		}
	}
	{
		V_9 = 1;
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_48 = V_1;
		int32_t L_49;
		L_49 = StreamBuffer_get_Length_mAB8A53234D8D18994F517A80C8FA69CC480444CF(L_48, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_50 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Protocol_t8FFDD4F2A9126501AFA64394B4F67A354A016491_il2cpp_TypeInfo_var);
		Protocol_Serialize_mBB601C9D17432A08A159105E2A7E2AAF9BB519D5(L_49, L_50, (int32_t*)(&V_9), /*hidden argument*/NULL);
	}

IL_0126:
	{
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_51 = V_1;
		V_10 = L_51;
		goto IL_012b;
	}

IL_012b:
	{
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_52 = V_10;
		return L_52;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::EnqueueMessageAsPayload(ExitGames.Client.Photon.DeliveryMode,ExitGames.Client.Photon.StreamBuffer,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPeer_EnqueueMessageAsPayload_m831B8E40556A6FD07A355BD79D090827DBA55D11 (TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65 * __this, int32_t ___deliveryMode0, StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * ___opMessage1, uint8_t ___channelId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m791BCFDD5F935FDC5E54CA8742E870ACA926689B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_4 = NULL;
	int32_t V_5 = 0;
	List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12 * V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_0 = ___opMessage1;
		V_1 = (bool)((((RuntimeObject*)(StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0119;
	}

IL_0011:
	{
		bool L_2 = __this->get_DoFraming_54();
		V_3 = L_2;
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0074;
		}
	}
	{
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_4 = ___opMessage1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5;
		L_5 = StreamBuffer_GetBuffer_m2637CD4CB25C3B82A095F960BC10155293FA4D45(L_4, /*hidden argument*/NULL);
		V_4 = L_5;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_4;
		uint8_t L_7 = ___channelId2;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (uint8_t)L_7);
		int32_t L_8 = ___deliveryMode0;
		V_5 = L_8;
		int32_t L_9 = V_5;
		switch (L_9)
		{
			case 0:
			{
				goto IL_0045;
			}
			case 1:
			{
				goto IL_004c;
			}
			case 2:
			{
				goto IL_0053;
			}
			case 3:
			{
				goto IL_005a;
			}
		}
	}
	{
		goto IL_0061;
	}

IL_0045:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_4;
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (uint8_t)0);
		goto IL_0073;
	}

IL_004c:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_4;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (uint8_t)1);
		goto IL_0073;
	}

IL_0053:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = V_4;
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (uint8_t)2);
		goto IL_0073;
	}

IL_005a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = V_4;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (uint8_t)3);
		goto IL_0073;
	}

IL_0061:
	{
		int32_t L_14 = ___deliveryMode0;
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeliveryMode_t24B37E13B9A45C2DE24E1B5B70C57E977C31FF7C_il2cpp_TypeInfo_var)), &L_15);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_17 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAC74A02B4CEED8538DF27EC8749B19526C0B8E0A)), L_16, (String_t*)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TPeer_EnqueueMessageAsPayload_m831B8E40556A6FD07A355BD79D090827DBA55D11_RuntimeMethod_var)));
	}

IL_0073:
	{
	}

IL_0074:
	{
		List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12 * L_18 = __this->get_outgoingStream_48();
		V_6 = L_18;
		List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12 * L_19 = V_6;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_19, /*hidden argument*/NULL);
	}

IL_0084:
	try
	{ // begin try (depth: 1)
		List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12 * L_20 = __this->get_outgoingStream_48();
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_21 = ___opMessage1;
		List_1_Add_m791BCFDD5F935FDC5E54CA8742E870ACA926689B(L_20, L_21, /*hidden argument*/List_1_Add_m791BCFDD5F935FDC5E54CA8742E870ACA926689B_RuntimeMethod_var);
		int32_t L_22 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_outgoingCommandsInStream_36();
		((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->set_outgoingCommandsInStream_36(((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)));
		IL2CPP_LEAVE(0xAC, FINALLY_00a3);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a3;
	}

FINALLY_00a3:
	{ // begin finally (depth: 1)
		List_1_t6711FD2EFED23E06088091B9C0B8A90B25691E12 * L_23 = V_6;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_23, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(163)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(163)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xAC, IL_00ac)
	}

IL_00ac:
	{
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_24 = ___opMessage1;
		int32_t L_25;
		L_25 = StreamBuffer_get_Length_mAB8A53234D8D18994F517A80C8FA69CC480444CF(L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		int32_t L_26 = V_0;
		((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->set_ByteCountLastOperation_7(L_26);
		bool L_27;
		L_27 = PeerBase_get_TrafficStatsEnabled_m745BEA2E615BFFFD518E477AA0EA4C6CD7AC00B8(__this, /*hidden argument*/NULL);
		V_7 = L_27;
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_0115;
		}
	}
	{
		int32_t L_29 = ___deliveryMode0;
		V_8 = L_29;
		int32_t L_30 = V_8;
		if (!L_30)
		{
			goto IL_00d7;
		}
	}
	{
		goto IL_00d0;
	}

IL_00d0:
	{
		int32_t L_31 = V_8;
		if ((((int32_t)L_31) == ((int32_t)1)))
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00f5;
	}

IL_00d7:
	{
		TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * L_32;
		L_32 = PeerBase_get_TrafficStatsOutgoing_m328B4CEC35B683E97258A6416744E9245283DD3D(__this, /*hidden argument*/NULL);
		int32_t L_33 = V_0;
		TrafficStats_CountUnreliableOpCommand_m07A3ACC43B0E5C619543A30799AA57F1C6236C23(L_32, L_33, /*hidden argument*/NULL);
		goto IL_0107;
	}

IL_00e6:
	{
		TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * L_34;
		L_34 = PeerBase_get_TrafficStatsOutgoing_m328B4CEC35B683E97258A6416744E9245283DD3D(__this, /*hidden argument*/NULL);
		int32_t L_35 = V_0;
		TrafficStats_CountReliableOpCommand_m7E7C10B9007D42A130900FB011FCAF286F445FAB(L_34, L_35, /*hidden argument*/NULL);
		goto IL_0107;
	}

IL_00f5:
	{
		int32_t L_36 = ___deliveryMode0;
		int32_t L_37 = L_36;
		RuntimeObject * L_38 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeliveryMode_t24B37E13B9A45C2DE24E1B5B70C57E977C31FF7C_il2cpp_TypeInfo_var)), &L_37);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_39 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_39, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral872DE60CB2239200B569B73387AEE6DEF5D86F24)), L_38, (String_t*)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TPeer_EnqueueMessageAsPayload_m831B8E40556A6FD07A355BD79D090827DBA55D11_RuntimeMethod_var)));
	}

IL_0107:
	{
		TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * L_40;
		L_40 = PeerBase_get_TrafficStatsGameLevel_m004F540D39B278D32344189978D5672630FC3552(__this, /*hidden argument*/NULL);
		int32_t L_41 = V_0;
		TrafficStatsGameLevel_CountOperation_mD54E8BD76B50DE47B7E6CADDDD8C23D81CD13B05(L_40, L_41, /*hidden argument*/NULL);
	}

IL_0115:
	{
		V_2 = (bool)1;
		goto IL_0119;
	}

IL_0119:
	{
		bool L_42 = V_2;
		return L_42;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::SendPing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_SendPing_m4B399854FCD3E0E647CE9042A64A44AD66265EA5 (TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonCodes_tD1A9077B43D53F53C2951300FDAC9FCFCB1EEDCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Protocol_t8FFDD4F2A9126501AFA64394B4F67A354A016491_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * V_3 = NULL;
	SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = SupportClass_GetTickCount_mDD38F1B27059098AE7B5CC7B2072AAFC43D2D145(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		__this->set_lastPingResult_49(L_1);
		bool L_2 = __this->get_DoFraming_54();
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0092;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E ));
		(&V_4)->set_DeliveryMode_2(1);
		SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E  L_4 = V_4;
		V_2 = L_4;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonCodes_tD1A9077B43D53F53C2951300FDAC9FCFCB1EEDCD_il2cpp_TypeInfo_var);
		uint8_t L_5 = ((PhotonCodes_tD1A9077B43D53F53C2951300FDAC9FCFCB1EEDCD_StaticFields*)il2cpp_codegen_static_fields_for(PhotonCodes_tD1A9077B43D53F53C2951300FDAC9FCFCB1EEDCD_il2cpp_TypeInfo_var))->get_Ping_4();
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_6 = (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *)il2cpp_codegen_object_new(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C(L_6, /*hidden argument*/Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_7 = L_6;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_9);
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_7, (uint8_t)1, L_10, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		SendOptions_tA3080D35728205FFA80BF90690D8730112B79C0E  L_11 = V_2;
		bool L_12 = L_11.get_Encrypt_3();
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_13;
		L_13 = VirtFuncInvoker4< StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F *, uint8_t, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, uint8_t, bool >::Invoke(12 /* ExitGames.Client.Photon.StreamBuffer ExitGames.Client.Photon.PeerBase::SerializeOperationToMessage(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.EgMessageType,System.Boolean) */, __this, L_5, L_7, 6, L_12);
		V_3 = L_13;
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_14 = V_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15;
		L_15 = StreamBuffer_GetBuffer_m2637CD4CB25C3B82A095F960BC10155293FA4D45(L_14, /*hidden argument*/NULL);
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_16 = V_3;
		int32_t L_17;
		L_17 = StreamBuffer_get_Length_mAB8A53234D8D18994F517A80C8FA69CC480444CF(L_16, /*hidden argument*/NULL);
		TPeer_SendData_m299CD3002DB0E3FA0A804030E063C0363443A20F(__this, L_15, L_17, /*hidden argument*/NULL);
		bool L_18;
		L_18 = PeerBase_get_TrafficStatsEnabled_m745BEA2E615BFFFD518E477AA0EA4C6CD7AC00B8(__this, /*hidden argument*/NULL);
		V_5 = L_18;
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_0088;
		}
	}
	{
		TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * L_20;
		L_20 = PeerBase_get_TrafficStatsOutgoing_m328B4CEC35B683E97258A6416744E9245283DD3D(__this, /*hidden argument*/NULL);
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_21 = V_3;
		int32_t L_22;
		L_22 = StreamBuffer_get_Length_mAB8A53234D8D18994F517A80C8FA69CC480444CF(L_21, /*hidden argument*/NULL);
		TrafficStats_CountControlCommand_m1F3BADE16E8ED14581CB43FB50C0C00DA3E9ADEF(L_20, L_22, /*hidden argument*/NULL);
	}

IL_0088:
	{
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_23 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8_il2cpp_TypeInfo_var);
		PeerBase_MessageBufferPoolPut_m959FE967A50DE44E8B8C40EE995FB62B012B14F8(L_23, /*hidden argument*/NULL);
		goto IL_00dd;
	}

IL_0092:
	{
		V_6 = 1;
		int32_t L_24 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = __this->get_pingRequest_50();
		IL2CPP_RUNTIME_CLASS_INIT(Protocol_t8FFDD4F2A9126501AFA64394B4F67A354A016491_il2cpp_TypeInfo_var);
		Protocol_Serialize_mBB601C9D17432A08A159105E2A7E2AAF9BB519D5(L_24, L_25, (int32_t*)(&V_6), /*hidden argument*/NULL);
		bool L_26;
		L_26 = PeerBase_get_TrafficStatsEnabled_m745BEA2E615BFFFD518E477AA0EA4C6CD7AC00B8(__this, /*hidden argument*/NULL);
		V_7 = L_26;
		bool L_27 = V_7;
		if (!L_27)
		{
			goto IL_00c7;
		}
	}
	{
		TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * L_28;
		L_28 = PeerBase_get_TrafficStatsOutgoing_m328B4CEC35B683E97258A6416744E9245283DD3D(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = __this->get_pingRequest_50();
		TrafficStats_CountControlCommand_m1F3BADE16E8ED14581CB43FB50C0C00DA3E9ADEF(L_28, ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))), /*hidden argument*/NULL);
	}

IL_00c7:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = __this->get_pingRequest_50();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = __this->get_pingRequest_50();
		TPeer_SendData_m299CD3002DB0E3FA0A804030E063C0363443A20F(__this, L_30, ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))), /*hidden argument*/NULL);
	}

IL_00dd:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::SendData(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_SendData_m299CD3002DB0E3FA0A804030E063C0363443A20F (TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	Exception_t * V_4 = NULL;
	bool V_5 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			int64_t L_0 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_bytesOut_23();
			int32_t L_1 = ___length1;
			((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->set_bytesOut_23(((int64_t)il2cpp_codegen_add((int64_t)L_0, (int64_t)((int64_t)((int64_t)L_1)))));
			bool L_2;
			L_2 = PeerBase_get_TrafficStatsEnabled_m745BEA2E615BFFFD518E477AA0EA4C6CD7AC00B8(__this, /*hidden argument*/NULL);
			V_0 = L_2;
			bool L_3 = V_0;
			if (!L_3)
			{
				goto IL_004c;
			}
		}

IL_001b:
		{
			TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * L_4;
			L_4 = PeerBase_get_TrafficStatsOutgoing_m328B4CEC35B683E97258A6416744E9245283DD3D(__this, /*hidden argument*/NULL);
			TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * L_5 = L_4;
			int32_t L_6;
			L_6 = TrafficStats_get_TotalPacketCount_m608185872F34EA2B3A8FC72BC137F554D0C891EA_inline(L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			int32_t L_7 = V_1;
			TrafficStats_set_TotalPacketCount_m2D07017330D78709B0F13D1079F01DCDE46C1788_inline(L_5, ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)), /*hidden argument*/NULL);
			TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * L_8;
			L_8 = PeerBase_get_TrafficStatsOutgoing_m328B4CEC35B683E97258A6416744E9245283DD3D(__this, /*hidden argument*/NULL);
			TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * L_9 = L_8;
			int32_t L_10;
			L_10 = TrafficStats_get_TotalCommandsInPackets_mF3FB9D78F73AA8CF2047A081E84A68DD449C0130_inline(L_9, /*hidden argument*/NULL);
			int32_t L_11 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_outgoingCommandsInStream_36();
			TrafficStats_set_TotalCommandsInPackets_m2A4B5B4235859BE6DD2237BF0D3463846630A32D_inline(L_9, ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11)), /*hidden argument*/NULL);
		}

IL_004c:
		{
			NetworkSimulationSet_t4A1C331EC3287275813D225F252C36EF3DE2AE4C * L_12;
			L_12 = PeerBase_get_NetworkSimulationSettings_mE26E11AAC2C9E9E3E734336ADAF0BBBC88DD25A1(__this, /*hidden argument*/NULL);
			bool L_13;
			L_13 = NetworkSimulationSet_get_IsSimulationEnabled_m2CD09604AD6A7620BC4D49CEE0A202674E712CF1(L_12, /*hidden argument*/NULL);
			V_2 = L_13;
			bool L_14 = V_2;
			if (!L_14)
			{
				goto IL_0079;
			}
		}

IL_005b:
		{
			int32_t L_15 = ___length1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_15);
			V_3 = L_16;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = ___data0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = V_3;
			int32_t L_19 = ___length1;
			Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_17, 0, (RuntimeArray *)(RuntimeArray *)L_18, 0, L_19, /*hidden argument*/NULL);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = V_3;
			PeerBase_SendNetworkSimulated_m50A38974B0F8A5F48D05E61F0098C27A52CB5DA1(__this, L_20, /*hidden argument*/NULL);
			goto IL_0089;
		}

IL_0079:
		{
			IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * L_21 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_PhotonSocket_3();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = ___data0;
			int32_t L_23 = ___length1;
			int32_t L_24;
			L_24 = VirtFuncInvoker2< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t >::Invoke(6 /* ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.IPhotonSocket::Send(System.Byte[],System.Int32) */, L_21, L_22, L_23);
		}

IL_0089:
		{
			goto IL_00c2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008c;
		}
		throw e;
	}

CATCH_008c:
	{ // begin catch(System.Exception)
		{
			V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			uint8_t L_25;
			L_25 = PeerBase_get_debugOut_mD36CF36130C16BD3F9480A2A81DC2B65305A0638(__this, /*hidden argument*/NULL);
			V_5 = (bool)((((int32_t)((((int32_t)L_25) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_26 = V_5;
			if (!L_26)
			{
				goto IL_00b7;
			}
		}

IL_00a1:
		{
			RuntimeObject* L_27;
			L_27 = PeerBase_get_Listener_m383691FE451B45BDBC3E7280D12F16A7FCCF0509(__this, /*hidden argument*/NULL);
			Exception_t * L_28 = V_4;
			String_t* L_29;
			L_29 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_28);
			InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var)), L_27, 1, L_29);
		}

IL_00b7:
		{
			Exception_t * L_30 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var)));
			SupportClass_WriteStackTrace_m48F93451487D9B87081A6F40B515939133AB5E51(L_30, /*hidden argument*/NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00c2;
		}
	} // end catch (depth: 1)

IL_00c2:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::ReceiveIncomingCommands(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_ReceiveIncomingCommands_mB23B676602E0E6EF57999A4BC955F9E5BDD190D9 (TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___inbuff0, int32_t ___dataLength1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonCodes_tD1A9077B43D53F53C2951300FDAC9FCFCB1EEDCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m7970BCC9C6190DE84A9EAE57CF52472B3795380A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral919A195066BDFAFE43F7191F4F6DE66CCB82EF97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAF8F05C11CD4B88A9CDCF0903EAA82BF03A32B6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	uint8_t V_5 = 0x0;
	uint8_t V_6 = 0x0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_7 = NULL;
	bool V_8 = false;
	Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B10_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___inbuff0;
		V_0 = (bool)((((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		uint8_t L_2;
		L_2 = PeerBase_get_debugOut_mD36CF36130C16BD3F9480A2A81DC2B65305A0638(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		PeerBase_EnqueueDebugReturn_m0C1DD16A5285EDA74381182E039486EC1963FB34(__this, 1, _stringLiteralAAF8F05C11CD4B88A9CDCF0903EAA82BF03A32B6, /*hidden argument*/NULL);
	}

IL_0029:
	{
		goto IL_0166;
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = SupportClass_GetTickCount_mDD38F1B27059098AE7B5CC7B2072AAFC43D2D145(/*hidden argument*/NULL);
		((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->set_timestampOfLastReceive_21(L_4);
		int64_t L_5 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_bytesIn_24();
		int32_t L_6 = ___dataLength1;
		((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->set_bytesIn_24(((int64_t)il2cpp_codegen_add((int64_t)L_5, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)7)))))));
		bool L_7;
		L_7 = PeerBase_get_TrafficStatsEnabled_m745BEA2E615BFFFD518E477AA0EA4C6CD7AC00B8(__this, /*hidden argument*/NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0082;
		}
	}
	{
		TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * L_9;
		L_9 = PeerBase_get_TrafficStatsIncoming_m67030FC7D58D6D219E6AA9323BE2F8AC9B8CB408(__this, /*hidden argument*/NULL);
		TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * L_10 = L_9;
		int32_t L_11;
		L_11 = TrafficStats_get_TotalPacketCount_m608185872F34EA2B3A8FC72BC137F554D0C891EA_inline(L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		int32_t L_12 = V_3;
		TrafficStats_set_TotalPacketCount_m2D07017330D78709B0F13D1079F01DCDE46C1788_inline(L_10, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)), /*hidden argument*/NULL);
		TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * L_13;
		L_13 = PeerBase_get_TrafficStatsIncoming_m67030FC7D58D6D219E6AA9323BE2F8AC9B8CB408(__this, /*hidden argument*/NULL);
		TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * L_14 = L_13;
		int32_t L_15;
		L_15 = TrafficStats_get_TotalCommandsInPackets_mF3FB9D78F73AA8CF2047A081E84A68DD449C0130_inline(L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		int32_t L_16 = V_3;
		TrafficStats_set_TotalCommandsInPackets_m2A4B5B4235859BE6DD2237BF0D3463846630A32D_inline(L_14, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0082:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = ___inbuff0;
		int32_t L_18 = 0;
		uint8_t L_19 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		V_4 = (bool)((((int32_t)L_19) == ((int32_t)((int32_t)243)))? 1 : 0);
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_010d;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = ___inbuff0;
		int32_t L_22 = 1;
		uint8_t L_23 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		V_5 = (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_23&(int32_t)((int32_t)127)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = ___inbuff0;
		int32_t L_25 = 2;
		uint8_t L_26 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		V_6 = L_26;
		uint8_t L_27 = V_5;
		if ((!(((uint32_t)L_27) == ((uint32_t)7))))
		{
			goto IL_00b1;
		}
	}
	{
		uint8_t L_28 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonCodes_tD1A9077B43D53F53C2951300FDAC9FCFCB1EEDCD_il2cpp_TypeInfo_var);
		uint8_t L_29 = ((PhotonCodes_tD1A9077B43D53F53C2951300FDAC9FCFCB1EEDCD_StaticFields*)il2cpp_codegen_static_fields_for(PhotonCodes_tD1A9077B43D53F53C2951300FDAC9FCFCB1EEDCD_il2cpp_TypeInfo_var))->get_Ping_4();
		G_B10_0 = ((((int32_t)L_28) == ((int32_t)L_29))? 1 : 0);
		goto IL_00b2;
	}

IL_00b1:
	{
		G_B10_0 = 0;
	}

IL_00b2:
	{
		V_8 = (bool)G_B10_0;
		bool L_30 = V_8;
		if (!L_30)
		{
			goto IL_00cb;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = ___inbuff0;
		StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * L_32 = (StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F *)il2cpp_codegen_object_new(StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F_il2cpp_TypeInfo_var);
		StreamBuffer__ctor_m359C02BE509B1FA8594480BA59FC8500681F464F(L_32, L_31, /*hidden argument*/NULL);
		bool L_33;
		L_33 = VirtFuncInvoker1< bool, StreamBuffer_tFE417F0C7ACF52EE18608EA88A0531B55ADE1B1F * >::Invoke(17 /* System.Boolean ExitGames.Client.Photon.PeerBase::DeserializeMessageAndCallback(ExitGames.Client.Photon.StreamBuffer) */, __this, L_32);
		goto IL_0166;
	}

IL_00cb:
	{
		int32_t L_34 = ___dataLength1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_34);
		V_7 = L_35;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_36 = ___inbuff0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_37 = V_7;
		int32_t L_38 = ___dataLength1;
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_36, 0, (RuntimeArray *)(RuntimeArray *)L_37, 0, L_38, /*hidden argument*/NULL);
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_39 = __this->get_incomingList_47();
		V_9 = L_39;
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_40 = V_9;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_40, /*hidden argument*/NULL);
	}

IL_00ef:
	try
	{ // begin try (depth: 1)
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_41 = __this->get_incomingList_47();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_42 = V_7;
		Queue_1_Enqueue_m7970BCC9C6190DE84A9EAE57CF52472B3795380A(L_41, L_42, /*hidden argument*/Queue_1_Enqueue_m7970BCC9C6190DE84A9EAE57CF52472B3795380A_RuntimeMethod_var);
		IL2CPP_LEAVE(0x10A, FINALLY_0101);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0101;
	}

FINALLY_0101:
	{ // begin finally (depth: 1)
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_43 = V_9;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_43, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(257)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(257)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x10A, IL_010a)
	}

IL_010a:
	{
		goto IL_0166;
	}

IL_010d:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_44 = ___inbuff0;
		int32_t L_45 = 0;
		uint8_t L_46 = (L_44)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		V_10 = (bool)((((int32_t)L_46) == ((int32_t)((int32_t)240)))? 1 : 0);
		bool L_47 = V_10;
		if (!L_47)
		{
			goto IL_0138;
		}
	}
	{
		TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * L_48;
		L_48 = PeerBase_get_TrafficStatsIncoming_m67030FC7D58D6D219E6AA9323BE2F8AC9B8CB408(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_49 = ___inbuff0;
		TrafficStats_CountControlCommand_m1F3BADE16E8ED14581CB43FB50C0C00DA3E9ADEF(L_48, ((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length))), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_50 = ___inbuff0;
		TPeer_ReadPingResult_mB8F5CE468BFCB27F3765349831929E64763E9F07(__this, L_50, /*hidden argument*/NULL);
		goto IL_0166;
	}

IL_0138:
	{
		uint8_t L_51;
		L_51 = PeerBase_get_debugOut_mD36CF36130C16BD3F9480A2A81DC2B65305A0638(__this, /*hidden argument*/NULL);
		V_11 = (bool)((((int32_t)((((int32_t)L_51) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_52 = V_11;
		if (!L_52)
		{
			goto IL_0166;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_53 = ___inbuff0;
		int32_t L_54 = 0;
		uint8_t L_55 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54));
		uint8_t L_56 = L_55;
		RuntimeObject * L_57 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_56);
		String_t* L_58;
		L_58 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteral919A195066BDFAFE43F7191F4F6DE66CCB82EF97, L_57, /*hidden argument*/NULL);
		PeerBase_EnqueueDebugReturn_m0C1DD16A5285EDA74381182E039486EC1963FB34(__this, 1, L_58, /*hidden argument*/NULL);
	}

IL_0166:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::ReadPingResult(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_ReadPingResult_mB8F5CE468BFCB27F3765349831929E64763E9F07 (TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___inbuff0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Protocol_t8FFDD4F2A9126501AFA64394B4F67A354A016491_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___inbuff0;
		IL2CPP_RUNTIME_CLASS_INIT(Protocol_t8FFDD4F2A9126501AFA64394B4F67A354A016491_il2cpp_TypeInfo_var);
		Protocol_Deserialize_m72F597869310FFE1FB9D7FDA4194D07CEC6D5E94((int32_t*)(&V_0), L_0, (int32_t*)(&V_2), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___inbuff0;
		Protocol_Deserialize_m72F597869310FFE1FB9D7FDA4194D07CEC6D5E94((int32_t*)(&V_1), L_1, (int32_t*)(&V_2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = SupportClass_GetTickCount_mDD38F1B27059098AE7B5CC7B2072AAFC43D2D145(/*hidden argument*/NULL);
		int32_t L_3 = V_1;
		((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->set_lastRoundTripTime_18(((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3)));
		bool L_4 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_serverTimeOffsetIsAvailable_15();
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_6 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_lastRoundTripTime_18();
		((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->set_roundTripTime_16(L_6);
	}

IL_0045:
	{
		int32_t L_7 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_lastRoundTripTime_18();
		PeerBase_UpdateRoundTripTimeAndVariance_m0F0F98CA6B9BBB9A4A7774E6307BF76408C9A9CC(__this, L_7, /*hidden argument*/NULL);
		bool L_8 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_serverTimeOffsetIsAvailable_15();
		V_4 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_lastRoundTripTime_18();
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = SupportClass_GetTickCount_mDD38F1B27059098AE7B5CC7B2072AAFC43D2D145(/*hidden argument*/NULL);
		((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->set_serverTimeOffset_14(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)((int32_t)((int32_t)L_11>>(int32_t)1)))), (int32_t)L_12)));
		((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->set_serverTimeOffsetIsAvailable_15((bool)1);
	}

IL_0080:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::ReadPingResult(ExitGames.Client.Photon.OperationResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_ReadPingResult_m99D63F2D6102D423AB85ED591C0EC1FF3C0281E8 (TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65 * __this, OperationResponse_tA44F0646DDF55EC1521DA535F772BDEB7F5AA045 * ___operationResponse0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8EAE235A8AA510698BE04B4EC44DCA6979E58D29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		OperationResponse_tA44F0646DDF55EC1521DA535F772BDEB7F5AA045 * L_0 = ___operationResponse0;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_1 = L_0->get_Parameters_3();
		RuntimeObject * L_2;
		L_2 = Dictionary_2_get_Item_m8EAE235A8AA510698BE04B4EC44DCA6979E58D29(L_1, (uint8_t)2, /*hidden argument*/Dictionary_2_get_Item_m8EAE235A8AA510698BE04B4EC44DCA6979E58D29_RuntimeMethod_var);
		V_0 = ((*(int32_t*)((int32_t*)UnBox(L_2, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
		OperationResponse_tA44F0646DDF55EC1521DA535F772BDEB7F5AA045 * L_3 = ___operationResponse0;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_4 = L_3->get_Parameters_3();
		RuntimeObject * L_5;
		L_5 = Dictionary_2_get_Item_m8EAE235A8AA510698BE04B4EC44DCA6979E58D29(L_4, (uint8_t)1, /*hidden argument*/Dictionary_2_get_Item_m8EAE235A8AA510698BE04B4EC44DCA6979E58D29_RuntimeMethod_var);
		V_1 = ((*(int32_t*)((int32_t*)UnBox(L_5, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = SupportClass_GetTickCount_mDD38F1B27059098AE7B5CC7B2072AAFC43D2D145(/*hidden argument*/NULL);
		int32_t L_7 = V_1;
		((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->set_lastRoundTripTime_18(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7)));
		bool L_8 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_serverTimeOffsetIsAvailable_15();
		V_2 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_10 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_lastRoundTripTime_18();
		((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->set_roundTripTime_16(L_10);
	}

IL_004d:
	{
		int32_t L_11 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_lastRoundTripTime_18();
		PeerBase_UpdateRoundTripTimeAndVariance_m0F0F98CA6B9BBB9A4A7774E6307BF76408C9A9CC(__this, L_11, /*hidden argument*/NULL);
		bool L_12 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_serverTimeOffsetIsAvailable_15();
		V_3 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->get_lastRoundTripTime_18();
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		int32_t L_16;
		L_16 = SupportClass_GetTickCount_mDD38F1B27059098AE7B5CC7B2072AAFC43D2D145(/*hidden argument*/NULL);
		((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->set_serverTimeOffset_14(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)((int32_t)((int32_t)L_15>>(int32_t)1)))), (int32_t)L_16)));
		((PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 *)__this)->set_serverTimeOffsetIsAvailable_15((bool)1);
	}

IL_0086:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer__cctor_m7E15C1B9D0D77E73B44D63F0C1D4455B60ACF9E4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t3609B4DBF30D23669B25407E61F7E8BBF7C3206F____6668D4903321030E42A6CE59AB96ADD9D0214FAC_2_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3609B4DBF30D23669B25407E61F7E8BBF7C3206F____6668D4903321030E42A6CE59AB96ADD9D0214FAC_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65_StaticFields*)il2cpp_codegen_static_fields_for(TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65_il2cpp_TypeInfo_var))->set_tcpFramedMessageHead_51(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = L_3;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)243));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = L_4;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint8_t)2);
		((TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65_StaticFields*)il2cpp_codegen_static_fields_for(TPeer_tB8A5FF2D04A5F3AFA8CBBA4D1579E3B6B01DCB65_il2cpp_TypeInfo_var))->set_tcpMsgHead_52(L_5);
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
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_PackageHeaderSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_PackageHeaderSize_mDE76ACAB46B4639FDE0EB7EF773DDFBD6609E449 (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CPackageHeaderSizeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_PackageHeaderSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_PackageHeaderSize_m329D3967A6F6B46754851CC379837AD2C8786248 (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CPackageHeaderSizeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ReliableCommandCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ReliableCommandCount_mD2657BD0EDFE74A39AA88CAC60975F4C2BD515C0 (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReliableCommandCountU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_ReliableCommandCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_ReliableCommandCount_m1F9ECE9135A8CECC1DC28C87462139A6330819F4 (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CReliableCommandCountU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_UnreliableCommandCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_UnreliableCommandCount_m91FB9C2F30A054D67F477755601FD1D82A23375F (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CUnreliableCommandCountU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_UnreliableCommandCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_UnreliableCommandCount_m49AEEFE91F07241FDB30484C3971C264FB04B3A1 (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CUnreliableCommandCountU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_FragmentCommandCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_FragmentCommandCount_mE731A5BD2EDA4F9CC4751ADCD3ED8319F3AF4D02 (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CFragmentCommandCountU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_FragmentCommandCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_FragmentCommandCount_m43A7AFA2ED06F1CE0BE5F2C3F7EA1D95E8590334 (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CFragmentCommandCountU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ControlCommandCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ControlCommandCount_m026E794FF80AA93016416590955E269D15B6D249 (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CControlCommandCountU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_ControlCommandCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_ControlCommandCount_mB7F382CF2607264D46D713674601632599717B15 (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CControlCommandCountU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalPacketCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalPacketCount_m608185872F34EA2B3A8FC72BC137F554D0C891EA (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTotalPacketCountU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_TotalPacketCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_TotalPacketCount_m2D07017330D78709B0F13D1079F01DCDE46C1788 (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTotalPacketCountU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandsInPackets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalCommandsInPackets_mF3FB9D78F73AA8CF2047A081E84A68DD449C0130 (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTotalCommandsInPacketsU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_TotalCommandsInPackets(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_TotalCommandsInPackets_m2A4B5B4235859BE6DD2237BF0D3463846630A32D (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTotalCommandsInPacketsU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ReliableCommandBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ReliableCommandBytes_m04718249CD1C4442B781C141DA2FD2C8125EE5D2 (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReliableCommandBytesU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_ReliableCommandBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_ReliableCommandBytes_mFBBE10414D00CE7D29F3B9823848330EEB0FA64B (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CReliableCommandBytesU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_UnreliableCommandBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_UnreliableCommandBytes_m8506C7BE4F04E675C0089A3AC023E8BD28ABC76B (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CUnreliableCommandBytesU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_UnreliableCommandBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_UnreliableCommandBytes_m2BB8A3F13E60BAD0AA3A0C7EAF9B9EBF719FE753 (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CUnreliableCommandBytesU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_FragmentCommandBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_FragmentCommandBytes_mBD296E8D5A90D6BD30D850BDA7100C7DFE41A3F3 (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CFragmentCommandBytesU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_FragmentCommandBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_FragmentCommandBytes_mC2833B3F028419D19BB83358993D02A7D638A145 (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CFragmentCommandBytesU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ControlCommandBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ControlCommandBytes_mEC0F5A3F691E0E049D235CE3B4877F5A0C74C22F (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CControlCommandBytesU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_ControlCommandBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_ControlCommandBytes_mEA50B961FA3BEFF89A78DB1AE17E79E1BC6B11D2 (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CControlCommandBytesU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats__ctor_m7D4CCA1DC80AEB987205B3AE225D555DDAAC9F30 (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___packageHeaderSize0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___packageHeaderSize0;
		TrafficStats_set_PackageHeaderSize_m329D3967A6F6B46754851CC379837AD2C8786248_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalCommandBytes_m9FD02B5EF78357E3F1BED6A5CB72D51A50BD432C (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStats_get_ReliableCommandBytes_m04718249CD1C4442B781C141DA2FD2C8125EE5D2_inline(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = TrafficStats_get_UnreliableCommandBytes_m8506C7BE4F04E675C0089A3AC023E8BD28ABC76B_inline(__this, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = TrafficStats_get_FragmentCommandBytes_mBD296E8D5A90D6BD30D850BDA7100C7DFE41A3F3_inline(__this, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = TrafficStats_get_ControlCommandBytes_mEC0F5A3F691E0E049D235CE3B4877F5A0C74C22F_inline(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), (int32_t)L_2)), (int32_t)L_3));
		goto IL_001f;
	}

IL_001f:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalPacketBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalPacketBytes_m867682D40D3F415706D7C3385BB7306A590F88C8 (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStats_get_TotalCommandBytes_m9FD02B5EF78357E3F1BED6A5CB72D51A50BD432C(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = TrafficStats_get_TotalPacketCount_m608185872F34EA2B3A8FC72BC137F554D0C891EA_inline(__this, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = TrafficStats_get_PackageHeaderSize_mDE76ACAB46B4639FDE0EB7EF773DDFBD6609E449_inline(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_2))));
		goto IL_0018;
	}

IL_0018:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_TimestampOfLastAck(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_TimestampOfLastAck_mDFE848CB4A873E692853F57D2E1A52B3EF86C37D (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTimestampOfLastAckU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_TimestampOfLastReliableCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_TimestampOfLastReliableCommand_m24F9AF2F296ECAA9393D09E87E57FC60A3EF469B (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTimestampOfLastReliableCommandU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::CountControlCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_CountControlCommand_m1F3BADE16E8ED14581CB43FB50C0C00DA3E9ADEF (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStats_get_ControlCommandBytes_mEC0F5A3F691E0E049D235CE3B4877F5A0C74C22F_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___size0;
		TrafficStats_set_ControlCommandBytes_mEA50B961FA3BEFF89A78DB1AE17E79E1BC6B11D2_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = TrafficStats_get_ControlCommandCount_m026E794FF80AA93016416590955E269D15B6D249_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStats_set_ControlCommandCount_mB7F382CF2607264D46D713674601632599717B15_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::CountReliableOpCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_CountReliableOpCommand_m7E7C10B9007D42A130900FB011FCAF286F445FAB (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStats_get_ReliableCommandBytes_m04718249CD1C4442B781C141DA2FD2C8125EE5D2_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___size0;
		TrafficStats_set_ReliableCommandBytes_mFBBE10414D00CE7D29F3B9823848330EEB0FA64B_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = TrafficStats_get_ReliableCommandCount_mD2657BD0EDFE74A39AA88CAC60975F4C2BD515C0_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStats_set_ReliableCommandCount_m1F9ECE9135A8CECC1DC28C87462139A6330819F4_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::CountUnreliableOpCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_CountUnreliableOpCommand_m07A3ACC43B0E5C619543A30799AA57F1C6236C23 (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStats_get_UnreliableCommandBytes_m8506C7BE4F04E675C0089A3AC023E8BD28ABC76B_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___size0;
		TrafficStats_set_UnreliableCommandBytes_m2BB8A3F13E60BAD0AA3A0C7EAF9B9EBF719FE753_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = TrafficStats_get_UnreliableCommandCount_m91FB9C2F30A054D67F477755601FD1D82A23375F_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStats_set_UnreliableCommandCount_m49AEEFE91F07241FDB30484C3971C264FB04B3A1_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::CountFragmentOpCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_CountFragmentOpCommand_m6700723D427DB813FAA0BE17E97E1D8FB0784D3A (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStats_get_FragmentCommandBytes_mBD296E8D5A90D6BD30D850BDA7100C7DFE41A3F3_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___size0;
		TrafficStats_set_FragmentCommandBytes_mC2833B3F028419D19BB83358993D02A7D638A145_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = TrafficStats_get_FragmentCommandCount_mE731A5BD2EDA4F9CC4751ADCD3ED8319F3AF4D02_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStats_set_FragmentCommandCount_m43A7AFA2ED06F1CE0BE5F2C3F7EA1D95E8590334_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.String ExitGames.Client.Photon.TrafficStats::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TrafficStats_ToString_m493B8AF40ECFF4ECBF2AC91579B824DD225ECE62 (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF09647061E14A6AB82D0FE232AB0BC1838440C6D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		int32_t L_2;
		L_2 = TrafficStats_get_TotalPacketBytes_m867682D40D3F415706D7C3385BB7306A590F88C8(__this, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_1;
		int32_t L_6;
		L_6 = TrafficStats_get_TotalCommandBytes_m9FD02B5EF78357E3F1BED6A5CB72D51A50BD432C(__this, /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_5;
		int32_t L_10;
		L_10 = TrafficStats_get_TotalPacketCount_m608185872F34EA2B3A8FC72BC137F554D0C891EA_inline(__this, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_11);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_9;
		int32_t L_14;
		L_14 = TrafficStats_get_TotalCommandsInPackets_mF3FB9D78F73AA8CF2047A081E84A68DD449C0130_inline(__this, /*hidden argument*/NULL);
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		String_t* L_17;
		L_17 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteralF09647061E14A6AB82D0FE232AB0BC1838440C6D, L_13, /*hidden argument*/NULL);
		V_0 = L_17;
		goto IL_004c;
	}

IL_004c:
	{
		String_t* L_18 = V_0;
		return L_18;
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
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_OperationByteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_OperationByteCount_m7B2C20D8D7C277D4F77039F78D1956EF5963E3B7 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3COperationByteCountU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_OperationByteCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_OperationByteCount_m864ED7436CDB85D762DD77AE968642FA8B72A851 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3COperationByteCountU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_OperationCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_OperationCount_m61623EACDD968BDDEE2644723859743E9EEFCD43 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3COperationCountU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_OperationCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_OperationCount_m8C635294CA4A8BD9E6CF17483F7B22C5EF899475 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3COperationCountU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_ResultByteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_ResultByteCount_m2527CDECE3CC03F803121B2BBE72B418C4A01C17 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CResultByteCountU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_ResultByteCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_ResultByteCount_m5D5642D6479D6D0F01A6ADFD61C7945E580A3E74 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CResultByteCountU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_ResultCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_ResultCount_m99795E62ED93B4F3127B614D8B7102BAF9065456 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CResultCountU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_ResultCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_ResultCount_m4642BF78251131A5B3FAE090F307329A37CE469B (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CResultCountU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_EventByteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_EventByteCount_m7763AB2CEF3FB7D4A35546CA0EC89686D24D9C7A (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CEventByteCountU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_EventByteCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_EventByteCount_m9BC0673D942893D8364633AF0D74200C6E25AF8D (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CEventByteCountU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_EventCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_EventCount_mB9DBE07DB1415BA94CDE2E5F6302435B6E4AC365 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CEventCountU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_EventCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_EventCount_m3494775084CF4444B99359F393170B3D4324C4F1 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CEventCountU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestOpResponseCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestOpResponseCallback_m91AEC3E69AF80132674B96129DCEEA187B77CC2C (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestOpResponseCallbackU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestOpResponseCallback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestOpResponseCallback_m4FDD926A23F6AB9B8B8BC3E00D8FD229976BC966 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestOpResponseCallbackU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestOpResponseCallbackOpCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_mFFE8772E80AF7E4038025DDDF6C8822965AC3B74 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestOpResponseCallbackOpCode(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m33C3CD50E6C60E98372128E3D484C66965B6B893 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestEventCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestEventCallback_m34E28B192A4B171DFD898A04C5E00F04ED723B56 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestEventCallbackU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestEventCallback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestEventCallback_m18FA4AC4DB062A42B4288F235C0C85D7B4AB3FDC (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestEventCallbackU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestMessageCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestMessageCallback_m63D3F75C2DEE203AFFAE9A79097302AEB5149F1A (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestMessageCallbackU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestMessageCallback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestMessageCallback_mF6BC881F3943EF24403FB38484DDB6EE441E879B (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestMessageCallbackU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestRawMessageCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestRawMessageCallback_m9A933EED8E91F7A1A22E817A8FF018E3181CB1B4 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestRawMessageCallbackU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestRawMessageCallback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestRawMessageCallback_m860F94B6D10D574F1AF597FF9794B4C5748EE4D0 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestRawMessageCallbackU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestEventCallbackCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t TrafficStatsGameLevel_get_LongestEventCallbackCode_m16D24A9E9234048A41B04638BBE5D9533D95B554 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_U3CLongestEventCallbackCodeU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestEventCallbackCode(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestEventCallbackCode_mF50720C5AD01CC2BFFE259E67C9985E8DCF47D9D (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_U3CLongestEventCallbackCodeU3Ek__BackingField_13(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestDeltaBetweenDispatching()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m36EC17217EB7B8D72234AD1FF40093E8373CFEBD (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestDeltaBetweenDispatching(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_m3C1FB50D9A0E60490595CFC04F63E23FBEFADDC9 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestDeltaBetweenSending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m0DAE8C894F2D78AEC98F47039C664DDD0B838C0F (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestDeltaBetweenSendingU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestDeltaBetweenSending(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m9B3D50017E4056D6F2517B4358E189086C426387 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestDeltaBetweenSendingU3Ek__BackingField_15(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_DispatchIncomingCommandsCalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m4A81DD26276510308CE3A5F0DF1A71F50D5089FE (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_DispatchIncomingCommandsCalls(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_mA71298D91EFBB72603A4851C5E4FA422C571F1D2 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_SendOutgoingCommandsCalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m34CACEB62C0B8521ED0E3F7C2462397CF2844C97 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CSendOutgoingCommandsCallsU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_SendOutgoingCommandsCalls(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_mB0E01F167C7AB9BB57F04B8F84E43CD9BE45A54C (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CSendOutgoingCommandsCallsU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_TotalMessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_TotalMessageCount_mB27FF9CEC8B4A37F077F120118ED005BA8F67D2F (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStatsGameLevel_get_OperationCount_m61623EACDD968BDDEE2644723859743E9EEFCD43_inline(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = TrafficStatsGameLevel_get_ResultCount_m99795E62ED93B4F3127B614D8B7102BAF9065456_inline(__this, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = TrafficStatsGameLevel_get_EventCount_mB9DBE07DB1415BA94CDE2E5F6302435B6E4AC365_inline(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), (int32_t)L_2));
		goto IL_0018;
	}

IL_0018:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_TotalIncomingMessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_TotalIncomingMessageCount_m581D8CCBF0169BB31CEF1EBC7E1444855F22D91C (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStatsGameLevel_get_ResultCount_m99795E62ED93B4F3127B614D8B7102BAF9065456_inline(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = TrafficStatsGameLevel_get_EventCount_mB9DBE07DB1415BA94CDE2E5F6302435B6E4AC365_inline(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_TotalOutgoingMessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_TotalOutgoingMessageCount_mE4E8668F48217BE0D8358EDE7DBB8189E28C2605 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStatsGameLevel_get_OperationCount_m61623EACDD968BDDEE2644723859743E9EEFCD43_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::CountOperation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_CountOperation_mD54E8BD76B50DE47B7E6CADDDD8C23D81CD13B05 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___operationBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStatsGameLevel_get_OperationByteCount_m7B2C20D8D7C277D4F77039F78D1956EF5963E3B7_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___operationBytes0;
		TrafficStatsGameLevel_set_OperationByteCount_m864ED7436CDB85D762DD77AE968642FA8B72A851_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = TrafficStatsGameLevel_get_OperationCount_m61623EACDD968BDDEE2644723859743E9EEFCD43_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStatsGameLevel_set_OperationCount_m8C635294CA4A8BD9E6CF17483F7B22C5EF899475_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::CountResult(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_CountResult_m132B4DDBAC58D666F70EE362F021B0E25B2FC749 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___resultBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStatsGameLevel_get_ResultByteCount_m2527CDECE3CC03F803121B2BBE72B418C4A01C17_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___resultBytes0;
		TrafficStatsGameLevel_set_ResultByteCount_m5D5642D6479D6D0F01A6ADFD61C7945E580A3E74_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = TrafficStatsGameLevel_get_ResultCount_m99795E62ED93B4F3127B614D8B7102BAF9065456_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStatsGameLevel_set_ResultCount_m4642BF78251131A5B3FAE090F307329A37CE469B_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::CountEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_CountEvent_m0ADF8E58EC422944B6EE6FE36B93162075F56827 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___eventBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = TrafficStatsGameLevel_get_EventByteCount_m7763AB2CEF3FB7D4A35546CA0EC89686D24D9C7A_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___eventBytes0;
		TrafficStatsGameLevel_set_EventByteCount_m9BC0673D942893D8364633AF0D74200C6E25AF8D_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = TrafficStatsGameLevel_get_EventCount_mB9DBE07DB1415BA94CDE2E5F6302435B6E4AC365_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStatsGameLevel_set_EventCount_m3494775084CF4444B99359F393170B3D4324C4F1_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::TimeForResponseCallback(System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_TimeForResponseCallback_m3D48D5F05CDD490C6533FA95A08E5B474E4F53E7 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, uint8_t ___code0, int32_t ___time1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___time1;
		int32_t L_1;
		L_1 = TrafficStatsGameLevel_get_LongestOpResponseCallback_m91AEC3E69AF80132674B96129DCEEA187B77CC2C_inline(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___time1;
		TrafficStatsGameLevel_set_LongestOpResponseCallback_m4FDD926A23F6AB9B8B8BC3E00D8FD229976BC966_inline(__this, L_3, /*hidden argument*/NULL);
		uint8_t L_4 = ___code0;
		TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m33C3CD50E6C60E98372128E3D484C66965B6B893_inline(__this, L_4, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::TimeForEventCallback(System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_TimeForEventCallback_m9F2EF1B83CE192D8C2DB043E9C041716C4145F43 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, uint8_t ___code0, int32_t ___time1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___time1;
		int32_t L_1;
		L_1 = TrafficStatsGameLevel_get_LongestEventCallback_m34E28B192A4B171DFD898A04C5E00F04ED723B56_inline(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___time1;
		TrafficStatsGameLevel_set_LongestEventCallback_m18FA4AC4DB062A42B4288F235C0C85D7B4AB3FDC_inline(__this, L_3, /*hidden argument*/NULL);
		uint8_t L_4 = ___code0;
		TrafficStatsGameLevel_set_LongestEventCallbackCode_mF50720C5AD01CC2BFFE259E67C9985E8DCF47D9D_inline(__this, L_4, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::TimeForMessageCallback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_TimeForMessageCallback_m140D3D461EA4A36A231F09BA96DDBF182A1E33A8 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___time0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___time0;
		int32_t L_1;
		L_1 = TrafficStatsGameLevel_get_LongestMessageCallback_m63D3F75C2DEE203AFFAE9A79097302AEB5149F1A_inline(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___time0;
		TrafficStatsGameLevel_set_LongestMessageCallback_mF6BC881F3943EF24403FB38484DDB6EE441E879B_inline(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::TimeForRawMessageCallback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_TimeForRawMessageCallback_m93A14EBCA77BED07D413B65413D409A0B7C25635 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___time0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___time0;
		int32_t L_1;
		L_1 = TrafficStatsGameLevel_get_LongestRawMessageCallback_m9A933EED8E91F7A1A22E817A8FF018E3181CB1B4_inline(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___time0;
		TrafficStatsGameLevel_set_LongestRawMessageCallback_m860F94B6D10D574F1AF597FF9794B4C5748EE4D0_inline(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::DispatchIncomingCommandsCalled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_DispatchIncomingCommandsCalled_m82F5F38015DEBF0A6A5DA504BCDB1EA188D6B661 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_timeOfLastDispatchCall_0();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = SupportClass_GetTickCount_mDD38F1B27059098AE7B5CC7B2072AAFC43D2D145(/*hidden argument*/NULL);
		int32_t L_3 = __this->get_timeOfLastDispatchCall_0();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3));
		int32_t L_4 = V_1;
		int32_t L_5;
		L_5 = TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m36EC17217EB7B8D72234AD1FF40093E8373CFEBD_inline(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = V_1;
		TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_m3C1FB50D9A0E60490595CFC04F63E23FBEFADDC9_inline(__this, L_7, /*hidden argument*/NULL);
	}

IL_0033:
	{
	}

IL_0034:
	{
		int32_t L_8;
		L_8 = TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m4A81DD26276510308CE3A5F0DF1A71F50D5089FE_inline(__this, /*hidden argument*/NULL);
		V_3 = L_8;
		int32_t L_9 = V_3;
		TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_mA71298D91EFBB72603A4851C5E4FA422C571F1D2_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = SupportClass_GetTickCount_mDD38F1B27059098AE7B5CC7B2072AAFC43D2D145(/*hidden argument*/NULL);
		__this->set_timeOfLastDispatchCall_0(L_10);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::SendOutgoingCommandsCalled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_SendOutgoingCommandsCalled_m0A8FCC6127139CD7441E7142C83A66F752CA4F53 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_timeOfLastSendCall_1();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = SupportClass_GetTickCount_mDD38F1B27059098AE7B5CC7B2072AAFC43D2D145(/*hidden argument*/NULL);
		int32_t L_3 = __this->get_timeOfLastSendCall_1();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3));
		int32_t L_4 = V_1;
		int32_t L_5;
		L_5 = TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m0DAE8C894F2D78AEC98F47039C664DDD0B838C0F_inline(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = V_1;
		TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m9B3D50017E4056D6F2517B4358E189086C426387_inline(__this, L_7, /*hidden argument*/NULL);
	}

IL_0033:
	{
	}

IL_0034:
	{
		int32_t L_8;
		L_8 = TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m34CACEB62C0B8521ED0E3F7C2462397CF2844C97_inline(__this, /*hidden argument*/NULL);
		V_3 = L_8;
		int32_t L_9 = V_3;
		TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_mB0E01F167C7AB9BB57F04B8F84E43CD9BE45A54C_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tD932090A80B499007165429CE65D20F934AE52E8_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = SupportClass_GetTickCount_mDD38F1B27059098AE7B5CC7B2072AAFC43D2D145(/*hidden argument*/NULL);
		__this->set_timeOfLastSendCall_1(L_10);
		return;
	}
}
// System.String ExitGames.Client.Photon.TrafficStatsGameLevel::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TrafficStatsGameLevel_ToString_mF820A831C9C1E751044257BB9B494BE76C37D437 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral908BEA1D5D8065EACBEE7F2EC16BAE6A218408FB);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0;
		L_0 = TrafficStatsGameLevel_get_OperationByteCount_m7B2C20D8D7C277D4F77039F78D1956EF5963E3B7_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3;
		L_3 = TrafficStatsGameLevel_get_ResultByteCount_m2527CDECE3CC03F803121B2BBE72B418C4A01C17_inline(__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6;
		L_6 = TrafficStatsGameLevel_get_EventByteCount_m7763AB2CEF3FB7D4A35546CA0EC89686D24D9C7A_inline(__this, /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral908BEA1D5D8065EACBEE7F2EC16BAE6A218408FB, L_2, L_5, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_002f;
	}

IL_002f:
	{
		String_t* L_10 = V_0;
		return L_10;
	}
}
// System.String ExitGames.Client.Photon.TrafficStatsGameLevel::ToStringVitalStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TrafficStatsGameLevel_ToStringVitalStats_mFC6406D8058AF16FAEDE8EBA46B7532445E57A47 (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral842A27E71750F8CF75D57999C7CBBC93D24F416D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		int32_t L_2;
		L_2 = TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m0DAE8C894F2D78AEC98F47039C664DDD0B838C0F_inline(__this, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_1;
		int32_t L_6;
		L_6 = TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m36EC17217EB7B8D72234AD1FF40093E8373CFEBD_inline(__this, /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_5;
		int32_t L_10;
		L_10 = TrafficStatsGameLevel_get_LongestEventCallback_m34E28B192A4B171DFD898A04C5E00F04ED723B56_inline(__this, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_11);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_9;
		uint8_t L_14;
		L_14 = TrafficStatsGameLevel_get_LongestEventCallbackCode_m16D24A9E9234048A41B04638BBE5D9533D95B554_inline(__this, /*hidden argument*/NULL);
		uint8_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_15);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_13;
		int32_t L_18;
		L_18 = TrafficStatsGameLevel_get_LongestOpResponseCallback_m91AEC3E69AF80132674B96129DCEEA187B77CC2C_inline(__this, /*hidden argument*/NULL);
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_19);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_20);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = L_17;
		uint8_t L_22;
		L_22 = TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_mFFE8772E80AF7E4038025DDDF6C8822965AC3B74_inline(__this, /*hidden argument*/NULL);
		uint8_t L_23 = L_22;
		RuntimeObject * L_24 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_23);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_24);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = L_21;
		int32_t L_26;
		L_26 = TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m34CACEB62C0B8521ED0E3F7C2462397CF2844C97_inline(__this, /*hidden argument*/NULL);
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_27);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_28);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_29 = L_25;
		int32_t L_30;
		L_30 = TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m4A81DD26276510308CE3A5F0DF1A71F50D5089FE_inline(__this, /*hidden argument*/NULL);
		int32_t L_31 = L_30;
		RuntimeObject * L_32 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_31);
		ArrayElementTypeCheck (L_29, L_32);
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_32);
		String_t* L_33;
		L_33 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral842A27E71750F8CF75D57999C7CBBC93D24F416D, L_29, /*hidden argument*/NULL);
		V_0 = L_33;
		goto IL_0084;
	}

IL_0084:
	{
		String_t* L_34 = V_0;
		return L_34;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel__ctor_mC8180FCAC47F1D7519AD2A6E8420001FC25F897B (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
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
// System.Void ExitGames.Client.Photon.Version::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__cctor_m3F841706F7C12083A64522A2C3C6D3A252D82A2E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t3609B4DBF30D23669B25407E61F7E8BBF7C3206F____9438AAAAC3906291F3DF6BE5FE89F45BBFD3B269_3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_t31FCFBC69DBE1651E4680B850872F26C26A91BAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3609B4DBF30D23669B25407E61F7E8BBF7C3206F____9438AAAAC3906291F3DF6BE5FE89F45BBFD3B269_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((Version_t31FCFBC69DBE1651E4680B850872F26C26A91BAC_StaticFields*)il2cpp_codegen_static_fields_for(Version_t31FCFBC69DBE1651E4680B850872F26C26A91BAC_il2cpp_TypeInfo_var))->set_clientVersion_0(L_1);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LogCallbackDelegate_t97F0F61712F0ED77B58D43AF35C1E3B721BB93E9 (LogCallbackDelegate_t97F0F61712F0ED77B58D43AF35C1E3B721BB93E9 * __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___msg2' to native representation
	char* ____msg2_marshaled = NULL;
	____msg2_marshaled = il2cpp_codegen_marshal_string(___msg2);

	// Native function invocation
	il2cppPInvokeFunc(___userData0, ___level1, ____msg2_marshaled);

	// Marshaling cleanup of parameter '___msg2' native representation
	il2cpp_codegen_marshal_free(____msg2_marshaled);
	____msg2_marshaled = NULL;

}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate__ctor_m6D403FBB78BE2DBFB541F602A39DC8C0499C0D01 (LogCallbackDelegate_t97F0F61712F0ED77B58D43AF35C1E3B721BB93E9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate::Invoke(System.IntPtr,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate_Invoke_mF1975F14545BABCA01DB6F0CC35B04448F4BDF6E (LogCallbackDelegate_t97F0F61712F0ED77B58D43AF35C1E3B721BB93E9 * __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___userData0, ___level1, ___msg2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___userData0, ___level1, ___msg2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___userData0, ___level1, ___msg2);
					else
						GenericVirtActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___userData0, ___level1, ___msg2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___userData0, ___level1, ___msg2);
					else
						VirtActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___userData0, ___level1, ___msg2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___userData0, ___level1, ___msg2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate::BeginInvoke(System.IntPtr,System.Int32,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogCallbackDelegate_BeginInvoke_m78BEA70DBFBEB45EB3E5AF865B8C2129F9306D05 (LogCallbackDelegate_t97F0F61712F0ED77B58D43AF35C1E3B721BB93E9 * __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___userData0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___level1);
	__d_args[2] = ___msg2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate_EndInvoke_m751D2FADB1D33B0430A95D8A59860E23859E0B9F (LogCallbackDelegate_t97F0F61712F0ED77B58D43AF35C1E3B721BB93E9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
// System.Void ExitGames.Client.Photon.IPhotonSocket/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2D9A7F78B416D066D41CCA56F1D6689C5BC21093 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2D8D1E94B69E582A8C0C13685C2552A5222E2716_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2D8D1E94B69E582A8C0C13685C2552A5222E2716 * L_0 = (U3CU3Ec_t2D8D1E94B69E582A8C0C13685C2552A5222E2716 *)il2cpp_codegen_object_new(U3CU3Ec_t2D8D1E94B69E582A8C0C13685C2552A5222E2716_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m57F659051F3A9147D73FDF8F878ADA7302895B3E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2D8D1E94B69E582A8C0C13685C2552A5222E2716_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2D8D1E94B69E582A8C0C13685C2552A5222E2716_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.IPhotonSocket/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m57F659051F3A9147D73FDF8F878ADA7302895B3E (U3CU3Ec_t2D8D1E94B69E582A8C0C13685C2552A5222E2716 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String ExitGames.Client.Photon.IPhotonSocket/<>c::<GetIpAddresses>b__56_0(System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetIpAddressesU3Eb__56_0_mF6683F1111AFB6F3650504960CFDCCBF8C6CBAE6 (U3CU3Ec_t2D8D1E94B69E582A8C0C13685C2552A5222E2716 * __this, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_2 = ___x0;
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_1;
		ArrayElementTypeCheck (L_4, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_4;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_6 = ___x0;
		int32_t L_7;
		L_7 = IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline(L_6, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33_il2cpp_TypeInfo_var, &L_8);
		ArrayElementTypeCheck (L_5, L_9);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_5;
		ArrayElementTypeCheck (L_10, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_11;
		L_11 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_10, /*hidden argument*/NULL);
		return L_11;
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
// System.Void ExitGames.Client.Photon.PeerBase/<>c__DisplayClass108_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass108_0__ctor_m2EC2FD88B1D3EEF315FA5F2CB0DD99443EEA76ED (U3CU3Ec__DisplayClass108_0_t64F864F04C05F82F58AE9D771DC44FA10FAB5E68 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.PeerBase/<>c__DisplayClass108_0::<EnqueueDebugReturn>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass108_0_U3CEnqueueDebugReturnU3Eb__0_mD4C8769B6D28A7D4FFE628F19A32E0F56419A76C (U3CU3Ec__DisplayClass108_0_t64F864F04C05F82F58AE9D771DC44FA10FAB5E68 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * L_0 = __this->get_U3CU3E4__this_0();
		RuntimeObject* L_1;
		L_1 = PeerBase_get_Listener_m383691FE451B45BDBC3E7280D12F16A7FCCF0509(L_0, /*hidden argument*/NULL);
		uint8_t L_2 = __this->get_level_1();
		String_t* L_3 = __this->get_debugReturn_2();
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var, L_1, L_2, L_3);
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
// System.Void ExitGames.Client.Photon.PeerBase/<>c__DisplayClass109_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass109_0__ctor_m94CA52E310EC066D223EAD20283CF9C520AA5BC0 (U3CU3Ec__DisplayClass109_0_t357C7AE2AB9EF03C4423B72CC4BEDEADE6DDF769 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.PeerBase/<>c__DisplayClass109_0::<EnqueueStatusCallback>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass109_0_U3CEnqueueStatusCallbackU3Eb__0_m3F82CBE91D249225B104BD31BF214A009665466C (U3CU3Ec__DisplayClass109_0_t357C7AE2AB9EF03C4423B72CC4BEDEADE6DDF769 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * L_0 = __this->get_U3CU3E4__this_0();
		RuntimeObject* L_1;
		L_1 = PeerBase_get_Listener_m383691FE451B45BDBC3E7280D12F16A7FCCF0509(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_statusValue_1();
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::OnStatusChanged(ExitGames.Client.Photon.StatusCode) */, IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80_il2cpp_TypeInfo_var, L_1, L_2);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MyAction_tC825FCD41C6AA4314F2D66D0FF11992F6CBAC017 (MyAction_tC825FCD41C6AA4314F2D66D0FF11992F6CBAC017 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void ExitGames.Client.Photon.PeerBase/MyAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyAction__ctor_m4ECF3F683EBFF98616377DB6F31A5A354C1A603D (MyAction_tC825FCD41C6AA4314F2D66D0FF11992F6CBAC017 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ExitGames.Client.Photon.PeerBase/MyAction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyAction_Invoke_m919C8F75ACF20A06CFE09588173962C600052C34 (MyAction_tC825FCD41C6AA4314F2D66D0FF11992F6CBAC017 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult ExitGames.Client.Photon.PeerBase/MyAction::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MyAction_BeginInvoke_m678E6EE1F8B6ED592DC33A3D4090A528C0E81FF9 (MyAction_tC825FCD41C6AA4314F2D66D0FF11992F6CBAC017 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void ExitGames.Client.Photon.PeerBase/MyAction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyAction_EndInvoke_m5B1F9AFB3D8EAEB853E9E075C1E6CD051877305C (MyAction_tC825FCD41C6AA4314F2D66D0FF11992F6CBAC017 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
// System.Void ExitGames.Client.Photon.SupportClass/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m488469BC883352BA145D4875F5AC6B2E5ADE3639 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE76D54910C712C6B8061D714E4BEF54AB4280F63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE76D54910C712C6B8061D714E4BEF54AB4280F63 * L_0 = (U3CU3Ec_tE76D54910C712C6B8061D714E4BEF54AB4280F63 *)il2cpp_codegen_object_new(U3CU3Ec_tE76D54910C712C6B8061D714E4BEF54AB4280F63_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m2EB1BFF2E31E7EF24A082E59DF62231823B3CEDB(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tE76D54910C712C6B8061D714E4BEF54AB4280F63_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE76D54910C712C6B8061D714E4BEF54AB4280F63_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2EB1BFF2E31E7EF24A082E59DF62231823B3CEDB (U3CU3Ec_tE76D54910C712C6B8061D714E4BEF54AB4280F63 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.SupportClass/<>c::<.cctor>b__20_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_cctorU3Eb__20_0_m982F5A6F95B91823E6902368221AA21A3C64C55E (U3CU3Ec_tE76D54910C712C6B8061D714E4BEF54AB4280F63 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = Environment_get_TickCount_mBA4279B1C0BC197BF2121166E7C1F6A46D2B5D4E(/*hidden argument*/NULL);
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
// System.Void ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mE9026AAB9A0969A773F0E43C836EBBF4BA574B05 (U3CU3Ec__DisplayClass6_0_t525AE973CC2659D877AEC9706B1BC60424D154A8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0::<StartBackgroundCalls>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CStartBackgroundCallsU3Eb__0_mE22D3544AD11BDC9AA7279CD28FFEDF725AFBD46 (U3CU3Ec__DisplayClass6_0_t525AE973CC2659D877AEC9706B1BC60424D154A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0012;
		}

IL_0004:
		{
			int32_t L_0 = __this->get_millisecondsInterval_0();
			Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC(L_0, /*hidden argument*/NULL);
		}

IL_0012:
		{
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_1 = __this->get_myThread_1();
			bool L_2;
			L_2 = Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4(L_1, /*hidden argument*/Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var);
			V_0 = L_2;
			bool L_3 = V_0;
			if (L_3)
			{
				goto IL_0004;
			}
		}

IL_0021:
		{
			goto IL_0029;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0024;
		}
		throw e;
	}

CATCH_0024:
	{ // begin catch(System.Threading.ThreadAbortException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0029;
	} // end catch (depth: 1)

IL_0029:
	{
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
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_IntegerMillisecondsDelegate_tFA09AD82FF54A8E784DF5B0AE0B27FDE48D70A9E (IntegerMillisecondsDelegate_tFA09AD82FF54A8E784DF5B0AE0B27FDE48D70A9E * __this, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegerMillisecondsDelegate__ctor_mF3E421A854961B378BBECDD5A1F32574040582B1 (IntegerMillisecondsDelegate_tFA09AD82FF54A8E784DF5B0AE0B27FDE48D70A9E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntegerMillisecondsDelegate_Invoke_m44C51909DB47602A5973F532806E64614AA4AF07 (IntegerMillisecondsDelegate_tFA09AD82FF54A8E784DF5B0AE0B27FDE48D70A9E * __this, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef int32_t (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< int32_t >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< int32_t >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IntegerMillisecondsDelegate_BeginInvoke_mEA2B5AEF3B409B66A7F05FF0F29769CF0C09F510 (IntegerMillisecondsDelegate_tFA09AD82FF54A8E784DF5B0AE0B27FDE48D70A9E * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Int32 ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntegerMillisecondsDelegate_EndInvoke_m5D4D0ABC4012DA4464F98503D3BEDD5DFC0DE715 (IntegerMillisecondsDelegate_tFA09AD82FF54A8E784DF5B0AE0B27FDE48D70A9E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 ExitGames.Client.Photon.SupportClass/ThreadSafeRandom::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ThreadSafeRandom_Next_m6C2EB87F55CFE8EFB0CAE7F77FCE31F507ED5CE1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadSafeRandom_t3541F287E963FC1137741E2776EB5E1CCA878164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ThreadSafeRandom_t3541F287E963FC1137741E2776EB5E1CCA878164_il2cpp_TypeInfo_var);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = ((ThreadSafeRandom_t3541F287E963FC1137741E2776EB5E1CCA878164_StaticFields*)il2cpp_codegen_static_fields_for(ThreadSafeRandom_t3541F287E963FC1137741E2776EB5E1CCA878164_il2cpp_TypeInfo_var))->get__r_0();
		V_0 = L_0;
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(ThreadSafeRandom_t3541F287E963FC1137741E2776EB5E1CCA878164_il2cpp_TypeInfo_var);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_2 = ((ThreadSafeRandom_t3541F287E963FC1137741E2776EB5E1CCA878164_StaticFields*)il2cpp_codegen_static_fields_for(ThreadSafeRandom_t3541F287E963FC1137741E2776EB5E1CCA878164_il2cpp_TypeInfo_var))->get__r_0();
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Random::Next() */, L_2);
		V_1 = L_3;
		IL2CPP_LEAVE(0x24, FINALLY_001c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001c;
	}

FINALLY_001c:
	{ // begin finally (depth: 1)
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_4 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(28)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(28)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x24, IL_0024)
	}

IL_0024:
	{
		int32_t L_5 = V_1;
		return L_5;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass/ThreadSafeRandom::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadSafeRandom__cctor_mFEF1C6502EBF2480B3B4DBBC0F34A4EBAB58434D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadSafeRandom_t3541F287E963FC1137741E2776EB5E1CCA878164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_0, /*hidden argument*/NULL);
		((ThreadSafeRandom_t3541F287E963FC1137741E2776EB5E1CCA878164_StaticFields*)il2cpp_codegen_static_fields_for(ThreadSafeRandom_t3541F287E963FC1137741E2776EB5E1CCA878164_il2cpp_TypeInfo_var))->set__r_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IPhotonSocket_get_ServerAddress_mC37D2749260619C6182508E30BFF8D267D4C06C5_inline (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CServerAddressU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_is_connected_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Socket_get_IsBound_m67D559154A1B175E8B384DF0DBCC98EB0EA53830_inline (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_is_bound_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IPhotonSocket_get_AddressResolvedAsIpv6_m8B9FA46DEC433CF686621624F90CDA7BF94B10EE_inline (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CAddressResolvedAsIpv6U3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline (IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Family_10();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Socket_get_AddressFamily_m390B53FAAF0DFF8E8BE844F83AFB06D9E53D891B_inline (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_addressFamily_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IPhotonSocket_set_AddressResolvedAsIpv6_mC0250298B4648ED31FA30D7FCA8309A20DC6B2E8_inline (IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CAddressResolvedAsIpv6U3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IPhotonSocket_set_ServerIpAddress_m700599277934976851AB99868552BFB7DFFD356B_inline (String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		((IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF_StaticFields*)il2cpp_codegen_static_fields_for(IPhotonSocket_tEA1C664A19FA03727F61808034F3A062A2FAEBCF_il2cpp_TypeInfo_var))->set_U3CServerIpAddressU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PeerBase_set_ServerAddress_mBCE816CF33B01452174111254F1B86B1EA04BC69_inline (PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CServerAddressU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PeerBase_set_ProxyServerAddress_mA0B000E3D8B55AF5CDAF626BBE6DABEE52EB593F_inline (PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CProxyServerAddressU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PeerBase_get_ServerAddress_m09A47C70720235340C390D98A2277B8BF94CB288_inline (PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CServerAddressU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalPacketCount_m608185872F34EA2B3A8FC72BC137F554D0C891EA_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTotalPacketCountU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_TotalPacketCount_m2D07017330D78709B0F13D1079F01DCDE46C1788_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTotalPacketCountU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalCommandsInPackets_mF3FB9D78F73AA8CF2047A081E84A68DD449C0130_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTotalCommandsInPacketsU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_TotalCommandsInPackets_m2A4B5B4235859BE6DD2237BF0D3463846630A32D_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTotalCommandsInPacketsU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_PackageHeaderSize_m329D3967A6F6B46754851CC379837AD2C8786248_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CPackageHeaderSizeU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ReliableCommandBytes_m04718249CD1C4442B781C141DA2FD2C8125EE5D2_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReliableCommandBytesU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_UnreliableCommandBytes_m8506C7BE4F04E675C0089A3AC023E8BD28ABC76B_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CUnreliableCommandBytesU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_FragmentCommandBytes_mBD296E8D5A90D6BD30D850BDA7100C7DFE41A3F3_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CFragmentCommandBytesU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ControlCommandBytes_mEC0F5A3F691E0E049D235CE3B4877F5A0C74C22F_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CControlCommandBytesU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_PackageHeaderSize_mDE76ACAB46B4639FDE0EB7EF773DDFBD6609E449_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CPackageHeaderSizeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ControlCommandBytes_mEA50B961FA3BEFF89A78DB1AE17E79E1BC6B11D2_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CControlCommandBytesU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ControlCommandCount_m026E794FF80AA93016416590955E269D15B6D249_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CControlCommandCountU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ControlCommandCount_mB7F382CF2607264D46D713674601632599717B15_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CControlCommandCountU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ReliableCommandBytes_mFBBE10414D00CE7D29F3B9823848330EEB0FA64B_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CReliableCommandBytesU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ReliableCommandCount_mD2657BD0EDFE74A39AA88CAC60975F4C2BD515C0_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReliableCommandCountU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ReliableCommandCount_m1F9ECE9135A8CECC1DC28C87462139A6330819F4_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CReliableCommandCountU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_UnreliableCommandBytes_m2BB8A3F13E60BAD0AA3A0C7EAF9B9EBF719FE753_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CUnreliableCommandBytesU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_UnreliableCommandCount_m91FB9C2F30A054D67F477755601FD1D82A23375F_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CUnreliableCommandCountU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_UnreliableCommandCount_m49AEEFE91F07241FDB30484C3971C264FB04B3A1_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CUnreliableCommandCountU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_FragmentCommandBytes_mC2833B3F028419D19BB83358993D02A7D638A145_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CFragmentCommandBytesU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_FragmentCommandCount_mE731A5BD2EDA4F9CC4751ADCD3ED8319F3AF4D02_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CFragmentCommandCountU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_FragmentCommandCount_m43A7AFA2ED06F1CE0BE5F2C3F7EA1D95E8590334_inline (TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CFragmentCommandCountU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_OperationCount_m61623EACDD968BDDEE2644723859743E9EEFCD43_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3COperationCountU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_ResultCount_m99795E62ED93B4F3127B614D8B7102BAF9065456_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CResultCountU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_EventCount_mB9DBE07DB1415BA94CDE2E5F6302435B6E4AC365_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CEventCountU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_OperationByteCount_m7B2C20D8D7C277D4F77039F78D1956EF5963E3B7_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3COperationByteCountU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_OperationByteCount_m864ED7436CDB85D762DD77AE968642FA8B72A851_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3COperationByteCountU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_OperationCount_m8C635294CA4A8BD9E6CF17483F7B22C5EF899475_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3COperationCountU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_ResultByteCount_m2527CDECE3CC03F803121B2BBE72B418C4A01C17_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CResultByteCountU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_ResultByteCount_m5D5642D6479D6D0F01A6ADFD61C7945E580A3E74_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CResultByteCountU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_ResultCount_m4642BF78251131A5B3FAE090F307329A37CE469B_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CResultCountU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_EventByteCount_m7763AB2CEF3FB7D4A35546CA0EC89686D24D9C7A_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CEventByteCountU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_EventByteCount_m9BC0673D942893D8364633AF0D74200C6E25AF8D_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CEventByteCountU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_EventCount_m3494775084CF4444B99359F393170B3D4324C4F1_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CEventCountU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestOpResponseCallback_m91AEC3E69AF80132674B96129DCEEA187B77CC2C_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestOpResponseCallbackU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestOpResponseCallback_m4FDD926A23F6AB9B8B8BC3E00D8FD229976BC966_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestOpResponseCallbackU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m33C3CD50E6C60E98372128E3D484C66965B6B893_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestEventCallback_m34E28B192A4B171DFD898A04C5E00F04ED723B56_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestEventCallbackU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestEventCallback_m18FA4AC4DB062A42B4288F235C0C85D7B4AB3FDC_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestEventCallbackU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestEventCallbackCode_mF50720C5AD01CC2BFFE259E67C9985E8DCF47D9D_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_U3CLongestEventCallbackCodeU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestMessageCallback_m63D3F75C2DEE203AFFAE9A79097302AEB5149F1A_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestMessageCallbackU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestMessageCallback_mF6BC881F3943EF24403FB38484DDB6EE441E879B_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestMessageCallbackU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestRawMessageCallback_m9A933EED8E91F7A1A22E817A8FF018E3181CB1B4_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestRawMessageCallbackU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestRawMessageCallback_m860F94B6D10D574F1AF597FF9794B4C5748EE4D0_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestRawMessageCallbackU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m36EC17217EB7B8D72234AD1FF40093E8373CFEBD_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_m3C1FB50D9A0E60490595CFC04F63E23FBEFADDC9_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m4A81DD26276510308CE3A5F0DF1A71F50D5089FE_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_mA71298D91EFBB72603A4851C5E4FA422C571F1D2_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m0DAE8C894F2D78AEC98F47039C664DDD0B838C0F_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestDeltaBetweenSendingU3Ek__BackingField_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m9B3D50017E4056D6F2517B4358E189086C426387_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestDeltaBetweenSendingU3Ek__BackingField_15(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m34CACEB62C0B8521ED0E3F7C2462397CF2844C97_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CSendOutgoingCommandsCallsU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_mB0E01F167C7AB9BB57F04B8F84E43CD9BE45A54C_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CSendOutgoingCommandsCallsU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t TrafficStatsGameLevel_get_LongestEventCallbackCode_m16D24A9E9234048A41B04638BBE5D9533D95B554_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_U3CLongestEventCallbackCodeU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_mFFE8772E80AF7E4038025DDDF6C8822965AC3B74_inline (TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
