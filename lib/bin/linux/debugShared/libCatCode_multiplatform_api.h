#ifndef KONAN_LIBCATCODE_MULTIPLATFORM_H
#define KONAN_LIBCATCODE_MULTIPLATFORM_H
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
typedef bool            libCatCode_multiplatform_KBoolean;
#else
typedef _Bool           libCatCode_multiplatform_KBoolean;
#endif
typedef unsigned short     libCatCode_multiplatform_KChar;
typedef signed char        libCatCode_multiplatform_KByte;
typedef short              libCatCode_multiplatform_KShort;
typedef int                libCatCode_multiplatform_KInt;
typedef long long          libCatCode_multiplatform_KLong;
typedef unsigned char      libCatCode_multiplatform_KUByte;
typedef unsigned short     libCatCode_multiplatform_KUShort;
typedef unsigned int       libCatCode_multiplatform_KUInt;
typedef unsigned long long libCatCode_multiplatform_KULong;
typedef float              libCatCode_multiplatform_KFloat;
typedef double             libCatCode_multiplatform_KDouble;
typedef float __attribute__ ((__vector_size__ (16))) libCatCode_multiplatform_KVector128;
typedef void*              libCatCode_multiplatform_KNativePtr;
struct libCatCode_multiplatform_KType;
typedef struct libCatCode_multiplatform_KType libCatCode_multiplatform_KType;

typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_kotlin_Byte;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_kotlin_Short;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_kotlin_Int;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_kotlin_Long;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_kotlin_Float;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_kotlin_Double;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_kotlin_Char;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_kotlin_Boolean;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_kotlin_Unit;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_Neko;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_kotlin_text_Regex;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_BaseMutableNoraNeko;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_CatCodeUtil;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_CodeTemplate;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_LazyCodeBuilder;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_CodeBuilder;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_CatDecoder;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_CatEncoder;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_EmptyNeko;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_kotlin_collections_Set;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_kotlin_collections_Collection;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_kotlin_Any;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_MutableNeko;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_kotlin_CharSequence;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_kotlin_collections_Map;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_LazyNekoBuilder;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_kotlin_LazyThreadSafetyMode;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_LazyCodeBuilder_LazyCodeBuilderKey;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_LazyNoraNekoBuilder;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_LazyWildcatCodeBuilder_LazyWildcatCodeBuilderKey;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_Msgs;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_kotlin_Function0;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_kotlin_collections_MutableIterator;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_kotlin_collections_MutableListIterator;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_kotlin_collections_List;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_kotlin_collections_MutableList;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_MutableNoraNeko;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_Neko_Of;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_kotlin_Array;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_kotlin_collections_Iterator;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_NekoBuilder;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_CodeBuilder_CodeBuilderKey;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_NekoTemplate;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_NoraNeko;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoBuilder;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_WildcatCodeBuilder_WildcatCodeBuilderKey;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_WildcatTemplate;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_StringCodeBuilder;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_StringTemplate;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil_Companion;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringCodeBuilder;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_collection_LazyMap;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko_Of;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko_Of;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_kotlin_collections_MutableSet;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_kotlin_collections_MutableCollection;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_kotlin_collections_MutableMap;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_collection_MutableLazyMap;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko_Of;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko_Of;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko_Of;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko;
typedef struct {
  libCatCode_multiplatform_KNativePtr pinned;
} libCatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko_Of;


typedef struct {
  /* Service functions. */
  void (*DisposeStablePointer)(libCatCode_multiplatform_KNativePtr ptr);
  void (*DisposeString)(const char* string);
  libCatCode_multiplatform_KBoolean (*IsInstance)(libCatCode_multiplatform_KNativePtr ref, const libCatCode_multiplatform_KType* type);
  libCatCode_multiplatform_kref_kotlin_Byte (*createNullableByte)(libCatCode_multiplatform_KByte);
  libCatCode_multiplatform_kref_kotlin_Short (*createNullableShort)(libCatCode_multiplatform_KShort);
  libCatCode_multiplatform_kref_kotlin_Int (*createNullableInt)(libCatCode_multiplatform_KInt);
  libCatCode_multiplatform_kref_kotlin_Long (*createNullableLong)(libCatCode_multiplatform_KLong);
  libCatCode_multiplatform_kref_kotlin_Float (*createNullableFloat)(libCatCode_multiplatform_KFloat);
  libCatCode_multiplatform_kref_kotlin_Double (*createNullableDouble)(libCatCode_multiplatform_KDouble);
  libCatCode_multiplatform_kref_kotlin_Char (*createNullableChar)(libCatCode_multiplatform_KChar);
  libCatCode_multiplatform_kref_kotlin_Boolean (*createNullableBoolean)(libCatCode_multiplatform_KBoolean);
  libCatCode_multiplatform_kref_kotlin_Unit (*createNullableUnit)(void);

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
            libCatCode_multiplatform_kref_love_forte_catcode_Neko (*get_NekoAtAll)();
            libCatCode_multiplatform_kref_love_forte_catcode_Neko (*get_NekoDice)();
            libCatCode_multiplatform_kref_love_forte_catcode_Neko (*get_NekoRps)();
            libCatCode_multiplatform_kref_love_forte_catcode_Neko (*get_NekoShake)();
            libCatCode_multiplatform_kref_kotlin_text_Regex (*get_nekoMatchRegex)();
            const char* (*catHead)(const char* codeType);
            const char* (*deCatParam)(const char* thiz);
            const char* (*deCatText)(const char* thiz);
            const char* (*enCatParam)(const char* thiz);
            const char* (*enCatText)(const char* thiz);
            struct {
              libCatCode_multiplatform_KType* (*_type)(void);
              libCatCode_multiplatform_kref_love_forte_catcode_BaseMutableNoraNeko (*BaseMutableNoraNeko)();
            } BaseMutableNoraNeko;
            struct {
              libCatCode_multiplatform_KType* (*_type)(void);
              libCatCode_multiplatform_kref_love_forte_catcode_CatCodeUtil (*_instance)();
              const char* (*get_catCodeHead)(libCatCode_multiplatform_kref_love_forte_catcode_CatCodeUtil thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_CatCodeUtil (*get_instance)(libCatCode_multiplatform_kref_love_forte_catcode_CatCodeUtil thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_CodeTemplate (*get_nekoTemplate)(libCatCode_multiplatform_kref_love_forte_catcode_CatCodeUtil thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_CodeTemplate (*get_stringTemplate)(libCatCode_multiplatform_kref_love_forte_catcode_CatCodeUtil thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_LazyCodeBuilder (*getLazyNekoBuilder)(libCatCode_multiplatform_kref_love_forte_catcode_CatCodeUtil thiz, const char* type, libCatCode_multiplatform_KBoolean encode);
              libCatCode_multiplatform_kref_love_forte_catcode_CodeBuilder (*getNekoBuilder)(libCatCode_multiplatform_kref_love_forte_catcode_CatCodeUtil thiz, const char* type, libCatCode_multiplatform_KBoolean encode);
              libCatCode_multiplatform_kref_love_forte_catcode_CodeBuilder (*getStringCodeBuilder)(libCatCode_multiplatform_kref_love_forte_catcode_CatCodeUtil thiz, const char* type, libCatCode_multiplatform_KBoolean encode);
            } CatCodeUtil;
            struct {
              libCatCode_multiplatform_KType* (*_type)(void);
              libCatCode_multiplatform_kref_love_forte_catcode_CatDecoder (*_instance)();
              libCatCode_multiplatform_kref_love_forte_catcode_CatDecoder (*get_instance)(libCatCode_multiplatform_kref_love_forte_catcode_CatDecoder thiz);
              const char* (*decodeParams)(libCatCode_multiplatform_kref_love_forte_catcode_CatDecoder thiz, const char* str);
              const char* (*decodeParamsOrNull)(libCatCode_multiplatform_kref_love_forte_catcode_CatDecoder thiz, const char* str);
              const char* (*decodeText)(libCatCode_multiplatform_kref_love_forte_catcode_CatDecoder thiz, const char* str);
              const char* (*decodeTextOrNull)(libCatCode_multiplatform_kref_love_forte_catcode_CatDecoder thiz, const char* str);
            } CatDecoder;
            struct {
              libCatCode_multiplatform_KType* (*_type)(void);
              libCatCode_multiplatform_kref_love_forte_catcode_CatEncoder (*_instance)();
              libCatCode_multiplatform_kref_love_forte_catcode_CatEncoder (*get_instance)(libCatCode_multiplatform_kref_love_forte_catcode_CatEncoder thiz);
              const char* (*encodeParams)(libCatCode_multiplatform_kref_love_forte_catcode_CatEncoder thiz, const char* str);
              const char* (*encodeParamsOrNull)(libCatCode_multiplatform_kref_love_forte_catcode_CatEncoder thiz, const char* str);
              const char* (*encodeText)(libCatCode_multiplatform_kref_love_forte_catcode_CatEncoder thiz, const char* str);
              const char* (*encodeTextOrNull)(libCatCode_multiplatform_kref_love_forte_catcode_CatEncoder thiz, const char* str);
            } CatEncoder;
            struct {
              libCatCode_multiplatform_KType* (*_type)(void);
              libCatCode_multiplatform_kref_love_forte_catcode_EmptyNeko (*EmptyNeko)(const char* type);
              libCatCode_multiplatform_kref_kotlin_collections_Set (*get_entries)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz);
              libCatCode_multiplatform_kref_kotlin_collections_Set (*get_keys)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz);
              libCatCode_multiplatform_KInt (*get_length)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz);
              libCatCode_multiplatform_KInt (*get_size)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz);
              const char* (*get_type)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz);
              libCatCode_multiplatform_kref_kotlin_collections_Collection (*get_values)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz);
              const char* (*component1)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz);
              libCatCode_multiplatform_KBoolean (*containsKey)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz, const char* key);
              libCatCode_multiplatform_KBoolean (*containsValue)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz, const char* value);
              libCatCode_multiplatform_kref_love_forte_catcode_EmptyNeko (*copy)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz, const char* type);
              libCatCode_multiplatform_KBoolean (*equals)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz, libCatCode_multiplatform_kref_kotlin_Any other);
              libCatCode_multiplatform_KChar (*get)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz, libCatCode_multiplatform_KInt index);
              const char* (*get_)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz, const char* key);
              const char* (*getNoDecode)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz, const char* key);
              libCatCode_multiplatform_KInt (*hashCode)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*immutable)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz);
              libCatCode_multiplatform_KBoolean (*isEmpty)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_MutableNeko (*mutable_)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz);
              libCatCode_multiplatform_kref_kotlin_CharSequence (*subSequence)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz, libCatCode_multiplatform_KInt startIndex, libCatCode_multiplatform_KInt endIndex);
              libCatCode_multiplatform_kref_kotlin_collections_Map (*toMap)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz);
              const char* (*toString)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNeko thiz);
            } EmptyNeko;
            struct {
              libCatCode_multiplatform_KType* (*_type)(void);
              libCatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko (*EmptyNoraNeko)(const char* codeType, const char* type);
              const char* (*get_codeType)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz);
              libCatCode_multiplatform_kref_kotlin_collections_Set (*get_entries)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz);
              libCatCode_multiplatform_kref_kotlin_collections_Set (*get_keys)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz);
              libCatCode_multiplatform_KInt (*get_length)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz);
              libCatCode_multiplatform_KInt (*get_size)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz);
              const char* (*get_type)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz);
              libCatCode_multiplatform_kref_kotlin_collections_Collection (*get_values)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz);
              const char* (*component1)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz);
              const char* (*component2)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz);
              libCatCode_multiplatform_KBoolean (*containsKey)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz, const char* key);
              libCatCode_multiplatform_KBoolean (*containsValue)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz, const char* value);
              libCatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko (*copy)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz, const char* codeType, const char* type);
              libCatCode_multiplatform_KBoolean (*equals)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz, libCatCode_multiplatform_kref_kotlin_Any other);
              libCatCode_multiplatform_KChar (*get)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz, libCatCode_multiplatform_KInt index);
              const char* (*get_)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz, const char* key);
              const char* (*getNoDecode)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz, const char* key);
              libCatCode_multiplatform_KInt (*hashCode)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*immutable)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz);
              libCatCode_multiplatform_KBoolean (*isEmpty)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_MutableNeko (*mutable_)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz);
              libCatCode_multiplatform_kref_kotlin_CharSequence (*subSequence)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz, libCatCode_multiplatform_KInt startIndex, libCatCode_multiplatform_KInt endIndex);
              libCatCode_multiplatform_kref_kotlin_collections_Map (*toMap)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz);
              const char* (*toString)(libCatCode_multiplatform_kref_love_forte_catcode_EmptyNoraNeko thiz);
            } EmptyNoraNeko;
            struct {
              libCatCode_multiplatform_KType* (*_type)(void);
              libCatCode_multiplatform_kref_love_forte_catcode_LazyNekoBuilder (*LazyNekoBuilder)(const char* type, libCatCode_multiplatform_kref_kotlin_LazyThreadSafetyMode mode);
              const char* (*get_type)(libCatCode_multiplatform_kref_love_forte_catcode_LazyNekoBuilder thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*build)(libCatCode_multiplatform_kref_love_forte_catcode_LazyNekoBuilder thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_LazyCodeBuilder_LazyCodeBuilderKey (*key)(libCatCode_multiplatform_kref_love_forte_catcode_LazyNekoBuilder thiz, const char* key);
            } LazyNekoBuilder;
            struct {
              libCatCode_multiplatform_KType* (*_type)(void);
              libCatCode_multiplatform_kref_love_forte_catcode_LazyNoraNekoBuilder (*LazyNoraNekoBuilder)(const char* codeType, const char* type);
              const char* (*get_codeType)(libCatCode_multiplatform_kref_love_forte_catcode_LazyNoraNekoBuilder thiz);
              const char* (*get_type)(libCatCode_multiplatform_kref_love_forte_catcode_LazyNoraNekoBuilder thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*build)(libCatCode_multiplatform_kref_love_forte_catcode_LazyNoraNekoBuilder thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_LazyWildcatCodeBuilder_LazyWildcatCodeBuilderKey (*key)(libCatCode_multiplatform_kref_love_forte_catcode_LazyNoraNekoBuilder thiz, const char* key);
            } LazyNoraNekoBuilder;
            struct {
              libCatCode_multiplatform_KType* (*_type)(void);
              libCatCode_multiplatform_kref_love_forte_catcode_Msgs (*Msgs)(libCatCode_multiplatform_kref_kotlin_CharSequence delimiter, libCatCode_multiplatform_kref_kotlin_collections_Collection collection);
              libCatCode_multiplatform_kref_love_forte_catcode_Msgs (*Msgs_)(libCatCode_multiplatform_kref_kotlin_CharSequence delimiter, libCatCode_multiplatform_kref_kotlin_Function0 delegate);
              libCatCode_multiplatform_KInt (*get_size)(libCatCode_multiplatform_kref_love_forte_catcode_Msgs thiz);
              libCatCode_multiplatform_KBoolean (*add)(libCatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, libCatCode_multiplatform_kref_kotlin_CharSequence element);
              void (*add_)(libCatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, libCatCode_multiplatform_KInt index, libCatCode_multiplatform_kref_kotlin_CharSequence element);
              libCatCode_multiplatform_KBoolean (*addAll)(libCatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, libCatCode_multiplatform_KInt index, libCatCode_multiplatform_kref_kotlin_collections_Collection elements);
              libCatCode_multiplatform_KBoolean (*addAll_)(libCatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, libCatCode_multiplatform_kref_kotlin_collections_Collection elements);
              void (*clear)(libCatCode_multiplatform_kref_love_forte_catcode_Msgs thiz);
              libCatCode_multiplatform_KBoolean (*contains)(libCatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, libCatCode_multiplatform_kref_kotlin_CharSequence element);
              libCatCode_multiplatform_KBoolean (*containsAll)(libCatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, libCatCode_multiplatform_kref_kotlin_collections_Collection elements);
              libCatCode_multiplatform_kref_kotlin_CharSequence (*get)(libCatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, libCatCode_multiplatform_KInt index);
              libCatCode_multiplatform_KInt (*indexOf)(libCatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, libCatCode_multiplatform_kref_kotlin_CharSequence element);
              libCatCode_multiplatform_KBoolean (*isEmpty)(libCatCode_multiplatform_kref_love_forte_catcode_Msgs thiz);
              libCatCode_multiplatform_kref_kotlin_collections_MutableIterator (*iterator)(libCatCode_multiplatform_kref_love_forte_catcode_Msgs thiz);
              libCatCode_multiplatform_KInt (*lastIndexOf)(libCatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, libCatCode_multiplatform_kref_kotlin_CharSequence element);
              libCatCode_multiplatform_kref_kotlin_collections_MutableListIterator (*listIterator)(libCatCode_multiplatform_kref_love_forte_catcode_Msgs thiz);
              libCatCode_multiplatform_kref_kotlin_collections_MutableListIterator (*listIterator_)(libCatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, libCatCode_multiplatform_KInt index);
              libCatCode_multiplatform_kref_love_forte_catcode_Msgs (*plus)(libCatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, libCatCode_multiplatform_kref_kotlin_CharSequence other);
              libCatCode_multiplatform_kref_love_forte_catcode_Msgs (*plus_)(libCatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, libCatCode_multiplatform_kref_kotlin_collections_List other);
              libCatCode_multiplatform_KBoolean (*remove)(libCatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, libCatCode_multiplatform_kref_kotlin_CharSequence element);
              libCatCode_multiplatform_KBoolean (*removeAll)(libCatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, libCatCode_multiplatform_kref_kotlin_collections_Collection elements);
              libCatCode_multiplatform_kref_kotlin_CharSequence (*removeAt)(libCatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, libCatCode_multiplatform_KInt index);
              libCatCode_multiplatform_KBoolean (*retainAll)(libCatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, libCatCode_multiplatform_kref_kotlin_collections_Collection elements);
              libCatCode_multiplatform_kref_kotlin_CharSequence (*set)(libCatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, libCatCode_multiplatform_KInt index, libCatCode_multiplatform_kref_kotlin_CharSequence element);
              libCatCode_multiplatform_kref_kotlin_collections_MutableList (*subList)(libCatCode_multiplatform_kref_love_forte_catcode_Msgs thiz, libCatCode_multiplatform_KInt fromIndex, libCatCode_multiplatform_KInt toIndex);
              const char* (*toListString)(libCatCode_multiplatform_kref_love_forte_catcode_Msgs thiz);
              const char* (*toString)(libCatCode_multiplatform_kref_love_forte_catcode_Msgs thiz);
            } Msgs;
            struct {
              libCatCode_multiplatform_KType* (*_type)(void);
              const char* (*get_type)(libCatCode_multiplatform_kref_love_forte_catcode_MutableNeko thiz);
              void (*set_type)(libCatCode_multiplatform_kref_love_forte_catcode_MutableNeko thiz, const char* set);
            } MutableNeko;
            struct {
              libCatCode_multiplatform_KType* (*_type)(void);
              const char* (*get_codeType)(libCatCode_multiplatform_kref_love_forte_catcode_MutableNoraNeko thiz);
              void (*set_codeType)(libCatCode_multiplatform_kref_love_forte_catcode_MutableNoraNeko thiz, const char* set);
            } MutableNoraNeko;
            struct {
              libCatCode_multiplatform_KType* (*_type)(void);
              const char* (*get_codeType)(libCatCode_multiplatform_kref_love_forte_catcode_Neko thiz);
              const char* (*get_type)(libCatCode_multiplatform_kref_love_forte_catcode_Neko thiz);
              const char* (*getNoDecode)(libCatCode_multiplatform_kref_love_forte_catcode_Neko thiz, const char* key);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*immutable)(libCatCode_multiplatform_kref_love_forte_catcode_Neko thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_MutableNeko (*mutable_)(libCatCode_multiplatform_kref_love_forte_catcode_Neko thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_Msgs (*plus)(libCatCode_multiplatform_kref_love_forte_catcode_Neko thiz, libCatCode_multiplatform_kref_kotlin_CharSequence other);
              struct {
                libCatCode_multiplatform_KType* (*_type)(void);
                libCatCode_multiplatform_kref_love_forte_catcode_Neko_Of (*_instance)();
                libCatCode_multiplatform_kref_love_forte_catcode_Neko (*of)(libCatCode_multiplatform_kref_love_forte_catcode_Neko_Of thiz, const char* code);
                libCatCode_multiplatform_kref_love_forte_catcode_Neko (*of_)(libCatCode_multiplatform_kref_love_forte_catcode_Neko_Of thiz, const char* text, libCatCode_multiplatform_KBoolean decode);
                libCatCode_multiplatform_kref_love_forte_catcode_Neko (*ofType)(libCatCode_multiplatform_kref_love_forte_catcode_Neko_Of thiz, const char* type);
              } Of;
            } Neko;
            struct {
              libCatCode_multiplatform_KType* (*_type)(void);
              const char* (*get_catCodeHead)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz);
              const char* (*get_codeType)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_CodeTemplate (*get_nekoTemplate)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_CodeTemplate (*get_stringTemplate)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz);
              libCatCode_multiplatform_KBoolean (*contains)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text, const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
              libCatCode_multiplatform_KBoolean (*contains_)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text, const char* type, libCatCode_multiplatform_KBoolean encode, libCatCode_multiplatform_kref_kotlin_Array params);
              libCatCode_multiplatform_KBoolean (*contains__)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text, const char* type, libCatCode_multiplatform_KBoolean encode, libCatCode_multiplatform_kref_kotlin_Array params);
              const char* (*getCat)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text, libCatCode_multiplatform_KInt index);
              const char* (*getCat_)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text, const char* type, libCatCode_multiplatform_KInt index);
              libCatCode_multiplatform_kref_kotlin_collections_Iterator (*getCatIter)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text, const char* type);
              libCatCode_multiplatform_kref_kotlin_collections_Iterator (*getCatKVIter)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* code);
              libCatCode_multiplatform_kref_kotlin_collections_Iterator (*getCatKeyIter)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* code);
              libCatCode_multiplatform_kref_kotlin_collections_Iterator (*getCatValueIter)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* code);
              libCatCode_multiplatform_kref_kotlin_collections_List (*getCats)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text, const char* type);
              libCatCode_multiplatform_kref_love_forte_catcode_LazyCodeBuilder (*getLazyNekoBuilder)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* type, libCatCode_multiplatform_KBoolean encode);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*getNeko)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text, libCatCode_multiplatform_KInt index);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*getNeko_)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text, const char* type, libCatCode_multiplatform_KInt index);
              libCatCode_multiplatform_kref_love_forte_catcode_CodeBuilder (*getNekoBuilder)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* type, libCatCode_multiplatform_KBoolean encode);
              libCatCode_multiplatform_kref_kotlin_collections_List (*getNekoList)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text, const char* type);
              libCatCode_multiplatform_kref_kotlin_collections_List (*getNekoList_)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text, const char* type, libCatCode_multiplatform_KBoolean decode);
              const char* (*getParam)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text, const char* paramKey, libCatCode_multiplatform_KInt index);
              const char* (*getParam_)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text, const char* type, const char* paramKey, libCatCode_multiplatform_KInt index);
              libCatCode_multiplatform_kref_love_forte_catcode_CodeBuilder (*getStringCodeBuilder)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* type, libCatCode_multiplatform_KBoolean encode);
              const char* (*remove)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text, libCatCode_multiplatform_KBoolean trim, libCatCode_multiplatform_KBoolean ignoreEmpty, libCatCode_multiplatform_kref_kotlin_CharSequence delimiter);
              const char* (*removeByType)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text, const char* type, libCatCode_multiplatform_KBoolean trim, libCatCode_multiplatform_KBoolean ignoreEmpty, libCatCode_multiplatform_kref_kotlin_CharSequence delimiter);
              libCatCode_multiplatform_kref_kotlin_collections_List (*split)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* text);
              const char* (*toCat)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* type);
              const char* (*toCat_)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* type, libCatCode_multiplatform_KBoolean encode, libCatCode_multiplatform_kref_kotlin_Array params);
              const char* (*toCat__)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* type, libCatCode_multiplatform_KBoolean encode, libCatCode_multiplatform_kref_kotlin_Array kv);
              const char* (*toCat___)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* type, libCatCode_multiplatform_KBoolean encode, libCatCode_multiplatform_kref_kotlin_collections_Map map);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*toNeko)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* type);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*toNeko_)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*toNeko__)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* type, libCatCode_multiplatform_KBoolean encode, libCatCode_multiplatform_kref_kotlin_Array paramText);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*toNeko___)(libCatCode_multiplatform_kref_love_forte_catcode_NekoAibo thiz, const char* type, libCatCode_multiplatform_kref_kotlin_collections_Map params);
            } NekoAibo;
            struct {
              libCatCode_multiplatform_KType* (*_type)(void);
              libCatCode_multiplatform_kref_love_forte_catcode_NekoBuilder (*NekoBuilder)(const char* type);
              const char* (*get_type)(libCatCode_multiplatform_kref_love_forte_catcode_NekoBuilder thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*build)(libCatCode_multiplatform_kref_love_forte_catcode_NekoBuilder thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_CodeBuilder_CodeBuilderKey (*key)(libCatCode_multiplatform_kref_love_forte_catcode_NekoBuilder thiz, const char* key);
            } NekoBuilder;
            struct {
              libCatCode_multiplatform_KType* (*_type)(void);
              libCatCode_multiplatform_kref_love_forte_catcode_NekoTemplate (*_instance)();
              libCatCode_multiplatform_kref_love_forte_catcode_NekoTemplate (*get_instance)(libCatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*at)(libCatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz, const char* code);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*atAll)(libCatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*bface)(libCatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz, const char* id);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*customMusic)(libCatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz, const char* url, const char* audio, const char* title, const char* content, const char* image);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*dice)(libCatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*dice_)(libCatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz, const char* type);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*face)(libCatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz, const char* id);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*image)(libCatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz, const char* file, libCatCode_multiplatform_KBoolean flash);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*music)(libCatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz, const char* type, const char* id, const char* style);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*record)(libCatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz, const char* file, libCatCode_multiplatform_KBoolean magic);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*rps)(libCatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*rps_)(libCatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz, const char* type);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*sface)(libCatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz, const char* id);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*shake)(libCatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*share)(libCatCode_multiplatform_kref_love_forte_catcode_NekoTemplate thiz, const char* url, const char* title, const char* content, const char* image);
            } NekoTemplate;
            struct {
              libCatCode_multiplatform_KType* (*_type)(void);
              const char* (*get_codeType)(libCatCode_multiplatform_kref_love_forte_catcode_NoraNeko thiz);
            } NoraNeko;
            struct {
              libCatCode_multiplatform_KType* (*_type)(void);
              libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoBuilder (*NoraNekoBuilder)(const char* codeType, const char* type);
              const char* (*get_codeType)(libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoBuilder thiz);
              const char* (*get_type)(libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoBuilder thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*build)(libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoBuilder thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_WildcatCodeBuilder_WildcatCodeBuilderKey (*key)(libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoBuilder thiz, const char* key);
            } NoraNekoBuilder;
            struct {
              libCatCode_multiplatform_KType* (*_type)(void);
              libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate (*NoraNekoTemplate)(const char* codeType, libCatCode_multiplatform_kref_love_forte_catcode_WildcatTemplate wildcatStringTemplate);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*at)(libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, libCatCode_multiplatform_KLong code);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*at_)(libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, const char* code);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*atAll)(libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*bface)(libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, libCatCode_multiplatform_KLong id);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*bface_)(libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, const char* id);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*customMusic)(libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, const char* url, const char* audio, const char* title);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*customMusic_)(libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, const char* url, const char* audio, const char* title, const char* content, const char* image);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*dice)(libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*dice_)(libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, libCatCode_multiplatform_KInt type);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*dice__)(libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, const char* type);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*face)(libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, libCatCode_multiplatform_KLong id);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*face_)(libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, const char* id);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*image)(libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, const char* file);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*image_)(libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, const char* file, libCatCode_multiplatform_KBoolean flash);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*music)(libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, const char* type, const char* id, const char* style);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*record)(libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, const char* file);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*record_)(libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, const char* file, libCatCode_multiplatform_KBoolean magic);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*rps)(libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*rps_)(libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, libCatCode_multiplatform_KInt type);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*rps__)(libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, const char* type);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*sface)(libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, libCatCode_multiplatform_KLong id);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*sface_)(libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, const char* id);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*shake)(libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*share)(libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, const char* url, const char* title);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*share_)(libCatCode_multiplatform_kref_love_forte_catcode_NoraNekoTemplate thiz, const char* url, const char* title, const char* content, const char* image);
            } NoraNekoTemplate;
            struct {
              libCatCode_multiplatform_KType* (*_type)(void);
              libCatCode_multiplatform_kref_love_forte_catcode_StringCodeBuilder (*StringCodeBuilder)(const char* type, libCatCode_multiplatform_KBoolean encode);
              const char* (*get_type)(libCatCode_multiplatform_kref_love_forte_catcode_StringCodeBuilder thiz);
              const char* (*build)(libCatCode_multiplatform_kref_love_forte_catcode_StringCodeBuilder thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_CodeBuilder_CodeBuilderKey (*key)(libCatCode_multiplatform_kref_love_forte_catcode_StringCodeBuilder thiz, const char* key);
            } StringCodeBuilder;
            struct {
              libCatCode_multiplatform_KType* (*_type)(void);
              libCatCode_multiplatform_kref_love_forte_catcode_StringTemplate (*_instance)();
              libCatCode_multiplatform_kref_love_forte_catcode_StringTemplate (*get_instance)(libCatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz);
              const char* (*at)(libCatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz, const char* code);
              const char* (*atAll)(libCatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz);
              const char* (*bface)(libCatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz, const char* id);
              const char* (*customMusic)(libCatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz, const char* url, const char* audio, const char* title, const char* content, const char* image);
              const char* (*dice)(libCatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz);
              const char* (*dice_)(libCatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz, const char* type);
              const char* (*face)(libCatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz, const char* id);
              const char* (*image)(libCatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz, const char* file, libCatCode_multiplatform_KBoolean flash);
              const char* (*music)(libCatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz, const char* type, const char* id, const char* style);
              const char* (*record)(libCatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz, const char* file, libCatCode_multiplatform_KBoolean magic);
              const char* (*rps)(libCatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz);
              const char* (*rps_)(libCatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz, const char* type);
              const char* (*sface)(libCatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz, const char* id);
              const char* (*shake)(libCatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz);
              const char* (*share)(libCatCode_multiplatform_kref_love_forte_catcode_StringTemplate thiz, const char* url, const char* title, const char* content, const char* image);
            } StringTemplate;
            struct {
              libCatCode_multiplatform_KType* (*_type)(void);
              libCatCode_multiplatform_kref_love_forte_catcode_WildcatTemplate (*get_nekoTemplate)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_WildcatTemplate (*get_stringTemplate)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_LazyCodeBuilder (*getLazyNekoBuilder)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil thiz, const char* type, libCatCode_multiplatform_KBoolean encode);
              libCatCode_multiplatform_kref_love_forte_catcode_Neko (*getNeko)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil thiz, const char* text, const char* type, libCatCode_multiplatform_KInt index);
              libCatCode_multiplatform_kref_love_forte_catcode_CodeBuilder (*getNekoBuilder)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil thiz, const char* type, libCatCode_multiplatform_KBoolean encode);
              libCatCode_multiplatform_kref_love_forte_catcode_CodeBuilder (*getStringCodeBuilder)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil thiz, const char* type, libCatCode_multiplatform_KBoolean encode);
              libCatCode_multiplatform_kref_love_forte_catcode_NoraNeko (*toNeko)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil thiz, const char* type);
              libCatCode_multiplatform_kref_love_forte_catcode_NoraNeko (*toNeko_)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil thiz, const char* type, libCatCode_multiplatform_kref_kotlin_Array kv);
              libCatCode_multiplatform_kref_love_forte_catcode_NoraNeko (*toNeko__)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil thiz, const char* type, libCatCode_multiplatform_KBoolean encode, libCatCode_multiplatform_kref_kotlin_Array paramText);
              libCatCode_multiplatform_kref_love_forte_catcode_NoraNeko (*toNeko___)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil thiz, const char* type, libCatCode_multiplatform_kref_kotlin_collections_Map params);
              struct {
                libCatCode_multiplatform_KType* (*_type)(void);
                libCatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil_Companion (*_instance)();
                libCatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil (*getInstance)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil_Companion thiz, const char* codeType);
              } Companion;
            } WildcatCodeUtil;
            struct {
              libCatCode_multiplatform_KType* (*_type)(void);
              libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringCodeBuilder (*WildcatStringCodeBuilder)(const char* codeType, const char* type, libCatCode_multiplatform_KBoolean encode);
              const char* (*get_codeType)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringCodeBuilder thiz);
              const char* (*get_type)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringCodeBuilder thiz);
              const char* (*build)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringCodeBuilder thiz);
              libCatCode_multiplatform_kref_love_forte_catcode_WildcatCodeBuilder_WildcatCodeBuilderKey (*key)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringCodeBuilder thiz, const char* key);
            } WildcatStringCodeBuilder;
            struct {
              libCatCode_multiplatform_KType* (*_type)(void);
              libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate (*WildcatStringTemplate)(const char* codeType, libCatCode_multiplatform_kref_love_forte_catcode_WildcatCodeUtil utilInstance);
              const char* (*at)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, libCatCode_multiplatform_KLong code);
              const char* (*at_)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* code);
              const char* (*atAll)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz);
              const char* (*bface)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, libCatCode_multiplatform_KLong id);
              const char* (*bface_)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* id);
              const char* (*customMusic)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* url, const char* audio, const char* title);
              const char* (*customMusic_)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* url, const char* audio, const char* title, const char* content, const char* image);
              const char* (*dice)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz);
              const char* (*dice_)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, libCatCode_multiplatform_KInt type);
              const char* (*dice__)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* type);
              const char* (*face)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, libCatCode_multiplatform_KLong id);
              const char* (*face_)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* id);
              const char* (*image)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* file);
              const char* (*image_)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* file, libCatCode_multiplatform_KBoolean flash);
              const char* (*music)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* type, const char* id);
              const char* (*music_)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* type, const char* id, const char* style);
              const char* (*record)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* file);
              const char* (*record_)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* file, libCatCode_multiplatform_KBoolean magic);
              const char* (*rps)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz);
              const char* (*rps_)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, libCatCode_multiplatform_KInt type);
              const char* (*rps__)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* type);
              const char* (*sface)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, libCatCode_multiplatform_KLong id);
              const char* (*sface_)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* id);
              const char* (*shake)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz);
              const char* (*share)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* url, const char* title);
              const char* (*share_)(libCatCode_multiplatform_kref_love_forte_catcode_WildcatStringTemplate thiz, const char* url, const char* title, const char* content, const char* image);
            } WildcatStringTemplate;
            struct {
              struct {
                libCatCode_multiplatform_KType* (*_type)(void);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko (*LazyMapNeko)(const char* type);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko (*LazyMapNeko_)(const char* type, libCatCode_multiplatform_kref_kotlin_collections_Map params);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko (*LazyMapNeko__)(const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko (*LazyMapNeko___)(const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko (*LazyMapNeko____)(libCatCode_multiplatform_kref_love_forte_catcode_collection_LazyMap params, const char* type);
                libCatCode_multiplatform_kref_kotlin_collections_Set (*get_entries)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz);
                libCatCode_multiplatform_kref_kotlin_collections_Set (*get_keys)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz);
                libCatCode_multiplatform_KInt (*get_length)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz);
                libCatCode_multiplatform_KInt (*get_size)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz);
                const char* (*get_type)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz);
                void (*set_type)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz, const char* set);
                libCatCode_multiplatform_kref_kotlin_collections_Collection (*get_values)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz);
                libCatCode_multiplatform_KBoolean (*containsKey)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz, const char* key);
                libCatCode_multiplatform_KBoolean (*containsValue)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz, const char* value);
                libCatCode_multiplatform_KBoolean (*equals)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz, libCatCode_multiplatform_kref_kotlin_Any other);
                libCatCode_multiplatform_KChar (*get)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz, libCatCode_multiplatform_KInt index);
                const char* (*get_)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz, const char* key);
                const char* (*getNoDecode)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz, const char* key);
                const char* (*getOrDefault)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz, const char* key, const char* defaultValue);
                libCatCode_multiplatform_KInt (*hashCode)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz);
                libCatCode_multiplatform_kref_love_forte_catcode_Neko (*immutable)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz);
                libCatCode_multiplatform_KBoolean (*isEmpty)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz);
                libCatCode_multiplatform_kref_love_forte_catcode_MutableNeko (*mutable_)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz);
                libCatCode_multiplatform_kref_kotlin_CharSequence (*subSequence)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz, libCatCode_multiplatform_KInt startIndex, libCatCode_multiplatform_KInt endIndex);
                libCatCode_multiplatform_kref_kotlin_collections_Map (*toMap)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz);
                const char* (*toString)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko thiz);
                struct {
                  libCatCode_multiplatform_KType* (*_type)(void);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko_Of (*_instance)();
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko (*byCode)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko_Of thiz, const char* code, libCatCode_multiplatform_KBoolean decode);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko (*byKV)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko_Of thiz, const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko (*byLazyMap)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko_Of thiz, const char* type, libCatCode_multiplatform_kref_love_forte_catcode_collection_LazyMap params);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko (*byMap)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko_Of thiz, const char* type, libCatCode_multiplatform_kref_kotlin_collections_Map params);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko (*byParamString)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko_Of thiz, const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko (*mutableByCode)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko_Of thiz, const char* code, libCatCode_multiplatform_KBoolean decode);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko (*mutableByKV)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko_Of thiz, const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko (*mutableByMap)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko_Of thiz, const char* type, libCatCode_multiplatform_kref_kotlin_collections_Map params);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko (*mutableByParamString)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNeko_Of thiz, const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                } Of;
              } LazyMapNeko;
              struct {
                libCatCode_multiplatform_KType* (*_type)(void);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko (*LazyMapNoraNeko)(const char* codeType, const char* type);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko (*LazyMapNoraNeko_)(const char* codeType, const char* type, libCatCode_multiplatform_kref_kotlin_collections_Map params);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko (*LazyMapNoraNeko__)(const char* codeType, const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko (*LazyMapNoraNeko___)(const char* codeType, const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko (*LazyMapNoraNeko____)(const char* codeType, libCatCode_multiplatform_kref_love_forte_catcode_collection_LazyMap params, const char* type);
                const char* (*get_codeType)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz);
                libCatCode_multiplatform_kref_kotlin_collections_Set (*get_entries)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz);
                libCatCode_multiplatform_kref_kotlin_collections_Set (*get_keys)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz);
                libCatCode_multiplatform_KInt (*get_length)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz);
                libCatCode_multiplatform_KInt (*get_size)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz);
                const char* (*get_type)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz);
                void (*set_type)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz, const char* set);
                libCatCode_multiplatform_kref_kotlin_collections_Collection (*get_values)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz);
                libCatCode_multiplatform_KBoolean (*containsKey)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz, const char* key);
                libCatCode_multiplatform_KBoolean (*containsValue)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz, const char* value);
                libCatCode_multiplatform_KBoolean (*equals)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz, libCatCode_multiplatform_kref_kotlin_Any other);
                libCatCode_multiplatform_KChar (*get)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz, libCatCode_multiplatform_KInt index);
                const char* (*get_)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz, const char* key);
                const char* (*getNoDecode)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz, const char* key);
                const char* (*getOrDefault)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz, const char* key, const char* defaultValue);
                libCatCode_multiplatform_KInt (*hashCode)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz);
                libCatCode_multiplatform_kref_love_forte_catcode_Neko (*immutable)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz);
                libCatCode_multiplatform_KBoolean (*isEmpty)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz);
                libCatCode_multiplatform_kref_love_forte_catcode_MutableNeko (*mutable_)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz);
                libCatCode_multiplatform_kref_kotlin_CharSequence (*subSequence)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz, libCatCode_multiplatform_KInt startIndex, libCatCode_multiplatform_KInt endIndex);
                libCatCode_multiplatform_kref_kotlin_collections_Map (*toMap)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz);
                const char* (*toString)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko thiz);
                struct {
                  libCatCode_multiplatform_KType* (*_type)(void);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko_Of (*_instance)();
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko (*byCode)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* code, libCatCode_multiplatform_KBoolean decode);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko (*byKV)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko (*byMap)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* type, libCatCode_multiplatform_kref_kotlin_collections_Map params);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko (*byParamString)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko (*mutableByCode)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* code, libCatCode_multiplatform_KBoolean decode);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko (*mutableByKV)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko (*mutableByMap)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* type, libCatCode_multiplatform_kref_kotlin_collections_Map params);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko (*mutableByParamString)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                } Of;
              } LazyMapNoraNeko;
              struct {
                libCatCode_multiplatform_KType* (*_type)(void);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko (*LazyMutableMapNeko)(const char* type);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko (*LazyMutableMapNeko_)(const char* type, libCatCode_multiplatform_kref_kotlin_collections_Map params);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko (*LazyMutableMapNeko__)(const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko (*LazyMutableMapNeko___)(const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                libCatCode_multiplatform_kref_kotlin_collections_MutableSet (*get_entries)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz);
                libCatCode_multiplatform_kref_kotlin_collections_MutableSet (*get_keys)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz);
                libCatCode_multiplatform_KInt (*get_size)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz);
                libCatCode_multiplatform_kref_kotlin_collections_MutableCollection (*get_values)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz);
                void (*clear)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz);
                libCatCode_multiplatform_KBoolean (*containsKey)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz, const char* key);
                libCatCode_multiplatform_KBoolean (*containsValue)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz, const char* value);
                const char* (*get)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz, const char* key);
                libCatCode_multiplatform_kref_love_forte_catcode_Neko (*immutable)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz);
                libCatCode_multiplatform_KBoolean (*isEmpty)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz);
                libCatCode_multiplatform_kref_love_forte_catcode_MutableNeko (*mutable_)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz);
                const char* (*put)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz, const char* key, const char* value);
                void (*putAll)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz, libCatCode_multiplatform_kref_kotlin_collections_Map from);
                const char* (*remove)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz, const char* key);
                libCatCode_multiplatform_kref_kotlin_collections_MutableMap (*toMap)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz);
                const char* (*toString)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNeko thiz);
              } LazyMutableMapNeko;
              struct {
                libCatCode_multiplatform_KType* (*_type)(void);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko (*LazyMutableMapNoraNeko)(const char* codeType, const char* type);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko (*LazyMutableMapNoraNeko_)(const char* codeType, const char* type, libCatCode_multiplatform_kref_kotlin_collections_Map params);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko (*LazyMutableMapNoraNeko__)(const char* codeType, const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko (*LazyMutableMapNoraNeko___)(const char* codeType, const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                libCatCode_multiplatform_kref_kotlin_collections_MutableSet (*get_entries)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz);
                libCatCode_multiplatform_kref_kotlin_collections_MutableSet (*get_keys)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz);
                libCatCode_multiplatform_kref_love_forte_catcode_collection_MutableLazyMap (*get_params)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz);
                libCatCode_multiplatform_KInt (*get_size)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz);
                libCatCode_multiplatform_kref_kotlin_collections_MutableCollection (*get_values)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz);
                void (*clear)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz);
                libCatCode_multiplatform_KBoolean (*containsKey)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz, const char* key);
                libCatCode_multiplatform_KBoolean (*containsValue)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz, const char* value);
                const char* (*get)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz, const char* key);
                libCatCode_multiplatform_kref_love_forte_catcode_Neko (*immutable)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz);
                libCatCode_multiplatform_KBoolean (*isEmpty)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz);
                libCatCode_multiplatform_kref_love_forte_catcode_MutableNeko (*mutable_)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz);
                const char* (*put)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz, const char* key, const char* value);
                void (*putAll)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz, libCatCode_multiplatform_kref_kotlin_collections_Map from);
                const char* (*remove)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz, const char* key);
                libCatCode_multiplatform_kref_kotlin_collections_MutableMap (*toMap)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz);
                const char* (*toString)(libCatCode_multiplatform_kref_love_forte_catcode_codes_LazyMutableMapNoraNeko thiz);
              } LazyMutableMapNoraNeko;
              struct {
                libCatCode_multiplatform_KType* (*_type)(void);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko (*MapNeko)(const char* type);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko (*MapNeko_)(const char* type, libCatCode_multiplatform_kref_kotlin_collections_Map params);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko (*MapNeko__)(const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko (*MapNeko___)(const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko (*MapNeko____)(libCatCode_multiplatform_kref_kotlin_collections_Map params, const char* type);
                libCatCode_multiplatform_kref_kotlin_collections_Set (*get_entries)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz);
                libCatCode_multiplatform_kref_kotlin_collections_Set (*get_keys)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz);
                libCatCode_multiplatform_KInt (*get_length)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz);
                libCatCode_multiplatform_kref_kotlin_collections_Map (*get_params)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz);
                libCatCode_multiplatform_KInt (*get_size)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz);
                const char* (*get_type)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz);
                void (*set_type)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz, const char* set);
                libCatCode_multiplatform_kref_kotlin_collections_Collection (*get_values)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz);
                libCatCode_multiplatform_KBoolean (*containsKey)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz, const char* key);
                libCatCode_multiplatform_KBoolean (*containsValue)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz, const char* value);
                libCatCode_multiplatform_KBoolean (*equals)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz, libCatCode_multiplatform_kref_kotlin_Any other);
                libCatCode_multiplatform_KChar (*get)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz, libCatCode_multiplatform_KInt index);
                const char* (*get_)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz, const char* key);
                const char* (*getNoDecode)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz, const char* key);
                const char* (*getOrDefault)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz, const char* key, const char* defaultValue);
                libCatCode_multiplatform_KInt (*hashCode)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz);
                libCatCode_multiplatform_kref_love_forte_catcode_Neko (*immutable)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz);
                libCatCode_multiplatform_KBoolean (*isEmpty)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz);
                libCatCode_multiplatform_kref_love_forte_catcode_MutableNeko (*mutable_)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz);
                libCatCode_multiplatform_kref_kotlin_CharSequence (*subSequence)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz, libCatCode_multiplatform_KInt startIndex, libCatCode_multiplatform_KInt endIndex);
                libCatCode_multiplatform_kref_kotlin_collections_Map (*toMap)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz);
                const char* (*toString)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko thiz);
                struct {
                  libCatCode_multiplatform_KType* (*_type)(void);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko_Of (*_instance)();
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko (*byCode)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko_Of thiz, const char* code, libCatCode_multiplatform_KBoolean decode);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko (*byKV)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko_Of thiz, const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko (*byMap)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko_Of thiz, const char* type, libCatCode_multiplatform_kref_kotlin_collections_Map params);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko (*byParamString)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko_Of thiz, const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko (*mutableByCode)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko_Of thiz, const char* code, libCatCode_multiplatform_KBoolean decode);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko (*mutableByKV)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko_Of thiz, const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko (*mutableByMap)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko_Of thiz, const char* type, libCatCode_multiplatform_kref_kotlin_collections_Map params);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko (*mutableByParamString)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNeko_Of thiz, const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                } Of;
              } MapNeko;
              struct {
                libCatCode_multiplatform_KType* (*_type)(void);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko (*MapNoraNeko)(const char* codeType, const char* type);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko (*MapNoraNeko_)(const char* codeType, const char* type, libCatCode_multiplatform_kref_kotlin_collections_Map params);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko (*MapNoraNeko__)(const char* codeType, const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko (*MapNoraNeko___)(const char* codeType, const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko (*MapNoraNeko____)(const char* codeType, libCatCode_multiplatform_kref_kotlin_collections_Map params, const char* type);
                const char* (*get_codeType)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz);
                libCatCode_multiplatform_kref_kotlin_collections_Set (*get_entries)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz);
                libCatCode_multiplatform_kref_kotlin_collections_Set (*get_keys)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz);
                libCatCode_multiplatform_KInt (*get_length)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz);
                libCatCode_multiplatform_kref_kotlin_collections_Map (*get_params)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz);
                libCatCode_multiplatform_KInt (*get_size)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz);
                const char* (*get_type)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz);
                void (*set_type)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz, const char* set);
                libCatCode_multiplatform_kref_kotlin_collections_Collection (*get_values)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz);
                libCatCode_multiplatform_KBoolean (*containsKey)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz, const char* key);
                libCatCode_multiplatform_KBoolean (*containsValue)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz, const char* value);
                libCatCode_multiplatform_KBoolean (*equals)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz, libCatCode_multiplatform_kref_kotlin_Any other);
                libCatCode_multiplatform_KChar (*get)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz, libCatCode_multiplatform_KInt index);
                const char* (*get_)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz, const char* key);
                const char* (*getNoDecode)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz, const char* key);
                const char* (*getOrDefault)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz, const char* key, const char* defaultValue);
                libCatCode_multiplatform_KInt (*hashCode)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz);
                libCatCode_multiplatform_kref_love_forte_catcode_Neko (*immutable)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz);
                libCatCode_multiplatform_KBoolean (*isEmpty)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz);
                libCatCode_multiplatform_kref_love_forte_catcode_MutableNeko (*mutable_)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz);
                libCatCode_multiplatform_kref_kotlin_CharSequence (*subSequence)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz, libCatCode_multiplatform_KInt startIndex, libCatCode_multiplatform_KInt endIndex);
                libCatCode_multiplatform_kref_kotlin_collections_Map (*toMap)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz);
                const char* (*toString)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko thiz);
                struct {
                  libCatCode_multiplatform_KType* (*_type)(void);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko_Of (*_instance)();
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko (*byCode)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* code, libCatCode_multiplatform_KBoolean decode);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko (*byKV)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko (*byMap)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* type, libCatCode_multiplatform_kref_kotlin_collections_Map params);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko (*byParamString)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko (*mutableByCode)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* code, libCatCode_multiplatform_KBoolean decode);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko (*mutableByKV)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko (*mutableByMap)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* type, libCatCode_multiplatform_kref_kotlin_collections_Map params);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko (*mutableByParamString)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                } Of;
              } MapNoraNeko;
              struct {
                libCatCode_multiplatform_KType* (*_type)(void);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko (*MutableMapNeko)(const char* type);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko (*MutableMapNeko_)(const char* type, libCatCode_multiplatform_kref_kotlin_collections_Map params);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko (*MutableMapNeko__)(const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko (*MutableMapNeko___)(const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                libCatCode_multiplatform_kref_kotlin_collections_MutableSet (*get_entries)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz);
                libCatCode_multiplatform_kref_kotlin_collections_MutableSet (*get_keys)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz);
                libCatCode_multiplatform_kref_kotlin_collections_MutableMap (*get_params)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz);
                libCatCode_multiplatform_KInt (*get_size)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz);
                libCatCode_multiplatform_kref_kotlin_collections_MutableCollection (*get_values)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz);
                void (*clear)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz);
                libCatCode_multiplatform_KBoolean (*containsKey)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz, const char* key);
                libCatCode_multiplatform_KBoolean (*containsValue)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz, const char* value);
                const char* (*get)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz, const char* key);
                libCatCode_multiplatform_kref_love_forte_catcode_Neko (*immutable)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz);
                libCatCode_multiplatform_KBoolean (*isEmpty)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz);
                libCatCode_multiplatform_kref_love_forte_catcode_MutableNeko (*mutable_)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz);
                const char* (*put)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz, const char* key, const char* value);
                void (*putAll)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz, libCatCode_multiplatform_kref_kotlin_collections_Map from);
                const char* (*remove)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz, const char* key);
                libCatCode_multiplatform_kref_kotlin_collections_MutableMap (*toMap)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz);
                const char* (*toString)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNeko thiz);
              } MutableMapNeko;
              struct {
                libCatCode_multiplatform_KType* (*_type)(void);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko (*MutableMapNoraNeko)(const char* codeType, const char* type);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko (*MutableMapNoraNeko_)(const char* codeType, const char* type, libCatCode_multiplatform_kref_kotlin_collections_Map params);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko (*MutableMapNoraNeko__)(const char* codeType, const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko (*MutableMapNoraNeko___)(const char* codeType, const char* type, libCatCode_multiplatform_kref_kotlin_Array params);
                libCatCode_multiplatform_kref_kotlin_collections_MutableSet (*get_entries)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz);
                libCatCode_multiplatform_kref_kotlin_collections_MutableSet (*get_keys)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz);
                libCatCode_multiplatform_kref_kotlin_collections_MutableMap (*get_params)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz);
                libCatCode_multiplatform_KInt (*get_size)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz);
                libCatCode_multiplatform_kref_kotlin_collections_MutableCollection (*get_values)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz);
                void (*clear)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz);
                libCatCode_multiplatform_KBoolean (*containsKey)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz, const char* key);
                libCatCode_multiplatform_KBoolean (*containsValue)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz, const char* value);
                const char* (*get)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz, const char* key);
                libCatCode_multiplatform_kref_love_forte_catcode_Neko (*immutable)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz);
                libCatCode_multiplatform_KBoolean (*isEmpty)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz);
                libCatCode_multiplatform_kref_love_forte_catcode_MutableNeko (*mutable_)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz);
                const char* (*put)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz, const char* key, const char* value);
                void (*putAll)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz, libCatCode_multiplatform_kref_kotlin_collections_Map from);
                const char* (*remove)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz, const char* key);
                libCatCode_multiplatform_kref_kotlin_collections_MutableMap (*toMap)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz);
                const char* (*toString)(libCatCode_multiplatform_kref_love_forte_catcode_codes_MutableMapNoraNeko thiz);
              } MutableMapNoraNeko;
              struct {
                libCatCode_multiplatform_KType* (*_type)(void);
                const char* (*get_codeType)(libCatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz);
                libCatCode_multiplatform_kref_kotlin_collections_Set (*get_entries)(libCatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz);
                libCatCode_multiplatform_kref_kotlin_collections_Set (*get_keys)(libCatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz);
                libCatCode_multiplatform_KInt (*get_length)(libCatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz);
                libCatCode_multiplatform_KInt (*get_size)(libCatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz);
                const char* (*get_type)(libCatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz);
                libCatCode_multiplatform_kref_kotlin_collections_Collection (*get_values)(libCatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz);
                libCatCode_multiplatform_KBoolean (*containsKey)(libCatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz, const char* key);
                libCatCode_multiplatform_KBoolean (*containsValue)(libCatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz, const char* value);
                libCatCode_multiplatform_KBoolean (*equals)(libCatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz, libCatCode_multiplatform_kref_kotlin_Any other);
                libCatCode_multiplatform_KChar (*get)(libCatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz, libCatCode_multiplatform_KInt index);
                const char* (*get_)(libCatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz, const char* key);
                const char* (*getNoDecode)(libCatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz, const char* key);
                libCatCode_multiplatform_KInt (*hashCode)(libCatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz);
                libCatCode_multiplatform_kref_love_forte_catcode_Neko (*immutable)(libCatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz);
                libCatCode_multiplatform_KBoolean (*isEmpty)(libCatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz);
                libCatCode_multiplatform_kref_love_forte_catcode_MutableNeko (*mutable_)(libCatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz);
                libCatCode_multiplatform_kref_kotlin_CharSequence (*subSequence)(libCatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz, libCatCode_multiplatform_KInt startIndex, libCatCode_multiplatform_KInt endIndex);
                libCatCode_multiplatform_kref_kotlin_collections_Map (*toMap)(libCatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz);
                const char* (*toString)(libCatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko thiz);
                struct {
                  libCatCode_multiplatform_KType* (*_type)(void);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko_Of (*_instance)();
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko (*byCode)(libCatCode_multiplatform_kref_love_forte_catcode_codes_NoraNyanko_Of thiz, const char* code);
                } Of;
              } NoraNyanko;
              struct {
                libCatCode_multiplatform_KType* (*_type)(void);
                libCatCode_multiplatform_kref_kotlin_collections_Set (*get_entries)(libCatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz);
                libCatCode_multiplatform_kref_kotlin_collections_Set (*get_keys)(libCatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz);
                libCatCode_multiplatform_KInt (*get_length)(libCatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz);
                libCatCode_multiplatform_KInt (*get_size)(libCatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz);
                const char* (*get_type)(libCatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz);
                libCatCode_multiplatform_kref_kotlin_collections_Collection (*get_values)(libCatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz);
                libCatCode_multiplatform_KBoolean (*containsKey)(libCatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz, const char* key);
                libCatCode_multiplatform_KBoolean (*containsValue)(libCatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz, const char* value);
                libCatCode_multiplatform_KBoolean (*equals)(libCatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz, libCatCode_multiplatform_kref_kotlin_Any other);
                libCatCode_multiplatform_KChar (*get)(libCatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz, libCatCode_multiplatform_KInt index);
                const char* (*get_)(libCatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz, const char* key);
                const char* (*getNoDecode)(libCatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz, const char* key);
                libCatCode_multiplatform_KInt (*hashCode)(libCatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz);
                libCatCode_multiplatform_kref_love_forte_catcode_Neko (*immutable)(libCatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz);
                libCatCode_multiplatform_KBoolean (*isEmpty)(libCatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz);
                libCatCode_multiplatform_kref_love_forte_catcode_MutableNeko (*mutable_)(libCatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz);
                libCatCode_multiplatform_kref_kotlin_CharSequence (*subSequence)(libCatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz, libCatCode_multiplatform_KInt startIndex, libCatCode_multiplatform_KInt endIndex);
                libCatCode_multiplatform_kref_kotlin_collections_Map (*toMap)(libCatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz);
                const char* (*toString)(libCatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko thiz);
                struct {
                  libCatCode_multiplatform_KType* (*_type)(void);
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko_Of (*_instance)();
                  libCatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko (*byCode)(libCatCode_multiplatform_kref_love_forte_catcode_codes_Nyanko_Of thiz, const char* code);
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
} libCatCode_multiplatform_ExportedSymbols;
extern libCatCode_multiplatform_ExportedSymbols* libCatCode_multiplatform_symbols(void);
#ifdef __cplusplus
}  /* extern "C" */
#endif
#endif  /* KONAN_LIBCATCODE_MULTIPLATFORM_H */
