#ifndef KONAN_LIBCATCODE_H
#define KONAN_LIBCATCODE_H
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
typedef bool            libCatCode_KBoolean;
#else
typedef _Bool           libCatCode_KBoolean;
#endif
typedef unsigned short     libCatCode_KChar;
typedef signed char        libCatCode_KByte;
typedef short              libCatCode_KShort;
typedef int                libCatCode_KInt;
typedef long long          libCatCode_KLong;
typedef unsigned char      libCatCode_KUByte;
typedef unsigned short     libCatCode_KUShort;
typedef unsigned int       libCatCode_KUInt;
typedef unsigned long long libCatCode_KULong;
typedef float              libCatCode_KFloat;
typedef double             libCatCode_KDouble;
typedef float __attribute__ ((__vector_size__ (16))) libCatCode_KVector128;
typedef void*              libCatCode_KNativePtr;
struct libCatCode_KType;
typedef struct libCatCode_KType libCatCode_KType;

typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_kotlin_Byte;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_kotlin_Short;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_kotlin_Int;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_kotlin_Long;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_kotlin_Float;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_kotlin_Double;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_kotlin_Char;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_kotlin_Boolean;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_kotlin_Unit;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_Neko;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_kotlin_text_Regex;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_BaseMutableNoraNeko;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_BuilderAble;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_LazyCodeBuilder;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_CodeBuilder;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_CatCodeUtil;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_CodeTemplate;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_kotlin_Array;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_kotlin_collections_Iterator;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_kotlin_collections_List;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_kotlin_CharSequence;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_ToCatParam;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_kotlin_collections_Map;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_CatDecoder;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_CatEncoder;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_EmptyNeko;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_kotlin_collections_Set;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_kotlin_collections_Collection;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_kotlin_Any;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_MutableNeko;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_EmptyNoraNeko;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_LazyNekoBuilder;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_kotlin_LazyThreadSafetyMode;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_LazyCodeBuilder_LazyCodeBuilderKey;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_LazyNoraNekoBuilder;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_LazyWildcatCodeBuilder_LazyWildcatCodeBuilderKey;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_Msgs;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_kotlin_Function0;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_kotlin_collections_MutableIterator;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_kotlin_collections_MutableListIterator;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_kotlin_collections_MutableList;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_MutableNoraNeko;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_Neko_Construct;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_NekoAibo;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_NekoBuilder;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_CodeBuilder_CodeBuilderKey;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_NekoTemplate;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_NoraNeko;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_NoraNekoBuilder;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_WildcatCodeBuilder_WildcatCodeBuilderKey;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_NoraNekoTemplate;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_WildcatTemplate;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_StringCodeBuilder;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_StringTemplate;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_TemplateAble;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_WildcatCodeUtil;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_WildcatCodeUtil_Companion;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_WildcatStringCodeBuilder;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_WildcatStringTemplate;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_codes_LazyMapNeko;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_collection_LazyMap;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_codes_LazyMapNeko_Of;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_codes_MapNeko;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_codes_MutableMapNeko;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_codes_LazyMapNoraNeko;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_codes_LazyMapNoraNeko_Of;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_codes_MutableMapNoraNeko;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_codes_LazyMutableMapNeko;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_kotlin_collections_MutableSet;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_kotlin_collections_MutableCollection;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_kotlin_collections_MutableMap;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_codes_LazyMutableMapNoraNeko;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_collection_MutableLazyMap;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_codes_MapNeko_Of;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_codes_MapNoraNeko;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_codes_MapNoraNeko_Of;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_codes_NoraNyanko;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_codes_NoraNyanko_Of;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_codes_Nyanko;
typedef struct {
  libCatCode_KNativePtr pinned;
} libCatCode_kref_catcode_codes_Nyanko_Of;


typedef struct {
  /* Service functions. */
  void (*DisposeStablePointer)(libCatCode_KNativePtr ptr);
  void (*DisposeString)(const char* string);
  libCatCode_KBoolean (*IsInstance)(libCatCode_KNativePtr ref, const libCatCode_KType* type);
  libCatCode_kref_kotlin_Byte (*createNullableByte)(libCatCode_KByte);
  libCatCode_kref_kotlin_Short (*createNullableShort)(libCatCode_KShort);
  libCatCode_kref_kotlin_Int (*createNullableInt)(libCatCode_KInt);
  libCatCode_kref_kotlin_Long (*createNullableLong)(libCatCode_KLong);
  libCatCode_kref_kotlin_Float (*createNullableFloat)(libCatCode_KFloat);
  libCatCode_kref_kotlin_Double (*createNullableDouble)(libCatCode_KDouble);
  libCatCode_kref_kotlin_Char (*createNullableChar)(libCatCode_KChar);
  libCatCode_kref_kotlin_Boolean (*createNullableBoolean)(libCatCode_KBoolean);
  libCatCode_kref_kotlin_Unit (*createNullableUnit)(void);

  /* User functions. */
  struct {
    struct {
      struct {
        const char* (*get_CAT_END)();
        const char* (*get_CAT_HEAD)();
        const char* (*get_CAT_KV)();
        const char* (*get_CAT_PS)();
        const char* (*get_CAT_TYPE)();
        libCatCode_kref_catcode_Neko (*get_NekoAtAll)();
        libCatCode_kref_catcode_Neko (*get_NekoDice)();
        libCatCode_kref_catcode_Neko (*get_NekoRps)();
        libCatCode_kref_catcode_Neko (*get_NekoShake)();
        libCatCode_kref_kotlin_text_Regex (*get_nekoMatchRegex)();
        const char* (*catHead)(const char* codeType);
        const char* (*deCatParam)(const char* thiz);
        const char* (*deCatText)(const char* thiz);
        const char* (*enCatParam)(const char* thiz);
        const char* (*enCatText)(const char* thiz);
        struct {
          libCatCode_KType* (*_type)(void);
          libCatCode_kref_catcode_BaseMutableNoraNeko (*BaseMutableNoraNeko)();
        } BaseMutableNoraNeko;
        struct {
          libCatCode_KType* (*_type)(void);
          libCatCode_kref_catcode_LazyCodeBuilder (*getLazyNekoBuilder)(libCatCode_kref_catcode_BuilderAble thiz, const char* type, libCatCode_KBoolean encode);
          libCatCode_kref_catcode_CodeBuilder (*getNekoBuilder)(libCatCode_kref_catcode_BuilderAble thiz, const char* type, libCatCode_KBoolean encode);
          libCatCode_kref_catcode_CodeBuilder (*getStringCodeBuilder)(libCatCode_kref_catcode_BuilderAble thiz, const char* type, libCatCode_KBoolean encode);
        } BuilderAble;
        struct {
          libCatCode_KType* (*_type)(void);
          libCatCode_kref_catcode_CatCodeUtil (*_instance)();
          const char* (*get_catCodeHead)(libCatCode_kref_catcode_CatCodeUtil thiz);
          libCatCode_kref_catcode_CatCodeUtil (*get_instance)(libCatCode_kref_catcode_CatCodeUtil thiz);
          libCatCode_kref_catcode_CodeTemplate (*get_nekoTemplate)(libCatCode_kref_catcode_CatCodeUtil thiz);
          libCatCode_kref_catcode_CodeTemplate (*get_stringTemplate)(libCatCode_kref_catcode_CatCodeUtil thiz);
          libCatCode_KBoolean (*contains)(libCatCode_kref_catcode_CatCodeUtil thiz, const char* text, const char* type, libCatCode_kref_kotlin_Array params);
          libCatCode_KBoolean (*contains_)(libCatCode_kref_catcode_CatCodeUtil thiz, const char* text, const char* type, libCatCode_KBoolean encode, libCatCode_kref_kotlin_Array params);
          libCatCode_KBoolean (*contains__)(libCatCode_kref_catcode_CatCodeUtil thiz, const char* text, const char* type, libCatCode_KBoolean encode, libCatCode_kref_kotlin_Array params);
          const char* (*getCat)(libCatCode_kref_catcode_CatCodeUtil thiz, const char* text, libCatCode_KInt index);
          const char* (*getCat_)(libCatCode_kref_catcode_CatCodeUtil thiz, const char* text, const char* type, libCatCode_KInt index);
          libCatCode_kref_kotlin_collections_Iterator (*getCatIter)(libCatCode_kref_catcode_CatCodeUtil thiz, const char* text, const char* type);
          libCatCode_kref_kotlin_collections_Iterator (*getCatKVIter)(libCatCode_kref_catcode_CatCodeUtil thiz, const char* code);
          libCatCode_kref_kotlin_collections_Iterator (*getCatKeyIter)(libCatCode_kref_catcode_CatCodeUtil thiz, const char* code);
          libCatCode_kref_kotlin_collections_Iterator (*getCatValueIter)(libCatCode_kref_catcode_CatCodeUtil thiz, const char* code);
          libCatCode_kref_kotlin_collections_List (*getCats)(libCatCode_kref_catcode_CatCodeUtil thiz, const char* text, const char* type);
          libCatCode_kref_catcode_LazyCodeBuilder (*getLazyNekoBuilder)(libCatCode_kref_catcode_CatCodeUtil thiz, const char* type, libCatCode_KBoolean encode);
          libCatCode_kref_catcode_Neko (*getNeko)(libCatCode_kref_catcode_CatCodeUtil thiz, const char* text, libCatCode_KInt index);
          libCatCode_kref_catcode_Neko (*getNeko_)(libCatCode_kref_catcode_CatCodeUtil thiz, const char* text, const char* type, libCatCode_KInt index);
          libCatCode_kref_catcode_CodeBuilder (*getNekoBuilder)(libCatCode_kref_catcode_CatCodeUtil thiz, const char* type, libCatCode_KBoolean encode);
          libCatCode_kref_kotlin_collections_List (*getNekoList)(libCatCode_kref_catcode_CatCodeUtil thiz, const char* text, const char* type);
          const char* (*getParam)(libCatCode_kref_catcode_CatCodeUtil thiz, const char* text, const char* paramKey, libCatCode_KInt index);
          const char* (*getParam_)(libCatCode_kref_catcode_CatCodeUtil thiz, const char* text, const char* type, const char* paramKey, libCatCode_KInt index);
          libCatCode_kref_catcode_CodeBuilder (*getStringCodeBuilder)(libCatCode_kref_catcode_CatCodeUtil thiz, const char* type, libCatCode_KBoolean encode);
          const char* (*remove)(libCatCode_kref_catcode_CatCodeUtil thiz, const char* text, libCatCode_KBoolean trim, libCatCode_KBoolean ignoreEmpty, libCatCode_kref_kotlin_CharSequence delimiter);
          const char* (*removeByType)(libCatCode_kref_catcode_CatCodeUtil thiz, const char* text, const char* type, libCatCode_KBoolean trim, libCatCode_KBoolean ignoreEmpty, libCatCode_kref_kotlin_CharSequence delimiter);
          libCatCode_kref_kotlin_collections_List (*split)(libCatCode_kref_catcode_CatCodeUtil thiz, const char* text);
          const char* (*toCat)(libCatCode_kref_catcode_CatCodeUtil thiz, libCatCode_kref_catcode_ToCatParam typeParam);
          const char* (*toCat_)(libCatCode_kref_catcode_CatCodeUtil thiz, const char* type);
          const char* (*toCat__)(libCatCode_kref_catcode_CatCodeUtil thiz, const char* type, libCatCode_KBoolean encode, libCatCode_kref_kotlin_Array kv);
          const char* (*toCat___)(libCatCode_kref_catcode_CatCodeUtil thiz, const char* type, libCatCode_KBoolean encode, libCatCode_kref_kotlin_Array params);
          const char* (*toCat____)(libCatCode_kref_catcode_CatCodeUtil thiz, const char* type, libCatCode_KBoolean encode, libCatCode_kref_kotlin_collections_Map map);
          libCatCode_kref_catcode_Neko (*toNeko)(libCatCode_kref_catcode_CatCodeUtil thiz, libCatCode_kref_catcode_ToCatParam typeParam);
          libCatCode_kref_catcode_Neko (*toNeko_)(libCatCode_kref_catcode_CatCodeUtil thiz, const char* type);
          libCatCode_kref_catcode_Neko (*toNeko__)(libCatCode_kref_catcode_CatCodeUtil thiz, const char* type, libCatCode_kref_kotlin_Array params);
          libCatCode_kref_catcode_Neko (*toNeko___)(libCatCode_kref_catcode_CatCodeUtil thiz, const char* type, libCatCode_KBoolean encode, libCatCode_kref_kotlin_Array paramText);
          libCatCode_kref_catcode_Neko (*toNeko____)(libCatCode_kref_catcode_CatCodeUtil thiz, const char* type, libCatCode_kref_kotlin_collections_Map params);
        } CatCodeUtil;
        struct {
          libCatCode_KType* (*_type)(void);
          libCatCode_kref_catcode_CatDecoder (*_instance)();
          libCatCode_kref_catcode_CatDecoder (*get_instance)(libCatCode_kref_catcode_CatDecoder thiz);
          const char* (*decodeParams)(libCatCode_kref_catcode_CatDecoder thiz, const char* str);
          const char* (*decodeParamsOrNull)(libCatCode_kref_catcode_CatDecoder thiz, const char* str);
          const char* (*decodeText)(libCatCode_kref_catcode_CatDecoder thiz, const char* str);
          const char* (*decodeTextOrNull)(libCatCode_kref_catcode_CatDecoder thiz, const char* str);
        } CatDecoder;
        struct {
          libCatCode_KType* (*_type)(void);
          libCatCode_kref_catcode_CatEncoder (*_instance)();
          libCatCode_kref_catcode_CatEncoder (*get_instance)(libCatCode_kref_catcode_CatEncoder thiz);
          const char* (*encodeParams)(libCatCode_kref_catcode_CatEncoder thiz, const char* str);
          const char* (*encodeParamsOrNull)(libCatCode_kref_catcode_CatEncoder thiz, const char* str);
          const char* (*encodeText)(libCatCode_kref_catcode_CatEncoder thiz, const char* str);
          const char* (*encodeTextOrNull)(libCatCode_kref_catcode_CatEncoder thiz, const char* str);
        } CatEncoder;
        struct {
          libCatCode_KType* (*_type)(void);
          libCatCode_kref_catcode_EmptyNeko (*EmptyNeko)(const char* type);
          libCatCode_kref_kotlin_collections_Set (*get_entries)(libCatCode_kref_catcode_EmptyNeko thiz);
          libCatCode_kref_kotlin_collections_Set (*get_keys)(libCatCode_kref_catcode_EmptyNeko thiz);
          libCatCode_KInt (*get_length)(libCatCode_kref_catcode_EmptyNeko thiz);
          libCatCode_KInt (*get_size)(libCatCode_kref_catcode_EmptyNeko thiz);
          const char* (*get_type)(libCatCode_kref_catcode_EmptyNeko thiz);
          libCatCode_kref_kotlin_collections_Collection (*get_values)(libCatCode_kref_catcode_EmptyNeko thiz);
          const char* (*component1)(libCatCode_kref_catcode_EmptyNeko thiz);
          libCatCode_KBoolean (*containsKey)(libCatCode_kref_catcode_EmptyNeko thiz, const char* key);
          libCatCode_KBoolean (*containsValue)(libCatCode_kref_catcode_EmptyNeko thiz, const char* value);
          libCatCode_kref_catcode_EmptyNeko (*copy)(libCatCode_kref_catcode_EmptyNeko thiz, const char* type);
          libCatCode_KBoolean (*equals)(libCatCode_kref_catcode_EmptyNeko thiz, libCatCode_kref_kotlin_Any other);
          libCatCode_KChar (*get)(libCatCode_kref_catcode_EmptyNeko thiz, libCatCode_KInt index);
          const char* (*get_)(libCatCode_kref_catcode_EmptyNeko thiz, const char* key);
          const char* (*getNoDecode)(libCatCode_kref_catcode_EmptyNeko thiz, const char* key);
          libCatCode_KInt (*hashCode)(libCatCode_kref_catcode_EmptyNeko thiz);
          libCatCode_kref_catcode_Neko (*immutable)(libCatCode_kref_catcode_EmptyNeko thiz);
          libCatCode_KBoolean (*isEmpty)(libCatCode_kref_catcode_EmptyNeko thiz);
          libCatCode_kref_catcode_MutableNeko (*mutable_)(libCatCode_kref_catcode_EmptyNeko thiz);
          libCatCode_kref_kotlin_CharSequence (*subSequence)(libCatCode_kref_catcode_EmptyNeko thiz, libCatCode_KInt startIndex, libCatCode_KInt endIndex);
          libCatCode_kref_kotlin_collections_Map (*toMap)(libCatCode_kref_catcode_EmptyNeko thiz);
          const char* (*toString)(libCatCode_kref_catcode_EmptyNeko thiz);
        } EmptyNeko;
        struct {
          libCatCode_KType* (*_type)(void);
          libCatCode_kref_catcode_EmptyNoraNeko (*EmptyNoraNeko)(const char* codeType, const char* type);
          const char* (*get_codeType)(libCatCode_kref_catcode_EmptyNoraNeko thiz);
          libCatCode_kref_kotlin_collections_Set (*get_entries)(libCatCode_kref_catcode_EmptyNoraNeko thiz);
          libCatCode_kref_kotlin_collections_Set (*get_keys)(libCatCode_kref_catcode_EmptyNoraNeko thiz);
          libCatCode_KInt (*get_length)(libCatCode_kref_catcode_EmptyNoraNeko thiz);
          libCatCode_KInt (*get_size)(libCatCode_kref_catcode_EmptyNoraNeko thiz);
          const char* (*get_type)(libCatCode_kref_catcode_EmptyNoraNeko thiz);
          libCatCode_kref_kotlin_collections_Collection (*get_values)(libCatCode_kref_catcode_EmptyNoraNeko thiz);
          const char* (*component1)(libCatCode_kref_catcode_EmptyNoraNeko thiz);
          const char* (*component2)(libCatCode_kref_catcode_EmptyNoraNeko thiz);
          libCatCode_KBoolean (*containsKey)(libCatCode_kref_catcode_EmptyNoraNeko thiz, const char* key);
          libCatCode_KBoolean (*containsValue)(libCatCode_kref_catcode_EmptyNoraNeko thiz, const char* value);
          libCatCode_kref_catcode_EmptyNoraNeko (*copy)(libCatCode_kref_catcode_EmptyNoraNeko thiz, const char* codeType, const char* type);
          libCatCode_KBoolean (*equals)(libCatCode_kref_catcode_EmptyNoraNeko thiz, libCatCode_kref_kotlin_Any other);
          libCatCode_KChar (*get)(libCatCode_kref_catcode_EmptyNoraNeko thiz, libCatCode_KInt index);
          const char* (*get_)(libCatCode_kref_catcode_EmptyNoraNeko thiz, const char* key);
          const char* (*getNoDecode)(libCatCode_kref_catcode_EmptyNoraNeko thiz, const char* key);
          libCatCode_KInt (*hashCode)(libCatCode_kref_catcode_EmptyNoraNeko thiz);
          libCatCode_kref_catcode_Neko (*immutable)(libCatCode_kref_catcode_EmptyNoraNeko thiz);
          libCatCode_KBoolean (*isEmpty)(libCatCode_kref_catcode_EmptyNoraNeko thiz);
          libCatCode_kref_catcode_MutableNeko (*mutable_)(libCatCode_kref_catcode_EmptyNoraNeko thiz);
          libCatCode_kref_kotlin_CharSequence (*subSequence)(libCatCode_kref_catcode_EmptyNoraNeko thiz, libCatCode_KInt startIndex, libCatCode_KInt endIndex);
          libCatCode_kref_kotlin_collections_Map (*toMap)(libCatCode_kref_catcode_EmptyNoraNeko thiz);
          const char* (*toString)(libCatCode_kref_catcode_EmptyNoraNeko thiz);
        } EmptyNoraNeko;
        struct {
          libCatCode_KType* (*_type)(void);
          libCatCode_kref_catcode_LazyNekoBuilder (*LazyNekoBuilder)(const char* type, libCatCode_kref_kotlin_LazyThreadSafetyMode mode);
          const char* (*get_type)(libCatCode_kref_catcode_LazyNekoBuilder thiz);
          libCatCode_kref_catcode_Neko (*build)(libCatCode_kref_catcode_LazyNekoBuilder thiz);
          libCatCode_kref_catcode_LazyCodeBuilder_LazyCodeBuilderKey (*key)(libCatCode_kref_catcode_LazyNekoBuilder thiz, const char* key);
        } LazyNekoBuilder;
        struct {
          libCatCode_KType* (*_type)(void);
          libCatCode_kref_catcode_LazyNoraNekoBuilder (*LazyNoraNekoBuilder)(const char* codeType, const char* type);
          const char* (*get_codeType)(libCatCode_kref_catcode_LazyNoraNekoBuilder thiz);
          const char* (*get_type)(libCatCode_kref_catcode_LazyNoraNekoBuilder thiz);
          libCatCode_kref_catcode_Neko (*build)(libCatCode_kref_catcode_LazyNoraNekoBuilder thiz);
          libCatCode_kref_catcode_LazyWildcatCodeBuilder_LazyWildcatCodeBuilderKey (*key)(libCatCode_kref_catcode_LazyNoraNekoBuilder thiz, const char* key);
        } LazyNoraNekoBuilder;
        struct {
          libCatCode_KType* (*_type)(void);
          libCatCode_kref_catcode_Msgs (*Msgs)(libCatCode_kref_kotlin_CharSequence delimiter, libCatCode_kref_kotlin_collections_Collection collection);
          libCatCode_kref_catcode_Msgs (*Msgs_)(libCatCode_kref_kotlin_CharSequence delimiter, libCatCode_kref_kotlin_Function0 delegate);
          libCatCode_KInt (*get_size)(libCatCode_kref_catcode_Msgs thiz);
          libCatCode_KBoolean (*add)(libCatCode_kref_catcode_Msgs thiz, libCatCode_kref_kotlin_CharSequence element);
          void (*add_)(libCatCode_kref_catcode_Msgs thiz, libCatCode_KInt index, libCatCode_kref_kotlin_CharSequence element);
          libCatCode_KBoolean (*addAll)(libCatCode_kref_catcode_Msgs thiz, libCatCode_KInt index, libCatCode_kref_kotlin_collections_Collection elements);
          libCatCode_KBoolean (*addAll_)(libCatCode_kref_catcode_Msgs thiz, libCatCode_kref_kotlin_collections_Collection elements);
          void (*clear)(libCatCode_kref_catcode_Msgs thiz);
          libCatCode_KBoolean (*contains)(libCatCode_kref_catcode_Msgs thiz, libCatCode_kref_kotlin_CharSequence element);
          libCatCode_KBoolean (*containsAll)(libCatCode_kref_catcode_Msgs thiz, libCatCode_kref_kotlin_collections_Collection elements);
          libCatCode_kref_kotlin_CharSequence (*get)(libCatCode_kref_catcode_Msgs thiz, libCatCode_KInt index);
          libCatCode_KInt (*indexOf)(libCatCode_kref_catcode_Msgs thiz, libCatCode_kref_kotlin_CharSequence element);
          libCatCode_KBoolean (*isEmpty)(libCatCode_kref_catcode_Msgs thiz);
          libCatCode_kref_kotlin_collections_MutableIterator (*iterator)(libCatCode_kref_catcode_Msgs thiz);
          libCatCode_KInt (*lastIndexOf)(libCatCode_kref_catcode_Msgs thiz, libCatCode_kref_kotlin_CharSequence element);
          libCatCode_kref_kotlin_collections_MutableListIterator (*listIterator)(libCatCode_kref_catcode_Msgs thiz);
          libCatCode_kref_kotlin_collections_MutableListIterator (*listIterator_)(libCatCode_kref_catcode_Msgs thiz, libCatCode_KInt index);
          libCatCode_kref_catcode_Msgs (*plus)(libCatCode_kref_catcode_Msgs thiz, libCatCode_kref_kotlin_CharSequence other);
          libCatCode_kref_catcode_Msgs (*plus_)(libCatCode_kref_catcode_Msgs thiz, libCatCode_kref_kotlin_collections_List other);
          libCatCode_KBoolean (*remove)(libCatCode_kref_catcode_Msgs thiz, libCatCode_kref_kotlin_CharSequence element);
          libCatCode_KBoolean (*removeAll)(libCatCode_kref_catcode_Msgs thiz, libCatCode_kref_kotlin_collections_Collection elements);
          libCatCode_kref_kotlin_CharSequence (*removeAt)(libCatCode_kref_catcode_Msgs thiz, libCatCode_KInt index);
          libCatCode_KBoolean (*retainAll)(libCatCode_kref_catcode_Msgs thiz, libCatCode_kref_kotlin_collections_Collection elements);
          libCatCode_kref_kotlin_CharSequence (*set)(libCatCode_kref_catcode_Msgs thiz, libCatCode_KInt index, libCatCode_kref_kotlin_CharSequence element);
          libCatCode_kref_kotlin_collections_MutableList (*subList)(libCatCode_kref_catcode_Msgs thiz, libCatCode_KInt fromIndex, libCatCode_KInt toIndex);
          const char* (*toListString)(libCatCode_kref_catcode_Msgs thiz);
          const char* (*toString)(libCatCode_kref_catcode_Msgs thiz);
        } Msgs;
        struct {
          libCatCode_KType* (*_type)(void);
          const char* (*get_type)(libCatCode_kref_catcode_MutableNeko thiz);
          void (*set_type)(libCatCode_kref_catcode_MutableNeko thiz, const char* set);
        } MutableNeko;
        struct {
          libCatCode_KType* (*_type)(void);
          const char* (*get_codeType)(libCatCode_kref_catcode_MutableNoraNeko thiz);
          void (*set_codeType)(libCatCode_kref_catcode_MutableNoraNeko thiz, const char* set);
        } MutableNoraNeko;
        struct {
          libCatCode_KType* (*_type)(void);
          const char* (*get_codeType)(libCatCode_kref_catcode_Neko thiz);
          const char* (*get_type)(libCatCode_kref_catcode_Neko thiz);
          const char* (*getNoDecode)(libCatCode_kref_catcode_Neko thiz, const char* key);
          libCatCode_kref_catcode_Neko (*immutable)(libCatCode_kref_catcode_Neko thiz);
          libCatCode_kref_catcode_MutableNeko (*mutable_)(libCatCode_kref_catcode_Neko thiz);
          libCatCode_kref_catcode_Msgs (*plus)(libCatCode_kref_catcode_Neko thiz, libCatCode_kref_kotlin_CharSequence other);
          struct {
            libCatCode_KType* (*_type)(void);
            libCatCode_kref_catcode_Neko_Construct (*_instance)();
            libCatCode_kref_catcode_Neko (*byCode)(libCatCode_kref_catcode_Neko_Construct thiz, const char* code);
            libCatCode_kref_catcode_Neko (*byType)(libCatCode_kref_catcode_Neko_Construct thiz, const char* type);
          } Construct;
        } Neko;
        struct {
          libCatCode_KType* (*_type)(void);
          const char* (*get_catCodeHead)(libCatCode_kref_catcode_NekoAibo thiz);
          libCatCode_KBoolean (*contains)(libCatCode_kref_catcode_NekoAibo thiz, const char* text, const char* type, libCatCode_kref_kotlin_Array params);
          libCatCode_KBoolean (*contains_)(libCatCode_kref_catcode_NekoAibo thiz, const char* text, const char* type, libCatCode_KBoolean encode, libCatCode_kref_kotlin_Array params);
          libCatCode_KBoolean (*contains__)(libCatCode_kref_catcode_NekoAibo thiz, const char* text, const char* type, libCatCode_KBoolean encode, libCatCode_kref_kotlin_Array params);
          const char* (*getCat)(libCatCode_kref_catcode_NekoAibo thiz, const char* text, libCatCode_KInt index);
          const char* (*getCat_)(libCatCode_kref_catcode_NekoAibo thiz, const char* text, const char* type, libCatCode_KInt index);
          libCatCode_kref_kotlin_collections_Iterator (*getCatIter)(libCatCode_kref_catcode_NekoAibo thiz, const char* text, const char* type);
          libCatCode_kref_kotlin_collections_Iterator (*getCatKVIter)(libCatCode_kref_catcode_NekoAibo thiz, const char* code);
          libCatCode_kref_kotlin_collections_Iterator (*getCatKeyIter)(libCatCode_kref_catcode_NekoAibo thiz, const char* code);
          libCatCode_kref_kotlin_collections_Iterator (*getCatValueIter)(libCatCode_kref_catcode_NekoAibo thiz, const char* code);
          libCatCode_kref_kotlin_collections_List (*getCats)(libCatCode_kref_catcode_NekoAibo thiz, const char* text, const char* type);
          libCatCode_kref_catcode_Neko (*getNeko)(libCatCode_kref_catcode_NekoAibo thiz, const char* text, libCatCode_KInt index);
          libCatCode_kref_catcode_Neko (*getNeko_)(libCatCode_kref_catcode_NekoAibo thiz, const char* text, const char* type, libCatCode_KInt index);
          libCatCode_kref_kotlin_collections_List (*getNekoList)(libCatCode_kref_catcode_NekoAibo thiz, const char* text, const char* type);
          const char* (*getParam)(libCatCode_kref_catcode_NekoAibo thiz, const char* text, const char* paramKey, libCatCode_KInt index);
          const char* (*getParam_)(libCatCode_kref_catcode_NekoAibo thiz, const char* text, const char* type, const char* paramKey, libCatCode_KInt index);
          const char* (*remove)(libCatCode_kref_catcode_NekoAibo thiz, const char* text, libCatCode_KBoolean trim, libCatCode_KBoolean ignoreEmpty, libCatCode_kref_kotlin_CharSequence delimiter);
          const char* (*removeByType)(libCatCode_kref_catcode_NekoAibo thiz, const char* text, const char* type, libCatCode_KBoolean trim, libCatCode_KBoolean ignoreEmpty, libCatCode_kref_kotlin_CharSequence delimiter);
          libCatCode_kref_kotlin_collections_List (*split)(libCatCode_kref_catcode_NekoAibo thiz, const char* text);
          const char* (*toCat)(libCatCode_kref_catcode_NekoAibo thiz, libCatCode_kref_catcode_ToCatParam typeParam);
          const char* (*toCat_)(libCatCode_kref_catcode_NekoAibo thiz, const char* type);
          const char* (*toCat__)(libCatCode_kref_catcode_NekoAibo thiz, const char* type, libCatCode_KBoolean encode, libCatCode_kref_kotlin_Array kv);
          const char* (*toCat___)(libCatCode_kref_catcode_NekoAibo thiz, const char* type, libCatCode_KBoolean encode, libCatCode_kref_kotlin_Array params);
          const char* (*toCat____)(libCatCode_kref_catcode_NekoAibo thiz, const char* type, libCatCode_KBoolean encode, libCatCode_kref_kotlin_collections_Map map);
          libCatCode_kref_catcode_Neko (*toNeko)(libCatCode_kref_catcode_NekoAibo thiz, libCatCode_kref_catcode_ToCatParam typeParam);
          libCatCode_kref_catcode_Neko (*toNeko_)(libCatCode_kref_catcode_NekoAibo thiz, const char* type);
          libCatCode_kref_catcode_Neko (*toNeko__)(libCatCode_kref_catcode_NekoAibo thiz, const char* type, libCatCode_kref_kotlin_Array params);
          libCatCode_kref_catcode_Neko (*toNeko___)(libCatCode_kref_catcode_NekoAibo thiz, const char* type, libCatCode_KBoolean encode, libCatCode_kref_kotlin_Array paramText);
          libCatCode_kref_catcode_Neko (*toNeko____)(libCatCode_kref_catcode_NekoAibo thiz, const char* type, libCatCode_kref_kotlin_collections_Map params);
        } NekoAibo;
        struct {
          libCatCode_KType* (*_type)(void);
          libCatCode_kref_catcode_NekoBuilder (*NekoBuilder)(const char* type);
          const char* (*get_type)(libCatCode_kref_catcode_NekoBuilder thiz);
          libCatCode_kref_catcode_Neko (*build)(libCatCode_kref_catcode_NekoBuilder thiz);
          libCatCode_kref_catcode_CodeBuilder_CodeBuilderKey (*key)(libCatCode_kref_catcode_NekoBuilder thiz, const char* key);
        } NekoBuilder;
        struct {
          libCatCode_KType* (*_type)(void);
          libCatCode_kref_catcode_NekoTemplate (*_instance)();
          libCatCode_kref_catcode_NekoTemplate (*get_instance)(libCatCode_kref_catcode_NekoTemplate thiz);
          libCatCode_kref_catcode_Neko (*at)(libCatCode_kref_catcode_NekoTemplate thiz, const char* code);
          libCatCode_kref_catcode_Neko (*atAll)(libCatCode_kref_catcode_NekoTemplate thiz);
          libCatCode_kref_catcode_Neko (*bface)(libCatCode_kref_catcode_NekoTemplate thiz, const char* id);
          libCatCode_kref_catcode_Neko (*customMusic)(libCatCode_kref_catcode_NekoTemplate thiz, const char* url, const char* audio, const char* title, const char* content, const char* image);
          libCatCode_kref_catcode_Neko (*dice)(libCatCode_kref_catcode_NekoTemplate thiz);
          libCatCode_kref_catcode_Neko (*dice_)(libCatCode_kref_catcode_NekoTemplate thiz, const char* type);
          libCatCode_kref_catcode_Neko (*face)(libCatCode_kref_catcode_NekoTemplate thiz, const char* id);
          libCatCode_kref_catcode_Neko (*image)(libCatCode_kref_catcode_NekoTemplate thiz, const char* file, libCatCode_KBoolean flash);
          libCatCode_kref_catcode_Neko (*music)(libCatCode_kref_catcode_NekoTemplate thiz, const char* type, const char* id, const char* style);
          libCatCode_kref_catcode_Neko (*record)(libCatCode_kref_catcode_NekoTemplate thiz, const char* file, libCatCode_KBoolean magic);
          libCatCode_kref_catcode_Neko (*rps)(libCatCode_kref_catcode_NekoTemplate thiz);
          libCatCode_kref_catcode_Neko (*rps_)(libCatCode_kref_catcode_NekoTemplate thiz, const char* type);
          libCatCode_kref_catcode_Neko (*sface)(libCatCode_kref_catcode_NekoTemplate thiz, const char* id);
          libCatCode_kref_catcode_Neko (*shake)(libCatCode_kref_catcode_NekoTemplate thiz);
          libCatCode_kref_catcode_Neko (*share)(libCatCode_kref_catcode_NekoTemplate thiz, const char* url, const char* title, const char* content, const char* image);
        } NekoTemplate;
        struct {
          libCatCode_KType* (*_type)(void);
          const char* (*get_codeType)(libCatCode_kref_catcode_NoraNeko thiz);
        } NoraNeko;
        struct {
          libCatCode_KType* (*_type)(void);
          libCatCode_kref_catcode_NoraNekoBuilder (*NoraNekoBuilder)(const char* codeType, const char* type);
          const char* (*get_codeType)(libCatCode_kref_catcode_NoraNekoBuilder thiz);
          const char* (*get_type)(libCatCode_kref_catcode_NoraNekoBuilder thiz);
          libCatCode_kref_catcode_Neko (*build)(libCatCode_kref_catcode_NoraNekoBuilder thiz);
          libCatCode_kref_catcode_WildcatCodeBuilder_WildcatCodeBuilderKey (*key)(libCatCode_kref_catcode_NoraNekoBuilder thiz, const char* key);
        } NoraNekoBuilder;
        struct {
          libCatCode_KType* (*_type)(void);
          libCatCode_kref_catcode_NoraNekoTemplate (*NoraNekoTemplate)(const char* codeType, libCatCode_kref_catcode_WildcatTemplate wildcatStringTemplate);
          const char* (*get_codeType)(libCatCode_kref_catcode_NoraNekoTemplate thiz);
          libCatCode_kref_catcode_Neko (*at)(libCatCode_kref_catcode_NoraNekoTemplate thiz, libCatCode_KLong code);
          libCatCode_kref_catcode_Neko (*at_)(libCatCode_kref_catcode_NoraNekoTemplate thiz, const char* code);
          libCatCode_kref_catcode_Neko (*atAll)(libCatCode_kref_catcode_NoraNekoTemplate thiz);
          libCatCode_kref_catcode_Neko (*bface)(libCatCode_kref_catcode_NoraNekoTemplate thiz, libCatCode_KLong id);
          libCatCode_kref_catcode_Neko (*bface_)(libCatCode_kref_catcode_NoraNekoTemplate thiz, const char* id);
          libCatCode_kref_catcode_Neko (*customMusic)(libCatCode_kref_catcode_NoraNekoTemplate thiz, const char* url, const char* audio, const char* title);
          libCatCode_kref_catcode_Neko (*customMusic_)(libCatCode_kref_catcode_NoraNekoTemplate thiz, const char* url, const char* audio, const char* title, const char* content, const char* image);
          libCatCode_kref_catcode_Neko (*dice)(libCatCode_kref_catcode_NoraNekoTemplate thiz);
          libCatCode_kref_catcode_Neko (*dice_)(libCatCode_kref_catcode_NoraNekoTemplate thiz, libCatCode_KInt type);
          libCatCode_kref_catcode_Neko (*dice__)(libCatCode_kref_catcode_NoraNekoTemplate thiz, const char* type);
          libCatCode_kref_catcode_Neko (*face)(libCatCode_kref_catcode_NoraNekoTemplate thiz, libCatCode_KLong id);
          libCatCode_kref_catcode_Neko (*face_)(libCatCode_kref_catcode_NoraNekoTemplate thiz, const char* id);
          libCatCode_kref_catcode_Neko (*image)(libCatCode_kref_catcode_NoraNekoTemplate thiz, const char* file);
          libCatCode_kref_catcode_Neko (*image_)(libCatCode_kref_catcode_NoraNekoTemplate thiz, const char* file, libCatCode_KBoolean flash);
          libCatCode_kref_catcode_Neko (*music)(libCatCode_kref_catcode_NoraNekoTemplate thiz, const char* type, const char* id, const char* style);
          libCatCode_kref_catcode_Neko (*record)(libCatCode_kref_catcode_NoraNekoTemplate thiz, const char* file);
          libCatCode_kref_catcode_Neko (*record_)(libCatCode_kref_catcode_NoraNekoTemplate thiz, const char* file, libCatCode_KBoolean magic);
          libCatCode_kref_catcode_Neko (*rps)(libCatCode_kref_catcode_NoraNekoTemplate thiz);
          libCatCode_kref_catcode_Neko (*rps_)(libCatCode_kref_catcode_NoraNekoTemplate thiz, libCatCode_KInt type);
          libCatCode_kref_catcode_Neko (*rps__)(libCatCode_kref_catcode_NoraNekoTemplate thiz, const char* type);
          libCatCode_kref_catcode_Neko (*sface)(libCatCode_kref_catcode_NoraNekoTemplate thiz, libCatCode_KLong id);
          libCatCode_kref_catcode_Neko (*sface_)(libCatCode_kref_catcode_NoraNekoTemplate thiz, const char* id);
          libCatCode_kref_catcode_Neko (*shake)(libCatCode_kref_catcode_NoraNekoTemplate thiz);
          libCatCode_kref_catcode_Neko (*share)(libCatCode_kref_catcode_NoraNekoTemplate thiz, const char* url, const char* title);
          libCatCode_kref_catcode_Neko (*share_)(libCatCode_kref_catcode_NoraNekoTemplate thiz, const char* url, const char* title, const char* content, const char* image);
        } NoraNekoTemplate;
        struct {
          libCatCode_KType* (*_type)(void);
          libCatCode_kref_catcode_StringCodeBuilder (*StringCodeBuilder)(const char* type, libCatCode_KBoolean encode);
          const char* (*get_type)(libCatCode_kref_catcode_StringCodeBuilder thiz);
          const char* (*build)(libCatCode_kref_catcode_StringCodeBuilder thiz);
          libCatCode_kref_catcode_CodeBuilder_CodeBuilderKey (*key)(libCatCode_kref_catcode_StringCodeBuilder thiz, const char* key);
        } StringCodeBuilder;
        struct {
          libCatCode_KType* (*_type)(void);
          libCatCode_kref_catcode_StringTemplate (*_instance)();
          libCatCode_kref_catcode_StringTemplate (*get_instance)(libCatCode_kref_catcode_StringTemplate thiz);
          const char* (*at)(libCatCode_kref_catcode_StringTemplate thiz, const char* code);
          const char* (*atAll)(libCatCode_kref_catcode_StringTemplate thiz);
          const char* (*bface)(libCatCode_kref_catcode_StringTemplate thiz, const char* id);
          const char* (*customMusic)(libCatCode_kref_catcode_StringTemplate thiz, const char* url, const char* audio, const char* title, const char* content, const char* image);
          const char* (*dice)(libCatCode_kref_catcode_StringTemplate thiz);
          const char* (*dice_)(libCatCode_kref_catcode_StringTemplate thiz, const char* type);
          const char* (*face)(libCatCode_kref_catcode_StringTemplate thiz, const char* id);
          const char* (*image)(libCatCode_kref_catcode_StringTemplate thiz, const char* file, libCatCode_KBoolean flash);
          const char* (*music)(libCatCode_kref_catcode_StringTemplate thiz, const char* type, const char* id, const char* style);
          const char* (*record)(libCatCode_kref_catcode_StringTemplate thiz, const char* file, libCatCode_KBoolean magic);
          const char* (*rps)(libCatCode_kref_catcode_StringTemplate thiz);
          const char* (*rps_)(libCatCode_kref_catcode_StringTemplate thiz, const char* type);
          const char* (*sface)(libCatCode_kref_catcode_StringTemplate thiz, const char* id);
          const char* (*shake)(libCatCode_kref_catcode_StringTemplate thiz);
          const char* (*share)(libCatCode_kref_catcode_StringTemplate thiz, const char* url, const char* title, const char* content, const char* image);
        } StringTemplate;
        struct {
          libCatCode_KType* (*_type)(void);
          libCatCode_kref_catcode_CodeTemplate (*get_nekoTemplate)(libCatCode_kref_catcode_TemplateAble thiz);
          libCatCode_kref_catcode_CodeTemplate (*get_stringTemplate)(libCatCode_kref_catcode_TemplateAble thiz);
        } TemplateAble;
        struct {
          libCatCode_KType* (*_type)(void);
          libCatCode_kref_catcode_ToCatParam (*ToCatParam)(const char* type, libCatCode_KBoolean encode, libCatCode_kref_kotlin_Array params);
          libCatCode_KBoolean (*get_encode)(libCatCode_kref_catcode_ToCatParam thiz);
          libCatCode_kref_kotlin_Array (*get_params)(libCatCode_kref_catcode_ToCatParam thiz);
          const char* (*get_type)(libCatCode_kref_catcode_ToCatParam thiz);
          const char* (*component1)(libCatCode_kref_catcode_ToCatParam thiz);
          libCatCode_KBoolean (*component2)(libCatCode_kref_catcode_ToCatParam thiz);
          libCatCode_kref_kotlin_Array (*component3)(libCatCode_kref_catcode_ToCatParam thiz);
          libCatCode_kref_catcode_ToCatParam (*copy)(libCatCode_kref_catcode_ToCatParam thiz, const char* type, libCatCode_KBoolean encode, libCatCode_kref_kotlin_Array params);
          libCatCode_KBoolean (*equals)(libCatCode_kref_catcode_ToCatParam thiz, libCatCode_kref_kotlin_Any other);
          libCatCode_KInt (*hashCode)(libCatCode_kref_catcode_ToCatParam thiz);
          const char* (*toString)(libCatCode_kref_catcode_ToCatParam thiz);
        } ToCatParam;
        struct {
          libCatCode_KType* (*_type)(void);
          const char* (*get_catCodeHead)(libCatCode_kref_catcode_WildcatCodeUtil thiz);
          libCatCode_kref_catcode_WildcatTemplate (*get_nekoTemplate)(libCatCode_kref_catcode_WildcatCodeUtil thiz);
          libCatCode_kref_catcode_WildcatTemplate (*get_stringTemplate)(libCatCode_kref_catcode_WildcatCodeUtil thiz);
          libCatCode_KBoolean (*contains)(libCatCode_kref_catcode_WildcatCodeUtil thiz, const char* text, const char* type, libCatCode_kref_kotlin_Array params);
          libCatCode_KBoolean (*contains_)(libCatCode_kref_catcode_WildcatCodeUtil thiz, const char* text, const char* type, libCatCode_KBoolean encode, libCatCode_kref_kotlin_Array params);
          libCatCode_KBoolean (*contains__)(libCatCode_kref_catcode_WildcatCodeUtil thiz, const char* text, const char* type, libCatCode_KBoolean encode, libCatCode_kref_kotlin_Array params);
          const char* (*getCat)(libCatCode_kref_catcode_WildcatCodeUtil thiz, const char* text, libCatCode_KInt index);
          const char* (*getCat_)(libCatCode_kref_catcode_WildcatCodeUtil thiz, const char* text, const char* type, libCatCode_KInt index);
          libCatCode_kref_kotlin_collections_Iterator (*getCatIter)(libCatCode_kref_catcode_WildcatCodeUtil thiz, const char* text, const char* type);
          libCatCode_kref_kotlin_collections_Iterator (*getCatKVIter)(libCatCode_kref_catcode_WildcatCodeUtil thiz, const char* code);
          libCatCode_kref_kotlin_collections_Iterator (*getCatKeyIter)(libCatCode_kref_catcode_WildcatCodeUtil thiz, const char* code);
          libCatCode_kref_kotlin_collections_Iterator (*getCatValueIter)(libCatCode_kref_catcode_WildcatCodeUtil thiz, const char* code);
          libCatCode_kref_kotlin_collections_List (*getCats)(libCatCode_kref_catcode_WildcatCodeUtil thiz, const char* text, const char* type);
          libCatCode_kref_catcode_LazyCodeBuilder (*getLazyNekoBuilder)(libCatCode_kref_catcode_WildcatCodeUtil thiz, const char* type, libCatCode_KBoolean encode);
          libCatCode_kref_catcode_Neko (*getNeko)(libCatCode_kref_catcode_WildcatCodeUtil thiz, const char* text, libCatCode_KInt index);
          libCatCode_kref_catcode_Neko (*getNeko_)(libCatCode_kref_catcode_WildcatCodeUtil thiz, const char* text, const char* type, libCatCode_KInt index);
          libCatCode_kref_catcode_CodeBuilder (*getNekoBuilder)(libCatCode_kref_catcode_WildcatCodeUtil thiz, const char* type, libCatCode_KBoolean encode);
          libCatCode_kref_kotlin_collections_List (*getNekoList)(libCatCode_kref_catcode_WildcatCodeUtil thiz, const char* text, const char* type);
          const char* (*getParam)(libCatCode_kref_catcode_WildcatCodeUtil thiz, const char* text, const char* paramKey, libCatCode_KInt index);
          const char* (*getParam_)(libCatCode_kref_catcode_WildcatCodeUtil thiz, const char* text, const char* type, const char* paramKey, libCatCode_KInt index);
          libCatCode_kref_catcode_CodeBuilder (*getStringCodeBuilder)(libCatCode_kref_catcode_WildcatCodeUtil thiz, const char* type, libCatCode_KBoolean encode);
          const char* (*remove)(libCatCode_kref_catcode_WildcatCodeUtil thiz, const char* text, libCatCode_KBoolean trim, libCatCode_KBoolean ignoreEmpty, libCatCode_kref_kotlin_CharSequence delimiter);
          const char* (*removeByType)(libCatCode_kref_catcode_WildcatCodeUtil thiz, const char* text, const char* type, libCatCode_KBoolean trim, libCatCode_KBoolean ignoreEmpty, libCatCode_kref_kotlin_CharSequence delimiter);
          libCatCode_kref_kotlin_collections_List (*split)(libCatCode_kref_catcode_WildcatCodeUtil thiz, const char* text);
          const char* (*toCat)(libCatCode_kref_catcode_WildcatCodeUtil thiz, libCatCode_kref_catcode_ToCatParam typeParam);
          const char* (*toCat_)(libCatCode_kref_catcode_WildcatCodeUtil thiz, const char* type);
          const char* (*toCat__)(libCatCode_kref_catcode_WildcatCodeUtil thiz, const char* type, libCatCode_KBoolean encode, libCatCode_kref_kotlin_Array kv);
          const char* (*toCat___)(libCatCode_kref_catcode_WildcatCodeUtil thiz, const char* type, libCatCode_KBoolean encode, libCatCode_kref_kotlin_Array params);
          const char* (*toCat____)(libCatCode_kref_catcode_WildcatCodeUtil thiz, const char* type, libCatCode_KBoolean encode, libCatCode_kref_kotlin_collections_Map map);
          libCatCode_kref_catcode_Neko (*toNeko)(libCatCode_kref_catcode_WildcatCodeUtil thiz, libCatCode_kref_catcode_ToCatParam typeParam);
          libCatCode_kref_catcode_NoraNeko (*toNeko_)(libCatCode_kref_catcode_WildcatCodeUtil thiz, const char* type);
          libCatCode_kref_catcode_NoraNeko (*toNeko__)(libCatCode_kref_catcode_WildcatCodeUtil thiz, const char* type, libCatCode_kref_kotlin_Array params);
          libCatCode_kref_catcode_NoraNeko (*toNeko___)(libCatCode_kref_catcode_WildcatCodeUtil thiz, const char* type, libCatCode_KBoolean encode, libCatCode_kref_kotlin_Array paramText);
          libCatCode_kref_catcode_NoraNeko (*toNeko____)(libCatCode_kref_catcode_WildcatCodeUtil thiz, const char* type, libCatCode_kref_kotlin_collections_Map params);
          struct {
            libCatCode_KType* (*_type)(void);
            libCatCode_kref_catcode_WildcatCodeUtil_Companion (*_instance)();
            libCatCode_kref_catcode_WildcatCodeUtil (*getInstance)(libCatCode_kref_catcode_WildcatCodeUtil_Companion thiz, const char* codeType);
          } Companion;
        } WildcatCodeUtil;
        struct {
          libCatCode_KType* (*_type)(void);
          libCatCode_kref_catcode_WildcatStringCodeBuilder (*WildcatStringCodeBuilder)(const char* codeType, const char* type, libCatCode_KBoolean encode);
          const char* (*get_codeType)(libCatCode_kref_catcode_WildcatStringCodeBuilder thiz);
          const char* (*get_type)(libCatCode_kref_catcode_WildcatStringCodeBuilder thiz);
          const char* (*build)(libCatCode_kref_catcode_WildcatStringCodeBuilder thiz);
          libCatCode_kref_catcode_WildcatCodeBuilder_WildcatCodeBuilderKey (*key)(libCatCode_kref_catcode_WildcatStringCodeBuilder thiz, const char* key);
        } WildcatStringCodeBuilder;
        struct {
          libCatCode_KType* (*_type)(void);
          libCatCode_kref_catcode_WildcatStringTemplate (*WildcatStringTemplate)(const char* codeType, libCatCode_kref_catcode_WildcatCodeUtil utilInstance);
          const char* (*get_codeType)(libCatCode_kref_catcode_WildcatStringTemplate thiz);
          const char* (*at)(libCatCode_kref_catcode_WildcatStringTemplate thiz, libCatCode_KLong code);
          const char* (*at_)(libCatCode_kref_catcode_WildcatStringTemplate thiz, const char* code);
          const char* (*atAll)(libCatCode_kref_catcode_WildcatStringTemplate thiz);
          const char* (*bface)(libCatCode_kref_catcode_WildcatStringTemplate thiz, libCatCode_KLong id);
          const char* (*bface_)(libCatCode_kref_catcode_WildcatStringTemplate thiz, const char* id);
          const char* (*customMusic)(libCatCode_kref_catcode_WildcatStringTemplate thiz, const char* url, const char* audio, const char* title);
          const char* (*customMusic_)(libCatCode_kref_catcode_WildcatStringTemplate thiz, const char* url, const char* audio, const char* title, const char* content, const char* image);
          const char* (*dice)(libCatCode_kref_catcode_WildcatStringTemplate thiz);
          const char* (*dice_)(libCatCode_kref_catcode_WildcatStringTemplate thiz, libCatCode_KInt type);
          const char* (*dice__)(libCatCode_kref_catcode_WildcatStringTemplate thiz, const char* type);
          const char* (*face)(libCatCode_kref_catcode_WildcatStringTemplate thiz, libCatCode_KLong id);
          const char* (*face_)(libCatCode_kref_catcode_WildcatStringTemplate thiz, const char* id);
          const char* (*image)(libCatCode_kref_catcode_WildcatStringTemplate thiz, const char* file);
          const char* (*image_)(libCatCode_kref_catcode_WildcatStringTemplate thiz, const char* file, libCatCode_KBoolean flash);
          const char* (*music)(libCatCode_kref_catcode_WildcatStringTemplate thiz, const char* type, const char* id);
          const char* (*music_)(libCatCode_kref_catcode_WildcatStringTemplate thiz, const char* type, const char* id, const char* style);
          const char* (*record)(libCatCode_kref_catcode_WildcatStringTemplate thiz, const char* file);
          const char* (*record_)(libCatCode_kref_catcode_WildcatStringTemplate thiz, const char* file, libCatCode_KBoolean magic);
          const char* (*rps)(libCatCode_kref_catcode_WildcatStringTemplate thiz);
          const char* (*rps_)(libCatCode_kref_catcode_WildcatStringTemplate thiz, libCatCode_KInt type);
          const char* (*rps__)(libCatCode_kref_catcode_WildcatStringTemplate thiz, const char* type);
          const char* (*sface)(libCatCode_kref_catcode_WildcatStringTemplate thiz, libCatCode_KLong id);
          const char* (*sface_)(libCatCode_kref_catcode_WildcatStringTemplate thiz, const char* id);
          const char* (*shake)(libCatCode_kref_catcode_WildcatStringTemplate thiz);
          const char* (*share)(libCatCode_kref_catcode_WildcatStringTemplate thiz, const char* url, const char* title);
          const char* (*share_)(libCatCode_kref_catcode_WildcatStringTemplate thiz, const char* url, const char* title, const char* content, const char* image);
        } WildcatStringTemplate;
        struct {
          struct {
            libCatCode_KType* (*_type)(void);
            libCatCode_kref_catcode_codes_LazyMapNeko (*LazyMapNeko)(const char* type);
            libCatCode_kref_catcode_codes_LazyMapNeko (*LazyMapNeko_)(const char* type, libCatCode_kref_kotlin_collections_Map params);
            libCatCode_kref_catcode_codes_LazyMapNeko (*LazyMapNeko__)(const char* type, libCatCode_kref_kotlin_Array params);
            libCatCode_kref_catcode_codes_LazyMapNeko (*LazyMapNeko___)(const char* type, libCatCode_kref_kotlin_Array params);
            libCatCode_kref_catcode_codes_LazyMapNeko (*LazyMapNeko____)(libCatCode_kref_catcode_collection_LazyMap params, const char* type);
            libCatCode_kref_kotlin_collections_Set (*get_entries)(libCatCode_kref_catcode_codes_LazyMapNeko thiz);
            libCatCode_kref_kotlin_collections_Set (*get_keys)(libCatCode_kref_catcode_codes_LazyMapNeko thiz);
            libCatCode_KInt (*get_length)(libCatCode_kref_catcode_codes_LazyMapNeko thiz);
            libCatCode_KInt (*get_size)(libCatCode_kref_catcode_codes_LazyMapNeko thiz);
            const char* (*get_type)(libCatCode_kref_catcode_codes_LazyMapNeko thiz);
            void (*set_type)(libCatCode_kref_catcode_codes_LazyMapNeko thiz, const char* set);
            libCatCode_kref_kotlin_collections_Collection (*get_values)(libCatCode_kref_catcode_codes_LazyMapNeko thiz);
            libCatCode_KBoolean (*containsKey)(libCatCode_kref_catcode_codes_LazyMapNeko thiz, const char* key);
            libCatCode_KBoolean (*containsValue)(libCatCode_kref_catcode_codes_LazyMapNeko thiz, const char* value);
            libCatCode_KBoolean (*equals)(libCatCode_kref_catcode_codes_LazyMapNeko thiz, libCatCode_kref_kotlin_Any other);
            libCatCode_KChar (*get)(libCatCode_kref_catcode_codes_LazyMapNeko thiz, libCatCode_KInt index);
            const char* (*get_)(libCatCode_kref_catcode_codes_LazyMapNeko thiz, const char* key);
            const char* (*getNoDecode)(libCatCode_kref_catcode_codes_LazyMapNeko thiz, const char* key);
            const char* (*getOrDefault)(libCatCode_kref_catcode_codes_LazyMapNeko thiz, const char* key, const char* defaultValue);
            libCatCode_KInt (*hashCode)(libCatCode_kref_catcode_codes_LazyMapNeko thiz);
            libCatCode_kref_catcode_Neko (*immutable)(libCatCode_kref_catcode_codes_LazyMapNeko thiz);
            libCatCode_KBoolean (*isEmpty)(libCatCode_kref_catcode_codes_LazyMapNeko thiz);
            libCatCode_kref_catcode_MutableNeko (*mutable_)(libCatCode_kref_catcode_codes_LazyMapNeko thiz);
            libCatCode_kref_kotlin_CharSequence (*subSequence)(libCatCode_kref_catcode_codes_LazyMapNeko thiz, libCatCode_KInt startIndex, libCatCode_KInt endIndex);
            libCatCode_kref_kotlin_collections_Map (*toMap)(libCatCode_kref_catcode_codes_LazyMapNeko thiz);
            const char* (*toString)(libCatCode_kref_catcode_codes_LazyMapNeko thiz);
            struct {
              libCatCode_KType* (*_type)(void);
              libCatCode_kref_catcode_codes_LazyMapNeko_Of (*_instance)();
              libCatCode_kref_catcode_codes_LazyMapNeko (*byCode)(libCatCode_kref_catcode_codes_LazyMapNeko_Of thiz, const char* code, libCatCode_KBoolean decode);
              libCatCode_kref_catcode_codes_MapNeko (*byKV)(libCatCode_kref_catcode_codes_LazyMapNeko_Of thiz, const char* type, libCatCode_kref_kotlin_Array params);
              libCatCode_kref_catcode_codes_LazyMapNeko (*byLazyMap)(libCatCode_kref_catcode_codes_LazyMapNeko_Of thiz, const char* type, libCatCode_kref_catcode_collection_LazyMap params);
              libCatCode_kref_catcode_codes_MapNeko (*byMap)(libCatCode_kref_catcode_codes_LazyMapNeko_Of thiz, const char* type, libCatCode_kref_kotlin_collections_Map params);
              libCatCode_kref_catcode_codes_MapNeko (*byParamString)(libCatCode_kref_catcode_codes_LazyMapNeko_Of thiz, const char* type, libCatCode_kref_kotlin_Array params);
              libCatCode_kref_catcode_codes_MutableMapNeko (*mutableByCode)(libCatCode_kref_catcode_codes_LazyMapNeko_Of thiz, const char* code, libCatCode_KBoolean decode);
              libCatCode_kref_catcode_codes_MutableMapNeko (*mutableByKV)(libCatCode_kref_catcode_codes_LazyMapNeko_Of thiz, const char* type, libCatCode_kref_kotlin_Array params);
              libCatCode_kref_catcode_codes_MutableMapNeko (*mutableByMap)(libCatCode_kref_catcode_codes_LazyMapNeko_Of thiz, const char* type, libCatCode_kref_kotlin_collections_Map params);
              libCatCode_kref_catcode_codes_MutableMapNeko (*mutableByParamString)(libCatCode_kref_catcode_codes_LazyMapNeko_Of thiz, const char* type, libCatCode_kref_kotlin_Array params);
            } Of;
          } LazyMapNeko;
          struct {
            libCatCode_KType* (*_type)(void);
            libCatCode_kref_catcode_codes_LazyMapNoraNeko (*LazyMapNoraNeko)(const char* codeType, const char* type);
            libCatCode_kref_catcode_codes_LazyMapNoraNeko (*LazyMapNoraNeko_)(const char* codeType, const char* type, libCatCode_kref_kotlin_collections_Map params);
            libCatCode_kref_catcode_codes_LazyMapNoraNeko (*LazyMapNoraNeko__)(const char* codeType, const char* type, libCatCode_kref_kotlin_Array params);
            libCatCode_kref_catcode_codes_LazyMapNoraNeko (*LazyMapNoraNeko___)(const char* codeType, const char* type, libCatCode_kref_kotlin_Array params);
            libCatCode_kref_catcode_codes_LazyMapNoraNeko (*LazyMapNoraNeko____)(const char* codeType, libCatCode_kref_catcode_collection_LazyMap params, const char* type);
            const char* (*get_codeType)(libCatCode_kref_catcode_codes_LazyMapNoraNeko thiz);
            libCatCode_kref_kotlin_collections_Set (*get_entries)(libCatCode_kref_catcode_codes_LazyMapNoraNeko thiz);
            libCatCode_kref_kotlin_collections_Set (*get_keys)(libCatCode_kref_catcode_codes_LazyMapNoraNeko thiz);
            libCatCode_KInt (*get_length)(libCatCode_kref_catcode_codes_LazyMapNoraNeko thiz);
            libCatCode_KInt (*get_size)(libCatCode_kref_catcode_codes_LazyMapNoraNeko thiz);
            const char* (*get_type)(libCatCode_kref_catcode_codes_LazyMapNoraNeko thiz);
            void (*set_type)(libCatCode_kref_catcode_codes_LazyMapNoraNeko thiz, const char* set);
            libCatCode_kref_kotlin_collections_Collection (*get_values)(libCatCode_kref_catcode_codes_LazyMapNoraNeko thiz);
            libCatCode_KBoolean (*containsKey)(libCatCode_kref_catcode_codes_LazyMapNoraNeko thiz, const char* key);
            libCatCode_KBoolean (*containsValue)(libCatCode_kref_catcode_codes_LazyMapNoraNeko thiz, const char* value);
            libCatCode_KBoolean (*equals)(libCatCode_kref_catcode_codes_LazyMapNoraNeko thiz, libCatCode_kref_kotlin_Any other);
            libCatCode_KChar (*get)(libCatCode_kref_catcode_codes_LazyMapNoraNeko thiz, libCatCode_KInt index);
            const char* (*get_)(libCatCode_kref_catcode_codes_LazyMapNoraNeko thiz, const char* key);
            const char* (*getNoDecode)(libCatCode_kref_catcode_codes_LazyMapNoraNeko thiz, const char* key);
            const char* (*getOrDefault)(libCatCode_kref_catcode_codes_LazyMapNoraNeko thiz, const char* key, const char* defaultValue);
            libCatCode_KInt (*hashCode)(libCatCode_kref_catcode_codes_LazyMapNoraNeko thiz);
            libCatCode_kref_catcode_Neko (*immutable)(libCatCode_kref_catcode_codes_LazyMapNoraNeko thiz);
            libCatCode_KBoolean (*isEmpty)(libCatCode_kref_catcode_codes_LazyMapNoraNeko thiz);
            libCatCode_kref_catcode_MutableNeko (*mutable_)(libCatCode_kref_catcode_codes_LazyMapNoraNeko thiz);
            libCatCode_kref_kotlin_CharSequence (*subSequence)(libCatCode_kref_catcode_codes_LazyMapNoraNeko thiz, libCatCode_KInt startIndex, libCatCode_KInt endIndex);
            libCatCode_kref_kotlin_collections_Map (*toMap)(libCatCode_kref_catcode_codes_LazyMapNoraNeko thiz);
            const char* (*toString)(libCatCode_kref_catcode_codes_LazyMapNoraNeko thiz);
            struct {
              libCatCode_KType* (*_type)(void);
              libCatCode_kref_catcode_codes_LazyMapNoraNeko_Of (*_instance)();
              libCatCode_kref_catcode_codes_LazyMapNoraNeko (*byCode)(libCatCode_kref_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* code, libCatCode_KBoolean decode);
              libCatCode_kref_catcode_codes_LazyMapNoraNeko (*byKV)(libCatCode_kref_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* type, libCatCode_kref_kotlin_Array params);
              libCatCode_kref_catcode_codes_LazyMapNoraNeko (*byMap)(libCatCode_kref_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* type, libCatCode_kref_kotlin_collections_Map params);
              libCatCode_kref_catcode_codes_LazyMapNoraNeko (*byParamString)(libCatCode_kref_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* type, libCatCode_kref_kotlin_Array params);
              libCatCode_kref_catcode_codes_MutableMapNoraNeko (*mutableByCode)(libCatCode_kref_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* code, libCatCode_KBoolean decode);
              libCatCode_kref_catcode_codes_MutableMapNoraNeko (*mutableByKV)(libCatCode_kref_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* type, libCatCode_kref_kotlin_Array params);
              libCatCode_kref_catcode_codes_MutableMapNoraNeko (*mutableByMap)(libCatCode_kref_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* type, libCatCode_kref_kotlin_collections_Map params);
              libCatCode_kref_catcode_codes_MutableMapNoraNeko (*mutableByParamString)(libCatCode_kref_catcode_codes_LazyMapNoraNeko_Of thiz, const char* codeType, const char* type, libCatCode_kref_kotlin_Array params);
            } Of;
          } LazyMapNoraNeko;
          struct {
            libCatCode_KType* (*_type)(void);
            libCatCode_kref_catcode_codes_LazyMutableMapNeko (*LazyMutableMapNeko)(const char* type);
            libCatCode_kref_catcode_codes_LazyMutableMapNeko (*LazyMutableMapNeko_)(const char* type, libCatCode_kref_kotlin_collections_Map params);
            libCatCode_kref_catcode_codes_LazyMutableMapNeko (*LazyMutableMapNeko__)(const char* type, libCatCode_kref_kotlin_Array params);
            libCatCode_kref_catcode_codes_LazyMutableMapNeko (*LazyMutableMapNeko___)(const char* type, libCatCode_kref_kotlin_Array params);
            libCatCode_kref_kotlin_collections_MutableSet (*get_entries)(libCatCode_kref_catcode_codes_LazyMutableMapNeko thiz);
            libCatCode_kref_kotlin_collections_MutableSet (*get_keys)(libCatCode_kref_catcode_codes_LazyMutableMapNeko thiz);
            libCatCode_KInt (*get_size)(libCatCode_kref_catcode_codes_LazyMutableMapNeko thiz);
            libCatCode_kref_kotlin_collections_MutableCollection (*get_values)(libCatCode_kref_catcode_codes_LazyMutableMapNeko thiz);
            void (*clear)(libCatCode_kref_catcode_codes_LazyMutableMapNeko thiz);
            libCatCode_KBoolean (*containsKey)(libCatCode_kref_catcode_codes_LazyMutableMapNeko thiz, const char* key);
            libCatCode_KBoolean (*containsValue)(libCatCode_kref_catcode_codes_LazyMutableMapNeko thiz, const char* value);
            const char* (*get)(libCatCode_kref_catcode_codes_LazyMutableMapNeko thiz, const char* key);
            libCatCode_kref_catcode_Neko (*immutable)(libCatCode_kref_catcode_codes_LazyMutableMapNeko thiz);
            libCatCode_KBoolean (*isEmpty)(libCatCode_kref_catcode_codes_LazyMutableMapNeko thiz);
            libCatCode_kref_catcode_MutableNeko (*mutable_)(libCatCode_kref_catcode_codes_LazyMutableMapNeko thiz);
            const char* (*put)(libCatCode_kref_catcode_codes_LazyMutableMapNeko thiz, const char* key, const char* value);
            void (*putAll)(libCatCode_kref_catcode_codes_LazyMutableMapNeko thiz, libCatCode_kref_kotlin_collections_Map from);
            const char* (*remove)(libCatCode_kref_catcode_codes_LazyMutableMapNeko thiz, const char* key);
            libCatCode_kref_kotlin_collections_MutableMap (*toMap)(libCatCode_kref_catcode_codes_LazyMutableMapNeko thiz);
            const char* (*toString)(libCatCode_kref_catcode_codes_LazyMutableMapNeko thiz);
          } LazyMutableMapNeko;
          struct {
            libCatCode_KType* (*_type)(void);
            libCatCode_kref_catcode_codes_LazyMutableMapNoraNeko (*LazyMutableMapNoraNeko)(const char* codeType, const char* type);
            libCatCode_kref_catcode_codes_LazyMutableMapNoraNeko (*LazyMutableMapNoraNeko_)(const char* codeType, const char* type, libCatCode_kref_kotlin_collections_Map params);
            libCatCode_kref_catcode_codes_LazyMutableMapNoraNeko (*LazyMutableMapNoraNeko__)(const char* codeType, const char* type, libCatCode_kref_kotlin_Array params);
            libCatCode_kref_catcode_codes_LazyMutableMapNoraNeko (*LazyMutableMapNoraNeko___)(const char* codeType, const char* type, libCatCode_kref_kotlin_Array params);
            libCatCode_kref_kotlin_collections_MutableSet (*get_entries)(libCatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz);
            libCatCode_kref_kotlin_collections_MutableSet (*get_keys)(libCatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz);
            libCatCode_kref_catcode_collection_MutableLazyMap (*get_params)(libCatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz);
            libCatCode_KInt (*get_size)(libCatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz);
            libCatCode_kref_kotlin_collections_MutableCollection (*get_values)(libCatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz);
            void (*clear)(libCatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz);
            libCatCode_KBoolean (*containsKey)(libCatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz, const char* key);
            libCatCode_KBoolean (*containsValue)(libCatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz, const char* value);
            const char* (*get)(libCatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz, const char* key);
            libCatCode_kref_catcode_Neko (*immutable)(libCatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz);
            libCatCode_KBoolean (*isEmpty)(libCatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz);
            libCatCode_kref_catcode_MutableNeko (*mutable_)(libCatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz);
            const char* (*put)(libCatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz, const char* key, const char* value);
            void (*putAll)(libCatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz, libCatCode_kref_kotlin_collections_Map from);
            const char* (*remove)(libCatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz, const char* key);
            libCatCode_kref_kotlin_collections_MutableMap (*toMap)(libCatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz);
            const char* (*toString)(libCatCode_kref_catcode_codes_LazyMutableMapNoraNeko thiz);
          } LazyMutableMapNoraNeko;
          struct {
            libCatCode_KType* (*_type)(void);
            libCatCode_kref_catcode_codes_MapNeko (*MapNeko)(const char* type);
            libCatCode_kref_catcode_codes_MapNeko (*MapNeko_)(const char* type, libCatCode_kref_kotlin_collections_Map params);
            libCatCode_kref_catcode_codes_MapNeko (*MapNeko__)(const char* type, libCatCode_kref_kotlin_Array params);
            libCatCode_kref_catcode_codes_MapNeko (*MapNeko___)(const char* type, libCatCode_kref_kotlin_Array params);
            libCatCode_kref_catcode_codes_MapNeko (*MapNeko____)(libCatCode_kref_kotlin_collections_Map params, const char* type);
            libCatCode_kref_kotlin_collections_Set (*get_entries)(libCatCode_kref_catcode_codes_MapNeko thiz);
            libCatCode_kref_kotlin_collections_Set (*get_keys)(libCatCode_kref_catcode_codes_MapNeko thiz);
            libCatCode_KInt (*get_length)(libCatCode_kref_catcode_codes_MapNeko thiz);
            libCatCode_kref_kotlin_collections_Map (*get_params)(libCatCode_kref_catcode_codes_MapNeko thiz);
            libCatCode_KInt (*get_size)(libCatCode_kref_catcode_codes_MapNeko thiz);
            const char* (*get_type)(libCatCode_kref_catcode_codes_MapNeko thiz);
            void (*set_type)(libCatCode_kref_catcode_codes_MapNeko thiz, const char* set);
            libCatCode_kref_kotlin_collections_Collection (*get_values)(libCatCode_kref_catcode_codes_MapNeko thiz);
            libCatCode_KBoolean (*containsKey)(libCatCode_kref_catcode_codes_MapNeko thiz, const char* key);
            libCatCode_KBoolean (*containsValue)(libCatCode_kref_catcode_codes_MapNeko thiz, const char* value);
            libCatCode_KBoolean (*equals)(libCatCode_kref_catcode_codes_MapNeko thiz, libCatCode_kref_kotlin_Any other);
            libCatCode_KChar (*get)(libCatCode_kref_catcode_codes_MapNeko thiz, libCatCode_KInt index);
            const char* (*get_)(libCatCode_kref_catcode_codes_MapNeko thiz, const char* key);
            const char* (*getNoDecode)(libCatCode_kref_catcode_codes_MapNeko thiz, const char* key);
            const char* (*getOrDefault)(libCatCode_kref_catcode_codes_MapNeko thiz, const char* key, const char* defaultValue);
            libCatCode_KInt (*hashCode)(libCatCode_kref_catcode_codes_MapNeko thiz);
            libCatCode_kref_catcode_Neko (*immutable)(libCatCode_kref_catcode_codes_MapNeko thiz);
            libCatCode_KBoolean (*isEmpty)(libCatCode_kref_catcode_codes_MapNeko thiz);
            libCatCode_kref_catcode_MutableNeko (*mutable_)(libCatCode_kref_catcode_codes_MapNeko thiz);
            libCatCode_kref_kotlin_CharSequence (*subSequence)(libCatCode_kref_catcode_codes_MapNeko thiz, libCatCode_KInt startIndex, libCatCode_KInt endIndex);
            libCatCode_kref_kotlin_collections_Map (*toMap)(libCatCode_kref_catcode_codes_MapNeko thiz);
            const char* (*toString)(libCatCode_kref_catcode_codes_MapNeko thiz);
            struct {
              libCatCode_KType* (*_type)(void);
              libCatCode_kref_catcode_codes_MapNeko_Of (*_instance)();
              libCatCode_kref_catcode_codes_MapNeko (*byCode)(libCatCode_kref_catcode_codes_MapNeko_Of thiz, const char* code, libCatCode_KBoolean decode);
              libCatCode_kref_catcode_codes_MapNeko (*byKV)(libCatCode_kref_catcode_codes_MapNeko_Of thiz, const char* type, libCatCode_kref_kotlin_Array params);
              libCatCode_kref_catcode_codes_MapNeko (*byMap)(libCatCode_kref_catcode_codes_MapNeko_Of thiz, const char* type, libCatCode_kref_kotlin_collections_Map params);
              libCatCode_kref_catcode_codes_MapNeko (*byParamString)(libCatCode_kref_catcode_codes_MapNeko_Of thiz, const char* type, libCatCode_kref_kotlin_Array params);
              libCatCode_kref_catcode_codes_MutableMapNeko (*mutableByCode)(libCatCode_kref_catcode_codes_MapNeko_Of thiz, const char* code, libCatCode_KBoolean decode);
              libCatCode_kref_catcode_codes_MutableMapNeko (*mutableByKV)(libCatCode_kref_catcode_codes_MapNeko_Of thiz, const char* type, libCatCode_kref_kotlin_Array params);
              libCatCode_kref_catcode_codes_MutableMapNeko (*mutableByMap)(libCatCode_kref_catcode_codes_MapNeko_Of thiz, const char* type, libCatCode_kref_kotlin_collections_Map params);
              libCatCode_kref_catcode_codes_MutableMapNeko (*mutableByParamString)(libCatCode_kref_catcode_codes_MapNeko_Of thiz, const char* type, libCatCode_kref_kotlin_Array params);
            } Of;
          } MapNeko;
          struct {
            libCatCode_KType* (*_type)(void);
            libCatCode_kref_catcode_codes_MapNoraNeko (*MapNoraNeko)(const char* codeType, const char* type);
            libCatCode_kref_catcode_codes_MapNoraNeko (*MapNoraNeko_)(const char* codeType, const char* type, libCatCode_kref_kotlin_collections_Map params);
            libCatCode_kref_catcode_codes_MapNoraNeko (*MapNoraNeko__)(const char* codeType, const char* type, libCatCode_kref_kotlin_Array params);
            libCatCode_kref_catcode_codes_MapNoraNeko (*MapNoraNeko___)(const char* codeType, const char* type, libCatCode_kref_kotlin_Array params);
            libCatCode_kref_catcode_codes_MapNoraNeko (*MapNoraNeko____)(const char* codeType, libCatCode_kref_kotlin_collections_Map params, const char* type);
            const char* (*get_codeType)(libCatCode_kref_catcode_codes_MapNoraNeko thiz);
            libCatCode_kref_kotlin_collections_Set (*get_entries)(libCatCode_kref_catcode_codes_MapNoraNeko thiz);
            libCatCode_kref_kotlin_collections_Set (*get_keys)(libCatCode_kref_catcode_codes_MapNoraNeko thiz);
            libCatCode_KInt (*get_length)(libCatCode_kref_catcode_codes_MapNoraNeko thiz);
            libCatCode_kref_kotlin_collections_Map (*get_params)(libCatCode_kref_catcode_codes_MapNoraNeko thiz);
            libCatCode_KInt (*get_size)(libCatCode_kref_catcode_codes_MapNoraNeko thiz);
            const char* (*get_type)(libCatCode_kref_catcode_codes_MapNoraNeko thiz);
            void (*set_type)(libCatCode_kref_catcode_codes_MapNoraNeko thiz, const char* set);
            libCatCode_kref_kotlin_collections_Collection (*get_values)(libCatCode_kref_catcode_codes_MapNoraNeko thiz);
            libCatCode_KBoolean (*containsKey)(libCatCode_kref_catcode_codes_MapNoraNeko thiz, const char* key);
            libCatCode_KBoolean (*containsValue)(libCatCode_kref_catcode_codes_MapNoraNeko thiz, const char* value);
            libCatCode_KBoolean (*equals)(libCatCode_kref_catcode_codes_MapNoraNeko thiz, libCatCode_kref_kotlin_Any other);
            libCatCode_KChar (*get)(libCatCode_kref_catcode_codes_MapNoraNeko thiz, libCatCode_KInt index);
            const char* (*get_)(libCatCode_kref_catcode_codes_MapNoraNeko thiz, const char* key);
            const char* (*getNoDecode)(libCatCode_kref_catcode_codes_MapNoraNeko thiz, const char* key);
            const char* (*getOrDefault)(libCatCode_kref_catcode_codes_MapNoraNeko thiz, const char* key, const char* defaultValue);
            libCatCode_KInt (*hashCode)(libCatCode_kref_catcode_codes_MapNoraNeko thiz);
            libCatCode_kref_catcode_Neko (*immutable)(libCatCode_kref_catcode_codes_MapNoraNeko thiz);
            libCatCode_KBoolean (*isEmpty)(libCatCode_kref_catcode_codes_MapNoraNeko thiz);
            libCatCode_kref_catcode_MutableNeko (*mutable_)(libCatCode_kref_catcode_codes_MapNoraNeko thiz);
            libCatCode_kref_kotlin_CharSequence (*subSequence)(libCatCode_kref_catcode_codes_MapNoraNeko thiz, libCatCode_KInt startIndex, libCatCode_KInt endIndex);
            libCatCode_kref_kotlin_collections_Map (*toMap)(libCatCode_kref_catcode_codes_MapNoraNeko thiz);
            const char* (*toString)(libCatCode_kref_catcode_codes_MapNoraNeko thiz);
            struct {
              libCatCode_KType* (*_type)(void);
              libCatCode_kref_catcode_codes_MapNoraNeko_Of (*_instance)();
              libCatCode_kref_catcode_codes_MapNoraNeko (*byCode)(libCatCode_kref_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* code, libCatCode_KBoolean decode);
              libCatCode_kref_catcode_codes_MapNoraNeko (*byKV)(libCatCode_kref_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* type, libCatCode_kref_kotlin_Array params);
              libCatCode_kref_catcode_codes_MapNoraNeko (*byMap)(libCatCode_kref_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* type, libCatCode_kref_kotlin_collections_Map params);
              libCatCode_kref_catcode_codes_MapNoraNeko (*byParamString)(libCatCode_kref_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* type, libCatCode_kref_kotlin_Array params);
              libCatCode_kref_catcode_codes_MutableMapNoraNeko (*mutableByCode)(libCatCode_kref_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* code, libCatCode_KBoolean decode);
              libCatCode_kref_catcode_codes_MutableMapNoraNeko (*mutableByKV)(libCatCode_kref_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* type, libCatCode_kref_kotlin_Array params);
              libCatCode_kref_catcode_codes_MutableMapNoraNeko (*mutableByMap)(libCatCode_kref_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* type, libCatCode_kref_kotlin_collections_Map params);
              libCatCode_kref_catcode_codes_MutableMapNoraNeko (*mutableByParamString)(libCatCode_kref_catcode_codes_MapNoraNeko_Of thiz, const char* codeType, const char* type, libCatCode_kref_kotlin_Array params);
            } Of;
          } MapNoraNeko;
          struct {
            libCatCode_KType* (*_type)(void);
            libCatCode_kref_catcode_codes_MutableMapNeko (*MutableMapNeko)(const char* type);
            libCatCode_kref_catcode_codes_MutableMapNeko (*MutableMapNeko_)(const char* type, libCatCode_kref_kotlin_collections_Map params);
            libCatCode_kref_catcode_codes_MutableMapNeko (*MutableMapNeko__)(const char* type, libCatCode_kref_kotlin_Array params);
            libCatCode_kref_catcode_codes_MutableMapNeko (*MutableMapNeko___)(const char* type, libCatCode_kref_kotlin_Array params);
            libCatCode_kref_kotlin_collections_MutableSet (*get_entries)(libCatCode_kref_catcode_codes_MutableMapNeko thiz);
            libCatCode_kref_kotlin_collections_MutableSet (*get_keys)(libCatCode_kref_catcode_codes_MutableMapNeko thiz);
            libCatCode_kref_kotlin_collections_MutableMap (*get_params)(libCatCode_kref_catcode_codes_MutableMapNeko thiz);
            libCatCode_KInt (*get_size)(libCatCode_kref_catcode_codes_MutableMapNeko thiz);
            libCatCode_kref_kotlin_collections_MutableCollection (*get_values)(libCatCode_kref_catcode_codes_MutableMapNeko thiz);
            void (*clear)(libCatCode_kref_catcode_codes_MutableMapNeko thiz);
            libCatCode_KBoolean (*containsKey)(libCatCode_kref_catcode_codes_MutableMapNeko thiz, const char* key);
            libCatCode_KBoolean (*containsValue)(libCatCode_kref_catcode_codes_MutableMapNeko thiz, const char* value);
            const char* (*get)(libCatCode_kref_catcode_codes_MutableMapNeko thiz, const char* key);
            libCatCode_kref_catcode_Neko (*immutable)(libCatCode_kref_catcode_codes_MutableMapNeko thiz);
            libCatCode_KBoolean (*isEmpty)(libCatCode_kref_catcode_codes_MutableMapNeko thiz);
            libCatCode_kref_catcode_MutableNeko (*mutable_)(libCatCode_kref_catcode_codes_MutableMapNeko thiz);
            const char* (*put)(libCatCode_kref_catcode_codes_MutableMapNeko thiz, const char* key, const char* value);
            void (*putAll)(libCatCode_kref_catcode_codes_MutableMapNeko thiz, libCatCode_kref_kotlin_collections_Map from);
            const char* (*remove)(libCatCode_kref_catcode_codes_MutableMapNeko thiz, const char* key);
            libCatCode_kref_kotlin_collections_MutableMap (*toMap)(libCatCode_kref_catcode_codes_MutableMapNeko thiz);
            const char* (*toString)(libCatCode_kref_catcode_codes_MutableMapNeko thiz);
          } MutableMapNeko;
          struct {
            libCatCode_KType* (*_type)(void);
            libCatCode_kref_catcode_codes_MutableMapNoraNeko (*MutableMapNoraNeko)(const char* codeType, const char* type);
            libCatCode_kref_catcode_codes_MutableMapNoraNeko (*MutableMapNoraNeko_)(const char* codeType, const char* type, libCatCode_kref_kotlin_collections_Map params);
            libCatCode_kref_catcode_codes_MutableMapNoraNeko (*MutableMapNoraNeko__)(const char* codeType, const char* type, libCatCode_kref_kotlin_Array params);
            libCatCode_kref_catcode_codes_MutableMapNoraNeko (*MutableMapNoraNeko___)(const char* codeType, const char* type, libCatCode_kref_kotlin_Array params);
            libCatCode_kref_kotlin_collections_MutableSet (*get_entries)(libCatCode_kref_catcode_codes_MutableMapNoraNeko thiz);
            libCatCode_kref_kotlin_collections_MutableSet (*get_keys)(libCatCode_kref_catcode_codes_MutableMapNoraNeko thiz);
            libCatCode_kref_kotlin_collections_MutableMap (*get_params)(libCatCode_kref_catcode_codes_MutableMapNoraNeko thiz);
            libCatCode_KInt (*get_size)(libCatCode_kref_catcode_codes_MutableMapNoraNeko thiz);
            libCatCode_kref_kotlin_collections_MutableCollection (*get_values)(libCatCode_kref_catcode_codes_MutableMapNoraNeko thiz);
            void (*clear)(libCatCode_kref_catcode_codes_MutableMapNoraNeko thiz);
            libCatCode_KBoolean (*containsKey)(libCatCode_kref_catcode_codes_MutableMapNoraNeko thiz, const char* key);
            libCatCode_KBoolean (*containsValue)(libCatCode_kref_catcode_codes_MutableMapNoraNeko thiz, const char* value);
            const char* (*get)(libCatCode_kref_catcode_codes_MutableMapNoraNeko thiz, const char* key);
            libCatCode_kref_catcode_Neko (*immutable)(libCatCode_kref_catcode_codes_MutableMapNoraNeko thiz);
            libCatCode_KBoolean (*isEmpty)(libCatCode_kref_catcode_codes_MutableMapNoraNeko thiz);
            libCatCode_kref_catcode_MutableNeko (*mutable_)(libCatCode_kref_catcode_codes_MutableMapNoraNeko thiz);
            const char* (*put)(libCatCode_kref_catcode_codes_MutableMapNoraNeko thiz, const char* key, const char* value);
            void (*putAll)(libCatCode_kref_catcode_codes_MutableMapNoraNeko thiz, libCatCode_kref_kotlin_collections_Map from);
            const char* (*remove)(libCatCode_kref_catcode_codes_MutableMapNoraNeko thiz, const char* key);
            libCatCode_kref_kotlin_collections_MutableMap (*toMap)(libCatCode_kref_catcode_codes_MutableMapNoraNeko thiz);
            const char* (*toString)(libCatCode_kref_catcode_codes_MutableMapNoraNeko thiz);
          } MutableMapNoraNeko;
          struct {
            libCatCode_KType* (*_type)(void);
            const char* (*get_codeType)(libCatCode_kref_catcode_codes_NoraNyanko thiz);
            libCatCode_kref_kotlin_collections_Set (*get_entries)(libCatCode_kref_catcode_codes_NoraNyanko thiz);
            libCatCode_kref_kotlin_collections_Set (*get_keys)(libCatCode_kref_catcode_codes_NoraNyanko thiz);
            libCatCode_KInt (*get_length)(libCatCode_kref_catcode_codes_NoraNyanko thiz);
            libCatCode_KInt (*get_size)(libCatCode_kref_catcode_codes_NoraNyanko thiz);
            const char* (*get_type)(libCatCode_kref_catcode_codes_NoraNyanko thiz);
            libCatCode_kref_kotlin_collections_Collection (*get_values)(libCatCode_kref_catcode_codes_NoraNyanko thiz);
            libCatCode_KBoolean (*containsKey)(libCatCode_kref_catcode_codes_NoraNyanko thiz, const char* key);
            libCatCode_KBoolean (*containsValue)(libCatCode_kref_catcode_codes_NoraNyanko thiz, const char* value);
            libCatCode_KBoolean (*equals)(libCatCode_kref_catcode_codes_NoraNyanko thiz, libCatCode_kref_kotlin_Any other);
            libCatCode_KChar (*get)(libCatCode_kref_catcode_codes_NoraNyanko thiz, libCatCode_KInt index);
            const char* (*get_)(libCatCode_kref_catcode_codes_NoraNyanko thiz, const char* key);
            const char* (*getNoDecode)(libCatCode_kref_catcode_codes_NoraNyanko thiz, const char* key);
            libCatCode_KInt (*hashCode)(libCatCode_kref_catcode_codes_NoraNyanko thiz);
            libCatCode_kref_catcode_Neko (*immutable)(libCatCode_kref_catcode_codes_NoraNyanko thiz);
            libCatCode_KBoolean (*isEmpty)(libCatCode_kref_catcode_codes_NoraNyanko thiz);
            libCatCode_kref_catcode_MutableNeko (*mutable_)(libCatCode_kref_catcode_codes_NoraNyanko thiz);
            libCatCode_kref_kotlin_CharSequence (*subSequence)(libCatCode_kref_catcode_codes_NoraNyanko thiz, libCatCode_KInt startIndex, libCatCode_KInt endIndex);
            libCatCode_kref_kotlin_collections_Map (*toMap)(libCatCode_kref_catcode_codes_NoraNyanko thiz);
            const char* (*toString)(libCatCode_kref_catcode_codes_NoraNyanko thiz);
            struct {
              libCatCode_KType* (*_type)(void);
              libCatCode_kref_catcode_codes_NoraNyanko_Of (*_instance)();
              libCatCode_kref_catcode_codes_NoraNyanko (*byCode)(libCatCode_kref_catcode_codes_NoraNyanko_Of thiz, const char* code);
            } Of;
          } NoraNyanko;
          struct {
            libCatCode_KType* (*_type)(void);
            libCatCode_kref_kotlin_collections_Set (*get_entries)(libCatCode_kref_catcode_codes_Nyanko thiz);
            libCatCode_kref_kotlin_collections_Set (*get_keys)(libCatCode_kref_catcode_codes_Nyanko thiz);
            libCatCode_KInt (*get_length)(libCatCode_kref_catcode_codes_Nyanko thiz);
            libCatCode_KInt (*get_size)(libCatCode_kref_catcode_codes_Nyanko thiz);
            const char* (*get_type)(libCatCode_kref_catcode_codes_Nyanko thiz);
            libCatCode_kref_kotlin_collections_Collection (*get_values)(libCatCode_kref_catcode_codes_Nyanko thiz);
            libCatCode_KBoolean (*containsKey)(libCatCode_kref_catcode_codes_Nyanko thiz, const char* key);
            libCatCode_KBoolean (*containsValue)(libCatCode_kref_catcode_codes_Nyanko thiz, const char* value);
            libCatCode_KBoolean (*equals)(libCatCode_kref_catcode_codes_Nyanko thiz, libCatCode_kref_kotlin_Any other);
            libCatCode_KChar (*get)(libCatCode_kref_catcode_codes_Nyanko thiz, libCatCode_KInt index);
            const char* (*get_)(libCatCode_kref_catcode_codes_Nyanko thiz, const char* key);
            const char* (*getNoDecode)(libCatCode_kref_catcode_codes_Nyanko thiz, const char* key);
            libCatCode_KInt (*hashCode)(libCatCode_kref_catcode_codes_Nyanko thiz);
            libCatCode_kref_catcode_Neko (*immutable)(libCatCode_kref_catcode_codes_Nyanko thiz);
            libCatCode_KBoolean (*isEmpty)(libCatCode_kref_catcode_codes_Nyanko thiz);
            libCatCode_kref_catcode_MutableNeko (*mutable_)(libCatCode_kref_catcode_codes_Nyanko thiz);
            libCatCode_kref_kotlin_CharSequence (*subSequence)(libCatCode_kref_catcode_codes_Nyanko thiz, libCatCode_KInt startIndex, libCatCode_KInt endIndex);
            libCatCode_kref_kotlin_collections_Map (*toMap)(libCatCode_kref_catcode_codes_Nyanko thiz);
            const char* (*toString)(libCatCode_kref_catcode_codes_Nyanko thiz);
            struct {
              libCatCode_KType* (*_type)(void);
              libCatCode_kref_catcode_codes_Nyanko_Of (*_instance)();
              libCatCode_kref_catcode_codes_Nyanko (*byCode)(libCatCode_kref_catcode_codes_Nyanko_Of thiz, const char* code);
            } Of;
          } Nyanko;
        } codes;
        struct {
        } collection;
      } catcode;
    } root;
  } kotlin;
} libCatCode_ExportedSymbols;
extern libCatCode_ExportedSymbols* libCatCode_symbols(void);
#ifdef __cplusplus
}  /* extern "C" */
#endif
#endif  /* KONAN_LIBCATCODE_H */
