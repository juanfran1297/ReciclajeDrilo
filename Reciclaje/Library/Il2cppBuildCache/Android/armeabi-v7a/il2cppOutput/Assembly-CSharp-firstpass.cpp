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
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IO.DirectoryInfo
struct DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD;
// System.Exception
struct Exception_t;
// System.IO.FileNotFoundException
struct FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// NativeGalleryNamespace.NGCallbackHelper
struct NGCallbackHelper_t57FF2520F22AEBEC0B88147EA281589A62FF2E62;
// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid
struct NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05;
// NativeGalleryNamespace.NGPermissionCallbackAndroid
struct NGPermissionCallbackAndroid_t2F17C0D4C562F317A9B9E2E804C1C8C4C81CDF4A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t973443D9D780B511D6F2345A5401ED8F24480CCC;
// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t6FB9D345926E49F46086920125DE0BE3F271F4F5;
// NativeGallery/MediaPickCallback
struct MediaPickCallback_t9271CE7DC6219D21E74BAC60E5A517A91E2BF4D7;
// NativeGallery/MediaPickMultipleCallback
struct MediaPickMultipleCallback_t48F09C9BE0D421F02BD9B8D9D5B455382F94B952;
// NativeGallery/MediaSaveCallback
struct MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NGPermissionCallbackAndroid_t2F17C0D4C562F317A9B9E2E804C1C8C4C81CDF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t973443D9D780B511D6F2345A5401ED8F24480CCC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t6FB9D345926E49F46086920125DE0BE3F271F4F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0443845674FDE6986E4ECC72A8C096004DF51FC6;
IL2CPP_EXTERN_C String_t* _stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D;
IL2CPP_EXTERN_C String_t* _stringLiteral1256BD059A8D156C0578EF505C83E5862F0EFCD2;
IL2CPP_EXTERN_C String_t* _stringLiteral1323FA5608C80AC5A0D5F2B0116C96A1B9AFD381;
IL2CPP_EXTERN_C String_t* _stringLiteral15332598528DB5F9A0B9473BE7DCE0BB1F8DCAA7;
IL2CPP_EXTERN_C String_t* _stringLiteral1797A6EC252879FB0D0CD0D8E0F03D8E0BBA57F2;
IL2CPP_EXTERN_C String_t* _stringLiteral18B82B6B7DC4FE1988BA61A3784D1768F6C925DF;
IL2CPP_EXTERN_C String_t* _stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7;
IL2CPP_EXTERN_C String_t* _stringLiteral23A7F9B10A9B248A502580BB07C34BEC789A2F26;
IL2CPP_EXTERN_C String_t* _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A;
IL2CPP_EXTERN_C String_t* _stringLiteral30F7CAA3903ABC311FB9B0881B8937BE76A5526D;
IL2CPP_EXTERN_C String_t* _stringLiteral30F8B1D027E92AF30A25606539C4A0E635BF0BBB;
IL2CPP_EXTERN_C String_t* _stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC;
IL2CPP_EXTERN_C String_t* _stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9;
IL2CPP_EXTERN_C String_t* _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral519276B36C92AA64006C0D21451C2C34FE5C1148;
IL2CPP_EXTERN_C String_t* _stringLiteral660F6D5965E09393894520A3BBDDAE9F5DEF81D2;
IL2CPP_EXTERN_C String_t* _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
IL2CPP_EXTERN_C String_t* _stringLiteral79107FD6C984A88C27C9EA8214F1DDC00A8F6C36;
IL2CPP_EXTERN_C String_t* _stringLiteral7BB4B5568C63748C896DED09B403F2FC4F274E91;
IL2CPP_EXTERN_C String_t* _stringLiteral7F7876094B3FA10965A88A7D08B74EA3DC22CAE9;
IL2CPP_EXTERN_C String_t* _stringLiteral8280B83AC948E7BC53467CEFDF2AF27F4B2209E5;
IL2CPP_EXTERN_C String_t* _stringLiteral8A4D2503591255173AC6769BB8A784B9CC5B5BC6;
IL2CPP_EXTERN_C String_t* _stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C;
IL2CPP_EXTERN_C String_t* _stringLiteral98C4991DBD0370C554791D1BED854533606B6973;
IL2CPP_EXTERN_C String_t* _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
IL2CPP_EXTERN_C String_t* _stringLiteralA3A21FB44DD18299A19A0B86BA27CEB4EDA6A941;
IL2CPP_EXTERN_C String_t* _stringLiteralA79D3CC7BFC44D6628EA61E78D1855415661E3F8;
IL2CPP_EXTERN_C String_t* _stringLiteralAFF4AA19F30B5DC5A240F413D92917103536F1AD;
IL2CPP_EXTERN_C String_t* _stringLiteralC996D117D3819CA770138BE5B4BD64D4BB591694;
IL2CPP_EXTERN_C String_t* _stringLiteralCB4507437E3E619ECBAD84410155675EBEB3DB3F;
IL2CPP_EXTERN_C String_t* _stringLiteralCE1C37FFA5FD702CB48BBF8546A5E8BECD45601C;
IL2CPP_EXTERN_C String_t* _stringLiteralCFA0E830C16EC57623615165EA8FBC2817BACCCF;
IL2CPP_EXTERN_C String_t* _stringLiteralDD146CE30524569A8784D1FFE34EA505C910727D;
IL2CPP_EXTERN_C String_t* _stringLiteralEFE01C2CC4005799E2DF6AA0CDD5DE116776AFBC;
IL2CPP_EXTERN_C String_t* _stringLiteralF811A8F3778A439E75478C3728BE25A7853EAF83;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE6C2E19D140FDCD9C8736017AAA61A16904ADD63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisNGCallbackHelper_t57FF2520F22AEBEC0B88147EA281589A62FF2E62_mFCDE798B4F6D77F320F230CD7BB7E94F6CA0118B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_GetImageProperties_m9366D0A56B0DAE8EDE926AC0751C3D968ACB019D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_GetVideoProperties_m3C9D534463E7A815D7446E0B14A01B453D2E4B14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_LoadImageAtPath_m5D84DE861AD6659942A2FFB4547A4343F266D225_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_SaveImageToGallery_mA9EAB26EC648656A0A4C9C91B4F13B6DFE2C0B15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_SaveToGallery_m5146791056EE9A7EF4943C910D29BE8204BF0DCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_SaveToGallery_mDEE93746747317233B168AEFCB9238136AC5777C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3COnMediaReceivedU3Eb__0_mF5DB9C317748F4BB3FB340AB29F0B66065114926_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3COnMultipleMediaReceivedU3Eb__0_m36962BA6DBD2F57C90B56CC8B3C10C3A2A133532_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
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


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// UnityEngine.AndroidJavaObject
struct  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


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

// NativeGallery
struct  NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0  : public RuntimeObject
{
public:

public:
};

struct NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_StaticFields
{
public:
	// UnityEngine.AndroidJavaClass NativeGallery::m_ajc
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___m_ajc_0;
	// UnityEngine.AndroidJavaObject NativeGallery::m_context
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___m_context_1;
	// System.String NativeGallery::m_temporaryImagePath
	String_t* ___m_temporaryImagePath_2;
	// System.String NativeGallery::m_selectedImagePath
	String_t* ___m_selectedImagePath_3;
	// System.String NativeGallery::m_selectedVideoPath
	String_t* ___m_selectedVideoPath_4;
	// System.String NativeGallery::m_selectedAudioPath
	String_t* ___m_selectedAudioPath_5;

public:
	inline static int32_t get_offset_of_m_ajc_0() { return static_cast<int32_t>(offsetof(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_StaticFields, ___m_ajc_0)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_m_ajc_0() const { return ___m_ajc_0; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_m_ajc_0() { return &___m_ajc_0; }
	inline void set_m_ajc_0(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___m_ajc_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ajc_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_context_1() { return static_cast<int32_t>(offsetof(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_StaticFields, ___m_context_1)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_m_context_1() const { return ___m_context_1; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_m_context_1() { return &___m_context_1; }
	inline void set_m_context_1(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___m_context_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_context_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_temporaryImagePath_2() { return static_cast<int32_t>(offsetof(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_StaticFields, ___m_temporaryImagePath_2)); }
	inline String_t* get_m_temporaryImagePath_2() const { return ___m_temporaryImagePath_2; }
	inline String_t** get_address_of_m_temporaryImagePath_2() { return &___m_temporaryImagePath_2; }
	inline void set_m_temporaryImagePath_2(String_t* value)
	{
		___m_temporaryImagePath_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_temporaryImagePath_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_selectedImagePath_3() { return static_cast<int32_t>(offsetof(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_StaticFields, ___m_selectedImagePath_3)); }
	inline String_t* get_m_selectedImagePath_3() const { return ___m_selectedImagePath_3; }
	inline String_t** get_address_of_m_selectedImagePath_3() { return &___m_selectedImagePath_3; }
	inline void set_m_selectedImagePath_3(String_t* value)
	{
		___m_selectedImagePath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_selectedImagePath_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_selectedVideoPath_4() { return static_cast<int32_t>(offsetof(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_StaticFields, ___m_selectedVideoPath_4)); }
	inline String_t* get_m_selectedVideoPath_4() const { return ___m_selectedVideoPath_4; }
	inline String_t** get_address_of_m_selectedVideoPath_4() { return &___m_selectedVideoPath_4; }
	inline void set_m_selectedVideoPath_4(String_t* value)
	{
		___m_selectedVideoPath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_selectedVideoPath_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_selectedAudioPath_5() { return static_cast<int32_t>(offsetof(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_StaticFields, ___m_selectedAudioPath_5)); }
	inline String_t* get_m_selectedAudioPath_5() const { return ___m_selectedAudioPath_5; }
	inline String_t** get_address_of_m_selectedAudioPath_5() { return &___m_selectedAudioPath_5; }
	inline void set_m_selectedAudioPath_5(String_t* value)
	{
		___m_selectedAudioPath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_selectedAudioPath_5), (void*)value);
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

// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0
struct  U3CU3Ec__DisplayClass4_0_t973443D9D780B511D6F2345A5401ED8F24480CCC  : public RuntimeObject
{
public:
	// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0::<>4__this
	NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05 * ___U3CU3E4__this_0;
	// System.String NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0::path
	String_t* ___path_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t973443D9D780B511D6F2345A5401ED8F24480CCC, ___U3CU3E4__this_0)); }
	inline NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_path_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t973443D9D780B511D6F2345A5401ED8F24480CCC, ___path_1)); }
	inline String_t* get_path_1() const { return ___path_1; }
	inline String_t** get_address_of_path_1() { return &___path_1; }
	inline void set_path_1(String_t* value)
	{
		___path_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_1), (void*)value);
	}
};


// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0
struct  U3CU3Ec__DisplayClass5_0_t6FB9D345926E49F46086920125DE0BE3F271F4F5  : public RuntimeObject
{
public:
	// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0::<>4__this
	NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05 * ___U3CU3E4__this_0;
	// System.String[] NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0::result
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___result_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t6FB9D345926E49F46086920125DE0BE3F271F4F5, ___U3CU3E4__this_0)); }
	inline NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t6FB9D345926E49F46086920125DE0BE3F271F4F5, ___result_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_result_1() const { return ___result_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___result_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_1), (void*)value);
	}
};


// UnityEngine.AndroidJavaClass
struct  AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4  : public AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E
{
public:

public:
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


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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


// UnityEngine.Rect
struct  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
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


// NativeGallery/VideoProperties
struct  VideoProperties_t52823D2B29AE484E44D3A1CFAD17EF335B660153 
{
public:
	// System.Int32 NativeGallery/VideoProperties::width
	int32_t ___width_0;
	// System.Int32 NativeGallery/VideoProperties::height
	int32_t ___height_1;
	// System.Int64 NativeGallery/VideoProperties::duration
	int64_t ___duration_2;
	// System.Single NativeGallery/VideoProperties::rotation
	float ___rotation_3;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(VideoProperties_t52823D2B29AE484E44D3A1CFAD17EF335B660153, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(VideoProperties_t52823D2B29AE484E44D3A1CFAD17EF335B660153, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_duration_2() { return static_cast<int32_t>(offsetof(VideoProperties_t52823D2B29AE484E44D3A1CFAD17EF335B660153, ___duration_2)); }
	inline int64_t get_duration_2() const { return ___duration_2; }
	inline int64_t* get_address_of_duration_2() { return &___duration_2; }
	inline void set_duration_2(int64_t value)
	{
		___duration_2 = value;
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(VideoProperties_t52823D2B29AE484E44D3A1CFAD17EF335B660153, ___rotation_3)); }
	inline float get_rotation_3() const { return ___rotation_3; }
	inline float* get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(float value)
	{
		___rotation_3 = value;
	}
};


// UnityEngine.AndroidJavaProxy
struct  AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___javaInterface_0)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javaInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_proxyObject_1() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___proxyObject_1)); }
	inline intptr_t get_proxyObject_1() const { return ___proxyObject_1; }
	inline intptr_t* get_address_of_proxyObject_1() { return &___proxyObject_1; }
	inline void set_proxyObject_1(intptr_t value)
	{
		___proxyObject_1 = value;
	}
};

struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;

public:
	inline static int32_t get_offset_of_s_JavaLangSystemClass_2() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_JavaLangSystemClass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_s_JavaLangSystemClass_2() const { return ___s_JavaLangSystemClass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_s_JavaLangSystemClass_2() { return &___s_JavaLangSystemClass_2; }
	inline void set_s_JavaLangSystemClass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___s_JavaLangSystemClass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_JavaLangSystemClass_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_HashCodeMethodID_3() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_HashCodeMethodID_3)); }
	inline intptr_t get_s_HashCodeMethodID_3() const { return ___s_HashCodeMethodID_3; }
	inline intptr_t* get_address_of_s_HashCodeMethodID_3() { return &___s_HashCodeMethodID_3; }
	inline void set_s_HashCodeMethodID_3(intptr_t value)
	{
		___s_HashCodeMethodID_3 = value;
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

// System.IO.FileAttributes
struct  FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE, ___value___2)); }
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

// UnityEngine.TextureFormat
struct  TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// NativeGallery/ImageOrientation
struct  ImageOrientation_t1F4A21FEA8020E151F4CB6AB7288926AAFE5CD7F 
{
public:
	// System.Int32 NativeGallery/ImageOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ImageOrientation_t1F4A21FEA8020E151F4CB6AB7288926AAFE5CD7F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// NativeGallery/MediaType
struct  MediaType_tDB65D81A095419A19E77283CEF9B580CFB221AE4 
{
public:
	// System.Int32 NativeGallery/MediaType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MediaType_tDB65D81A095419A19E77283CEF9B580CFB221AE4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// NativeGallery/Permission
struct  Permission_tC2B25A32CB25621B424AEEC6BD464BAE06027E67 
{
public:
	// System.Int32 NativeGallery/Permission::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Permission_tC2B25A32CB25621B424AEEC6BD464BAE06027E67, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
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


// System.IO.MonoIOStat
struct  MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 
{
public:
	// System.IO.FileAttributes System.IO.MonoIOStat::fileAttributes
	int32_t ___fileAttributes_0;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_1;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_2;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_3;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_4;

public:
	inline static int32_t get_offset_of_fileAttributes_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___fileAttributes_0)); }
	inline int32_t get_fileAttributes_0() const { return ___fileAttributes_0; }
	inline int32_t* get_address_of_fileAttributes_0() { return &___fileAttributes_0; }
	inline void set_fileAttributes_0(int32_t value)
	{
		___fileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___Length_1)); }
	inline int64_t get_Length_1() const { return ___Length_1; }
	inline int64_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int64_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_CreationTime_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___CreationTime_2)); }
	inline int64_t get_CreationTime_2() const { return ___CreationTime_2; }
	inline int64_t* get_address_of_CreationTime_2() { return &___CreationTime_2; }
	inline void set_CreationTime_2(int64_t value)
	{
		___CreationTime_2 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastAccessTime_3)); }
	inline int64_t get_LastAccessTime_3() const { return ___LastAccessTime_3; }
	inline int64_t* get_address_of_LastAccessTime_3() { return &___LastAccessTime_3; }
	inline void set_LastAccessTime_3(int64_t value)
	{
		___LastAccessTime_3 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastWriteTime_4)); }
	inline int64_t get_LastWriteTime_4() const { return ___LastWriteTime_4; }
	inline int64_t* get_address_of_LastWriteTime_4() { return &___LastWriteTime_4; }
	inline void set_LastWriteTime_4(int64_t value)
	{
		___LastWriteTime_4 = value;
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

// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid
struct  NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// NativeGallery/MediaPickCallback NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::callback
	MediaPickCallback_t9271CE7DC6219D21E74BAC60E5A517A91E2BF4D7 * ___callback_4;
	// NativeGallery/MediaPickMultipleCallback NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::callbackMultiple
	MediaPickMultipleCallback_t48F09C9BE0D421F02BD9B8D9D5B455382F94B952 * ___callbackMultiple_5;
	// NativeGalleryNamespace.NGCallbackHelper NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::callbackHelper
	NGCallbackHelper_t57FF2520F22AEBEC0B88147EA281589A62FF2E62 * ___callbackHelper_6;

public:
	inline static int32_t get_offset_of_callback_4() { return static_cast<int32_t>(offsetof(NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05, ___callback_4)); }
	inline MediaPickCallback_t9271CE7DC6219D21E74BAC60E5A517A91E2BF4D7 * get_callback_4() const { return ___callback_4; }
	inline MediaPickCallback_t9271CE7DC6219D21E74BAC60E5A517A91E2BF4D7 ** get_address_of_callback_4() { return &___callback_4; }
	inline void set_callback_4(MediaPickCallback_t9271CE7DC6219D21E74BAC60E5A517A91E2BF4D7 * value)
	{
		___callback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_4), (void*)value);
	}

	inline static int32_t get_offset_of_callbackMultiple_5() { return static_cast<int32_t>(offsetof(NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05, ___callbackMultiple_5)); }
	inline MediaPickMultipleCallback_t48F09C9BE0D421F02BD9B8D9D5B455382F94B952 * get_callbackMultiple_5() const { return ___callbackMultiple_5; }
	inline MediaPickMultipleCallback_t48F09C9BE0D421F02BD9B8D9D5B455382F94B952 ** get_address_of_callbackMultiple_5() { return &___callbackMultiple_5; }
	inline void set_callbackMultiple_5(MediaPickMultipleCallback_t48F09C9BE0D421F02BD9B8D9D5B455382F94B952 * value)
	{
		___callbackMultiple_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackMultiple_5), (void*)value);
	}

	inline static int32_t get_offset_of_callbackHelper_6() { return static_cast<int32_t>(offsetof(NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05, ___callbackHelper_6)); }
	inline NGCallbackHelper_t57FF2520F22AEBEC0B88147EA281589A62FF2E62 * get_callbackHelper_6() const { return ___callbackHelper_6; }
	inline NGCallbackHelper_t57FF2520F22AEBEC0B88147EA281589A62FF2E62 ** get_address_of_callbackHelper_6() { return &___callbackHelper_6; }
	inline void set_callbackHelper_6(NGCallbackHelper_t57FF2520F22AEBEC0B88147EA281589A62FF2E62 * value)
	{
		___callbackHelper_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackHelper_6), (void*)value);
	}
};


// NativeGalleryNamespace.NGPermissionCallbackAndroid
struct  NGPermissionCallbackAndroid_t2F17C0D4C562F317A9B9E2E804C1C8C4C81CDF4A  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// System.Object NativeGalleryNamespace.NGPermissionCallbackAndroid::threadLock
	RuntimeObject * ___threadLock_4;
	// System.Int32 NativeGalleryNamespace.NGPermissionCallbackAndroid::<Result>k__BackingField
	int32_t ___U3CResultU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_threadLock_4() { return static_cast<int32_t>(offsetof(NGPermissionCallbackAndroid_t2F17C0D4C562F317A9B9E2E804C1C8C4C81CDF4A, ___threadLock_4)); }
	inline RuntimeObject * get_threadLock_4() const { return ___threadLock_4; }
	inline RuntimeObject ** get_address_of_threadLock_4() { return &___threadLock_4; }
	inline void set_threadLock_4(RuntimeObject * value)
	{
		___threadLock_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___threadLock_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(NGPermissionCallbackAndroid_t2F17C0D4C562F317A9B9E2E804C1C8C4C81CDF4A, ___U3CResultU3Ek__BackingField_5)); }
	inline int32_t get_U3CResultU3Ek__BackingField_5() const { return ___U3CResultU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CResultU3Ek__BackingField_5() { return &___U3CResultU3Ek__BackingField_5; }
	inline void set_U3CResultU3Ek__BackingField_5(int32_t value)
	{
		___U3CResultU3Ek__BackingField_5 = value;
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.UnityException
struct  UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101  : public Exception_t
{
public:

public:
};


// NativeGallery/ImageProperties
struct  ImageProperties_tF49ACA59C8B2E9081860DEBD634936A806FDC2B1 
{
public:
	// System.Int32 NativeGallery/ImageProperties::width
	int32_t ___width_0;
	// System.Int32 NativeGallery/ImageProperties::height
	int32_t ___height_1;
	// System.String NativeGallery/ImageProperties::mimeType
	String_t* ___mimeType_2;
	// NativeGallery/ImageOrientation NativeGallery/ImageProperties::orientation
	int32_t ___orientation_3;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(ImageProperties_tF49ACA59C8B2E9081860DEBD634936A806FDC2B1, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(ImageProperties_tF49ACA59C8B2E9081860DEBD634936A806FDC2B1, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_mimeType_2() { return static_cast<int32_t>(offsetof(ImageProperties_tF49ACA59C8B2E9081860DEBD634936A806FDC2B1, ___mimeType_2)); }
	inline String_t* get_mimeType_2() const { return ___mimeType_2; }
	inline String_t** get_address_of_mimeType_2() { return &___mimeType_2; }
	inline void set_mimeType_2(String_t* value)
	{
		___mimeType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mimeType_2), (void*)value);
	}

	inline static int32_t get_offset_of_orientation_3() { return static_cast<int32_t>(offsetof(ImageProperties_tF49ACA59C8B2E9081860DEBD634936A806FDC2B1, ___orientation_3)); }
	inline int32_t get_orientation_3() const { return ___orientation_3; }
	inline int32_t* get_address_of_orientation_3() { return &___orientation_3; }
	inline void set_orientation_3(int32_t value)
	{
		___orientation_3 = value;
	}
};

// Native definition for P/Invoke marshalling of NativeGallery/ImageProperties
struct ImageProperties_tF49ACA59C8B2E9081860DEBD634936A806FDC2B1_marshaled_pinvoke
{
	int32_t ___width_0;
	int32_t ___height_1;
	char* ___mimeType_2;
	int32_t ___orientation_3;
};
// Native definition for COM marshalling of NativeGallery/ImageProperties
struct ImageProperties_tF49ACA59C8B2E9081860DEBD634936A806FDC2B1_marshaled_com
{
	int32_t ___width_0;
	int32_t ___height_1;
	Il2CppChar* ___mimeType_2;
	int32_t ___orientation_3;
};

// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
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


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.IO.FileSystemInfo
struct  FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.MonoIOStat System.IO.FileSystemInfo::_data
	MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialised
	int32_t ____dataInitialised_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_3;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_4;
	// System.String System.IO.FileSystemInfo::_displayPath
	String_t* ____displayPath_5;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____data_1)); }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  get__data_1() const { return ____data_1; }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 * get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  value)
	{
		____data_1 = value;
	}

	inline static int32_t get_offset_of__dataInitialised_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____dataInitialised_2)); }
	inline int32_t get__dataInitialised_2() const { return ____dataInitialised_2; }
	inline int32_t* get_address_of__dataInitialised_2() { return &____dataInitialised_2; }
	inline void set__dataInitialised_2(int32_t value)
	{
		____dataInitialised_2 = value;
	}

	inline static int32_t get_offset_of_FullPath_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___FullPath_3)); }
	inline String_t* get_FullPath_3() const { return ___FullPath_3; }
	inline String_t** get_address_of_FullPath_3() { return &___FullPath_3; }
	inline void set_FullPath_3(String_t* value)
	{
		___FullPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_OriginalPath_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___OriginalPath_4)); }
	inline String_t* get_OriginalPath_4() const { return ___OriginalPath_4; }
	inline String_t** get_address_of_OriginalPath_4() { return &___OriginalPath_4; }
	inline void set_OriginalPath_4(String_t* value)
	{
		___OriginalPath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OriginalPath_4), (void*)value);
	}

	inline static int32_t get_offset_of__displayPath_5() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____displayPath_5)); }
	inline String_t* get__displayPath_5() const { return ____displayPath_5; }
	inline String_t** get_address_of__displayPath_5() { return &____displayPath_5; }
	inline void set__displayPath_5(String_t* value)
	{
		____displayPath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayPath_5), (void*)value);
	}
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


// UnityEngine.RenderTexture
struct  RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// NativeGallery/MediaPickCallback
struct  MediaPickCallback_t9271CE7DC6219D21E74BAC60E5A517A91E2BF4D7  : public MulticastDelegate_t
{
public:

public:
};


// NativeGallery/MediaPickMultipleCallback
struct  MediaPickMultipleCallback_t48F09C9BE0D421F02BD9B8D9D5B455382F94B952  : public MulticastDelegate_t
{
public:

public:
};


// NativeGallery/MediaSaveCallback
struct  MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9  : public MulticastDelegate_t
{
public:

public:
};


// System.IO.DirectoryInfo
struct  DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD  : public FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_6;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_7;

public:
	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___current_6)); }
	inline String_t* get_current_6() const { return ___current_6; }
	inline String_t** get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(String_t* value)
	{
		___current_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_6), (void*)value);
	}

	inline static int32_t get_offset_of_parent_7() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___parent_7)); }
	inline String_t* get_parent_7() const { return ___parent_7; }
	inline String_t** get_address_of_parent_7() { return &___parent_7; }
	inline void set_parent_7(String_t* value)
	{
		___parent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_7), (void*)value);
	}
};


// System.IO.FileNotFoundException
struct  FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8  : public IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA
{
public:
	// System.String System.IO.FileNotFoundException::_fileName
	String_t* ____fileName_18;
	// System.String System.IO.FileNotFoundException::_fusionLog
	String_t* ____fusionLog_19;

public:
	inline static int32_t get_offset_of__fileName_18() { return static_cast<int32_t>(offsetof(FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8, ____fileName_18)); }
	inline String_t* get__fileName_18() const { return ____fileName_18; }
	inline String_t** get_address_of__fileName_18() { return &____fileName_18; }
	inline void set__fileName_18(String_t* value)
	{
		____fileName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fileName_18), (void*)value);
	}

	inline static int32_t get_offset_of__fusionLog_19() { return static_cast<int32_t>(offsetof(FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8, ____fusionLog_19)); }
	inline String_t* get__fusionLog_19() const { return ____fusionLog_19; }
	inline String_t** get_address_of__fusionLog_19() { return &____fusionLog_19; }
	inline void set__fusionLog_19(String_t* value)
	{
		____fusionLog_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fusionLog_19), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// NativeGalleryNamespace.NGCallbackHelper
struct  NGCallbackHelper_t57FF2520F22AEBEC0B88147EA281589A62FF2E62  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action NativeGalleryNamespace.NGCallbackHelper::mainThreadAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___mainThreadAction_4;

public:
	inline static int32_t get_offset_of_mainThreadAction_4() { return static_cast<int32_t>(offsetof(NGCallbackHelper_t57FF2520F22AEBEC0B88147EA281589A62FF2E62, ___mainThreadAction_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_mainThreadAction_4() const { return ___mainThreadAction_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_mainThreadAction_4() { return &___mainThreadAction_4; }
	inline void set_mainThreadAction_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___mainThreadAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainThreadAction_4), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
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


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_CallStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE6C2E19D140FDCD9C8736017AAA61A16904ADD63_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238 (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * __this, String_t* ___javaInterface0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<NativeGalleryNamespace.NGCallbackHelper>()
inline NGCallbackHelper_t57FF2520F22AEBEC0B88147EA281589A62FF2E62 * GameObject_AddComponent_TisNGCallbackHelper_t57FF2520F22AEBEC0B88147EA281589A62FF2E62_mFCDE798B4F6D77F320F230CD7BB7E94F6CA0118B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  NGCallbackHelper_t57FF2520F22AEBEC0B88147EA281589A62FF2E62 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m2686585843AF3B928C02F998C463D2A8AEFCC539 (U3CU3Ec__DisplayClass4_0_t973443D9D780B511D6F2345A5401ED8F24480CCC * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void NativeGalleryNamespace.NGCallbackHelper::CallOnMainThread(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NGCallbackHelper_CallOnMainThread_m935A8C0505A00CF267FD52FCC54D6213DB5EFEB5_inline (NGCallbackHelper_t57FF2520F22AEBEC0B88147EA281589A62FF2E62 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___function0, const RuntimeMethod* method);
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mCB77E4385C4FFB3099C8E8D8D4AE7E743DD45F5D (U3CU3Ec__DisplayClass5_0_t6FB9D345926E49F46086920125DE0BE3F271F4F5 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Void NativeGallery/MediaPickCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickCallback_Invoke_mB7C0436D54E925BD80E322FCB5103E318AEB28EE (MediaPickCallback_t9271CE7DC6219D21E74BAC60E5A517A91E2BF4D7 * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void NativeGallery/MediaPickMultipleCallback::Invoke(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickMultipleCallback_Invoke_m48CF72A34CD7D55174ECEDEECD0183C9A07BFC11 (MediaPickMultipleCallback_t48F09C9BE0D421F02BD9B8D9D5B455382F94B952 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paths0, const RuntimeMethod* method);
// System.Void NativeGalleryNamespace.NGPermissionCallbackAndroid::set_Result(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid_set_Result_mFCF6107883E0F8AED7BE8951B85AF2693F0EC950_inline (NGPermissionCallbackAndroid_t2F17C0D4C562F317A9B9E2E804C1C8C4C81CDF4A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Pulse(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Pulse_m690EF6269492676F5A9A20430D3CC9363D54A17D (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541 (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, String_t* ___className0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared)(__this, ___fieldName0, method);
}
// System.String UnityEngine.Application::get_temporaryCachePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_temporaryCachePath_mB0F2F6D4D8FD2E082F7E0831A90FC6F1D18C23DF (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A (String_t* ___path0, const RuntimeMethod* method);
// UnityEngine.AndroidJavaClass NativeGallery::get_AJC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * NativeGallery_get_AJC_m4307BF76B4FCEA5D1192219F6CCD30AC7BDD65EE (const RuntimeMethod* method);
// UnityEngine.AndroidJavaObject NativeGallery::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * NativeGallery_get_Context_mC358BF371761A22F9AEA0949C94D7198394CC562 (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_CallStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE6C2E19D140FDCD9C8736017AAA61A16904ADD63 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE6C2E19D140FDCD9C8736017AAA61A16904ADD63_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14 (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void NativeGalleryNamespace.NGPermissionCallbackAndroid::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid__ctor_mC8D10C3772B425957CA4DF08E0E874876C48AEF0 (NGPermissionCallbackAndroid_t2F17C0D4C562F317A9B9E2E804C1C8C4C81CDF4A * __this, RuntimeObject * ___threadLock0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Int32 NativeGalleryNamespace.NGPermissionCallbackAndroid::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NGPermissionCallbackAndroid_get_Result_mE352376B3CA1BD57D1A5ABDB349FE269B42DEA30_inline (NGPermissionCallbackAndroid_t2F17C0D4C562F317A9B9E2E804C1C8C4C81CDF4A * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Monitor::Wait(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Monitor_Wait_m7C55D48467F2FB3C2344DAA18BA01266AF24B4F0 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC (const RuntimeMethod* method);
// NativeGallery/Permission NativeGallery::SaveToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_mDEE93746747317233B168AEFCB9238136AC5777C (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mediaBytes0, String_t* ___album1, String_t* ___filename2, int32_t ___mediaType3, MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * ___callback4, const RuntimeMethod* method);
// NativeGallery/Permission NativeGallery::SaveToGallery(System.String,System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_m5146791056EE9A7EF4943C910D29BE8204BF0DCF (String_t* ___existingMediaPath0, String_t* ___album1, String_t* ___filename2, int32_t ___mediaType3, MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * ___callback4, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Byte[] NativeGallery::GetTextureBytes(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* NativeGallery_GetTextureBytes_m685923E43144B1B776841913E3C879E78A159E00 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, bool ___isJpeg1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_gshared)(__this, ___methodName0, ___args1, method);
}
// NativeGallery/Permission NativeGallery::GetMediaFromGallery(NativeGallery/MediaPickCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMediaFromGallery_m0D534A4D397DEB9A558322FE6C15DCE0329647F5 (MediaPickCallback_t9271CE7DC6219D21E74BAC60E5A517A91E2BF4D7 * ___callback0, int32_t ___mediaType1, String_t* ___mime2, String_t* ___title3, const RuntimeMethod* method);
// NativeGallery/Permission NativeGallery::GetMultipleMediaFromGallery(NativeGallery/MediaPickMultipleCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMultipleMediaFromGallery_m3F2D6AFE208A875BA46051972B0F751445E455D6 (MediaPickMultipleCallback_t48F09C9BE0D421F02BD9B8D9D5B455382F94B952 * ___callback0, int32_t ___mediaType1, String_t* ___mime2, String_t* ___title3, const RuntimeMethod* method);
// NativeGallery/Permission NativeGallery::RequestPermission(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_RequestPermission_m50048F915B1B5F7EDCB6CDD3E7A4DE83559BA8F1 (bool ___readPermissionOnly0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.IO.Path::GetExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD (String_t* ___path0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String NativeGallery::GetTemporarySavePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_GetTemporarySavePath_m7F42CE60368F11FF35422DB8BC48C293B77A7F60 (String_t* ___filename0, const RuntimeMethod* method);
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_m1E88860F73A6A2150FAB97D9BF3F44596F06036F (String_t* ___path0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes1, const RuntimeMethod* method);
// System.Void NativeGallery::SaveToGalleryInternal(System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_SaveToGalleryInternal_m43CC2663F52F40D70185E0D0309EF3F58EED369B (String_t* ___path0, String_t* ___album1, int32_t ___mediaType2, MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * ___callback3, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.IO.FileNotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileNotFoundException__ctor_mA3A41003FE6056B7BF44A6577DF4BBB30BFD32D5 (FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.IO.File::Copy(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Copy_m1CB9B28EA63AA6D9E36B50AABABE81CA8C22C794 (String_t* ___sourceFileName0, String_t* ___destFileName1, bool ___overwrite2, const RuntimeMethod* method);
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_m82FE53535A3911380F7E4C8AD44D77FAB330FD77 (String_t* ___path0, const RuntimeMethod* method);
// System.Void NativeGallery/MediaSaveCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaveCallback_Invoke_m9ED3F44F7DBF2B6CDF929AE4B0558AFF97CA614E (MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * __this, String_t* ___error0, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463 (const RuntimeMethod* method);
// System.Boolean NativeGallery::IsMediaPickerBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_IsMediaPickerBusy_m1ECF19CC1C2CC61412415367CD6A4A0CCB2D49B1 (const RuntimeMethod* method);
// System.String NativeGallery::get_SelectedImagePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_SelectedImagePath_m5B63C2B54E2FB35402CF05A4388D8CF3EAA33187 (const RuntimeMethod* method);
// System.String NativeGallery::get_SelectedVideoPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_SelectedVideoPath_m1BA11E0F23FF6E51BB4904024B7ABA27FC52F8D3 (const RuntimeMethod* method);
// System.String NativeGallery::get_SelectedAudioPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_SelectedAudioPath_mA0D29026393823944B2E7BD6678015A5EFDC5477 (const RuntimeMethod* method);
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::.ctor(NativeGallery/MediaPickCallback,NativeGallery/MediaPickMultipleCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid__ctor_m7DA10E449CF785C4B5DE7CAF5A67352C068F3582 (NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05 * __this, MediaPickCallback_t9271CE7DC6219D21E74BAC60E5A517A91E2BF4D7 * ___callback0, MediaPickMultipleCallback_t48F09C9BE0D421F02BD9B8D9D5B455382F94B952 * ___callbackMultiple1, const RuntimeMethod* method);
// System.Boolean NativeGallery::CanSelectMultipleFilesFromGallery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanSelectMultipleFilesFromGallery_mDDC4F8A801165FDB60FE11AFB18BAC81848C012D (const RuntimeMethod* method);
// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, const RuntimeMethod* method);
// System.Byte[] UnityEngine.ImageConversion::EncodeToJPG(UnityEngine.Texture2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ImageConversion_EncodeToJPG_mE32249F45E643405652057EA8A35112AB4721641 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, int32_t ___quality1, const RuntimeMethod* method);
// System.Byte[] NativeGallery::GetTextureBytesFromCopy(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* NativeGallery_GetTextureBytesFromCopy_m6CB6DE153F1F1FBEBBA10D170A97E9EEF94863E6 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, bool ___isJpeg1, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * RenderTexture_GetTemporary_mF71FD5106250F2CD0309BBBA2CD74D3D6D94EFB8 (int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * RenderTexture_get_active_mB73718A56673D36F74B5338B310ED7FDFEB34AB7 (const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___dest1, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___value0, const RuntimeMethod* method);
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture2D_get_format_mCBCE13524A94042693822BDDE112990B25F4F8E4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m87ACCC9FDCD8FC8851AE8D3BE56A7C2CAF09C75E (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___source0, int32_t ___destX1, int32_t ___destY2, bool ___recalculateMipMaps3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m83460E7B5610A6D85DD3CCA71CC5D4523390D660 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, bool ___updateMipmaps0, bool ___makeNoLongerReadable1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___temp0, const RuntimeMethod* method);
// System.Int32 UnityEngine.SystemInfo::get_maxTextureSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_maxTextureSize_m92A710AC08A38C8BAF96D95D796C073B1C900D40 (const RuntimeMethod* method);
// System.String NativeGallery::get_TemporaryImagePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_TemporaryImagePath_mD2C75BFC9F9266D5559E8832B58395ECD1C6747A (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared)(__this, ___methodName0, ___args1, method);
}
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_m070E99F11A6005755BD6579A6CC835694395F79F (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m667452FB4794C77D283037E096FE0DC0AEB311F3 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, bool ___linear4, const RuntimeMethod* method);
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* File_ReadAllBytes_mFB47FB50E938AE90CC822442D30E896441D95829 (String_t* ___path0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_m1E5C9BF6206ED40B23CDB28341B8A64E05C43683 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data1, bool ___markNonReadable2, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2 (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method);
// System.Void NativeGallery/ImageProperties::.ctor(System.Int32,System.Int32,System.String,NativeGallery/ImageOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageProperties__ctor_m8C0DA93333F55DFB00769AB1326E80AE7DB036ED (ImageProperties_tF49ACA59C8B2E9081860DEBD634936A806FDC2B1 * __this, int32_t ___width0, int32_t ___height1, String_t* ___mimeType2, int32_t ___orientation3, const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m6EA988890D7F9954EA49A7227E60B3C674930650 (String_t* ___s0, int64_t* ___result1, const RuntimeMethod* method);
// System.Boolean System.Single::TryParse(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_mC2E0086EAB164A81380FD03BDE671C574F52E373 (String_t* ___s0, float* ___result1, const RuntimeMethod* method);
// System.Void NativeGallery/VideoProperties::.ctor(System.Int32,System.Int32,System.Int64,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoProperties__ctor_m45BABD4A9B46E4B193903730ACCE828941099219 (VideoProperties_t52823D2B29AE484E44D3A1CFAD17EF335B660153 * __this, int32_t ___width0, int32_t ___height1, int64_t ___duration2, float ___rotation3, const RuntimeMethod* method);
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::MediaReceiveCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_MediaReceiveCallback_mA899EDF8FA2EDC60ADB313DE5C81CB9B77C0FDFF (NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05 * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::MediaReceiveMultipleCallback(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_MediaReceiveMultipleCallback_m935837B6ABD452F4982EA0FFBCB1A58342A732C5 (NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paths0, const RuntimeMethod* method);
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
// System.Void NativeGalleryNamespace.NGCallbackHelper::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGCallbackHelper_Awake_m28D007314C438D3874F56F5B836CB4736EE07FAB (NGCallbackHelper_t57FF2520F22AEBEC0B88147EA281589A62FF2E62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad( gameObject );
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGCallbackHelper::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGCallbackHelper_Update_m9F6E97686653F22D62E5D95A8734787C174B86E3 (NGCallbackHelper_t57FF2520F22AEBEC0B88147EA281589A62FF2E62 * __this, const RuntimeMethod* method)
{
	{
		// if( mainThreadAction != null )
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_mainThreadAction_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// System.Action temp = mainThreadAction;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = __this->get_mainThreadAction_4();
		// mainThreadAction = null;
		__this->set_mainThreadAction_4((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL);
		// temp();
		NullCheck(L_1);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGCallbackHelper::CallOnMainThread(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGCallbackHelper_CallOnMainThread_m935A8C0505A00CF267FD52FCC54D6213DB5EFEB5 (NGCallbackHelper_t57FF2520F22AEBEC0B88147EA281589A62FF2E62 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___function0, const RuntimeMethod* method)
{
	{
		// mainThreadAction = function;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___function0;
		__this->set_mainThreadAction_4(L_0);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGCallbackHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGCallbackHelper__ctor_mB41651EAF80FC1E02EB5559D6C00E8BB6094D5FB (NGCallbackHelper_t57FF2520F22AEBEC0B88147EA281589A62FF2E62 * __this, const RuntimeMethod* method)
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
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::.ctor(NativeGallery/MediaPickCallback,NativeGallery/MediaPickMultipleCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid__ctor_m7DA10E449CF785C4B5DE7CAF5A67352C068F3582 (NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05 * __this, MediaPickCallback_t9271CE7DC6219D21E74BAC60E5A517A91E2BF4D7 * ___callback0, MediaPickMultipleCallback_t48F09C9BE0D421F02BD9B8D9D5B455382F94B952 * ___callbackMultiple1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisNGCallbackHelper_t57FF2520F22AEBEC0B88147EA281589A62FF2E62_mFCDE798B4F6D77F320F230CD7BB7E94F6CA0118B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1323FA5608C80AC5A0D5F2B0116C96A1B9AFD381);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23A7F9B10A9B248A502580BB07C34BEC789A2F26);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NGMediaReceiveCallbackAndroid( NativeGallery.MediaPickCallback callback, NativeGallery.MediaPickMultipleCallback callbackMultiple ) : base( "com.yasirkula.unity.NativeGalleryMediaReceiver" )
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteral1323FA5608C80AC5A0D5F2B0116C96A1B9AFD381, /*hidden argument*/NULL);
		// this.callback = callback;
		MediaPickCallback_t9271CE7DC6219D21E74BAC60E5A517A91E2BF4D7 * L_0 = ___callback0;
		__this->set_callback_4(L_0);
		// this.callbackMultiple = callbackMultiple;
		MediaPickMultipleCallback_t48F09C9BE0D421F02BD9B8D9D5B455382F94B952 * L_1 = ___callbackMultiple1;
		__this->set_callbackMultiple_5(L_1);
		// callbackHelper = new GameObject( "NGCallbackHelper" ).AddComponent<NGCallbackHelper>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_2, _stringLiteral23A7F9B10A9B248A502580BB07C34BEC789A2F26, /*hidden argument*/NULL);
		NullCheck(L_2);
		NGCallbackHelper_t57FF2520F22AEBEC0B88147EA281589A62FF2E62 * L_3;
		L_3 = GameObject_AddComponent_TisNGCallbackHelper_t57FF2520F22AEBEC0B88147EA281589A62FF2E62_mFCDE798B4F6D77F320F230CD7BB7E94F6CA0118B(L_2, /*hidden argument*/GameObject_AddComponent_TisNGCallbackHelper_t57FF2520F22AEBEC0B88147EA281589A62FF2E62_mFCDE798B4F6D77F320F230CD7BB7E94F6CA0118B_RuntimeMethod_var);
		__this->set_callbackHelper_6(L_3);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::OnMediaReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_OnMediaReceived_m2BD7C7D4D1F349E3F936A1DBED3B106F463A3A35 (NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3COnMediaReceivedU3Eb__0_mF5DB9C317748F4BB3FB340AB29F0B66065114926_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t973443D9D780B511D6F2345A5401ED8F24480CCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t973443D9D780B511D6F2345A5401ED8F24480CCC * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t973443D9D780B511D6F2345A5401ED8F24480CCC * L_0 = (U3CU3Ec__DisplayClass4_0_t973443D9D780B511D6F2345A5401ED8F24480CCC *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t973443D9D780B511D6F2345A5401ED8F24480CCC_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_0__ctor_m2686585843AF3B928C02F998C463D2A8AEFCC539(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t973443D9D780B511D6F2345A5401ED8F24480CCC * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass4_0_t973443D9D780B511D6F2345A5401ED8F24480CCC * L_2 = V_0;
		String_t* L_3 = ___path0;
		NullCheck(L_2);
		L_2->set_path_1(L_3);
		// callbackHelper.CallOnMainThread( () => MediaReceiveCallback( path ) );
		NGCallbackHelper_t57FF2520F22AEBEC0B88147EA281589A62FF2E62 * L_4 = __this->get_callbackHelper_6();
		U3CU3Ec__DisplayClass4_0_t973443D9D780B511D6F2345A5401ED8F24480CCC * L_5 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_0_U3COnMediaReceivedU3Eb__0_mF5DB9C317748F4BB3FB340AB29F0B66065114926_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		NGCallbackHelper_CallOnMainThread_m935A8C0505A00CF267FD52FCC54D6213DB5EFEB5_inline(L_4, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::OnMultipleMediaReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_OnMultipleMediaReceived_m71C422152F3F22E7098899323BD70737BD8E1E9A (NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05 * __this, String_t* ___paths0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3COnMultipleMediaReceivedU3Eb__0_m36962BA6DBD2F57C90B56CC8B3C10C3A2A133532_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t6FB9D345926E49F46086920125DE0BE3F271F4F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_t6FB9D345926E49F46086920125DE0BE3F271F4F5 * V_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		U3CU3Ec__DisplayClass5_0_t6FB9D345926E49F46086920125DE0BE3F271F4F5 * L_0 = (U3CU3Ec__DisplayClass5_0_t6FB9D345926E49F46086920125DE0BE3F271F4F5 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t6FB9D345926E49F46086920125DE0BE3F271F4F5_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass5_0__ctor_mCB77E4385C4FFB3099C8E8D8D4AE7E743DD45F5D(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_t6FB9D345926E49F46086920125DE0BE3F271F4F5 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		// string[] result = null;
		U3CU3Ec__DisplayClass5_0_t6FB9D345926E49F46086920125DE0BE3F271F4F5 * L_2 = V_0;
		NullCheck(L_2);
		L_2->set_result_1((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL);
		// if( !string.IsNullOrEmpty( paths ) )
		String_t* L_3 = ___paths0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_00a1;
		}
	}
	{
		// string[] pathsSplit = paths.Split( '>' );
		String_t* L_5 = ___paths0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_6 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)62));
		NullCheck(L_5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8;
		L_8 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_5, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// int validPathCount = 0;
		V_2 = 0;
		// for( int i = 0; i < pathsSplit.Length; i++ )
		V_3 = 0;
		goto IL_0049;
	}

IL_0037:
	{
		// if( !string.IsNullOrEmpty( pathsSplit[i] ) )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = V_1;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		bool L_13;
		L_13 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0045;
		}
	}
	{
		// validPathCount++;
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0045:
	{
		// for( int i = 0; i < pathsSplit.Length; i++ )
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0049:
	{
		// for( int i = 0; i < pathsSplit.Length; i++ )
		int32_t L_16 = V_3;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = V_1;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_0037;
		}
	}
	{
		// if( validPathCount == 0 )
		int32_t L_18 = V_2;
		if (L_18)
		{
			goto IL_005b;
		}
	}
	{
		// pathsSplit = new string[0];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)0);
		V_1 = L_19;
		goto IL_009a;
	}

IL_005b:
	{
		// else if( validPathCount != pathsSplit.Length )
		int32_t L_20 = V_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = V_1;
		NullCheck(L_21);
		if ((((int32_t)L_20) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))
		{
			goto IL_009a;
		}
	}
	{
		// string[] validPaths = new string[validPathCount];
		int32_t L_22 = V_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_22);
		V_4 = L_23;
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		V_5 = 0;
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		V_6 = 0;
		goto IL_0090;
	}

IL_0071:
	{
		// if( !string.IsNullOrEmpty( pathsSplit[i] ) )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		String_t* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		bool L_28;
		L_28 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_27, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_008a;
		}
	}
	{
		// validPaths[j++] = pathsSplit[i];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = V_4;
		int32_t L_30 = V_6;
		int32_t L_31 = L_30;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = V_1;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		String_t* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_35);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (String_t*)L_35);
	}

IL_008a:
	{
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		int32_t L_36 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_0090:
	{
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		int32_t L_37 = V_5;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_38 = V_1;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length))))))
		{
			goto IL_0071;
		}
	}
	{
		// pathsSplit = validPaths;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_39 = V_4;
		V_1 = L_39;
	}

IL_009a:
	{
		// result = pathsSplit;
		U3CU3Ec__DisplayClass5_0_t6FB9D345926E49F46086920125DE0BE3F271F4F5 * L_40 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_41 = V_1;
		NullCheck(L_40);
		L_40->set_result_1(L_41);
	}

IL_00a1:
	{
		// callbackHelper.CallOnMainThread( () => MediaReceiveMultipleCallback( result ) );
		NGCallbackHelper_t57FF2520F22AEBEC0B88147EA281589A62FF2E62 * L_42 = __this->get_callbackHelper_6();
		U3CU3Ec__DisplayClass5_0_t6FB9D345926E49F46086920125DE0BE3F271F4F5 * L_43 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_44 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_44, L_43, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass5_0_U3COnMultipleMediaReceivedU3Eb__0_m36962BA6DBD2F57C90B56CC8B3C10C3A2A133532_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_42);
		NGCallbackHelper_CallOnMainThread_m935A8C0505A00CF267FD52FCC54D6213DB5EFEB5_inline(L_42, L_44, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::MediaReceiveCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_MediaReceiveCallback_mA899EDF8FA2EDC60ADB313DE5C81CB9B77C0FDFF (NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if( string.IsNullOrEmpty( path ) )
		String_t* L_0 = ___path0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// path = null;
		___path0 = (String_t*)NULL;
	}

IL_000b:
	{
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			// if( callback != null )
			MediaPickCallback_t9271CE7DC6219D21E74BAC60E5A517A91E2BF4D7 * L_2 = __this->get_callback_4();
			if (!L_2)
			{
				goto IL_0020;
			}
		}

IL_0014:
		{
			// callback( path );
			MediaPickCallback_t9271CE7DC6219D21E74BAC60E5A517A91E2BF4D7 * L_3 = __this->get_callback_4();
			String_t* L_4 = ___path0;
			NullCheck(L_3);
			MediaPickCallback_Invoke_mB7C0436D54E925BD80E322FCB5103E318AEB28EE(L_3, L_4, /*hidden argument*/NULL);
		}

IL_0020:
		{
			// }
			IL2CPP_LEAVE(0x2E, FINALLY_0022);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0022;
	}

FINALLY_0022:
	{ // begin finally (depth: 1)
		// Object.Destroy( callbackHelper );
		NGCallbackHelper_t57FF2520F22AEBEC0B88147EA281589A62FF2E62 * L_5 = __this->get_callbackHelper_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(34)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(34)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2E, IL_002e)
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::MediaReceiveMultipleCallback(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_MediaReceiveMultipleCallback_m935837B6ABD452F4982EA0FFBCB1A58342A732C5 (NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paths0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if( paths != null && paths.Length == 0 )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___paths0;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = ___paths0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_000a;
		}
	}
	{
		// paths = null;
		___paths0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL;
	}

IL_000a:
	{
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			// if( callbackMultiple != null )
			MediaPickMultipleCallback_t48F09C9BE0D421F02BD9B8D9D5B455382F94B952 * L_2 = __this->get_callbackMultiple_5();
			if (!L_2)
			{
				goto IL_001f;
			}
		}

IL_0013:
		{
			// callbackMultiple( paths );
			MediaPickMultipleCallback_t48F09C9BE0D421F02BD9B8D9D5B455382F94B952 * L_3 = __this->get_callbackMultiple_5();
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = ___paths0;
			NullCheck(L_3);
			MediaPickMultipleCallback_Invoke_m48CF72A34CD7D55174ECEDEECD0183C9A07BFC11(L_3, L_4, /*hidden argument*/NULL);
		}

IL_001f:
		{
			// }
			IL2CPP_LEAVE(0x2D, FINALLY_0021);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		// Object.Destroy( callbackHelper );
		NGCallbackHelper_t57FF2520F22AEBEC0B88147EA281589A62FF2E62 * L_5 = __this->get_callbackHelper_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(33)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
	}

IL_002d:
	{
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
// System.Int32 NativeGalleryNamespace.NGPermissionCallbackAndroid::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NGPermissionCallbackAndroid_get_Result_mE352376B3CA1BD57D1A5ABDB349FE269B42DEA30 (NGPermissionCallbackAndroid_t2F17C0D4C562F317A9B9E2E804C1C8C4C81CDF4A * __this, const RuntimeMethod* method)
{
	{
		// public int Result { get; private set; }
		int32_t L_0 = __this->get_U3CResultU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void NativeGalleryNamespace.NGPermissionCallbackAndroid::set_Result(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid_set_Result_mFCF6107883E0F8AED7BE8951B85AF2693F0EC950 (NGPermissionCallbackAndroid_t2F17C0D4C562F317A9B9E2E804C1C8C4C81CDF4A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Result { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CResultU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void NativeGalleryNamespace.NGPermissionCallbackAndroid::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid__ctor_mC8D10C3772B425957CA4DF08E0E874876C48AEF0 (NGPermissionCallbackAndroid_t2F17C0D4C562F317A9B9E2E804C1C8C4C81CDF4A * __this, RuntimeObject * ___threadLock0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1797A6EC252879FB0D0CD0D8E0F03D8E0BBA57F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NGPermissionCallbackAndroid( object threadLock ) : base( "com.yasirkula.unity.NativeGalleryPermissionReceiver" )
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteral1797A6EC252879FB0D0CD0D8E0F03D8E0BBA57F2, /*hidden argument*/NULL);
		// Result = -1;
		NGPermissionCallbackAndroid_set_Result_mFCF6107883E0F8AED7BE8951B85AF2693F0EC950_inline(__this, (-1), /*hidden argument*/NULL);
		// this.threadLock = threadLock;
		RuntimeObject * L_0 = ___threadLock0;
		__this->set_threadLock_4(L_0);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGPermissionCallbackAndroid::OnPermissionResult(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid_OnPermissionResult_mFA6227690FA00A7ED3E4B43923B97E4B5B2A1F7C (NGPermissionCallbackAndroid_t2F17C0D4C562F317A9B9E2E804C1C8C4C81CDF4A * __this, int32_t ___result0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// Result = result;
		int32_t L_0 = ___result0;
		NGPermissionCallbackAndroid_set_Result_mFCF6107883E0F8AED7BE8951B85AF2693F0EC950_inline(__this, L_0, /*hidden argument*/NULL);
		// lock( threadLock )
		RuntimeObject * L_1 = __this->get_threadLock_4();
		V_0 = L_1;
		V_1 = (bool)0;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_2, (bool*)(&V_1), /*hidden argument*/NULL);
		// Monitor.Pulse( threadLock );
		RuntimeObject * L_3 = __this->get_threadLock_4();
		Monitor_Pulse_m690EF6269492676F5A9A20430D3CC9363D54A17D(L_3, /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x2F, FINALLY_0025);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0025;
	}

FINALLY_0025:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_002e;
			}
		}

IL_0028:
		{
			RuntimeObject * L_5 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_5, /*hidden argument*/NULL);
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(37)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(37)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
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
// UnityEngine.AndroidJavaClass NativeGallery::get_AJC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * NativeGallery_get_AJC_m4307BF76B4FCEA5D1192219F6CCD30AC7BDD65EE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFE01C2CC4005799E2DF6AA0CDD5DE116776AFBC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_ajc == null )
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var))->get_m_ajc_0();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// m_ajc = new AndroidJavaClass( "com.yasirkula.unity.NativeGallery" );
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_1, _stringLiteralEFE01C2CC4005799E2DF6AA0CDD5DE116776AFBC, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		((NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var))->set_m_ajc_0(L_1);
	}

IL_0016:
	{
		// return m_ajc;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_2 = ((NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var))->get_m_ajc_0();
		return L_2;
	}
}
// UnityEngine.AndroidJavaObject NativeGallery::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * NativeGallery_get_Context_mC358BF371761A22F9AEA0949C94D7198394CC562 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if( m_context == null )
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var))->get_m_context_1();
		if (L_0)
		{
			goto IL_002e;
		}
	}
	{
		// using( AndroidJavaObject unityClass = new AndroidJavaClass( "com.unity3d.player.UnityPlayer" ) )
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_1, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		// m_context = unityClass.GetStatic<AndroidJavaObject>( "currentActivity" );
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2 = V_0;
		NullCheck(L_2);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3;
		L_3 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_2, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		((NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var))->set_m_context_1(L_3);
		// }
		IL2CPP_LEAVE(0x2E, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = V_0;
			if (!L_4)
			{
				goto IL_002d;
			}
		}

IL_0027:
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_5);
		}

IL_002d:
		{
			IL2CPP_END_FINALLY(36)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2E, IL_002e)
	}

IL_002e:
	{
		// return m_context;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_6 = ((NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var))->get_m_context_1();
		return L_6;
	}
}
// System.String NativeGallery::get_TemporaryImagePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_TemporaryImagePath_mD2C75BFC9F9266D5559E8832B58395ECD1C6747A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1256BD059A8D156C0578EF505C83E5862F0EFCD2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_temporaryImagePath == null )
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		String_t* L_0 = ((NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var))->get_m_temporaryImagePath_2();
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		// m_temporaryImagePath = Path.Combine( Application.temporaryCachePath, "tmpImg" );
		String_t* L_1;
		L_1 = Application_get_temporaryCachePath_mB0F2F6D4D8FD2E082F7E0831A90FC6F1D18C23DF(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_1, _stringLiteral1256BD059A8D156C0578EF505C83E5862F0EFCD2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		((NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var))->set_m_temporaryImagePath_2(L_2);
		// Directory.CreateDirectory( Application.temporaryCachePath );
		String_t* L_3;
		L_3 = Application_get_temporaryCachePath_mB0F2F6D4D8FD2E082F7E0831A90FC6F1D18C23DF(/*hidden argument*/NULL);
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_4;
		L_4 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_3, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// return m_temporaryImagePath;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		String_t* L_5 = ((NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var))->get_m_temporaryImagePath_2();
		return L_5;
	}
}
// System.String NativeGallery::get_SelectedImagePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_SelectedImagePath_m5B63C2B54E2FB35402CF05A4388D8CF3EAA33187 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE1C37FFA5FD702CB48BBF8546A5E8BECD45601C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_selectedImagePath == null )
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		String_t* L_0 = ((NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var))->get_m_selectedImagePath_3();
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		// m_selectedImagePath = Path.Combine( Application.temporaryCachePath, "pickedImg" );
		String_t* L_1;
		L_1 = Application_get_temporaryCachePath_mB0F2F6D4D8FD2E082F7E0831A90FC6F1D18C23DF(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_1, _stringLiteralCE1C37FFA5FD702CB48BBF8546A5E8BECD45601C, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		((NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var))->set_m_selectedImagePath_3(L_2);
		// Directory.CreateDirectory( Application.temporaryCachePath );
		String_t* L_3;
		L_3 = Application_get_temporaryCachePath_mB0F2F6D4D8FD2E082F7E0831A90FC6F1D18C23DF(/*hidden argument*/NULL);
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_4;
		L_4 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_3, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// return m_selectedImagePath;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		String_t* L_5 = ((NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var))->get_m_selectedImagePath_3();
		return L_5;
	}
}
// System.String NativeGallery::get_SelectedVideoPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_SelectedVideoPath_m1BA11E0F23FF6E51BB4904024B7ABA27FC52F8D3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA79D3CC7BFC44D6628EA61E78D1855415661E3F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_selectedVideoPath == null )
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		String_t* L_0 = ((NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var))->get_m_selectedVideoPath_4();
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		// m_selectedVideoPath = Path.Combine( Application.temporaryCachePath, "pickedVideo" );
		String_t* L_1;
		L_1 = Application_get_temporaryCachePath_mB0F2F6D4D8FD2E082F7E0831A90FC6F1D18C23DF(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_1, _stringLiteralA79D3CC7BFC44D6628EA61E78D1855415661E3F8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		((NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var))->set_m_selectedVideoPath_4(L_2);
		// Directory.CreateDirectory( Application.temporaryCachePath );
		String_t* L_3;
		L_3 = Application_get_temporaryCachePath_mB0F2F6D4D8FD2E082F7E0831A90FC6F1D18C23DF(/*hidden argument*/NULL);
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_4;
		L_4 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_3, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// return m_selectedVideoPath;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		String_t* L_5 = ((NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var))->get_m_selectedVideoPath_4();
		return L_5;
	}
}
// System.String NativeGallery::get_SelectedAudioPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_SelectedAudioPath_mA0D29026393823944B2E7BD6678015A5EFDC5477 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8280B83AC948E7BC53467CEFDF2AF27F4B2209E5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_selectedAudioPath == null )
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		String_t* L_0 = ((NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var))->get_m_selectedAudioPath_5();
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		// m_selectedAudioPath = Path.Combine( Application.temporaryCachePath, "pickedAudio" );
		String_t* L_1;
		L_1 = Application_get_temporaryCachePath_mB0F2F6D4D8FD2E082F7E0831A90FC6F1D18C23DF(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_1, _stringLiteral8280B83AC948E7BC53467CEFDF2AF27F4B2209E5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		((NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var))->set_m_selectedAudioPath_5(L_2);
		// Directory.CreateDirectory( Application.temporaryCachePath );
		String_t* L_3;
		L_3 = Application_get_temporaryCachePath_mB0F2F6D4D8FD2E082F7E0831A90FC6F1D18C23DF(/*hidden argument*/NULL);
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_4;
		L_4 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_3, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// return m_selectedAudioPath;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		String_t* L_5 = ((NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var))->get_m_selectedAudioPath_5();
		return L_5;
	}
}
// NativeGallery/Permission NativeGallery::CheckPermission(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_CheckPermission_mA16DF5B8DA74D19804AD35B9CD40399CF01AD8D0 (bool ___readPermissionOnly0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE6C2E19D140FDCD9C8736017AAA61A16904ADD63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral519276B36C92AA64006C0D21451C2C34FE5C1148);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral660F6D5965E09393894520A3BBDDAE9F5DEF81D2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Permission result = (Permission) AJC.CallStatic<int>( "CheckPermission", Context, readPermissionOnly );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0;
		L_0 = NativeGallery_get_AJC_m4307BF76B4FCEA5D1192219F6CCD30AC7BDD65EE(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3;
		L_3 = NativeGallery_get_Context_mC358BF371761A22F9AEA0949C94D7198394CC562(/*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		bool L_5 = ___readPermissionOnly0;
		bool L_6 = L_5;
		RuntimeObject * L_7 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		NullCheck(L_0);
		int32_t L_8;
		L_8 = AndroidJavaObject_CallStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE6C2E19D140FDCD9C8736017AAA61A16904ADD63(L_0, _stringLiteral660F6D5965E09393894520A3BBDDAE9F5DEF81D2, L_4, /*hidden argument*/AndroidJavaObject_CallStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE6C2E19D140FDCD9C8736017AAA61A16904ADD63_RuntimeMethod_var);
		V_0 = L_8;
		// if( result == Permission.Denied && (Permission) PlayerPrefs.GetInt( "NativeGalleryPermission", (int) Permission.ShouldAsk ) == Permission.ShouldAsk )
		int32_t L_9 = V_0;
		if (L_9)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_10;
		L_10 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral519276B36C92AA64006C0D21451C2C34FE5C1148, 2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_003a;
		}
	}
	{
		// result = Permission.ShouldAsk;
		V_0 = 2;
	}

IL_003a:
	{
		// return result;
		int32_t L_11 = V_0;
		return L_11;
	}
}
// NativeGallery/Permission NativeGallery::RequestPermission(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_RequestPermission_m50048F915B1B5F7EDCB6CDD3E7A4DE83559BA8F1 (bool ___readPermissionOnly0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGPermissionCallbackAndroid_t2F17C0D4C562F317A9B9E2E804C1C8C4C81CDF4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0443845674FDE6986E4ECC72A8C096004DF51FC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral519276B36C92AA64006C0D21451C2C34FE5C1148);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	NGPermissionCallbackAndroid_t2F17C0D4C562F317A9B9E2E804C1C8C4C81CDF4A * V_3 = NULL;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// object threadLock = new object();
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// lock( threadLock )
		RuntimeObject * L_1 = V_0;
		V_1 = L_1;
		V_2 = (bool)0;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_2 = V_1;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_2, (bool*)(&V_2), /*hidden argument*/NULL);
			// NGPermissionCallbackAndroid nativeCallback = new NGPermissionCallbackAndroid( threadLock );
			RuntimeObject * L_3 = V_0;
			NGPermissionCallbackAndroid_t2F17C0D4C562F317A9B9E2E804C1C8C4C81CDF4A * L_4 = (NGPermissionCallbackAndroid_t2F17C0D4C562F317A9B9E2E804C1C8C4C81CDF4A *)il2cpp_codegen_object_new(NGPermissionCallbackAndroid_t2F17C0D4C562F317A9B9E2E804C1C8C4C81CDF4A_il2cpp_TypeInfo_var);
			NGPermissionCallbackAndroid__ctor_mC8D10C3772B425957CA4DF08E0E874876C48AEF0(L_4, L_3, /*hidden argument*/NULL);
			V_3 = L_4;
			// AJC.CallStatic( "RequestPermission", Context, nativeCallback, readPermissionOnly, PlayerPrefs.GetInt( "NativeGalleryPermission", (int) Permission.ShouldAsk ) );
			IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
			AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_5;
			L_5 = NativeGallery_get_AJC_m4307BF76B4FCEA5D1192219F6CCD30AC7BDD65EE(/*hidden argument*/NULL);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_6;
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_8;
			L_8 = NativeGallery_get_Context_mC358BF371761A22F9AEA0949C94D7198394CC562(/*hidden argument*/NULL);
			NullCheck(L_7);
			ArrayElementTypeCheck (L_7, L_8);
			(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_7;
			NGPermissionCallbackAndroid_t2F17C0D4C562F317A9B9E2E804C1C8C4C81CDF4A * L_10 = V_3;
			NullCheck(L_9);
			ArrayElementTypeCheck (L_9, L_10);
			(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_9;
			bool L_12 = ___readPermissionOnly0;
			bool L_13 = L_12;
			RuntimeObject * L_14 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_13);
			NullCheck(L_11);
			ArrayElementTypeCheck (L_11, L_14);
			(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_14);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_11;
			int32_t L_16;
			L_16 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral519276B36C92AA64006C0D21451C2C34FE5C1148, 2, /*hidden argument*/NULL);
			int32_t L_17 = L_16;
			RuntimeObject * L_18 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_17);
			NullCheck(L_15);
			ArrayElementTypeCheck (L_15, L_18);
			(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_18);
			NullCheck(L_5);
			AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_5, _stringLiteral0443845674FDE6986E4ECC72A8C096004DF51FC6, L_15, /*hidden argument*/NULL);
			// if( nativeCallback.Result == -1 )
			NGPermissionCallbackAndroid_t2F17C0D4C562F317A9B9E2E804C1C8C4C81CDF4A * L_19 = V_3;
			NullCheck(L_19);
			int32_t L_20;
			L_20 = NGPermissionCallbackAndroid_get_Result_mE352376B3CA1BD57D1A5ABDB349FE269B42DEA30_inline(L_19, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_20) == ((uint32_t)(-1)))))
			{
				goto IL_0066;
			}
		}

IL_005f:
		{
			// System.Threading.Monitor.Wait( threadLock );
			RuntimeObject * L_21 = V_0;
			bool L_22;
			L_22 = Monitor_Wait_m7C55D48467F2FB3C2344DAA18BA01266AF24B4F0(L_21, /*hidden argument*/NULL);
		}

IL_0066:
		{
			// if( (Permission) nativeCallback.Result != Permission.ShouldAsk && PlayerPrefs.GetInt( "NativeGalleryPermission", -1 ) != nativeCallback.Result )
			NGPermissionCallbackAndroid_t2F17C0D4C562F317A9B9E2E804C1C8C4C81CDF4A * L_23 = V_3;
			NullCheck(L_23);
			int32_t L_24;
			L_24 = NGPermissionCallbackAndroid_get_Result_mE352376B3CA1BD57D1A5ABDB349FE269B42DEA30_inline(L_23, /*hidden argument*/NULL);
			if ((((int32_t)L_24) == ((int32_t)2)))
			{
				goto IL_0097;
			}
		}

IL_006f:
		{
			int32_t L_25;
			L_25 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral519276B36C92AA64006C0D21451C2C34FE5C1148, (-1), /*hidden argument*/NULL);
			NGPermissionCallbackAndroid_t2F17C0D4C562F317A9B9E2E804C1C8C4C81CDF4A * L_26 = V_3;
			NullCheck(L_26);
			int32_t L_27;
			L_27 = NGPermissionCallbackAndroid_get_Result_mE352376B3CA1BD57D1A5ABDB349FE269B42DEA30_inline(L_26, /*hidden argument*/NULL);
			if ((((int32_t)L_25) == ((int32_t)L_27)))
			{
				goto IL_0097;
			}
		}

IL_0082:
		{
			// PlayerPrefs.SetInt( "NativeGalleryPermission", nativeCallback.Result );
			NGPermissionCallbackAndroid_t2F17C0D4C562F317A9B9E2E804C1C8C4C81CDF4A * L_28 = V_3;
			NullCheck(L_28);
			int32_t L_29;
			L_29 = NGPermissionCallbackAndroid_get_Result_mE352376B3CA1BD57D1A5ABDB349FE269B42DEA30_inline(L_28, /*hidden argument*/NULL);
			PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral519276B36C92AA64006C0D21451C2C34FE5C1148, L_29, /*hidden argument*/NULL);
			// PlayerPrefs.Save();
			PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		}

IL_0097:
		{
			// return (Permission) nativeCallback.Result;
			NGPermissionCallbackAndroid_t2F17C0D4C562F317A9B9E2E804C1C8C4C81CDF4A * L_30 = V_3;
			NullCheck(L_30);
			int32_t L_31;
			L_31 = NGPermissionCallbackAndroid_get_Result_mE352376B3CA1BD57D1A5ABDB349FE269B42DEA30_inline(L_30, /*hidden argument*/NULL);
			V_4 = L_31;
			IL2CPP_LEAVE(0xAB, FINALLY_00a1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a1;
	}

FINALLY_00a1:
	{ // begin finally (depth: 1)
		{
			bool L_32 = V_2;
			if (!L_32)
			{
				goto IL_00aa;
			}
		}

IL_00a4:
		{
			RuntimeObject * L_33 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_33, /*hidden argument*/NULL);
		}

IL_00aa:
		{
			IL2CPP_END_FINALLY(161)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(161)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xAB, IL_00ab)
	}

IL_00ab:
	{
		// }
		int32_t L_34 = V_4;
		return L_34;
	}
}
// System.Boolean NativeGallery::CanOpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanOpenSettings_mC870229E9DE701FC7CA10EA968F4B925CDC6027F (const RuntimeMethod* method)
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Void NativeGallery::OpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_OpenSettings_m5CFBBF96B4100848BDBADF722E5883F9D221AEDC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A4D2503591255173AC6769BB8A784B9CC5B5BC6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AJC.CallStatic( "OpenSettings", Context );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0;
		L_0 = NativeGallery_get_AJC_m4307BF76B4FCEA5D1192219F6CCD30AC7BDD65EE(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3;
		L_3 = NativeGallery_get_Context_mC358BF371761A22F9AEA0949C94D7198394CC562(/*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral8A4D2503591255173AC6769BB8A784B9CC5B5BC6, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// NativeGallery/Permission NativeGallery::SaveImageToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveImageToGallery_m1854BDA6D74818B37783A0FC5EFE7154B18A11F7 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mediaBytes0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SaveToGallery( mediaBytes, album, filename, MediaType.Image, callback );
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___mediaBytes0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filename2;
		MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * L_3 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_mDEE93746747317233B168AEFCB9238136AC5777C(L_0, L_1, L_2, 0, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveImageToGallery(System.String,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveImageToGallery_m09061C20A16440BBC00AF77865EA923BF13C2F7F (String_t* ___existingMediaPath0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SaveToGallery( existingMediaPath, album, filename, MediaType.Image, callback );
		String_t* L_0 = ___existingMediaPath0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filename2;
		MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * L_3 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_m5146791056EE9A7EF4943C910D29BE8204BF0DCF(L_0, L_1, L_2, 0, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveImageToGallery(UnityEngine.Texture2D,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveImageToGallery_mA9EAB26EC648656A0A4C9C91B4F13B6DFE2C0B15 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___image0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( image == null )
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___image0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentException( "Parameter 'image' is null!" );
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15332598528DB5F9A0B9473BE7DCE0BB1F8DCAA7)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveImageToGallery_mA9EAB26EC648656A0A4C9C91B4F13B6DFE2C0B15_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if( filename.EndsWith( ".jpeg" ) || filename.EndsWith( ".jpg" ) )
		String_t* L_3 = ___filename2;
		NullCheck(L_3);
		bool L_4;
		L_4 = String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE(L_3, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_5 = ___filename2;
		NullCheck(L_5);
		bool L_6;
		L_6 = String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE(L_5, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003f;
		}
	}

IL_002e:
	{
		// return SaveToGallery( GetTextureBytes( image, true ), album, filename, MediaType.Image, callback );
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = ___image0;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = NativeGallery_GetTextureBytes_m685923E43144B1B776841913E3C879E78A159E00(L_7, (bool)1, /*hidden argument*/NULL);
		String_t* L_9 = ___album1;
		String_t* L_10 = ___filename2;
		MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * L_11 = ___callback3;
		int32_t L_12;
		L_12 = NativeGallery_SaveToGallery_mDEE93746747317233B168AEFCB9238136AC5777C(L_8, L_9, L_10, 0, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_003f:
	{
		// else if( filename.EndsWith( ".png" ) )
		String_t* L_13 = ___filename2;
		NullCheck(L_13);
		bool L_14;
		L_14 = String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE(L_13, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_005d;
		}
	}
	{
		// return SaveToGallery( GetTextureBytes( image, false ), album, filename, MediaType.Image, callback );
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_15 = ___image0;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16;
		L_16 = NativeGallery_GetTextureBytes_m685923E43144B1B776841913E3C879E78A159E00(L_15, (bool)0, /*hidden argument*/NULL);
		String_t* L_17 = ___album1;
		String_t* L_18 = ___filename2;
		MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * L_19 = ___callback3;
		int32_t L_20;
		L_20 = NativeGallery_SaveToGallery_mDEE93746747317233B168AEFCB9238136AC5777C(L_16, L_17, L_18, 0, L_19, /*hidden argument*/NULL);
		return L_20;
	}

IL_005d:
	{
		// return SaveToGallery( GetTextureBytes( image, false ), album, filename + ".png", MediaType.Image, callback );
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_21 = ___image0;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22;
		L_22 = NativeGallery_GetTextureBytes_m685923E43144B1B776841913E3C879E78A159E00(L_21, (bool)0, /*hidden argument*/NULL);
		String_t* L_23 = ___album1;
		String_t* L_24 = ___filename2;
		String_t* L_25;
		L_25 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_24, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, /*hidden argument*/NULL);
		MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * L_26 = ___callback3;
		int32_t L_27;
		L_27 = NativeGallery_SaveToGallery_mDEE93746747317233B168AEFCB9238136AC5777C(L_22, L_23, L_25, 0, L_26, /*hidden argument*/NULL);
		return L_27;
	}
}
// NativeGallery/Permission NativeGallery::SaveVideoToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveVideoToGallery_m926473B0A6E83134D3150A02201BC4FDED6CE6CB (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mediaBytes0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SaveToGallery( mediaBytes, album, filename, MediaType.Video, callback );
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___mediaBytes0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filename2;
		MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * L_3 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_mDEE93746747317233B168AEFCB9238136AC5777C(L_0, L_1, L_2, 1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveVideoToGallery(System.String,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveVideoToGallery_mBB74ABCACE4415325C3E19BD071DE26048871AC7 (String_t* ___existingMediaPath0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SaveToGallery( existingMediaPath, album, filename, MediaType.Video, callback );
		String_t* L_0 = ___existingMediaPath0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filename2;
		MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * L_3 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_m5146791056EE9A7EF4943C910D29BE8204BF0DCF(L_0, L_1, L_2, 1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveAudioToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveAudioToGallery_mC6F9109673DCF15666858D294D113BC37612FC7B (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mediaBytes0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SaveToGallery( mediaBytes, album, filename, MediaType.Audio, callback );
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___mediaBytes0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filename2;
		MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * L_3 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_mDEE93746747317233B168AEFCB9238136AC5777C(L_0, L_1, L_2, 2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveAudioToGallery(System.String,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveAudioToGallery_mC8D0A974F0343AC94A2CE263DBCD8834C0B3DAE1 (String_t* ___existingMediaPath0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SaveToGallery( existingMediaPath, album, filename, MediaType.Audio, callback );
		String_t* L_0 = ___existingMediaPath0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filename2;
		MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * L_3 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_m5146791056EE9A7EF4943C910D29BE8204BF0DCF(L_0, L_1, L_2, 2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean NativeGallery::CanSelectMultipleFilesFromGallery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanSelectMultipleFilesFromGallery_mDDC4F8A801165FDB60FE11AFB18BAC81848C012D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC996D117D3819CA770138BE5B4BD64D4BB591694);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AJC.CallStatic<bool>( "CanSelectMultipleMedia" );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0;
		L_0 = NativeGallery_get_AJC_m4307BF76B4FCEA5D1192219F6CCD30AC7BDD65EE(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB(L_0, _stringLiteralC996D117D3819CA770138BE5B4BD64D4BB591694, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_RuntimeMethod_var);
		return L_2;
	}
}
// NativeGallery/Permission NativeGallery::GetImageFromGallery(NativeGallery/MediaPickCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetImageFromGallery_m88285EEC398873AA26EE11422DE1DCCD35D19027 (MediaPickCallback_t9271CE7DC6219D21E74BAC60E5A517A91E2BF4D7 * ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMediaFromGallery( callback, MediaType.Image, mime, title );
		MediaPickCallback_t9271CE7DC6219D21E74BAC60E5A517A91E2BF4D7 * L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = NativeGallery_GetMediaFromGallery_m0D534A4D397DEB9A558322FE6C15DCE0329647F5(L_0, 0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetVideoFromGallery(NativeGallery/MediaPickCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetVideoFromGallery_mF747A8329A1D9D227E6A216C4E87696C21846DE1 (MediaPickCallback_t9271CE7DC6219D21E74BAC60E5A517A91E2BF4D7 * ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMediaFromGallery( callback, MediaType.Video, mime, title );
		MediaPickCallback_t9271CE7DC6219D21E74BAC60E5A517A91E2BF4D7 * L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = NativeGallery_GetMediaFromGallery_m0D534A4D397DEB9A558322FE6C15DCE0329647F5(L_0, 1, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetAudioFromGallery(NativeGallery/MediaPickCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetAudioFromGallery_m722E49AAF484423DA6B1B9C421F452724BD27081 (MediaPickCallback_t9271CE7DC6219D21E74BAC60E5A517A91E2BF4D7 * ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMediaFromGallery( callback, MediaType.Audio, mime, title );
		MediaPickCallback_t9271CE7DC6219D21E74BAC60E5A517A91E2BF4D7 * L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = NativeGallery_GetMediaFromGallery_m0D534A4D397DEB9A558322FE6C15DCE0329647F5(L_0, 2, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetImagesFromGallery(NativeGallery/MediaPickMultipleCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetImagesFromGallery_mFD310667DE18263AF16161140A44D794C0971057 (MediaPickMultipleCallback_t48F09C9BE0D421F02BD9B8D9D5B455382F94B952 * ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMultipleMediaFromGallery( callback, MediaType.Image, mime, title );
		MediaPickMultipleCallback_t48F09C9BE0D421F02BD9B8D9D5B455382F94B952 * L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = NativeGallery_GetMultipleMediaFromGallery_m3F2D6AFE208A875BA46051972B0F751445E455D6(L_0, 0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetVideosFromGallery(NativeGallery/MediaPickMultipleCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetVideosFromGallery_mABEF1891642369237C4FC020A47AB6BC1835B6A2 (MediaPickMultipleCallback_t48F09C9BE0D421F02BD9B8D9D5B455382F94B952 * ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMultipleMediaFromGallery( callback, MediaType.Video, mime, title );
		MediaPickMultipleCallback_t48F09C9BE0D421F02BD9B8D9D5B455382F94B952 * L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = NativeGallery_GetMultipleMediaFromGallery_m3F2D6AFE208A875BA46051972B0F751445E455D6(L_0, 1, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetAudiosFromGallery(NativeGallery/MediaPickMultipleCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetAudiosFromGallery_mF02197FEA79379AC4FECCC300D19BF4AC686D0E2 (MediaPickMultipleCallback_t48F09C9BE0D421F02BD9B8D9D5B455382F94B952 * ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMultipleMediaFromGallery( callback, MediaType.Audio, mime, title );
		MediaPickMultipleCallback_t48F09C9BE0D421F02BD9B8D9D5B455382F94B952 * L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = NativeGallery_GetMultipleMediaFromGallery_m3F2D6AFE208A875BA46051972B0F751445E455D6(L_0, 2, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean NativeGallery::IsMediaPickerBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_IsMediaPickerBusy_m1ECF19CC1C2CC61412415367CD6A4A0CCB2D49B1 (const RuntimeMethod* method)
{
	{
		// return false;
		return (bool)0;
	}
}
// NativeGallery/Permission NativeGallery::SaveToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_mDEE93746747317233B168AEFCB9238136AC5777C (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mediaBytes0, String_t* ___album1, String_t* ___filename2, int32_t ___mediaType3, MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * ___callback4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B13_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// Permission result = RequestPermission( false );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = NativeGallery_RequestPermission_m50048F915B1B5F7EDCB6CDD3E7A4DE83559BA8F1((bool)0, /*hidden argument*/NULL);
		// if( result == Permission.Granted )
		int32_t L_1 = L_0;
		G_B1_0 = L_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			G_B13_0 = L_1;
			goto IL_0075;
		}
	}
	{
		// if( mediaBytes == null || mediaBytes.Length == 0 )
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___mediaBytes0;
		G_B2_0 = G_B1_0;
		if (!L_2)
		{
			G_B3_0 = G_B1_0;
			goto IL_0011;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___mediaBytes0;
		NullCheck(L_3);
		G_B3_0 = G_B2_0;
		if ((((RuntimeArray*)L_3)->max_length))
		{
			G_B4_0 = G_B2_0;
			goto IL_001c;
		}
	}

IL_0011:
	{
		// throw new ArgumentException( "Parameter 'mediaBytes' is null or empty!" );
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7BB4B5568C63748C896DED09B403F2FC4F274E91)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_mDEE93746747317233B168AEFCB9238136AC5777C_RuntimeMethod_var)));
	}

IL_001c:
	{
		// if( album == null || album.Length == 0 )
		String_t* L_5 = ___album1;
		G_B5_0 = G_B4_0;
		if (!L_5)
		{
			G_B6_0 = G_B4_0;
			goto IL_0027;
		}
	}
	{
		String_t* L_6 = ___album1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_6, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
		if (L_7)
		{
			G_B7_0 = G_B5_0;
			goto IL_0032;
		}
	}

IL_0027:
	{
		// throw new ArgumentException( "Parameter 'album' is null or empty!" );
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30F8B1D027E92AF30A25606539C4A0E635BF0BBB)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_mDEE93746747317233B168AEFCB9238136AC5777C_RuntimeMethod_var)));
	}

IL_0032:
	{
		// if( filename == null || filename.Length == 0 )
		String_t* L_9 = ___filename2;
		G_B8_0 = G_B7_0;
		if (!L_9)
		{
			G_B9_0 = G_B7_0;
			goto IL_003d;
		}
	}
	{
		String_t* L_10 = ___filename2;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_10, /*hidden argument*/NULL);
		G_B9_0 = G_B8_0;
		if (L_11)
		{
			G_B10_0 = G_B8_0;
			goto IL_0048;
		}
	}

IL_003d:
	{
		// throw new ArgumentException( "Parameter 'filename' is null or empty!" );
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_12 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30F7CAA3903ABC311FB9B0881B8937BE76A5526D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_mDEE93746747317233B168AEFCB9238136AC5777C_RuntimeMethod_var)));
	}

IL_0048:
	{
		// if( string.IsNullOrEmpty( Path.GetExtension( filename ) ) )
		String_t* L_13 = ___filename2;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_14;
		L_14 = Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD(L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_14, /*hidden argument*/NULL);
		G_B11_0 = G_B10_0;
		if (!L_15)
		{
			G_B12_0 = G_B10_0;
			goto IL_005f;
		}
	}
	{
		// Debug.LogWarning( "'filename' doesn't have an extension, this might result in unexpected behaviour!" );
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7, /*hidden argument*/NULL);
		G_B12_0 = G_B11_0;
	}

IL_005f:
	{
		// string path = GetTemporarySavePath( filename );
		String_t* L_16 = ___filename2;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		String_t* L_17;
		L_17 = NativeGallery_GetTemporarySavePath_m7F42CE60368F11FF35422DB8BC48C293B77A7F60(L_16, /*hidden argument*/NULL);
		// File.WriteAllBytes( path, mediaBytes );
		String_t* L_18 = L_17;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = ___mediaBytes0;
		File_WriteAllBytes_m1E88860F73A6A2150FAB97D9BF3F44596F06036F(L_18, L_19, /*hidden argument*/NULL);
		// SaveToGalleryInternal( path, album, mediaType, callback );
		String_t* L_20 = ___album1;
		int32_t L_21 = ___mediaType3;
		MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * L_22 = ___callback4;
		NativeGallery_SaveToGalleryInternal_m43CC2663F52F40D70185E0D0309EF3F58EED369B(L_18, L_20, L_21, L_22, /*hidden argument*/NULL);
		G_B13_0 = G_B12_0;
	}

IL_0075:
	{
		// return result;
		return G_B13_0;
	}
}
// NativeGallery/Permission NativeGallery::SaveToGallery(System.String,System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_m5146791056EE9A7EF4943C910D29BE8204BF0DCF (String_t* ___existingMediaPath0, String_t* ___album1, String_t* ___filename2, int32_t ___mediaType3, MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * ___callback4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t G_B14_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// Permission result = RequestPermission( false );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = NativeGallery_RequestPermission_m50048F915B1B5F7EDCB6CDD3E7A4DE83559BA8F1((bool)0, /*hidden argument*/NULL);
		// if( result == Permission.Granted )
		int32_t L_1 = L_0;
		G_B1_0 = L_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			G_B14_0 = L_1;
			goto IL_009c;
		}
	}
	{
		// if( !File.Exists( existingMediaPath ) )
		String_t* L_2 = ___existingMediaPath0;
		bool L_3;
		L_3 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_2, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0026;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + existingMediaPath );
		String_t* L_4 = ___existingMediaPath0;
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_4, /*hidden argument*/NULL);
		FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8 * L_6 = (FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8_il2cpp_TypeInfo_var)));
		FileNotFoundException__ctor_mA3A41003FE6056B7BF44A6577DF4BBB30BFD32D5(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_m5146791056EE9A7EF4943C910D29BE8204BF0DCF_RuntimeMethod_var)));
	}

IL_0026:
	{
		// if( album == null || album.Length == 0 )
		String_t* L_7 = ___album1;
		G_B4_0 = G_B3_0;
		if (!L_7)
		{
			G_B5_0 = G_B3_0;
			goto IL_0031;
		}
	}
	{
		String_t* L_8 = ___album1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_8, /*hidden argument*/NULL);
		G_B5_0 = G_B4_0;
		if (L_9)
		{
			G_B6_0 = G_B4_0;
			goto IL_003c;
		}
	}

IL_0031:
	{
		// throw new ArgumentException( "Parameter 'album' is null or empty!" );
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_10 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30F8B1D027E92AF30A25606539C4A0E635BF0BBB)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_m5146791056EE9A7EF4943C910D29BE8204BF0DCF_RuntimeMethod_var)));
	}

IL_003c:
	{
		// if( filename == null || filename.Length == 0 )
		String_t* L_11 = ___filename2;
		G_B7_0 = G_B6_0;
		if (!L_11)
		{
			G_B8_0 = G_B6_0;
			goto IL_0047;
		}
	}
	{
		String_t* L_12 = ___filename2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_12, /*hidden argument*/NULL);
		G_B8_0 = G_B7_0;
		if (L_13)
		{
			G_B9_0 = G_B7_0;
			goto IL_0052;
		}
	}

IL_0047:
	{
		// throw new ArgumentException( "Parameter 'filename' is null or empty!" );
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_14 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30F7CAA3903ABC311FB9B0881B8937BE76A5526D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_m5146791056EE9A7EF4943C910D29BE8204BF0DCF_RuntimeMethod_var)));
	}

IL_0052:
	{
		// if( string.IsNullOrEmpty( Path.GetExtension( filename ) ) )
		String_t* L_15 = ___filename2;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_16;
		L_16 = Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD(L_15, /*hidden argument*/NULL);
		bool L_17;
		L_17 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_16, /*hidden argument*/NULL);
		G_B10_0 = G_B9_0;
		if (!L_17)
		{
			G_B13_0 = G_B9_0;
			goto IL_0083;
		}
	}
	{
		// string originalExtension = Path.GetExtension( existingMediaPath );
		String_t* L_18 = ___existingMediaPath0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_19;
		L_19 = Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD(L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		// if( string.IsNullOrEmpty( originalExtension ) )
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_20, /*hidden argument*/NULL);
		G_B11_0 = G_B10_0;
		if (!L_21)
		{
			G_B12_0 = G_B10_0;
			goto IL_007a;
		}
	}
	{
		// Debug.LogWarning( "'filename' doesn't have an extension, this might result in unexpected behaviour!" );
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7, /*hidden argument*/NULL);
		G_B13_0 = G_B11_0;
		goto IL_0083;
	}

IL_007a:
	{
		// filename += originalExtension;
		String_t* L_22 = ___filename2;
		String_t* L_23 = V_1;
		String_t* L_24;
		L_24 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_22, L_23, /*hidden argument*/NULL);
		___filename2 = L_24;
		G_B13_0 = G_B12_0;
	}

IL_0083:
	{
		// string path = GetTemporarySavePath( filename );
		String_t* L_25 = ___filename2;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		String_t* L_26;
		L_26 = NativeGallery_GetTemporarySavePath_m7F42CE60368F11FF35422DB8BC48C293B77A7F60(L_25, /*hidden argument*/NULL);
		V_0 = L_26;
		// File.Copy( existingMediaPath, path, true );
		String_t* L_27 = ___existingMediaPath0;
		String_t* L_28 = V_0;
		File_Copy_m1CB9B28EA63AA6D9E36B50AABABE81CA8C22C794(L_27, L_28, (bool)1, /*hidden argument*/NULL);
		// SaveToGalleryInternal( path, album, mediaType, callback );
		String_t* L_29 = V_0;
		String_t* L_30 = ___album1;
		int32_t L_31 = ___mediaType3;
		MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * L_32 = ___callback4;
		NativeGallery_SaveToGalleryInternal_m43CC2663F52F40D70185E0D0309EF3F58EED369B(L_29, L_30, L_31, L_32, /*hidden argument*/NULL);
		G_B14_0 = G_B13_0;
	}

IL_009c:
	{
		// return result;
		return G_B14_0;
	}
}
// System.Void NativeGallery::SaveToGalleryInternal(System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_SaveToGalleryInternal_m43CC2663F52F40D70185E0D0309EF3F58EED369B (String_t* ___path0, String_t* ___album1, int32_t ___mediaType2, MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98C4991DBD0370C554791D1BED854533606B6973);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AJC.CallStatic( "SaveMedia", Context, (int) mediaType, path, album );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0;
		L_0 = NativeGallery_get_AJC_m4307BF76B4FCEA5D1192219F6CCD30AC7BDD65EE(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3;
		L_3 = NativeGallery_get_Context_mC358BF371761A22F9AEA0949C94D7198394CC562(/*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		int32_t L_5 = ___mediaType2;
		int32_t L_6 = ((int32_t)L_5);
		RuntimeObject * L_7 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_4;
		String_t* L_9 = ___path0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_8;
		String_t* L_11 = ___album1;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_11);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral98C4991DBD0370C554791D1BED854533606B6973, L_10, /*hidden argument*/NULL);
		// File.Delete( path );
		String_t* L_12 = ___path0;
		File_Delete_m82FE53535A3911380F7E4C8AD44D77FAB330FD77(L_12, /*hidden argument*/NULL);
		// if( callback != null )
		MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * L_13 = ___callback3;
		if (!L_13)
		{
			goto IL_003e;
		}
	}
	{
		// callback( null );
		MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * L_14 = ___callback3;
		NullCheck(L_14);
		MediaSaveCallback_Invoke_m9ED3F44F7DBF2B6CDF929AE4B0558AFF97CA614E(L_14, (String_t*)NULL, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.String NativeGallery::GetTemporarySavePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_GetTemporarySavePath_m7F42CE60368F11FF35422DB8BC48C293B77A7F60 (String_t* ___filename0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFA0E830C16EC57623615165EA8FBC2817BACCCF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string saveDir = Path.Combine( Application.persistentDataPath, "NGallery" );
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_0, _stringLiteralCFA0E830C16EC57623615165EA8FBC2817BACCCF, /*hidden argument*/NULL);
		// Directory.CreateDirectory( saveDir );
		String_t* L_2 = L_1;
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_3;
		L_3 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_2, /*hidden argument*/NULL);
		// return Path.Combine( saveDir, filename );
		String_t* L_4 = ___filename0;
		String_t* L_5;
		L_5 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// NativeGallery/Permission NativeGallery::GetMediaFromGallery(NativeGallery/MediaPickCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMediaFromGallery_m0D534A4D397DEB9A558322FE6C15DCE0329647F5 (MediaPickCallback_t9271CE7DC6219D21E74BAC60E5A517A91E2BF4D7 * ___callback0, int32_t ___mediaType1, String_t* ___mime2, String_t* ___title3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79107FD6C984A88C27C9EA8214F1DDC00A8F6C36);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// Permission result = RequestPermission( true );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = NativeGallery_RequestPermission_m50048F915B1B5F7EDCB6CDD3E7A4DE83559BA8F1((bool)1, /*hidden argument*/NULL);
		V_0 = L_0;
		// if( result == Permission.Granted && !IsMediaPickerBusy() )
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0074;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = NativeGallery_IsMediaPickerBusy_m1ECF19CC1C2CC61412415367CD6A4A0CCB2D49B1(/*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0074;
		}
	}
	{
		// if( mediaType == MediaType.Image )
		int32_t L_3 = ___mediaType1;
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		// savePath = SelectedImagePath;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = NativeGallery_get_SelectedImagePath_m5B63C2B54E2FB35402CF05A4388D8CF3EAA33187(/*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_002f;
	}

IL_001d:
	{
		// else if( mediaType == MediaType.Video )
		int32_t L_5 = ___mediaType1;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0029;
		}
	}
	{
		// savePath = SelectedVideoPath;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = NativeGallery_get_SelectedVideoPath_m1BA11E0F23FF6E51BB4904024B7ABA27FC52F8D3(/*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_002f;
	}

IL_0029:
	{
		// savePath = SelectedAudioPath;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = NativeGallery_get_SelectedAudioPath_mA0D29026393823944B2E7BD6678015A5EFDC5477(/*hidden argument*/NULL);
		V_1 = L_7;
	}

IL_002f:
	{
		// AJC.CallStatic( "PickMedia", Context, new NGMediaReceiveCallbackAndroid( callback, null ), (int) mediaType, false, savePath, mime, title );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_8;
		L_8 = NativeGallery_get_AJC_m4307BF76B4FCEA5D1192219F6CCD30AC7BDD65EE(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_9;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_11;
		L_11 = NativeGallery_get_Context_mC358BF371761A22F9AEA0949C94D7198394CC562(/*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_10;
		MediaPickCallback_t9271CE7DC6219D21E74BAC60E5A517A91E2BF4D7 * L_13 = ___callback0;
		NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05 * L_14 = (NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05 *)il2cpp_codegen_object_new(NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05_il2cpp_TypeInfo_var);
		NGMediaReceiveCallbackAndroid__ctor_m7DA10E449CF785C4B5DE7CAF5A67352C068F3582(L_14, L_13, (MediaPickMultipleCallback_t48F09C9BE0D421F02BD9B8D9D5B455382F94B952 *)NULL, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_14);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_12;
		int32_t L_16 = ___mediaType1;
		int32_t L_17 = ((int32_t)L_16);
		RuntimeObject * L_18 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_18);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = L_15;
		bool L_20 = ((bool)0);
		RuntimeObject * L_21 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_21);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = L_19;
		String_t* L_23 = V_1;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_23);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = L_22;
		String_t* L_25 = ___mime2;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_25);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = L_24;
		String_t* L_27 = ___title3;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_27);
		NullCheck(L_8);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_8, _stringLiteral79107FD6C984A88C27C9EA8214F1DDC00A8F6C36, L_26, /*hidden argument*/NULL);
	}

IL_0074:
	{
		// return result;
		int32_t L_28 = V_0;
		return L_28;
	}
}
// NativeGallery/Permission NativeGallery::GetMultipleMediaFromGallery(NativeGallery/MediaPickMultipleCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMultipleMediaFromGallery_m3F2D6AFE208A875BA46051972B0F751445E455D6 (MediaPickMultipleCallback_t48F09C9BE0D421F02BD9B8D9D5B455382F94B952 * ___callback0, int32_t ___mediaType1, String_t* ___mime2, String_t* ___title3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79107FD6C984A88C27C9EA8214F1DDC00A8F6C36);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// Permission result = RequestPermission( true );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = NativeGallery_RequestPermission_m50048F915B1B5F7EDCB6CDD3E7A4DE83559BA8F1((bool)1, /*hidden argument*/NULL);
		V_0 = L_0;
		// if( result == Permission.Granted && !IsMediaPickerBusy() )
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0087;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = NativeGallery_IsMediaPickerBusy_m1ECF19CC1C2CC61412415367CD6A4A0CCB2D49B1(/*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0087;
		}
	}
	{
		// if( CanSelectMultipleFilesFromGallery() )
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = NativeGallery_CanSelectMultipleFilesFromGallery_mDDC4F8A801165FDB60FE11AFB18BAC81848C012D(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_007d;
		}
	}
	{
		// if( mediaType == MediaType.Image )
		int32_t L_4 = ___mediaType1;
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// savePath = SelectedImagePath;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = NativeGallery_get_SelectedImagePath_m5B63C2B54E2FB35402CF05A4388D8CF3EAA33187(/*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0036;
	}

IL_0024:
	{
		// else if( mediaType == MediaType.Video )
		int32_t L_6 = ___mediaType1;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0030;
		}
	}
	{
		// savePath = SelectedVideoPath;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = NativeGallery_get_SelectedVideoPath_m1BA11E0F23FF6E51BB4904024B7ABA27FC52F8D3(/*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_0036;
	}

IL_0030:
	{
		// savePath = SelectedAudioPath;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		String_t* L_8;
		L_8 = NativeGallery_get_SelectedAudioPath_mA0D29026393823944B2E7BD6678015A5EFDC5477(/*hidden argument*/NULL);
		V_1 = L_8;
	}

IL_0036:
	{
		// AJC.CallStatic( "PickMedia", Context, new NGMediaReceiveCallbackAndroid( null, callback ), (int) mediaType, true, savePath, mime, title );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_9;
		L_9 = NativeGallery_get_AJC_m4307BF76B4FCEA5D1192219F6CCD30AC7BDD65EE(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_10;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_12;
		L_12 = NativeGallery_get_Context_mC358BF371761A22F9AEA0949C94D7198394CC562(/*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_11;
		MediaPickMultipleCallback_t48F09C9BE0D421F02BD9B8D9D5B455382F94B952 * L_14 = ___callback0;
		NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05 * L_15 = (NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05 *)il2cpp_codegen_object_new(NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05_il2cpp_TypeInfo_var);
		NGMediaReceiveCallbackAndroid__ctor_m7DA10E449CF785C4B5DE7CAF5A67352C068F3582(L_15, (MediaPickCallback_t9271CE7DC6219D21E74BAC60E5A517A91E2BF4D7 *)NULL, L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_15);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_13;
		int32_t L_17 = ___mediaType1;
		int32_t L_18 = ((int32_t)L_17);
		RuntimeObject * L_19 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_19);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = L_16;
		bool L_21 = ((bool)1);
		RuntimeObject * L_22 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_22);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = L_20;
		String_t* L_24 = V_1;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_24);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = L_23;
		String_t* L_26 = ___mime2;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_26);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = L_25;
		String_t* L_28 = ___title3;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_28);
		NullCheck(L_9);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_9, _stringLiteral79107FD6C984A88C27C9EA8214F1DDC00A8F6C36, L_27, /*hidden argument*/NULL);
		// }
		goto IL_0087;
	}

IL_007d:
	{
		// else if( callback != null )
		MediaPickMultipleCallback_t48F09C9BE0D421F02BD9B8D9D5B455382F94B952 * L_29 = ___callback0;
		if (!L_29)
		{
			goto IL_0087;
		}
	}
	{
		// callback( null );
		MediaPickMultipleCallback_t48F09C9BE0D421F02BD9B8D9D5B455382F94B952 * L_30 = ___callback0;
		NullCheck(L_30);
		MediaPickMultipleCallback_Invoke_m48CF72A34CD7D55174ECEDEECD0183C9A07BFC11(L_30, (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL, /*hidden argument*/NULL);
	}

IL_0087:
	{
		// return result;
		int32_t L_31 = V_0;
		return L_31;
	}
}
// System.Byte[] NativeGallery::GetTextureBytes(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* NativeGallery_GetTextureBytes_m685923E43144B1B776841913E3C879E78A159E00 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, bool ___isJpeg1, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B3_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// return isJpeg ? texture.EncodeToJPG( 100 ) : texture.EncodeToPNG();
			bool L_0 = ___isJpeg1;
			if (L_0)
			{
				goto IL_000b;
			}
		}

IL_0003:
		{
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_1 = ___texture0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
			L_2 = ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED(L_1, /*hidden argument*/NULL);
			G_B3_0 = L_2;
			goto IL_0013;
		}

IL_000b:
		{
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3 = ___texture0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
			L_4 = ImageConversion_EncodeToJPG_mE32249F45E643405652057EA8A35112AB4721641(L_3, ((int32_t)100), /*hidden argument*/NULL);
			G_B3_0 = L_4;
		}

IL_0013:
		{
			V_0 = G_B3_0;
			goto IL_002c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0021;
		}
		throw e;
	}

CATCH_0016:
	{ // begin catch(UnityEngine.UnityException)
		// catch( UnityException )
		// return GetTextureBytesFromCopy( texture, isJpeg );
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5 = ___texture0;
		bool L_6 = ___isJpeg1;
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7;
		L_7 = NativeGallery_GetTextureBytesFromCopy_m6CB6DE153F1F1FBEBBA10D170A97E9EEF94863E6(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002c;
	} // end catch (depth: 1)

CATCH_0021:
	{ // begin catch(System.ArgumentException)
		// catch( ArgumentException )
		// return GetTextureBytesFromCopy( texture, isJpeg );
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_8 = ___texture0;
		bool L_9 = ___isJpeg1;
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10;
		L_10 = NativeGallery_GetTextureBytesFromCopy_m6CB6DE153F1F1FBEBBA10D170A97E9EEF94863E6(L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002c;
	} // end catch (depth: 1)

IL_002c:
	{
		// }
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_0;
		return L_11;
	}
}
// System.Byte[] NativeGallery::GetTextureBytesFromCopy(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* NativeGallery_GetTextureBytesFromCopy_m6CB6DE153F1F1FBEBBA10D170A97E9EEF94863E6 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, bool ___isJpeg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F7876094B3FA10965A88A7D08B74EA3DC22CAE9);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_0 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_1 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_2 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B8_0 = NULL;
	{
		// Debug.LogWarning( "Saving non-readable textures is slower than saving readable textures" );
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral7F7876094B3FA10965A88A7D08B74EA3DC22CAE9, /*hidden argument*/NULL);
		// Texture2D sourceTexReadable = null;
		V_0 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL;
		// RenderTexture rt = RenderTexture.GetTemporary( texture.width, texture.height );
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___texture0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ___texture0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_4;
		L_4 = RenderTexture_GetTemporary_mF71FD5106250F2CD0309BBBA2CD74D3D6D94EFB8(L_1, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// RenderTexture activeRT = RenderTexture.active;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_5;
		L_5 = RenderTexture_get_active_mB73718A56673D36F74B5338B310ED7FDFEB34AB7(/*hidden argument*/NULL);
		V_2 = L_5;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			// Graphics.Blit( texture, rt );
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = ___texture0;
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_7 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
			Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7(L_6, L_7, /*hidden argument*/NULL);
			// RenderTexture.active = rt;
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_8 = V_1;
			RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9(L_8, /*hidden argument*/NULL);
			// sourceTexReadable = new Texture2D( texture.width, texture.height, texture.format, false );
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_9 = ___texture0;
			NullCheck(L_9);
			int32_t L_10;
			L_10 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_9);
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_11 = ___texture0;
			NullCheck(L_11);
			int32_t L_12;
			L_12 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_11);
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_13 = ___texture0;
			NullCheck(L_13);
			int32_t L_14;
			L_14 = Texture2D_get_format_mCBCE13524A94042693822BDDE112990B25F4F8E4(L_13, /*hidden argument*/NULL);
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_15 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
			Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092(L_15, L_10, L_12, L_14, (bool)0, /*hidden argument*/NULL);
			V_0 = L_15;
			// sourceTexReadable.ReadPixels( new Rect( 0, 0, texture.width, texture.height ), 0, 0, false );
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_16 = V_0;
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_17 = ___texture0;
			NullCheck(L_17);
			int32_t L_18;
			L_18 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_17);
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_19 = ___texture0;
			NullCheck(L_19);
			int32_t L_20;
			L_20 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_19);
			Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_21;
			memset((&L_21), 0, sizeof(L_21));
			Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_21), (0.0f), (0.0f), ((float)((float)L_18)), ((float)((float)L_20)), /*hidden argument*/NULL);
			NullCheck(L_16);
			Texture2D_ReadPixels_m87ACCC9FDCD8FC8851AE8D3BE56A7C2CAF09C75E(L_16, L_21, 0, 0, (bool)0, /*hidden argument*/NULL);
			// sourceTexReadable.Apply( false, false );
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_22 = V_0;
			NullCheck(L_22);
			Texture2D_Apply_m83460E7B5610A6D85DD3CCA71CC5D4523390D660(L_22, (bool)0, (bool)0, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x96, FINALLY_0089);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_007a;
			}
			throw e;
		}

CATCH_007a:
		{ // begin catch(System.Exception)
			// Debug.LogException( e );
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
			// Object.DestroyImmediate( sourceTexReadable );
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_23 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var)));
			Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_23, /*hidden argument*/NULL);
			// return null;
			V_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			IL2CPP_LEAVE(0xBD, FINALLY_0089);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0089;
	}

FINALLY_0089:
	{ // begin finally (depth: 1)
		// RenderTexture.active = activeRT;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_24 = V_2;
		RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9(L_24, /*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary( rt );
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_25 = V_1;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_25, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(137)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(137)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x96, IL_0096)
		IL2CPP_JUMP_TBL(0xBD, IL_00bd)
	}

IL_0096:
	{
	}

IL_0097:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				// return isJpeg ? sourceTexReadable.EncodeToJPG( 100 ) : sourceTexReadable.EncodeToPNG();
				bool L_26 = ___isJpeg1;
				if (L_26)
				{
					goto IL_00a2;
				}
			}

IL_009a:
			{
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_27 = V_0;
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28;
				L_28 = ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED(L_27, /*hidden argument*/NULL);
				G_B8_0 = L_28;
				goto IL_00aa;
			}

IL_00a2:
			{
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_29 = V_0;
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30;
				L_30 = ImageConversion_EncodeToJPG_mE32249F45E643405652057EA8A35112AB4721641(L_29, ((int32_t)100), /*hidden argument*/NULL);
				G_B8_0 = L_30;
			}

IL_00aa:
			{
				V_3 = G_B8_0;
				IL2CPP_LEAVE(0xBD, FINALLY_00b6);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00ad;
			}
			throw e;
		}

CATCH_00ad:
		{ // begin catch(System.Exception)
			// Debug.LogException( e );
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
			// return null;
			V_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			IL2CPP_LEAVE(0xBD, FINALLY_00b6);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b6;
	}

FINALLY_00b6:
	{ // begin finally (depth: 1)
		// Object.DestroyImmediate( sourceTexReadable );
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_31, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(182)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(182)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xBD, IL_00bd)
	}

IL_00bd:
	{
		// }
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32 = V_3;
		return L_32;
	}
}
// UnityEngine.Texture2D NativeGallery::LoadImageAtPath(System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * NativeGallery_LoadImageAtPath_m5D84DE861AD6659942A2FFB4547A4343F266D225 (String_t* ___imagePath0, int32_t ___maxSize1, bool ___markTextureNonReadable2, bool ___generateMipmaps3, bool ___linearColorSpace4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD146CE30524569A8784D1FFE34EA505C910727D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_3 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	int32_t G_B10_0 = 0;
	{
		// if( string.IsNullOrEmpty( imagePath ) )
		String_t* L_0 = ___imagePath0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentException( "Parameter 'imagePath' is null or empty!" );
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral18B82B6B7DC4FE1988BA61A3784D1768F6C925DF)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_LoadImageAtPath_m5D84DE861AD6659942A2FFB4547A4343F266D225_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if( !File.Exists( imagePath ) )
		String_t* L_3 = ___imagePath0;
		bool L_4;
		L_4 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + imagePath );
		String_t* L_5 = ___imagePath0;
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_5, /*hidden argument*/NULL);
		FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8 * L_7 = (FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8_il2cpp_TypeInfo_var)));
		FileNotFoundException__ctor_mA3A41003FE6056B7BF44A6577DF4BBB30BFD32D5(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_LoadImageAtPath_m5D84DE861AD6659942A2FFB4547A4343F266D225_RuntimeMethod_var)));
	}

IL_002c:
	{
		// if( maxSize <= 0 )
		int32_t L_8 = ___maxSize1;
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		// maxSize = SystemInfo.maxTextureSize;
		int32_t L_9;
		L_9 = SystemInfo_get_maxTextureSize_m92A710AC08A38C8BAF96D95D796C073B1C900D40(/*hidden argument*/NULL);
		___maxSize1 = L_9;
	}

IL_0037:
	{
		// string loadPath = AJC.CallStatic<string>( "LoadImageAtPath", Context, imagePath, TemporaryImagePath, maxSize );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_10;
		L_10 = NativeGallery_get_AJC_m4307BF76B4FCEA5D1192219F6CCD30AC7BDD65EE(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_11;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_13;
		L_13 = NativeGallery_get_Context_mC358BF371761A22F9AEA0949C94D7198394CC562(/*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_13);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_12;
		String_t* L_15 = ___imagePath0;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_15);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_14;
		String_t* L_17;
		L_17 = NativeGallery_get_TemporaryImagePath_mD2C75BFC9F9266D5559E8832B58395ECD1C6747A(/*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_17);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_16;
		int32_t L_19 = ___maxSize1;
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_21);
		NullCheck(L_10);
		String_t* L_22;
		L_22 = AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A(L_10, _stringLiteralDD146CE30524569A8784D1FFE34EA505C910727D, L_18, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		V_0 = L_22;
		// String extension = Path.GetExtension( imagePath ).ToLowerInvariant();
		String_t* L_23 = ___imagePath0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_24;
		L_24 = Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = String_ToLowerInvariant_m070E99F11A6005755BD6579A6CC835694395F79F(L_24, /*hidden argument*/NULL);
		V_1 = L_25;
		// TextureFormat format = ( extension == ".jpg" || extension == ".jpeg" ) ? TextureFormat.RGB24 : TextureFormat.RGBA32;
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_26, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_0093;
		}
	}
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_28, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_0093;
		}
	}
	{
		G_B10_0 = 4;
		goto IL_0094;
	}

IL_0093:
	{
		G_B10_0 = 3;
	}

IL_0094:
	{
		V_2 = G_B10_0;
		// Texture2D result = new Texture2D( 2, 2, format, generateMipmaps, linearColorSpace );
		int32_t L_30 = V_2;
		bool L_31 = ___generateMipmaps3;
		bool L_32 = ___linearColorSpace4;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_33 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m667452FB4794C77D283037E096FE0DC0AEB311F3(L_33, 2, 2, L_30, L_31, L_32, /*hidden argument*/NULL);
		V_3 = L_33;
	}

IL_00a1:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				// if( !result.LoadImage( File.ReadAllBytes( loadPath ), markTextureNonReadable ) )
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_34 = V_3;
				String_t* L_35 = V_0;
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_36;
				L_36 = File_ReadAllBytes_mFB47FB50E938AE90CC822442D30E896441D95829(L_35, /*hidden argument*/NULL);
				bool L_37 = ___markTextureNonReadable2;
				bool L_38;
				L_38 = ImageConversion_LoadImage_m1E5C9BF6206ED40B23CDB28341B8A64E05C43683(L_34, L_36, L_37, /*hidden argument*/NULL);
				if (L_38)
				{
					goto IL_00bb;
				}
			}

IL_00b0:
			{
				// Object.DestroyImmediate( result );
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_39 = V_3;
				IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
				Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_39, /*hidden argument*/NULL);
				// return null;
				V_4 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL;
				IL2CPP_LEAVE(0xE4, FINALLY_00cd);
			}

IL_00bb:
			{
				// }
				IL2CPP_LEAVE(0xE2, FINALLY_00cd);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00bd;
			}
			throw e;
		}

CATCH_00bd:
		{ // begin catch(System.Exception)
			// Debug.LogException( e );
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
			// Object.DestroyImmediate( result );
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_40 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var)));
			Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_40, /*hidden argument*/NULL);
			// return null;
			V_4 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			IL2CPP_LEAVE(0xE4, FINALLY_00cd);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00cd;
	}

FINALLY_00cd:
	{ // begin finally (depth: 1)
		{
			// if( loadPath != imagePath )
			String_t* L_41 = V_0;
			String_t* L_42 = ___imagePath0;
			bool L_43;
			L_43 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_41, L_42, /*hidden argument*/NULL);
			if (!L_43)
			{
				goto IL_00e1;
			}
		}

IL_00d6:
		try
		{ // begin try (depth: 2)
			// File.Delete( loadPath );
			String_t* L_44 = V_0;
			File_Delete_m82FE53535A3911380F7E4C8AD44D77FAB330FD77(L_44, /*hidden argument*/NULL);
			// }
			goto IL_00e1;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00de;
			}
			throw e;
		}

CATCH_00de:
		{ // begin catch(System.Object)
			// catch { }
			// catch { }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00e1;
		} // end catch (depth: 2)

IL_00e1:
		{
			// }
			IL2CPP_END_FINALLY(205)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(205)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xE4, IL_00e4)
		IL2CPP_JUMP_TBL(0xE2, IL_00e2)
	}

IL_00e2:
	{
		// return result;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_45 = V_3;
		return L_45;
	}

IL_00e4:
	{
		// }
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_46 = V_4;
		return L_46;
	}
}
// NativeGallery/ImageProperties NativeGallery::GetImageProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageProperties_tF49ACA59C8B2E9081860DEBD634936A806FDC2B1  NativeGallery_GetImageProperties_m9366D0A56B0DAE8EDE926AC0751C3D968ACB019D (String_t* ___imagePath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3A21FB44DD18299A19A0B86BA27CEB4EDA6A941);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFF4AA19F30B5DC5A240F413D92917103536F1AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB4507437E3E619ECBAD84410155675EBEB3DB3F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	{
		// if( !File.Exists( imagePath ) )
		String_t* L_0 = ___imagePath0;
		bool L_1;
		L_1 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + imagePath );
		String_t* L_2 = ___imagePath0;
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_2, /*hidden argument*/NULL);
		FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8 * L_4 = (FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8_il2cpp_TypeInfo_var)));
		FileNotFoundException__ctor_mA3A41003FE6056B7BF44A6577DF4BBB30BFD32D5(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_GetImageProperties_m9366D0A56B0DAE8EDE926AC0751C3D968ACB019D_RuntimeMethod_var)));
	}

IL_0019:
	{
		// string value = AJC.CallStatic<string>( "GetImageProperties", Context, imagePath );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_5;
		L_5 = NativeGallery_get_AJC_m4307BF76B4FCEA5D1192219F6CCD30AC7BDD65EE(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_6;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_8;
		L_8 = NativeGallery_get_Context_mC358BF371761A22F9AEA0949C94D7198394CC562(/*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_7;
		String_t* L_10 = ___imagePath0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		NullCheck(L_5);
		String_t* L_11;
		L_11 = AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A(L_5, _stringLiteralA3A21FB44DD18299A19A0B86BA27CEB4EDA6A941, L_9, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		V_0 = L_11;
		// int width = 0, height = 0;
		V_1 = 0;
		// int width = 0, height = 0;
		V_2 = 0;
		// string mimeType = null;
		V_3 = (String_t*)NULL;
		// ImageOrientation orientation = ImageOrientation.Unknown;
		V_4 = (-1);
		// if( !string.IsNullOrEmpty( value ) )
		String_t* L_12 = V_0;
		bool L_13;
		L_13 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0138;
		}
	}
	{
		// string[] properties = value.Split( '>' );
		String_t* L_14 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_15 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_16 = L_15;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)62));
		NullCheck(L_14);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17;
		L_17 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_14, L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		// if( properties != null && properties.Length >= 4 )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = V_5;
		if (!L_18)
		{
			goto IL_0138;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = V_5;
		NullCheck(L_19);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))) < ((int32_t)4)))
		{
			goto IL_0138;
		}
	}
	{
		// if( !int.TryParse( properties[0].Trim(), out width ) )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = V_5;
		NullCheck(L_20);
		int32_t L_21 = 0;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		String_t* L_23;
		L_23 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_23, (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_0087;
		}
	}
	{
		// width = 0;
		V_1 = 0;
	}

IL_0087:
	{
		// if( !int.TryParse( properties[1].Trim(), out height ) )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = V_5;
		NullCheck(L_25);
		int32_t L_26 = 1;
		String_t* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		String_t* L_28;
		L_28 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_27, /*hidden argument*/NULL);
		bool L_29;
		L_29 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_28, (int32_t*)(&V_2), /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_009b;
		}
	}
	{
		// height = 0;
		V_2 = 0;
	}

IL_009b:
	{
		// mimeType = properties[2].Trim();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = V_5;
		NullCheck(L_30);
		int32_t L_31 = 2;
		String_t* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		String_t* L_33;
		L_33 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_32, /*hidden argument*/NULL);
		V_3 = L_33;
		// if( mimeType.Length == 0 )
		String_t* L_34 = V_3;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_34, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_0122;
		}
	}
	{
		// String extension = Path.GetExtension( imagePath ).ToLowerInvariant();
		String_t* L_36 = ___imagePath0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_37;
		L_37 = Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		String_t* L_38;
		L_38 = String_ToLowerInvariant_m070E99F11A6005755BD6579A6CC835694395F79F(L_37, /*hidden argument*/NULL);
		V_7 = L_38;
		// if( extension == ".png" )
		String_t* L_39 = V_7;
		bool L_40;
		L_40 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_39, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_00d0;
		}
	}
	{
		// mimeType = "image/png";
		V_3 = _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
		goto IL_0122;
	}

IL_00d0:
	{
		// else if( extension == ".jpg" || extension == ".jpeg" )
		String_t* L_41 = V_7;
		bool L_42;
		L_42 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_41, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_00ec;
		}
	}
	{
		String_t* L_43 = V_7;
		bool L_44;
		L_44 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_43, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_00f4;
		}
	}

IL_00ec:
	{
		// mimeType = "image/jpeg";
		V_3 = _stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC;
		goto IL_0122;
	}

IL_00f4:
	{
		// else if( extension == ".gif" )
		String_t* L_45 = V_7;
		bool L_46;
		L_46 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_45, _stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_010a;
		}
	}
	{
		// mimeType = "image/gif";
		V_3 = _stringLiteralAFF4AA19F30B5DC5A240F413D92917103536F1AD;
		goto IL_0122;
	}

IL_010a:
	{
		// else if( extension == ".bmp" )
		String_t* L_47 = V_7;
		bool L_48;
		L_48 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_47, _stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C, /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_0120;
		}
	}
	{
		// mimeType = "image/bmp";
		V_3 = _stringLiteralCB4507437E3E619ECBAD84410155675EBEB3DB3F;
		goto IL_0122;
	}

IL_0120:
	{
		// mimeType = null;
		V_3 = (String_t*)NULL;
	}

IL_0122:
	{
		// if( int.TryParse( properties[3].Trim(), out orientationInt ) )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_49 = V_5;
		NullCheck(L_49);
		int32_t L_50 = 3;
		String_t* L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_51);
		String_t* L_52;
		L_52 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_51, /*hidden argument*/NULL);
		bool L_53;
		L_53 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_52, (int32_t*)(&V_6), /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_0138;
		}
	}
	{
		// orientation = (ImageOrientation) orientationInt;
		int32_t L_54 = V_6;
		V_4 = L_54;
	}

IL_0138:
	{
		// return new ImageProperties( width, height, mimeType, orientation );
		int32_t L_55 = V_1;
		int32_t L_56 = V_2;
		String_t* L_57 = V_3;
		int32_t L_58 = V_4;
		ImageProperties_tF49ACA59C8B2E9081860DEBD634936A806FDC2B1  L_59;
		memset((&L_59), 0, sizeof(L_59));
		ImageProperties__ctor_m8C0DA93333F55DFB00769AB1326E80AE7DB036ED((&L_59), L_55, L_56, L_57, L_58, /*hidden argument*/NULL);
		return L_59;
	}
}
// NativeGallery/VideoProperties NativeGallery::GetVideoProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoProperties_t52823D2B29AE484E44D3A1CFAD17EF335B660153  NativeGallery_GetVideoProperties_m3C9D534463E7A815D7446E0B14A01B453D2E4B14 (String_t* ___videoPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF811A8F3778A439E75478C3728BE25A7853EAF83);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	float V_4 = 0.0f;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_5 = NULL;
	{
		// if( !File.Exists( videoPath ) )
		String_t* L_0 = ___videoPath0;
		bool L_1;
		L_1 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + videoPath );
		String_t* L_2 = ___videoPath0;
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_2, /*hidden argument*/NULL);
		FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8 * L_4 = (FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8_il2cpp_TypeInfo_var)));
		FileNotFoundException__ctor_mA3A41003FE6056B7BF44A6577DF4BBB30BFD32D5(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_GetVideoProperties_m3C9D534463E7A815D7446E0B14A01B453D2E4B14_RuntimeMethod_var)));
	}

IL_0019:
	{
		// string value = AJC.CallStatic<string>( "GetVideoProperties", Context, videoPath );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tFAE840BAEC3C89C19B51F1C2FEB274634F9133D0_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_5;
		L_5 = NativeGallery_get_AJC_m4307BF76B4FCEA5D1192219F6CCD30AC7BDD65EE(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_6;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_8;
		L_8 = NativeGallery_get_Context_mC358BF371761A22F9AEA0949C94D7198394CC562(/*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_7;
		String_t* L_10 = ___videoPath0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		NullCheck(L_5);
		String_t* L_11;
		L_11 = AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A(L_5, _stringLiteralF811A8F3778A439E75478C3728BE25A7853EAF83, L_9, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		V_0 = L_11;
		// int width = 0, height = 0;
		V_1 = 0;
		// int width = 0, height = 0;
		V_2 = 0;
		// long duration = 0L;
		V_3 = ((int64_t)((int64_t)0));
		// float rotation = 0f;
		V_4 = (0.0f);
		// if( !string.IsNullOrEmpty( value ) )
		String_t* L_12 = V_0;
		bool L_13;
		L_13 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_00c5;
		}
	}
	{
		// string[] properties = value.Split( '>' );
		String_t* L_14 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_15 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_16 = L_15;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)62));
		NullCheck(L_14);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17;
		L_17 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_14, L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		// if( properties != null && properties.Length >= 4 )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = V_5;
		if (!L_18)
		{
			goto IL_00c5;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = V_5;
		NullCheck(L_19);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))) < ((int32_t)4)))
		{
			goto IL_00c5;
		}
	}
	{
		// if( !int.TryParse( properties[0].Trim(), out width ) )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = V_5;
		NullCheck(L_20);
		int32_t L_21 = 0;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		String_t* L_23;
		L_23 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_23, (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_0083;
		}
	}
	{
		// width = 0;
		V_1 = 0;
	}

IL_0083:
	{
		// if( !int.TryParse( properties[1].Trim(), out height ) )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = V_5;
		NullCheck(L_25);
		int32_t L_26 = 1;
		String_t* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		String_t* L_28;
		L_28 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_27, /*hidden argument*/NULL);
		bool L_29;
		L_29 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_28, (int32_t*)(&V_2), /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_0097;
		}
	}
	{
		// height = 0;
		V_2 = 0;
	}

IL_0097:
	{
		// if( !long.TryParse( properties[2].Trim(), out duration ) )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = V_5;
		NullCheck(L_30);
		int32_t L_31 = 2;
		String_t* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		String_t* L_33;
		L_33 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_32, /*hidden argument*/NULL);
		bool L_34;
		L_34 = Int64_TryParse_m6EA988890D7F9954EA49A7227E60B3C674930650(L_33, (int64_t*)(&V_3), /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_00ac;
		}
	}
	{
		// duration = 0L;
		V_3 = ((int64_t)((int64_t)0));
	}

IL_00ac:
	{
		// if( !float.TryParse( properties[3].Trim(), out rotation ) )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = V_5;
		NullCheck(L_35);
		int32_t L_36 = 3;
		String_t* L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		String_t* L_38;
		L_38 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_37, /*hidden argument*/NULL);
		bool L_39;
		L_39 = Single_TryParse_mC2E0086EAB164A81380FD03BDE671C574F52E373(L_38, (float*)(&V_4), /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_00c5;
		}
	}
	{
		// rotation = 0f;
		V_4 = (0.0f);
	}

IL_00c5:
	{
		// if( rotation == -90f )
		float L_40 = V_4;
		if ((!(((float)L_40) == ((float)(-90.0f)))))
		{
			goto IL_00d5;
		}
	}
	{
		// rotation = 270f;
		V_4 = (270.0f);
	}

IL_00d5:
	{
		// return new VideoProperties( width, height, duration, rotation );
		int32_t L_41 = V_1;
		int32_t L_42 = V_2;
		int64_t L_43 = V_3;
		float L_44 = V_4;
		VideoProperties_t52823D2B29AE484E44D3A1CFAD17EF335B660153  L_45;
		memset((&L_45), 0, sizeof(L_45));
		VideoProperties__ctor_m45BABD4A9B46E4B193903730ACCE828941099219((&L_45), L_41, L_42, L_43, L_44, /*hidden argument*/NULL);
		return L_45;
	}
}
// System.Void NativeGallery::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__cctor_mD4DE63A08384B2ABBD888116FB7365A0F1BF2878 (const RuntimeMethod* method)
{
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
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m2686585843AF3B928C02F998C463D2A8AEFCC539 (U3CU3Ec__DisplayClass4_0_t973443D9D780B511D6F2345A5401ED8F24480CCC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0::<OnMediaReceived>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3COnMediaReceivedU3Eb__0_mF5DB9C317748F4BB3FB340AB29F0B66065114926 (U3CU3Ec__DisplayClass4_0_t973443D9D780B511D6F2345A5401ED8F24480CCC * __this, const RuntimeMethod* method)
{
	{
		// callbackHelper.CallOnMainThread( () => MediaReceiveCallback( path ) );
		NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05 * L_0 = __this->get_U3CU3E4__this_0();
		String_t* L_1 = __this->get_path_1();
		NullCheck(L_0);
		NGMediaReceiveCallbackAndroid_MediaReceiveCallback_mA899EDF8FA2EDC60ADB313DE5C81CB9B77C0FDFF(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mCB77E4385C4FFB3099C8E8D8D4AE7E743DD45F5D (U3CU3Ec__DisplayClass5_0_t6FB9D345926E49F46086920125DE0BE3F271F4F5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0::<OnMultipleMediaReceived>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3COnMultipleMediaReceivedU3Eb__0_m36962BA6DBD2F57C90B56CC8B3C10C3A2A133532 (U3CU3Ec__DisplayClass5_0_t6FB9D345926E49F46086920125DE0BE3F271F4F5 * __this, const RuntimeMethod* method)
{
	{
		// callbackHelper.CallOnMainThread( () => MediaReceiveMultipleCallback( result ) );
		NGMediaReceiveCallbackAndroid_tE16ED0B43A1BECC0B196EB9EA934C718A1B58E05 * L_0 = __this->get_U3CU3E4__this_0();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = __this->get_result_1();
		NullCheck(L_0);
		NGMediaReceiveCallbackAndroid_MediaReceiveMultipleCallback_m935837B6ABD452F4982EA0FFBCB1A58342A732C5(L_0, L_1, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_tF49ACA59C8B2E9081860DEBD634936A806FDC2B1_marshal_pinvoke(const ImageProperties_tF49ACA59C8B2E9081860DEBD634936A806FDC2B1& unmarshaled, ImageProperties_tF49ACA59C8B2E9081860DEBD634936A806FDC2B1_marshaled_pinvoke& marshaled)
{
	marshaled.___width_0 = unmarshaled.get_width_0();
	marshaled.___height_1 = unmarshaled.get_height_1();
	marshaled.___mimeType_2 = il2cpp_codegen_marshal_string(unmarshaled.get_mimeType_2());
	marshaled.___orientation_3 = unmarshaled.get_orientation_3();
}
IL2CPP_EXTERN_C void ImageProperties_tF49ACA59C8B2E9081860DEBD634936A806FDC2B1_marshal_pinvoke_back(const ImageProperties_tF49ACA59C8B2E9081860DEBD634936A806FDC2B1_marshaled_pinvoke& marshaled, ImageProperties_tF49ACA59C8B2E9081860DEBD634936A806FDC2B1& unmarshaled)
{
	int32_t unmarshaled_width_temp_0 = 0;
	unmarshaled_width_temp_0 = marshaled.___width_0;
	unmarshaled.set_width_0(unmarshaled_width_temp_0);
	int32_t unmarshaled_height_temp_1 = 0;
	unmarshaled_height_temp_1 = marshaled.___height_1;
	unmarshaled.set_height_1(unmarshaled_height_temp_1);
	unmarshaled.set_mimeType_2(il2cpp_codegen_marshal_string_result(marshaled.___mimeType_2));
	int32_t unmarshaled_orientation_temp_3 = 0;
	unmarshaled_orientation_temp_3 = marshaled.___orientation_3;
	unmarshaled.set_orientation_3(unmarshaled_orientation_temp_3);
}
// Conversion method for clean up from marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_tF49ACA59C8B2E9081860DEBD634936A806FDC2B1_marshal_pinvoke_cleanup(ImageProperties_tF49ACA59C8B2E9081860DEBD634936A806FDC2B1_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mimeType_2);
	marshaled.___mimeType_2 = NULL;
}
// Conversion methods for marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_tF49ACA59C8B2E9081860DEBD634936A806FDC2B1_marshal_com(const ImageProperties_tF49ACA59C8B2E9081860DEBD634936A806FDC2B1& unmarshaled, ImageProperties_tF49ACA59C8B2E9081860DEBD634936A806FDC2B1_marshaled_com& marshaled)
{
	marshaled.___width_0 = unmarshaled.get_width_0();
	marshaled.___height_1 = unmarshaled.get_height_1();
	marshaled.___mimeType_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_mimeType_2());
	marshaled.___orientation_3 = unmarshaled.get_orientation_3();
}
IL2CPP_EXTERN_C void ImageProperties_tF49ACA59C8B2E9081860DEBD634936A806FDC2B1_marshal_com_back(const ImageProperties_tF49ACA59C8B2E9081860DEBD634936A806FDC2B1_marshaled_com& marshaled, ImageProperties_tF49ACA59C8B2E9081860DEBD634936A806FDC2B1& unmarshaled)
{
	int32_t unmarshaled_width_temp_0 = 0;
	unmarshaled_width_temp_0 = marshaled.___width_0;
	unmarshaled.set_width_0(unmarshaled_width_temp_0);
	int32_t unmarshaled_height_temp_1 = 0;
	unmarshaled_height_temp_1 = marshaled.___height_1;
	unmarshaled.set_height_1(unmarshaled_height_temp_1);
	unmarshaled.set_mimeType_2(il2cpp_codegen_marshal_bstring_result(marshaled.___mimeType_2));
	int32_t unmarshaled_orientation_temp_3 = 0;
	unmarshaled_orientation_temp_3 = marshaled.___orientation_3;
	unmarshaled.set_orientation_3(unmarshaled_orientation_temp_3);
}
// Conversion method for clean up from marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_tF49ACA59C8B2E9081860DEBD634936A806FDC2B1_marshal_com_cleanup(ImageProperties_tF49ACA59C8B2E9081860DEBD634936A806FDC2B1_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mimeType_2);
	marshaled.___mimeType_2 = NULL;
}
// System.Void NativeGallery/ImageProperties::.ctor(System.Int32,System.Int32,System.String,NativeGallery/ImageOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageProperties__ctor_m8C0DA93333F55DFB00769AB1326E80AE7DB036ED (ImageProperties_tF49ACA59C8B2E9081860DEBD634936A806FDC2B1 * __this, int32_t ___width0, int32_t ___height1, String_t* ___mimeType2, int32_t ___orientation3, const RuntimeMethod* method)
{
	{
		// this.width = width;
		int32_t L_0 = ___width0;
		__this->set_width_0(L_0);
		// this.height = height;
		int32_t L_1 = ___height1;
		__this->set_height_1(L_1);
		// this.mimeType = mimeType;
		String_t* L_2 = ___mimeType2;
		__this->set_mimeType_2(L_2);
		// this.orientation = orientation;
		int32_t L_3 = ___orientation3;
		__this->set_orientation_3(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ImageProperties__ctor_m8C0DA93333F55DFB00769AB1326E80AE7DB036ED_AdjustorThunk (RuntimeObject * __this, int32_t ___width0, int32_t ___height1, String_t* ___mimeType2, int32_t ___orientation3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ImageProperties_tF49ACA59C8B2E9081860DEBD634936A806FDC2B1 * _thisAdjusted = reinterpret_cast<ImageProperties_tF49ACA59C8B2E9081860DEBD634936A806FDC2B1 *>(__this + _offset);
	ImageProperties__ctor_m8C0DA93333F55DFB00769AB1326E80AE7DB036ED(_thisAdjusted, ___width0, ___height1, ___mimeType2, ___orientation3, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MediaPickCallback_t9271CE7DC6219D21E74BAC60E5A517A91E2BF4D7 (MediaPickCallback_t9271CE7DC6219D21E74BAC60E5A517A91E2BF4D7 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Native function invocation
	il2cppPInvokeFunc(____path0_marshaled);

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

}
// System.Void NativeGallery/MediaPickCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickCallback__ctor_m1A0C70520340FB94DCC10508482A9D4254E44CE5 (MediaPickCallback_t9271CE7DC6219D21E74BAC60E5A517A91E2BF4D7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeGallery/MediaPickCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickCallback_Invoke_mB7C0436D54E925BD80E322FCB5103E318AEB28EE (MediaPickCallback_t9271CE7DC6219D21E74BAC60E5A517A91E2BF4D7 * __this, String_t* ___path0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___path0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___path0, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___path0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___path0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___path0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___path0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___path0, targetMethod);
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
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___path0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___path0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___path0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___path0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___path0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___path0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult NativeGallery/MediaPickCallback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MediaPickCallback_BeginInvoke_m7F831FCDF7B025C120491881F3C82F59EEF7043B (MediaPickCallback_t9271CE7DC6219D21E74BAC60E5A517A91E2BF4D7 * __this, String_t* ___path0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___path0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void NativeGallery/MediaPickCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickCallback_EndInvoke_mFA394402B5E407D5E93B51CC451B4B73FD51FB98 (MediaPickCallback_t9271CE7DC6219D21E74BAC60E5A517A91E2BF4D7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MediaPickMultipleCallback_t48F09C9BE0D421F02BD9B8D9D5B455382F94B952 (MediaPickMultipleCallback_t48F09C9BE0D421F02BD9B8D9D5B455382F94B952 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paths0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char**);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___paths0' to native representation
	char** ____paths0_marshaled = NULL;
	if (___paths0 != NULL)
	{
		il2cpp_array_size_t ____paths0_Length = (___paths0)->max_length;
		____paths0_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____paths0_Length + 1);
		(____paths0_marshaled)[____paths0_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____paths0_Length); i++)
		{
			(____paths0_marshaled)[i] = il2cpp_codegen_marshal_string((___paths0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____paths0_marshaled = NULL;
	}

	// Native function invocation
	il2cppPInvokeFunc(____paths0_marshaled);

	// Marshaling cleanup of parameter '___paths0' native representation
	if (____paths0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____paths0_marshaled_CleanupLoopCount = (___paths0 != NULL) ? (___paths0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____paths0_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____paths0_marshaled)[i]);
			(____paths0_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____paths0_marshaled);
		____paths0_marshaled = NULL;
	}

}
// System.Void NativeGallery/MediaPickMultipleCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickMultipleCallback__ctor_mDA8C6DBB4E0B07A2165043F0AA4ADC1495F3B826 (MediaPickMultipleCallback_t48F09C9BE0D421F02BD9B8D9D5B455382F94B952 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeGallery/MediaPickMultipleCallback::Invoke(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickMultipleCallback_Invoke_m48CF72A34CD7D55174ECEDEECD0183C9A07BFC11 (MediaPickMultipleCallback_t48F09C9BE0D421F02BD9B8D9D5B455382F94B952 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paths0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___paths0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___paths0, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___paths0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___paths0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___paths0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___paths0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___paths0, targetMethod);
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
						GenericInterfaceActionInvoker1< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(targetMethod, targetThis, ___paths0);
					else
						GenericVirtActionInvoker1< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(targetMethod, targetThis, ___paths0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___paths0);
					else
						VirtActionInvoker1< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___paths0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___paths0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___paths0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult NativeGallery/MediaPickMultipleCallback::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MediaPickMultipleCallback_BeginInvoke_m5CAF498BF960F7CCCE46937D2456BF48AB1CA83B (MediaPickMultipleCallback_t48F09C9BE0D421F02BD9B8D9D5B455382F94B952 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paths0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___paths0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void NativeGallery/MediaPickMultipleCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickMultipleCallback_EndInvoke_m813DFDC23DAC035F742A0DDE3E060CAEF9822623 (MediaPickMultipleCallback_t48F09C9BE0D421F02BD9B8D9D5B455382F94B952 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 (MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * __this, String_t* ___error0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___error0' to native representation
	char* ____error0_marshaled = NULL;
	____error0_marshaled = il2cpp_codegen_marshal_string(___error0);

	// Native function invocation
	il2cppPInvokeFunc(____error0_marshaled);

	// Marshaling cleanup of parameter '___error0' native representation
	il2cpp_codegen_marshal_free(____error0_marshaled);
	____error0_marshaled = NULL;

}
// System.Void NativeGallery/MediaSaveCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaveCallback__ctor_mC7C4CF0848485E6487508A2245B8AD8E9AB4BD58 (MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeGallery/MediaSaveCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaveCallback_Invoke_m9ED3F44F7DBF2B6CDF929AE4B0558AFF97CA614E (MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * __this, String_t* ___error0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___error0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___error0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___error0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___error0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___error0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___error0, targetMethod);
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
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___error0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___error0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___error0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___error0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___error0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult NativeGallery/MediaSaveCallback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MediaSaveCallback_BeginInvoke_m4AC39914705631D7BA632362371DF0AE4C87D1AC (MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * __this, String_t* ___error0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___error0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void NativeGallery/MediaSaveCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaveCallback_EndInvoke_mC5EBEC1BF0764B25073510A1B0E0ADF7B500F4A7 (MediaSaveCallback_tD6D74B381BC31F856D9E7F70A107AA6C24018DE9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void NativeGallery/VideoProperties::.ctor(System.Int32,System.Int32,System.Int64,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoProperties__ctor_m45BABD4A9B46E4B193903730ACCE828941099219 (VideoProperties_t52823D2B29AE484E44D3A1CFAD17EF335B660153 * __this, int32_t ___width0, int32_t ___height1, int64_t ___duration2, float ___rotation3, const RuntimeMethod* method)
{
	{
		// this.width = width;
		int32_t L_0 = ___width0;
		__this->set_width_0(L_0);
		// this.height = height;
		int32_t L_1 = ___height1;
		__this->set_height_1(L_1);
		// this.duration = duration;
		int64_t L_2 = ___duration2;
		__this->set_duration_2(L_2);
		// this.rotation = rotation;
		float L_3 = ___rotation3;
		__this->set_rotation_3(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void VideoProperties__ctor_m45BABD4A9B46E4B193903730ACCE828941099219_AdjustorThunk (RuntimeObject * __this, int32_t ___width0, int32_t ___height1, int64_t ___duration2, float ___rotation3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VideoProperties_t52823D2B29AE484E44D3A1CFAD17EF335B660153 * _thisAdjusted = reinterpret_cast<VideoProperties_t52823D2B29AE484E44D3A1CFAD17EF335B660153 *>(__this + _offset);
	VideoProperties__ctor_m45BABD4A9B46E4B193903730ACCE828941099219(_thisAdjusted, ___width0, ___height1, ___duration2, ___rotation3, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NGCallbackHelper_CallOnMainThread_m935A8C0505A00CF267FD52FCC54D6213DB5EFEB5_inline (NGCallbackHelper_t57FF2520F22AEBEC0B88147EA281589A62FF2E62 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___function0, const RuntimeMethod* method)
{
	{
		// mainThreadAction = function;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___function0;
		__this->set_mainThreadAction_4(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid_set_Result_mFCF6107883E0F8AED7BE8951B85AF2693F0EC950_inline (NGPermissionCallbackAndroid_t2F17C0D4C562F317A9B9E2E804C1C8C4C81CDF4A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Result { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CResultU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NGPermissionCallbackAndroid_get_Result_mE352376B3CA1BD57D1A5ABDB349FE269B42DEA30_inline (NGPermissionCallbackAndroid_t2F17C0D4C562F317A9B9E2E804C1C8C4C81CDF4A * __this, const RuntimeMethod* method)
{
	{
		// public int Result { get; private set; }
		int32_t L_0 = __this->get_U3CResultU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
