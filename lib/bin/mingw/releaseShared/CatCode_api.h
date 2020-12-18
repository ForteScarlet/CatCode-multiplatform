#ifndef KONAN_CATCODE_H
#define KONAN_CATCODE_H
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
typedef bool            CatCode_KBoolean;
#else
typedef _Bool           CatCode_KBoolean;
#endif
typedef unsigned short     CatCode_KChar;
typedef signed char        CatCode_KByte;
typedef short              CatCode_KShort;
typedef int                CatCode_KInt;
typedef long long          CatCode_KLong;
typedef unsigned char      CatCode_KUByte;
typedef unsigned short     CatCode_KUShort;
typedef unsigned int       CatCode_KUInt;
typedef unsigned long long CatCode_KULong;
typedef float              CatCode_KFloat;
typedef double             CatCode_KDouble;
#ifndef _MSC_VER
typedef float __attribute__ ((__vector_size__ (16))) CatCode_KVector128;
#else
#include <xmmintrin.h>
typedef __m128 CatCode_KVector128;
#endif
typedef void*              CatCode_KNativePtr;
struct CatCode_KType;
typedef struct CatCode_KType CatCode_KType;

typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_kotlin_Byte;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_kotlin_Short;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_kotlin_Int;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_kotlin_Long;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_kotlin_Float;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_kotlin_Double;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_kotlin_Char;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_kotlin_Boolean;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_kotlin_Unit;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_Neko;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_kotlin_text_Regex;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_BaseMutableNoraNeko;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_CatCodeUtil;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_CodeTemplate;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_LazyCodeBuilder;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_CodeBuilder;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_CatDecoder;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_CatEncoder;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_EmptyNeko;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_kotlin_collections_Set;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_kotlin_collections_Collection;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_kotlin_Any;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_MutableNeko;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_kotlin_CharSequence;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_kotlin_collections_Map;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_EmptyNoraNeko;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_LazyNekoBuilder;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_kotlin_LazyThreadSafetyMode;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_LazyCodeBuilder_LazyCodeBuilderKey;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_LazyNoraNekoBuilder;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_LazyWildcatCodeBuilder_LazyWildcatCodeBuilderKey;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_Msgs;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_kotlin_Function0;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_kotlin_collections_MutableIterator;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_kotlin_collections_MutableListIterator;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_kotlin_collections_List;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_kotlin_collections_MutableList;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_MutableNoraNeko;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_Neko_Of;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_NekoAibo;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_kotlin_Array;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_kotlin_collections_Iterator;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_NekoBuilder;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_CodeBuilder_CodeBuilderKey;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_NekoTemplate;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_NoraNeko;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_NoraNekoBuilder;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_WildcatCodeBuilder_WildcatCodeBuilderKey;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_NoraNekoTemplate;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_WildcatTemplate;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_StringCodeBuilder;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_StringTemplate;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_WildcatCodeUtil;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_WildcatCodeUtil_Companion;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_WildcatStringCodeBuilder;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_WildcatStringTemplate;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_codes_LazyMapNeko;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_collection_LazyMap;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_codes_LazyMapNeko_Of;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_codes_MapNeko;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_codes_MutableMapNeko;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_codes_LazyMapNoraNeko;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_codes_LazyMapNoraNeko_Of;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_codes_MutableMapNoraNeko;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_codes_LazyMutableMapNeko;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_kotlin_collections_MutableSet;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_kotlin_collections_MutableCollection;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_kotlin_collections_MutableMap;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_codes_LazyMutableMapNoraNeko;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_collection_MutableLazyMap;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_codes_MapNeko_Of;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_codes_MapNoraNeko;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_codes_MapNoraNeko_Of;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_codes_NoraNyanko;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_codes_NoraNyanko_Of;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_codes_Nyanko;
typedef struct {
  CatCode_KNativePtr pinned;
} CatCode_kref_catcode_codes_Nyanko_Of;


typedef struct {
  /* Service functions. */
  void (*DisposeStablePointer)(CatCode_KNativePtr ptr);
  void (*DisposeString)(const char* string);
  CatCode_KBoolean (*IsInstance)(CatCode_KNativePtr ref, const CatCode_KType* type);
  CatCode_kref_kotlin_Byte (*createNullableByte)(CatCode_KByte);
  CatCode_kref_kotlin_Short (*createNullableShort)(CatCode_KShort);
  CatCode_kref_kotlin_Int (*createNullableInt)(CatCode_KInt);
  CatCode_kref_kotlin_Long (*createNullableLong)(CatCode_KLong);
  CatCode_kref_kotlin_Float (*createNullableFloat)(CatCode_KFloat);
  CatCode_kref_kotlin_Double (*createNullableDouble)(CatCode_KDouble);
  CatCode_kref_kotlin_Char (*createNullableChar)(CatCode_KChar);
  CatCode_kref_kotlin_Boolean (*createNullableBoolean)(CatCode_KBoolean);
  CatCode_kref_kotlin_Unit (*createNullableUnit)(void);

  /* User functions. */
  struct {
    struct {
      struct {
        const char* (*get_CAT_END)();
        const char* (*get_CAT_HEAD)();
        const char* (*get_CAT_KV)();
        const char* (*get_CAT_PS)();
        const char* (*get_CAT_TYPE)();
        CatCode_kref_catcode_Neko (*get_NekoAtAll)();
        CatCode_kref_catcode_Neko (*get_NekoDice)();
        CatCode_kref_catcode_Neko (*get_NekoRps)();
        CatCode_kref_catcode_Neko (*get_NekoShake)();
        CatCode_kref_kotlin_text_Regex (*get_nekoMatchRegex)();
        const char* (*catHead)(const char* codeType);
        const char* (*deCatParam)(const char* thiz);
        const char* (*deCatText)(const char* thiz);
        const char* (*enCatParam)(const char* thiz);
        const char* (*enCatText)(const char* thiz);
        struct {
          CatCode_KType* (*_type)(void);
          CatCode_kref_catcode_BaseMutableNoraNeko (*BaseMutableNoraNeko)();
        } BaseMutableNoraNeko;
        struct {
          CatCode_KType* (*_type)(void);
          CatCode_kref_catcode_CatCodeUtil (*_instance)();
          const char* (*get_catCodeHead)(CatCode_kref_catcode_CatCodeUtil thiz);
          CatCode_kref_catcode_CatCodeUtil (*get_instance)(CatCode_kref_catcode_CatCodeUtil thiz);
          CatCode_kref_catcode_CodeTemplate (*get_nekoTemplate)(CatCode_kref_catcode_CatCodeUtil thiz);
          CatCode_kref_catcode_CodeTemplate (*get_stringTemplate)(CatCode_kref_catcode_CatCodeUtil thiz);
          CatCode_kref_catcode_LazyCodeBuilder (*getLazyNekoBuilder)(CatCode_kref_catcode_CatCodeUtil thiz, const char* type, CatCode_KBoolean encode);
          CatCode_kref_catcode_CodeBuilder (*getNekoBuilder)(CatCode_kref_catcode_CatCodeUtil thiz, const char* type, CatCode_KBoolean encode);
          CatCode_kref_catcode_CodeBuilder (*getStringCodeBuilder)(CatCode_kref_catcode_CatCodeUtil thiz, const char* type, CatCode_KBoolean encode);
        } CatCodeUtil;
        struct {
          CatCode_KType* (*_type)(void);
          CatCode_kref_catcode_CatDecoder (*_instance)();
          CatCode_kref_catcode_CatDecoder (*get_instance)(CatCode_kref_catcode_CatDecoder thiz);
          const char* (*decodeParams)(CatCode_kref_catcode_CatDecoder thiz, const char* str);
          const char* (*decodeParamsOrNull)(CatCode_kref_catcode_CatDecoder thiz, const char* str);
          const char* (*decodeText)(CatCode_kref_catcode_CatDecoder thiz, const char* str);
          const char* (*decodeTextOrNull)(CatCode_kref_catcode_CatDecoder thiz, const char* str);
        } CatDecoder;
        struct {
          CatCode_KType* (*_type)(void);
          CatCode_kref_catcode_CatEncoder (*_instance)();
          CatCode_kref_catcode_CatEncoder (*get_instance)(CatCode_kref_catcode_CatEncoder thiz);
          const char* (*encodeParams)(CatCode_kref_catcode_CatEncoder thiz, const char* str);
          const char* (*encodeParamsOrNull)(CatCode_kref_catcode_CatEncoder thiz, const char* str);
          const char* (*encodeText)(CatCode_kref_catcode_CatEncoder thiz, const char* str);
          const char* (*encodeTextOrNull)(CatCode_kref_catcode_CatEncoder thiz, const char* str);
        } CatEncoder;
        struct {
          CatCode_KType* (*_type)(void);
          CatCode_kref_catcode_EmptyNeko (*EmptyNeko)(const char* type);
          CatCode_kref_kotlin_collections_Set (*get_entries)(CatCode_kref_catcode_EmptyNeko thiz);
          CatCode_kref_kotlin_collections_Set (*get_keys)(CatCode_kref_catcode_EmptyNeko thiz);
          CatCode_KInt (*get_length)(CatCode_kref_catcode_EmptyNeko thiz);
          CatCode_KInt (*get_size)(CatCode_kref_catcode_EmptyNeko thiz);
          const char* (*get_type)(CatCode_kref_catcode_EmptyNeko thiz);
          CatCode_kref_kotlin_collections_Collection (*get_values)(CatCode_kref_catcode_EmptyNeko thiz);
          const char* (*component1)(CatCode_kref_catcode_EmptyNeko thiz);
          CatCode_KBoolean (*containsKey)(CatCode_kref_catcode_EmptyNeko thiz, const char* key);
          CatCode_KBoolean (*containsValue)(CatCode_kref_catcode_EmptyNeko thiz, const char* value);
          CatCode_kref_catcode_EmptyNeko (*copy)(CatCode_kref_catcode_EmptyNeko thiz, const char* type);
          CatCode_KBoolean (*equals)(CatCode_kref_catcode_EmptyNeko thiz, CatCode_kref_kotlin_Any other);
          CatCode_KChar (*get)(CatCode_kref_catcode_EmptyNeko thiz, CatCode_KInt index);
          const char* (*get_)(CatCode_kref_catcode_EmptyNeko thiz, const char* key);
          const char* (*getNoDecode)(CatCode_kref_catcode_EmptyNeko thiz, const char* key);
          CatCode_KInt (*hashCode)(CatCode_kref_catcode_EmptyNeko thiz);
          CatCode_kref_catcode_Neko (*immutable)(CatCode_kref_catcode_EmptyNeko thiz);
          CatCode_KBoolean (*isEmpty)(CatCode_kref_catcode_EmptyNeko thiz);
          CatCode_kref_catcode_MutableNeko (*mutable_)(CatCode_kref_catcode_EmptyNeko thiz);
          CatCode_kref_kotlin_CharSequence (*subSequence)(CatCode_kref_catcode_EmptyNeko thiz, CatCode_KInt startIndex, CatCode_KInt endIndex);
          CatCode_kref_kotlin_collections_Map (*toMap)(CatCode_kref_catcode_EmptyNeko thiz);
          const char* (*toString)(CatCode_kref_catcode_EmptyNeko thiz);
        } EmptyNeko;
        struct {
          CatCode_KType* (*_type)(void);
          CatCode_kref_catcode_EmptyNoraNeko (*EmptyNoraNeko)(const char* codeType, const char* type);
          const char* (*get_codeType)(CatCode_kref_catcode_EmptyNoraNeko thiz);
          CatCode_kref_kotlin_collections_Set (*get_entries)(CatCode_kref_catcode_EmptyNoraNeko thiz);
          CatCode_kref_kotlin_collections_Set (*get_keys)(CatCode_kref_catcode_EmptyNoraNeko thiz);
          CatCode_KInt (*get_length)(CatCode_kref_catcode_EmptyNoraNeko thiz);
          CatCode_KInt (*get_size)(CatCode_kref_catcode_EmptyNoraNeko thiz);
          const char* (*get_type)(CatCode_kref_catcode_EmptyNoraNeko thiz);
          CatCode_kref_kotlin_collections_Collection (*get_values)(CatCode_kref_catcode_EmptyNoraNeko thiz);
          const char* (*component1)(CatCode_kref_catcode_EmptyNoraNeko thiz);
          const char* (*component2)(CatCode_kref_catcode_EmptyNoraNeko thiz);
          CatCode_KBoolean (*containsKey)(CatCode_kref_catcode_EmptyNoraNeko thiz, const char* key);
          CatCode_KBoolean (*containsValue)(CatCode_kref_catcode_EmptyNoraNeko thiz, const char* value);
          CatCode_kref_catcode_EmptyNoraNeko (*copy)(CatCode_kref_catcode_EmptyNoraNeko thiz, const char* codeType, const char* type);
          CatCode_KBoolean (*equals)(CatCode_kref_catcode_EmptyNoraNeko thiz, CatCode_kref_kotlin_Any other);
          CatCode_KChar (*get)(CatCode_kref_catcode_EmptyNoraNeko thiz, CatCode_KInt index);
          const char* (*get_)(CatCode_kref_catcode_EmptyNoraNeko thiz, const char* key);
          const char* (*getNoDecode)(CatCode_kref_catcode_EmptyNoraNeko thiz, const char* key);
          CatCode_KInt (*hashCode)(CatCode_kref_catcode_EmptyNoraNeko thiz);
          CatCode_kref_catcode_Neko (*immutable)(CatCode_kref_catcode_EmptyNoraNeko thiz);
          CatCode_KBoolean (*isEmpty)(CatCode_kref_catcode_EmptyNoraNeko thiz);
          CatCode_kref_catcode_MutableNeko (*mutable_)(CatCode_kref_catcode_EmptyNoraNeko thiz);
          CatCode_kref_kotlin_CharSequence (*subSequence)(CatCode_kref_catcode_EmptyNoraNeko thiz, CatCode_KInt startIndex, CatCode_KInt endIndex);
          CatCode_kref_kotlin_collections_Map (*toMap)(CatCode_kref_catcode_EmptyNoraNeko thiz);
          const char* (*toString)(CatCode_kref_catcode_EmptyNoraNeko thiz);
        } EmptyNoraNeko;
        struct {
          CatCode_KType* (*_type)(void);
          CatCode_kref_catcode_LazyNekoBuilder (*LazyNekoBuilder)(const char* type, CatCode_kref_kotlin_LazyThreadSafetyMode mode);
          const char* (*get_type)(CatCode_kref_catcode_LazyNekoBuilder thiz);
          CatCode_kref_catcode_Neko (*build)(CatCode_kref_catcode_LazyNekoBuilder thiz);
          CatCode_kref_catcode_LazyCodeBuilder_LazyCodeBuilderKey (*key)(CatCode_kref_catcode_LazyNekoBuilder thiz, const char* key);
        } LazyNekoBuilder;
        struct {
          CatCode_KType* (*_type)(void);
          CatCode_kref_catcode_LazyNoraNekoBuilder (*LazyNoraNekoBuilder)(const char* codeType, const char* type);
          const char* (*get_codeType)(CatCode_kref_catcode_LazyNoraNekoBuilder thiz);
          const char* (*get_type)(CatCode_kref_catcode_LazyNoraNekoBuilder thiz);
          CatCode_kref_catcode_Neko (*build)(CatCode_kref_catcode_LazyNoraNekoBuilder thiz);
          CatCode_kref_catcode_LazyWildcatCodeBuilder_LazyWildcatCodeBuilderKey (*key)(CatCode_kref_catcode_LazyNoraNekoBuilder thiz, const char* key);
        } LazyNoraNekoBuilder;
        struct {
          CatCode_KType* (*_type)(void);
          CatCode_kref_catcode_Msgs (*Msgs)(CatCode_kref_kotlin_CharSequence delimiter, CatCode_kref_kotlin_collections_Collection collection);
          CatCode_kref_catcode_Msgs (*Msgs_)(CatCode_kref_kotlin_CharSequence delimiter, CatCode_kref_kotlin_Function0 delegate);
          CatCode_KInt (*get_size)(CatCode_kref_catcode_Msgs thiz);
          CatCode_KBoolean (*add)(CatCode_kref_catcode_Msgs thiz, CatCode_kref_kotlin_CharSequence element);
          void (*add_)(CatCode_kref_catcode_Msgs thiz, CatCode_KInt index, CatCode_kref_kotlin_CharSequence element);
          CatCode_KBoolean (*addAll)(CatCode_kref_catcode_Msgs thiz, CatCode_KInt index, CatCode_kref_kotlin_collections_Collection elements);
          CatCode_KBoolean (*addAll_)(CatCode_kref_catcode_Msgs thiz, CatCode_kref_kotlin_collections_Collection elements);
          void (*clear)(CatCode_kref_catcode_Msgs thiz);
          CatCode_KBoolean (*contains)(CatCode_kref_catcode_Msgs thiz, CatCode_kref_kotlin_CharSequence element);
          CatCode_KBoolean (*containsAll)(CatCode_kref_catcode_Msgs thiz, CatCode_kref_kotlin_collections_Collection elements);
          CatCode_kref_kotlin_CharSequence (*get)(CatCode_kref_catcode_Msgs thiz, CatCode_KInt index);
          CatCode_KInt (*indexOf)(CatCode_kref_catcode_Msgs thiz, CatCode_kref_kotlin_CharSequence element);
          CatCode_KBoolean (*isEmpty)(CatCode_kref_catcode_Msgs thiz);
          CatCode_kref_kotlin_collections_MutableIterator (*iterator)(CatCode_kref_catcode_Msgs thiz);
          CatCode_KInt (*lastIndexOf)(CatCode_kref_catcode_Msgs thiz, CatCode_kref_kotlin_CharSequence element);
          CatCode_kref_kotlin_collections_MutableListIterator (*listIterator)(CatCode_kref_catcode_Msgs thiz);
          CatCode_kref_kotlin_collections_MutableListIterator (*listIterator_)(CatCode_kref_catcode_Msgs thiz, CatCode_KInt index);
          CatCode_kref_catcode_Msgs (*plus)(CatCode_kref_catcode_Msgs thiz, CatCode_kref_kotlin_CharSequence other);
          CatCode_kref_catcode_Msgs (*plus_)(CatCode_kref_catcode_Msgs thiz, CatCode_kref_kotlin_collections_List other);
          CatCode_KBoolean (*remove)(CatCode_kref_catcode_Msgs thiz, CatCode_kref_kotlin_CharSequence element);
          CatCode_KBoolean (*removeAll)(CatCode_kref_catcode_Msgs thiz, CatCode_kref_kotlin_collections_Collection elements);
          CatCode_kref_kotlin_CharSequence (*removeAt)(CatCode_kref_catcode_Msgs thiz, CatCode_KInt index);
          CatCode_KBoolean (*retainAll)(CatCode_kref_catcode_Msgs thiz, CatCode_kref_kotlin_collections_Collection elements);
          CatCode_kref_kotlin_CharSequence (*set)(CatCode_kref_catcode_Msgs thiz, CatCode_KInt index, CatCode_kref_kotlin_CharSequence element);
          CatCode_kref_kotlin_collections_MutableList (*subList)(CatCode_kref_catcode_Msgs thiz, CatCode_KInt fromIndex, CatCode_KInt toIndex);
          const char* (*toListString)(CatCode_kref_catcode_Msgs thiz);
          const char* (*toString)(CatCode_kref_catcode_Msgs thiz);
        } Msgs;
        struct {
          CatCode_KType* (*_type)(void);
          const char* (*get_type)(CatCode_kref_catcode_MutableNeko thiz);
          void (*set_type)(CatCode_kref_catcode_MutableNeko thiz, const char* set);
        } MutableNeko;
        struct {
          CatCode_KType* (*_type)(void);
          const char* (*get_codeType)(CatCode_kref_catcode_MutableNoraNeko thiz);
          void (*set_codeType)(CatCode_kref_catcode_MutableNoraNeko thiz, const char* set);
        } MutableNoraNeko;
        struct {
          CatCode_KType* (*_type)(void);
          const char* (*get_codeType)(CatCode_kref_catcode_Neko thiz);
          const char* (*get_type)(CatCode_kref_catcode_Neko thiz);
          const char* (*getNoDecode)(CatCode_kref_catcode_Neko thiz, const char* key);
          CatCode_kref_catcode_Neko (*immutable)(CatCode_kref_catcode_Neko thiz);
          CatCode_kref_catcode_MutableNeko (*mutable_)(CatCode_kref_catcode_Neko thiz);
          CatCode_kref_catcode_Msgs (*plus)(CatCode_kref_catcode_Neko thiz, CatCode_kref_kotlin_CharSequence other);
          struct {
            CatCode_KType* (*_type)(void);
            CatCode_kref_catcode_Neko_Of (*_instance)();
            CatCode_kref_catcode_Neko (*of)(CatCode_kref_catcode_Neko_Of thiz, const char* code);
            CatCode_kref_catcode_Neko (*ofType)(CatCode_kref_catcode_Neko_Of thiz, const char* type);
          } Of;
        } Neko;
        struct {
          CatCode_KType* (*_type)(void);
          const char* (*get_catCodeHead)(CatCode_kref_catcode_NekoAibo thiz);
          const char* (*get_codeType)(CatCode_kref_catcode_NekoAibo thiz);
          CatCode_kref_catcode_CodeTemplate (*get_nekoTemplate)(CatCode_kref_catcode_NekoAibo thiz);
          CatCode_kref_catcode_CodeTemplate (*get_stringTemplate)(CatCode_kref_catcode_NekoAibo thiz);
          CatCode_KBoolean (*contains)(CatCode_kref_catcode_NekoAibo thiz, const char* text, const char* type, CatCode_kref_kotlin_Array params);
          CatCode_KBoolean (*contains_)(CatCode_kref_catcode_NekoAibo thiz, const char* text, const char* type, CatCode_KBoolean encode, CatCode_kref_kotlin_Array params);
          CatCode_KBoolean (*contains__)(CatCode_kref_catcode_NekoAibo thiz, const char* text, const char* type, CatCode_KBoolean encode, CatCode_kref_kotlin_Array params);
          const char* (*getCat)(CatCode_kref_catcode_NekoAibo thiz, const char* text, CatCode_KInt index);
          const char* (*getCat_)(CatCode_kref_catcode_NekoAibo thiz, const char* text, const char* type, CatCode_KInt index);
          CatCode_kref_kotlin_collections_Iterator (*getCatIter)(CatCode_kref_catcode_NekoAibo thiz, const char* text, const char* type);
          CatCode_kref_kotlin_collections_Iterator (*getCatKVIter)(CatCode_kref_catcode_NekoAibo thiz, const char* code);
          CatCode_kref_kotlin_collections_Iterator (*getCatKeyIter)(CatCode_kref_catcode_NekoAibo thiz, const char* code);
          CatCode_kref_kotlin_collections_Iterator (*getCatValueIter)(CatCode_kref_catcode_NekoAibo thiz, const char* code);
          CatCode_kref_kotlin_collections_List (*getCats)(CatCode_kref_catcode_NekoAibo thiz, const char* text, const char* type);
          CatCode_kref_catcode_LazyCodeBuilder (*getLazyNekoBuilder)(CatCode_kref_catcode_NekoAibo thiz, const char* type, CatCode_KBoolean encode);
          CatCode_kref_catcode_Neko (*getNeko)(CatCode_kref_catcode_NekoAibo thiz, const char* text, CatCode_KInt index);
          CatCode_kref_catcode_Neko (*getNeko_)(CatCode_kref_catcode_NekoAibo thiz, const char* text, const char* type, CatCode_KInt index);
          CatCode_kref_catcode_CodeBuilder (*getNekoBuilder)(CatCode_kref_catcode_NekoAibo thiz, const char* type, CatCode_KBoolean encode);
          CatCode_kref_kotlin_collections_List (*getNekoList)(CatCode_kref_catcode_NekoAibo thiz, const char* text, const char* type);
          const char* (*getParam)(CatCode_kref_catcode_NekoAibo thiz, const char* text, const char* paramKey, CatCode_KInt index);
          const char* (*getParam_)(CatCode_kref_catcode_NekoAibo thiz, const char* text, const char* type, const char* paramKey, CatCode_KInt index);
          CatCode_kref_catcode_CodeBuilder (*getStringCodeBuilder)(CatCode_kref_catcode_NekoAibo thiz, const char* type, CatCode_KBoolean encode);
          const char* (*remove)(CatCode_kref_catcode_NekoAibo thiz, const char* text, CatCode_KBoolean trim, CatCode_KBoolean ignoreEmpty, CatCode_kref_kotlin_CharSequence delimiter);
          const char* (*removeByType)(CatCode_kref_catcode_NekoAibo thiz, const char* text, const char* type, CatCode_KBoolean trim, CatCode_KBoolean ignoreEmpty, CatCode_kref_kotlin_CharSequence delimiter);
          CatCode_kref_kotlin_collections_List (*split)(CatCode_kref_catcode_NekoAibo thiz, const char* text);
          const char* (*toCat)(CatCode_kref_catcode_NekoAibo thiz, const char* type);
          const char* (*toCat_)(CatCode_kref_catcode_NekoAibo thiz, const char* type, CatCode_KBoolean encode, CatCode_kref_kotlin_Array kv);
          const char* (*toCat__)(CatCode_kref_catcode_NekoAibo thiz, const char* type, CatCode_KBoolean encode, CatCode_kref_kotlin_Array params);
          const char* (*toCat___)(CatCode_kref_catcode_NekoAibo thiz, const char* type, CatCode_KBoolean encode, CatCode_kref_kotlin_collections_Map map);
          CatCode_kref_catcode_Neko (*toNeko)(CatCode_kref_catcode_NekoAibo thiz, const char* type);
          CatCode_kref_catcode_Neko (*toNeko_)(CatCode_kref_catcode_NekoAibo thiz, const char* type, CatCode_kref_kotlin_Array params);
          CatCode_kref_catcode_Neko (*toNeko__)(CatCode_kref_catcode_NekoAibo thiz, const char* type, CatCode_KBoolean encode, CatCode_kref_kotlin_Array paramText);
          CatCode_kref_catcode_Neko (*toNeko___)(CatCode_kref_catcode_NekoAibo thiz, const char* type, CatCode_kref_kotlin_collections_Map params);
        } NekoAibo;
        struct {
          CatCode_KType* (*_type)(void);
          CatCode_kref_catcode_NekoBuilder (*NekoBuilder)(const char* type);
          const char* (*get_type)(CatCode_kref_catcode_NekoBuilder thiz);
          CatCode_kref_catcode_Neko (*build)(CatCode_kref_catcode_NekoBuilder thiz);
          CatCode_kref_catcode_CodeBuilder_CodeBuilderKey (*key)(CatCode_kref_catcode_NekoBuilder thiz, const char* key);
        } NekoBuilder;
        struct {
          CatCode_KType* (*_type)(void);
          CatCode_kref_catcode_NekoTemplate (*_instance)();
          CatCode_kref_catcode_NekoTemplate (*get_instance)(CatCode_kref_catcode_NekoTemplate thiz);
          CatCode_kref_catcode_Neko (*at)(CatCode_kref_catcode_NekoTemplate thiz, const char* code);
          CatCode_kref_catcode_Neko (*atAll)(CatCode_kref_catcode_NekoTemplate thiz);
          CatCode_kref_catcode_Neko (*bface)(CatCode_kref_catcode_NekoTemplate thiz, const char* id);
          CatCode_kref_catcode_Neko (*customMusic)(CatCode_kref_catcode_NekoTemplate thiz, const char* url, const char* audio, const char* title, const char* content, const char* image);
          CatCode_kref_catcode_Neko (*dice)(CatCode_kref_catcode_NekoTemplate thiz);
          CatCode_kref_catcode_Neko (*dice_)(CatCode_kref_catcode_NekoTemplate thiz, const char* type);
          CatCode_kref_catcode_Neko (*face)(CatCode_kref_catcode_NekoTemplate thiz, const char* id);
          CatCode_kref_catcode_Neko (*image)(CatCode_kref_catcode_NekoTemplate thiz, const char* file, CatCode_KBoolean flash);
          CatCode_kref_catcode_Neko (*music)(CatCode_kref_catcode_NekoTemplate thiz, const char* type, const char* id, const char* style);
          CatCode_kref_catcode_Neko (*record)(CatCode_kref_catcode_NekoTemplate thiz, const char* file, CatCode_KBoolean magic);
          CatCode_kref_catcode_Neko (*rps)(CatCode_kref_catcode_NekoTemplate thiz);
          CatCode_kref_catcode_Neko (*rps_)(CatCode_kref_catcode_NekoTemplate thiz, const char* type);
          CatCode_kref_catcode_Neko (*sface)(CatCode_kref_catcode_NekoTemplate thiz, const char* id);
          CatCode_kref_catcode_Neko (*shake)(CatCode_kref_catcode_NekoTemplate thiz);
          CatCode_kref_catcode_Neko (*share)(CatCode_kref_catcode_NekoTemplate thiz, const char* url, const char* title, const char* content, const char* image);
        } NekoTemplate;
        struct {
          CatCode_KType* (*_type)(void);
          const char* (*get_codeType)(CatCode_kref_catcode_NoraNeko thiz);
        } NoraNeko;
        struct {
          CatCode_KType* (*_type)(void);
          CatCode_kref_catcode_NoraNekoBuilder (*NoraNekoBuilder)(const char* codeType, const char* type);
          const char* (*get_codeType)(CatCode_kref_catcode_NoraNekoBuilder thiz);
          const char* (*get_type)(CatCode_kref_catcode_NoraNekoBuilder thiz);
          CatCode_kref_catcode_Neko (*build)(CatCode_kref_catcode_NoraNekoBuilder thiz);
          CatCode_kref_catcode_WildcatCodeBuilder_WildcatCodeBuilderKey (*key)(CatCode_kref_catcode_NoraNekoBuilder thiz, const char* key);
        } NoraNekoBuilder;
        struct {
          CatCode_KType* (*_type)(void);
          CatCode_kref_catcode_NoraNekoTemplate (*NoraNekoTemplate)(const char* codeType, CatCode_kref_catcode_WildcatTemplate wildcatStringTemplate);
          const char* (*get_codeType)(CatCode_kref_catcode_NoraNekoTemplate thiz);
          CatCode_kref_catcode_Neko (*at)(CatCode_kref_catcode_NoraNekoTemplate thiz, CatCode_KLong code);
          CatCode_kref_catcode_Neko (*at_)(CatCode_kref_catcode_NoraNekoTemplate thiz, const char* code);
          CatCode_kref_catcode_Neko (*atAll)(CatCode_kref_catcode_NoraNekoTemplate thiz);
          CatCode_kref_catcode_Neko (*bface)(CatCode_kref_catcode_NoraNekoTemplate thiz, CatCode_KLong id);
          CatCode_kref_catcode_Neko (*bface_)(CatCode_kref_catcode_NoraNekoTemplate thiz, const char* id);
          CatCode_kref_catcode_Neko (*customMusic)(CatCode_kref_catcode_NoraNekoTemplate thiz, const char* url, const char* audio, const char* title);
          CatCode_kref_catcode_Neko (*customMusic_)(CatCode_kref_catcode_NoraNekoTemplate thiz, const char* url, const char* audio, const char* title, const char* content, const char* image);
          CatCode_kref_catcode_Neko (*dice)(CatCode_kref_catcode_NoraNekoTemplate thiz);
          CatCode_kref_catcode_Neko (*dice_)(CatCode_kref_catcode_NoraNekoTemplate thiz, CatCode_KInt type);
          CatCode_kref_catcode_Neko (*dice__)(CatCode_kref_catcode_NoraNekoTemplate thiz, const char* type);
          CatCode_kref_catcode_Neko (*face)(CatCode_kref_catcode_NoraNekoTemplate thiz, CatCode_KLong id);
          CatCode_kref_catcode_Neko (*face_)(CatCode_kref_catcode_NoraNekoTemplate thiz, const char* id);
          CatCode_kref_catcode_Neko (*image)(CatCode_kref_catcode_NoraNekoTemplate thiz, const char* file);
          CatCode_kref_catcode_Neko (*image_)(CatCode_kref_catcode_NoraNekoTemplate thiz, const char* file, CatCode_KBoolean flash);
          CatCode_kref_catcode_Neko (*music)(CatCode_kref_catcode_NoraNekoTemplate thiz, const char* type, const char* id, const char* style);
          CatCode_kref_catcode_Neko (*record)(CatCode_kref_catcode_NoraNekoTemplate thiz, const char* file);
          CatCode_kref_catcode_Neko (*record_)(CatCode_kref_catcode_NoraNekoTemplate thiz, const char* file, CatCode_KBoolean magic);
          CatCode_kref_catcode_Neko (*rps)(CatCode_kref_catcode_NoraNekoTemplate thiz);
          CatCode_kref_catcode_Neko (*rps_)(CatCode_kref_catcode_NoraNekoTemplate thiz, CatCode_KInt type);
          CatCode_kref_catcode_Neko (*rps__)(CatCode_kref_catcode_NoraNekoTemplate thiz, const char* type);
          CatCode_kref_catcode_Neko (*sface)(CatCode_kref_catcode_NoraNekoTemplate thiz, CatCode_KLong id);
          CatCode_kref_catcode_Neko (*sface_)(CatCode_kref_catcode_NoraNekoTemplate thiz, const char* id);
          CatCode_kref_catcode_Neko (*shake)(CatCode_kref_catcode_NoraNekoTemplate thiz);
          CatCode_kref_catcode_Neko (*share)(CatCode_kref_catcode_NoraNekoTemplate thiz, const char* url, const char* title);
          CatCode_kref_catcode_Neko (*share_)(CatCode_kref_catcode_NoraNekoTemplate thiz, const char* url, const char* title, const char* content, const char* image);
        } NoraNekoTemplate;
        struct {
          CatCode_KType* (*_type)(void);
          CatCode_kref_catcode_StringCodeBuilder (*StringCodeBuilder)(const char* type, CatCode_KBoolean encode);
          const char* (*get_type)(CatCode_kref_catcode_StringCodeBuilder thiz);
          const char* (*build)(CatCode_kref_catcode_StringCodeBuilder thiz);
          CatCode_kref_catcode_CodeBuilder_CodeBuilderKey (*key)(CatCode_kref_catcode_StringCodeBuilder thiz, const char* key);
        } StringCodeBuilder;
        struct {
          CatCode_KType* (*_type)(void);
          CatCode_kref_catcode_StringTemplate (*_instance)();
          CatCode_kref_catcode_StringTemplate (*get_instance)(CatCode_kref_catcode_StringTemplate thiz);
          const char* (*at)(CatCode_kref_catcode_StringTemplate thiz, const char* code);
          const char* (*atAll)(CatCode_kref_catcode_StringTemplate thiz);
          const char* (*bface)(CatCode_kref_catcode_StringTemplate thiz, const char* id);
          const char* (*customMusic)(CatCode_kref_catcode_StringTemplate thiz, const char* url, const char* audio, const char* title, const char* content, const char* image);
          const char* (*dice)(CatCode_kref_catcode_StringTemplate thiz);
          const char* (*dice_)(CatCode_kref_catcode_StringTemplate thiz, const char* type);
          const char* (*face)(CatCode_kref_catcode_StringTemplate thiz, const char* id);
          const char* (*image)(CatCode_kref_catcode_StringTemplate thiz, const char* file, CatCode_KBoolean flash);
          const char* (*music)(CatCode_kref_catcode_StringTemplate thiz, const char* type, const char* id, const char* style);
          const char* (*record)(CatCode_kref_catcode_StringTemplate thiz, const char* file, CatCode_KBoolean magic);
          const char* (*rps)(CatCode_kref_catcode_StringTemplate thiz);
          const char* (*rps_)(CatCode_kref_catcode_StringTemplate thiz, const char* type);
          const char* (*sface)(CatCode_kref_catcode_StringTemplate thiz, const char* id);
          const char* (*shake)(CatCode_kref_catcode_StringTemplate thiz);
          const char* (*share)(CatCode_kref_catcode_StringTemplate thiz, const char* url, const char* title, const char* content, const char* image);
        } StringTemplate;
        struct {
          CatCode_KType* (*_type)(void);
          CatCode_kref_catcode_WildcatTemplate (*get_nekoTemplate)(CatCode_kref_catcode_WildcatCodeUtil thiz);
          CatCode_kref_catcode_WildcatTemplate (*get_stringTemplate)(CatCode_kref_catcode_WildcatCodeUtil thiz);
          CatCode_kref_catcode_LazyCodeBuilder (*getLazyNekoBuilder)(CatCode_kref_catcode_WildcatCodeUtil thiz, const char* type, CatCode_KBoolean encode);
          CatCode_kref_catcode_Neko (*getNeko)(CatCode_kref_catcode_WildcatCodeUtil thiz, const char* text, const char* type, CatCode_KInt index);
          CatCode_kref_catcode_CodeBuilder (*getNekoBuilder)(CatCode_kref_catcode_WildcatCodeUtil thiz, const char* type, CatCode_KBoolean encode);
          CatCode_kref_catcode_CodeBuilder (*getStringCodeBuilder)(CatCode_kref_catcode_WildcatCodeUtil thiz, const char* type, CatCode_KBoolean encode);
          CatCode_kref_catcode_NoraNeko (*toNeko)(CatCode_kref_catcode_WildcatCodeUtil thiz, const char* type);
          CatCode_kref_catcode_NoraNeko (*toNeko_)(CatCode_kref_catcode_WildcatCodeUtil thiz, const char* type, CatCode_kref_kotlin_Array params);
          CatCode_kref_catcode_NoraNeko (*toNeko__)(CatCode_kref_catcode_WildcatCodeUtil thiz, const char* type, CatCode_KBoolean encode, CatCode_kref_kotlin_Array paramText);
          CatCode_kref_catcode_NoraNeko (*toNeko___)(CatCode_kref_catcode_WildcatCodeUtil thiz, const char* type, CatCode_kref_kotlin_collections_Map params);
          struct {
            CatCode_KType* (*_type)(void);
            CatCode_kref_catcode_WildcatCodeUtil_Companion (*_instance)();
            CatCode_kref_catcode_WildcatCodeUtil (*getInstance)(CatCode_kref_catcode_WildcatCodeUtil_Companion thiz, const char* codeType);
          } Companion;
        } WildcatCodeUtil;
        struct {
          CatCode_KType* (*_type)(void);
          CatCode_kref_catcode_WildcatStringCodeBuilder (*WildcatStringCodeBuilder)(const char* codeType, const char* type, CatCode_KBoolean encode);
          const char* (*get_codeType)(CatCode_kref_catcode_WildcatStringCodeBuilder thiz);
          const char* (*get_type)(CatCode_kref_catcode_WildcatStringCodeBuilder thiz);
          const char* (*build)(CatCode_kref_catcode_WildcatStringCodeBuilder thiz);
          CatCode_kref_catcode_WildcatCodeBuilder_WildcatCodeBuilderKey (*key)(CatCode_kref_catcode_WildcatStringCodeBuilder thiz, const char* key);
        } WildcatStringCodeBuilder;
        struct {
          CatCode_KType* (*_type)(void);
          CatCode_kref_catcode_WildcatStringTemplate (*WildcatStringTemplate)(const char* codeType, CatCode_kref_catcode_WildcatCodeUtil utilInstance);
          const char* (*get_codeType)(CatCode_kref_catcode_WildcatStringTemplate thiz);
          const char* (*at)(CatCode_kref_catcode_WildcatStringTemplate thiz, CatCode_KLong code);
          const char* (*at_)(CatCode_kref_catcode_WildcatStringTemplate thiz, const char* code);
          const char* (*atAll)(CatCode_kref_catcode_WildcatStringTemplate thiz);
          const char* (*bface)(CatCode_kref_catcode_WildcatStringTemplate thiz, CatCode_KLong id);
          const char* (*bface_)(CatCode_kref_catcode_WildcatStringTemplate thiz, const char* id);
          const char* (*customMusic)(CatCode_kref_catcode_WildcatStringTemplate thiz, const char* url, const char* audio, const char* title);
          const char* (*customMusic_)(CatCode_kref_catcode_WildcatStringTemplate thiz, const char* url, const char* audio, const char* title, const char* content, const char* image);
          const char* (*dice)(CatCode_kref_catcode_WildcatStringTemplate thiz);
          const char* (*dice_)(CatCode_kref_catcode_WildcatStringTemplate thiz, CatCode_KInt type);
          const char* (*dice__)(CatCode_kref_catcode_WildcatStringTemplate thiz, const char* type);
          const char* (*face)(CatCode_kref_catcode_WildcatStringTemplate thiz, CatCode_KLong id);
          const char* (*face_)(CatCode_kref_catcode_WildcatStringTemplate thiz, const char* id);
          const char* (*image)(CatCode_kref_catcode_WildcatStringTemplate thiz, const char* file);
          const char* (*image_)(CatCode_kref_catcode_WildcatStringTemplate thiz, const char* file, CatCode_KBoolean flash);
          const char* (*music)(CatCode_kref_catcode_WildcatStringTemplate thiz, const char* type, const char* id);
          const char* (*music_)(CatCode_kref_catcode_WildcatStringTemplate thiz, const char* type, const char* id, const char* style);
          const char* (*record)(CatCode_kref_catcode_WildcatStringTemplate thiz, const char* file);
          const char* (*record_)(CatCode_kref_catcode_WildcatStringTemplate thiz, const char* file, CatCode_KBoolean magic);
          const char* (*rps)(CatCode_kref_catcode_WildcatStringTemplate thiz);
          const char* (*rps_)(CatCode_kref_catcode_WildcatStringTemplate thiz, CatCode_KInt type);
          const char* (*rps__)(CatCode_kref_catcode_WildcatStringTemplate thiz, const char* type);
          const char* (*sface)(CatCode_kref_catcode_WildcatStringTemplate thiz, CatCode_KLong id);
          const char* (*sface_)(CatCode_kref_catcode_WildcatStringTemplate thiz, const char* id);
          const char* (*shake)(CatCode_kref_catcode_WildcatStringTemplate thiz);
          const char* (*share)(CatCode_kref_catcode_WildcatStringTemplate thiz, const char* url, const char* title);
          const char* (*share_)(CatCode_kref_catcode_WildcatStringTemplate thiz, const char* url, const char* title, const char* content, const char* image);
        } WildcatStringTemplate;
        struct {
          struct {
            CatCode_KType* (*_type)(void);
            CatCode_kref_catcode_codes_LazyMapNeko (*LazyMapNeko)(const char* type);
            CatCode_kref_catcode_codes_LazyMapNeko (*LazyMapNeko_)(const char* type, CatCode_kref_kotlin_collections_Map params);
            CatCode_kref_catcode_codes_LazyMapNeko (*LazyMapNeko__)(const char* type, CatCode_kref_kotlin_Array params);
            CatCode_kref_catcode_codes_LazyMapNeko (*LazyMapNeko___)(const char* type, CatCode_kref_kotlin_Array params);
            CatCode_kref_catcode_codes_LazyMapNeko (*LazyMapNeko____)(CatCode_kref_catcode_collection_LazyMap params, const char* type);
            CatCode_kref_kotlin_collections_Set (*get_entries)(CatCode_kref_catcode_codes_LazyMapNeko thiz);
            CatCode_kref_kotlin_collections_Set (*get_keys)(CatCode_kref_catcode_codes_LazyMapNeko thiz);
            CatCode_KInt (*get_length)(CatCode_kref_catcode_codes_LazyMapNeko thiz);
            CatCode_KInt (*get_size)(CatCode_kref_catcode_codes_LazyMapNeko thiz);
            const char* (*get_type)(CatCode_kref_catcode_codes_LazyMapNeko thiz);
            void (*set_type)(CatCode_kref_catcode_codes_LazyMapNeko thiz, const char* set);
            CatCode_kref_kotlin_collections_Collection (*get_values)(CatCode_kref_catcode_codes_LazyMapNeko thiz);
            CatCode_KBoolean (*containsKey)(CatCode_kref_catcode_codes_LazyMapNeko thiz, const char* key);
            CatCode_KBoolean (*containsValue)(CatCode_kref_catcode_codes_LazyMapNeko thiz, const char* value);
            CatCode_KBoolean (*equals)(CatCode_kref_catcode_codes_LazyMapNeko thiz, CatCode_kref_kotlin_Any other);
            CatCode_KChar (*get)(CatCode_kref_catcode_codes_LazyMapNeko thiz, CatCode_KInt index);
            const char* (*get_)(CatCode_kref_catcode_codes_LazyMapNeko thiz, const char* key);
            const char* (*getNoDecode)(CatCode_kref_catcode_codes_LazyMapNeko thiz, const char* key);
            const char* (*getOrDefault)(CatCode_kref_catcode_codes_LazyMapNeko thiz, const char* key, const char* defaultValue);
            CatCode_KInt (*hashCode)(CatCode_kref_catcode_codes_LazyMapNeko thiz);
            CatCode_kref_catcode_Neko (*immutable)(CatCode_kref_catcode_codes_LazyMapNeko thiz);
            CatCode_KBoolean (*isEmpty)(CatCode_kref_catcode_codes_LazyMapNeko thiz);
            CatCode_kref_catcode_MutableNeko (*mutable_)(CatCode_kref_catcode_codes_LazyMapNeko thiz);
            CatCode_kref_kotlin_CharSequence (*subSequence)(CatCode_kref_catcode_codes_LazyMapNeko thiz, CatCode_KInt startIndex, CatCode_KInt endIndex);
            CatCode_kref_kotlin_collections_Map (*toMap)(CatCode_kref_catcode_codes_LazyMapNeko thiz);
            const char* (*toString)(CatCode_kref_catcode_codes_LazyMapNeko thiz);
            struct {
              CatCode_KType* (*_type)(void);
              CatCode_kref_catcode_codes_LazyMapNeko_Of (*_instance)();
              CatCode_kref_catcode_codes_LazyMapNeko (*byCode)(CatCode_kref_catcode_codes_LazyMapNeko_Of thiz, const char* code, CatCode_KBoolean decode);
              CatCode_kref_catcode_codes_MapNeko (*byKV)(CatCode_kref_catcode_codes_LazyMapNeko_Of thiz, const char* type, CatCode_kref_kotlin_Array params);
              CatCode_kref_catcode_codes_LazyMapNeko (*byLazyMap)(CatCode_kref_catcode_codes_LazyMapNeko_Of thiz, const char* type, CatCode_kref_catcode_collection_LazyMap params);
              CatCode_kref_catcode_codes_MapNeko (*byMap)(CatCode_kref_catcode_codes_LazyMapNeko_Of thiz, const char* type, CatCode_kref_kotlin_collections_Map params);
              CatCode_kref_catcode_codes_MapNeko (*byParamString)(CatCode_kref_catcode_codes_LazyMapNeko_Of thiz, const char* type, CatCode_kref_kotlin_Array params);
              CatCode_kref_catcode_codes_MutableMapNeko (*mutableByCode)(CatCode_kref_catcode_codes_LazyMapNeko_Of thiz, const char* code, CatCode_KBoolean decode);
              CatCode_kref_catcode_codes_MutableMapNeko (*mutableByKV)(CatCode_kref_catcode_codes_LazyMapNeko_Of thiz, const char* type, CatCode_kref_kotlin_Array params);
              CatCode_kref_catcode_codes_MutableMapNeko (*mutableByMap)(CatCode_kref_catcode_codes_LazyMapNeko_Of thiz, const char* type, CatCode_kref_kotlin_collections_Map params);
              CatCode_kref_catcode_codes_MutableMapNeko (*mutableByParamString)(CatCode_kref_catcode_codes_LazyMapNeko_Of thiz, const char* type, CatCode_kref_kotlin_Array params);
            } Of;
          } LazyMapNeko;
          struct {
            CatCode_KType* (*_type)(void);
            CatCode_kref_catcode_codes_LazyMapNoraNeko (*LazyMapNoraNeko)(const char* codeType, const char* type);
            CatCode_kref_catcode_codes_LazyMapNoraNeko (*LazyMapNoraNeko_)(const char* codeType, const char* type, CatCode_kref_kotlin_collections_Map params);
            CatCode_kref_catcode_codes_LazyMapNoraNeko (*LazyMapNoraNeko__)(const char* codeType, const char* type, CatCode_kref_kotlin_Array params);
            CatCode_kref_catcode_codes_LazyMapNoraNeko (*LazyMapNoraNeko___)(const char* codeType, const char* type, CatCode_kref_kotlin_Array params);
            CatCode_kref_catcode_codes_LazyMapNoraNeko (*LazyMapNoraNeko____)(const char* codeType, CatCode_kref_catcode_collection_LazyMap params, const char* type);
            const char* (*get_codeType)(CatCode_kref_catcode_codes_LazyMapNoraNeko thiz);
            CatCode_kref_kotlin_collections_Set (*get_entries)(CatCode_kref_catcode_codes_LazyMapNoraNeko thiz);
            CatCode_kref_kotlin_collections_Set (*get_keys)(CatCode_kref_catcode_codes_LazyMapNoraNeko thiz);
            CatCode_KInt (*get_length)(CatCode_kref_catcode_codes_LazyMapNoraNeko thiz);
            CatCode_KInt (*get_size)(CatCode_kref_catcode_codes_LazyMapNoraNeko thiz);
            const char* (*get_type)(CatCode_kref_catcode_codes_LazyMapNoraNeko thiz);
            void (*set_type)(CatCode_kref_catcode_codes_LazyMapNoraNeko thiz, const char* set);
            CatCode_kref_kotlin_collections_Collection (*get_values)(CatCode_kref_catcode_codes_LazyMapNoraNeko thiz);
            CatCode_KBoolean (*containsKey)(CatCode_kref_catcode_codes_LazyMapNoraNeko thiz, const char* key);
            CatCode_KBoolean (*containsValue)(CatCode_kref_catcode_codes_LazyMapNoraNeko thiz, const char* value);
            CatCode_KBoolean (*equals)(CatCode_kref_catcode_codes_LazyMapNoraNeko thiz, CatCode_kref_kotlin_Any other);
            CatCode_KChar (*get)(CatCode_kref_catcode_codes_LazyMapNoraNeko thiz, CatCode_KInt index);
            const char* (*get_)(CatCode_kref_catcode_codes_LazyMapNoraNeko thiz, const char* key);
            const char* (*getNoDecode)(CatCode_kref_catcode_codes_LazyMapNoraNeko thiz, const char* key);
            const char* (*getOrDefault)(CatCode_kref_catcode_codes_LazyMapNoraNeko thiz, const char* key, const char* defaultValue);
            CatCode_KInt (*hashCode)(CatCode_kref_catcode_codes_LazyMapNoraNeko thiz);
            CatCode_kref_catcode_Neko (*immutable)(CatCode_kref_catcode_codes_LazyMapNoraNeko thiz);
            CatCode_KBoolean (*isEmpty)(CatCode_kref_catcode_codes_LazyMapNoraNeko thiz);
            CatCode_kref_catcode_MutableNeko (*mutable_)(CatCode_kref_catcode_codes_LazyMapNoraNeko thiz);
            CatCode_kref_kotlin_CharSequence (*subSequence)(CatCode_kref_catcode_codes_LazyMapNoraNeko thiz, CatCode_KInt startIndex, CatCode_KInt endIndex);
            CatCode_kref_kotlin_collections_Map (*toMap)(CatCode_kref_catcode_codes_LazyMapNoraNeko thiz);
            const char* (*toString)(CatCode_kref_catcode_codes_LazyMapNoraNeko thiz);
            struct {
              CatCode_KType* (*_type)(void);
              CatCode_kref_catcode_codes_LazyMapNoraNeko_Of (*_instance)();
              CatCode_kref_catcode_codes_LazyMapNoraNeko (*byCode)(CatCode_kref_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* code, CatCode_KBoolean decode);
              CatCode_kref_catcode_codes_LazyMapNoraNeko (*byKV)(CatCode_kref_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* type, CatCode_kref_kotlin_Array params);
              CatCode_kref_catcode_codes_LazyMapNoraNeko (*byMap)(CatCode_kref_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* type, CatCode_kref_kotlin_collections_Map params);
              CatCode_kref_catcode_codes_LazyMapNoraNeko (*byParamString)(CatCode_kref_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* type, CatCode_kref_kotlin_Array params);
              CatCode_kref_catcode_codes_MutableMapNoraNeko (*mutableByCode)(CatCode_kref_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* code, CatCode_KBoolean decode);
              CatCode_kref_catcode_codes_MutableMapNoraNeko (*mutableByKV)(CatCode_kref_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* type, CatCode_kref_kotlin_Array params);
              CatCode_kref_catcode_codes_MutableMapNoraNeko (*mutableByMap)(CatCode_kref_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* type, CatCode_kref_kotlin_collections_Map params);
              CatCode_kref_catcode_codes_MutableMapNoraNeko (*mutableByParamString)(CatCode_kref_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* type, CatCode_kref_kotlin_Array params);
            } Of;
          } LazyMapNoraNeko;
          struct {
            CatCode_KType* (*_type)(void);
            CatCode_kref_catcode_codes_LazyMutableMapNeko (*LazyMutableMapNeko)(const char* type);
            CatCode_kref_catcode_codes_LazyMutableMapNeko (*LazyMutableMapNeko_)(const char* type, CatCode_kref_kotlin_collections_Map params);
            CatCode_kref_catcode_codes_LazyMutableMapNeko (*LazyMutableMapNeko__)(const char* type, CatCode_kref_kotlin_Array params);
            CatCode_kref_catcode_codes_LazyMutableMapNeko (*LazyMutableMapNeko___)(const char* type, CatCode_kref_kotlin_Array params);
            CatCode_kref_kotlin_collections_MutableSet (*get_entries)(CatCode_kref_catcode_codes_LazyMutableMapNeko thiz);
            CatCode_kref_kotlin_collections_MutableSet (*get_keys)(CatCode_kref_catcode_codes_LazyMutableMapNeko thiz);
            CatCode_KInt (*get_size)(CatCode_kref_catcode_codes_LazyMutableMapNeko thiz);
            CatCode_kref_kotlin_collections_MutableCollection (*get_values)(CatCode_kref_catcode_codes_LazyMutableMapNeko thiz);
            void (*clear)(CatCode_kref_catcode_codes_LazyMutableMapNeko thiz);
            CatCode_KBoolean (*containsKey)(CatCode_kref_catcode_codes_LazyMutableMapNeko thiz, const char* key);
            CatCode_KBoolean (*containsValue)(CatCode_kref_catcode_codes_LazyMutableMapNeko thiz, const char* value);
            const char* (*get)(CatCode_kref_catcode_codes_LazyMutableMapNeko thiz, const char* key);
            CatCode_kref_catcode_Neko (*immutable)(CatCode_kref_catcode_codes_LazyMutableMapNeko thiz);
            CatCode_KBoolean (*isEmpty)(CatCode_kref_catcode_codes_LazyMutableMapNeko thiz);
            CatCode_kref_catcode_MutableNeko (*mutable_)(CatCode_kref_catcode_codes_LazyMutableMapNeko thiz);
            const char* (*put)(CatCode_kref_catcode_codes_LazyMutableMapNeko thiz, const char* key, const char* value);
            void (*putAll)(CatCode_kref_catcode_codes_LazyMutableMapNeko thiz, CatCode_kref_kotlin_collections_Map from);
            const char* (*remove)(CatCode_kref_catcode_codes_LazyMutableMapNeko thiz, const char* key);
            CatCode_kref_kotlin_collections_MutableMap (*toMap)(CatCode_kref_catcode_codes_LazyMutableMapNeko thiz);
            const char* (*toString)(CatCode_kref_catcode_codes_LazyMutableMapNeko thiz);
          } LazyMutableMapNeko;
          struct {
            CatCode_KType* (*_type)(void);
            CatCode_kref_catcode_codes_LazyMutableMapNoraNeko (*LazyMutableMapNoraNeko)(const char* codeType, const char* type);
            CatCode_kref_catcode_codes_LazyMutableMapNoraNeko (*LazyMutableMapNoraNeko_)(const char* codeType, const char* type, CatCode_kref_kotlin_collections_Map params);
            CatCode_kref_catcode_codes_LazyMutableMapNoraNeko (*LazyMutableMapNoraNeko__)(const char* codeType, const char* type, CatCode_kref_kotlin_Array params);
            CatCode_kref_catcode_codes_LazyMutableMapNoraNeko (*LazyMutableMapNoraNeko___)(const char* codeType, const char* type, CatCode_kref_kotlin_Array params);
            CatCode_kref_kotlin_collections_MutableSet (*get_entries)(CatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz);
            CatCode_kref_kotlin_collections_MutableSet (*get_keys)(CatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz);
            CatCode_kref_catcode_collection_MutableLazyMap (*get_params)(CatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz);
            CatCode_KInt (*get_size)(CatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz);
            CatCode_kref_kotlin_collections_MutableCollection (*get_values)(CatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz);
            void (*clear)(CatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz);
            CatCode_KBoolean (*containsKey)(CatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz, const char* key);
            CatCode_KBoolean (*containsValue)(CatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz, const char* value);
            const char* (*get)(CatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz, const char* key);
            CatCode_kref_catcode_Neko (*immutable)(CatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz);
            CatCode_KBoolean (*isEmpty)(CatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz);
            CatCode_kref_catcode_MutableNeko (*mutable_)(CatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz);
            const char* (*put)(CatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz, const char* key, const char* value);
            void (*putAll)(CatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz, CatCode_kref_kotlin_collections_Map from);
            const char* (*remove)(CatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz, const char* key);
            CatCode_kref_kotlin_collections_MutableMap (*toMap)(CatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz);
            const char* (*toString)(CatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz);
          } LazyMutableMapNoraNeko;
          struct {
            CatCode_KType* (*_type)(void);
            CatCode_kref_catcode_codes_MapNeko (*MapNeko)(const char* type);
            CatCode_kref_catcode_codes_MapNeko (*MapNeko_)(const char* type, CatCode_kref_kotlin_collections_Map params);
            CatCode_kref_catcode_codes_MapNeko (*MapNeko__)(const char* type, CatCode_kref_kotlin_Array params);
            CatCode_kref_catcode_codes_MapNeko (*MapNeko___)(const char* type, CatCode_kref_kotlin_Array params);
            CatCode_kref_catcode_codes_MapNeko (*MapNeko____)(CatCode_kref_kotlin_collections_Map params, const char* type);
            CatCode_kref_kotlin_collections_Set (*get_entries)(CatCode_kref_catcode_codes_MapNeko thiz);
            CatCode_kref_kotlin_collections_Set (*get_keys)(CatCode_kref_catcode_codes_MapNeko thiz);
            CatCode_KInt (*get_length)(CatCode_kref_catcode_codes_MapNeko thiz);
            CatCode_kref_kotlin_collections_Map (*get_params)(CatCode_kref_catcode_codes_MapNeko thiz);
            CatCode_KInt (*get_size)(CatCode_kref_catcode_codes_MapNeko thiz);
            const char* (*get_type)(CatCode_kref_catcode_codes_MapNeko thiz);
            void (*set_type)(CatCode_kref_catcode_codes_MapNeko thiz, const char* set);
            CatCode_kref_kotlin_collections_Collection (*get_values)(CatCode_kref_catcode_codes_MapNeko thiz);
            CatCode_KBoolean (*containsKey)(CatCode_kref_catcode_codes_MapNeko thiz, const char* key);
            CatCode_KBoolean (*containsValue)(CatCode_kref_catcode_codes_MapNeko thiz, const char* value);
            CatCode_KBoolean (*equals)(CatCode_kref_catcode_codes_MapNeko thiz, CatCode_kref_kotlin_Any other);
            CatCode_KChar (*get)(CatCode_kref_catcode_codes_MapNeko thiz, CatCode_KInt index);
            const char* (*get_)(CatCode_kref_catcode_codes_MapNeko thiz, const char* key);
            const char* (*getNoDecode)(CatCode_kref_catcode_codes_MapNeko thiz, const char* key);
            const char* (*getOrDefault)(CatCode_kref_catcode_codes_MapNeko thiz, const char* key, const char* defaultValue);
            CatCode_KInt (*hashCode)(CatCode_kref_catcode_codes_MapNeko thiz);
            CatCode_kref_catcode_Neko (*immutable)(CatCode_kref_catcode_codes_MapNeko thiz);
            CatCode_KBoolean (*isEmpty)(CatCode_kref_catcode_codes_MapNeko thiz);
            CatCode_kref_catcode_MutableNeko (*mutable_)(CatCode_kref_catcode_codes_MapNeko thiz);
            CatCode_kref_kotlin_CharSequence (*subSequence)(CatCode_kref_catcode_codes_MapNeko thiz, CatCode_KInt startIndex, CatCode_KInt endIndex);
            CatCode_kref_kotlin_collections_Map (*toMap)(CatCode_kref_catcode_codes_MapNeko thiz);
            const char* (*toString)(CatCode_kref_catcode_codes_MapNeko thiz);
            struct {
              CatCode_KType* (*_type)(void);
              CatCode_kref_catcode_codes_MapNeko_Of (*_instance)();
              CatCode_kref_catcode_codes_MapNeko (*byCode)(CatCode_kref_catcode_codes_MapNeko_Of thiz, const char* code, CatCode_KBoolean decode);
              CatCode_kref_catcode_codes_MapNeko (*byKV)(CatCode_kref_catcode_codes_MapNeko_Of thiz, const char* type, CatCode_kref_kotlin_Array params);
              CatCode_kref_catcode_codes_MapNeko (*byMap)(CatCode_kref_catcode_codes_MapNeko_Of thiz, const char* type, CatCode_kref_kotlin_collections_Map params);
              CatCode_kref_catcode_codes_MapNeko (*byParamString)(CatCode_kref_catcode_codes_MapNeko_Of thiz, const char* type, CatCode_kref_kotlin_Array params);
              CatCode_kref_catcode_codes_MutableMapNeko (*mutableByCode)(CatCode_kref_catcode_codes_MapNeko_Of thiz, const char* code, CatCode_KBoolean decode);
              CatCode_kref_catcode_codes_MutableMapNeko (*mutableByKV)(CatCode_kref_catcode_codes_MapNeko_Of thiz, const char* type, CatCode_kref_kotlin_Array params);
              CatCode_kref_catcode_codes_MutableMapNeko (*mutableByMap)(CatCode_kref_catcode_codes_MapNeko_Of thiz, const char* type, CatCode_kref_kotlin_collections_Map params);
              CatCode_kref_catcode_codes_MutableMapNeko (*mutableByParamString)(CatCode_kref_catcode_codes_MapNeko_Of thiz, const char* type, CatCode_kref_kotlin_Array params);
            } Of;
          } MapNeko;
          struct {
            CatCode_KType* (*_type)(void);
            CatCode_kref_catcode_codes_MapNoraNeko (*MapNoraNeko)(const char* codeType, const char* type);
            CatCode_kref_catcode_codes_MapNoraNeko (*MapNoraNeko_)(const char* codeType, const char* type, CatCode_kref_kotlin_collections_Map params);
            CatCode_kref_catcode_codes_MapNoraNeko (*MapNoraNeko__)(const char* codeType, const char* type, CatCode_kref_kotlin_Array params);
            CatCode_kref_catcode_codes_MapNoraNeko (*MapNoraNeko___)(const char* codeType, const char* type, CatCode_kref_kotlin_Array params);
            CatCode_kref_catcode_codes_MapNoraNeko (*MapNoraNeko____)(const char* codeType, CatCode_kref_kotlin_collections_Map params, const char* type);
            const char* (*get_codeType)(CatCode_kref_catcode_codes_MapNoraNeko thiz);
            CatCode_kref_kotlin_collections_Set (*get_entries)(CatCode_kref_catcode_codes_MapNoraNeko thiz);
            CatCode_kref_kotlin_collections_Set (*get_keys)(CatCode_kref_catcode_codes_MapNoraNeko thiz);
            CatCode_KInt (*get_length)(CatCode_kref_catcode_codes_MapNoraNeko thiz);
            CatCode_kref_kotlin_collections_Map (*get_params)(CatCode_kref_catcode_codes_MapNoraNeko thiz);
            CatCode_KInt (*get_size)(CatCode_kref_catcode_codes_MapNoraNeko thiz);
            const char* (*get_type)(CatCode_kref_catcode_codes_MapNoraNeko thiz);
            void (*set_type)(CatCode_kref_catcode_codes_MapNoraNeko thiz, const char* set);
            CatCode_kref_kotlin_collections_Collection (*get_values)(CatCode_kref_catcode_codes_MapNoraNeko thiz);
            CatCode_KBoolean (*containsKey)(CatCode_kref_catcode_codes_MapNoraNeko thiz, const char* key);
            CatCode_KBoolean (*containsValue)(CatCode_kref_catcode_codes_MapNoraNeko thiz, const char* value);
            CatCode_KBoolean (*equals)(CatCode_kref_catcode_codes_MapNoraNeko thiz, CatCode_kref_kotlin_Any other);
            CatCode_KChar (*get)(CatCode_kref_catcode_codes_MapNoraNeko thiz, CatCode_KInt index);
            const char* (*get_)(CatCode_kref_catcode_codes_MapNoraNeko thiz, const char* key);
            const char* (*getNoDecode)(CatCode_kref_catcode_codes_MapNoraNeko thiz, const char* key);
            const char* (*getOrDefault)(CatCode_kref_catcode_codes_MapNoraNeko thiz, const char* key, const char* defaultValue);
            CatCode_KInt (*hashCode)(CatCode_kref_catcode_codes_MapNoraNeko thiz);
            CatCode_kref_catcode_Neko (*immutable)(CatCode_kref_catcode_codes_MapNoraNeko thiz);
            CatCode_KBoolean (*isEmpty)(CatCode_kref_catcode_codes_MapNoraNeko thiz);
            CatCode_kref_catcode_MutableNeko (*mutable_)(CatCode_kref_catcode_codes_MapNoraNeko thiz);
            CatCode_kref_kotlin_CharSequence (*subSequence)(CatCode_kref_catcode_codes_MapNoraNeko thiz, CatCode_KInt startIndex, CatCode_KInt endIndex);
            CatCode_kref_kotlin_collections_Map (*toMap)(CatCode_kref_catcode_codes_MapNoraNeko thiz);
            const char* (*toString)(CatCode_kref_catcode_codes_MapNoraNeko thiz);
            struct {
              CatCode_KType* (*_type)(void);
              CatCode_kref_catcode_codes_MapNoraNeko_Of (*_instance)();
              CatCode_kref_catcode_codes_MapNoraNeko (*byCode)(CatCode_kref_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* code, CatCode_KBoolean decode);
              CatCode_kref_catcode_codes_MapNoraNeko (*byKV)(CatCode_kref_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* type, CatCode_kref_kotlin_Array params);
              CatCode_kref_catcode_codes_MapNoraNeko (*byMap)(CatCode_kref_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* type, CatCode_kref_kotlin_collections_Map params);
              CatCode_kref_catcode_codes_MapNoraNeko (*byParamString)(CatCode_kref_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* type, CatCode_kref_kotlin_Array params);
              CatCode_kref_catcode_codes_MutableMapNoraNeko (*mutableByCode)(CatCode_kref_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* code, CatCode_KBoolean decode);
              CatCode_kref_catcode_codes_MutableMapNoraNeko (*mutableByKV)(CatCode_kref_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* type, CatCode_kref_kotlin_Array params);
              CatCode_kref_catcode_codes_MutableMapNoraNeko (*mutableByMap)(CatCode_kref_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* type, CatCode_kref_kotlin_collections_Map params);
              CatCode_kref_catcode_codes_MutableMapNoraNeko (*mutableByParamString)(CatCode_kref_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* type, CatCode_kref_kotlin_Array params);
            } Of;
          } MapNoraNeko;
          struct {
            CatCode_KType* (*_type)(void);
            CatCode_kref_catcode_codes_MutableMapNeko (*MutableMapNeko)(const char* type);
            CatCode_kref_catcode_codes_MutableMapNeko (*MutableMapNeko_)(const char* type, CatCode_kref_kotlin_collections_Map params);
            CatCode_kref_catcode_codes_MutableMapNeko (*MutableMapNeko__)(const char* type, CatCode_kref_kotlin_Array params);
            CatCode_kref_catcode_codes_MutableMapNeko (*MutableMapNeko___)(const char* type, CatCode_kref_kotlin_Array params);
            CatCode_kref_kotlin_collections_MutableSet (*get_entries)(CatCode_kref_catcode_codes_MutableMapNeko thiz);
            CatCode_kref_kotlin_collections_MutableSet (*get_keys)(CatCode_kref_catcode_codes_MutableMapNeko thiz);
            CatCode_kref_kotlin_collections_MutableMap (*get_params)(CatCode_kref_catcode_codes_MutableMapNeko thiz);
            CatCode_KInt (*get_size)(CatCode_kref_catcode_codes_MutableMapNeko thiz);
            CatCode_kref_kotlin_collections_MutableCollection (*get_values)(CatCode_kref_catcode_codes_MutableMapNeko thiz);
            void (*clear)(CatCode_kref_catcode_codes_MutableMapNeko thiz);
            CatCode_KBoolean (*containsKey)(CatCode_kref_catcode_codes_MutableMapNeko thiz, const char* key);
            CatCode_KBoolean (*containsValue)(CatCode_kref_catcode_codes_MutableMapNeko thiz, const char* value);
            const char* (*get)(CatCode_kref_catcode_codes_MutableMapNeko thiz, const char* key);
            CatCode_kref_catcode_Neko (*immutable)(CatCode_kref_catcode_codes_MutableMapNeko thiz);
            CatCode_KBoolean (*isEmpty)(CatCode_kref_catcode_codes_MutableMapNeko thiz);
            CatCode_kref_catcode_MutableNeko (*mutable_)(CatCode_kref_catcode_codes_MutableMapNeko thiz);
            const char* (*put)(CatCode_kref_catcode_codes_MutableMapNeko thiz, const char* key, const char* value);
            void (*putAll)(CatCode_kref_catcode_codes_MutableMapNeko thiz, CatCode_kref_kotlin_collections_Map from);
            const char* (*remove)(CatCode_kref_catcode_codes_MutableMapNeko thiz, const char* key);
            CatCode_kref_kotlin_collections_MutableMap (*toMap)(CatCode_kref_catcode_codes_MutableMapNeko thiz);
            const char* (*toString)(CatCode_kref_catcode_codes_MutableMapNeko thiz);
          } MutableMapNeko;
          struct {
            CatCode_KType* (*_type)(void);
            CatCode_kref_catcode_codes_MutableMapNoraNeko (*MutableMapNoraNeko)(const char* codeType, const char* type);
            CatCode_kref_catcode_codes_MutableMapNoraNeko (*MutableMapNoraNeko_)(const char* codeType, const char* type, CatCode_kref_kotlin_collections_Map params);
            CatCode_kref_catcode_codes_MutableMapNoraNeko (*MutableMapNoraNeko__)(const char* codeType, const char* type, CatCode_kref_kotlin_Array params);
            CatCode_kref_catcode_codes_MutableMapNoraNeko (*MutableMapNoraNeko___)(const char* codeType, const char* type, CatCode_kref_kotlin_Array params);
            CatCode_kref_kotlin_collections_MutableSet (*get_entries)(CatCode_kref_catcode_codes_MutableMapNoraNeko thiz);
            CatCode_kref_kotlin_collections_MutableSet (*get_keys)(CatCode_kref_catcode_codes_MutableMapNoraNeko thiz);
            CatCode_kref_kotlin_collections_MutableMap (*get_params)(CatCode_kref_catcode_codes_MutableMapNoraNeko thiz);
            CatCode_KInt (*get_size)(CatCode_kref_catcode_codes_MutableMapNoraNeko thiz);
            CatCode_kref_kotlin_collections_MutableCollection (*get_values)(CatCode_kref_catcode_codes_MutableMapNoraNeko thiz);
            void (*clear)(CatCode_kref_catcode_codes_MutableMapNoraNeko thiz);
            CatCode_KBoolean (*containsKey)(CatCode_kref_catcode_codes_MutableMapNoraNeko thiz, const char* key);
            CatCode_KBoolean (*containsValue)(CatCode_kref_catcode_codes_MutableMapNoraNeko thiz, const char* value);
            const char* (*get)(CatCode_kref_catcode_codes_MutableMapNoraNeko thiz, const char* key);
            CatCode_kref_catcode_Neko (*immutable)(CatCode_kref_catcode_codes_MutableMapNoraNeko thiz);
            CatCode_KBoolean (*isEmpty)(CatCode_kref_catcode_codes_MutableMapNoraNeko thiz);
            CatCode_kref_catcode_MutableNeko (*mutable_)(CatCode_kref_catcode_codes_MutableMapNoraNeko thiz);
            const char* (*put)(CatCode_kref_catcode_codes_MutableMapNoraNeko thiz, const char* key, const char* value);
            void (*putAll)(CatCode_kref_catcode_codes_MutableMapNoraNeko thiz, CatCode_kref_kotlin_collections_Map from);
            const char* (*remove)(CatCode_kref_catcode_codes_MutableMapNoraNeko thiz, const char* key);
            CatCode_kref_kotlin_collections_MutableMap (*toMap)(CatCode_kref_catcode_codes_MutableMapNoraNeko thiz);
            const char* (*toString)(CatCode_kref_catcode_codes_MutableMapNoraNeko thiz);
          } MutableMapNoraNeko;
          struct {
            CatCode_KType* (*_type)(void);
            const char* (*get_codeType)(CatCode_kref_catcode_codes_NoraNyanko thiz);
            CatCode_kref_kotlin_collections_Set (*get_entries)(CatCode_kref_catcode_codes_NoraNyanko thiz);
            CatCode_kref_kotlin_collections_Set (*get_keys)(CatCode_kref_catcode_codes_NoraNyanko thiz);
            CatCode_KInt (*get_length)(CatCode_kref_catcode_codes_NoraNyanko thiz);
            CatCode_KInt (*get_size)(CatCode_kref_catcode_codes_NoraNyanko thiz);
            const char* (*get_type)(CatCode_kref_catcode_codes_NoraNyanko thiz);
            CatCode_kref_kotlin_collections_Collection (*get_values)(CatCode_kref_catcode_codes_NoraNyanko thiz);
            CatCode_KBoolean (*containsKey)(CatCode_kref_catcode_codes_NoraNyanko thiz, const char* key);
            CatCode_KBoolean (*containsValue)(CatCode_kref_catcode_codes_NoraNyanko thiz, const char* value);
            CatCode_KBoolean (*equals)(CatCode_kref_catcode_codes_NoraNyanko thiz, CatCode_kref_kotlin_Any other);
            CatCode_KChar (*get)(CatCode_kref_catcode_codes_NoraNyanko thiz, CatCode_KInt index);
            const char* (*get_)(CatCode_kref_catcode_codes_NoraNyanko thiz, const char* key);
            const char* (*getNoDecode)(CatCode_kref_catcode_codes_NoraNyanko thiz, const char* key);
            CatCode_KInt (*hashCode)(CatCode_kref_catcode_codes_NoraNyanko thiz);
            CatCode_kref_catcode_Neko (*immutable)(CatCode_kref_catcode_codes_NoraNyanko thiz);
            CatCode_KBoolean (*isEmpty)(CatCode_kref_catcode_codes_NoraNyanko thiz);
            CatCode_kref_catcode_MutableNeko (*mutable_)(CatCode_kref_catcode_codes_NoraNyanko thiz);
            CatCode_kref_kotlin_CharSequence (*subSequence)(CatCode_kref_catcode_codes_NoraNyanko thiz, CatCode_KInt startIndex, CatCode_KInt endIndex);
            CatCode_kref_kotlin_collections_Map (*toMap)(CatCode_kref_catcode_codes_NoraNyanko thiz);
            const char* (*toString)(CatCode_kref_catcode_codes_NoraNyanko thiz);
            struct {
              CatCode_KType* (*_type)(void);
              CatCode_kref_catcode_codes_NoraNyanko_Of (*_instance)();
              CatCode_kref_catcode_codes_NoraNyanko (*byCode)(CatCode_kref_catcode_codes_NoraNyanko_Of thiz, const char* code);
            } Of;
          } NoraNyanko;
          struct {
            CatCode_KType* (*_type)(void);
            CatCode_kref_kotlin_collections_Set (*get_entries)(CatCode_kref_catcode_codes_Nyanko thiz);
            CatCode_kref_kotlin_collections_Set (*get_keys)(CatCode_kref_catcode_codes_Nyanko thiz);
            CatCode_KInt (*get_length)(CatCode_kref_catcode_codes_Nyanko thiz);
            CatCode_KInt (*get_size)(CatCode_kref_catcode_codes_Nyanko thiz);
            const char* (*get_type)(CatCode_kref_catcode_codes_Nyanko thiz);
            CatCode_kref_kotlin_collections_Collection (*get_values)(CatCode_kref_catcode_codes_Nyanko thiz);
            CatCode_KBoolean (*containsKey)(CatCode_kref_catcode_codes_Nyanko thiz, const char* key);
            CatCode_KBoolean (*containsValue)(CatCode_kref_catcode_codes_Nyanko thiz, const char* value);
            CatCode_KBoolean (*equals)(CatCode_kref_catcode_codes_Nyanko thiz, CatCode_kref_kotlin_Any other);
            CatCode_KChar (*get)(CatCode_kref_catcode_codes_Nyanko thiz, CatCode_KInt index);
            const char* (*get_)(CatCode_kref_catcode_codes_Nyanko thiz, const char* key);
            const char* (*getNoDecode)(CatCode_kref_catcode_codes_Nyanko thiz, const char* key);
            CatCode_KInt (*hashCode)(CatCode_kref_catcode_codes_Nyanko thiz);
            CatCode_kref_catcode_Neko (*immutable)(CatCode_kref_catcode_codes_Nyanko thiz);
            CatCode_KBoolean (*isEmpty)(CatCode_kref_catcode_codes_Nyanko thiz);
            CatCode_kref_catcode_MutableNeko (*mutable_)(CatCode_kref_catcode_codes_Nyanko thiz);
            CatCode_kref_kotlin_CharSequence (*subSequence)(CatCode_kref_catcode_codes_Nyanko thiz, CatCode_KInt startIndex, CatCode_KInt endIndex);
            CatCode_kref_kotlin_collections_Map (*toMap)(CatCode_kref_catcode_codes_Nyanko thiz);
            const char* (*toString)(CatCode_kref_catcode_codes_Nyanko thiz);
            struct {
              CatCode_KType* (*_type)(void);
              CatCode_kref_catcode_codes_Nyanko_Of (*_instance)();
              CatCode_kref_catcode_codes_Nyanko (*byCode)(CatCode_kref_catcode_codes_Nyanko_Of thiz, const char* code);
            } Of;
          } Nyanko;
        } codes;
        struct {
        } collection;
      } catcode;
    } root;
  } kotlin;
} CatCode_ExportedSymbols;
extern CatCode_ExportedSymbols* CatCode_symbols(void);
#ifdef __cplusplus
}  /* extern "C" */
#endif
#endif  /* KONAN_CATCODE_H */
