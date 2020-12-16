#ifndef KONAN_CATCODE_MULTIPLATFORM_H
#define KONAN_CATCODE_MULTIPLATFORM_H
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
typedef bool            CatCode_multiplatform_KBoolean;
#else
typedef _Bool           CatCode_multiplatform_KBoolean;
#endif
typedef unsigned short     CatCode_multiplatform_KChar;
typedef signed char        CatCode_multiplatform_KByte;
typedef short              CatCode_multiplatform_KShort;
typedef int                CatCode_multiplatform_KInt;
typedef long long          CatCode_multiplatform_KLong;
typedef unsigned char      CatCode_multiplatform_KUByte;
typedef unsigned short     CatCode_multiplatform_KUShort;
typedef unsigned int       CatCode_multiplatform_KUInt;
typedef unsigned long long CatCode_multiplatform_KULong;
typedef float              CatCode_multiplatform_KFloat;
typedef double             CatCode_multiplatform_KDouble;
#ifndef _MSC_VER
typedef float __attribute__ ((__vector_size__ (16))) CatCode_multiplatform_KVector128;
#else
#include <xmmintrin.h>
typedef __m128 CatCode_multiplatform_KVector128;
#endif
typedef void*              CatCode_multiplatform_KNativePtr;
struct CatCode_multiplatform_KType;
typedef struct CatCode_multiplatform_KType CatCode_multiplatform_KType;

typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_kotlin_Byte;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_kotlin_Short;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_kotlin_Int;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_kotlin_Long;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_kotlin_Float;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_kotlin_Double;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_kotlin_Char;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_kotlin_Boolean;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_kotlin_Unit;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_Neko;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_kotlin_text_Regex;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_BaseMutableNoraNeko;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_CatCodeUtil;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_CodeTemplate;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_LazyCodeBuilder;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_CodeBuilder;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_CatDecoder;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_CatEncoder;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_EmptyNeko;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_kotlin_collections_Set;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_kotlin_collections_Collection;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_kotlin_Any;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_MutableNeko;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_kotlin_CharSequence;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_kotlin_collections_Map;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_LazyNekoBuilder;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_kotlin_LazyThreadSafetyMode;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_LazyCodeBuilder_LazyCodeBuilderKey;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_LazyNoraNekoBuilder;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_LazyWildcatCodeBuilder_LazyWildcatCodeBuilderKey;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_Msgs;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_kotlin_Function0;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_kotlin_collections_MutableIterator;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_kotlin_collections_MutableListIterator;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_kotlin_collections_List;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_kotlin_collections_MutableList;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_MutableNoraNeko;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_Neko_Of;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_NekoAibo;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_kotlin_Array;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_kotlin_collections_Iterator;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_NekoBuilder;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_CodeBuilder_CodeBuilderKey;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_NekoTemplate;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_NoraNeko;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_NoraNekoBuilder;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_WildcatCodeBuilder_WildcatCodeBuilderKey;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_WildcatTemplate;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_StringCodeBuilder;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_StringTemplate;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil_Companion;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_WildcatStringCodeBuilder;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_collection_LazyMap;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko_Of;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko_Of;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_kotlin_collections_MutableSet;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_kotlin_collections_MutableCollection;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_kotlin_collections_MutableMap;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_collection_MutableLazyMap;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko_Of;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko_Of;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko_Of;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko;
typedef struct {
  CatCode_multiplatform_KNativePtr pinned;
} CatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko_Of;


typedef struct {
  /* Service functions. */
  void (*DisposeStablePointer)(CatCode_multiplatform_KNativePtr ptr);
  void (*DisposeString)(const char* string);
  CatCode_multiplatform_KBoolean (*IsInstance)(CatCode_multiplatform_KNativePtr ref, const CatCode_multiplatform_KType* type);
  CatCode_multiplatform_kref_kotlin_Byte (*createNullableByte)(CatCode_multiplatform_KByte);
  CatCode_multiplatform_kref_kotlin_Short (*createNullableShort)(CatCode_multiplatform_KShort);
  CatCode_multiplatform_kref_kotlin_Int (*createNullableInt)(CatCode_multiplatform_KInt);
  CatCode_multiplatform_kref_kotlin_Long (*createNullableLong)(CatCode_multiplatform_KLong);
  CatCode_multiplatform_kref_kotlin_Float (*createNullableFloat)(CatCode_multiplatform_KFloat);
  CatCode_multiplatform_kref_kotlin_Double (*createNullableDouble)(CatCode_multiplatform_KDouble);
  CatCode_multiplatform_kref_kotlin_Char (*createNullableChar)(CatCode_multiplatform_KChar);
  CatCode_multiplatform_kref_kotlin_Boolean (*createNullableBoolean)(CatCode_multiplatform_KBoolean);
  CatCode_multiplatform_kref_kotlin_Unit (*createNullableUnit)(void);

  /* User functions. */
  struct {
    struct {
      struct {
        struct {
          struct {
            const char* (*get_CAT_END)();
            const char* (*get_CAT_HEAD)();
            const char* (*get_CAT_KV)();
            const char* (*get_CAT_PS)();
            const char* (*get_CAT_TYPE)();
            CatCode_multiplatform_kref_love_forte_catcode_Neko (*get_NekoAtAll)();
            CatCode_multiplatform_kref_love_forte_catcode_Neko (*get_NekoDice)();
            CatCode_multiplatform_kref_love_forte_catcode_Neko (*get_NekoRps)();
            CatCode_multiplatform_kref_love_forte_catcode_Neko (*get_NekoShake)();
            CatCode_multiplatform_kref_kotlin_text_Regex (*get_nekoMatchRegex)();
            const char* (*catHead)(const char* codeType);
            const char* (*deCatParam)(const char* thiz);
            const char* (*deCatText)(const char* thiz);
            const char* (*enCatParam)(const char* thiz);
            const char* (*enCatText)(const char* thiz);
            struct {
              CatCode_multiplatform_KType* (*_type)(void);
              CatCode_multiplatform_kref_love_forte_catcode_BaseMutableNoraNeko (*BaseMutableNoraNeko)();
            } BaseMutableNoraNeko;
            struct {
              CatCode_multiplatform_KType* (*_type)(void);
              CatCode_multiplatform_kref_love_forte_catcode_CatCodeUtil (*_instance)();
              const char* (*get_catCodeHead)(CatCode_multiplatform_kref_love_forte_catcode_CatCodeUtil thiz);
              CatCode_multiplatform_kref_love_forte_catcode_CatCodeUtil (*get_instance)(CatCode_multiplatform_kref_love_forte_catcode_CatCodeUtil thiz);
              CatCode_multiplatform_kref_love_forte_catcode_CodeTemplate (*get_nekoTemplate)(CatCode_multiplatform_kref_love_forte_catcode_CatCodeUtil thiz);
              CatCode_multiplatform_kref_love_forte_catcode_CodeTemplate (*get_stringTemplate)(CatCode_multiplatform_kref_love_forte_catcode_CatCodeUtil thiz);
              CatCode_multiplatform_kref_love_forte_catcode_LazyCodeBuilder (*getLazyNekoBuilder)(CatCode_multiplatform_kref_love_forte_catcode_CatCodeUtil thiz, const char* type, CatCode_multiplatform_KBoolean encode);
              CatCode_multiplatform_kref_love_forte_catcode_CodeBuilder (*getNekoBuilder)(CatCode_multiplatform_kref_love_forte_catcode_CatCodeUtil thiz, const char* type, CatCode_multiplatform_KBoolean encode);
              CatCode_multiplatform_kref_love_forte_catcode_CodeBuilder (*getStringCodeBuilder)(CatCode_multiplatform_kref_love_forte_catcode_CatCodeUtil thiz, const char* type, CatCode_multiplatform_KBoolean encode);
            } CatCodeUtil;
            struct {
              CatCode_multiplatform_KType* (*_type)(void);
              CatCode_multiplatform_kref_love_forte_catcode_CatDecoder (*_instance)();
              CatCode_multiplatform_kref_love_forte_catcode_CatDecoder (*get_instance)(CatCode_multiplatform_kref_love_forte_catcode_CatDecoder thiz);
              const char* (*decodeParams)(CatCode_multiplatform_kref_love_forte_catcode_CatDecoder thiz, const char* str);
              const char* (*decodeParamsOrNull)(CatCode_multiplatform_kref_love_forte_catcode_CatDecoder thiz, const char* str);
              const char* (*decodeText)(CatCode_multiplatform_kref_love_forte_catcode_CatDecoder thiz, const char* str);
              const char* (*decodeTextOrNull)(CatCode_multiplatform_kref_love_forte_catcode_CatDecoder thiz, const char* str);
            } CatDecoder;
            struct {
              CatCode_multiplatform_KType* (*_type)(void);
              CatCode_multiplatform_kref_love_forte_catcode_CatEncoder (*_instance)();
              CatCode_multiplatform_kref_love_forte_catcode_CatEncoder (*get_instance)(CatCode_multiplatform_kref_love_forte_catcode_CatEncoder thiz);
              const char* (*encodeParams)(CatCode_multiplatform_kref_love_forte_catcode_CatEncoder thiz, const char* str);
              const char* (*encodeParamsOrNull)(CatCode_multiplatform_kref_love_forte_catcode_CatEncoder thiz, const char* str);
              const char* (*encodeText)(CatCode_multiplatform_kref_love_forte_catcode_CatEncoder thiz, const char* str);
              const char* (*encodeTextOrNull)(CatCode_multiplatform_kref_love_forte_catcode_CatEncoder thiz, const char* str);
            } CatEncoder;
            struct {
              CatCode_multiplatform_KType* (*_type)(void);
              CatCode_multiplatform_kref_love_forte_catcode_EmptyNeko (*EmptyNeko)(const char* type);
              CatCode_multiplatform_kref_kotlin_collections_Set (*get_entries)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz);
              CatCode_multiplatform_kref_kotlin_collections_Set (*get_keys)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz);
              CatCode_multiplatform_KInt (*get_length)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz);
              CatCode_multiplatform_KInt (*get_size)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz);
              const char* (*get_type)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz);
              CatCode_multiplatform_kref_kotlin_collections_Collection (*get_values)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz);
              const char* (*component1)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz);
              CatCode_multiplatform_KBoolean (*containsKey)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz, const char* key);
              CatCode_multiplatform_KBoolean (*containsValue)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz, const char* value);
              CatCode_multiplatform_kref_love_forte_catcode_EmptyNeko (*copy)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz, const char* type);
              CatCode_multiplatform_KBoolean (*equals)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz, CatCode_multiplatform_kref_kotlin_Any other);
              CatCode_multiplatform_KChar (*get)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz, CatCode_multiplatform_KInt index);
              const char* (*get_)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz, const char* key);
              const char* (*getNoDecode)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz, const char* key);
              CatCode_multiplatform_KInt (*hashCode)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*immutable)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz);
              CatCode_multiplatform_KBoolean (*isEmpty)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz);
              CatCode_multiplatform_kref_love_forte_catcode_MutableNeko (*mutable_)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz);
              CatCode_multiplatform_kref_kotlin_CharSequence (*subSequence)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz, CatCode_multiplatform_KInt startIndex, CatCode_multiplatform_KInt endIndex);
              CatCode_multiplatform_kref_kotlin_collections_Map (*toMap)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz);
              const char* (*toString)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz);
            } EmptyNeko;
            struct {
              CatCode_multiplatform_KType* (*_type)(void);
              CatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko (*EmptyNoraNeko)(const char* codeType, const char* type);
              const char* (*get_codeType)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz);
              CatCode_multiplatform_kref_kotlin_collections_Set (*get_entries)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz);
              CatCode_multiplatform_kref_kotlin_collections_Set (*get_keys)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz);
              CatCode_multiplatform_KInt (*get_length)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz);
              CatCode_multiplatform_KInt (*get_size)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz);
              const char* (*get_type)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz);
              CatCode_multiplatform_kref_kotlin_collections_Collection (*get_values)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz);
              const char* (*component1)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz);
              const char* (*component2)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz);
              CatCode_multiplatform_KBoolean (*containsKey)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz, const char* key);
              CatCode_multiplatform_KBoolean (*containsValue)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz, const char* value);
              CatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko (*copy)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz, const char* codeType, const char* type);
              CatCode_multiplatform_KBoolean (*equals)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz, CatCode_multiplatform_kref_kotlin_Any other);
              CatCode_multiplatform_KChar (*get)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz, CatCode_multiplatform_KInt index);
              const char* (*get_)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz, const char* key);
              const char* (*getNoDecode)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz, const char* key);
              CatCode_multiplatform_KInt (*hashCode)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*immutable)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz);
              CatCode_multiplatform_KBoolean (*isEmpty)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz);
              CatCode_multiplatform_kref_love_forte_catcode_MutableNeko (*mutable_)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz);
              CatCode_multiplatform_kref_kotlin_CharSequence (*subSequence)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz, CatCode_multiplatform_KInt startIndex, CatCode_multiplatform_KInt endIndex);
              CatCode_multiplatform_kref_kotlin_collections_Map (*toMap)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz);
              const char* (*toString)(CatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz);
            } EmptyNoraNeko;
            struct {
              CatCode_multiplatform_KType* (*_type)(void);
              CatCode_multiplatform_kref_love_forte_catcode_LazyNekoBuilder (*LazyNekoBuilder)(const char* type, CatCode_multiplatform_kref_kotlin_LazyThreadSafetyMode mode);
              const char* (*get_type)(CatCode_multiplatform_kref_love_forte_catcode_LazyNekoBuilder thiz);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*build)(CatCode_multiplatform_kref_love_forte_catcode_LazyNekoBuilder thiz);
              CatCode_multiplatform_kref_love_forte_catcode_LazyCodeBuilder_LazyCodeBuilderKey (*key)(CatCode_multiplatform_kref_love_forte_catcode_LazyNekoBuilder thiz, const char* key);
            } LazyNekoBuilder;
            struct {
              CatCode_multiplatform_KType* (*_type)(void);
              CatCode_multiplatform_kref_love_forte_catcode_LazyNoraNekoBuilder (*LazyNoraNekoBuilder)(const char* codeType, const char* type);
              const char* (*get_codeType)(CatCode_multiplatform_kref_love_forte_catcode_LazyNoraNekoBuilder thiz);
              const char* (*get_type)(CatCode_multiplatform_kref_love_forte_catcode_LazyNoraNekoBuilder thiz);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*build)(CatCode_multiplatform_kref_love_forte_catcode_LazyNoraNekoBuilder thiz);
              CatCode_multiplatform_kref_love_forte_catcode_LazyWildcatCodeBuilder_LazyWildcatCodeBuilderKey (*key)(CatCode_multiplatform_kref_love_forte_catcode_LazyNoraNekoBuilder thiz, const char* key);
            } LazyNoraNekoBuilder;
            struct {
              CatCode_multiplatform_KType* (*_type)(void);
              CatCode_multiplatform_kref_love_forte_catcode_Msgs (*Msgs)(CatCode_multiplatform_kref_kotlin_CharSequence delimiter, CatCode_multiplatform_kref_kotlin_collections_Collection collection);
              CatCode_multiplatform_kref_love_forte_catcode_Msgs (*Msgs_)(CatCode_multiplatform_kref_kotlin_CharSequence delimiter, CatCode_multiplatform_kref_kotlin_Function0 delegate);
              CatCode_multiplatform_KInt (*get_size)(CatCode_multiplatform_kref_love_forte_catcode_Msgs thiz);
              CatCode_multiplatform_KBoolean (*add)(CatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, CatCode_multiplatform_kref_kotlin_CharSequence element);
              void (*add_)(CatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, CatCode_multiplatform_KInt index, CatCode_multiplatform_kref_kotlin_CharSequence element);
              CatCode_multiplatform_KBoolean (*addAll)(CatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, CatCode_multiplatform_KInt index, CatCode_multiplatform_kref_kotlin_collections_Collection elements);
              CatCode_multiplatform_KBoolean (*addAll_)(CatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, CatCode_multiplatform_kref_kotlin_collections_Collection elements);
              void (*clear)(CatCode_multiplatform_kref_love_forte_catcode_Msgs thiz);
              CatCode_multiplatform_KBoolean (*contains)(CatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, CatCode_multiplatform_kref_kotlin_CharSequence element);
              CatCode_multiplatform_KBoolean (*containsAll)(CatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, CatCode_multiplatform_kref_kotlin_collections_Collection elements);
              CatCode_multiplatform_kref_kotlin_CharSequence (*get)(CatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, CatCode_multiplatform_KInt index);
              CatCode_multiplatform_KInt (*indexOf)(CatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, CatCode_multiplatform_kref_kotlin_CharSequence element);
              CatCode_multiplatform_KBoolean (*isEmpty)(CatCode_multiplatform_kref_love_forte_catcode_Msgs thiz);
              CatCode_multiplatform_kref_kotlin_collections_MutableIterator (*iterator)(CatCode_multiplatform_kref_love_forte_catcode_Msgs thiz);
              CatCode_multiplatform_KInt (*lastIndexOf)(CatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, CatCode_multiplatform_kref_kotlin_CharSequence element);
              CatCode_multiplatform_kref_kotlin_collections_MutableListIterator (*listIterator)(CatCode_multiplatform_kref_love_forte_catcode_Msgs thiz);
              CatCode_multiplatform_kref_kotlin_collections_MutableListIterator (*listIterator_)(CatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, CatCode_multiplatform_KInt index);
              CatCode_multiplatform_kref_love_forte_catcode_Msgs (*plus)(CatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, CatCode_multiplatform_kref_kotlin_CharSequence other);
              CatCode_multiplatform_kref_love_forte_catcode_Msgs (*plus_)(CatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, CatCode_multiplatform_kref_kotlin_collections_List other);
              CatCode_multiplatform_KBoolean (*remove)(CatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, CatCode_multiplatform_kref_kotlin_CharSequence element);
              CatCode_multiplatform_KBoolean (*removeAll)(CatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, CatCode_multiplatform_kref_kotlin_collections_Collection elements);
              CatCode_multiplatform_kref_kotlin_CharSequence (*removeAt)(CatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, CatCode_multiplatform_KInt index);
              CatCode_multiplatform_KBoolean (*retainAll)(CatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, CatCode_multiplatform_kref_kotlin_collections_Collection elements);
              CatCode_multiplatform_kref_kotlin_CharSequence (*set)(CatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, CatCode_multiplatform_KInt index, CatCode_multiplatform_kref_kotlin_CharSequence element);
              CatCode_multiplatform_kref_kotlin_collections_MutableList (*subList)(CatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, CatCode_multiplatform_KInt fromIndex, CatCode_multiplatform_KInt toIndex);
              const char* (*toListString)(CatCode_multiplatform_kref_love_forte_catcode_Msgs thiz);
              const char* (*toString)(CatCode_multiplatform_kref_love_forte_catcode_Msgs thiz);
            } Msgs;
            struct {
              CatCode_multiplatform_KType* (*_type)(void);
              const char* (*get_type)(CatCode_multiplatform_kref_love_forte_catcode_MutableNeko thiz);
              void (*set_type)(CatCode_multiplatform_kref_love_forte_catcode_MutableNeko thiz, const char* set);
            } MutableNeko;
            struct {
              CatCode_multiplatform_KType* (*_type)(void);
              const char* (*get_codeType)(CatCode_multiplatform_kref_love_forte_catcode_MutableNoraNeko thiz);
              void (*set_codeType)(CatCode_multiplatform_kref_love_forte_catcode_MutableNoraNeko thiz, const char* set);
            } MutableNoraNeko;
            struct {
              CatCode_multiplatform_KType* (*_type)(void);
              const char* (*get_codeType)(CatCode_multiplatform_kref_love_forte_catcode_Neko thiz);
              const char* (*get_type)(CatCode_multiplatform_kref_love_forte_catcode_Neko thiz);
              const char* (*getNoDecode)(CatCode_multiplatform_kref_love_forte_catcode_Neko thiz, const char* key);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*immutable)(CatCode_multiplatform_kref_love_forte_catcode_Neko thiz);
              CatCode_multiplatform_kref_love_forte_catcode_MutableNeko (*mutable_)(CatCode_multiplatform_kref_love_forte_catcode_Neko thiz);
              CatCode_multiplatform_kref_love_forte_catcode_Msgs (*plus)(CatCode_multiplatform_kref_love_forte_catcode_Neko thiz, CatCode_multiplatform_kref_kotlin_CharSequence other);
              struct {
                CatCode_multiplatform_KType* (*_type)(void);
                CatCode_multiplatform_kref_love_forte_catcode_Neko_Of (*_instance)();
                CatCode_multiplatform_kref_love_forte_catcode_Neko (*of)(CatCode_multiplatform_kref_love_forte_catcode_Neko_Of thiz, const char* code);
                CatCode_multiplatform_kref_love_forte_catcode_Neko (*of_)(CatCode_multiplatform_kref_love_forte_catcode_Neko_Of thiz, const char* text, CatCode_multiplatform_KBoolean decode);
                CatCode_multiplatform_kref_love_forte_catcode_Neko (*ofType)(CatCode_multiplatform_kref_love_forte_catcode_Neko_Of thiz, const char* type);
              } Of;
            } Neko;
            struct {
              CatCode_multiplatform_KType* (*_type)(void);
              const char* (*get_catCodeHead)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz);
              const char* (*get_codeType)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz);
              CatCode_multiplatform_kref_love_forte_catcode_CodeTemplate (*get_nekoTemplate)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz);
              CatCode_multiplatform_kref_love_forte_catcode_CodeTemplate (*get_stringTemplate)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz);
              CatCode_multiplatform_KBoolean (*contains)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text, const char* type, CatCode_multiplatform_kref_kotlin_Array params);
              CatCode_multiplatform_KBoolean (*contains_)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text, const char* type, CatCode_multiplatform_KBoolean encode, CatCode_multiplatform_kref_kotlin_Array params);
              CatCode_multiplatform_KBoolean (*contains__)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text, const char* type, CatCode_multiplatform_KBoolean encode, CatCode_multiplatform_kref_kotlin_Array params);
              const char* (*getCat)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text, CatCode_multiplatform_KInt index);
              const char* (*getCat_)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text, const char* type, CatCode_multiplatform_KInt index);
              CatCode_multiplatform_kref_kotlin_collections_Iterator (*getCatIter)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text, const char* type);
              CatCode_multiplatform_kref_kotlin_collections_Iterator (*getCatKVIter)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* code);
              CatCode_multiplatform_kref_kotlin_collections_Iterator (*getCatKeyIter)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* code);
              CatCode_multiplatform_kref_kotlin_collections_Iterator (*getCatValueIter)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* code);
              CatCode_multiplatform_kref_kotlin_collections_List (*getCats)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text, const char* type);
              CatCode_multiplatform_kref_love_forte_catcode_LazyCodeBuilder (*getLazyNekoBuilder)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* type, CatCode_multiplatform_KBoolean encode);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*getNeko)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text, CatCode_multiplatform_KInt index);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*getNeko_)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text, const char* type, CatCode_multiplatform_KInt index);
              CatCode_multiplatform_kref_love_forte_catcode_CodeBuilder (*getNekoBuilder)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* type, CatCode_multiplatform_KBoolean encode);
              CatCode_multiplatform_kref_kotlin_collections_List (*getNekoList)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text, const char* type);
              CatCode_multiplatform_kref_kotlin_collections_List (*getNekoList_)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text, const char* type, CatCode_multiplatform_KBoolean decode);
              const char* (*getParam)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text, const char* paramKey, CatCode_multiplatform_KInt index);
              const char* (*getParam_)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text, const char* type, const char* paramKey, CatCode_multiplatform_KInt index);
              CatCode_multiplatform_kref_love_forte_catcode_CodeBuilder (*getStringCodeBuilder)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* type, CatCode_multiplatform_KBoolean encode);
              const char* (*remove)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text, CatCode_multiplatform_KBoolean trim, CatCode_multiplatform_KBoolean ignoreEmpty, CatCode_multiplatform_kref_kotlin_CharSequence delimiter);
              const char* (*removeByType)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text, const char* type, CatCode_multiplatform_KBoolean trim, CatCode_multiplatform_KBoolean ignoreEmpty, CatCode_multiplatform_kref_kotlin_CharSequence delimiter);
              CatCode_multiplatform_kref_kotlin_collections_List (*split)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text);
              const char* (*toCat)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* type);
              const char* (*toCat_)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* type, CatCode_multiplatform_KBoolean encode, CatCode_multiplatform_kref_kotlin_Array params);
              const char* (*toCat__)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* type, CatCode_multiplatform_KBoolean encode, CatCode_multiplatform_kref_kotlin_Array kv);
              const char* (*toCat___)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* type, CatCode_multiplatform_KBoolean encode, CatCode_multiplatform_kref_kotlin_collections_Map map);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*toNeko)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* type);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*toNeko_)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* type, CatCode_multiplatform_kref_kotlin_Array params);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*toNeko__)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* type, CatCode_multiplatform_KBoolean encode, CatCode_multiplatform_kref_kotlin_Array paramText);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*toNeko___)(CatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* type, CatCode_multiplatform_kref_kotlin_collections_Map params);
            } NekoAibo;
            struct {
              CatCode_multiplatform_KType* (*_type)(void);
              CatCode_multiplatform_kref_love_forte_catcode_NekoBuilder (*NekoBuilder)(const char* type);
              const char* (*get_type)(CatCode_multiplatform_kref_love_forte_catcode_NekoBuilder thiz);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*build)(CatCode_multiplatform_kref_love_forte_catcode_NekoBuilder thiz);
              CatCode_multiplatform_kref_love_forte_catcode_CodeBuilder_CodeBuilderKey (*key)(CatCode_multiplatform_kref_love_forte_catcode_NekoBuilder thiz, const char* key);
            } NekoBuilder;
            struct {
              CatCode_multiplatform_KType* (*_type)(void);
              CatCode_multiplatform_kref_love_forte_catcode_NekoTemplate (*_instance)();
              CatCode_multiplatform_kref_love_forte_catcode_NekoTemplate (*get_instance)(CatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*at)(CatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz, const char* code);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*atAll)(CatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*bface)(CatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz, const char* id);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*customMusic)(CatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz, const char* url, const char* audio, const char* title, const char* content, const char* image);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*dice)(CatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*dice_)(CatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz, const char* type);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*face)(CatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz, const char* id);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*image)(CatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz, const char* file, CatCode_multiplatform_KBoolean flash);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*music)(CatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz, const char* type, const char* id, const char* style);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*record)(CatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz, const char* file, CatCode_multiplatform_KBoolean magic);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*rps)(CatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*rps_)(CatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz, const char* type);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*sface)(CatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz, const char* id);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*shake)(CatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*share)(CatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz, const char* url, const char* title, const char* content, const char* image);
            } NekoTemplate;
            struct {
              CatCode_multiplatform_KType* (*_type)(void);
              const char* (*get_codeType)(CatCode_multiplatform_kref_love_forte_catcode_NoraNeko thiz);
            } NoraNeko;
            struct {
              CatCode_multiplatform_KType* (*_type)(void);
              CatCode_multiplatform_kref_love_forte_catcode_NoraNekoBuilder (*NoraNekoBuilder)(const char* codeType, const char* type);
              const char* (*get_codeType)(CatCode_multiplatform_kref_love_forte_catcode_NoraNekoBuilder thiz);
              const char* (*get_type)(CatCode_multiplatform_kref_love_forte_catcode_NoraNekoBuilder thiz);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*build)(CatCode_multiplatform_kref_love_forte_catcode_NoraNekoBuilder thiz);
              CatCode_multiplatform_kref_love_forte_catcode_WildcatCodeBuilder_WildcatCodeBuilderKey (*key)(CatCode_multiplatform_kref_love_forte_catcode_NoraNekoBuilder thiz, const char* key);
            } NoraNekoBuilder;
            struct {
              CatCode_multiplatform_KType* (*_type)(void);
              CatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate (*NoraNekoTemplate)(const char* codeType, CatCode_multiplatform_kref_love_forte_catcode_WildcatTemplate wildcatStringTemplate);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*at)(CatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, CatCode_multiplatform_KLong code);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*at_)(CatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, const char* code);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*atAll)(CatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*bface)(CatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, CatCode_multiplatform_KLong id);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*bface_)(CatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, const char* id);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*customMusic)(CatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, const char* url, const char* audio, const char* title);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*customMusic_)(CatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, const char* url, const char* audio, const char* title, const char* content, const char* image);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*dice)(CatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*dice_)(CatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, CatCode_multiplatform_KInt type);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*dice__)(CatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, const char* type);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*face)(CatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, CatCode_multiplatform_KLong id);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*face_)(CatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, const char* id);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*image)(CatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, const char* file);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*image_)(CatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, const char* file, CatCode_multiplatform_KBoolean flash);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*music)(CatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, const char* type, const char* id, const char* style);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*record)(CatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, const char* file);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*record_)(CatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, const char* file, CatCode_multiplatform_KBoolean magic);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*rps)(CatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*rps_)(CatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, CatCode_multiplatform_KInt type);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*rps__)(CatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, const char* type);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*sface)(CatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, CatCode_multiplatform_KLong id);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*sface_)(CatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, const char* id);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*shake)(CatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*share)(CatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, const char* url, const char* title);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*share_)(CatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, const char* url, const char* title, const char* content, const char* image);
            } NoraNekoTemplate;
            struct {
              CatCode_multiplatform_KType* (*_type)(void);
              CatCode_multiplatform_kref_love_forte_catcode_StringCodeBuilder (*StringCodeBuilder)(const char* type, CatCode_multiplatform_KBoolean encode);
              const char* (*get_type)(CatCode_multiplatform_kref_love_forte_catcode_StringCodeBuilder thiz);
              const char* (*build)(CatCode_multiplatform_kref_love_forte_catcode_StringCodeBuilder thiz);
              CatCode_multiplatform_kref_love_forte_catcode_CodeBuilder_CodeBuilderKey (*key)(CatCode_multiplatform_kref_love_forte_catcode_StringCodeBuilder thiz, const char* key);
            } StringCodeBuilder;
            struct {
              CatCode_multiplatform_KType* (*_type)(void);
              CatCode_multiplatform_kref_love_forte_catcode_StringTemplate (*_instance)();
              CatCode_multiplatform_kref_love_forte_catcode_StringTemplate (*get_instance)(CatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz);
              const char* (*at)(CatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz, const char* code);
              const char* (*atAll)(CatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz);
              const char* (*bface)(CatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz, const char* id);
              const char* (*customMusic)(CatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz, const char* url, const char* audio, const char* title, const char* content, const char* image);
              const char* (*dice)(CatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz);
              const char* (*dice_)(CatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz, const char* type);
              const char* (*face)(CatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz, const char* id);
              const char* (*image)(CatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz, const char* file, CatCode_multiplatform_KBoolean flash);
              const char* (*music)(CatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz, const char* type, const char* id, const char* style);
              const char* (*record)(CatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz, const char* file, CatCode_multiplatform_KBoolean magic);
              const char* (*rps)(CatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz);
              const char* (*rps_)(CatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz, const char* type);
              const char* (*sface)(CatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz, const char* id);
              const char* (*shake)(CatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz);
              const char* (*share)(CatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz, const char* url, const char* title, const char* content, const char* image);
            } StringTemplate;
            struct {
              CatCode_multiplatform_KType* (*_type)(void);
              CatCode_multiplatform_kref_love_forte_catcode_WildcatTemplate (*get_nekoTemplate)(CatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil thiz);
              CatCode_multiplatform_kref_love_forte_catcode_WildcatTemplate (*get_stringTemplate)(CatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil thiz);
              CatCode_multiplatform_kref_love_forte_catcode_LazyCodeBuilder (*getLazyNekoBuilder)(CatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil thiz, const char* type, CatCode_multiplatform_KBoolean encode);
              CatCode_multiplatform_kref_love_forte_catcode_Neko (*getNeko)(CatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil thiz, const char* text, const char* type, CatCode_multiplatform_KInt index);
              CatCode_multiplatform_kref_love_forte_catcode_CodeBuilder (*getNekoBuilder)(CatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil thiz, const char* type, CatCode_multiplatform_KBoolean encode);
              CatCode_multiplatform_kref_love_forte_catcode_CodeBuilder (*getStringCodeBuilder)(CatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil thiz, const char* type, CatCode_multiplatform_KBoolean encode);
              CatCode_multiplatform_kref_love_forte_catcode_NoraNeko (*toNeko)(CatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil thiz, const char* type);
              CatCode_multiplatform_kref_love_forte_catcode_NoraNeko (*toNeko_)(CatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil thiz, const char* type, CatCode_multiplatform_kref_kotlin_Array kv);
              CatCode_multiplatform_kref_love_forte_catcode_NoraNeko (*toNeko__)(CatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil thiz, const char* type, CatCode_multiplatform_KBoolean encode, CatCode_multiplatform_kref_kotlin_Array paramText);
              CatCode_multiplatform_kref_love_forte_catcode_NoraNeko (*toNeko___)(CatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil thiz, const char* type, CatCode_multiplatform_kref_kotlin_collections_Map params);
              struct {
                CatCode_multiplatform_KType* (*_type)(void);
                CatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil_Companion (*_instance)();
                CatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil (*getInstance)(CatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil_Companion thiz, const char* codeType);
              } Companion;
            } WildcatCodeUtil;
            struct {
              CatCode_multiplatform_KType* (*_type)(void);
              CatCode_multiplatform_kref_love_forte_catcode_WildcatStringCodeBuilder (*WildcatStringCodeBuilder)(const char* codeType, const char* type, CatCode_multiplatform_KBoolean encode);
              const char* (*get_codeType)(CatCode_multiplatform_kref_love_forte_catcode_WildcatStringCodeBuilder thiz);
              const char* (*get_type)(CatCode_multiplatform_kref_love_forte_catcode_WildcatStringCodeBuilder thiz);
              const char* (*build)(CatCode_multiplatform_kref_love_forte_catcode_WildcatStringCodeBuilder thiz);
              CatCode_multiplatform_kref_love_forte_catcode_WildcatCodeBuilder_WildcatCodeBuilderKey (*key)(CatCode_multiplatform_kref_love_forte_catcode_WildcatStringCodeBuilder thiz, const char* key);
            } WildcatStringCodeBuilder;
            struct {
              CatCode_multiplatform_KType* (*_type)(void);
              CatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate (*WildcatStringTemplate)(const char* codeType, CatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil utilInstance);
              const char* (*at)(CatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, CatCode_multiplatform_KLong code);
              const char* (*at_)(CatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* code);
              const char* (*atAll)(CatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz);
              const char* (*bface)(CatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, CatCode_multiplatform_KLong id);
              const char* (*bface_)(CatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* id);
              const char* (*customMusic)(CatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* url, const char* audio, const char* title);
              const char* (*customMusic_)(CatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* url, const char* audio, const char* title, const char* content, const char* image);
              const char* (*dice)(CatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz);
              const char* (*dice_)(CatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, CatCode_multiplatform_KInt type);
              const char* (*dice__)(CatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* type);
              const char* (*face)(CatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, CatCode_multiplatform_KLong id);
              const char* (*face_)(CatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* id);
              const char* (*image)(CatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* file);
              const char* (*image_)(CatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* file, CatCode_multiplatform_KBoolean flash);
              const char* (*music)(CatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* type, const char* id);
              const char* (*music_)(CatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* type, const char* id, const char* style);
              const char* (*record)(CatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* file);
              const char* (*record_)(CatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* file, CatCode_multiplatform_KBoolean magic);
              const char* (*rps)(CatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz);
              const char* (*rps_)(CatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, CatCode_multiplatform_KInt type);
              const char* (*rps__)(CatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* type);
              const char* (*sface)(CatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, CatCode_multiplatform_KLong id);
              const char* (*sface_)(CatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* id);
              const char* (*shake)(CatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz);
              const char* (*share)(CatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* url, const char* title);
              const char* (*share_)(CatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* url, const char* title, const char* content, const char* image);
            } WildcatStringTemplate;
            struct {
              struct {
                CatCode_multiplatform_KType* (*_type)(void);
                CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko (*LazyMapNeko)(const char* type);
                CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko (*LazyMapNeko_)(const char* type, CatCode_multiplatform_kref_kotlin_collections_Map params);
                CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko (*LazyMapNeko__)(const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko (*LazyMapNeko___)(const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko (*LazyMapNeko____)(CatCode_multiplatform_kref_love_forte_catcode_collection_LazyMap params, const char* type);
                CatCode_multiplatform_kref_kotlin_collections_Set (*get_entries)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz);
                CatCode_multiplatform_kref_kotlin_collections_Set (*get_keys)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz);
                CatCode_multiplatform_KInt (*get_length)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz);
                CatCode_multiplatform_KInt (*get_size)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz);
                const char* (*get_type)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz);
                void (*set_type)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz, const char* set);
                CatCode_multiplatform_kref_kotlin_collections_Collection (*get_values)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz);
                CatCode_multiplatform_KBoolean (*containsKey)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz, const char* key);
                CatCode_multiplatform_KBoolean (*containsValue)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz, const char* value);
                CatCode_multiplatform_KBoolean (*equals)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz, CatCode_multiplatform_kref_kotlin_Any other);
                CatCode_multiplatform_KChar (*get)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz, CatCode_multiplatform_KInt index);
                const char* (*get_)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz, const char* key);
                const char* (*getNoDecode)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz, const char* key);
                const char* (*getOrDefault)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz, const char* key, const char* defaultValue);
                CatCode_multiplatform_KInt (*hashCode)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz);
                CatCode_multiplatform_kref_love_forte_catcode_Neko (*immutable)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz);
                CatCode_multiplatform_KBoolean (*isEmpty)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz);
                CatCode_multiplatform_kref_love_forte_catcode_MutableNeko (*mutable_)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz);
                CatCode_multiplatform_kref_kotlin_CharSequence (*subSequence)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz, CatCode_multiplatform_KInt startIndex, CatCode_multiplatform_KInt endIndex);
                CatCode_multiplatform_kref_kotlin_collections_Map (*toMap)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz);
                const char* (*toString)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz);
                struct {
                  CatCode_multiplatform_KType* (*_type)(void);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko_Of (*_instance)();
                  CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko (*byCode)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko_Of thiz, const char* code, CatCode_multiplatform_KBoolean decode);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko (*byKV)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko_Of thiz, const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko (*byLazyMap)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko_Of thiz, const char* type, CatCode_multiplatform_kref_love_forte_catcode_collection_LazyMap params);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko (*byMap)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko_Of thiz, const char* type, CatCode_multiplatform_kref_kotlin_collections_Map params);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko (*byParamString)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko_Of thiz, const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko (*mutableByCode)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko_Of thiz, const char* code, CatCode_multiplatform_KBoolean decode);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko (*mutableByKV)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko_Of thiz, const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko (*mutableByMap)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko_Of thiz, const char* type, CatCode_multiplatform_kref_kotlin_collections_Map params);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko (*mutableByParamString)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko_Of thiz, const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                } Of;
              } LazyMapNeko;
              struct {
                CatCode_multiplatform_KType* (*_type)(void);
                CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko (*LazyMapNoraNeko)(const char* codeType, const char* type);
                CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko (*LazyMapNoraNeko_)(const char* codeType, const char* type, CatCode_multiplatform_kref_kotlin_collections_Map params);
                CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko (*LazyMapNoraNeko__)(const char* codeType, const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko (*LazyMapNoraNeko___)(const char* codeType, const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko (*LazyMapNoraNeko____)(const char* codeType, CatCode_multiplatform_kref_love_forte_catcode_collection_LazyMap params, const char* type);
                const char* (*get_codeType)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz);
                CatCode_multiplatform_kref_kotlin_collections_Set (*get_entries)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz);
                CatCode_multiplatform_kref_kotlin_collections_Set (*get_keys)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz);
                CatCode_multiplatform_KInt (*get_length)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz);
                CatCode_multiplatform_KInt (*get_size)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz);
                const char* (*get_type)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz);
                void (*set_type)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz, const char* set);
                CatCode_multiplatform_kref_kotlin_collections_Collection (*get_values)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz);
                CatCode_multiplatform_KBoolean (*containsKey)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz, const char* key);
                CatCode_multiplatform_KBoolean (*containsValue)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz, const char* value);
                CatCode_multiplatform_KBoolean (*equals)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz, CatCode_multiplatform_kref_kotlin_Any other);
                CatCode_multiplatform_KChar (*get)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz, CatCode_multiplatform_KInt index);
                const char* (*get_)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz, const char* key);
                const char* (*getNoDecode)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz, const char* key);
                const char* (*getOrDefault)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz, const char* key, const char* defaultValue);
                CatCode_multiplatform_KInt (*hashCode)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz);
                CatCode_multiplatform_kref_love_forte_catcode_Neko (*immutable)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz);
                CatCode_multiplatform_KBoolean (*isEmpty)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz);
                CatCode_multiplatform_kref_love_forte_catcode_MutableNeko (*mutable_)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz);
                CatCode_multiplatform_kref_kotlin_CharSequence (*subSequence)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz, CatCode_multiplatform_KInt startIndex, CatCode_multiplatform_KInt endIndex);
                CatCode_multiplatform_kref_kotlin_collections_Map (*toMap)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz);
                const char* (*toString)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz);
                struct {
                  CatCode_multiplatform_KType* (*_type)(void);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko_Of (*_instance)();
                  CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko (*byCode)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* code, CatCode_multiplatform_KBoolean decode);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko (*byKV)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko (*byMap)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* type, CatCode_multiplatform_kref_kotlin_collections_Map params);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko (*byParamString)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko (*mutableByCode)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* code, CatCode_multiplatform_KBoolean decode);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko (*mutableByKV)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko (*mutableByMap)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* type, CatCode_multiplatform_kref_kotlin_collections_Map params);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko (*mutableByParamString)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                } Of;
              } LazyMapNoraNeko;
              struct {
                CatCode_multiplatform_KType* (*_type)(void);
                CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko (*LazyMutableMapNeko)(const char* type);
                CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko (*LazyMutableMapNeko_)(const char* type, CatCode_multiplatform_kref_kotlin_collections_Map params);
                CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko (*LazyMutableMapNeko__)(const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko (*LazyMutableMapNeko___)(const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                CatCode_multiplatform_kref_kotlin_collections_MutableSet (*get_entries)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz);
                CatCode_multiplatform_kref_kotlin_collections_MutableSet (*get_keys)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz);
                CatCode_multiplatform_KInt (*get_size)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz);
                CatCode_multiplatform_kref_kotlin_collections_MutableCollection (*get_values)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz);
                void (*clear)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz);
                CatCode_multiplatform_KBoolean (*containsKey)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz, const char* key);
                CatCode_multiplatform_KBoolean (*containsValue)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz, const char* value);
                const char* (*get)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz, const char* key);
                CatCode_multiplatform_kref_love_forte_catcode_Neko (*immutable)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz);
                CatCode_multiplatform_KBoolean (*isEmpty)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz);
                CatCode_multiplatform_kref_love_forte_catcode_MutableNeko (*mutable_)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz);
                const char* (*put)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz, const char* key, const char* value);
                void (*putAll)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz, CatCode_multiplatform_kref_kotlin_collections_Map from);
                const char* (*remove)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz, const char* key);
                CatCode_multiplatform_kref_kotlin_collections_MutableMap (*toMap)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz);
                const char* (*toString)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz);
              } LazyMutableMapNeko;
              struct {
                CatCode_multiplatform_KType* (*_type)(void);
                CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko (*LazyMutableMapNoraNeko)(const char* codeType, const char* type);
                CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko (*LazyMutableMapNoraNeko_)(const char* codeType, const char* type, CatCode_multiplatform_kref_kotlin_collections_Map params);
                CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko (*LazyMutableMapNoraNeko__)(const char* codeType, const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko (*LazyMutableMapNoraNeko___)(const char* codeType, const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                CatCode_multiplatform_kref_kotlin_collections_MutableSet (*get_entries)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz);
                CatCode_multiplatform_kref_kotlin_collections_MutableSet (*get_keys)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz);
                CatCode_multiplatform_kref_love_forte_catcode_collection_MutableLazyMap (*get_params)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz);
                CatCode_multiplatform_KInt (*get_size)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz);
                CatCode_multiplatform_kref_kotlin_collections_MutableCollection (*get_values)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz);
                void (*clear)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz);
                CatCode_multiplatform_KBoolean (*containsKey)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz, const char* key);
                CatCode_multiplatform_KBoolean (*containsValue)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz, const char* value);
                const char* (*get)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz, const char* key);
                CatCode_multiplatform_kref_love_forte_catcode_Neko (*immutable)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz);
                CatCode_multiplatform_KBoolean (*isEmpty)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz);
                CatCode_multiplatform_kref_love_forte_catcode_MutableNeko (*mutable_)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz);
                const char* (*put)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz, const char* key, const char* value);
                void (*putAll)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz, CatCode_multiplatform_kref_kotlin_collections_Map from);
                const char* (*remove)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz, const char* key);
                CatCode_multiplatform_kref_kotlin_collections_MutableMap (*toMap)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz);
                const char* (*toString)(CatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz);
              } LazyMutableMapNoraNeko;
              struct {
                CatCode_multiplatform_KType* (*_type)(void);
                CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko (*MapNeko)(const char* type);
                CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko (*MapNeko_)(const char* type, CatCode_multiplatform_kref_kotlin_collections_Map params);
                CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko (*MapNeko__)(const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko (*MapNeko___)(const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko (*MapNeko____)(CatCode_multiplatform_kref_kotlin_collections_Map params, const char* type);
                CatCode_multiplatform_kref_kotlin_collections_Set (*get_entries)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz);
                CatCode_multiplatform_kref_kotlin_collections_Set (*get_keys)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz);
                CatCode_multiplatform_KInt (*get_length)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz);
                CatCode_multiplatform_kref_kotlin_collections_Map (*get_params)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz);
                CatCode_multiplatform_KInt (*get_size)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz);
                const char* (*get_type)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz);
                void (*set_type)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz, const char* set);
                CatCode_multiplatform_kref_kotlin_collections_Collection (*get_values)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz);
                CatCode_multiplatform_KBoolean (*containsKey)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz, const char* key);
                CatCode_multiplatform_KBoolean (*containsValue)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz, const char* value);
                CatCode_multiplatform_KBoolean (*equals)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz, CatCode_multiplatform_kref_kotlin_Any other);
                CatCode_multiplatform_KChar (*get)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz, CatCode_multiplatform_KInt index);
                const char* (*get_)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz, const char* key);
                const char* (*getNoDecode)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz, const char* key);
                const char* (*getOrDefault)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz, const char* key, const char* defaultValue);
                CatCode_multiplatform_KInt (*hashCode)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz);
                CatCode_multiplatform_kref_love_forte_catcode_Neko (*immutable)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz);
                CatCode_multiplatform_KBoolean (*isEmpty)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz);
                CatCode_multiplatform_kref_love_forte_catcode_MutableNeko (*mutable_)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz);
                CatCode_multiplatform_kref_kotlin_CharSequence (*subSequence)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz, CatCode_multiplatform_KInt startIndex, CatCode_multiplatform_KInt endIndex);
                CatCode_multiplatform_kref_kotlin_collections_Map (*toMap)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz);
                const char* (*toString)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz);
                struct {
                  CatCode_multiplatform_KType* (*_type)(void);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko_Of (*_instance)();
                  CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko (*byCode)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko_Of thiz, const char* code, CatCode_multiplatform_KBoolean decode);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko (*byKV)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko_Of thiz, const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko (*byMap)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko_Of thiz, const char* type, CatCode_multiplatform_kref_kotlin_collections_Map params);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko (*byParamString)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko_Of thiz, const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko (*mutableByCode)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko_Of thiz, const char* code, CatCode_multiplatform_KBoolean decode);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko (*mutableByKV)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko_Of thiz, const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko (*mutableByMap)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko_Of thiz, const char* type, CatCode_multiplatform_kref_kotlin_collections_Map params);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko (*mutableByParamString)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko_Of thiz, const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                } Of;
              } MapNeko;
              struct {
                CatCode_multiplatform_KType* (*_type)(void);
                CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko (*MapNoraNeko)(const char* codeType, const char* type);
                CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko (*MapNoraNeko_)(const char* codeType, const char* type, CatCode_multiplatform_kref_kotlin_collections_Map params);
                CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko (*MapNoraNeko__)(const char* codeType, const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko (*MapNoraNeko___)(const char* codeType, const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko (*MapNoraNeko____)(const char* codeType, CatCode_multiplatform_kref_kotlin_collections_Map params, const char* type);
                const char* (*get_codeType)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz);
                CatCode_multiplatform_kref_kotlin_collections_Set (*get_entries)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz);
                CatCode_multiplatform_kref_kotlin_collections_Set (*get_keys)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz);
                CatCode_multiplatform_KInt (*get_length)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz);
                CatCode_multiplatform_kref_kotlin_collections_Map (*get_params)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz);
                CatCode_multiplatform_KInt (*get_size)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz);
                const char* (*get_type)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz);
                void (*set_type)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz, const char* set);
                CatCode_multiplatform_kref_kotlin_collections_Collection (*get_values)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz);
                CatCode_multiplatform_KBoolean (*containsKey)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz, const char* key);
                CatCode_multiplatform_KBoolean (*containsValue)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz, const char* value);
                CatCode_multiplatform_KBoolean (*equals)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz, CatCode_multiplatform_kref_kotlin_Any other);
                CatCode_multiplatform_KChar (*get)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz, CatCode_multiplatform_KInt index);
                const char* (*get_)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz, const char* key);
                const char* (*getNoDecode)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz, const char* key);
                const char* (*getOrDefault)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz, const char* key, const char* defaultValue);
                CatCode_multiplatform_KInt (*hashCode)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz);
                CatCode_multiplatform_kref_love_forte_catcode_Neko (*immutable)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz);
                CatCode_multiplatform_KBoolean (*isEmpty)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz);
                CatCode_multiplatform_kref_love_forte_catcode_MutableNeko (*mutable_)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz);
                CatCode_multiplatform_kref_kotlin_CharSequence (*subSequence)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz, CatCode_multiplatform_KInt startIndex, CatCode_multiplatform_KInt endIndex);
                CatCode_multiplatform_kref_kotlin_collections_Map (*toMap)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz);
                const char* (*toString)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz);
                struct {
                  CatCode_multiplatform_KType* (*_type)(void);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko_Of (*_instance)();
                  CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko (*byCode)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* code, CatCode_multiplatform_KBoolean decode);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko (*byKV)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko (*byMap)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* type, CatCode_multiplatform_kref_kotlin_collections_Map params);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko (*byParamString)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko (*mutableByCode)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* code, CatCode_multiplatform_KBoolean decode);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko (*mutableByKV)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko (*mutableByMap)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* type, CatCode_multiplatform_kref_kotlin_collections_Map params);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko (*mutableByParamString)(CatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                } Of;
              } MapNoraNeko;
              struct {
                CatCode_multiplatform_KType* (*_type)(void);
                CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko (*MutableMapNeko)(const char* type);
                CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko (*MutableMapNeko_)(const char* type, CatCode_multiplatform_kref_kotlin_collections_Map params);
                CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko (*MutableMapNeko__)(const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko (*MutableMapNeko___)(const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                CatCode_multiplatform_kref_kotlin_collections_MutableSet (*get_entries)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz);
                CatCode_multiplatform_kref_kotlin_collections_MutableSet (*get_keys)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz);
                CatCode_multiplatform_kref_kotlin_collections_MutableMap (*get_params)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz);
                CatCode_multiplatform_KInt (*get_size)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz);
                CatCode_multiplatform_kref_kotlin_collections_MutableCollection (*get_values)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz);
                void (*clear)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz);
                CatCode_multiplatform_KBoolean (*containsKey)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz, const char* key);
                CatCode_multiplatform_KBoolean (*containsValue)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz, const char* value);
                const char* (*get)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz, const char* key);
                CatCode_multiplatform_kref_love_forte_catcode_Neko (*immutable)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz);
                CatCode_multiplatform_KBoolean (*isEmpty)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz);
                CatCode_multiplatform_kref_love_forte_catcode_MutableNeko (*mutable_)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz);
                const char* (*put)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz, const char* key, const char* value);
                void (*putAll)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz, CatCode_multiplatform_kref_kotlin_collections_Map from);
                const char* (*remove)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz, const char* key);
                CatCode_multiplatform_kref_kotlin_collections_MutableMap (*toMap)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz);
                const char* (*toString)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz);
              } MutableMapNeko;
              struct {
                CatCode_multiplatform_KType* (*_type)(void);
                CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko (*MutableMapNoraNeko)(const char* codeType, const char* type);
                CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko (*MutableMapNoraNeko_)(const char* codeType, const char* type, CatCode_multiplatform_kref_kotlin_collections_Map params);
                CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko (*MutableMapNoraNeko__)(const char* codeType, const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko (*MutableMapNoraNeko___)(const char* codeType, const char* type, CatCode_multiplatform_kref_kotlin_Array params);
                CatCode_multiplatform_kref_kotlin_collections_MutableSet (*get_entries)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz);
                CatCode_multiplatform_kref_kotlin_collections_MutableSet (*get_keys)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz);
                CatCode_multiplatform_kref_kotlin_collections_MutableMap (*get_params)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz);
                CatCode_multiplatform_KInt (*get_size)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz);
                CatCode_multiplatform_kref_kotlin_collections_MutableCollection (*get_values)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz);
                void (*clear)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz);
                CatCode_multiplatform_KBoolean (*containsKey)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz, const char* key);
                CatCode_multiplatform_KBoolean (*containsValue)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz, const char* value);
                const char* (*get)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz, const char* key);
                CatCode_multiplatform_kref_love_forte_catcode_Neko (*immutable)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz);
                CatCode_multiplatform_KBoolean (*isEmpty)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz);
                CatCode_multiplatform_kref_love_forte_catcode_MutableNeko (*mutable_)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz);
                const char* (*put)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz, const char* key, const char* value);
                void (*putAll)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz, CatCode_multiplatform_kref_kotlin_collections_Map from);
                const char* (*remove)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz, const char* key);
                CatCode_multiplatform_kref_kotlin_collections_MutableMap (*toMap)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz);
                const char* (*toString)(CatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz);
              } MutableMapNoraNeko;
              struct {
                CatCode_multiplatform_KType* (*_type)(void);
                const char* (*get_codeType)(CatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz);
                CatCode_multiplatform_kref_kotlin_collections_Set (*get_entries)(CatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz);
                CatCode_multiplatform_kref_kotlin_collections_Set (*get_keys)(CatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz);
                CatCode_multiplatform_KInt (*get_length)(CatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz);
                CatCode_multiplatform_KInt (*get_size)(CatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz);
                const char* (*get_type)(CatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz);
                CatCode_multiplatform_kref_kotlin_collections_Collection (*get_values)(CatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz);
                CatCode_multiplatform_KBoolean (*containsKey)(CatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz, const char* key);
                CatCode_multiplatform_KBoolean (*containsValue)(CatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz, const char* value);
                CatCode_multiplatform_KBoolean (*equals)(CatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz, CatCode_multiplatform_kref_kotlin_Any other);
                CatCode_multiplatform_KChar (*get)(CatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz, CatCode_multiplatform_KInt index);
                const char* (*get_)(CatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz, const char* key);
                const char* (*getNoDecode)(CatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz, const char* key);
                CatCode_multiplatform_KInt (*hashCode)(CatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz);
                CatCode_multiplatform_kref_love_forte_catcode_Neko (*immutable)(CatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz);
                CatCode_multiplatform_KBoolean (*isEmpty)(CatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz);
                CatCode_multiplatform_kref_love_forte_catcode_MutableNeko (*mutable_)(CatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz);
                CatCode_multiplatform_kref_kotlin_CharSequence (*subSequence)(CatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz, CatCode_multiplatform_KInt startIndex, CatCode_multiplatform_KInt endIndex);
                CatCode_multiplatform_kref_kotlin_collections_Map (*toMap)(CatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz);
                const char* (*toString)(CatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz);
                struct {
                  CatCode_multiplatform_KType* (*_type)(void);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko_Of (*_instance)();
                  CatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko (*byCode)(CatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko_Of thiz, const char* code);
                } Of;
              } NoraNyanko;
              struct {
                CatCode_multiplatform_KType* (*_type)(void);
                CatCode_multiplatform_kref_kotlin_collections_Set (*get_entries)(CatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz);
                CatCode_multiplatform_kref_kotlin_collections_Set (*get_keys)(CatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz);
                CatCode_multiplatform_KInt (*get_length)(CatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz);
                CatCode_multiplatform_KInt (*get_size)(CatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz);
                const char* (*get_type)(CatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz);
                CatCode_multiplatform_kref_kotlin_collections_Collection (*get_values)(CatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz);
                CatCode_multiplatform_KBoolean (*containsKey)(CatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz, const char* key);
                CatCode_multiplatform_KBoolean (*containsValue)(CatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz, const char* value);
                CatCode_multiplatform_KBoolean (*equals)(CatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz, CatCode_multiplatform_kref_kotlin_Any other);
                CatCode_multiplatform_KChar (*get)(CatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz, CatCode_multiplatform_KInt index);
                const char* (*get_)(CatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz, const char* key);
                const char* (*getNoDecode)(CatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz, const char* key);
                CatCode_multiplatform_KInt (*hashCode)(CatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz);
                CatCode_multiplatform_kref_love_forte_catcode_Neko (*immutable)(CatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz);
                CatCode_multiplatform_KBoolean (*isEmpty)(CatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz);
                CatCode_multiplatform_kref_love_forte_catcode_MutableNeko (*mutable_)(CatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz);
                CatCode_multiplatform_kref_kotlin_CharSequence (*subSequence)(CatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz, CatCode_multiplatform_KInt startIndex, CatCode_multiplatform_KInt endIndex);
                CatCode_multiplatform_kref_kotlin_collections_Map (*toMap)(CatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz);
                const char* (*toString)(CatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz);
                struct {
                  CatCode_multiplatform_KType* (*_type)(void);
                  CatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko_Of (*_instance)();
                  CatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko (*byCode)(CatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko_Of thiz, const char* code);
                } Of;
              } Nyanko;
            } codes;
            struct {
            } collection;
          } catcode;
        } forte;
      } love;
    } root;
  } kotlin;
} CatCode_multiplatform_ExportedSymbols;
extern CatCode_multiplatform_ExportedSymbols* CatCode_multiplatform_symbols(void);
#ifdef __cplusplus
}  /* extern "C" */
#endif
#endif  /* KONAN_CATCODE_MULTIPLATFORM_H */
