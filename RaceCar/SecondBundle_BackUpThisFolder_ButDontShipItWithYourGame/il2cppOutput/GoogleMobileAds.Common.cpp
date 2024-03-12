#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>
struct EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E;
// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF;
// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50;
// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC;
// System.EventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IEnumerable`1<System.Action>
struct IEnumerable_1_tEA17B83295B756EFB23F3357537A3AAC9B4D9732;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.List`1<System.Action>
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_t5E2EB19AA6B9CFA733A67F57AF74DCBE981C3376;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Action[]
struct ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// GoogleMobileAds.Common.AdErrorClientEventArgs
struct AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D;
// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GoogleMobileAds.Common.IAdErrorClient
struct IAdErrorClient_t1070A9DCB8BBE68B67D9ECBC19949CDF415AD2BF;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// GoogleMobileAds.Common.ILoadAdErrorClient
struct ILoadAdErrorClient_t82CFD9A1EFB235DD188F81112DF3EAE96806A8D9;
// GoogleMobileAds.Common.IResponseInfoClient
struct IResponseInfoClient_tCF770586616698786A19AB53CA4009AF567121B7;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// GoogleMobileAds.Common.MobileAdsEventExecutor
struct MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// GoogleMobileAds.Api.Reward
struct Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511;
// GoogleMobileAds.Common.RewardedAdDummyClient
struct RewardedAdDummyClient_t5A0D28641D4F9934FBB2B215E9EC94040B134228;
// GoogleMobileAds.Common.RewardedInterstitialAdDummyClient
struct RewardedInterstitialAdDummyClient_tB83A7E5904C72243BB4020BBAA7C59679D25370C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// GoogleMobileAds.Api.ServerSideVerificationOptions
struct ServerSideVerificationOptions_tCB0CF0403C3E4DDA0E47F9594BE01D214B4673C3;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// GoogleMobileAds.Common.Utils
struct Utils_tE28BDA20CE8AA5CDA4AEE27FCDE44EEE4179F0EE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// GoogleMobileAds.Common.MobileAdsEventExecutor/<InvokeInUpdate>c__AnonStorey0
struct U3CInvokeInUpdateU3Ec__AnonStorey0_tF0F601D18E2E6B9DBB319D500D2C05D0BDC31C67;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInvokeInUpdateU3Ec__AnonStorey0_tF0F601D18E2E6B9DBB319D500D2C05D0BDC31C67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1A8FD152DF02205C2FBF8ACC2505613B83477A5C;
IL2CPP_EXTERN_C String_t* _stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8;
IL2CPP_EXTERN_C String_t* _stringLiteralB977C8ABD5DC51A9CAB375AB6B9292A8DE3E94BB;
IL2CPP_EXTERN_C String_t* _stringLiteralFE4B457907B315DC803DC1665C4DBE73F1BC72D4;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7AF54658D389DA447BBE4C9F2D82278217B0972B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6096A4A06C95B18044A650D3E9AE2AA3D2ECA568_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5CDD305956FDEFA478FF8F1F8D44992132542261_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_mBFC6530F57E3BC7C735D743BA25725FC7596A66D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m475DC02C782750D4036B11E287BC01ECB8313D1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB6C244AAEBAD19DF16131057B7A205817A226254_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAdDummyClient_CreateRewardedAd_mCA7172418B77784BB6C5C246A8ECCE4563E480BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAdDummyClient_DestroyRewardedAd_m70BAE3AF6D3ACA14F4CBBB0CC62829C183B28BDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAdDummyClient_GetResponseInfoClient_m5A28A116B76FDC1439B762929FA825849AA5A021_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAdDummyClient_GetRewardItem_m48FA06DA3DCECAEEE41DAB6CAEAA094BC14F2F3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAdDummyClient_LoadAd_m7D96641321647A73614118C36E1319E4324E479B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAdDummyClient_SetServerSideVerificationOptions_m0253095BB79BACF39ED233FE66C822D44F437BD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAdDummyClient_Show_m4B6CD331BC0BAFD809704D05A5E49AE85523B978_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAdDummyClient__ctor_mB0E0D416703422E162B3220574F075AA7C96CE2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedInterstitialAdDummyClient_CreateRewardedInterstitialAd_m4D025E0B03CCC76E2C167BDA50C7FC06CF7BBAF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedInterstitialAdDummyClient_DestroyRewardedInterstitialAd_m19C0DFBDCF427EACBE986D9D36EA483010EC5014_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedInterstitialAdDummyClient_GetResponseInfoClient_m1ABC6D874B3D08C6BD0276DF6859675639C2083A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedInterstitialAdDummyClient_GetRewardItem_mA3013B4BD7FDF1301FBFCA3317A0715849269671_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedInterstitialAdDummyClient_LoadAd_m6E31735A8C63F41935B13339E1FABEDEE81C5C77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedInterstitialAdDummyClient_SetServerSideVerificationOptions_m2FFFA1D1C7CC1995EFC83E47B786841B50CC1B6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedInterstitialAdDummyClient_Show_m1ADB8D407655FA4593DB4365ED453978C4913A2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedInterstitialAdDummyClient__ctor_mBD4784028EAA8039B6BBCD7BF5991ECF40ED9536_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInvokeInUpdateU3Ec__AnonStorey0_U3CU3Em__0_m3F739919615588E573F5D6B77761038D0B6D8807_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utils_GetTexture2DFromByteArray_mE7EE7F698937655E835296C3B86D00C6642920CA_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t77C22CB09929EB44C5402FD6400E944C42107E2E 
{
};

// System.Collections.Generic.List`1<System.Action>
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDB72209F35D56F62A287633F9450978E90B90987_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// GoogleMobileAds.Api.AdRequest
struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D  : public RuntimeObject
{
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::<Keywords>k__BackingField
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___U3CKeywordsU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::<Extras>k__BackingField
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CExtrasU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::<MediationExtras>k__BackingField
	List_1_t5E2EB19AA6B9CFA733A67F57AF74DCBE981C3376* ___U3CMediationExtrasU3Ek__BackingField_4;
};
struct Il2CppArrayBounds;

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// GoogleMobileAds.Common.RewardedAdDummyClient
struct RewardedAdDummyClient_t5A0D28641D4F9934FBB2B215E9EC94040B134228  : public RuntimeObject
{
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.RewardedAdDummyClient::OnAdLoaded
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdLoaded_0;
	// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs> GoogleMobileAds.Common.RewardedAdDummyClient::OnAdFailedToLoad
	EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* ___OnAdFailedToLoad_1;
	// System.EventHandler`1<GoogleMobileAds.Api.Reward> GoogleMobileAds.Common.RewardedAdDummyClient::OnUserEarnedReward
	EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* ___OnUserEarnedReward_2;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Common.RewardedAdDummyClient::OnPaidEvent
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___OnPaidEvent_3;
	// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs> GoogleMobileAds.Common.RewardedAdDummyClient::OnAdFailedToPresentFullScreenContent
	EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* ___OnAdFailedToPresentFullScreenContent_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.RewardedAdDummyClient::OnAdDidPresentFullScreenContent
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidPresentFullScreenContent_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.RewardedAdDummyClient::OnAdDidDismissFullScreenContent
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidDismissFullScreenContent_6;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.RewardedAdDummyClient::OnAdDidRecordImpression
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidRecordImpression_7;
};

// GoogleMobileAds.Common.RewardedInterstitialAdDummyClient
struct RewardedInterstitialAdDummyClient_tB83A7E5904C72243BB4020BBAA7C59679D25370C  : public RuntimeObject
{
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::OnAdLoaded
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdLoaded_0;
	// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs> GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::OnAdFailedToLoad
	EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* ___OnAdFailedToLoad_1;
	// System.EventHandler`1<GoogleMobileAds.Api.Reward> GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::OnUserEarnedReward
	EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* ___OnUserEarnedReward_2;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::OnPaidEvent
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___OnPaidEvent_3;
	// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs> GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::OnAdFailedToPresentFullScreenContent
	EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* ___OnAdFailedToPresentFullScreenContent_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::OnAdDidPresentFullScreenContent
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidPresentFullScreenContent_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::OnAdDidDismissFullScreenContent
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidDismissFullScreenContent_6;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::OnAdDidRecordImpression
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidRecordImpression_7;
};

// GoogleMobileAds.Api.ServerSideVerificationOptions
struct ServerSideVerificationOptions_tCB0CF0403C3E4DDA0E47F9594BE01D214B4673C3  : public RuntimeObject
{
	// System.String GoogleMobileAds.Api.ServerSideVerificationOptions::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_0;
	// System.String GoogleMobileAds.Api.ServerSideVerificationOptions::<CustomData>k__BackingField
	String_t* ___U3CCustomDataU3Ek__BackingField_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// GoogleMobileAds.Common.Utils
struct Utils_tE28BDA20CE8AA5CDA4AEE27FCDE44EEE4179F0EE  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// GoogleMobileAds.Common.MobileAdsEventExecutor/<InvokeInUpdate>c__AnonStorey0
struct U3CInvokeInUpdateU3Ec__AnonStorey0_tF0F601D18E2E6B9DBB319D500D2C05D0BDC31C67  : public RuntimeObject
{
	// UnityEngine.Events.UnityEvent GoogleMobileAds.Common.MobileAdsEventExecutor/<InvokeInUpdate>c__AnonStorey0::eventParam
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___eventParam_0;
};

// System.Collections.Generic.List`1/Enumerator<System.Action>
struct Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// GoogleMobileAds.Common.AdErrorClientEventArgs
struct AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.AdErrorClientEventArgs::<AdErrorClient>k__BackingField
	RuntimeObject* ___U3CAdErrorClientU3Ek__BackingField_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::<LoadAdErrorClient>k__BackingField
	RuntimeObject* ___U3CLoadAdErrorClientU3Ek__BackingField_1;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// GoogleMobileAds.Api.Reward
struct Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String GoogleMobileAds.Api.Reward::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_1;
	// System.Double GoogleMobileAds.Api.Reward::<Amount>k__BackingField
	double ___U3CAmountU3Ek__BackingField_2;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>
struct EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// GoogleMobileAds.Common.MobileAdsEventExecutor
struct MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_StaticFields
{
	// GoogleMobileAds.Common.MobileAdsEventExecutor GoogleMobileAds.Common.MobileAdsEventExecutor::instance
	MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A* ___instance_4;
	// System.Collections.Generic.List`1<System.Action> GoogleMobileAds.Common.MobileAdsEventExecutor::adEventsQueue
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* ___adEventsQueue_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GoogleMobileAds.Common.MobileAdsEventExecutor::adEventsQueueEmpty
	bool ___adEventsQueueEmpty_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m44DED39FFEBC8F2ACF6162DB065B649E888B9C57_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(System.Object,TEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mB8EBD394BCA1574F4FE9C1C05A4F246099C4DA48_gshared_inline (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577* __this, RuntimeObject* ___sender0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___e1, const RuntimeMethod* method) ;

// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean GoogleMobileAds.Common.MobileAdsEventExecutor::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobileAdsEventExecutor_IsActive_m2F3173138B6DE0A38204C853F8E3F14EF61C2F2B (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<GoogleMobileAds.Common.MobileAdsEventExecutor>()
inline MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A* GameObject_AddComponent_TisMobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_mBFC6530F57E3BC7C735D743BA25725FC7596A66D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Action>::Add(T)
inline void List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_inline (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Void GoogleMobileAds.Common.MobileAdsEventExecutor/<InvokeInUpdate>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInvokeInUpdateU3Ec__AnonStorey0__ctor_mD6FCF6FC84A141A42B2D40632E39BA8F7028216F (U3CInvokeInUpdateU3Ec__AnonStorey0_tF0F601D18E2E6B9DBB319D500D2C05D0BDC31C67* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Common.MobileAdsEventExecutor::ExecuteInUpdate(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAdsEventExecutor_ExecuteInUpdate_mE5099EC8616103C5EC42AD9C6E681BD4DE1158BD (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Action>::.ctor()
inline void List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212 (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m475DC02C782750D4036B11E287BC01ECB8313D1D (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m44DED39FFEBC8F2ACF6162DB065B649E888B9C57_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (RuntimeObject*)___collection0, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::Clear()
inline void List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_inline (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Action>::GetEnumerator()
inline Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D List_1_GetEnumerator_mB6C244AAEBAD19DF16131057B7A205817A226254 (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, const RuntimeMethod* method)
{
	Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Action>::Dispose()
inline void Enumerator_Dispose_m7AF54658D389DA447BBE4C9F2D82278217B0972B (Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Action>::get_Current()
inline Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* Enumerator_get_Current_m5CDD305956FDEFA478FF8F1F8D44992132542261_inline (Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D* __this, const RuntimeMethod* method)
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Object System.Delegate::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline (Delegate_t* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Action>::MoveNext()
inline bool Enumerator_MoveNext_m6096A4A06C95B18044A650D3E9AE2AA3D2ECA568 (Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.EventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*, RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))EventHandler_1_Invoke_mB8EBD394BCA1574F4FE9C1C05A4F246099C4DA48_gshared_inline)((EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*)__this, ___sender0, (Il2CppFullySharedGenericAny)___e1, method);
}
// System.Void GoogleMobileAds.Common.MobileAdsEventExecutor::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAdsEventExecutor_Initialize_mC709241C3C961D263D46BC73FBFB66E07AEB2AC6 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_mBB2DFA1F5BDFF2B81DD0453356EFB092BC5180EC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void GoogleMobileAds.Common.AdErrorClientEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorClientEventArgs__ctor_mE8C76834CB63E41EDC8F533A16BF1ADE185649BA (AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		return;
	}
}
// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.AdErrorClientEventArgs::get_AdErrorClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AdErrorClientEventArgs_get_AdErrorClient_mCF46AD61FF8A16FF1EEFE8372CBD6F369F6CF9EF (AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAdErrorClientU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void GoogleMobileAds.Common.AdErrorClientEventArgs::set_AdErrorClient(GoogleMobileAds.Common.IAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorClientEventArgs_set_AdErrorClient_mF1018FAC40B7908AADE3D91D83CD6AC3310CDC6E (AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAdErrorClientU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAdErrorClientU3Ek__BackingField_1), (void*)L_0);
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
// System.Void GoogleMobileAds.Common.LoadAdErrorClientEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdErrorClientEventArgs__ctor_m2D09A984965A5EDB0506CDAC47BE1675E80AE0AB (LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		return;
	}
}
// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::get_LoadAdErrorClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m0D8BE9C6EABF53908FFC893F742D512A063DFA69 (LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CLoadAdErrorClientU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void GoogleMobileAds.Common.LoadAdErrorClientEventArgs::set_LoadAdErrorClient(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdErrorClientEventArgs_set_LoadAdErrorClient_m6E865CB1B347CEF0B75F55CE43EE3FDBF8353353 (LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CLoadAdErrorClientU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLoadAdErrorClientU3Ek__BackingField_1), (void*)L_0);
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
// System.Void GoogleMobileAds.Common.MobileAdsEventExecutor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAdsEventExecutor__ctor_m41D53858D8E26BD68A2C99A50E0A3ABAA1AD3EE4 (MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Common.MobileAdsEventExecutor::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAdsEventExecutor_Initialize_mC709241C3C961D263D46BC73FBFB66E07AEB2AC6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_mBFC6530F57E3BC7C735D743BA25725FC7596A66D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A8FD152DF02205C2FBF8ACC2505613B83477A5C);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = MobileAdsEventExecutor_IsActive_m2F3173138B6DE0A38204C853F8E3F14EF61C2F2B(NULL);
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_1, _stringLiteral1A8FD152DF02205C2FBF8ACC2505613B83477A5C, NULL);
		V_0 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		NullCheck(L_2);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_2, ((int32_t)61), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_3, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		NullCheck(L_4);
		MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A* L_5;
		L_5 = GameObject_AddComponent_TisMobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_mBFC6530F57E3BC7C735D743BA25725FC7596A66D(L_4, GameObject_AddComponent_TisMobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_mBFC6530F57E3BC7C735D743BA25725FC7596A66D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
		((MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_StaticFields*)il2cpp_codegen_static_fields_for(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var))->___instance_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_StaticFields*)il2cpp_codegen_static_fields_for(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var))->___instance_4), (void*)L_5);
		return;
	}
}
// System.Boolean GoogleMobileAds.Common.MobileAdsEventExecutor::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobileAdsEventExecutor_IsActive_m2F3173138B6DE0A38204C853F8E3F14EF61C2F2B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A* L_0 = ((MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_StaticFields*)il2cpp_codegen_static_fields_for(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_1;
	}
}
// System.Void GoogleMobileAds.Common.MobileAdsEventExecutor::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAdsEventExecutor_Awake_mBED27401298ECAA85C578989510914356138EDAB (MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_0, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Common.MobileAdsEventExecutor::ExecuteInUpdate(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAdsEventExecutor_ExecuteInUpdate_mE5099EC8616103C5EC42AD9C6E681BD4DE1158BD (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_0 = ((MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_StaticFields*)il2cpp_codegen_static_fields_for(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var))->___adEventsQueue_5;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_0;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			il2cpp_codegen_runtime_class_init_inline(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_3 = ((MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_StaticFields*)il2cpp_codegen_static_fields_for(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var))->___adEventsQueue_5;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___action0;
			NullCheck(L_3);
			List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_inline(L_3, L_4, List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
			il2cpp_codegen_memory_barrier();
			((MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_StaticFields*)il2cpp_codegen_static_fields_for(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var))->___adEventsQueueEmpty_6 = (bool)0;
			goto IL_002b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002b:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.MobileAdsEventExecutor::InvokeInUpdate(UnityEngine.Events.UnityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAdsEventExecutor_InvokeInUpdate_mDD99384EAF53C65F310DB6D9E738F5F65A0B051A (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___eventParam0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInvokeInUpdateU3Ec__AnonStorey0_U3CU3Em__0_m3F739919615588E573F5D6B77761038D0B6D8807_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInvokeInUpdateU3Ec__AnonStorey0_tF0F601D18E2E6B9DBB319D500D2C05D0BDC31C67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInvokeInUpdateU3Ec__AnonStorey0_tF0F601D18E2E6B9DBB319D500D2C05D0BDC31C67* V_0 = NULL;
	{
		U3CInvokeInUpdateU3Ec__AnonStorey0_tF0F601D18E2E6B9DBB319D500D2C05D0BDC31C67* L_0 = (U3CInvokeInUpdateU3Ec__AnonStorey0_tF0F601D18E2E6B9DBB319D500D2C05D0BDC31C67*)il2cpp_codegen_object_new(U3CInvokeInUpdateU3Ec__AnonStorey0_tF0F601D18E2E6B9DBB319D500D2C05D0BDC31C67_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CInvokeInUpdateU3Ec__AnonStorey0__ctor_mD6FCF6FC84A141A42B2D40632E39BA8F7028216F(L_0, NULL);
		V_0 = L_0;
		U3CInvokeInUpdateU3Ec__AnonStorey0_tF0F601D18E2E6B9DBB319D500D2C05D0BDC31C67* L_1 = V_0;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = ___eventParam0;
		NullCheck(L_1);
		L_1->___eventParam_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___eventParam_0), (void*)L_2);
		U3CInvokeInUpdateU3Ec__AnonStorey0_tF0F601D18E2E6B9DBB319D500D2C05D0BDC31C67* L_3 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_4, L_3, (intptr_t)((void*)U3CInvokeInUpdateU3Ec__AnonStorey0_U3CU3Em__0_m3F739919615588E573F5D6B77761038D0B6D8807_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_ExecuteInUpdate_mE5099EC8616103C5EC42AD9C6E681BD4DE1158BD(L_4, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Common.MobileAdsEventExecutor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAdsEventExecutor_Update_mA2FA865A80DE36FC26CAD15783037324C74D5113 (MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7AF54658D389DA447BBE4C9F2D82278217B0972B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6096A4A06C95B18044A650D3E9AE2AA3D2ECA568_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5CDD305956FDEFA478FF8F1F8D44992132542261_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m475DC02C782750D4036B11E287BC01ECB8313D1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB6C244AAEBAD19DF16131057B7A205817A226254_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_runtime_class_init_inline(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
		bool L_0 = ((MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_StaticFields*)il2cpp_codegen_static_fields_for(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var))->___adEventsQueueEmpty_6;
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_1 = (List_1_tDB72209F35D56F62A287633F9450978E90B90987*)il2cpp_codegen_object_new(List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212(L_1, List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_2 = ((MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_StaticFields*)il2cpp_codegen_static_fields_for(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var))->___adEventsQueue_5;
		V_1 = L_2;
		RuntimeObject* L_3 = V_1;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_3, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{// begin finally (depth: 1)
				RuntimeObject* L_4 = V_1;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_4, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_5 = V_0;
			il2cpp_codegen_runtime_class_init_inline(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_6 = ((MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_StaticFields*)il2cpp_codegen_static_fields_for(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var))->___adEventsQueue_5;
			NullCheck(L_5);
			List_1_AddRange_m475DC02C782750D4036B11E287BC01ECB8313D1D(L_5, L_6, List_1_AddRange_m475DC02C782750D4036B11E287BC01ECB8313D1D_RuntimeMethod_var);
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_7 = ((MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_StaticFields*)il2cpp_codegen_static_fields_for(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var))->___adEventsQueue_5;
			NullCheck(L_7);
			List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_inline(L_7, List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_RuntimeMethod_var);
			il2cpp_codegen_memory_barrier();
			((MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_StaticFields*)il2cpp_codegen_static_fields_for(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var))->___adEventsQueueEmpty_6 = (bool)1;
			goto IL_0048;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0048:
	{
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_8 = V_0;
		NullCheck(L_8);
		Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D L_9;
		L_9 = List_1_GetEnumerator_mB6C244AAEBAD19DF16131057B7A205817A226254(L_8, List_1_GetEnumerator_mB6C244AAEBAD19DF16131057B7A205817A226254_RuntimeMethod_var);
		V_3 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7AF54658D389DA447BBE4C9F2D82278217B0972B((&V_3), Enumerator_Dispose_m7AF54658D389DA447BBE4C9F2D82278217B0972B_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006d_1;
			}

IL_0054_1:
			{
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10;
				L_10 = Enumerator_get_Current_m5CDD305956FDEFA478FF8F1F8D44992132542261_inline((&V_3), Enumerator_get_Current_m5CDD305956FDEFA478FF8F1F8D44992132542261_RuntimeMethod_var);
				V_2 = L_10;
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = V_2;
				NullCheck(L_11);
				RuntimeObject* L_12;
				L_12 = Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline(L_11, NULL);
				if (!L_12)
				{
					goto IL_006d_1;
				}
			}
			{
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_13 = V_2;
				NullCheck(L_13);
				Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_13, NULL);
			}

IL_006d_1:
			{
				bool L_14;
				L_14 = Enumerator_MoveNext_m6096A4A06C95B18044A650D3E9AE2AA3D2ECA568((&V_3), Enumerator_MoveNext_m6096A4A06C95B18044A650D3E9AE2AA3D2ECA568_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_0054_1;
				}
			}
			{
				goto IL_008c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008c:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.MobileAdsEventExecutor::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAdsEventExecutor_OnDisable_m23177F7EA326224E1CCB135CC0CF96FE54CAC975 (MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
		((MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_StaticFields*)il2cpp_codegen_static_fields_for(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var))->___instance_4 = (MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_StaticFields*)il2cpp_codegen_static_fields_for(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var))->___instance_4), (void*)(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A*)NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Common.MobileAdsEventExecutor::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAdsEventExecutor__cctor_m24C9A5BBC4C8804E36FF21A3D0A61D5B664A438A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_StaticFields*)il2cpp_codegen_static_fields_for(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var))->___instance_4 = (MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_StaticFields*)il2cpp_codegen_static_fields_for(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var))->___instance_4), (void*)(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A*)NULL);
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_0 = (List_1_tDB72209F35D56F62A287633F9450978E90B90987*)il2cpp_codegen_object_new(List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212(L_0, List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		((MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_StaticFields*)il2cpp_codegen_static_fields_for(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var))->___adEventsQueue_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_StaticFields*)il2cpp_codegen_static_fields_for(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var))->___adEventsQueue_5), (void*)L_0);
		il2cpp_codegen_memory_barrier();
		((MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_StaticFields*)il2cpp_codegen_static_fields_for(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var))->___adEventsQueueEmpty_6 = (bool)1;
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
// System.Void GoogleMobileAds.Common.MobileAdsEventExecutor/<InvokeInUpdate>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInvokeInUpdateU3Ec__AnonStorey0__ctor_mD6FCF6FC84A141A42B2D40632E39BA8F7028216F (U3CInvokeInUpdateU3Ec__AnonStorey0_tF0F601D18E2E6B9DBB319D500D2C05D0BDC31C67* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Common.MobileAdsEventExecutor/<InvokeInUpdate>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInvokeInUpdateU3Ec__AnonStorey0_U3CU3Em__0_m3F739919615588E573F5D6B77761038D0B6D8807 (U3CInvokeInUpdateU3Ec__AnonStorey0_tF0F601D18E2E6B9DBB319D500D2C05D0BDC31C67* __this, const RuntimeMethod* method) 
{
	{
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___eventParam_0;
		NullCheck(L_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_0, NULL);
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
// System.Void GoogleMobileAds.Common.RewardedAdDummyClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdDummyClient__ctor_mB0E0D416703422E162B3220574F075AA7C96CE2D (RewardedAdDummyClient_t5A0D28641D4F9934FBB2B215E9EC94040B134228* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAdDummyClient__ctor_mB0E0D416703422E162B3220574F075AA7C96CE2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		MethodBase_t* L_0;
		L_0 = il2cpp_codegen_get_method_object(RewardedAdDummyClient__ctor_mB0E0D416703422E162B3220574F075AA7C96CE2D_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedAdDummyClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdDummyClient_add_OnAdLoaded_m86A5A2C75D174594A1D2129B7693A6308826B1F3 (RewardedAdDummyClient_t5A0D28641D4F9934FBB2B215E9EC94040B134228* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_0;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdLoaded_0);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedAdDummyClient::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdDummyClient_remove_OnAdLoaded_m7C44C8438E123E5CF795732A2A13FB25F7D3C76A (RewardedAdDummyClient_t5A0D28641D4F9934FBB2B215E9EC94040B134228* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_0;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdLoaded_0);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedAdDummyClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdDummyClient_add_OnAdFailedToLoad_mE729258F7979CD2653EEDEF81936390E0A1A8256 (RewardedAdDummyClient_t5A0D28641D4F9934FBB2B215E9EC94040B134228* __this, EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* V_0 = NULL;
	EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* V_1 = NULL;
	{
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_0 = __this->___OnAdFailedToLoad_1;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50** L_2 = (&__this->___OnAdFailedToLoad_1);
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_3 = V_1;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_6 = V_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*>(L_2, ((EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)Castclass((RuntimeObject*)L_5, EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_8 = V_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)L_8) == ((RuntimeObject*)(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedAdDummyClient::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdDummyClient_remove_OnAdFailedToLoad_m420C746FD381B015CFA792899810D6CB1A0BEE86 (RewardedAdDummyClient_t5A0D28641D4F9934FBB2B215E9EC94040B134228* __this, EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* V_0 = NULL;
	EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* V_1 = NULL;
	{
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_0 = __this->___OnAdFailedToLoad_1;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50** L_2 = (&__this->___OnAdFailedToLoad_1);
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_3 = V_1;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_6 = V_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*>(L_2, ((EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)Castclass((RuntimeObject*)L_5, EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_8 = V_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)L_8) == ((RuntimeObject*)(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedAdDummyClient::add_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdDummyClient_add_OnUserEarnedReward_mB48C0B77D0DF1C81B2E7223990DFCB4E23C6BAFF (RewardedAdDummyClient_t5A0D28641D4F9934FBB2B215E9EC94040B134228* __this, EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* V_0 = NULL;
	EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* V_1 = NULL;
	{
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_0 = __this->___OnUserEarnedReward_2;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC** L_2 = (&__this->___OnUserEarnedReward_2);
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_3 = V_1;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_6 = V_0;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*>(L_2, ((EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)Castclass((RuntimeObject*)L_5, EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_8 = V_0;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)L_8) == ((RuntimeObject*)(EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedAdDummyClient::remove_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdDummyClient_remove_OnUserEarnedReward_mF8FF6B01C8C0CF7A5274E34720ED15361EC2773A (RewardedAdDummyClient_t5A0D28641D4F9934FBB2B215E9EC94040B134228* __this, EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* V_0 = NULL;
	EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* V_1 = NULL;
	{
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_0 = __this->___OnUserEarnedReward_2;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC** L_2 = (&__this->___OnUserEarnedReward_2);
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_3 = V_1;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_6 = V_0;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*>(L_2, ((EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)Castclass((RuntimeObject*)L_5, EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_8 = V_0;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)L_8) == ((RuntimeObject*)(EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedAdDummyClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdDummyClient_add_OnPaidEvent_m504E1CEA18AC9095692F0533D188555D6F53E2ED (RewardedAdDummyClient_t5A0D28641D4F9934FBB2B215E9EC94040B134228* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_2 = (&__this->___OnPaidEvent_3);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_3 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_6 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_2, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_5, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_8) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedAdDummyClient::remove_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdDummyClient_remove_OnPaidEvent_m1116FABE0AB2A7CE42BDDA259359A8D44AA302D6 (RewardedAdDummyClient_t5A0D28641D4F9934FBB2B215E9EC94040B134228* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_2 = (&__this->___OnPaidEvent_3);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_3 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_6 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_2, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_5, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_8) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedAdDummyClient::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdDummyClient_add_OnAdFailedToPresentFullScreenContent_m8FAC608F703D1BD587D7AF0EEFE9B03471D8A52D (RewardedAdDummyClient_t5A0D28641D4F9934FBB2B215E9EC94040B134228* __this, EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* V_0 = NULL;
	EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* V_1 = NULL;
	{
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_0 = __this->___OnAdFailedToPresentFullScreenContent_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E** L_2 = (&__this->___OnAdFailedToPresentFullScreenContent_4);
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_3 = V_1;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_6 = V_0;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*>(L_2, ((EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*)Castclass((RuntimeObject*)L_5, EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_8 = V_0;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*)L_8) == ((RuntimeObject*)(EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedAdDummyClient::remove_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdDummyClient_remove_OnAdFailedToPresentFullScreenContent_m586022B27B1237F9233EF1808027168A9C2AFBE7 (RewardedAdDummyClient_t5A0D28641D4F9934FBB2B215E9EC94040B134228* __this, EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* V_0 = NULL;
	EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* V_1 = NULL;
	{
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_0 = __this->___OnAdFailedToPresentFullScreenContent_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E** L_2 = (&__this->___OnAdFailedToPresentFullScreenContent_4);
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_3 = V_1;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_6 = V_0;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*>(L_2, ((EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*)Castclass((RuntimeObject*)L_5, EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_8 = V_0;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*)L_8) == ((RuntimeObject*)(EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedAdDummyClient::add_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdDummyClient_add_OnAdDidPresentFullScreenContent_m5EC84015A60685DA69482C4076E67016EBC341DA (RewardedAdDummyClient_t5A0D28641D4F9934FBB2B215E9EC94040B134228* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidPresentFullScreenContent_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidPresentFullScreenContent_5);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedAdDummyClient::remove_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdDummyClient_remove_OnAdDidPresentFullScreenContent_mDB647E2E177D482A13C5FCE2E3E37EEFFFAE6122 (RewardedAdDummyClient_t5A0D28641D4F9934FBB2B215E9EC94040B134228* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidPresentFullScreenContent_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidPresentFullScreenContent_5);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedAdDummyClient::add_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdDummyClient_add_OnAdDidDismissFullScreenContent_m86E3D2D619678AD4D892DE87E7AE726DEB812F47 (RewardedAdDummyClient_t5A0D28641D4F9934FBB2B215E9EC94040B134228* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidDismissFullScreenContent_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidDismissFullScreenContent_6);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedAdDummyClient::remove_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdDummyClient_remove_OnAdDidDismissFullScreenContent_mDF982E63EEC16B3C4AA3C04629604CA35D47CAEE (RewardedAdDummyClient_t5A0D28641D4F9934FBB2B215E9EC94040B134228* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidDismissFullScreenContent_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidDismissFullScreenContent_6);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedAdDummyClient::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdDummyClient_add_OnAdDidRecordImpression_mA22177FC987A219E5061A67638A655FB0568767F (RewardedAdDummyClient_t5A0D28641D4F9934FBB2B215E9EC94040B134228* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidRecordImpression_7;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidRecordImpression_7);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedAdDummyClient::remove_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdDummyClient_remove_OnAdDidRecordImpression_m703D899305E392DD4FEDD4F264B60BCFFBCC6E12 (RewardedAdDummyClient_t5A0D28641D4F9934FBB2B215E9EC94040B134228* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidRecordImpression_7;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidRecordImpression_7);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedAdDummyClient::CreateRewardedAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdDummyClient_CreateRewardedAd_mCA7172418B77784BB6C5C246A8ECCE4563E480BF (RewardedAdDummyClient_t5A0D28641D4F9934FBB2B215E9EC94040B134228* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAdDummyClient_CreateRewardedAd_mCA7172418B77784BB6C5C246A8ECCE4563E480BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodBase_t* L_0;
		L_0 = il2cpp_codegen_get_method_object(RewardedAdDummyClient_CreateRewardedAd_mCA7172418B77784BB6C5C246A8ECCE4563E480BF_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedAdDummyClient::LoadAd(System.String,GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdDummyClient_LoadAd_m7D96641321647A73614118C36E1319E4324E479B (RewardedAdDummyClient_t5A0D28641D4F9934FBB2B215E9EC94040B134228* __this, String_t* ___adUnitId0, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAdDummyClient_LoadAd_m7D96641321647A73614118C36E1319E4324E479B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodBase_t* L_0;
		L_0 = il2cpp_codegen_get_method_object(RewardedAdDummyClient_LoadAd_m7D96641321647A73614118C36E1319E4324E479B_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = __this->___OnAdLoaded_0;
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = __this->___OnAdLoaded_0;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_5 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(L_4);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_4, __this, L_5, NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedAdDummyClient::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdDummyClient_Show_m4B6CD331BC0BAFD809704D05A5E49AE85523B978 (RewardedAdDummyClient_t5A0D28641D4F9934FBB2B215E9EC94040B134228* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAdDummyClient_Show_m4B6CD331BC0BAFD809704D05A5E49AE85523B978_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodBase_t* L_0;
		L_0 = il2cpp_codegen_get_method_object(RewardedAdDummyClient_Show_m4B6CD331BC0BAFD809704D05A5E49AE85523B978_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		return;
	}
}
// GoogleMobileAds.Api.Reward GoogleMobileAds.Common.RewardedAdDummyClient::GetRewardItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* RewardedAdDummyClient_GetRewardItem_m48FA06DA3DCECAEEE41DAB6CAEAA094BC14F2F3F (RewardedAdDummyClient_t5A0D28641D4F9934FBB2B215E9EC94040B134228* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAdDummyClient_GetRewardItem_m48FA06DA3DCECAEEE41DAB6CAEAA094BC14F2F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodBase_t* L_0;
		L_0 = il2cpp_codegen_get_method_object(RewardedAdDummyClient_GetRewardItem_m48FA06DA3DCECAEEE41DAB6CAEAA094BC14F2F3F_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		return (Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511*)NULL;
	}
}
// System.Void GoogleMobileAds.Common.RewardedAdDummyClient::SetServerSideVerificationOptions(GoogleMobileAds.Api.ServerSideVerificationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdDummyClient_SetServerSideVerificationOptions_m0253095BB79BACF39ED233FE66C822D44F437BD8 (RewardedAdDummyClient_t5A0D28641D4F9934FBB2B215E9EC94040B134228* __this, ServerSideVerificationOptions_tCB0CF0403C3E4DDA0E47F9594BE01D214B4673C3* ___serverSideVerificationOptions0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAdDummyClient_SetServerSideVerificationOptions_m0253095BB79BACF39ED233FE66C822D44F437BD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodBase_t* L_0;
		L_0 = il2cpp_codegen_get_method_object(RewardedAdDummyClient_SetServerSideVerificationOptions_m0253095BB79BACF39ED233FE66C822D44F437BD8_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedAdDummyClient::DestroyRewardedAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAdDummyClient_DestroyRewardedAd_m70BAE3AF6D3ACA14F4CBBB0CC62829C183B28BDD (RewardedAdDummyClient_t5A0D28641D4F9934FBB2B215E9EC94040B134228* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAdDummyClient_DestroyRewardedAd_m70BAE3AF6D3ACA14F4CBBB0CC62829C183B28BDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodBase_t* L_0;
		L_0 = il2cpp_codegen_get_method_object(RewardedAdDummyClient_DestroyRewardedAd_m70BAE3AF6D3ACA14F4CBBB0CC62829C183B28BDD_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		return;
	}
}
// GoogleMobileAds.Common.IResponseInfoClient GoogleMobileAds.Common.RewardedAdDummyClient::GetResponseInfoClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewardedAdDummyClient_GetResponseInfoClient_m5A28A116B76FDC1439B762929FA825849AA5A021 (RewardedAdDummyClient_t5A0D28641D4F9934FBB2B215E9EC94040B134228* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAdDummyClient_GetResponseInfoClient_m5A28A116B76FDC1439B762929FA825849AA5A021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodBase_t* L_0;
		L_0 = il2cpp_codegen_get_method_object(RewardedAdDummyClient_GetResponseInfoClient_m5A28A116B76FDC1439B762929FA825849AA5A021_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		return (RuntimeObject*)NULL;
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
// System.Void GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdDummyClient__ctor_mBD4784028EAA8039B6BBCD7BF5991ECF40ED9536 (RewardedInterstitialAdDummyClient_tB83A7E5904C72243BB4020BBAA7C59679D25370C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAdDummyClient__ctor_mBD4784028EAA8039B6BBCD7BF5991ECF40ED9536_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		MethodBase_t* L_0;
		L_0 = il2cpp_codegen_get_method_object(RewardedInterstitialAdDummyClient__ctor_mBD4784028EAA8039B6BBCD7BF5991ECF40ED9536_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdDummyClient_add_OnAdLoaded_m19797747D96DC034076221BD597826FD0328D5E5 (RewardedInterstitialAdDummyClient_tB83A7E5904C72243BB4020BBAA7C59679D25370C* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_0;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdLoaded_0);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdDummyClient_remove_OnAdLoaded_mD00C36FD024530206E8C44D6040D3DD786ABCEDB (RewardedInterstitialAdDummyClient_tB83A7E5904C72243BB4020BBAA7C59679D25370C* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_0;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdLoaded_0);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdDummyClient_add_OnAdFailedToLoad_m938FC288EFCCD96BD85826E9FED5432DFB611034 (RewardedInterstitialAdDummyClient_tB83A7E5904C72243BB4020BBAA7C59679D25370C* __this, EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* V_0 = NULL;
	EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* V_1 = NULL;
	{
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_0 = __this->___OnAdFailedToLoad_1;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50** L_2 = (&__this->___OnAdFailedToLoad_1);
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_3 = V_1;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_6 = V_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*>(L_2, ((EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)Castclass((RuntimeObject*)L_5, EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_8 = V_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)L_8) == ((RuntimeObject*)(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdDummyClient_remove_OnAdFailedToLoad_mFCD93A60DAE19726B821C36C095A8A556A4A4C96 (RewardedInterstitialAdDummyClient_tB83A7E5904C72243BB4020BBAA7C59679D25370C* __this, EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* V_0 = NULL;
	EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* V_1 = NULL;
	{
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_0 = __this->___OnAdFailedToLoad_1;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50** L_2 = (&__this->___OnAdFailedToLoad_1);
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_3 = V_1;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_6 = V_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*>(L_2, ((EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)Castclass((RuntimeObject*)L_5, EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_8 = V_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)L_8) == ((RuntimeObject*)(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::add_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdDummyClient_add_OnUserEarnedReward_mC63309A1C200E937AD34116A27F9024F37420FD5 (RewardedInterstitialAdDummyClient_tB83A7E5904C72243BB4020BBAA7C59679D25370C* __this, EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* V_0 = NULL;
	EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* V_1 = NULL;
	{
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_0 = __this->___OnUserEarnedReward_2;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC** L_2 = (&__this->___OnUserEarnedReward_2);
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_3 = V_1;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_6 = V_0;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*>(L_2, ((EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)Castclass((RuntimeObject*)L_5, EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_8 = V_0;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)L_8) == ((RuntimeObject*)(EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::remove_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdDummyClient_remove_OnUserEarnedReward_m54B6E00FA50B423065CD3715D22BEA31B68FC2E2 (RewardedInterstitialAdDummyClient_tB83A7E5904C72243BB4020BBAA7C59679D25370C* __this, EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* V_0 = NULL;
	EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* V_1 = NULL;
	{
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_0 = __this->___OnUserEarnedReward_2;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC** L_2 = (&__this->___OnUserEarnedReward_2);
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_3 = V_1;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_6 = V_0;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*>(L_2, ((EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)Castclass((RuntimeObject*)L_5, EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_8 = V_0;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)L_8) == ((RuntimeObject*)(EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdDummyClient_add_OnPaidEvent_m4489525C3318ABA763D8CCCC775762321EAB9437 (RewardedInterstitialAdDummyClient_tB83A7E5904C72243BB4020BBAA7C59679D25370C* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_2 = (&__this->___OnPaidEvent_3);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_3 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_6 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_2, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_5, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_8) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::remove_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdDummyClient_remove_OnPaidEvent_m841646665A06C7E6EEC412BDECEACA198F6AE9CC (RewardedInterstitialAdDummyClient_tB83A7E5904C72243BB4020BBAA7C59679D25370C* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_2 = (&__this->___OnPaidEvent_3);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_3 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_6 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_2, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_5, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_8) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdDummyClient_add_OnAdFailedToPresentFullScreenContent_mD015F0F9D84985B7B701F9D86052F462D1657E7C (RewardedInterstitialAdDummyClient_tB83A7E5904C72243BB4020BBAA7C59679D25370C* __this, EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* V_0 = NULL;
	EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* V_1 = NULL;
	{
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_0 = __this->___OnAdFailedToPresentFullScreenContent_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E** L_2 = (&__this->___OnAdFailedToPresentFullScreenContent_4);
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_3 = V_1;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_6 = V_0;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*>(L_2, ((EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*)Castclass((RuntimeObject*)L_5, EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_8 = V_0;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*)L_8) == ((RuntimeObject*)(EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::remove_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdDummyClient_remove_OnAdFailedToPresentFullScreenContent_mF86950B35E43DCA60F52B78E0A713BE6C9AA4A81 (RewardedInterstitialAdDummyClient_tB83A7E5904C72243BB4020BBAA7C59679D25370C* __this, EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* V_0 = NULL;
	EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* V_1 = NULL;
	{
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_0 = __this->___OnAdFailedToPresentFullScreenContent_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E** L_2 = (&__this->___OnAdFailedToPresentFullScreenContent_4);
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_3 = V_1;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_6 = V_0;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*>(L_2, ((EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*)Castclass((RuntimeObject*)L_5, EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_8 = V_0;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*)L_8) == ((RuntimeObject*)(EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::add_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdDummyClient_add_OnAdDidPresentFullScreenContent_m9D0D668824FDD75A2B767006130CDD6E9DBB9557 (RewardedInterstitialAdDummyClient_tB83A7E5904C72243BB4020BBAA7C59679D25370C* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidPresentFullScreenContent_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidPresentFullScreenContent_5);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::remove_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdDummyClient_remove_OnAdDidPresentFullScreenContent_m090A2F21649506EFAEF3A0507D100C2B6BF109C9 (RewardedInterstitialAdDummyClient_tB83A7E5904C72243BB4020BBAA7C59679D25370C* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidPresentFullScreenContent_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidPresentFullScreenContent_5);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::add_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdDummyClient_add_OnAdDidDismissFullScreenContent_m805F8085DDC8908272D426B766D67167BECCCC1C (RewardedInterstitialAdDummyClient_tB83A7E5904C72243BB4020BBAA7C59679D25370C* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidDismissFullScreenContent_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidDismissFullScreenContent_6);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::remove_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdDummyClient_remove_OnAdDidDismissFullScreenContent_m2F49125327D92C2F147366A1DB2F0C195E9EBE92 (RewardedInterstitialAdDummyClient_tB83A7E5904C72243BB4020BBAA7C59679D25370C* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidDismissFullScreenContent_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidDismissFullScreenContent_6);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdDummyClient_add_OnAdDidRecordImpression_m17C800D0E2EB3064E056725A9506A1997BB6C733 (RewardedInterstitialAdDummyClient_tB83A7E5904C72243BB4020BBAA7C59679D25370C* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidRecordImpression_7;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidRecordImpression_7);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::remove_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdDummyClient_remove_OnAdDidRecordImpression_mC2A3728430C9F1B3ED69F99AC5D0DE40F8D7B2DD (RewardedInterstitialAdDummyClient_tB83A7E5904C72243BB4020BBAA7C59679D25370C* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidRecordImpression_7;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidRecordImpression_7);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::CreateRewardedInterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdDummyClient_CreateRewardedInterstitialAd_m4D025E0B03CCC76E2C167BDA50C7FC06CF7BBAF7 (RewardedInterstitialAdDummyClient_tB83A7E5904C72243BB4020BBAA7C59679D25370C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAdDummyClient_CreateRewardedInterstitialAd_m4D025E0B03CCC76E2C167BDA50C7FC06CF7BBAF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodBase_t* L_0;
		L_0 = il2cpp_codegen_get_method_object(RewardedInterstitialAdDummyClient_CreateRewardedInterstitialAd_m4D025E0B03CCC76E2C167BDA50C7FC06CF7BBAF7_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::LoadAd(System.String,GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdDummyClient_LoadAd_m6E31735A8C63F41935B13339E1FABEDEE81C5C77 (RewardedInterstitialAdDummyClient_tB83A7E5904C72243BB4020BBAA7C59679D25370C* __this, String_t* ___adUnitID0, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAdDummyClient_LoadAd_m6E31735A8C63F41935B13339E1FABEDEE81C5C77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodBase_t* L_0;
		L_0 = il2cpp_codegen_get_method_object(RewardedInterstitialAdDummyClient_LoadAd_m6E31735A8C63F41935B13339E1FABEDEE81C5C77_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		return;
	}
}
// GoogleMobileAds.Api.Reward GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::GetRewardItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* RewardedInterstitialAdDummyClient_GetRewardItem_mA3013B4BD7FDF1301FBFCA3317A0715849269671 (RewardedInterstitialAdDummyClient_tB83A7E5904C72243BB4020BBAA7C59679D25370C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAdDummyClient_GetRewardItem_mA3013B4BD7FDF1301FBFCA3317A0715849269671_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodBase_t* L_0;
		L_0 = il2cpp_codegen_get_method_object(RewardedInterstitialAdDummyClient_GetRewardItem_mA3013B4BD7FDF1301FBFCA3317A0715849269671_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		return (Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511*)NULL;
	}
}
// System.Void GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdDummyClient_Show_m1ADB8D407655FA4593DB4365ED453978C4913A2C (RewardedInterstitialAdDummyClient_tB83A7E5904C72243BB4020BBAA7C59679D25370C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAdDummyClient_Show_m1ADB8D407655FA4593DB4365ED453978C4913A2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodBase_t* L_0;
		L_0 = il2cpp_codegen_get_method_object(RewardedInterstitialAdDummyClient_Show_m1ADB8D407655FA4593DB4365ED453978C4913A2C_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::SetServerSideVerificationOptions(GoogleMobileAds.Api.ServerSideVerificationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdDummyClient_SetServerSideVerificationOptions_m2FFFA1D1C7CC1995EFC83E47B786841B50CC1B6B (RewardedInterstitialAdDummyClient_tB83A7E5904C72243BB4020BBAA7C59679D25370C* __this, ServerSideVerificationOptions_tCB0CF0403C3E4DDA0E47F9594BE01D214B4673C3* ___serverSideVerificationOptions0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAdDummyClient_SetServerSideVerificationOptions_m2FFFA1D1C7CC1995EFC83E47B786841B50CC1B6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodBase_t* L_0;
		L_0 = il2cpp_codegen_get_method_object(RewardedInterstitialAdDummyClient_SetServerSideVerificationOptions_m2FFFA1D1C7CC1995EFC83E47B786841B50CC1B6B_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::DestroyRewardedInterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAdDummyClient_DestroyRewardedInterstitialAd_m19C0DFBDCF427EACBE986D9D36EA483010EC5014 (RewardedInterstitialAdDummyClient_tB83A7E5904C72243BB4020BBAA7C59679D25370C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAdDummyClient_DestroyRewardedInterstitialAd_m19C0DFBDCF427EACBE986D9D36EA483010EC5014_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodBase_t* L_0;
		L_0 = il2cpp_codegen_get_method_object(RewardedInterstitialAdDummyClient_DestroyRewardedInterstitialAd_m19C0DFBDCF427EACBE986D9D36EA483010EC5014_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		return;
	}
}
// GoogleMobileAds.Common.IResponseInfoClient GoogleMobileAds.Common.RewardedInterstitialAdDummyClient::GetResponseInfoClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewardedInterstitialAdDummyClient_GetResponseInfoClient_m1ABC6D874B3D08C6BD0276DF6859675639C2083A (RewardedInterstitialAdDummyClient_tB83A7E5904C72243BB4020BBAA7C59679D25370C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAdDummyClient_GetResponseInfoClient_m1ABC6D874B3D08C6BD0276DF6859675639C2083A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodBase_t* L_0;
		L_0 = il2cpp_codegen_get_method_object(RewardedInterstitialAdDummyClient_GetResponseInfoClient_m1ABC6D874B3D08C6BD0276DF6859675639C2083A_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3C81F186092FD937E80B1B266D4706CC0D65FAF8, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		return (RuntimeObject*)NULL;
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
// System.Void GoogleMobileAds.Common.Utils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils__ctor_mDF88E7FFAB0CAF54C41DAA38C3224C7DF0EE2AF7 (Utils_tE28BDA20CE8AA5CDA4AEE27FCDE44EEE4179F0EE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Common.Utils::CheckInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_CheckInitialization_m670B2D64F341DADDF15EF3D4DEA2200417ABB509 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB977C8ABD5DC51A9CAB375AB6B9292A8DE3E94BB);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = MobileAdsEventExecutor_IsActive_m2F3173138B6DE0A38204C853F8E3F14EF61C2F2B(NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralB977C8ABD5DC51A9CAB375AB6B9292A8DE3E94BB, NULL);
	}

IL_0014:
	{
		il2cpp_codegen_runtime_class_init_inline(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_Initialize_mC709241C3C961D263D46BC73FBFB66E07AEB2AC6(NULL);
		return;
	}
}
// UnityEngine.Texture2D GoogleMobileAds.Common.Utils::GetTexture2DFromByteArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Utils_GetTexture2DFromByteArray_mE7EE7F698937655E835296C3B86D00C6642920CA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___img0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_0, 1, 1, NULL);
		V_0 = L_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___img0;
		bool L_3;
		L_3 = ImageConversion_LoadImage_mBB2DFA1F5BDFF2B81DD0453356EFB092BC5180EC(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE4B457907B315DC803DC1665C4DBE73F1BC72D4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utils_GetTexture2DFromByteArray_mE7EE7F698937655E835296C3B86D00C6642920CA_RuntimeMethod_var)));
	}

IL_001f:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = V_0;
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline (Delegate_t* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___m_target_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->____size_2;
		V_0 = L_2;
		__this->____size_2 = 0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		int32_t L_5 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_4, 0, L_5, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mB8EBD394BCA1574F4FE9C1C05A4F246099C4DA48_gshared_inline (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577* __this, RuntimeObject* ___sender0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
