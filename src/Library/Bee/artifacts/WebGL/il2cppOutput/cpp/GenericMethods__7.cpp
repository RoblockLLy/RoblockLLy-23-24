﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IEqualityComparer_1_tF175EE4608832085A0EE2A97DAE545B83F097888;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68;
struct List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
struct EnumU5BU5D_t6106A94708E3435454078BF14FA50152B7301912;
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
struct HighlightStateU5BU5D_tCF5677B4773947CE4C64B938B12AC50DDA347435;
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
struct MaterialReferenceU5BU5D_t4A9B88114E223BD96CE5121053664023CE2DE07E;
struct PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD;
struct PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D;
struct ShaderTagIdU5BU5D_tE1BA124E13B8096153E25C5AF9C1D15D71466143;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE;
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
struct TextAlignmentU5BU5D_t756DC2D672145699CB9718DDBA5982ED51A95F49;
struct TextColorGradientU5BU5D_tA27A5E49640CF01334A10DBDBC959903AFBD941A;
struct TextFontWeightU5BU5D_t3DE32809AEE657255C8333897D61F2EA5279D43F;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C;
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
struct BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
struct CullingAllocationInfo_tB260F5CD0B290F74E145EB16E54B901CC68D9D5A;
struct DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66;
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C;
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0;
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
struct MemberInfo_t;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct PerformDynamicRes_t0949EAA6943CF225A1F61B233E13A440C1C09B47;
struct ProbeReferenceVolumeProfile_t375DE65898ECAC87F866E00E990A090B62FEFB06;
struct RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA;
struct RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727;
struct RenderGraphPass_t7689449D6979D97B31E962897EB038EA3F01D361;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
struct SequenceNode_t49ACD22961E06675458A60447D7AA32B26835AB0;
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
struct SortColumnDescription_t278A693B84340D73A6FADCFB1521E313A80F9C37;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313;
struct String_t;
struct StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD;
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428;
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
struct TextColorGradient_t22D94E441E8E8CD772B966C167E5C0AEB0919D70;
struct TextElement_tCEF567A8810788262275B39DC39CBA6EBE7472DA;
struct TextInfo_t27E58E62A7552C66D38C175AF9D22622365F5D09;
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Type_t;
struct UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302;
struct UnicodeEncoding_t2C90D9E1E55C16081FACA57B229053C1EF05DAF0;
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE;
struct CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509;
struct UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4;

IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Edge_t1E55CB4BDAF40F0F124DEA86AE84673377D27A8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1;
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B;
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_com;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke;
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0;
struct StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D;
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7;
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2;
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3;
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_com;
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack;
	int32_t ___index;
	float ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack;
	int32_t ___index;
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack;
	int32_t ___index;
	float ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TextProcessingStack_1_t0F39F088E8F8F6E18C3C463B2998ADC5B7A0513E 
{
	TextColorGradientU5BU5D_tA27A5E49640CF01334A10DBDBC959903AFBD941A* ___itemStack;
	int32_t ___index;
	TextColorGradient_t22D94E441E8E8CD772B966C167E5C0AEB0919D70* ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F 
{
	Type_t* ___U3CArgumentTypeU3Ek__BackingField;
	RuntimeObject* ___U3CValueU3Ek__BackingField;
};
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_pinvoke
{
	Type_t* ___U3CArgumentTypeU3Ek__BackingField;
	Il2CppIUnknown* ___U3CValueU3Ek__BackingField;
};
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_com
{
	Type_t* ___U3CArgumentTypeU3Ek__BackingField;
	Il2CppIUnknown* ___U3CValueU3Ek__BackingField;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___flags;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_OffsetPadding[4];
			int32_t ___hi;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_OffsetPadding[8];
			int32_t ___lo;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_OffsetPadding[12];
			int32_t ___mid;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_OffsetPadding[8];
			uint64_t ___ulomidLE;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_forAlignmentOnly;
		};
	};
};
struct DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 
{
	uint8_t ___m_WriteEnabled;
	int8_t ___m_CompareFunction;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	RuntimeObject* ____key;
	RuntimeObject* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 
{
	int32_t ___firstIndex;
	int32_t ___indexCount;
	int32_t ___minIndexVal;
	int32_t ___vertsReferenced;
};
struct Edge_t1E55CB4BDAF40F0F124DEA86AE84673377D27A8F 
{
	int32_t ___a;
	int32_t ___b;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 
{
	EnumU5BU5D_t6106A94708E3435454078BF14FA50152B7301912* ___values;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___flagValues;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___displayNames;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___names;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tooltip;
	bool ___flags;
	Type_t* ___underlyingType;
	bool ___unsigned;
	bool ___serializable;
};
struct EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_marshaled_pinvoke
{
	EnumU5BU5D_t6106A94708E3435454078BF14FA50152B7301912* ___values;
	Il2CppSafeArray* ___flagValues;
	char** ___displayNames;
	char** ___names;
	char** ___tooltip;
	int32_t ___flags;
	Type_t* ___underlyingType;
	int32_t ___unsigned;
	int32_t ___serializable;
};
struct EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_marshaled_com
{
	EnumU5BU5D_t6106A94708E3435454078BF14FA50152B7301912* ___values;
	Il2CppSafeArray* ___flagValues;
	Il2CppChar** ___displayNames;
	Il2CppChar** ___names;
	Il2CppChar** ___tooltip;
	int32_t ___flags;
	Type_t* ___underlyingType;
	int32_t ___unsigned;
	int32_t ___serializable;
};
struct Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 
{
	RuntimeObject* ___key;
	RuntimeObject* ___value;
};
struct Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshaled_pinvoke
{
	Il2CppIUnknown* ___key;
	Il2CppIUnknown* ___value;
};
struct Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshaled_com
{
	Il2CppIUnknown* ___key;
	Il2CppIUnknown* ___value;
};
struct FieldDropdownMenu_tE480B8DDAB861943653D1466DD4F372339ABA81A 
{
	String_t* ___Text;
	String_t* ___Value;
};
struct FieldDropdownMenu_tE480B8DDAB861943653D1466DD4F372339ABA81A_marshaled_pinvoke
{
	char* ___Text;
	char* ___Value;
};
struct FieldDropdownMenu_tE480B8DDAB861943653D1466DD4F372339ABA81A_marshaled_com
{
	Il2CppChar* ___Text;
	Il2CppChar* ___Value;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontStyleStack_t63C77495F068E6DF762D6AF063A817E3709659A7 
{
	uint8_t ___bold;
	uint8_t ___italic;
	uint8_t ___underline;
	uint8_t ___strikethrough;
	uint8_t ___highlight;
	uint8_t ___superscript;
	uint8_t ___subscript;
	uint8_t ___uppercase;
	uint8_t ___lowercase;
	uint8_t ___smallcaps;
};
struct FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42 
{
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___regularTypeface;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___italicTypeface;
};
struct FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_marshaled_pinvoke
{
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___regularTypeface;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___italicTypeface;
};
struct FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_marshaled_com
{
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___regularTypeface;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___italicTypeface;
};
struct FrameTimeSample_tADB152E5D63C6EB073852FBE9D9EE9A66CA31AA7 
{
	float ___FramesPerSecond;
	float ___FullFrameTime;
	float ___MainThreadCPUFrameTime;
	float ___MainThreadCPUPresentWaitTime;
	float ___RenderThreadCPUFrameTime;
	float ___GPUFrameTime;
};
struct FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD 
{
	double ___cpuFrameTime;
	double ___cpuMainThreadFrameTime;
	double ___cpuMainThreadPresentWaitTime;
	double ___cpuRenderThreadFrameTime;
	double ___gpuFrameTime;
	uint64_t ___frameStartTimestamp;
	uint64_t ___firstSubmitTimestamp;
	uint64_t ___cpuTimePresentCalled;
	uint64_t ___cpuTimeFrameComplete;
	float ___heightScale;
	float ___widthScale;
	uint32_t ___syncInterval;
};
struct GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 
{
	float ___m_XCoordinate;
	float ___m_YCoordinate;
};
struct GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A 
{
	float ___m_Width;
	float ___m_Height;
	float ___m_HorizontalBearingX;
	float ___m_HorizontalBearingY;
	float ___m_HorizontalAdvance;
};
struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E 
{
	float ___m_XPlacement;
	float ___m_YPlacement;
	float ___m_XAdvance;
	float ___m_YAdvance;
};
struct GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 
{
	float ___alpha;
	float ___time;
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 
{
	uint64_t ___u64_0;
	uint64_t ___u64_1;
};
struct IndexField_t6285D0782FB7D55EC60F7DFB20AF7D3E7D37B795 
{
	DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___Column;
	bool ___IsDescending;
};
struct IndexField_t6285D0782FB7D55EC60F7DFB20AF7D3E7D37B795_marshaled_pinvoke
{
	DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___Column;
	int32_t ___IsDescending;
};
struct IndexField_t6285D0782FB7D55EC60F7DFB20AF7D3E7D37B795_marshaled_com
{
	DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___Column;
	int32_t ___IsDescending;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316 
{
	uint16_t ___codePage;
	uint16_t ___uiFamilyCodePage;
	uint32_t ___flags;
	String_t* ___Names;
};
struct InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshaled_pinvoke
{
	uint16_t ___codePage;
	uint16_t ___uiFamilyCodePage;
	uint32_t ___flags;
	char* ___Names;
};
struct InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshaled_com
{
	uint16_t ___codePage;
	uint16_t ___uiFamilyCodePage;
	uint32_t ___flags;
	Il2CppChar* ___Names;
};
struct InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB 
{
	String_t* ___webName;
	uint16_t ___codePage;
};
struct InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshaled_pinvoke
{
	char* ___webName;
	uint16_t ___codePage;
};
struct InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshaled_com
{
	Il2CppChar* ___webName;
	uint16_t ___codePage;
};
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup;
	int32_t ___version;
};
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	float ___m_Time;
	float ___m_Value;
	float ___m_InTangent;
	float ___m_OutTangent;
	int32_t ___m_WeightedMode;
	float ___m_InWeight;
	float ___m_OutWeight;
};
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	int32_t ___m_Mask;
};
struct LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_ComponentGlyphIDs;
	uint32_t ___m_LigatureGlyphID;
};
struct LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_marshaled_pinvoke
{
	Il2CppSafeArray* ___m_ComponentGlyphIDs;
	uint32_t ___m_LigatureGlyphID;
};
struct LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_marshaled_com
{
	Il2CppSafeArray* ___m_ComponentGlyphIDs;
	uint32_t ___m_LigatureGlyphID;
};
struct LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 
{
	float ___m_red;
	float ___m_green;
	float ___m_blue;
	float ___m_intensity;
};
struct LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8 
{
	int32_t ___hashCode;
	int32_t ___linkIdFirstCharacterIndex;
	int32_t ___linkIdLength;
	int32_t ___linkTextfirstCharacterIndex;
	int32_t ___linkTextLength;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___linkId;
	String_t* ___m_LinkIdString;
	String_t* ___m_LinkTextString;
};
struct LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshaled_pinvoke
{
	int32_t ___hashCode;
	int32_t ___linkIdFirstCharacterIndex;
	int32_t ___linkIdLength;
	int32_t ___linkTextfirstCharacterIndex;
	int32_t ___linkTextLength;
	uint8_t* ___linkId;
	char* ___m_LinkIdString;
	char* ___m_LinkTextString;
};
struct LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshaled_com
{
	int32_t ___hashCode;
	int32_t ___linkIdFirstCharacterIndex;
	int32_t ___linkIdLength;
	int32_t ___linkTextfirstCharacterIndex;
	int32_t ___linkTextLength;
	uint8_t* ___linkId;
	Il2CppChar* ___m_LinkIdString;
	Il2CppChar* ___m_LinkTextString;
};
struct MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 
{
	float ___m_XPositionAdjustment;
	float ___m_YPositionAdjustment;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	int32_t ___index;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	bool ___isDefaultMaterial;
	bool ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___isDefaultMaterial;
	int32_t ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___isDefaultMaterial;
	int32_t ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26 
{
	int32_t ___index;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	bool ___isDefaultMaterial;
	bool ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshaled_pinvoke
{
	int32_t ___index;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___isDefaultMaterial;
	int32_t ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshaled_com
{
	int32_t ___index;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___isDefaultMaterial;
	int32_t ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B 
{
	uint32_t ___m_TargetGlyphID;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_SubstituteGlyphIDs;
};
struct MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_marshaled_pinvoke
{
	uint32_t ___m_TargetGlyphID;
	Il2CppSafeArray* ___m_SubstituteGlyphIDs;
};
struct MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_marshaled_com
{
	uint32_t ___m_TargetGlyphID;
	Il2CppSafeArray* ___m_SubstituteGlyphIDs;
};
struct Number_t76C3F1C69D96DD914E1BC182AFBCBAFF91372F5A 
{
	bool ___IsNaN;
	float ___Value;
};
struct Number_t76C3F1C69D96DD914E1BC182AFBCBAFF91372F5A_marshaled_pinvoke
{
	int32_t ___IsNaN;
	float ___Value;
};
struct Number_t76C3F1C69D96DD914E1BC182AFBCBAFF91372F5A_marshaled_com
{
	int32_t ___IsNaN;
	float ___Value;
};
struct Offset_tF4AF8F62C21FD6DCB5255F705A59CC10583E22C4 
{
	float ___m_Left;
	float ___m_Right;
	float ___m_Top;
	float ___m_Bottom;
};
struct PageInfo_tFFF6B289E9A37E4D69353B32F941421180DA5909 
{
	int32_t ___firstCharacterIndex;
	int32_t ___lastCharacterIndex;
	float ___ascender;
	float ___baseLine;
	float ___descender;
};
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____byRef;
};
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_pinvoke
{
	int32_t* ____byRef;
};
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_com
{
	int32_t* ____byRef;
};
struct ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167 
{
	bool ___enableDilation;
	float ___dilationDistance;
	float ___dilationValidityThreshold;
	int32_t ___dilationIterations;
	bool ___squaredDistWeighting;
};
struct ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167_marshaled_pinvoke
{
	int32_t ___enableDilation;
	float ___dilationDistance;
	float ___dilationValidityThreshold;
	int32_t ___dilationIterations;
	int32_t ___squaredDistWeighting;
};
struct ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167_marshaled_com
{
	int32_t ___enableDilation;
	float ___dilationDistance;
	float ___dilationValidityThreshold;
	int32_t ___dilationIterations;
	int32_t ___squaredDistWeighting;
};
struct ProcedureArgumentIndexUpdate_tB2AD685BF98B75231BB98CE4FD4BB0BF790098DD 
{
	int32_t ___Before;
	int32_t ___After;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F 
{
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___curpos;
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___rangeCounters;
};
struct RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F_marshaled_pinvoke
{
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___curpos;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* ___rangeCounters;
};
struct RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F_marshaled_com
{
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___curpos;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* ___rangeCounters;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	int32_t ___m_XMin;
	int32_t ___m_YMin;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A 
{
	int32_t ___U3CsizeU3Ek__BackingField;
	int32_t ___U3CoffsetObjectToWorldU3Ek__BackingField;
	int32_t ___U3CoffsetPrevObjectToWorldU3Ek__BackingField;
	int32_t ___U3CoffsetRenderingLayerMaskU3Ek__BackingField;
};
struct RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 
{
	int32_t ___m_LowerBound;
	int32_t ___m_UpperBound;
};
struct RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 
{
	uint8_t ___m_WriteMask;
	uint8_t ___m_SourceColorBlendMode;
	uint8_t ___m_DestinationColorBlendMode;
	uint8_t ___m_SourceAlphaBlendMode;
	uint8_t ___m_DestinationAlphaBlendMode;
	uint8_t ___m_ColorBlendOperation;
	uint8_t ___m_AlphaBlendOperation;
	uint8_t ___m_Padding;
};
struct RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D 
{
	bool ___m_IsValid;
	int32_t ___U3ChandleU3Ek__BackingField;
};
struct RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D_marshaled_pinvoke
{
	int32_t ___m_IsValid;
	int32_t ___U3ChandleU3Ek__BackingField;
};
struct RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D_marshaled_com
{
	int32_t ___m_IsValid;
	int32_t ___U3ChandleU3Ek__BackingField;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 
{
	RuntimeObject* ____value;
	int32_t ____dataPos;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshaled_pinvoke
{
	Il2CppIUnknown* ____value;
	int32_t ____dataPos;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshaled_com
{
	Il2CppIUnknown* ____value;
	int32_t ____dataPos;
};
struct RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E 
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector;
};
struct RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector;
};
struct RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___normalImage;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___highResolutionImage;
};
struct ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___normalImage;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___highResolutionImage;
};
struct ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___normalImage;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___highResolutionImage;
};
struct SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B 
{
	String_t* ___name;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture;
};
struct SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B_marshaled_pinvoke
{
	char* ___name;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture;
};
struct SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B_marshaled_com
{
	Il2CppChar* ___name;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture;
};
struct SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7 
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	int32_t ___styleSheetIndexInStack;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector;
};
struct SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	int32_t ___styleSheetIndexInStack;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector;
};
struct SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	int32_t ___styleSheetIndexInStack;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector;
};
struct ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661 
{
	String_t* ___m_Name;
	uint32_t ___m_Index;
	bool ___m_IsLocal;
	bool ___m_IsCompute;
	bool ___m_IsValid;
};
struct ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshaled_pinvoke
{
	char* ___m_Name;
	uint32_t ___m_Index;
	int32_t ___m_IsLocal;
	int32_t ___m_IsCompute;
	int32_t ___m_IsValid;
};
struct ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshaled_com
{
	Il2CppChar* ___m_Name;
	uint32_t ___m_Index;
	int32_t ___m_IsLocal;
	int32_t ___m_IsCompute;
	int32_t ___m_IsValid;
};
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 
{
	int32_t ___m_Id;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite;
};
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite;
};
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite;
};
struct SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____value;
};
struct SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347_marshaled_pinvoke
{
	Il2CppSafeArray* ____value;
};
struct SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347_marshaled_com
{
	Il2CppSafeArray* ____value;
};
struct SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 
{
	uint8_t ___m_value;
};
struct SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46 
{
	bool ___m_fNotNull;
	uint8_t ___m_value;
};
struct SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46_marshaled_pinvoke
{
	int32_t ___m_fNotNull;
	uint8_t ___m_value;
};
struct SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46_marshaled_com
{
	int32_t ___m_fNotNull;
	uint8_t ___m_value;
};
struct SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 
{
	bool ___m_fNotNull;
	int32_t ___m_day;
	int32_t ___m_time;
};
struct SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_marshaled_pinvoke
{
	int32_t ___m_fNotNull;
	int32_t ___m_day;
	int32_t ___m_time;
};
struct SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_marshaled_com
{
	int32_t ___m_fNotNull;
	int32_t ___m_day;
	int32_t ___m_time;
};
struct SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 
{
	uint8_t ____bStatus;
	uint8_t ____bLen;
	uint8_t ____bPrec;
	uint8_t ____bScale;
	uint32_t ____data1;
	uint32_t ____data2;
	uint32_t ____data3;
	uint32_t ____data4;
};
struct SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 
{
	bool ___m_fNotNull;
	double ___m_value;
};
struct SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_marshaled_pinvoke
{
	int32_t ___m_fNotNull;
	double ___m_value;
};
struct SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_marshaled_com
{
	int32_t ___m_fNotNull;
	double ___m_value;
};
struct SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_value;
};
struct SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_marshaled_pinvoke
{
	Il2CppSafeArray* ___m_value;
};
struct SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_marshaled_com
{
	Il2CppSafeArray* ___m_value;
};
struct SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B 
{
	bool ___m_fNotNull;
	int16_t ___m_value;
};
struct SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_marshaled_pinvoke
{
	int32_t ___m_fNotNull;
	int16_t ___m_value;
};
struct SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_marshaled_com
{
	int32_t ___m_fNotNull;
	int16_t ___m_value;
};
struct SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 
{
	bool ___m_fNotNull;
	int32_t ___m_value;
};
struct SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_marshaled_pinvoke
{
	int32_t ___m_fNotNull;
	int32_t ___m_value;
};
struct SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_marshaled_com
{
	int32_t ___m_fNotNull;
	int32_t ___m_value;
};
struct SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 
{
	bool ___m_fNotNull;
	int64_t ___m_value;
};
struct SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_marshaled_pinvoke
{
	int32_t ___m_fNotNull;
	int64_t ___m_value;
};
struct SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_marshaled_com
{
	int32_t ___m_fNotNull;
	int64_t ___m_value;
};
struct SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB 
{
	bool ____fNotNull;
	int64_t ____value;
};
struct SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_marshaled_pinvoke
{
	int32_t ____fNotNull;
	int64_t ____value;
};
struct SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_marshaled_com
{
	int32_t ____fNotNull;
	int64_t ____value;
};
struct SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 
{
	bool ____fNotNull;
	float ____value;
};
struct SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_marshaled_pinvoke
{
	int32_t ____fNotNull;
	float ____value;
};
struct SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_marshaled_com
{
	int32_t ____fNotNull;
	float ____value;
};
struct Stats_t16598467F7C3DC7E9204672C593066C42B2F9AEB 
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___bestTime;
	int32_t ___blockCount;
	String_t* ___score;
};
struct Stats_t16598467F7C3DC7E9204672C593066C42B2F9AEB_marshaled_pinvoke
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___bestTime;
	int32_t ___blockCount;
	char* ___score;
};
struct Stats_t16598467F7C3DC7E9204672C593066C42B2F9AEB_marshaled_com
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___bestTime;
	int32_t ___blockCount;
	Il2CppChar* ___score;
};
struct StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 
{
	uint8_t ___m_Enabled;
	uint8_t ___m_ReadMask;
	uint8_t ___m_WriteMask;
	uint8_t ___m_Padding;
	uint8_t ___m_CompareFunctionFront;
	uint8_t ___m_PassOperationFront;
	uint8_t ___m_FailOperationFront;
	uint8_t ___m_ZFailOperationFront;
	uint8_t ___m_CompareFunctionBack;
	uint8_t ___m_PassOperationBack;
	uint8_t ___m_FailOperationBack;
	uint8_t ___m_ZFailOperationBack;
};
struct StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 
{
	String_t* ___name;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE* ___handles;
};
struct StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshaled_pinvoke
{
	char* ___name;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* ___handles;
};
struct StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshaled_com
{
	Il2CppChar* ___name;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* ___handles;
};
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	uint8_t ___bold;
	uint8_t ___italic;
	uint8_t ___underline;
	uint8_t ___strikethrough;
	uint8_t ___highlight;
	uint8_t ___superscript;
	uint8_t ___subscript;
	uint8_t ___uppercase;
	uint8_t ___lowercase;
	uint8_t ___smallcaps;
};
struct TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E 
{
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___regularTypeface;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___italicTypeface;
};
struct TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E_marshaled_pinvoke
{
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___regularTypeface;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___italicTypeface;
};
struct TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E_marshaled_com
{
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___regularTypeface;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___italicTypeface;
};
struct TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6 
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent;
	int32_t ___hashCode;
	int32_t ___linkIdFirstCharacterIndex;
	int32_t ___linkIdLength;
	int32_t ___linkTextfirstCharacterIndex;
	int32_t ___linkTextLength;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___linkID;
};
struct TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6_marshaled_pinvoke
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent;
	int32_t ___hashCode;
	int32_t ___linkIdFirstCharacterIndex;
	int32_t ___linkIdLength;
	int32_t ___linkTextfirstCharacterIndex;
	int32_t ___linkTextLength;
	uint8_t* ___linkID;
};
struct TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6_marshaled_com
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent;
	int32_t ___hashCode;
	int32_t ___linkIdFirstCharacterIndex;
	int32_t ___linkIdLength;
	int32_t ___linkTextfirstCharacterIndex;
	int32_t ___linkTextLength;
	uint8_t* ___linkID;
};
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B 
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh;
	int32_t ___vertexCount;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___normals;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___tangents;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs2;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___colors32;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___triangles;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
};
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_pinvoke
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh;
	int32_t ___vertexCount;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normals;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___tangents;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs2;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors32;
	Il2CppSafeArray* ___triangles;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
};
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_com
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh;
	int32_t ___vertexCount;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normals;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___tangents;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs2;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors32;
	Il2CppSafeArray* ___triangles;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
};
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	float ___m_Left;
	float ___m_Right;
	float ___m_Top;
	float ___m_Bottom;
};
struct TMP_PageInfo_t062E56948480FAB066C168E14DC79CC83CC369B4 
{
	int32_t ___firstCharacterIndex;
	int32_t ___lastCharacterIndex;
	float ___ascender;
	float ___baseLine;
	float ___descender;
};
struct TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983 
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent;
	int32_t ___firstCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___characterCount;
};
struct TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983_marshaled_pinvoke
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent;
	int32_t ___firstCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___characterCount;
};
struct TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983_marshaled_com
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent;
	int32_t ___firstCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___characterCount;
};
struct TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 
{
	int32_t ___m_Index;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks;
};
struct TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90 
{
	int32_t ___U3CidU3Ek__BackingField;
	int32_t ___U3CparentIdU3Ek__BackingField;
	RuntimeObject* ___U3CchildrenIdsU3Ek__BackingField;
};
struct TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90_marshaled_pinvoke
{
	int32_t ___U3CidU3Ek__BackingField;
	int32_t ___U3CparentIdU3Ek__BackingField;
	RuntimeObject* ___U3CchildrenIdsU3Ek__BackingField;
};
struct TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90_marshaled_com
{
	int32_t ___U3CidU3Ek__BackingField;
	int32_t ___U3CparentIdU3Ek__BackingField;
	RuntimeObject* ___U3CchildrenIdsU3Ek__BackingField;
};
struct Triangle_tAD1398FF3E995C3F4D56BE27E72C2DD1998AD290 
{
	int32_t ___m_A;
	int32_t ___m_B;
	int32_t ___m_C;
};
struct TypeNameKey_tE4E115F291C6F879D976911A340116B5CF218F33 
{
	String_t* ___AssemblyName;
	String_t* ___TypeName;
};
struct TypeNameKey_tE4E115F291C6F879D976911A340116B5CF218F33_marshaled_pinvoke
{
	char* ___AssemblyName;
	char* ___TypeName;
};
struct TypeNameKey_tE4E115F291C6F879D976911A340116B5CF218F33_marshaled_com
{
	Il2CppChar* ___AssemblyName;
	Il2CppChar* ___TypeName;
};
struct UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC 
{
	int32_t ___startCharIdx;
	int32_t ___height;
	float ___topY;
	float ___leading;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UIntPtr_t 
{
	void* ____pointer;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
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
struct WordInfo_tA466206097891A5A2590896EE164AFC406EB060D 
{
	int32_t ___firstCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___characterCount;
};
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA 
{
	XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* ____info;
	uint16_t ____idxSibling;
	uint16_t ____idxParent;
	uint16_t ____idxSimilar;
	uint16_t ____posOffset;
	uint32_t ____props;
	String_t* ____value;
};
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_pinvoke
{
	XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* ____info;
	uint16_t ____idxSibling;
	uint16_t ____idxParent;
	uint16_t ____idxSimilar;
	uint16_t ____posOffset;
	uint32_t ____props;
	char* ____value;
};
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_com
{
	XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* ____info;
	uint16_t ____idxSibling;
	uint16_t ____idxParent;
	uint16_t ____idxSimilar;
	uint16_t ____posOffset;
	uint32_t ____props;
	Il2CppChar* ____value;
};
struct XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 
{
	XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* ____page;
	int32_t ____idx;
};
struct XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshaled_pinvoke
{
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_pinvoke* ____page;
	int32_t ____idx;
};
struct XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshaled_com
{
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_com* ____page;
	int32_t ____idx;
};
struct AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D 
{
	Type_t* ___type;
	int32_t ___index;
};
struct AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_marshaled_pinvoke
{
	Type_t* ___type;
	int32_t ___index;
};
struct AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_marshaled_com
{
	Type_t* ___type;
	int32_t ___index;
};
struct MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 
{
	int32_t ___valueIndex;
	int32_t ___matchedVariableCount;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 
{
	int32_t ___order;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___callback;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_pinvoke
{
	int32_t ___order;
	Il2CppMethodPointer ___callback;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_com
{
	int32_t ___order;
	Il2CppMethodPointer ___callback;
};
struct Page_t04FE552A388BF55B12C8868E19589136957E00A5 
{
	uint16_t ___x;
	uint16_t ___y;
	int32_t ___freeSlots;
};
struct TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 
{
	int32_t ___Start;
	int32_t ___End;
	int32_t ___Count;
	int32_t ___IndexStart;
	int32_t ___IndexEnd;
};
struct TypeConvertKey_t98D33F680B910A58F3A66403380DC165250CFA93 
{
	Type_t* ____initialType;
	Type_t* ____targetType;
};
struct TypeConvertKey_t98D33F680B910A58F3A66403380DC165250CFA93_marshaled_pinvoke
{
	Type_t* ____initialType;
	Type_t* ____targetType;
};
struct TypeConvertKey_t98D33F680B910A58F3A66403380DC165250CFA93_marshaled_com
{
	Type_t* ____initialType;
	Type_t* ____targetType;
};
struct ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274 
{
	DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ____column;
	String_t* ____error;
};
struct ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274_marshaled_pinvoke
{
	DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ____column;
	char* ____error;
};
struct ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274_marshaled_com
{
	DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ____column;
	Il2CppChar* ____error;
};
struct DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 
{
	uint32_t ___m_GateCount;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ___m_Queue;
};
struct DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshaled_pinvoke
{
	uint32_t ___m_GateCount;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ___m_Queue;
};
struct DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshaled_com
{
	uint32_t ___m_GateCount;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ___m_Queue;
};
struct EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 
{
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___m_Event;
	RuntimeObject* ___m_Panel;
};
struct EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshaled_pinvoke
{
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___m_Event;
	RuntimeObject* ___m_Panel;
};
struct EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshaled_com
{
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___m_Event;
	RuntimeObject* ___m_Panel;
};
struct DefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0 
{
	int32_t ___DefaultActionCategories;
	int32_t ___DefaultActionAtTargetCategories;
};
struct FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_SubTreeRoot;
	Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0* ___m_FocusedElement;
};
struct FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_SubTreeRoot;
	Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0* ___m_FocusedElement;
};
struct FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_SubTreeRoot;
	Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0* ___m_FocusedElement;
};
struct bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E 
{
	RuntimeObject* ___key;
	RuntimeObject* ___val;
	int32_t ___hash_coll;
};
struct bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_pinvoke
{
	Il2CppIUnknown* ___key;
	Il2CppIUnknown* ___val;
	int32_t ___hash_coll;
};
struct bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_com
{
	Il2CppIUnknown* ___key;
	Il2CppIUnknown* ___val;
	int32_t ___hash_coll;
};
struct FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E 
{
	int32_t ____int32;
	String_t* ____string;
};
struct FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshaled_pinvoke
{
	int32_t ____int32;
	char* ____string;
};
struct FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshaled_com
{
	int32_t ____int32;
	Il2CppChar* ____string;
};
struct BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B 
{
	int32_t ___x;
	int32_t ___y;
	int32_t ___z;
};
struct CellCounts_tE8F649895E00B2C75ABEA7C6ECC40BBDE1EF5970 
{
	int32_t ___bricksCount;
	int32_t ___probesCount;
	int32_t ___offsetsCount;
	int32_t ___chunksCount;
};
struct PerScenarioData_t550076045279B9168297EFAEC12D729EB36C67CC 
{
	int32_t ___sceneHash;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___cellDataAsset;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___cellOptionalDataAsset;
};
struct PerScenarioData_t550076045279B9168297EFAEC12D729EB36C67CC_marshaled_pinvoke
{
	int32_t ___sceneHash;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___cellDataAsset;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___cellOptionalDataAsset;
};
struct PerScenarioData_t550076045279B9168297EFAEC12D729EB36C67CC_marshaled_com
{
	int32_t ___sceneHash;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___cellDataAsset;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___cellOptionalDataAsset;
};
struct SerializableHasPVItem_t061E2CE4D8B201F280D06ABD0246C7AD8FD9571C 
{
	String_t* ___sceneGUID;
	bool ___hasProbeVolumes;
};
struct SerializableHasPVItem_t061E2CE4D8B201F280D06ABD0246C7AD8FD9571C_marshaled_pinvoke
{
	char* ___sceneGUID;
	int32_t ___hasProbeVolumes;
};
struct SerializableHasPVItem_t061E2CE4D8B201F280D06ABD0246C7AD8FD9571C_marshaled_com
{
	Il2CppChar* ___sceneGUID;
	int32_t ___hasProbeVolumes;
};
struct SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C 
{
	String_t* ___sceneGUID;
	ProbeReferenceVolumeProfile_t375DE65898ECAC87F866E00E990A090B62FEFB06* ___profile;
};
struct SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C_marshaled_pinvoke
{
	char* ___sceneGUID;
	ProbeReferenceVolumeProfile_t375DE65898ECAC87F866E00E990A090B62FEFB06* ___profile;
};
struct SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C_marshaled_com
{
	Il2CppChar* ___sceneGUID;
	ProbeReferenceVolumeProfile_t375DE65898ECAC87F866E00E990A090B62FEFB06* ___profile;
};
struct LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1 
{
	Il2CppChar ___ChMin;
	Il2CppChar ___ChMax;
	int32_t ___LcOp;
	int32_t ___Data;
};
struct LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshaled_pinvoke
{
	uint8_t ___ChMin;
	uint8_t ___ChMax;
	int32_t ___LcOp;
	int32_t ___Data;
};
struct LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshaled_com
{
	uint8_t ___ChMin;
	uint8_t ___ChMax;
	int32_t ___LcOp;
	int32_t ___Data;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC 
{
	Il2CppChar ___First;
	Il2CppChar ___Last;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_pinvoke
{
	uint8_t ___First;
	uint8_t ___Last;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_com
{
	uint8_t ___First;
	uint8_t ___Last;
};
struct CompiledResourceInfo_t1B258600AF5819B19709F6E4FF0D2803D039336A 
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producers;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumers;
	int32_t ___refCount;
	bool ___imported;
};
struct CompiledResourceInfo_t1B258600AF5819B19709F6E4FF0D2803D039336A_marshaled_pinvoke
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producers;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumers;
	int32_t ___refCount;
	int32_t ___imported;
};
struct CompiledResourceInfo_t1B258600AF5819B19709F6E4FF0D2803D039336A_marshaled_com
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producers;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumers;
	int32_t ___refCount;
	int32_t ___imported;
};
struct PassDebugData_tE911DB0148519C33C773511F2D92F57AF1B6D258 
{
	String_t* ___name;
	List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206* ___resourceReadLists;
	List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206* ___resourceWriteLists;
	bool ___culled;
	bool ___async;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	bool ___generateDebugData;
};
struct PassDebugData_tE911DB0148519C33C773511F2D92F57AF1B6D258_marshaled_pinvoke
{
	char* ___name;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceReadLists;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceWriteLists;
	int32_t ___culled;
	int32_t ___async;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	int32_t ___generateDebugData;
};
struct PassDebugData_tE911DB0148519C33C773511F2D92F57AF1B6D258_marshaled_com
{
	Il2CppChar* ___name;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceReadLists;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceWriteLists;
	int32_t ___culled;
	int32_t ___async;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	int32_t ___generateDebugData;
};
struct ResourceDebugData_t83301B4E44B1F0B49486E21F019AFEE444809A9B 
{
	String_t* ___name;
	bool ___imported;
	int32_t ___creationPassIndex;
	int32_t ___releasePassIndex;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumerList;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producerList;
};
struct ResourceDebugData_t83301B4E44B1F0B49486E21F019AFEE444809A9B_marshaled_pinvoke
{
	char* ___name;
	int32_t ___imported;
	int32_t ___creationPassIndex;
	int32_t ___releasePassIndex;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumerList;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producerList;
};
struct ResourceDebugData_t83301B4E44B1F0B49486E21F019AFEE444809A9B_marshaled_com
{
	Il2CppChar* ___name;
	int32_t ___imported;
	int32_t ___creationPassIndex;
	int32_t ___releasePassIndex;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumerList;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producerList;
};
struct HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera;
};
struct HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera;
};
struct HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera;
};
struct SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7 
{
	SequenceNode_t49ACD22961E06675458A60447D7AA32B26835AB0* ___this_;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___firstpos;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___lastpos;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___lastposLeft;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___firstposRight;
};
struct SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7_marshaled_pinvoke
{
	SequenceNode_t49ACD22961E06675458A60447D7AA32B26835AB0* ___this_;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___firstpos;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___lastpos;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___lastposLeft;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___firstposRight;
};
struct SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7_marshaled_com
{
	SequenceNode_t49ACD22961E06675458A60447D7AA32B26835AB0* ___this_;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___firstpos;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___lastpos;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___lastposLeft;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___firstposRight;
};
struct ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1 
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___styleSheet;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___mediaQueries;
};
struct ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___styleSheet;
	char** ___mediaQueries;
};
struct ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___styleSheet;
	Il2CppChar** ___mediaQueries;
};
struct SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 
{
	int32_t ___sheetInstanceID;
	int32_t ___index;
};
struct ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992 
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE* ___handles;
};
struct ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* ___handles;
};
struct ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* ___handles;
};
struct UnicodeChar_tB86B7DE9203E1D985B08268AF1964DECB8A5F722 
{
	int32_t ___unicode;
	int32_t ___stringIndex;
	int32_t ___length;
};
struct AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF 
{
	String_t* ___m_ElementName;
	String_t* ___m_AttributeName;
	String_t* ___m_Value;
};
struct AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshaled_pinvoke
{
	char* ___m_ElementName;
	char* ___m_AttributeName;
	char* ___m_Value;
};
struct AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshaled_com
{
	Il2CppChar* ___m_ElementName;
	Il2CppChar* ___m_AttributeName;
	Il2CppChar* ___m_Value;
};
struct U3Chammersley2dSeq16U3Ee__FixedBuffer_t6F140D0C91E62112E1635AF868D461A48FB26EC9 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3Chammersley2dSeq16U3Ee__FixedBuffer_t6F140D0C91E62112E1635AF868D461A48FB26EC9__padding[256];
	};
};
struct U3Chammersley2dSeq256U3Ee__FixedBuffer_t10E5086FADEE57D861BB75F2AB059694CD6862C8 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3Chammersley2dSeq256U3Ee__FixedBuffer_t10E5086FADEE57D861BB75F2AB059694CD6862C8__padding[4096];
	};
};
struct U3Chammersley2dSeq32U3Ee__FixedBuffer_t4D989F40E722CE7266EEF1B3C59EA668353D4156 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3Chammersley2dSeq32U3Ee__FixedBuffer_t4D989F40E722CE7266EEF1B3C59EA668353D4156__padding[512];
	};
};
struct U3Chammersley2dSeq64U3Ee__FixedBuffer_t8AC325DA590C70B67FFC758DC78935109659D47E 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3Chammersley2dSeq64U3Ee__FixedBuffer_t8AC325DA590C70B67FFC758DC78935109659D47E__padding[1024];
	};
};
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack;
	int32_t ___index;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack;
	int32_t ___index;
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack;
	int32_t ___index;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TextProcessingStack_1_t0C74606C1B6C7817CA95F0DCA46B219CF6FB35CA 
{
	MaterialReferenceU5BU5D_t4A9B88114E223BD96CE5121053664023CE2DE07E* ___itemStack;
	int32_t ___index;
	MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26 ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct AddressMode_t2C6D839F1391CCABEFAB25D8500B448D3CAB5EA3 
{
	int32_t ___value__;
};
struct BackgroundPositionKeyword_tE680A05B983D256AADC8E2CF1CA169D004B8641B 
{
	int32_t ___value__;
};
struct BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 
{
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState0;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState1;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState2;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState3;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState4;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState5;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState6;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState7;
	uint8_t ___m_SeparateMRTBlendStates;
	uint8_t ___m_AlphaToMask;
	int16_t ___m_Padding;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct BuiltinRenderTextureType_t3D56813CAC7C6E4AC3B438039BD1CE7E62FE7C4E 
{
	int32_t ___value__;
};
struct CollisionPairHeaderFlags_tBA40F470BC1564B84C3093CEA5761804FA0650C3 
{
	uint16_t ___value__;
};
struct CompareOptions_tE5E7275E1FCBD5F8F3B53CC0038A11CABE120B00 
{
	int32_t ___value__;
};
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse;
	int32_t ___m_ThisColliderInstanceID;
	int32_t ___m_OtherColliderInstanceID;
	float ___m_Separation;
};
struct ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 
{
	intptr_t ___vertSrc;
	intptr_t ___vertDst;
	int32_t ___vertCount;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___transform;
	int32_t ___transformUVs;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___xformClipPages;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___ids;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___addFlags;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___opacityPage;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___textCoreSettingsPage;
	int32_t ___isText;
	float ___textureId;
	intptr_t ___indexSrc;
	intptr_t ___indexDst;
	int32_t ___indexCount;
	int32_t ___indexOffset;
	int32_t ___flipIndices;
};
struct CookieToken_t320BE5F5654B48CAE72D9844EE7C6EA0F70C9FEA 
{
	int32_t ___value__;
};
struct CookieVariant_t7E73D4627A51D0F441CAFC7B50293953F9A198C5 
{
	int32_t ___value__;
};
struct CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044 
{
	intptr_t ___vertSrc;
	intptr_t ___vertDst;
	int32_t ___vertCount;
	intptr_t ___indexSrc;
	intptr_t ___indexDst;
	int32_t ___indexCount;
	int32_t ___indexOffset;
};
struct CubemapFace_t300D6E2CD7DF60D44AA28338748B607677ED1D1B 
{
	int32_t ___value__;
};
struct CullMode_t049B71889E4E981866E205A3F71DC8B856306D50 
{
	int32_t ___value__;
};
struct CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 
{
	intptr_t ___ptr;
	CullingAllocationInfo_tB260F5CD0B290F74E145EB16E54B901CC68D9D5A* ___m_AllocationInfo;
};
struct CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sphereCenter;
	float ___sphereRadius;
	int32_t ___cullingPlaneOffset;
	int32_t ___cullingPlaneCount;
	float ___cascadeBlendCullingFactor;
	float ___nearPlane;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___cullingMatrix;
};
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___U3CTypedValueU3Ek__BackingField;
	bool ___U3CIsFieldU3Ek__BackingField;
	String_t* ___U3CMemberNameU3Ek__BackingField;
	Type_t* ____attributeType;
	MemberInfo_t* ____lazyMemberInfo;
};
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshaled_pinvoke
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_pinvoke ___U3CTypedValueU3Ek__BackingField;
	int32_t ___U3CIsFieldU3Ek__BackingField;
	char* ___U3CMemberNameU3Ek__BackingField;
	Type_t* ____attributeType;
	MemberInfo_t* ____lazyMemberInfo;
};
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshaled_com
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_com ___U3CTypedValueU3Ek__BackingField;
	int32_t ___U3CIsFieldU3Ek__BackingField;
	Il2CppChar* ___U3CMemberNameU3Ek__BackingField;
	Type_t* ____attributeType;
	MemberInfo_t* ____lazyMemberInfo;
};
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime;
	int16_t ____offsetMinutes;
};
struct DynamicResScalePolicyType_tBFCAFCA277DD1112F688D4556F28D7B48E2C3A0D 
{
	int32_t ___value__;
};
struct EasingMode_tEF87477B9B9EB2524525550AE5ABEBC00FC7B0DF 
{
	int32_t ___value__;
};
struct EdgeLookup_t300611D73C712629140424DC4556FECAFE210899 
{
	Edge_t1E55CB4BDAF40F0F124DEA86AE84673377D27A8F ___m_Local;
	Edge_t1E55CB4BDAF40F0F124DEA86AE84673377D27A8F ___m_Common;
};
struct EventModifiers_t48244B043FBB42CDD555C6AC43279EC7158777AC 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max;
};
struct Extents_t369FB2B84521A0229C2FA3D4C8592B14E07CEFE6 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max;
};
struct FalloffType_tE9BECCB411DA63109760103AF7476F422A01376D 
{
	uint8_t ___value__;
};
struct FontFeatureLookupFlags_t2000121BA341A3CAE5E0D4FAC6AA4378FE14AE1B 
{
	int32_t ___value__;
};
struct FontStyles_t9E611EE6BBE6E192A73EAFF7872596517C527FF5 
{
	int32_t ___value__;
};
struct FontStyles_t284AF8C10031F4774DF8BC8DE6DF9EC11EE14668 
{
	int32_t ___value__;
};
struct FontWeight_tA2585C0A73B70D31CE71E7843149098A5E16BC80 
{
	int32_t ___value__;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C 
{
	uint32_t ___offsetFromWriteStart;
	uint32_t ___size;
	uintptr_t ___source;
};
struct GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 
{
	uint32_t ___m_GlyphIndex;
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___m_GlyphValueRecord;
};
struct GlyphClassDefinitionType_t9C21A3848A07B17C2690F285B5FA60A2E246FBA2 
{
	int32_t ___value__;
};
struct GlyphRenderMode_tE7FB60827750662A45E89D168932FE2D8AEB5281 
{
	int32_t ___value__;
};
struct GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	float ___time;
};
struct GradientType_tF6700196CF15D686C2CFC54BDDE6EF4B4B325F22 
{
	int32_t ___value__;
};
struct GraphicsFenceType_t8C3F229DC2BE62FA78724BA3D35FFCB3A64F7E0A 
{
	int32_t ___value__;
};
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding;
};
struct HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Offset_tF4AF8F62C21FD6DCB5255F705A59CC10583E22C4 ___padding;
};
struct HorizontalAlignmentOptions_tCC21260E9FBEC656BA7783643ED5F44AFF7955A1 
{
	int32_t ___value__;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct IntVec3_tAE14DAA206A2E1F033B1BB7D09F991D17F274B10 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value;
};
struct JsonContainerType_t4F8244AEE40CAB63CA2C1E281038F4E2B3E3887E 
{
	int32_t ___value__;
};
struct LightMode_t058E4E7AAE5689BCFF46BB8E0259D90D227E7FF9 
{
	uint8_t ___value__;
};
struct LightType_t97C5050F2F742FBF050FEB8FC5131A9A8DB50D26 
{
	uint8_t ___value__;
};
struct MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 
{
	uint32_t ___m_BaseGlyphID;
	GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 ___m_BaseGlyphAnchorPoint;
	uint32_t ___m_MarkGlyphID;
	MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 ___m_MarkPositionAdjustment;
};
struct MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C 
{
	uint32_t ___m_BaseMarkGlyphID;
	GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 ___m_BaseMarkGlyphAnchorPoint;
	uint32_t ___m_CombiningMarkGlyphID;
	MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 ___m_CombiningMarkPositionAdjustment;
};
struct ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 
{
	intptr_t ___actor;
	intptr_t ___otherActor;
	intptr_t ___shape;
	intptr_t ___otherShape;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___otherRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___otherPosition;
	int32_t ___numContacts;
	intptr_t ___contacts;
};
struct MouseButton_tEF578B8F208D798E053BC320C29FCBB655E24454 
{
	int32_t ___value__;
};
struct NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022 
{
	intptr_t ___src;
	intptr_t ___dst;
	int32_t ___count;
	intptr_t ___closingSrc;
	intptr_t ___closingDst;
	int32_t ___closingCount;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___transform;
	int32_t ___vertsBeforeUVDisplacement;
	int32_t ___vertsAfterUVDisplacement;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct PerObjectData_t04DDCBE9ABF1113E8F9BAFCF4A7F94DD841B9CC9 
{
	int32_t ___value__;
};
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	float ___m_Distance;
};
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F 
{
	Type_t* ___type;
	PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* ___subSystemList;
	UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* ___updateDelegate;
	intptr_t ___updateFunction;
	intptr_t ___loopConditionFunction;
};
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke
{
	Type_t* ___type;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke* ___subSystemList;
	Il2CppMethodPointer ___updateDelegate;
	intptr_t ___updateFunction;
	intptr_t ___loopConditionFunction;
};
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com
{
	Type_t* ___type;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com* ___subSystemList;
	Il2CppMethodPointer ___updateDelegate;
	intptr_t ___updateFunction;
	intptr_t ___loopConditionFunction;
};
struct PseudoStates_tF4AB056E8743741BCE464A0983A060A53AAB7E4D 
{
	int32_t ___value__;
};
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	uint32_t ___m_FaceID;
	float ___m_Distance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV;
	int32_t ___m_Collider;
};
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal;
	float ___m_Distance;
	float ___m_Fraction;
	int32_t ___m_Collider;
};
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module;
	float ___distance;
	float ___index;
	int32_t ___depth;
	int32_t ___sortingGroupID;
	int32_t ___sortingGroupOrder;
	int32_t ___sortingLayer;
	int32_t ___sortingOrder;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition;
	int32_t ___displayIndex;
};
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module;
	float ___distance;
	float ___index;
	int32_t ___depth;
	int32_t ___sortingGroupID;
	int32_t ___sortingGroupOrder;
	int32_t ___sortingLayer;
	int32_t ___sortingOrder;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition;
	int32_t ___displayIndex;
};
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module;
	float ___distance;
	float ___index;
	int32_t ___depth;
	int32_t ___sortingGroupID;
	int32_t ___sortingGroupOrder;
	int32_t ___sortingLayer;
	int32_t ___sortingOrder;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition;
	int32_t ___displayIndex;
};
struct RegexOptions_tE9DA9C4DF8FB26DD1C7E0F8AA022C1164A423F6B 
{
	int32_t ___value__;
};
struct RenderGraphResourceType_tAFC98053C956B68EDA12B1B8A9BC4B245C97D996 
{
	int32_t ___value__;
};
struct RenderStateMask_tC9C95BF62EADEE4D622D4E16CDE1DF94E2A9EF57 
{
	int32_t ___value__;
};
struct RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 
{
	uintptr_t ___context;
	uint32_t ___index;
	uint32_t ___frame;
	uint32_t ___type;
};
struct Repeat_tC0330B75B12D24B063BA5151AF3BB73B85D8B840 
{
	int32_t ___value__;
};
struct SByteEnum_t0782AA0EFC5D1042A39675F37D7DD7C098781DD9 
{
	int8_t ___value__;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	bool ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
};
struct ShaderVariablesProbeVolumes_t93D502CF0A3275CEBA1EDF0E6DB84816618662D4 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____PoolDim_CellInMeters;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____MinCellPos_Noise;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____IndicesDim_IndexChunkSize;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____Biases_CellInMinBrick_MinBrickSize;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____LeakReductionParams;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____Weight_MinLoadedCell;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____MaxLoadedCell_FrameIndex;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____NormalizationClamp_Padding12;
};
struct SignalType_t3793844FACC0C59A41892968349FE86506175EDF 
{
	int32_t ___value__;
};
struct SortDirection_t1CF90CCD8B5D86EF2630D0F080500514821467E4 
{
	int32_t ___value__;
};
struct SortingCriteria_t4907D221CB6E6AA4A32C1ED7B5D17103FD3E7C39 
{
	int32_t ___value__;
};
struct SqlCompareOptions_t587E37815433668F9B319101E1E9AFE84377ABA8 
{
	int32_t ___value__;
};
struct StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705 
{
	int32_t ___value__;
};
struct StylePropertyId_tA3B8A5213F5BA43F9C5443B27B165D744713BE69 
{
	int32_t ___value__;
};
struct StyleSelectorType_t425962DE6D175F785FA2B5554D793B71D39430A3 
{
	int32_t ___value__;
};
struct StyleSyntaxTokenType_tFB5906557ADB62467788C6C7F28D771374EC4834 
{
	int32_t ___value__;
};
struct StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE 
{
	int32_t ___value__;
};
struct TMP_TextElementType_t51EE6662436732F22C6B599F5757B7F35F706342 
{
	int32_t ___value__;
};
struct TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv4;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
};
struct TagUnitType_t474C73D5D3F1A2691F64E452E657A4849B2BEF8C 
{
	int32_t ___value__;
};
struct TagUnitType_tE96B416272B0326E2683B4BD84B5E51C60FCB7EE 
{
	int32_t ___value__;
};
struct TagValueType_tDB67CA3DFCA6CDE7E8F14EDD33B51D424BA3EF08 
{
	int32_t ___value__;
};
struct TagValueType_t9A889DA5C696E6477A6E1D5D6BC2767315745B2E 
{
	int32_t ___value__;
};
struct TextAlignment_tD681BE7D2451C44115A90D2D8AA7D91C78A5A070 
{
	int32_t ___value__;
};
struct TextElementType_tEBCF09EEF888E8B1F62D3DD66AF21890D12545EB 
{
	uint8_t ___value__;
};
struct TextFontWeight_t789E26840C291C6C1270D4434CE007ACDFA40350 
{
	int32_t ___value__;
};
struct TextProcessingElementType_t0F469889070F147273CE0C33D25C8A80E11C1319 
{
	int32_t ___value__;
};
struct TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset;
	float ___blurRadius;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv2;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
};
struct TimeUnit_t56A79CDB672E98A4EE28002BD23B6D5E0BAA2649 
{
	int32_t ___value__;
};
struct Tokens_t59054E7109144A03E2ABAF78915DDE9B6290D924 
{
	int32_t ___value__;
};
struct TouchPhase_t54E0A1AF80465997849420A72317B733E1D49A9E 
{
	int32_t ___value__;
};
struct TouchType_t84F82C73BC1A6012141735AD84DA67AA7F7AB43F 
{
	int32_t ___value__;
};
struct Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v2;
};
struct TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839 
{
	TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90 ___item;
	int32_t ___depth;
};
struct TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839_marshaled_pinvoke
{
	TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90_marshaled_pinvoke ___item;
	int32_t ___depth;
};
struct TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839_marshaled_com
{
	TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90_marshaled_com ___item;
	int32_t ___depth;
};
struct UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___cursorPos;
	float ___charWidth;
};
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv2;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv3;
};
struct UInt16Enum_t481D129F5FAE551E8684190D640F0FAEFB237CF8 
{
	uint16_t ___value__;
};
struct UInt32Enum_t7B4F5C6C14D2C4B2A5927C59620BE3868714DACF 
{
	uint32_t ___value__;
};
struct VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___tint;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv;
	uint32_t ___settingIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___flags;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___circle;
};
struct Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___tint;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___xformClipPages;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___ids;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___flags;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___opacityColorPages;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___settingIndex;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___circle;
	float ___textureId;
};
struct VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6 
{
	int32_t ___value__;
};
struct VertexAttributeFormat_tD714C51E671502B116ACE5E23F042BA80649D32F 
{
	int32_t ___value__;
};
struct VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44 
{
	bool ___useVirtualOffset;
	float ___outOfGeoOffset;
	float ___searchMultiplier;
	float ___rayOriginBias;
	int32_t ___maxHitsPerRay;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___collisionMask;
};
struct VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44_marshaled_pinvoke
{
	int32_t ___useVirtualOffset;
	float ___outOfGeoOffset;
	float ___searchMultiplier;
	float ___rayOriginBias;
	int32_t ___maxHitsPerRay;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___collisionMask;
};
struct VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44_marshaled_com
{
	int32_t ___useVirtualOffset;
	float ___outOfGeoOffset;
	float ___searchMultiplier;
	float ___rayOriginBias;
	int32_t ___maxHitsPerRay;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___collisionMask;
};
struct X509ChainStatusFlags_t57C80D7C1F4C319F6D6B9FBDEA402E3023E6C769 
{
	int32_t ___value__;
};
struct XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___viewport;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___occlusionMesh;
	int32_t ___textureArraySlice;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___eyeCenterUV;
};
struct XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5_marshaled_pinvoke
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___viewport;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___occlusionMesh;
	int32_t ___textureArraySlice;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___eyeCenterUV;
};
struct XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5_marshaled_com
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___viewport;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___occlusionMesh;
	int32_t ___textureArraySlice;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___eyeCenterUV;
};
struct Unit_t21DCD5C095F7DC1A0B9A47CAF8CAD3E7776CD3DB 
{
	int32_t ___value__;
};
#pragma pack(push, tp, 1)
struct AtlasNode_tE1393243E3FBC4D627662BB3BD7D37E36687987A 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int16_t ___m_Self;
				};
				#pragma pack(pop, tp)
				struct
				{
					int16_t ___m_Self_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_Parent_OffsetPadding[2];
					int16_t ___m_Parent;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_Parent_OffsetPadding_forAlignmentOnly[2];
					int16_t ___m_Parent_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_LeftChild_OffsetPadding[4];
					int16_t ___m_LeftChild;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_LeftChild_OffsetPadding_forAlignmentOnly[4];
					int16_t ___m_LeftChild_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_RightChild_OffsetPadding[6];
					int16_t ___m_RightChild;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_RightChild_OffsetPadding_forAlignmentOnly[6];
					int16_t ___m_RightChild_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_FreelistNext_OffsetPadding[8];
					int16_t ___m_FreelistNext;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_FreelistNext_OffsetPadding_forAlignmentOnly[8];
					int16_t ___m_FreelistNext_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_Flags_OffsetPadding[10];
					uint16_t ___m_Flags;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_Flags_OffsetPadding_forAlignmentOnly[10];
					uint16_t ___m_Flags_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_Rect_OffsetPadding[16];
					Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_Rect;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_Rect_OffsetPadding_forAlignmentOnly[16];
					Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_Rect_forAlignmentOnly;
				};
			};
		};
		uint8_t AtlasNode_tE1393243E3FBC4D627662BB3BD7D37E36687987A__padding[32];
	};
};
#pragma pack(pop, tp)
struct EDataType_t0C2DA16578173883F95D80B51614B5E80BEB54E0 
{
	int32_t ___value__;
};
struct Unit_tAE6456027618FB5F9E5CCB6E5C209250AC5695CC 
{
	int32_t ___value__;
};
struct Hammersley2dSeq16_t397C360C61F6E7F51A0A76E3D2C33D9E3E7DA9C0 
{
	U3Chammersley2dSeq16U3Ee__FixedBuffer_t6F140D0C91E62112E1635AF868D461A48FB26EC9 ___hammersley2dSeq16;
};
struct Hammersley2dSeq256_tC5B5FB2A55263672FAF8EDF3CC19470F51E623C3 
{
	U3Chammersley2dSeq256U3Ee__FixedBuffer_t10E5086FADEE57D861BB75F2AB059694CD6862C8 ___hammersley2dSeq256;
};
struct Hammersley2dSeq32_t5222FE247619F99BDD08C37FE5B0D94747718042 
{
	U3Chammersley2dSeq32U3Ee__FixedBuffer_t4D989F40E722CE7266EEF1B3C59EA668353D4156 ___hammersley2dSeq32;
};
struct Hammersley2dSeq64_tAF73FAB2FE740998DFFF551198D6C651F0A058E7 
{
	U3Chammersley2dSeq64U3Ee__FixedBuffer_t8AC325DA590C70B67FFC758DC78935109659D47E ___hammersley2dSeq64;
};
struct HebrewToken_tFAA97D4A183580830C64EB11A971CC75EB08B76E 
{
	int16_t ___value__;
};
struct Unit_t7A9C3ABB0618BEBFDC1813D07080CE0C145448ED 
{
	int32_t ___value__;
};
struct Mode_t2D49D0E10E2FDA0026278C2400C16033888D0542 
{
	int32_t ___value__;
};
struct LocationFlag_t967AE045AA727496F989291CFBC14F53964FCECB 
{
	int32_t ___value__;
};
struct Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position;
	int32_t ___subdivisionLevel;
};
struct SettingsVersion_t3663C03E36EF45364E201CE47DCA26BDFCF05A2E 
{
	int32_t ___value__;
};
struct SerializablePerScenarioDataItem_t8ECC5ABF9BA05017D9B44DB66430D5946393AC92 
{
	String_t* ___scenario;
	PerScenarioData_t550076045279B9168297EFAEC12D729EB36C67CC ___data;
};
struct SerializablePerScenarioDataItem_t8ECC5ABF9BA05017D9B44DB66430D5946393AC92_marshaled_pinvoke
{
	char* ___scenario;
	PerScenarioData_t550076045279B9168297EFAEC12D729EB36C67CC_marshaled_pinvoke ___data;
};
struct SerializablePerScenarioDataItem_t8ECC5ABF9BA05017D9B44DB66430D5946393AC92_marshaled_com
{
	Il2CppChar* ___scenario;
	PerScenarioData_t550076045279B9168297EFAEC12D729EB36C67CC_marshaled_com ___data;
};
struct RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE 
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___standardMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___initialMaterial;
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___matPropBlock;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand;
	UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302* ___device;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___vectorAtlas;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___shaderInfoAtlas;
	float ___dpiScale;
	NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370 ___transformConstants;
	NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F ___clipRectConstants;
};
struct RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshaled_pinvoke
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___standardMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___initialMaterial;
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___matPropBlock;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand;
	UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302* ___device;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___vectorAtlas;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___shaderInfoAtlas;
	float ___dpiScale;
	NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370 ___transformConstants;
	NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F ___clipRectConstants;
};
struct RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshaled_com
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___standardMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___initialMaterial;
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___matPropBlock;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand;
	UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302* ___device;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___vectorAtlas;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___shaderInfoAtlas;
	float ___dpiScale;
	NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370 ___transformConstants;
	NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F ___clipRectConstants;
};
struct WSABUF_tCBB60A3DE1FB95395F72DA6C6F9D33FE3C40140B 
{
	int32_t ___len;
	intptr_t ___buf;
};
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack;
	int32_t ___index;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TextProcessingStack_1_tF3616757510D9631241E95596F10A4139420DA16 
{
	HighlightStateU5BU5D_tCF5677B4773947CE4C64B938B12AC50DDA347435* ___itemStack;
	int32_t ___index;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TextProcessingStack_1_tE63296B08A4C34E38D7EF3FFFA3470076B9E3A0F 
{
	TextAlignmentU5BU5D_t756DC2D672145699CB9718DDBA5982ED51A95F49* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TextProcessingStack_1_t698B87CDD968C2046F57134BB3AB807EBFFD7790 
{
	TextFontWeightU5BU5D_t3DE32809AEE657255C8333897D61F2EA5279D43F* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F 
{
	int32_t ___x;
	int32_t ___y;
};
struct ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B 
{
	int32_t ___m_BodyID;
	int32_t ___m_OtherBodyID;
	intptr_t ___m_StartPtr;
	uint32_t ___m_NbPairs;
	uint16_t ___m_Flags;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity;
};
struct DataStruct_tAAA7895996A271D9E41191C4932AC11A3BD2EB4F 
{
	int32_t ___Type;
	bool ___mBooleanValue;
	Number_t76C3F1C69D96DD914E1BC182AFBCBAFF91372F5A ___mNumberValue;
	String_t* ___mStringValue;
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___mListValue;
};
struct DataStruct_tAAA7895996A271D9E41191C4932AC11A3BD2EB4F_marshaled_pinvoke
{
	int32_t ___Type;
	int32_t ___mBooleanValue;
	Number_t76C3F1C69D96DD914E1BC182AFBCBAFF91372F5A_marshaled_pinvoke ___mNumberValue;
	char* ___mStringValue;
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___mListValue;
};
struct DataStruct_tAAA7895996A271D9E41191C4932AC11A3BD2EB4F_marshaled_com
{
	int32_t ___Type;
	int32_t ___mBooleanValue;
	Number_t76C3F1C69D96DD914E1BC182AFBCBAFF91372F5A_marshaled_com ___mNumberValue;
	Il2CppChar* ___mStringValue;
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___mListValue;
};
struct Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 
{
	int32_t ___unit;
	float ___value;
};
struct EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 
{
	int32_t ___m_Mode;
};
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F  : public RuntimeObject
{
	uint32_t ___m_Index;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___m_Metrics;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___m_GlyphRect;
	float ___m_Scale;
	int32_t ___m_AtlasIndex;
	int32_t ___m_ClassDefinitionType;
};
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_pinvoke
{
	uint32_t ___m_Index;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___m_Metrics;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___m_GlyphRect;
	float ___m_Scale;
	int32_t ___m_AtlasIndex;
	int32_t ___m_ClassDefinitionType;
};
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_com
{
	uint32_t ___m_Index;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___m_Metrics;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___m_GlyphRect;
	float ___m_Scale;
	int32_t ___m_AtlasIndex;
	int32_t ___m_ClassDefinitionType;
};
struct GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C 
{
	uint32_t ___index;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___metrics;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___glyphRect;
	float ___scale;
	int32_t ___atlasIndex;
	int32_t ___classDefinitionType;
};
struct GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E 
{
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_FirstAdjustmentRecord;
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_SecondAdjustmentRecord;
	int32_t ___m_FeatureLookupFlags;
};
struct GradientSettings_tADA3CAA17319C58811DE187298039CC950FBAAF3 
{
	int32_t ___gradientType;
	int32_t ___addressMode;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radialFocus;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___location;
};
struct GraphicsFence_t199180163AEDE0C1BE868F8E1314A47610B1FABB 
{
	intptr_t ___m_Ptr;
	int32_t ___m_Version;
	int32_t ___m_FenceType;
};
struct HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A 
{
	String_t* ___m_name;
	int32_t ___m_variant;
};
struct HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_marshaled_pinvoke
{
	char* ___m_name;
	int32_t ___m_variant;
};
struct HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_marshaled_com
{
	Il2CppChar* ___m_name;
	int32_t ___m_variant;
};
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E 
{
	int32_t ___Type;
	int32_t ___Position;
	String_t* ___PropertyName;
	bool ___HasIndex;
};
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_pinvoke
{
	int32_t ___Type;
	int32_t ___Position;
	char* ___PropertyName;
	int32_t ___HasIndex;
};
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_com
{
	int32_t ___Type;
	int32_t ___Position;
	Il2CppChar* ___PropertyName;
	int32_t ___HasIndex;
};
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 
{
	int32_t ___instanceID;
	int32_t ___cookieID;
	float ___cookieScale;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	float ___range;
	float ___coneAngle;
	float ___innerConeAngle;
	float ___shape0;
	float ___shape1;
	uint8_t ___type;
	uint8_t ___mode;
	uint8_t ___shadow;
	uint8_t ___falloff;
};
struct LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 
{
	int32_t ___controlCharacterCount;
	int32_t ___characterCount;
	int32_t ___visibleCharacterCount;
	int32_t ___spaceCount;
	int32_t ___visibleSpaceCount;
	int32_t ___wordCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharacterIndex;
	float ___length;
	float ___lineHeight;
	float ___ascender;
	float ___baseline;
	float ___descender;
	float ___maxAdvance;
	float ___width;
	float ___marginLeft;
	float ___marginRight;
	int32_t ___alignment;
	Extents_t369FB2B84521A0229C2FA3D4C8592B14E07CEFE6 ___lineExtents;
};
struct ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 
{
	int32_t ___U3CbuttonU3Ek__BackingField;
	int32_t ___U3CmodifiersU3Ek__BackingField;
	int32_t ___U3CclickCountU3Ek__BackingField;
};
struct MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F 
{
	int32_t ___vertexCount;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___normals;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___tangents;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___uvs0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs2;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___colors32;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___triangles;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___glyphRenderMode;
};
struct MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshaled_pinvoke
{
	int32_t ___vertexCount;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normals;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___tangents;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___uvs0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs2;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors32;
	Il2CppSafeArray* ___triangles;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___glyphRenderMode;
};
struct MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshaled_com
{
	int32_t ___vertexCount;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normals;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___tangents;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___uvs0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs2;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors32;
	Il2CppSafeArray* ___triangles;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___glyphRenderMode;
};
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	int32_t ___m_Mode;
	bool ___m_WrapAround;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight;
};
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode;
	int32_t ___m_WrapAround;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight;
};
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode;
	int32_t ___m_WrapAround;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight;
};
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 
{
	String_t* ___m_StreamName;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_SourceObject;
	Type_t* ___m_SourceBindingType;
	CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* ___m_CreateOutputMethod;
};
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_pinvoke
{
	char* ___m_StreamName;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___m_SourceObject;
	Type_t* ___m_SourceBindingType;
	Il2CppMethodPointer ___m_CreateOutputMethod;
};
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_com
{
	Il2CppChar* ___m_StreamName;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___m_SourceObject;
	Type_t* ___m_SourceBindingType;
	Il2CppMethodPointer ___m_CreateOutputMethod;
};
struct ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7 
{
	int32_t ___m_Version;
	ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167 ___dilationSettings;
	VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44 ___virtualOffsetSettings;
};
struct ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7_marshaled_pinvoke
{
	int32_t ___m_Version;
	ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167_marshaled_pinvoke ___dilationSettings;
	VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44_marshaled_pinvoke ___virtualOffsetSettings;
};
struct ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7_marshaled_com
{
	int32_t ___m_Version;
	ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167_marshaled_com ___dilationSettings;
	VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44_marshaled_com ___virtualOffsetSettings;
};
struct RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 
{
	int32_t ___m_CullingMode;
	int32_t ___m_OffsetUnits;
	float ___m_OffsetFactor;
	uint8_t ___m_DepthClip;
	uint8_t ___m_Conservative;
	uint8_t ___m_Padding1;
	uint8_t ___m_Padding2;
};
struct RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B 
{
	int32_t ___m_Type;
	int32_t ___m_NameID;
	int32_t ___m_InstanceID;
	intptr_t ___m_BufferPointer;
	int32_t ___m_MipLevel;
	int32_t ___m_CubeFace;
	int32_t ___m_DepthSlice;
};
struct ResourceHandle_t0B9B0555328A08152F1EDA2BE4024446D670531A 
{
	uint32_t ___m_Value;
	int32_t ___U3CtypeU3Ek__BackingField;
};
struct RichTextTagAttribute_t1BB51A8FD6C14746D177D8E84E281A4FD4A720E0 
{
	int32_t ___nameHashCode;
	int32_t ___valueHashCode;
	int32_t ___valueType;
	int32_t ___valueStartIndex;
	int32_t ___valueLength;
	int32_t ___unitType;
};
struct RichTextTagAttribute_t0600951F833208392F1D8EE3E6A58AD5C797F9DA 
{
	int32_t ___nameHashCode;
	int32_t ___valueHashCode;
	int32_t ___valueType;
	int32_t ___valueStartIndex;
	int32_t ___valueLength;
	int32_t ___unitType;
};
struct Signal_tEFD49B4C8790160612FF4DB83932B8744E3164AB 
{
	String_t* ___name;
	int32_t ___type;
	String_t* ___from;
	String_t* ___to;
};
struct Signal_tEFD49B4C8790160612FF4DB83932B8744E3164AB_marshaled_pinvoke
{
	char* ___name;
	int32_t ___type;
	char* ___from;
	char* ___to;
};
struct Signal_tEFD49B4C8790160612FF4DB83932B8744E3164AB_marshaled_com
{
	Il2CppChar* ___name;
	int32_t ___type;
	Il2CppChar* ___from;
	Il2CppChar* ___to;
};
struct SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D 
{
	String_t* ___m_value;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___m_cmpInfo;
	int32_t ___m_lcid;
	int32_t ___m_flag;
	bool ___m_fNotNull;
};
struct SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_marshaled_pinvoke
{
	char* ___m_value;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___m_cmpInfo;
	int32_t ___m_lcid;
	int32_t ___m_flag;
	int32_t ___m_fNotNull;
};
struct SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_marshaled_com
{
	Il2CppChar* ___m_value;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___m_cmpInfo;
	int32_t ___m_lcid;
	int32_t ___m_flag;
	int32_t ___m_fNotNull;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF 
{
	int32_t ___U3CidU3Ek__BackingField;
	String_t* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_pinvoke
{
	int32_t ___U3CidU3Ek__BackingField;
	char* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_com
{
	int32_t ___U3CidU3Ek__BackingField;
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 
{
	String_t* ___m_Value;
	int32_t ___m_Type;
	RuntimeObject* ___tempData;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_pinvoke
{
	char* ___m_Value;
	int32_t ___m_Type;
	Il2CppIUnknown* ___tempData;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_com
{
	Il2CppChar* ___m_Value;
	int32_t ___m_Type;
	Il2CppIUnknown* ___tempData;
};
struct StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C 
{
	int32_t ___type;
	String_t* ___text;
	int32_t ___number;
};
struct StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshaled_pinvoke
{
	int32_t ___type;
	char* ___text;
	int32_t ___number;
};
struct StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshaled_com
{
	int32_t ___type;
	Il2CppChar* ___text;
	int32_t ___number;
};
struct StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D 
{
	int32_t ___m_ValueType;
	int32_t ___valueIndex;
};
struct StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 
{
	int32_t ___id;
	int32_t ___keyword;
	RuntimeObject* ___value;
};
struct StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshaled_pinvoke
{
	int32_t ___id;
	int32_t ___keyword;
	Il2CppIUnknown* ___value;
};
struct StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshaled_com
{
	int32_t ___id;
	int32_t ___keyword;
	Il2CppIUnknown* ___value;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 
{
	Il2CppChar ___character;
	int32_t ___index;
	int32_t ___stringLength;
	int32_t ___elementType;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	int32_t ___spriteIndex;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialReferenceIndex;
	bool ___isUsingAlternateTypeface;
	float ___pointSize;
	int32_t ___lineNumber;
	int32_t ___pageNumber;
	int32_t ___vertexIndex;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight;
	float ___origin;
	float ___xAdvance;
	float ___ascender;
	float ___baseLine;
	float ___descender;
	float ___adjustedAscender;
	float ___adjustedDescender;
	float ___aspectRatio;
	float ___scale;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	int32_t ___underlineVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	int32_t ___strikethroughVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState;
	int32_t ___style;
	bool ___isVisible;
};
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_marshaled_pinvoke
{
	uint8_t ___character;
	int32_t ___index;
	int32_t ___stringLength;
	int32_t ___elementType;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	int32_t ___spriteIndex;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialReferenceIndex;
	int32_t ___isUsingAlternateTypeface;
	float ___pointSize;
	int32_t ___lineNumber;
	int32_t ___pageNumber;
	int32_t ___vertexIndex;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight;
	float ___origin;
	float ___xAdvance;
	float ___ascender;
	float ___baseLine;
	float ___descender;
	float ___adjustedAscender;
	float ___adjustedDescender;
	float ___aspectRatio;
	float ___scale;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	int32_t ___underlineVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	int32_t ___strikethroughVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState;
	int32_t ___style;
	int32_t ___isVisible;
};
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_marshaled_com
{
	uint8_t ___character;
	int32_t ___index;
	int32_t ___stringLength;
	int32_t ___elementType;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	int32_t ___spriteIndex;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialReferenceIndex;
	int32_t ___isUsingAlternateTypeface;
	float ___pointSize;
	int32_t ___lineNumber;
	int32_t ___pageNumber;
	int32_t ___vertexIndex;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight;
	float ___origin;
	float ___xAdvance;
	float ___ascender;
	float ___baseLine;
	float ___descender;
	float ___adjustedAscender;
	float ___adjustedDescender;
	float ___aspectRatio;
	float ___scale;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	int32_t ___underlineVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	int32_t ___strikethroughVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState;
	int32_t ___style;
	int32_t ___isVisible;
};
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	int32_t ___controlCharacterCount;
	int32_t ___characterCount;
	int32_t ___visibleCharacterCount;
	int32_t ___spaceCount;
	int32_t ___wordCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharacterIndex;
	float ___length;
	float ___lineHeight;
	float ___ascender;
	float ___baseline;
	float ___descender;
	float ___maxAdvance;
	float ___width;
	float ___marginLeft;
	float ___marginRight;
	int32_t ___alignment;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents;
};
struct TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 
{
	int32_t ___elementType;
	uint32_t ___unicode;
	int32_t ___stringIndex;
	int32_t ___length;
};
struct TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	int32_t ___m_FingerId;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta;
	float ___m_TimeDelta;
	int32_t ___m_TapCount;
	int32_t ___m_Phase;
	int32_t ___m_Type;
	float ___m_Pressure;
	float ___m_maximumPossiblePressure;
	float ___m_Radius;
	float ___m_RadiusVariance;
	float ___m_AltitudeAngle;
	float ___m_AzimuthAngle;
};
struct VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 
{
	int32_t ___U3CattributeU3Ek__BackingField;
	int32_t ___U3CformatU3Ek__BackingField;
	int32_t ___U3CdimensionU3Ek__BackingField;
	int32_t ___U3CstreamU3Ek__BackingField;
};
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D 
{
	int32_t ___status;
	String_t* ___info;
};
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_pinvoke
{
	int32_t ___status;
	char* ___info;
};
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_com
{
	int32_t ___status;
	Il2CppChar* ___info;
};
struct RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3 
{
	String_t* ___m_name;
	int32_t ___m_token;
};
struct RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_marshaled_pinvoke
{
	char* ___m_name;
	int32_t ___m_token;
};
struct RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_marshaled_com
{
	Il2CppChar* ___m_name;
	int32_t ___m_token;
};
struct ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375 
{
	int32_t ___type;
	PerformDynamicRes_t0949EAA6943CF225A1F61B233E13A440C1C09B47* ___method;
};
struct ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375_marshaled_pinvoke
{
	int32_t ___type;
	Il2CppMethodPointer ___method;
};
struct ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375_marshaled_com
{
	int32_t ___type;
	Il2CppMethodPointer ___method;
};
struct ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87 
{
	String_t* ____word;
	int32_t ____token;
	int32_t ____op;
};
struct ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87_marshaled_pinvoke
{
	char* ____word;
	int32_t ____token;
	int32_t ____op;
};
struct ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87_marshaled_com
{
	Il2CppChar* ____word;
	int32_t ____token;
	int32_t ____op;
};
struct HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C 
{
	int16_t ___token;
	int16_t ___value;
};
struct SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA 
{
	SortColumnDescription_t278A693B84340D73A6FADCFB1521E313A80F9C37* ___columnDesc;
	int32_t ___direction;
};
struct SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA_marshaled_pinvoke
{
	SortColumnDescription_t278A693B84340D73A6FADCFB1521E313A80F9C37* ___columnDesc;
	int32_t ___direction;
};
struct SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA_marshaled_com
{
	SortColumnDescription_t278A693B84340D73A6FADCFB1521E313A80F9C37* ___columnDesc;
	int32_t ___direction;
};
struct PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CPositionU3Ek__BackingField;
	RuntimeObject* ___U3CPanelU3Ek__BackingField;
	int32_t ___U3CFlagsU3Ek__BackingField;
};
struct PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_marshaled_pinvoke
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CPositionU3Ek__BackingField;
	RuntimeObject* ___U3CPanelU3Ek__BackingField;
	int32_t ___U3CFlagsU3Ek__BackingField;
};
struct PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_marshaled_com
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CPositionU3Ek__BackingField;
	RuntimeObject* ___U3CPanelU3Ek__BackingField;
	int32_t ___U3CFlagsU3Ek__BackingField;
};
struct ReservedBrick_tCFAA149CAAD025D942AF59976B1CC697E96CACB9 
{
	Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0 ___brick;
	int32_t ___flattenedIdx;
};
struct SerializableBoundItem_tF2F8CD24513F8F4D69DCAC89522EA0D3C032A640 
{
	String_t* ___sceneGUID;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds;
};
struct SerializableBoundItem_tF2F8CD24513F8F4D69DCAC89522EA0D3C032A640_marshaled_pinvoke
{
	char* ___sceneGUID;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds;
};
struct SerializableBoundItem_tF2F8CD24513F8F4D69DCAC89522EA0D3C032A640_marshaled_com
{
	Il2CppChar* ___sceneGUID;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds;
};
struct CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 
{
	int32_t ____options;
	String_t* ____cultureKey;
	String_t* ____pattern;
};
struct CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshaled_pinvoke
{
	int32_t ____options;
	char* ____cultureKey;
	char* ____pattern;
};
struct CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshaled_com
{
	int32_t ____options;
	Il2CppChar* ____cultureKey;
	Il2CppChar* ____pattern;
};
struct PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 
{
	int32_t ___state;
	bool ___negate;
};
struct PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshaled_pinvoke
{
	int32_t ___state;
	int32_t ___negate;
};
struct PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshaled_com
{
	int32_t ___state;
	int32_t ___negate;
};
struct ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___element;
	int32_t ___property;
};
struct ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___element;
	int32_t ___property;
};
struct ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___element;
	int32_t ___property;
};
struct BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 
{
	int32_t ___keyword;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___offset;
};
struct RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 
{
	BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 ___m_BlendState;
	RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 ___m_RasterState;
	DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 ___m_DepthState;
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___m_StencilState;
	int32_t ___m_StencilReference;
	int32_t ___m_Mask;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	bool ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle;
};
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle;
};
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle;
};
struct TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 
{
	Il2CppChar ___character;
	int32_t ___index;
	uint8_t ___elementType;
	int32_t ___stringLength;
	TextElement_tCEF567A8810788262275B39DC39CBA6EBE7472DA* ___textElement;
	Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F* ___alternativeGlyph;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset;
	int32_t ___spriteIndex;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialReferenceIndex;
	bool ___isUsingAlternateTypeface;
	float ___pointSize;
	int32_t ___lineNumber;
	int32_t ___pageNumber;
	int32_t ___vertexIndex;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopLeft;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomLeft;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopRight;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight;
	float ___origin;
	float ___ascender;
	float ___baseLine;
	float ___descender;
	float ___adjustedAscender;
	float ___adjustedDescender;
	float ___adjustedHorizontalAdvance;
	float ___xAdvance;
	float ___aspectRatio;
	float ___scale;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	int32_t ___underlineVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	int32_t ___strikethroughVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState;
	int32_t ___style;
	bool ___isVisible;
};
struct TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshaled_pinvoke
{
	uint8_t ___character;
	int32_t ___index;
	uint8_t ___elementType;
	int32_t ___stringLength;
	TextElement_tCEF567A8810788262275B39DC39CBA6EBE7472DA* ___textElement;
	Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_pinvoke ___alternativeGlyph;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset;
	int32_t ___spriteIndex;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialReferenceIndex;
	int32_t ___isUsingAlternateTypeface;
	float ___pointSize;
	int32_t ___lineNumber;
	int32_t ___pageNumber;
	int32_t ___vertexIndex;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopLeft;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomLeft;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopRight;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight;
	float ___origin;
	float ___ascender;
	float ___baseLine;
	float ___descender;
	float ___adjustedAscender;
	float ___adjustedDescender;
	float ___adjustedHorizontalAdvance;
	float ___xAdvance;
	float ___aspectRatio;
	float ___scale;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	int32_t ___underlineVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	int32_t ___strikethroughVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState;
	int32_t ___style;
	int32_t ___isVisible;
};
struct TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshaled_com
{
	uint8_t ___character;
	int32_t ___index;
	uint8_t ___elementType;
	int32_t ___stringLength;
	TextElement_tCEF567A8810788262275B39DC39CBA6EBE7472DA* ___textElement;
	Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_com* ___alternativeGlyph;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset;
	int32_t ___spriteIndex;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialReferenceIndex;
	int32_t ___isUsingAlternateTypeface;
	float ___pointSize;
	int32_t ___lineNumber;
	int32_t ___pageNumber;
	int32_t ___vertexIndex;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopLeft;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomLeft;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopRight;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight;
	float ___origin;
	float ___ascender;
	float ___baseLine;
	float ___descender;
	float ___adjustedAscender;
	float ___adjustedDescender;
	float ___adjustedHorizontalAdvance;
	float ___xAdvance;
	float ___aspectRatio;
	float ___scale;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	int32_t ___underlineVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	int32_t ___strikethroughVertexIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState;
	int32_t ___style;
	int32_t ___isVisible;
};
struct TextureHandle_t87D7D063E5E22E38632961AB2B6F89978942BE09 
{
	ResourceHandle_t0B9B0555328A08152F1EDA2BE4024446D670531A ___handle;
};
struct TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	bool ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	int32_t ___previous_WordBreak;
	int32_t ___total_CharacterCount;
	int32_t ___visible_CharacterCount;
	int32_t ___visible_SpriteCount;
	int32_t ___visible_LinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___startOfLineAscender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___pageAscender;
	int32_t ___horizontalAlignment;
	float ___marginLeft;
	float ___marginRight;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___previousLineScale;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	int32_t ___italicAngle;
	float ___fontScaleMultiplier;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	bool ___isDrivenLineSpacing;
	float ___glyphHorizontalAdvanceAdjustment;
	float ___cSpace;
	float ___mSpace;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack;
	int32_t ___spriteAnimationID;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents;
	bool ___tagNoParsing;
	bool ___isNonBreakingSpace;
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak;
	int32_t ___total_CharacterCount;
	int32_t ___visible_CharacterCount;
	int32_t ___visible_SpriteCount;
	int32_t ___visible_LinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___startOfLineAscender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___pageAscender;
	int32_t ___horizontalAlignment;
	float ___marginLeft;
	float ___marginRight;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___previousLineScale;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	int32_t ___italicAngle;
	float ___fontScaleMultiplier;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	int32_t ___isDrivenLineSpacing;
	float ___glyphHorizontalAdvanceAdjustment;
	float ___cSpace;
	float ___mSpace;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack;
	int32_t ___spriteAnimationID;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents;
	int32_t ___tagNoParsing;
	int32_t ___isNonBreakingSpace;
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak;
	int32_t ___total_CharacterCount;
	int32_t ___visible_CharacterCount;
	int32_t ___visible_SpriteCount;
	int32_t ___visible_LinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___startOfLineAscender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___pageAscender;
	int32_t ___horizontalAlignment;
	float ___marginLeft;
	float ___marginRight;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___previousLineScale;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	int32_t ___italicAngle;
	float ___fontScaleMultiplier;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	int32_t ___isDrivenLineSpacing;
	float ___glyphHorizontalAdvanceAdjustment;
	float ___cSpace;
	float ___mSpace;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack;
	int32_t ___spriteAnimationID;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents;
	int32_t ___tagNoParsing;
	int32_t ___isNonBreakingSpace;
};
struct WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123 
{
	int32_t ___previousWordBreak;
	int32_t ___totalCharacterCount;
	int32_t ___visibleCharacterCount;
	int32_t ___visibleSpaceCount;
	int32_t ___visibleSpriteCount;
	int32_t ___visibleLinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___startOfLineAscender;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___previousLineScale;
	float ___pageAscender;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	float ___fontScale;
	float ___fontScaleMultiplier;
	int32_t ___italicAngle;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	TextInfo_t27E58E62A7552C66D38C175AF9D22622365F5D09* ___textInfo;
	LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState;
	FontStyleStack_t63C77495F068E6DF762D6AF063A817E3709659A7 ___basicStyleStack;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___italicAngleStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___colorStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___underlineColorStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___strikethroughColorStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___highlightColorStack;
	TextProcessingStack_1_tF3616757510D9631241E95596F10A4139420DA16 ___highlightStateStack;
	TextProcessingStack_1_t0F39F088E8F8F6E18C3C463B2998ADC5B7A0513E ___colorGradientStack;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___sizeStack;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___indentStack;
	TextProcessingStack_1_t698B87CDD968C2046F57134BB3AB807EBFFD7790 ___fontWeightStack;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___styleStack;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___baselineStack;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___actionStack;
	TextProcessingStack_1_t0C74606C1B6C7817CA95F0DCA46B219CF6FB35CA ___materialReferenceStack;
	TextProcessingStack_1_tE63296B08A4C34E38D7EF3FFFA3470076B9E3A0F ___lineJustificationStack;
	int32_t ___lastBaseGlyphIndex;
	int32_t ___spriteAnimationId;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___currentFontAsset;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_t369FB2B84521A0229C2FA3D4C8592B14E07CEFE6 ___meshExtents;
	bool ___tagNoParsing;
	bool ___isNonBreakingSpace;
	bool ___isDrivenLineSpacing;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation;
};
struct WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshaled_pinvoke
{
	int32_t ___previousWordBreak;
	int32_t ___totalCharacterCount;
	int32_t ___visibleCharacterCount;
	int32_t ___visibleSpaceCount;
	int32_t ___visibleSpriteCount;
	int32_t ___visibleLinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___startOfLineAscender;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___previousLineScale;
	float ___pageAscender;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	float ___fontScale;
	float ___fontScaleMultiplier;
	int32_t ___italicAngle;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	TextInfo_t27E58E62A7552C66D38C175AF9D22622365F5D09* ___textInfo;
	LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState;
	FontStyleStack_t63C77495F068E6DF762D6AF063A817E3709659A7 ___basicStyleStack;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___italicAngleStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___colorStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___underlineColorStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___strikethroughColorStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___highlightColorStack;
	TextProcessingStack_1_tF3616757510D9631241E95596F10A4139420DA16 ___highlightStateStack;
	TextProcessingStack_1_t0F39F088E8F8F6E18C3C463B2998ADC5B7A0513E ___colorGradientStack;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___sizeStack;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___indentStack;
	TextProcessingStack_1_t698B87CDD968C2046F57134BB3AB807EBFFD7790 ___fontWeightStack;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___styleStack;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___baselineStack;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___actionStack;
	TextProcessingStack_1_t0C74606C1B6C7817CA95F0DCA46B219CF6FB35CA ___materialReferenceStack;
	TextProcessingStack_1_tE63296B08A4C34E38D7EF3FFFA3470076B9E3A0F ___lineJustificationStack;
	int32_t ___lastBaseGlyphIndex;
	int32_t ___spriteAnimationId;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___currentFontAsset;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_t369FB2B84521A0229C2FA3D4C8592B14E07CEFE6 ___meshExtents;
	int32_t ___tagNoParsing;
	int32_t ___isNonBreakingSpace;
	int32_t ___isDrivenLineSpacing;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation;
};
struct WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshaled_com
{
	int32_t ___previousWordBreak;
	int32_t ___totalCharacterCount;
	int32_t ___visibleCharacterCount;
	int32_t ___visibleSpaceCount;
	int32_t ___visibleSpriteCount;
	int32_t ___visibleLinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___startOfLineAscender;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___previousLineScale;
	float ___pageAscender;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	float ___fontScale;
	float ___fontScaleMultiplier;
	int32_t ___italicAngle;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	TextInfo_t27E58E62A7552C66D38C175AF9D22622365F5D09* ___textInfo;
	LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState;
	FontStyleStack_t63C77495F068E6DF762D6AF063A817E3709659A7 ___basicStyleStack;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___italicAngleStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___colorStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___underlineColorStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___strikethroughColorStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___highlightColorStack;
	TextProcessingStack_1_tF3616757510D9631241E95596F10A4139420DA16 ___highlightStateStack;
	TextProcessingStack_1_t0F39F088E8F8F6E18C3C463B2998ADC5B7A0513E ___colorGradientStack;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___sizeStack;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___indentStack;
	TextProcessingStack_1_t698B87CDD968C2046F57134BB3AB807EBFFD7790 ___fontWeightStack;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___styleStack;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___baselineStack;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___actionStack;
	TextProcessingStack_1_t0C74606C1B6C7817CA95F0DCA46B219CF6FB35CA ___materialReferenceStack;
	TextProcessingStack_1_tE63296B08A4C34E38D7EF3FFFA3470076B9E3A0F ___lineJustificationStack;
	int32_t ___lastBaseGlyphIndex;
	int32_t ___spriteAnimationId;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___currentFontAsset;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_t369FB2B84521A0229C2FA3D4C8592B14E07CEFE6 ___meshExtents;
	int32_t ___tagNoParsing;
	int32_t ___isNonBreakingSpace;
	int32_t ___isDrivenLineSpacing;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation;
};
struct SerializablePVBakeSettings_t9C88167788303739AC5D93A20092598DF654A452 
{
	String_t* ___sceneGUID;
	ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7 ___settings;
};
struct SerializablePVBakeSettings_t9C88167788303739AC5D93A20092598DF654A452_marshaled_pinvoke
{
	char* ___sceneGUID;
	ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7_marshaled_pinvoke ___settings;
};
struct SerializablePVBakeSettings_t9C88167788303739AC5D93A20092598DF654A452_marshaled_com
{
	Il2CppChar* ___sceneGUID;
	ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7_marshaled_com ___settings;
};
struct CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615 
{
	RenderGraphPass_t7689449D6979D97B31E962897EB038EA3F01D361* ___pass;
	List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206* ___resourceCreateList;
	List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206* ___resourceReleaseList;
	int32_t ___refCount;
	bool ___culled;
	bool ___culledByRendererList;
	bool ___hasSideEffect;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	bool ___needGraphicsFence;
	GraphicsFence_t199180163AEDE0C1BE868F8E1314A47610B1FABB ___fence;
	bool ___enableAsyncCompute;
};
struct CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615_marshaled_pinvoke
{
	RenderGraphPass_t7689449D6979D97B31E962897EB038EA3F01D361* ___pass;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceCreateList;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceReleaseList;
	int32_t ___refCount;
	int32_t ___culled;
	int32_t ___culledByRendererList;
	int32_t ___hasSideEffect;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	int32_t ___needGraphicsFence;
	GraphicsFence_t199180163AEDE0C1BE868F8E1314A47610B1FABB ___fence;
	int32_t ___enableAsyncCompute;
};
struct CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615_marshaled_com
{
	RenderGraphPass_t7689449D6979D97B31E962897EB038EA3F01D361* ___pass;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceCreateList;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceReleaseList;
	int32_t ___refCount;
	int32_t ___culled;
	int32_t ___culledByRendererList;
	int32_t ___hasSideEffect;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	int32_t ___needGraphicsFence;
	GraphicsFence_t199180163AEDE0C1BE868F8E1314A47610B1FABB ___fence;
	int32_t ___enableAsyncCompute;
};
struct Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5 
{
	bool ___hasValue;
	RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 ___value;
};
struct StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___id;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___id_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keyword_OffsetPadding[4];
			int32_t ___keyword;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keyword_OffsetPadding_forAlignmentOnly[4];
			int32_t ___keyword_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___number_OffsetPadding[8];
			float ___number;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___number_OffsetPadding_forAlignmentOnly[8];
			float ___number_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___length_OffsetPadding[8];
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___length;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___length_OffsetPadding_forAlignmentOnly[8];
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___length_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___color_OffsetPadding[8];
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___color_OffsetPadding_forAlignmentOnly[8];
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___resource_OffsetPadding[8];
			GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___resource;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___resource_OffsetPadding_forAlignmentOnly[8];
			GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___resource_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___position_OffsetPadding[8];
			BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___position;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___position_OffsetPadding_forAlignmentOnly[8];
			BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___position_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___repeat_OffsetPadding[8];
			BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___repeat;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___repeat_OffsetPadding_forAlignmentOnly[8];
			BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___repeat_forAlignmentOnly;
		};
	};
};
struct RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E 
{
	int32_t ___sortingCriteria;
	int32_t ___rendererConfiguration;
	RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 ___renderQueueRange;
	Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5 ___stateBlock;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___overrideShader;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___overrideMaterial;
	bool ___excludeObjectMotionVectors;
	int32_t ___layerMask;
	uint32_t ___renderingLayerMask;
	int32_t ___overrideMaterialPassIndex;
	int32_t ___overrideShaderPassIndex;
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___U3CcullingResultU3Ek__BackingField;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___U3CcameraU3Ek__BackingField;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___U3CpassNameU3Ek__BackingField;
	ShaderTagIdU5BU5D_tE1BA124E13B8096153E25C5AF9C1D15D71466143* ___U3CpassNamesU3Ek__BackingField;
};
struct RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshaled_pinvoke
{
	int32_t ___sortingCriteria;
	int32_t ___rendererConfiguration;
	RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 ___renderQueueRange;
	Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5 ___stateBlock;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___overrideShader;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___overrideMaterial;
	int32_t ___excludeObjectMotionVectors;
	int32_t ___layerMask;
	uint32_t ___renderingLayerMask;
	int32_t ___overrideMaterialPassIndex;
	int32_t ___overrideShaderPassIndex;
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___U3CcullingResultU3Ek__BackingField;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___U3CcameraU3Ek__BackingField;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___U3CpassNameU3Ek__BackingField;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* ___U3CpassNamesU3Ek__BackingField;
};
struct RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshaled_com
{
	int32_t ___sortingCriteria;
	int32_t ___rendererConfiguration;
	RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 ___renderQueueRange;
	Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5 ___stateBlock;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___overrideShader;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___overrideMaterial;
	int32_t ___excludeObjectMotionVectors;
	int32_t ___layerMask;
	uint32_t ___renderingLayerMask;
	int32_t ___overrideMaterialPassIndex;
	int32_t ___overrideShaderPassIndex;
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___U3CcullingResultU3Ek__BackingField;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___U3CcameraU3Ek__BackingField;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___U3CpassNameU3Ek__BackingField;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* ___U3CpassNamesU3Ek__BackingField;
};
struct RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49 
{
	RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E ___desc;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
};
struct RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49_marshaled_pinvoke
{
	RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshaled_pinvoke ___desc;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
};
struct RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49_marshaled_com
{
	RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshaled_com ___desc;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue;
};
struct Edge_t1E55CB4BDAF40F0F124DEA86AE84673377D27A8F_StaticFields
{
	Edge_t1E55CB4BDAF40F0F124DEA86AE84673377D27A8F ___Empty;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray;
};
struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_StaticFields
{
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___s_ZeroGlyphRect;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_StaticFields
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___none;
};
struct SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347_StaticFields
{
	SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347 ___Null;
};
struct SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_StaticFields
{
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___True;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___False;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___Null;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___Zero;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___One;
};
struct SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46_StaticFields
{
	int32_t ___s_iBitNotByteMax;
	SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46 ___Null;
	SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46 ___Zero;
	SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46 ___MinValue;
	SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46 ___MaxValue;
};
struct SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields
{
	double ___s_SQLTicksPerMillisecond;
	int32_t ___SQLTicksPerSecond;
	int32_t ___SQLTicksPerMinute;
	int32_t ___SQLTicksPerHour;
	int32_t ___s_SQLTicksPerDay;
	int64_t ___s_ticksPerSecond;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___s_SQLBaseDate;
	int64_t ___s_SQLBaseDateTicks;
	int32_t ___s_minYear;
	int32_t ___s_maxYear;
	int32_t ___s_minDay;
	int32_t ___s_maxDay;
	int32_t ___s_minTime;
	int32_t ___s_maxTime;
	int32_t ___s_dayBase;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___s_minDateTime;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___s_maxDateTime;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_minTimeSpan;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maxTimeSpan;
	String_t* ___s_ISO8601_DateTimeFormat;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_dateTimeFormats;
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___MinValue;
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___MaxValue;
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___Null;
};
struct SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_StaticFields
{
	uint8_t ___s_NUMERIC_MAX_PRECISION;
	uint8_t ___MaxPrecision;
	uint8_t ___MaxScale;
	uint8_t ___s_bNullMask;
	uint8_t ___s_bIsNull;
	uint8_t ___s_bNotNull;
	uint8_t ___s_bReverseNullMask;
	uint8_t ___s_bSignMask;
	uint8_t ___s_bPositive;
	uint8_t ___s_bNegative;
	uint8_t ___s_bReverseSignMask;
	uint32_t ___s_uiZero;
	int32_t ___s_cNumeMax;
	int64_t ___s_lInt32Base;
	uint64_t ___s_ulInt32Base;
	uint64_t ___s_ulInt32BaseForMod;
	uint64_t ___s_llMax;
	uint32_t ___s_ulBase10;
	double ___s_DUINT_BASE;
	double ___s_DUINT_BASE2;
	double ___s_DUINT_BASE3;
	double ___s_DMAX_NUME;
	uint32_t ___s_DBL_DIG;
	uint8_t ___s_cNumeDivScaleMin;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_rgulShiftBase;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_decimalHelpersLo;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_decimalHelpersMid;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_decimalHelpersHi;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_decimalHelpersHiHi;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_rgCLenFromPrec;
	uint32_t ___s_ulT1;
	uint32_t ___s_ulT2;
	uint32_t ___s_ulT3;
	uint32_t ___s_ulT4;
	uint32_t ___s_ulT5;
	uint32_t ___s_ulT6;
	uint32_t ___s_ulT7;
	uint32_t ___s_ulT8;
	uint32_t ___s_ulT9;
	uint64_t ___s_dwlT10;
	uint64_t ___s_dwlT11;
	uint64_t ___s_dwlT12;
	uint64_t ___s_dwlT13;
	uint64_t ___s_dwlT14;
	uint64_t ___s_dwlT15;
	uint64_t ___s_dwlT16;
	uint64_t ___s_dwlT17;
	uint64_t ___s_dwlT18;
	uint64_t ___s_dwlT19;
	SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 ___Null;
	SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 ___MinValue;
	SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 ___MaxValue;
};
struct SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_StaticFields
{
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___Null;
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___Zero;
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___MinValue;
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___MaxValue;
};
struct SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_StaticFields
{
	int32_t ___s_sizeOfGuid;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_rgiGuidOrder;
	SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 ___Null;
};
struct SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_StaticFields
{
	int32_t ___s_MASKI2;
	SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B ___Null;
	SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B ___Zero;
	SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B ___MinValue;
	SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B ___MaxValue;
};
struct SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_StaticFields
{
	int64_t ___s_iIntMin;
	int64_t ___s_lBitNotIntMax;
	SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 ___Null;
	SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 ___Zero;
	SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 ___MinValue;
	SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 ___MaxValue;
};
struct SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_StaticFields
{
	int64_t ___s_lLowIntMask;
	int64_t ___s_lHighIntMask;
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___Null;
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___Zero;
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___MinValue;
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___MaxValue;
};
struct SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_StaticFields
{
	int32_t ___s_iMoneyScale;
	int64_t ___s_lTickBase;
	double ___s_dTickBase;
	int64_t ___s_minLong;
	int64_t ___s_maxLong;
	SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB ___Null;
	SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB ___Zero;
	SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB ___MinValue;
	SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB ___MaxValue;
};
struct SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_StaticFields
{
	SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 ___Null;
	SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 ___Zero;
	SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 ___MinValue;
	SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 ___MaxValue;
};
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_StaticFields
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_DefaultColor;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s_DefaultNormal;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___s_DefaultBounds;
};
struct TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_StaticFields
{
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___invalid;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_StaticFields
{
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MinValue;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MaxValue;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___UnixEpoch;
};
struct RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85_StaticFields
{
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___nullRendererList;
};
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_StaticFields
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_DefaultColor;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___simpleVert;
};
struct Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_StaticFields
{
	float ___nearZ;
};
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___SpecialCharacters;
};
struct MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_StaticFields
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___k_DefaultColor;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___k_DefaultNormal;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___k_DefaultTangent;
};
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields
{
	PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD* ___None;
	double ___DefaultDuration;
};
struct ResourceHandle_t0B9B0555328A08152F1EDA2BE4024446D670531A_StaticFields
{
	uint32_t ___s_CurrentValidBit;
	uint32_t ___s_SharedResourceValidBit;
};
struct SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_StaticFields
{
	SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D ___Null;
	UnicodeEncoding_t2C90D9E1E55C16081FACA57B229053C1EF05DAF0* ___s_unicodeEncoding;
	int32_t ___IgnoreCase;
	int32_t ___IgnoreWidth;
	int32_t ___IgnoreNonSpace;
	int32_t ___IgnoreKanaType;
	int32_t ___BinarySort;
	int32_t ___BinarySort2;
	int32_t ___s_iDefaultFlag;
	int32_t ___s_iValidCompareOptionMask;
	int32_t ___s_iValidSqlCompareOptionMask;
	int32_t ___s_lcidUSEnglish;
	int32_t ___s_lcidBinary;
};
struct ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_StaticFields
{
	RuntimeObject* ___Comparer;
};
struct TextureHandle_t87D7D063E5E22E38632961AB2B6F89978942BE09_StaticFields
{
	TextureHandle_t87D7D063E5E22E38632961AB2B6F89978942BE09 ___s_NullHandle;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomAttributeNamedArgument_Equals_mB1743B7F2494519A511010F4CB52FC26DF692151 (CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomAttributeTypedArgument_Equals_m88F54FC46D513F75E9C932B5AB529E7C3895D917 (CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataStruct_Equals_m302C02E646A4321627A599A4AF6EF3B724402A66 (DataStruct_tAAA7895996A271D9E41191C4932AC11A3BD2EB4F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_Equals_m0EF1F769B475D00BB907072ED7585E6A6ECAB133 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeOffset_Equals_m140EDD50EA8FDA74619AA64737497663B56B0483 (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decimal_Equals_mD06AE5E80DBE3651F359FA951A93B7EACAB1A4D8 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dimension_Equals_m4D328F20818BA59A8984495E22DE4CDEE086CC1D (Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_Equals_m342E8F178661ABF8306D58D5F2130C58E0601DA3 (double* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EasingFunction_Equals_m0EE1C44C3557C069C5AAFEBFC9877D1D37250873 (EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Edge_Equals_m4C0041253053FCDE70EE1A7C794CCB5D859DC44E (Edge_t1E55CB4BDAF40F0F124DEA86AE84673377D27A8F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EdgeLookup_Equals_m4681CEFEC709F104530F35A881CB8210A8ED636A (EdgeLookup_t300611D73C712629140424DC4556FECAFE210899* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FontDefinition_Equals_m11510FB12876FE932360D45761D07A87E8494AF8 (FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_Equals_m27E0A4AD1CA71DA8071F816D6BFCD7556BC3E015 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphPairAdjustmentRecord_Equals_m0F49F5D76C114BB660B7619A93247591AE323CFD (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphRect_Equals_mF3BA7FD405AFCEA9E2A6ED2423C27CC023A1289B (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_Equals_mC7349E47BF1CBCBFB4C9032C050DE54AAC10000B (Guid_t* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hash128_Equals_m28FADCC2F9A565AF152A53BCEEF88F798716B104 (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HighlightState_Equals_m0317881F19561A64B9016A27C306FDB77460D165 (HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HighlightState_Equals_mE0643D119E2942355F5FFED759BC329326E0C849 (HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexField_Equals_m232FDF421FB3E4A3D0A66830A904D60D5CA610BC (IndexField_t6285D0782FB7D55EC60F7DFB20AF7D3E7D37B795* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int16_Equals_m4F5EDE255F1646CAF6CFD5052D80D56AAECB0512 (int16_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_m089564150E8AF7C63B419427E2E57E3420659B1B (int32_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_Equals_mDA5711B3D23B8CB282F34F73F1D7C0726D042FE8 (int64_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_Equals_m0F39AB64A7BBD67190E745FF8334A5FC766CB26E (intptr_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntVec3_Equals_m3A72301F6F81A01A0474E9FBCF7397698B670BA1 (IntVec3_tAE14DAA206A2E1F033B1BB7D09F991D17F274B10* __this, RuntimeObject* ___0_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Length_Equals_mFFEB4478ADE2C602ED8006F4043022862D677F82 (Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManipulatorActivationFilter_Equals_m5BE53154869F0B26619DB5EEE913398BE351483E (ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Matrix4x4_Equals_m35CFC5F304BB40EFFE011B92AA87B77CD8FF8F74_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_Equals_mCF93B00BA4FCDDE6100918451343DB9A0583A0A0_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Rect_Equals_mD7EB2046512E4A46524A7ED929F1C38A32C408F8_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderStateBlock_Equals_mF2FD2D7C1C6EA07116947C3BC730E741A4054EE9 (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTargetIdentifier_Equals_m07E36F91E8966A0E3882EF168F1AE3656BE48E9A (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rotate_Equals_m49F7E80F31B6317836CA1628FAA1D2194B5B6165 (Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SByte_Equals_m2436A58AA51169044BB6FAB4F3924C06037C34EF (int8_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scale_Equals_mBC77FF15A4E956C17CECA719B2BF64C0F38B24FA (Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderTagId_Equals_m02826F7AFC63AA3AE5DB14F7A891F8F173FD9A33 (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F (float* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlBinary_Equals_m238970418BF4DD9F9086E451AE877664DC60C724 (SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlBoolean_Equals_m561B9537FA9804DB2EAF73AC786AFA658C83E2D3 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlByte_Equals_mB4A0F47A740D93049A4B9FAE79CE2BB82B576006 (SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlDateTime_Equals_m9401BFF901122AAD43042D8F4D54DFA26C0D6634 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlDecimal_Equals_mEE75EC213CFD059F31273138FAF5F16B03AD63D1 (SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlDouble_Equals_m8FEF106DFF53DC046CA65ECEDED37077ECF188D6 (SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlGuid_Equals_mD5EE347E7EF1EEB88DFCF35284F116506DBE8DD8 (SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlInt16_Equals_m335E7011F568068C141BA839D38B2534F6A8B3CF (SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlInt32_Equals_m7D89FC6A3D733052B28E202EB4C5FC7D0E6B808E (SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlInt64_Equals_m2AC85D8BB3CF583B13C8B3915A30CB3F09553FC4 (SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlMoney_Equals_mA70EFA899CB137218CC72CA4A2B5DEF24DCD2FD5 (SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlSingle_Equals_m8EE5074BA8FE7BA43B07014FB2EE08B29BD12E8B (SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlString_Equals_mED3A10DBF394BE1410C0E780D44E96249FDD9D5D (SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StylePropertyName_Equals_m189314376AD8AD19270E89E0402E6A378DAD0F56 (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextShadow_Equals_m0BC39E39C12D4D49BC554184C02CC78B417289BE (TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureId_Equals_m455DF7673CD85DCDDAA9AAC0F888DA8F8488081D (TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeSpan_Equals_mFE37205C5F1295DD799B0EE207142BFA4222D47A (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeValue_Equals_mA581A2F3D44993E0C780E6BC36C355875CDAB513 (TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformOrigin_Equals_m1BB998DC4BF023074E997BDF9FFBB477B8D8C542 (TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Translate_Equals_mEE5D86BA4C5C8C65EC0F226E081F49BA891792E1 (Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangle_Equals_m35BE7090528680F9CDC91C457A94BC90279493A7 (Triangle_tAD1398FF3E995C3F4D56BE27E72C2DD1998AD290* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeNameKey_Equals_mD335CEBC164F95FBD4F36B71B01F33486128A6A4 (TypeNameKey_tE4E115F291C6F879D976911A340116B5CF218F33* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt16_Equals_mA21E8831A57BC983311BFEE7023615002FC50207 (uint16_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt32_Equals_mC516812849D8243A72D34D830D840A1F1E32795E (uint32_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt64_Equals_m175E7A6F2A4606A94579529400854317542648A9 (uint64_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mA4E81D6FCE503DBD502BA499708344410F60DA4E_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m6D91EFAA6B3254334436BD262A4547EA08281BA3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mB4BE43D5986864F5C22B919F2957E0309F10E3B4_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_Equals_m419967067E76BF0381E4CD8FE14DF5ED46ACFB02_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_mC2596CA0F441D25DE7A9419BE66A8FA2DA355CB9_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VertexAttributeDescriptor_Equals_m6FBFEE42E1BAAAC2D38434EDF0906C5B76D56BE5 (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConvertKey_Equals_m8C696A833AC5997EE1AC57B90E260679C2176069 (TypeConvertKey_t98D33F680B910A58F3A66403380DC165250CFA93* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CachedCodeEntryKey_Equals_m59F40708B97179EA5C9019EA6A958D7AB8BC8CA2 (CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Matrix4x4_Equals_mDB0C4CCC58BE3E108F1A40BE8DBDCD62E284CC51_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_Equals_m25B95D8412B79CC7F8B34062BFAE662BD99578BE_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Rect_Equals_mE725DE506D3F1DB92F58B876BDA42AACD4D991B5_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mDF84D5ED14E018609C6A9C9BAE016C1B33BCFF4C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m32811BA0576C096D5EB5C0CFD8231478F17229A6_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_Equals_mE4D179C5001B77DE05E3E4BC39DC9F6AE441EBD8_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9 (float* __this, float ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_op_Equality_mB10073AF3B08421C46BF678C8FF64AAD62C83617_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_lhs, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m3324522D767F31B8542615CEF755DBB55B2E7611_gshared (RuntimeArray* __this, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_5 = ___0_item;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9_mEBEA3BF95A800DC0EA6B5E5814EB8DE894FC7A87_gshared (RuntimeArray* __this, ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 L_5 = ___0_item;
		ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_mBA54820034289A3BBACAF81B4C94A731D36698E4_gshared (RuntimeArray* __this, ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 L_5 = ___0_item;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044_mAA87A179C5F6E76986354068975C0F0D37CB1381_gshared (RuntimeArray* __this, CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044 L_5 = ___0_item;
		CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m9A037364CE9AA095B44157F42D0807B4E0BD025A_gshared (RuntimeArray* __this, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_5 = ___0_item;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_mD3E24B9801A8512DF810E3B118E624FDA13CB2E6_gshared (RuntimeArray* __this, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 L_5 = ___0_item;
		CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = CustomAttributeNamedArgument_Equals_mB1743B7F2494519A511010F4CB52FC26DF692151((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_m673CB2669FC29055C0A5FD321754D3F407A5FD1F_gshared (RuntimeArray* __this, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F L_5 = ___0_item;
		CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = CustomAttributeTypedArgument_Equals_m88F54FC46D513F75E9C932B5AB529E7C3895D917((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDataStruct_tAAA7895996A271D9E41191C4932AC11A3BD2EB4F_m9901A8B2FABE604941FA03EE6B9C30882A36E92C_gshared (RuntimeArray* __this, DataStruct_tAAA7895996A271D9E41191C4932AC11A3BD2EB4F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DataStruct_tAAA7895996A271D9E41191C4932AC11A3BD2EB4F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DataStruct_tAAA7895996A271D9E41191C4932AC11A3BD2EB4F L_5 = ___0_item;
		DataStruct_tAAA7895996A271D9E41191C4932AC11A3BD2EB4F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = DataStruct_Equals_m302C02E646A4321627A599A4AF6EF3B724402A66((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m93BD1CEE03A45DD70720992CA7CBFB6A7041A9A7_gshared (RuntimeArray* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5 = ___0_item;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = DateTime_Equals_m0EF1F769B475D00BB907072ED7585E6A6ECAB133((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_mEDB7BF15F24D2892DE456311AF85DBAEEA555F6A_gshared (RuntimeArray* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_5 = ___0_item;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = DateTimeOffset_Equals_m140EDD50EA8FDA74619AA64737497663B56B0483((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_m423663E3431022BABB5E33B8E49FBEF4FF9963BB_gshared (RuntimeArray* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_5 = ___0_item;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Decimal_Equals_mD06AE5E80DBE3651F359FA951A93B7EACAB1A4D8((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_m2917987ABA3EDCA1951D4FEE3836D6EF7E2CF165_gshared (RuntimeArray* __this, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_5 = ___0_item;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8_mB05ABA1864A539A11137DDDB9488ED0DCAC87E78_gshared (RuntimeArray* __this, Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 L_5 = ___0_item;
		Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Dimension_Equals_m4D328F20818BA59A8984495E22DE4CDEE086CC1D((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mEBA37CCA2EF9D990F9564FFFE57EDD25D70DD51C_gshared (RuntimeArray* __this, double ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	double V_2 = 0.0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		double L_5 = ___0_item;
		double L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Double_Equals_m342E8F178661ABF8306D58D5F2130C58E0601DA3((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_m29511B6472011004281AC3E81E15FE2DED76C458_gshared (RuntimeArray* __this, DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 L_5 = ___0_item;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m636C004C0711569B7B1D0668E3C43FD8648DD167_gshared (RuntimeArray* __this, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_5 = ___0_item;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = EasingFunction_Equals_m0EE1C44C3557C069C5AAFEBFC9877D1D37250873((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisEdge_t1E55CB4BDAF40F0F124DEA86AE84673377D27A8F_m95425D257DEF4E6EC163BB55F27955A407FBEC10_gshared (RuntimeArray* __this, Edge_t1E55CB4BDAF40F0F124DEA86AE84673377D27A8F ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Edge_t1E55CB4BDAF40F0F124DEA86AE84673377D27A8F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Edge_t1E55CB4BDAF40F0F124DEA86AE84673377D27A8F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Edge_t1E55CB4BDAF40F0F124DEA86AE84673377D27A8F L_5 = ___0_item;
		Edge_t1E55CB4BDAF40F0F124DEA86AE84673377D27A8F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(Edge_t1E55CB4BDAF40F0F124DEA86AE84673377D27A8F_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Edge_Equals_m4C0041253053FCDE70EE1A7C794CCB5D859DC44E((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisEdgeLookup_t300611D73C712629140424DC4556FECAFE210899_mFE213790694FF80047B978FA758888BE6D240DE4_gshared (RuntimeArray* __this, EdgeLookup_t300611D73C712629140424DC4556FECAFE210899 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	EdgeLookup_t300611D73C712629140424DC4556FECAFE210899 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		EdgeLookup_t300611D73C712629140424DC4556FECAFE210899 L_5 = ___0_item;
		EdgeLookup_t300611D73C712629140424DC4556FECAFE210899 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = EdgeLookup_Equals_m4681CEFEC709F104530F35A881CB8210A8ED636A((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisEnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_m2AAD48B4FC2BCAD22DA44A9F379CC46CC1A64918_gshared (RuntimeArray* __this, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_5 = ___0_item;
		EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisEphemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_mD5D52BBB5E96012B01E02D0A92D4A46C5F2A21E6_gshared (RuntimeArray* __this, Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 L_5 = ___0_item;
		Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisFieldDropdownMenu_tE480B8DDAB861943653D1466DD4F372339ABA81A_m568E80FDE6F2D2A6F92FDD93540801F6D1338EEE_gshared (RuntimeArray* __this, FieldDropdownMenu_tE480B8DDAB861943653D1466DD4F372339ABA81A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FieldDropdownMenu_tE480B8DDAB861943653D1466DD4F372339ABA81A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		FieldDropdownMenu_tE480B8DDAB861943653D1466DD4F372339ABA81A L_5 = ___0_item;
		FieldDropdownMenu_tE480B8DDAB861943653D1466DD4F372339ABA81A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<FieldDropdownMenu_tE480B8DDAB861943653D1466DD4F372339ABA81A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m005FE2EF9FA8601960890004CF9DCF7EFC7BDCD8_gshared (RuntimeArray* __this, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_5 = ___0_item;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = FontDefinition_Equals_m11510FB12876FE932360D45761D07A87E8494AF8((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisFontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_mC95B4A0C3455162D7345093A2C3D78CAE2E2D1CA_gshared (RuntimeArray* __this, FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42 L_5 = ___0_item;
		FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisFrameTimeSample_tADB152E5D63C6EB073852FBE9D9EE9A66CA31AA7_m20CB340D77C4BE31DC94D89AA053725B49134540_gshared (RuntimeArray* __this, FrameTimeSample_tADB152E5D63C6EB073852FBE9D9EE9A66CA31AA7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FrameTimeSample_tADB152E5D63C6EB073852FBE9D9EE9A66CA31AA7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		FrameTimeSample_tADB152E5D63C6EB073852FBE9D9EE9A66CA31AA7 L_5 = ___0_item;
		FrameTimeSample_tADB152E5D63C6EB073852FBE9D9EE9A66CA31AA7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<FrameTimeSample_tADB152E5D63C6EB073852FBE9D9EE9A66CA31AA7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisFrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD_mB8D665CD04D91D63F74A4C2B06A5EDE66E537A08_gshared (RuntimeArray* __this, FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD L_5 = ___0_item;
		FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_m38EBA1948795C4EDDBDD60B9213F9A253CCAA5AE_gshared (RuntimeArray* __this, GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_5 = ___0_item;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = GCHandle_Equals_m27E0A4AD1CA71DA8071F816D6BFCD7556BC3E015((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_m86CD46BDB1189224595C51C839BAA6035064D542_gshared (RuntimeArray* __this, GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_5 = ___0_item;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisGlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C_m997D69C6D1F72CE61DE44D33ACAA16B60E64164C_gshared (RuntimeArray* __this, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C L_5 = ___0_item;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_mCCC6CA49A4906B89D60B978E48B12DD640D52E93_gshared (RuntimeArray* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_5 = ___0_item;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = GlyphPairAdjustmentRecord_Equals_m0F49F5D76C114BB660B7619A93247591AE323CFD((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_mFD5D0357B2AC1FFDA46A3340BE33A258FD89CA3E_gshared (RuntimeArray* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_5 = ___0_item;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = GlyphRect_Equals_mF3BA7FD405AFCEA9E2A6ED2423C27CC023A1289B((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisGradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0_mCEB2EF9DB77C20D4D6A3A9F8AD474AAF3D32517A_gshared (RuntimeArray* __this, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_5 = ___0_item;
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisGradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A_m6382E1CF80C8C70E5742197440CDB60B6D8F3111_gshared (RuntimeArray* __this, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_5 = ___0_item;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisGradientSettings_tADA3CAA17319C58811DE187298039CC950FBAAF3_m0D7446166C4D690A1036D6345809F74A63B9D7FB_gshared (RuntimeArray* __this, GradientSettings_tADA3CAA17319C58811DE187298039CC950FBAAF3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GradientSettings_tADA3CAA17319C58811DE187298039CC950FBAAF3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		GradientSettings_tADA3CAA17319C58811DE187298039CC950FBAAF3 L_5 = ___0_item;
		GradientSettings_tADA3CAA17319C58811DE187298039CC950FBAAF3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<GradientSettings_tADA3CAA17319C58811DE187298039CC950FBAAF3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisGuid_t_mD4F9B0C298AD4272EDD7A3862BD59B8E783854D6_gshared (RuntimeArray* __this, Guid_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Guid_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Guid_t L_5 = ___0_item;
		Guid_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Guid_Equals_mC7349E47BF1CBCBFB4C9032C050DE54AAC10000B((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHash128_t93367F504B687578F893CDBCD13FB95AC8A87A40_m07974CDBB8C530F47E39530685738B035D343228_gshared (RuntimeArray* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_5 = ___0_item;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Hash128_Equals_m28FADCC2F9A565AF152A53BCEEF88F798716B104((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_m2A29434467150807637820C95958D10DBD4543EF_gshared (RuntimeArray* __this, HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A L_5 = ___0_item;
		HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B_mA7AE6D32E4FFB5480185398E9C4848B47B36B9CD_gshared (RuntimeArray* __this, HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B L_5 = ___0_item;
		HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = HighlightState_Equals_m0317881F19561A64B9016A27C306FDB77460D165((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740_m69CE7171D6EF855F4D87D5CDAC11ACE78BF5B8C9_gshared (RuntimeArray* __this, HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 L_5 = ___0_item;
		HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = HighlightState_Equals_mE0643D119E2942355F5FFED759BC329326E0C849((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisIndexField_t6285D0782FB7D55EC60F7DFB20AF7D3E7D37B795_m9E71D22CB71AF4223E0769E55153630B5B146F69_gshared (RuntimeArray* __this, IndexField_t6285D0782FB7D55EC60F7DFB20AF7D3E7D37B795 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	IndexField_t6285D0782FB7D55EC60F7DFB20AF7D3E7D37B795 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		IndexField_t6285D0782FB7D55EC60F7DFB20AF7D3E7D37B795 L_5 = ___0_item;
		IndexField_t6285D0782FB7D55EC60F7DFB20AF7D3E7D37B795 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = IndexField_Equals_m232FDF421FB3E4A3D0A66830A904D60D5CA610BC((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m4637ED8C7B26207F4B594A78C78AB69320981AAB_gshared (RuntimeArray* __this, int16_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int16_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		int16_t L_5 = ___0_item;
		int16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Int16_Equals_m4F5EDE255F1646CAF6CFD5052D80D56AAECB0512((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB8A5DF381EE5B33D70109CF43C474562787F47F3_gshared (RuntimeArray* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_5 = ___0_item;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Int32_Equals_m089564150E8AF7C63B419427E2E57E3420659B1B((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mFB8E06F0A66EF6F488C6B316898FD9AD0C5FEB53_gshared (RuntimeArray* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_5 = ___0_item;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<int32_t> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m42E1B788D9D42F476F885509E89F98C456187473_gshared (RuntimeArray* __this, int64_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		int64_t L_5 = ___0_item;
		int64_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Int64_Equals_mDA5711B3D23B8CB282F34F73F1D7C0726D042FE8((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisIntPtr_t_m5A28F4B453C06806055184E166C5DF13EF74BD31_gshared (RuntimeArray* __this, intptr_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		intptr_t L_5 = ___0_item;
		intptr_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = IntPtr_Equals_m0F39AB64A7BBD67190E745FF8334A5FC766CB26E((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisIntVec3_tAE14DAA206A2E1F033B1BB7D09F991D17F274B10_m6DC62CDC9F78B7BB3F57F1921612F1E6C64C3A7A_gshared (RuntimeArray* __this, IntVec3_tAE14DAA206A2E1F033B1BB7D09F991D17F274B10 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	IntVec3_tAE14DAA206A2E1F033B1BB7D09F991D17F274B10 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		IntVec3_tAE14DAA206A2E1F033B1BB7D09F991D17F274B10 L_5 = ___0_item;
		IntVec3_tAE14DAA206A2E1F033B1BB7D09F991D17F274B10 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = IntVec3_Equals_m3A72301F6F81A01A0474E9FBCF7397698B670BA1((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisInternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_mC85641F765237F54D5AC2B7C7B8E94AE88AB96ED_gshared (RuntimeArray* __this, InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316 L_5 = ___0_item;
		InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisInternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_m8C5A3DEA7DDF3981F0EEF7F208AD7C17D76E9934_gshared (RuntimeArray* __this, InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB L_5 = ___0_item;
		InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m87EDBEAAF216F4F27B5CD37FFBE545599654A8FB_gshared (RuntimeArray* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_5 = ___0_item;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisJsonPosition_t7788656A280615072710710E8C15D23285850E8E_mEDA030CB6C1064EF1BAB7438EEAB44B178C4C5FF_gshared (RuntimeArray* __this, JsonPosition_t7788656A280615072710710E8C15D23285850E8E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	JsonPosition_t7788656A280615072710710E8C15D23285850E8E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		JsonPosition_t7788656A280615072710710E8C15D23285850E8E L_5 = ___0_item;
		JsonPosition_t7788656A280615072710710E8C15D23285850E8E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<JsonPosition_t7788656A280615072710710E8C15D23285850E8E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_m89ADC7FAC382CA6363999CE7F86BC2D210EADC27_gshared (RuntimeArray* __this, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_5 = ___0_item;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m08B0082D603F3F21AC7FAC0269D0CB76E73F7802_gshared (RuntimeArray* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5 = ___0_item;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m4BCF42DBDE660B19E76C621B3F42EBE1EBEF9F10_gshared (RuntimeArray* __this, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_5 = ___0_item;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Length_Equals_mFFEB4478ADE2C602ED8006F4043022862D677F82((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisLigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_m7F032B05983D4A6D78183CF33D81DB79F7B37F96_gshared (RuntimeArray* __this, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_5 = ___0_item;
		LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m0A39432BD935B48292A59A9D21AEB7CAA904B871_gshared (RuntimeArray* __this, LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_5 = ___0_item;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisLineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5_mFB9700AD672A8C042C75BE0E28EAB8A9F377F174_gshared (RuntimeArray* __this, LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 L_5 = ___0_item;
		LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisLinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_mA4A16B365195AC1B343A7BF38E650C36C672C709_gshared (RuntimeArray* __this, LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8 L_5 = ___0_item;
		LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81_m19B2C753952877754F2B1821CA75F7D0A5CFDF6B_gshared (RuntimeArray* __this, ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 L_5 = ___0_item;
		ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = ManipulatorActivationFilter_Equals_m5BE53154869F0B26619DB5EEE913398BE351483E((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m1D89F64EA20A42199A5513F479D388124DA5E22C_gshared (RuntimeArray* __this, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_5 = ___0_item;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_m10901F405A85BDC2B3D4D9A4A7ED7721A6F61275_gshared (RuntimeArray* __this, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_5 = ___0_item;
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_mECFD2D51888AA4698B38DAF9A3BE274399BE6873_gshared (RuntimeArray* __this, MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B L_5 = ___0_item;
		MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_mAD3A4A5EFA4EF4C701CEEE077DE28DDCB4938D57_gshared (RuntimeArray* __this, MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26 L_5 = ___0_item;
		MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mE246A2B75AE51A282DD762C380EDC9C5859CDC00_gshared (RuntimeArray* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5 = ___0_item;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Matrix4x4_Equals_m35CFC5F304BB40EFFE011B92AA87B77CD8FF8F74_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_mA94D1455E2B27F3027C0A8A0F07FA6916BCF5824_gshared (RuntimeArray* __this, MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F L_5 = ___0_item;
		MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m3C6E1EC9FC0A577B89960EC760879B1D112B7DE8_gshared (RuntimeArray* __this, ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 L_5 = ___0_item;
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_m4F90F971CA49FEBD0CD999D2AC32A3EF1D569314_gshared (RuntimeArray* __this, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B L_5 = ___0_item;
		MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisNavigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_mE14CB8A32BF000DBB8591B244EF1A5DFB5B10B97_gshared (RuntimeArray* __this, Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C L_5 = ___0_item;
		Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisNudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022_m36BC6C2B4A8A4E698845343664BBD6013AE10F00_gshared (RuntimeArray* __this, NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022 L_5 = ___0_item;
		NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisNumber_t76C3F1C69D96DD914E1BC182AFBCBAFF91372F5A_mBDF2CFC9D7B42BACC24F0F36D28A6179A57EB404_gshared (RuntimeArray* __this, Number_t76C3F1C69D96DD914E1BC182AFBCBAFF91372F5A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Number_t76C3F1C69D96DD914E1BC182AFBCBAFF91372F5A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Number_t76C3F1C69D96DD914E1BC182AFBCBAFF91372F5A L_5 = ___0_item;
		Number_t76C3F1C69D96DD914E1BC182AFBCBAFF91372F5A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Number_t76C3F1C69D96DD914E1BC182AFBCBAFF91372F5A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRuntimeObject_m2ACF92B2E545054F7EC393728A9F67D7C637E9E1_gshared (RuntimeArray* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		RuntimeObject* L_4 = ___0_item;
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_5 = V_2;
		if (L_5)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_6, L_7));
	}

IL_0042:
	{
		RuntimeObject* L_8 = ___0_item;
		bool L_9;
		L_9 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (V_2), L_8);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPageInfo_tFFF6B289E9A37E4D69353B32F941421180DA5909_m23FE007F587EC62C7E3FB6C58DC5DF7A994C4961_gshared (RuntimeArray* __this, PageInfo_tFFF6B289E9A37E4D69353B32F941421180DA5909 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PageInfo_tFFF6B289E9A37E4D69353B32F941421180DA5909 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PageInfo_tFFF6B289E9A37E4D69353B32F941421180DA5909 L_5 = ___0_item;
		PageInfo_tFFF6B289E9A37E4D69353B32F941421180DA5909 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PageInfo_tFFF6B289E9A37E4D69353B32F941421180DA5909> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_m405902A5D0BB3DB3BF6EA0679825BFAE3F05B40A_gshared (RuntimeArray* __this, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 L_5 = ___0_item;
		ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mE82CD18353D85357C7E26AABE291A38FAB26F3B9_gshared (RuntimeArray* __this, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_5 = ___0_item;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_m7210EE9AA7B07231147EFA265B4892258A208A62_gshared (RuntimeArray* __this, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 L_5 = ___0_item;
		PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_m9DE12A772CEF1018402AF2EDAFF3030F36D4B450_gshared (RuntimeArray* __this, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_5 = ___0_item;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7_m8130DC4AA7E9BBB78ECBF1EE4C1802D8C76D8D1A_gshared (RuntimeArray* __this, ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7 L_5 = ___0_item;
		ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisProcedureArgumentIndexUpdate_tB2AD685BF98B75231BB98CE4FD4BB0BF790098DD_m07166E61E53684A7EA4786308D85DAC54D157AEA_gshared (RuntimeArray* __this, ProcedureArgumentIndexUpdate_tB2AD685BF98B75231BB98CE4FD4BB0BF790098DD ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ProcedureArgumentIndexUpdate_tB2AD685BF98B75231BB98CE4FD4BB0BF790098DD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ProcedureArgumentIndexUpdate_tB2AD685BF98B75231BB98CE4FD4BB0BF790098DD L_5 = ___0_item;
		ProcedureArgumentIndexUpdate_tB2AD685BF98B75231BB98CE4FD4BB0BF790098DD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ProcedureArgumentIndexUpdate_tB2AD685BF98B75231BB98CE4FD4BB0BF790098DD> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m623EB934C6F75D0C45C7147730F129C9E70B72A1_gshared (RuntimeArray* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___0_item;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Quaternion_Equals_mCF93B00BA4FCDDE6100918451343DB9A0583A0A0_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F_mB6BC514BF351F8E22C84CE6AB6BA8BD1EC775978_gshared (RuntimeArray* __this, RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F L_5 = ___0_item;
		RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_mE0AAD68A5E718CF3985CB05CFAAF75152CDADC12_gshared (RuntimeArray* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_5 = ___0_item;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m8C714CB25E06D3C0E0FAD4E70587CC72E6F32EDE_gshared (RuntimeArray* __this, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_5 = ___0_item;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_m050FD80019BE8A49BF55A02C11C998D3CC4A5708_gshared (RuntimeArray* __this, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_5 = ___0_item;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mA05583BDB32D3CF683ED9DF737760ABD2F877515_gshared (RuntimeArray* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5 = ___0_item;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Rect_Equals_mD7EB2046512E4A46524A7ED929F1C38A32C408F8_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mC6F53A684E81523AE59FAE3FB99401B15F9179A8_gshared (RuntimeArray* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_5 = ___0_item;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A_m05711523D8670C62DFBE4273215DB9FEBA52A159_gshared (RuntimeArray* __this, RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A L_5 = ___0_item;
		RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733_m87226A4D164CCD87A580BF38278792B3F7958EB7_gshared (RuntimeArray* __this, RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 L_5 = ___0_item;
		RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = RenderStateBlock_Equals_mF2FD2D7C1C6EA07116947C3BC730E741A4054EE9((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B_mF49FD156BD64B1E4EFF2C290142A1C40BDE24EE3_gshared (RuntimeArray* __this, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_5 = ___0_item;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = RenderTargetIdentifier_Equals_m07E36F91E8966A0E3882EF168F1AE3656BE48E9A((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85_m3DFAA523C22B7B3BE6545B222A636D793CC57FF4_gshared (RuntimeArray* __this, RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 L_5 = ___0_item;
		RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D_m8B8586FF05C498E216BB36D9602A1092C8A50A97_gshared (RuntimeArray* __this, RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D L_5 = ___0_item;
		RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49_mEBBAB95E58143E95FB9321C66D9F94E788EFFD0C_gshared (RuntimeArray* __this, RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49 L_5 = ___0_item;
		RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisResourceHandle_t0B9B0555328A08152F1EDA2BE4024446D670531A_mEEE46D3134D4389D0210D6BC0A39E67AEC081130_gshared (RuntimeArray* __this, ResourceHandle_t0B9B0555328A08152F1EDA2BE4024446D670531A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ResourceHandle_t0B9B0555328A08152F1EDA2BE4024446D670531A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ResourceHandle_t0B9B0555328A08152F1EDA2BE4024446D670531A L_5 = ___0_item;
		ResourceHandle_t0B9B0555328A08152F1EDA2BE4024446D670531A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ResourceHandle_t0B9B0555328A08152F1EDA2BE4024446D670531A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_mA4775F05AB1ADF639D37D4DE616045B23B60BD80_gshared (RuntimeArray* __this, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_5 = ___0_item;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRichTextTagAttribute_t1BB51A8FD6C14746D177D8E84E281A4FD4A720E0_m3496BAA90E73606F94504CA4DA983DD46F4C079D_gshared (RuntimeArray* __this, RichTextTagAttribute_t1BB51A8FD6C14746D177D8E84E281A4FD4A720E0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RichTextTagAttribute_t1BB51A8FD6C14746D177D8E84E281A4FD4A720E0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RichTextTagAttribute_t1BB51A8FD6C14746D177D8E84E281A4FD4A720E0 L_5 = ___0_item;
		RichTextTagAttribute_t1BB51A8FD6C14746D177D8E84E281A4FD4A720E0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RichTextTagAttribute_t1BB51A8FD6C14746D177D8E84E281A4FD4A720E0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRichTextTagAttribute_t0600951F833208392F1D8EE3E6A58AD5C797F9DA_mB06ED6A0BB0F690F66143226C308BD775F7F789B_gshared (RuntimeArray* __this, RichTextTagAttribute_t0600951F833208392F1D8EE3E6A58AD5C797F9DA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RichTextTagAttribute_t0600951F833208392F1D8EE3E6A58AD5C797F9DA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RichTextTagAttribute_t0600951F833208392F1D8EE3E6A58AD5C797F9DA L_5 = ___0_item;
		RichTextTagAttribute_t0600951F833208392F1D8EE3E6A58AD5C797F9DA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RichTextTagAttribute_t0600951F833208392F1D8EE3E6A58AD5C797F9DA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m27C16E0F22210505E3573BDB51703B24D2E898D2_gshared (RuntimeArray* __this, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_5 = ___0_item;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Rotate_Equals_m49F7E80F31B6317836CA1628FAA1D2194B5B6165((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_m6B2540F279BFC4E7C7E85CFF8E4B648F89DD1F27_gshared (RuntimeArray* __this, RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_5 = ___0_item;
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mB2AA4BB897B74FFCDA94131C354F02D705EE5644_gshared (RuntimeArray* __this, int8_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int8_t V_2 = 0x0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		int8_t L_5 = ___0_item;
		int8_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = SByte_Equals_m2436A58AA51169044BB6FAB4F3924C06037C34EF((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSByteEnum_t0782AA0EFC5D1042A39675F37D7DD7C098781DD9_mC60E978D6C4273F147ED3DA4830ADE9FA2C7BEDC_gshared (RuntimeArray* __this, int8_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int8_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		int8_t L_5 = ___0_item;
		int8_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<int8_t> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_m187E21402F56E971AC84ECBA0203534817675780_gshared (RuntimeArray* __this, ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F L_5 = ___0_item;
		ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mB661B122232D8A20E79A56CF8E5BD581BC078949_gshared (RuntimeArray* __this, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_5 = ___0_item;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Scale_Equals_mBC77FF15A4E956C17CECA719B2BF64C0F38B24FA((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B_m8C294B4F11BFE23C825FA6E84E4ECC9C44E690C3_gshared (RuntimeArray* __this, SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B L_5 = ___0_item;
		SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_m169DFC7B0F329ADE2464D267127E2CC850E6893F_gshared (RuntimeArray* __this, SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7 L_5 = ___0_item;
		SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_m784CF7FD0221973F82F665EDEEC4EF69A223A48C_gshared (RuntimeArray* __this, ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661 L_5 = ___0_item;
		ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_m5499885F2F78BC22EEECF8C1FD8DAD7ECB7894A5_gshared (RuntimeArray* __this, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_5 = ___0_item;
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = ShaderTagId_Equals_m02826F7AFC63AA3AE5DB14F7A891F8F173FD9A33((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisShaderVariablesProbeVolumes_t93D502CF0A3275CEBA1EDF0E6DB84816618662D4_mFD9D184DE59BBEACAD704B899177FC78187839D4_gshared (RuntimeArray* __this, ShaderVariablesProbeVolumes_t93D502CF0A3275CEBA1EDF0E6DB84816618662D4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ShaderVariablesProbeVolumes_t93D502CF0A3275CEBA1EDF0E6DB84816618662D4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ShaderVariablesProbeVolumes_t93D502CF0A3275CEBA1EDF0E6DB84816618662D4 L_5 = ___0_item;
		ShaderVariablesProbeVolumes_t93D502CF0A3275CEBA1EDF0E6DB84816618662D4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ShaderVariablesProbeVolumes_t93D502CF0A3275CEBA1EDF0E6DB84816618662D4> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSignal_tEFD49B4C8790160612FF4DB83932B8744E3164AB_mBF2DCC9330CB80FEA1551D6C29E1C9126CC77F8A_gshared (RuntimeArray* __this, Signal_tEFD49B4C8790160612FF4DB83932B8744E3164AB ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Signal_tEFD49B4C8790160612FF4DB83932B8744E3164AB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Signal_tEFD49B4C8790160612FF4DB83932B8744E3164AB L_5 = ___0_item;
		Signal_tEFD49B4C8790160612FF4DB83932B8744E3164AB L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Signal_tEFD49B4C8790160612FF4DB83932B8744E3164AB> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6F76A005551D0A7DF82E09005AC4BE373BA2A332_gshared (RuntimeArray* __this, float ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		float L_5 = ___0_item;
		float L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_m99AC9A97CF6364ED89D7590778FCCC540DBA5C81_gshared (RuntimeArray* __this, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD L_5 = ___0_item;
		SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347_mC7422BE5D417527DD3290C40D7F595AA9F3246AD_gshared (RuntimeArray* __this, SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347 ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347 L_5 = ___0_item;
		SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SqlBinary_Equals_m238970418BF4DD9F9086E451AE877664DC60C724((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_m28EF5A02D7F3F279AE36104ECB608FD57CA3CB07_gshared (RuntimeArray* __this, SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_5 = ___0_item;
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SqlBoolean_Equals_m561B9537FA9804DB2EAF73AC786AFA658C83E2D3((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46_m32AAD12E3CA170CDBF0784181994658C522B9541_gshared (RuntimeArray* __this, SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46 ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46 L_5 = ___0_item;
		SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SqlByte_Equals_mB4A0F47A740D93049A4B9FAE79CE2BB82B576006((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_mDFB9F6D35C1F37F5D8434568E64D1958DEF8CA08_gshared (RuntimeArray* __this, SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_5 = ___0_item;
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SqlDateTime_Equals_m9401BFF901122AAD43042D8F4D54DFA26C0D6634((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_m01311B76E4F17B696B85F0DD238E85A17E032855_gshared (RuntimeArray* __this, SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_5 = ___0_item;
		SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SqlDecimal_Equals_mEE75EC213CFD059F31273138FAF5F16B03AD63D1((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_m79782CB2C42A91BC5110727ADBE9E316F61D7482_gshared (RuntimeArray* __this, SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_5 = ___0_item;
		SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SqlDouble_Equals_m8FEF106DFF53DC046CA65ECEDED37077ECF188D6((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_mEC8B4F3A7E450FCE511412C3A0EF6B6F957EB66F_gshared (RuntimeArray* __this, SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 L_5 = ___0_item;
		SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SqlGuid_Equals_mD5EE347E7EF1EEB88DFCF35284F116506DBE8DD8((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_m1A9BD87DEA6F782CC48EBFFD88A55C3FF80D9D91_gshared (RuntimeArray* __this, SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_5 = ___0_item;
		SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SqlInt16_Equals_m335E7011F568068C141BA839D38B2534F6A8B3CF((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_m6E6511BB3D4FE9D1FB001F04050D686F7720D2F9_gshared (RuntimeArray* __this, SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_5 = ___0_item;
		SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SqlInt32_Equals_m7D89FC6A3D733052B28E202EB4C5FC7D0E6B808E((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_mB378CFD216219DC5D09FDA6921D517FF9EFCA28D_gshared (RuntimeArray* __this, SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_5 = ___0_item;
		SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SqlInt64_Equals_m2AC85D8BB3CF583B13C8B3915A30CB3F09553FC4((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_m238A128273F63946B1A53FC46D1D7C2A2A150E42_gshared (RuntimeArray* __this, SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_5 = ___0_item;
		SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SqlMoney_Equals_mA70EFA899CB137218CC72CA4A2B5DEF24DCD2FD5((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_mC3C4DC594969408B6F188E34B8BA2F28C1BDED88_gshared (RuntimeArray* __this, SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_5 = ___0_item;
		SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SqlSingle_Equals_m8EE5074BA8FE7BA43B07014FB2EE08B29BD12E8B((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_m0366A35D6920B34A08A4309DC8ED7158071AF6BA_gshared (RuntimeArray* __this, SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D L_5 = ___0_item;
		SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SqlString_Equals_mED3A10DBF394BE1410C0E780D44E96249FDD9D5D((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisStats_t16598467F7C3DC7E9204672C593066C42B2F9AEB_mB0731F4201B1427D2E1E3DB4495AE4D8DAC683E2_gshared (RuntimeArray* __this, Stats_t16598467F7C3DC7E9204672C593066C42B2F9AEB ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Stats_t16598467F7C3DC7E9204672C593066C42B2F9AEB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Stats_t16598467F7C3DC7E9204672C593066C42B2F9AEB L_5 = ___0_item;
		Stats_t16598467F7C3DC7E9204672C593066C42B2F9AEB L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Stats_t16598467F7C3DC7E9204672C593066C42B2F9AEB> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mCE7BC23788E7F15F43638C1A8983A435F687E76D_gshared (RuntimeArray* __this, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_5 = ___0_item;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = StylePropertyName_Equals_m189314376AD8AD19270E89E0402E6A378DAD0F56((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisStylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_m4939804C4869C1637C8EBD6289F4A04A955DEEF0_gshared (RuntimeArray* __this, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_5 = ___0_item;
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisStyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_m89069EFB7471D51AC8781DF56A790A822276D84A_gshared (RuntimeArray* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_5 = ___0_item;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisStyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_mF6C8B24E91A41F1889B140E3F722AC2813D621EB_gshared (RuntimeArray* __this, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_5 = ___0_item;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisStyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5_m5E9CE1A1E136ABAF9DDD1BB318E0A258615FFB3D_gshared (RuntimeArray* __this, StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 L_5 = ___0_item;
		StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisStyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D_m6A60BA59A14CC6C84BEFC28A116D78CA34F6C53E_gshared (RuntimeArray* __this, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_5 = ___0_item;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisStyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_mAAC3E8B444FC24F045831AB04FBA809647A811B0_gshared (RuntimeArray* __this, StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 L_5 = ___0_item;
		StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisStyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_mE7C67D3A64A9EA91E59814675FE77AF014BD741C_gshared (RuntimeArray* __this, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 L_5 = ___0_item;
		StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_m0ADB6D6A9047D4D9793E95CFD4F4D869279C300B_gshared (RuntimeArray* __this, TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 L_5 = ___0_item;
		TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E_mD1BFC17D538BACE8AA608BDE2A1F77624EC7C9EC_gshared (RuntimeArray* __this, TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E L_5 = ___0_item;
		TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3_m14F7606EC51A453CC171070F99F3600D7F5199E8_gshared (RuntimeArray* __this, TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 L_5 = ___0_item;
		TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6_m759CE7FC65C1724844494E1A379CBF87C062FE0D_gshared (RuntimeArray* __this, TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6 L_5 = ___0_item;
		TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_mE7EA828B70A23EAE4CFFC5739FA1F68500F95E88_gshared (RuntimeArray* __this, TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B L_5 = ___0_item;
		TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTMP_PageInfo_t062E56948480FAB066C168E14DC79CC83CC369B4_mCF53BCF46A5799A7BD7A0323ACAB479B9AD2BF7B_gshared (RuntimeArray* __this, TMP_PageInfo_t062E56948480FAB066C168E14DC79CC83CC369B4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TMP_PageInfo_t062E56948480FAB066C168E14DC79CC83CC369B4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TMP_PageInfo_t062E56948480FAB066C168E14DC79CC83CC369B4 L_5 = ___0_item;
		TMP_PageInfo_t062E56948480FAB066C168E14DC79CC83CC369B4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TMP_PageInfo_t062E56948480FAB066C168E14DC79CC83CC369B4> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983_m3EE8DE28347106EB2057702E21F1C186D13B04CC_gshared (RuntimeArray* __this, TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983 L_5 = ___0_item;
		TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_mFDD67809E3FFFD139EC58C81A847C702AE44D118_gshared (RuntimeArray* __this, TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 L_5 = ___0_item;
		TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698_m4958221170E9B6C17D17FF122C170483D13BFC81_gshared (RuntimeArray* __this, TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 L_5 = ___0_item;
		TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m96055287EA58BB7BB935E09901AE543461B68B93_gshared (RuntimeArray* __this, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_5 = ___0_item;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = TextShadow_Equals_m0BC39E39C12D4D49BC554184C02CC78B417289BE((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTextureHandle_t87D7D063E5E22E38632961AB2B6F89978942BE09_m7CBCE17CB762B7AA623969BAD5AC3E76CF8F0F61_gshared (RuntimeArray* __this, TextureHandle_t87D7D063E5E22E38632961AB2B6F89978942BE09 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TextureHandle_t87D7D063E5E22E38632961AB2B6F89978942BE09 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TextureHandle_t87D7D063E5E22E38632961AB2B6F89978942BE09 L_5 = ___0_item;
		TextureHandle_t87D7D063E5E22E38632961AB2B6F89978942BE09 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TextureHandle_t87D7D063E5E22E38632961AB2B6F89978942BE09> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_m2FC884E165EE4B43098763FEE1BC5986740406BC_gshared (RuntimeArray* __this, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_5 = ___0_item;
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = TextureId_Equals_m455DF7673CD85DCDDAA9AAC0F888DA8F8488081D((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mDD6859DC3C38CEF85D1A4F2CCF59DFD0C2FF03BF_gshared (RuntimeArray* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_5 = ___0_item;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = TimeSpan_Equals_mFE37205C5F1295DD799B0EE207142BFA4222D47A((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mB6428BA9D2752F1D6F67040206CCAC2D3E0C9F19_gshared (RuntimeArray* __this, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_5 = ___0_item;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = TimeValue_Equals_mA581A2F3D44993E0C780E6BC36C355875CDAB513((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTouch_t03E51455ED508492B3F278903A0114FA0E87B417_m5B76B15C066C78640EC90DB1FA3BC1876EFEEC8D_gshared (RuntimeArray* __this, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_5 = ___0_item;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Touch_t03E51455ED508492B3F278903A0114FA0E87B417> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTransform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F_m7725BC6CF93C53C14FF6BFD1E968924AB49634A3_gshared (RuntimeArray* __this, Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F L_5 = ___0_item;
		Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m91441AC13CA557709F36FFB581B7F329416A4AB6_gshared (RuntimeArray* __this, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_5 = ___0_item;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = TransformOrigin_Equals_m1BB998DC4BF023074E997BDF9FFBB477B8D8C542((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m1188AC264C6F52FFC8B15FF46B5835FBD6666597_gshared (RuntimeArray* __this, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_5 = ___0_item;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Translate_Equals_mEE5D86BA4C5C8C65EC0F226E081F49BA891792E1((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90_m356DFBA857F5BC428F0D9CB8D3B31A4094BB6450_gshared (RuntimeArray* __this, TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90 L_5 = ___0_item;
		TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839_m188EBA3F38115E56A9F30557A0DB503CEB1DAA85_gshared (RuntimeArray* __this, TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839 L_5 = ___0_item;
		TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTriangle_tAD1398FF3E995C3F4D56BE27E72C2DD1998AD290_m82354E70F5CE769DDDF79EE53462CCED69E03E47_gshared (RuntimeArray* __this, Triangle_tAD1398FF3E995C3F4D56BE27E72C2DD1998AD290 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Triangle_tAD1398FF3E995C3F4D56BE27E72C2DD1998AD290 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Triangle_tAD1398FF3E995C3F4D56BE27E72C2DD1998AD290 L_5 = ___0_item;
		Triangle_tAD1398FF3E995C3F4D56BE27E72C2DD1998AD290 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Triangle_Equals_m35BE7090528680F9CDC91C457A94BC90279493A7((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTypeNameKey_tE4E115F291C6F879D976911A340116B5CF218F33_mA6335B4AC0F33B469E09638297BFFEF8659F631A_gshared (RuntimeArray* __this, TypeNameKey_tE4E115F291C6F879D976911A340116B5CF218F33 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TypeNameKey_tE4E115F291C6F879D976911A340116B5CF218F33 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TypeNameKey_tE4E115F291C6F879D976911A340116B5CF218F33 L_5 = ___0_item;
		TypeNameKey_tE4E115F291C6F879D976911A340116B5CF218F33 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = TypeNameKey_Equals_mD335CEBC164F95FBD4F36B71B01F33486128A6A4((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD_m9725D9CD37131942A5ADE8E695BBB953127D84F5_gshared (RuntimeArray* __this, UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD L_5 = ___0_item;
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC_m512D2B29B566823033FC9A99CC7EBA4FA84C13FD_gshared (RuntimeArray* __this, UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC L_5 = ___0_item;
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_mDC042F93AA9594EB642017B564DDE1F6395897CB_gshared (RuntimeArray* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_5 = ___0_item;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mEC06E99986937CFA12CBFE4F7212619918ADE33E_gshared (RuntimeArray* __this, uint16_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		uint16_t L_5 = ___0_item;
		uint16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = UInt16_Equals_mA21E8831A57BC983311BFEE7023615002FC50207((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUInt16Enum_t481D129F5FAE551E8684190D640F0FAEFB237CF8_m96155B7525A4A8B332E7093F12E6C4889CB9677E_gshared (RuntimeArray* __this, uint16_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		uint16_t L_5 = ___0_item;
		uint16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<uint16_t> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB598970CC4AFA95A38D6DBDE6CB0D4043C1F5A64_gshared (RuntimeArray* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		uint32_t L_5 = ___0_item;
		uint32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = UInt32_Equals_mC516812849D8243A72D34D830D840A1F1E32795E((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUInt32Enum_t7B4F5C6C14D2C4B2A5927C59620BE3868714DACF_m4F30BDE21238E1F62BB09B6AD0780CEE39424C89_gshared (RuntimeArray* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		uint32_t L_5 = ___0_item;
		uint32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<uint32_t> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mF41FACACB76BF1E2A384B990A17AD895AF3AB357_gshared (RuntimeArray* __this, uint64_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		uint64_t L_5 = ___0_item;
		uint64_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = UInt64_Equals_m175E7A6F2A4606A94579529400854317542648A9((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m01C8456C1A7B1A78BE016ED5248D83A0748A2C5C_gshared (RuntimeArray* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___0_item;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector2_Equals_mA4E81D6FCE503DBD502BA499708344410F60DA4E_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mF92CB1A90C96594B6A67E7E2680C004FAD67913E_gshared (RuntimeArray* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_5 = ___0_item;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector2Int_Equals_m6D91EFAA6B3254334436BD262A4547EA08281BA3_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m8607C92881A800B10A96D62148CE7A750E62640E_gshared (RuntimeArray* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_item;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector3_Equals_mB4BE43D5986864F5C22B919F2957E0309F10E3B4_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m2050E232F77364815777E995C96FC9E41E98C582_gshared (RuntimeArray* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_5 = ___0_item;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector3Int_Equals_m419967067E76BF0381E4CD8FE14DF5ED46ACFB02_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mF072B5964F42AC3B28463A6572BBB5E3E8A89AC1_gshared (RuntimeArray* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = ___0_item;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector4_Equals_mC2596CA0F441D25DE7A9419BE66A8FA2DA355CB9_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948_mD4D910CB0A446EB60AB4A2DC996822EAAC33B519_gshared (RuntimeArray* __this, VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 L_5 = ___0_item;
		VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_m4E4CB613B2606CD31E2057AC9E443B271954A42C_gshared (RuntimeArray* __this, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_5 = ___0_item;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_mBB7A6225A160ECD0FBE13434056C573C2F22718E_gshared (RuntimeArray* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_5 = ___0_item;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = VertexAttributeDescriptor_Equals_m6FBFEE42E1BAAAC2D38434EDF0906C5B76D56BE5((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWordInfo_tA466206097891A5A2590896EE164AFC406EB060D_m8A974827B6ED52B570A43AB71D2EA251B552CC33_gshared (RuntimeArray* __this, WordInfo_tA466206097891A5A2590896EE164AFC406EB060D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WordInfo_tA466206097891A5A2590896EE164AFC406EB060D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WordInfo_tA466206097891A5A2590896EE164AFC406EB060D L_5 = ___0_item;
		WordInfo_tA466206097891A5A2590896EE164AFC406EB060D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WordInfo_tA466206097891A5A2590896EE164AFC406EB060D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_m638C56CD91A3E5CE706043D796606C529D2CB119_gshared (RuntimeArray* __this, WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A L_5 = ___0_item;
		WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_mED6789E3761D6FA098C8691795306CD85349365B_gshared (RuntimeArray* __this, WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123 L_5 = ___0_item;
		WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisX509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_m0C5C554BB812EDD8F79E40C669E95F95EC6160F9_gshared (RuntimeArray* __this, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_5 = ___0_item;
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisXPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_m6B3F37F3FCC9B6D0C9D422AB871825F9973D5C98_gshared (RuntimeArray* __this, XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA L_5 = ___0_item;
		XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisXPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_m266C25C63246A960D5FCE8A6234C25CE961826B1_gshared (RuntimeArray* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_5 = ___0_item;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisXRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5_m448C264CB8FE04F8819A7AFBE2FEC93289E6216F_gshared (RuntimeArray* __this, XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 L_5 = ___0_item;
		XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisIl2CppFullySharedGenericAny_m8B7CCAC86F27AB5C27D0AB84D823D11D11013D25_gshared (RuntimeArray* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
	const Il2CppFullySharedGenericAny L_6 = L_4;
	const Il2CppFullySharedGenericAny L_10 = L_4;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
	memset(V_2, 0, SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (Il2CppFullySharedGenericAny*)V_2);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___0_item : &___0_item), SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
		bool L_5 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_4);
		if (L_5)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_memcpy(L_6, V_2, SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
		bool L_7 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_6);
		if (L_7)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_8 = V_1;
		int32_t L_9;
		L_9 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_8, L_9));
	}

IL_0042:
	{
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___0_item : &___0_item), SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_10);
		bool L_13;
		L_13 = ConstrainedFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_12, (void*)(Il2CppFullySharedGenericAny*)V_2, L_11);
		if (!L_13)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_14, L_15));
	}

IL_0061:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0065:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_19;
		L_19 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAtlasNode_tE1393243E3FBC4D627662BB3BD7D37E36687987A_mAD7BE0D3D70C2F63953A0FE77318B99E0F3C54E4_gshared (RuntimeArray* __this, AtlasNode_tE1393243E3FBC4D627662BB3BD7D37E36687987A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AtlasNode_tE1393243E3FBC4D627662BB3BD7D37E36687987A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AtlasNode_tE1393243E3FBC4D627662BB3BD7D37E36687987A L_5 = ___0_item;
		AtlasNode_tE1393243E3FBC4D627662BB3BD7D37E36687987A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AtlasNode_tE1393243E3FBC4D627662BB3BD7D37E36687987A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_m06256604D61B4F324224F520CA9A5B5881DEDA2A_gshared (RuntimeArray* __this, AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D L_5 = ___0_item;
		AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253_m42022C48B079C10FB78D4C9AD7B18FBB1AB42B33_gshared (RuntimeArray* __this, MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 L_5 = ___0_item;
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mDBD0FB46B01ABF3DDAF2B784A3A3E91CC16C998F_gshared (RuntimeArray* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_5 = ___0_item;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPage_t04FE552A388BF55B12C8868E19589136957E00A5_m2326940FBBFF6C4D56FA7B8FC99DDF815289E2F9_gshared (RuntimeArray* __this, Page_t04FE552A388BF55B12C8868E19589136957E00A5 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Page_t04FE552A388BF55B12C8868E19589136957E00A5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Page_t04FE552A388BF55B12C8868E19589136957E00A5 L_5 = ___0_item;
		Page_t04FE552A388BF55B12C8868E19589136957E00A5 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Page_t04FE552A388BF55B12C8868E19589136957E00A5> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTableRange_tD242F3D62C818E84B6903C18A6CE33399672B497_m3BAEFC9B5542B6A887B221028FD733779E8F23EB_gshared (RuntimeArray* __this, TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 L_5 = ___0_item;
		TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTypeConvertKey_t98D33F680B910A58F3A66403380DC165250CFA93_m6339925719D5B892397D250D9B5ABEF707463A56_gshared (RuntimeArray* __this, TypeConvertKey_t98D33F680B910A58F3A66403380DC165250CFA93 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TypeConvertKey_t98D33F680B910A58F3A66403380DC165250CFA93 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TypeConvertKey_t98D33F680B910A58F3A66403380DC165250CFA93 L_5 = ___0_item;
		TypeConvertKey_t98D33F680B910A58F3A66403380DC165250CFA93 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = TypeConvertKey_Equals_m8C696A833AC5997EE1AC57B90E260679C2176069((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_mD628D4BC3DE15A6E96F72EE8FDAF3BC8DFFBBD87_gshared (RuntimeArray* __this, RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3 L_5 = ___0_item;
		RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274_m517CDFCC671986C67F6CB56ABF52E9063EDCA3EA_gshared (RuntimeArray* __this, ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274 L_5 = ___0_item;
		ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375_m30FA6D1F4240D26CE1A7D7B6B197F09E4430E438_gshared (RuntimeArray* __this, ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375 L_5 = ___0_item;
		ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_m8D42839F5033101608759246007E834BB78F5A34_gshared (RuntimeArray* __this, DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 L_5 = ___0_item;
		DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mE6AB4B39A9EE3036CD5E36258643D4B14B560F99_gshared (RuntimeArray* __this, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_5 = ___0_item;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0_mE744B04BFFAF70A4E1BF0B373F6B725B4242B832_gshared (RuntimeArray* __this, DefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0 L_5 = ___0_item;
		DefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisReservedWords_t2834E11516C795E0AD880A651793517590DFCF87_m3BFE4A559C95BA5D1BD9F9E3AB33C69458415D95_gshared (RuntimeArray* __this, ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87 L_5 = ___0_item;
		ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisFocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_m3046D7DEC9CED9D96EE064B1862594C6EC755E41_gshared (RuntimeArray* __this, FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF L_5 = ___0_item;
		FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHammersley2dSeq16_t397C360C61F6E7F51A0A76E3D2C33D9E3E7DA9C0_m6152CFDBE6A641209CD91A7736FF7B9307FBADDB_gshared (RuntimeArray* __this, Hammersley2dSeq16_t397C360C61F6E7F51A0A76E3D2C33D9E3E7DA9C0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Hammersley2dSeq16_t397C360C61F6E7F51A0A76E3D2C33D9E3E7DA9C0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Hammersley2dSeq16_t397C360C61F6E7F51A0A76E3D2C33D9E3E7DA9C0 L_5 = ___0_item;
		Hammersley2dSeq16_t397C360C61F6E7F51A0A76E3D2C33D9E3E7DA9C0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Hammersley2dSeq16_t397C360C61F6E7F51A0A76E3D2C33D9E3E7DA9C0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHammersley2dSeq256_tC5B5FB2A55263672FAF8EDF3CC19470F51E623C3_m74F88EA3F347402D12661A7232F4D68E508480F2_gshared (RuntimeArray* __this, Hammersley2dSeq256_tC5B5FB2A55263672FAF8EDF3CC19470F51E623C3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Hammersley2dSeq256_tC5B5FB2A55263672FAF8EDF3CC19470F51E623C3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Hammersley2dSeq256_tC5B5FB2A55263672FAF8EDF3CC19470F51E623C3 L_5 = ___0_item;
		Hammersley2dSeq256_tC5B5FB2A55263672FAF8EDF3CC19470F51E623C3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Hammersley2dSeq256_tC5B5FB2A55263672FAF8EDF3CC19470F51E623C3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHammersley2dSeq32_t5222FE247619F99BDD08C37FE5B0D94747718042_mC210119A626925F08B1DF56E02C4A7FD48D3F105_gshared (RuntimeArray* __this, Hammersley2dSeq32_t5222FE247619F99BDD08C37FE5B0D94747718042 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Hammersley2dSeq32_t5222FE247619F99BDD08C37FE5B0D94747718042 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Hammersley2dSeq32_t5222FE247619F99BDD08C37FE5B0D94747718042 L_5 = ___0_item;
		Hammersley2dSeq32_t5222FE247619F99BDD08C37FE5B0D94747718042 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Hammersley2dSeq32_t5222FE247619F99BDD08C37FE5B0D94747718042> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHammersley2dSeq64_tAF73FAB2FE740998DFFF551198D6C651F0A058E7_m92D5ACE2BF2579F0F71E11B4CF2BE9FB4EF4E71A_gshared (RuntimeArray* __this, Hammersley2dSeq64_tAF73FAB2FE740998DFFF551198D6C651F0A058E7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Hammersley2dSeq64_tAF73FAB2FE740998DFFF551198D6C651F0A058E7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Hammersley2dSeq64_tAF73FAB2FE740998DFFF551198D6C651F0A058E7 L_5 = ___0_item;
		Hammersley2dSeq64_tAF73FAB2FE740998DFFF551198D6C651F0A058E7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Hammersley2dSeq64_tAF73FAB2FE740998DFFF551198D6C651F0A058E7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_Tisbucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_mA601AC1A9209505C75ABCBE3D5DFBA677221EAE0_gshared (RuntimeArray* __this, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_5 = ___0_item;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C_m2B1D94AA92AE385E5FCEDD0B5113118ABDDFF90B_gshared (RuntimeArray* __this, HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C L_5 = ___0_item;
		HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA_mD69603BF7C970A53FCD893F6706E0C1405D95A75_gshared (RuntimeArray* __this, SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA L_5 = ___0_item;
		SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisFormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_mC66BCEC5997879778FB48B85283513E7C9F19DE1_gshared (RuntimeArray* __this, FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E L_5 = ___0_item;
		FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_m8E283C6E972C0C2D8202BF74D4C9CDE2366FC907_gshared (RuntimeArray* __this, PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6 L_5 = ___0_item;
		PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBrick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0_mCDC98C72E7779F960FD49DC607B283EDFA5C8C66_gshared (RuntimeArray* __this, Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0 L_5 = ___0_item;
		Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisReservedBrick_tCFAA149CAAD025D942AF59976B1CC697E96CACB9_m9CA0D04863AF92524DD97FFAA722CEA2275114B5_gshared (RuntimeArray* __this, ReservedBrick_tCFAA149CAAD025D942AF59976B1CC697E96CACB9 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ReservedBrick_tCFAA149CAAD025D942AF59976B1CC697E96CACB9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ReservedBrick_tCFAA149CAAD025D942AF59976B1CC697E96CACB9 L_5 = ___0_item;
		ReservedBrick_tCFAA149CAAD025D942AF59976B1CC697E96CACB9 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ReservedBrick_tCFAA149CAAD025D942AF59976B1CC697E96CACB9> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B_m97EC877CCE58159A2EEE4CE639BA5BE80461F58A_gshared (RuntimeArray* __this, BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B L_5 = ___0_item;
		BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCellCounts_tE8F649895E00B2C75ABEA7C6ECC40BBDE1EF5970_m083A762E6C70EAF9DEC249EAA217E5E587AB8C7E_gshared (RuntimeArray* __this, CellCounts_tE8F649895E00B2C75ABEA7C6ECC40BBDE1EF5970 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CellCounts_tE8F649895E00B2C75ABEA7C6ECC40BBDE1EF5970 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CellCounts_tE8F649895E00B2C75ABEA7C6ECC40BBDE1EF5970 L_5 = ___0_item;
		CellCounts_tE8F649895E00B2C75ABEA7C6ECC40BBDE1EF5970 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CellCounts_tE8F649895E00B2C75ABEA7C6ECC40BBDE1EF5970> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPerScenarioData_t550076045279B9168297EFAEC12D729EB36C67CC_m3574B0A9129B2B89561E8DB3FCDC5316EFC145F1_gshared (RuntimeArray* __this, PerScenarioData_t550076045279B9168297EFAEC12D729EB36C67CC ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PerScenarioData_t550076045279B9168297EFAEC12D729EB36C67CC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PerScenarioData_t550076045279B9168297EFAEC12D729EB36C67CC L_5 = ___0_item;
		PerScenarioData_t550076045279B9168297EFAEC12D729EB36C67CC L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PerScenarioData_t550076045279B9168297EFAEC12D729EB36C67CC> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSerializablePerScenarioDataItem_t8ECC5ABF9BA05017D9B44DB66430D5946393AC92_m0E20F434B7DB1430AA09AEDA4C390CCCFF9DBFB5_gshared (RuntimeArray* __this, SerializablePerScenarioDataItem_t8ECC5ABF9BA05017D9B44DB66430D5946393AC92 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SerializablePerScenarioDataItem_t8ECC5ABF9BA05017D9B44DB66430D5946393AC92 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SerializablePerScenarioDataItem_t8ECC5ABF9BA05017D9B44DB66430D5946393AC92 L_5 = ___0_item;
		SerializablePerScenarioDataItem_t8ECC5ABF9BA05017D9B44DB66430D5946393AC92 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SerializablePerScenarioDataItem_t8ECC5ABF9BA05017D9B44DB66430D5946393AC92> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSerializableBoundItem_tF2F8CD24513F8F4D69DCAC89522EA0D3C032A640_m29F5B38AB8FF55D1AB4AFD6968642A0B45E22C52_gshared (RuntimeArray* __this, SerializableBoundItem_tF2F8CD24513F8F4D69DCAC89522EA0D3C032A640 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SerializableBoundItem_tF2F8CD24513F8F4D69DCAC89522EA0D3C032A640 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SerializableBoundItem_tF2F8CD24513F8F4D69DCAC89522EA0D3C032A640 L_5 = ___0_item;
		SerializableBoundItem_tF2F8CD24513F8F4D69DCAC89522EA0D3C032A640 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SerializableBoundItem_tF2F8CD24513F8F4D69DCAC89522EA0D3C032A640> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSerializableHasPVItem_t061E2CE4D8B201F280D06ABD0246C7AD8FD9571C_m97AA4AE237C4BD6D0CB1B50BDDA6730EB41F1469_gshared (RuntimeArray* __this, SerializableHasPVItem_t061E2CE4D8B201F280D06ABD0246C7AD8FD9571C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SerializableHasPVItem_t061E2CE4D8B201F280D06ABD0246C7AD8FD9571C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SerializableHasPVItem_t061E2CE4D8B201F280D06ABD0246C7AD8FD9571C L_5 = ___0_item;
		SerializableHasPVItem_t061E2CE4D8B201F280D06ABD0246C7AD8FD9571C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SerializableHasPVItem_t061E2CE4D8B201F280D06ABD0246C7AD8FD9571C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSerializablePVBakeSettings_t9C88167788303739AC5D93A20092598DF654A452_m3ECBD06F6C19A2A31B0EB83B4F94CCF0DA03EC40_gshared (RuntimeArray* __this, SerializablePVBakeSettings_t9C88167788303739AC5D93A20092598DF654A452 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SerializablePVBakeSettings_t9C88167788303739AC5D93A20092598DF654A452 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SerializablePVBakeSettings_t9C88167788303739AC5D93A20092598DF654A452 L_5 = ___0_item;
		SerializablePVBakeSettings_t9C88167788303739AC5D93A20092598DF654A452 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SerializablePVBakeSettings_t9C88167788303739AC5D93A20092598DF654A452> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C_m4391B32F78BA7AB0C7E919449F22AB351F90E279_gshared (RuntimeArray* __this, SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C L_5 = ___0_item;
		SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_m7B5F1DC7B98598CF59BA5AAB966E0D8679A4D001_gshared (RuntimeArray* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_5 = ___0_item;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = CachedCodeEntryKey_Equals_m59F40708B97179EA5C9019EA6A958D7AB8BC8CA2((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisLowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_mAEC37F2039B0F7F73E9403615F03B431ADE58D13_gshared (RuntimeArray* __this, LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1 L_5 = ___0_item;
		LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_mAE6B169036ECFBDE5BBD3D8A641A3235F1A758D0_gshared (RuntimeArray* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_5 = ___0_item;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_mC7B3CB05AB193EEBA1E49FB8BD138A1EDEDE27F2_gshared (RuntimeArray* __this, RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE L_5 = ___0_item;
		RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615_m3C30096F5A1E018D63076791CEC41BC3FC84EC71_gshared (RuntimeArray* __this, CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615 L_5 = ___0_item;
		CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCompiledResourceInfo_t1B258600AF5819B19709F6E4FF0D2803D039336A_mDB2AC282B26F949D05B22B1CA77E3421C7D9C923_gshared (RuntimeArray* __this, CompiledResourceInfo_t1B258600AF5819B19709F6E4FF0D2803D039336A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CompiledResourceInfo_t1B258600AF5819B19709F6E4FF0D2803D039336A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CompiledResourceInfo_t1B258600AF5819B19709F6E4FF0D2803D039336A L_5 = ___0_item;
		CompiledResourceInfo_t1B258600AF5819B19709F6E4FF0D2803D039336A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CompiledResourceInfo_t1B258600AF5819B19709F6E4FF0D2803D039336A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPassDebugData_tE911DB0148519C33C773511F2D92F57AF1B6D258_m19B05F7C3DF48561CADC8EFDD5A713AAB5B924D5_gshared (RuntimeArray* __this, PassDebugData_tE911DB0148519C33C773511F2D92F57AF1B6D258 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PassDebugData_tE911DB0148519C33C773511F2D92F57AF1B6D258 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PassDebugData_tE911DB0148519C33C773511F2D92F57AF1B6D258 L_5 = ___0_item;
		PassDebugData_tE911DB0148519C33C773511F2D92F57AF1B6D258 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PassDebugData_tE911DB0148519C33C773511F2D92F57AF1B6D258> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisResourceDebugData_t83301B4E44B1F0B49486E21F019AFEE444809A9B_m366CA953B314BF9A7978E63A09CC59757AC5ED2B_gshared (RuntimeArray* __this, ResourceDebugData_t83301B4E44B1F0B49486E21F019AFEE444809A9B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ResourceDebugData_t83301B4E44B1F0B49486E21F019AFEE444809A9B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ResourceDebugData_t83301B4E44B1F0B49486E21F019AFEE444809A9B L_5 = ___0_item;
		ResourceDebugData_t83301B4E44B1F0B49486E21F019AFEE444809A9B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ResourceDebugData_t83301B4E44B1F0B49486E21F019AFEE444809A9B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_mA936B807A02B5465FFD26D1EEE1F5F28B671349B_gshared (RuntimeArray* __this, HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314 L_5 = ___0_item;
		HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7_mC55B38F8F17BCB40BA76C54D41E7EE4E5498CF65_gshared (RuntimeArray* __this, SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7 L_5 = ___0_item;
		SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWSABUF_tCBB60A3DE1FB95395F72DA6C6F9D33FE3C40140B_m36D8E5EDD2689046B5048891009485A44525E1FA_gshared (RuntimeArray* __this, WSABUF_tCBB60A3DE1FB95395F72DA6C6F9D33FE3C40140B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WSABUF_tCBB60A3DE1FB95395F72DA6C6F9D33FE3C40140B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WSABUF_tCBB60A3DE1FB95395F72DA6C6F9D33FE3C40140B L_5 = ___0_item;
		WSABUF_tCBB60A3DE1FB95395F72DA6C6F9D33FE3C40140B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WSABUF_tCBB60A3DE1FB95395F72DA6C6F9D33FE3C40140B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_m269BDB3F4D473D96BA2863991CCFF95FF98FAAA5_gshared (RuntimeArray* __this, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_5 = ___0_item;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_m1359E84ED80560DC8719533F13A642EEE993FA4E_gshared (RuntimeArray* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_5 = ___0_item;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_mEDC204D897D57BED6CEE721EB401F8C1E7F8FA05_gshared (RuntimeArray* __this, ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1 L_5 = ___0_item;
		ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574_m573A2963FF86144B07F7F8AE6593A6F71DA1345E_gshared (RuntimeArray* __this, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_5 = ___0_item;
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_mD4A0E3D2C943FF36684930D2D9824C55B9E1609F_gshared (RuntimeArray* __this, ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992 L_5 = ___0_item;
		ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUnicodeChar_tB86B7DE9203E1D985B08268AF1964DECB8A5F722_m1E29A9360C1E1046DBA44FD2E7CD0EAAAA6E1A85_gshared (RuntimeArray* __this, UnicodeChar_tB86B7DE9203E1D985B08268AF1964DECB8A5F722 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UnicodeChar_tB86B7DE9203E1D985B08268AF1964DECB8A5F722 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		UnicodeChar_tB86B7DE9203E1D985B08268AF1964DECB8A5F722 L_5 = ___0_item;
		UnicodeChar_tB86B7DE9203E1D985B08268AF1964DECB8A5F722 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UnicodeChar_tB86B7DE9203E1D985B08268AF1964DECB8A5F722> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_mB128E0A356F08CB5456DAA2D88E96655A8AB7003_gshared (RuntimeArray* __this, AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF L_5 = ___0_item;
		AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Matrix4x4_Equals_m35CFC5F304BB40EFFE011B92AA87B77CD8FF8F74_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Matrix4x4_Equals_mDB0C4CCC58BE3E108F1A40BE8DBDCD62E284CC51_inline(__this, ((*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)UnBox(L_2, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_Equals_mCF93B00BA4FCDDE6100918451343DB9A0583A0A0_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Quaternion_Equals_m25B95D8412B79CC7F8B34062BFAE662BD99578BE_inline(__this, ((*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)UnBox(L_2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Rect_Equals_mD7EB2046512E4A46524A7ED929F1C38A32C408F8_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Rect_Equals_mE725DE506D3F1DB92F58B876BDA42AACD4D991B5_inline(__this, ((*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)UnBox(L_2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mA4E81D6FCE503DBD502BA499708344410F60DA4E_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Vector2_Equals_mDF84D5ED14E018609C6A9C9BAE016C1B33BCFF4C_inline(__this, ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m6D91EFAA6B3254334436BD262A4547EA08281BA3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Vector2Int_Equals_m32811BA0576C096D5EB5C0CFD8231478F17229A6_inline(__this, ((*(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*)((Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*)(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*)UnBox(L_2, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mB4BE43D5986864F5C22B919F2957E0309F10E3B4_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline(__this, ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_Equals_m419967067E76BF0381E4CD8FE14DF5ED46ACFB02_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Vector3Int_Equals_mE4D179C5001B77DE05E3E4BC39DC9F6AE441EBD8_inline(__this, ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_2, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_mC2596CA0F441D25DE7A9419BE66A8FA2DA355CB9_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline(__this, ((*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)UnBox(L_2, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Matrix4x4_Equals_mDB0C4CCC58BE3E108F1A40BE8DBDCD62E284CC51_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_other, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0;
		L_0 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 0, NULL);
		V_0 = L_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&___0_other), 0, NULL);
		bool L_2;
		L_2 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 1, NULL);
		V_0 = L_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		L_4 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&___0_other), 1, NULL);
		bool L_5;
		L_5 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline((&V_0), L_4, NULL);
		if (!L_5)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		L_6 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 2, NULL);
		V_0 = L_6;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		L_7 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&___0_other), 2, NULL);
		bool L_8;
		L_8 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline((&V_0), L_7, NULL);
		if (!L_8)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9;
		L_9 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 3, NULL);
		V_0 = L_9;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10;
		L_10 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&___0_other), 3, NULL);
		bool L_11;
		L_11 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline((&V_0), L_10, NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0066;
	}

IL_0065:
	{
		G_B5_0 = 0;
	}

IL_0066:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0069;
	}

IL_0069:
	{
		bool L_12 = V_1;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_Equals_m25B95D8412B79CC7F8B34062BFAE662BD99578BE_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		float* L_0 = (float*)(&__this->___x);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___0_other;
		float L_2 = L_1.___x;
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		float* L_4 = (float*)(&__this->___y);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___0_other;
		float L_6 = L_5.___y;
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		float* L_8 = (float*)(&__this->___z);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = ___0_other;
		float L_10 = L_9.___z;
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_004d;
		}
	}
	{
		float* L_12 = (float*)(&__this->___w);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = ___0_other;
		float L_14 = L_13.___w;
		bool L_15;
		L_15 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_12, L_14, NULL);
		G_B5_0 = ((int32_t)(L_15));
		goto IL_004e;
	}

IL_004d:
	{
		G_B5_0 = 0;
	}

IL_004e:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0051;
	}

IL_0051:
	{
		bool L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Rect_Equals_mE725DE506D3F1DB92F58B876BDA42AACD4D991B5_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_other, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		float L_0;
		L_0 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB_inline(__this, NULL);
		V_0 = L_0;
		float L_1;
		L_1 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB_inline((&___0_other), NULL);
		bool L_2;
		L_2 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_005d;
		}
	}
	{
		float L_3;
		L_3 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49_inline(__this, NULL);
		V_0 = L_3;
		float L_4;
		L_4 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49_inline((&___0_other), NULL);
		bool L_5;
		L_5 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_4, NULL);
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		float L_6;
		L_6 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline(__this, NULL);
		V_0 = L_6;
		float L_7;
		L_7 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline((&___0_other), NULL);
		bool L_8;
		L_8 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_7, NULL);
		if (!L_8)
		{
			goto IL_005d;
		}
	}
	{
		float L_9;
		L_9 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline(__this, NULL);
		V_0 = L_9;
		float L_10;
		L_10 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline((&___0_other), NULL);
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_10, NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_005e;
	}

IL_005d:
	{
		G_B5_0 = 0;
	}

IL_005e:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0061;
	}

IL_0061:
	{
		bool L_12 = V_1;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mDF84D5ED14E018609C6A9C9BAE016C1B33BCFF4C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = __this->___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_other;
		float L_2 = L_1.___x;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		float L_3 = __this->___y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_other;
		float L_5 = L_4.___y;
		G_B3_0 = ((((float)L_3) == ((float)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m32811BA0576C096D5EB5C0CFD8231478F17229A6_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(__this, NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___0_other), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2;
		L_2 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(__this, NULL);
		int32_t L_3;
		L_3 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___0_other), NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		float L_0 = __this->___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_other;
		float L_2 = L_1.___x;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = __this->___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_other;
		float L_5 = L_4.___y;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_002d;
		}
	}
	{
		float L_6 = __this->___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_other;
		float L_8 = L_7.___z;
		G_B4_0 = ((((float)L_6) == ((float)L_8))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0031;
	}

IL_0031:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_Equals_mE4D179C5001B77DE05E3E4BC39DC9F6AE441EBD8_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)__this);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = ___0_other;
		bool L_2;
		L_2 = Vector3Int_op_Equality_mB10073AF3B08421C46BF678C8FF64AAD62C83617_inline(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		float L_0 = __this->___x;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___0_other;
		float L_2 = L_1.___x;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_003b;
		}
	}
	{
		float L_3 = __this->___y;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_other;
		float L_5 = L_4.___y;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_003b;
		}
	}
	{
		float L_6 = __this->___z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = ___0_other;
		float L_8 = L_7.___z;
		if ((!(((float)L_6) == ((float)L_8))))
		{
			goto IL_003b;
		}
	}
	{
		float L_9 = __this->___w;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___0_other;
		float L_11 = L_10.___w;
		G_B5_0 = ((((float)L_9) == ((float)L_11))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B5_0 = 0;
	}

IL_003c:
	{
		V_0 = (bool)G_B5_0;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_XMin;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_YMin;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_Width;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_Height;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_op_Equality_mB10073AF3B08421C46BF678C8FF64AAD62C83617_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_lhs, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		int32_t L_0;
		L_0 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___0_lhs), NULL);
		int32_t L_1;
		L_1 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___1_rhs), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_2;
		L_2 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___0_lhs), NULL);
		int32_t L_3;
		L_3 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___1_rhs), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4;
		L_4 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___0_lhs), NULL);
		int32_t L_5;
		L_5 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___1_rhs), NULL);
		G_B4_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B4_0 = 0;
	}

IL_0034:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0037;
	}

IL_0037:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Z;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
