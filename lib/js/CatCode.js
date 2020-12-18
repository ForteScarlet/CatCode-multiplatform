(function (root, factory) {
  if (typeof define === 'function' && define.amd)
    define(['exports', 'kotlin'], factory);
  else if (typeof exports === 'object')
    factory(module.exports, require('kotlin'));
  else {
    if (typeof kotlin === 'undefined') {
      throw new Error("Error loading module 'CatCode'. Its dependency 'kotlin' was not found. Please, check whether 'kotlin' is loaded prior to 'CatCode'.");
    }root.CatCode = factory(typeof CatCode === 'undefined' ? {} : CatCode, kotlin);
  }
}(this, function (_, Kotlin) {
  'use strict';
  var $$importsForInline$$ = _.$$importsForInline$$ || (_.$$importsForInline$$ = {});
  var replace = Kotlin.kotlin.text.replace_680rmw$;
  var Kind_OBJECT = Kotlin.Kind.OBJECT;
  var startsWith = Kotlin.kotlin.text.startsWith_7epoxm$;
  var endsWith = Kotlin.kotlin.text.endsWith_7epoxm$;
  var IllegalArgumentException_init = Kotlin.kotlin.IllegalArgumentException_init_pdl1vj$;
  var Kind_CLASS = Kotlin.Kind.CLASS;
  var Iterator = Kotlin.kotlin.collections.Iterator;
  var indexOf = Kotlin.kotlin.text.indexOf_l5u8uk$;
  var ensureNotNull = Kotlin.ensureNotNull;
  var NoSuchElementException_init = Kotlin.kotlin.NoSuchElementException_init;
  var get_lastIndex = Kotlin.kotlin.text.get_lastIndex_gw00vp$;
  var split = Kotlin.kotlin.text.split_ip8yn$;
  var Map$Entry = Kotlin.kotlin.collections.Map.Entry;
  var Pair = Kotlin.kotlin.Pair;
  var Array_0 = Array;
  var Kind_INTERFACE = Kotlin.Kind.INTERFACE;
  var NullPointerException = Kotlin.kotlin.NullPointerException;
  var StringBuilder = Kotlin.kotlin.text.StringBuilder;
  var toMap = Kotlin.kotlin.collections.toMap_abgq59$;
  var LazyThreadSafetyMode = Kotlin.kotlin.LazyThreadSafetyMode;
  var LinkedHashMap_init = Kotlin.kotlin.collections.LinkedHashMap_init_q3lmfv$;
  var Regex_init = Kotlin.kotlin.text.Regex_init_61zpoe$;
  var toMutableMap = Kotlin.kotlin.collections.toMutableMap_abgq59$;
  var throwCCE = Kotlin.throwCCE;
  var equals = Kotlin.equals;
  var hashCode = Kotlin.hashCode;
  var wrapFunction = Kotlin.wrapFunction;
  var to = Kotlin.kotlin.to_ujzrz7$;
  var toMap_0 = Kotlin.kotlin.collections.toMap_6hr0sd$;
  var asSequence = Kotlin.kotlin.collections.asSequence_abgq59$;
  var toString = Kotlin.toString;
  var mapNotNull = Kotlin.kotlin.sequences.mapNotNull_qpz9h9$;
  var toMap_1 = Kotlin.kotlin.collections.toMap_ah2ab9$;
  var lazy = Kotlin.kotlin.lazy_kls4a0$;
  var Map = Kotlin.kotlin.collections.Map;
  var emptyMap = Kotlin.kotlin.collections.emptyMap_q3lmfv$;
  var mapOf = Kotlin.kotlin.collections.mapOf_qfcya0$;
  var MutableMap = Kotlin.kotlin.collections.MutableMap;
  var mutableMapOf = Kotlin.kotlin.collections.mutableMapOf_qfcya0$;
  var trim = Kotlin.kotlin.text.trim_gw00vp$;
  var collectionSizeOrDefault = Kotlin.kotlin.collections.collectionSizeOrDefault_ba2ldo$;
  var ArrayList_init = Kotlin.kotlin.collections.ArrayList_init_ww73n8$;
  var copyToArray = Kotlin.kotlin.collections.copyToArray;
  var ArrayList_init_0 = Kotlin.kotlin.collections.ArrayList_init_287e2$;
  var lazy_0 = Kotlin.kotlin.lazy_klfg04$;
  var contains = Kotlin.kotlin.text.contains_li3zpu$;
  var Set = Kotlin.kotlin.collections.Set;
  var Collection = Kotlin.kotlin.collections.Collection;
  var first = Kotlin.kotlin.text.first_gw00vp$;
  var unboxChar = Kotlin.unboxChar;
  var iterator = Kotlin.kotlin.text.iterator_gw00vp$;
  var toBoxedChar = Kotlin.toBoxedChar;
  var mutableListOf = Kotlin.kotlin.collections.mutableListOf_i5x0yv$;
  var asSequence_0 = Kotlin.kotlin.collections.asSequence_7wnvza$;
  var map = Kotlin.kotlin.sequences.map_z5avom$;
  var toSet = Kotlin.kotlin.sequences.toSet_veqyi0$;
  var StringBuilder_init = Kotlin.kotlin.text.StringBuilder_init;
  var toMutableSet = Kotlin.kotlin.sequences.toMutableSet_veqyi0$;
  var toMutableList = Kotlin.kotlin.sequences.toMutableList_veqyi0$;
  var mapCapacity = Kotlin.kotlin.collections.mapCapacity_za3lpa$;
  var LinkedHashMap_init_0 = Kotlin.kotlin.collections.LinkedHashMap_init_bwtc7$;
  var Lazy = Kotlin.kotlin.Lazy;
  var MutableMap$MutableEntry = Kotlin.kotlin.collections.MutableMap.MutableEntry;
  var joinToString = Kotlin.kotlin.collections.joinToString_fmv235$;
  var MutableList = Kotlin.kotlin.collections.MutableList;
  var listOf = Kotlin.kotlin.collections.listOf_i5x0yv$;
  var CharSequence = Kotlin.kotlin.CharSequence;
  var emptySet = Kotlin.kotlin.collections.emptySet_287e2$;
  var emptyList = Kotlin.kotlin.collections.emptyList_287e2$;
  var asSequence_1 = Kotlin.kotlin.collections.asSequence_us0mfu$;
  var filter = Kotlin.kotlin.sequences.filter_euau3h$;
  var joinToString_0 = Kotlin.kotlin.sequences.joinToString_853xkz$;
  var IndexOutOfBoundsException = Kotlin.kotlin.IndexOutOfBoundsException;
  var StringBuilder_init_0 = Kotlin.kotlin.text.StringBuilder_init_za3lpa$;
  var isBlank = Kotlin.kotlin.text.isBlank_gw00vp$;
  var Annotation = Kotlin.kotlin.Annotation;
  CatCodeUtil.prototype = Object.create(NekoAibo.prototype);
  CatCodeUtil.prototype.constructor = CatCodeUtil;
  CatParamKeyIterator.prototype = Object.create(BaseCatIterator.prototype);
  CatParamKeyIterator.prototype.constructor = CatParamKeyIterator;
  CatParamValueIterator.prototype = Object.create(BaseCatIterator.prototype);
  CatParamValueIterator.prototype.constructor = CatParamValueIterator;
  CatParamKVIterator.prototype = Object.create(BaseCatIterator.prototype);
  CatParamKVIterator.prototype.constructor = CatParamKVIterator;
  CatParamEntryIterator.prototype = Object.create(BaseCatIterator.prototype);
  CatParamEntryIterator.prototype.constructor = CatParamEntryIterator;
  LazyMutableMapNeko.prototype = Object.create(LazyMapNeko.prototype);
  LazyMutableMapNeko.prototype.constructor = LazyMutableMapNeko;
  LazyMutableMapNoraNeko.prototype = Object.create(MapNoraNeko.prototype);
  LazyMutableMapNoraNeko.prototype.constructor = LazyMutableMapNoraNeko;
  MutableMapNeko.prototype = Object.create(MapNeko.prototype);
  MutableMapNeko.prototype.constructor = MutableMapNeko;
  MutableMapNoraNeko.prototype = Object.create(MapNoraNeko.prototype);
  MutableMapNoraNeko.prototype.constructor = MutableMapNoraNeko;
  MutableNekoMapDelegation.prototype = Object.create(NekoMapDelegation.prototype);
  MutableNekoMapDelegation.prototype.constructor = MutableNekoMapDelegation;
  WildcatCodeUtil.prototype = Object.create(NekoAibo.prototype);
  WildcatCodeUtil.prototype.constructor = WildcatCodeUtil;
  var CAT_KV_SPLIT_ARRAY;
  var CAT_PS_SPLIT_ARRAY;
  function CatDecoder() {
    CatDecoder_instance = this;
  }
  Object.defineProperty(CatDecoder.prototype, 'instance', {
    configurable: true,
    get: function () {
      return this;
    }
  });
  CatDecoder.prototype.decodeText = function (str) {
    return replace(replace(replace(replace(replace(replace(str, '&#91;', '['), '&#93;', ']'), '&#09;', '\t'), '&#10;', '\r'), '&#13;', '\n'), '&amp;', '&');
  };
  CatDecoder.prototype.decodeTextOrNull = function (str) {
    return str != null ? this.decodeText(str) : null;
  };
  CatDecoder.prototype.decodeParams = function (str) {
    return replace(replace(replace(replace(replace(replace(replace(str, '&#91;', '['), '&#93;', ']'), '&#44;', ','), '&#09;', '\t'), '&#10;', '\r'), '&#13;', '\n'), '&amp;', '&');
  };
  CatDecoder.prototype.decodeParamsOrNull = function (str) {
    return str != null ? this.decodeParams(str) : null;
  };
  CatDecoder.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'CatDecoder',
    interfaces: []
  };
  var CatDecoder_instance = null;
  function CatDecoder_getInstance() {
    if (CatDecoder_instance === null) {
      new CatDecoder();
    }return CatDecoder_instance;
  }
  function deCatParam($receiver) {
    return CatDecoder_getInstance().decodeParams($receiver);
  }
  function deCatText($receiver) {
    return CatDecoder_getInstance().decodeText($receiver);
  }
  function CatEncoder() {
    CatEncoder_instance = this;
  }
  Object.defineProperty(CatEncoder.prototype, 'instance', {
    configurable: true,
    get: function () {
      return this;
    }
  });
  CatEncoder.prototype.encodeText = function (str) {
    return replace(replace(replace(replace(replace(replace(str, '&', '&amp;'), '[', '&#91;'), ']', '&#93;'), '\t', '&#09;'), '\r', '&#10;'), '\n', '&#13;');
  };
  CatEncoder.prototype.encodeTextOrNull = function (str) {
    return str != null ? this.encodeText(str) : null;
  };
  CatEncoder.prototype.encodeParams = function (str) {
    return replace(replace(replace(replace(replace(replace(replace(str, '&', '&amp;'), '[', '&#91;'), ']', '&#93;'), ',', '&#44;'), '\t', '&#09;'), '\r', '&#10;'), '\n', '&#13;');
  };
  CatEncoder.prototype.encodeParamsOrNull = function (str) {
    return str != null ? this.encodeParams(str) : null;
  };
  CatEncoder.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'CatEncoder',
    interfaces: []
  };
  var CatEncoder_instance = null;
  function CatEncoder_getInstance() {
    if (CatEncoder_instance === null) {
      new CatEncoder();
    }return CatEncoder_instance;
  }
  function enCatParam($receiver) {
    return CatEncoder_getInstance().encodeParams($receiver);
  }
  function enCatText($receiver) {
    return CatEncoder_getInstance().encodeText($receiver);
  }
  function CatCodeUtil() {
    CatCodeUtil_instance = this;
    NekoAibo.call(this, 'CAT');
    this.catCodeHead_5u6nsb$_0 = CAT_HEAD;
  }
  Object.defineProperty(CatCodeUtil.prototype, 'instance', {
    configurable: true,
    get: function () {
      return this;
    }
  });
  Object.defineProperty(CatCodeUtil.prototype, 'catCodeHead', {
    configurable: true,
    get: function () {
      return this.catCodeHead_5u6nsb$_0;
    }
  });
  Object.defineProperty(CatCodeUtil.prototype, 'stringTemplate', {
    configurable: true,
    get: function () {
      return StringTemplate_getInstance();
    }
  });
  Object.defineProperty(CatCodeUtil.prototype, 'nekoTemplate', {
    configurable: true,
    get: function () {
      return NekoTemplate_getInstance();
    }
  });
  CatCodeUtil.prototype.getStringCodeBuilder$default = function (type, encode) {
    return new StringCodeBuilder(type, encode);
  };
  CatCodeUtil.prototype.getNekoBuilder = function (type, encode) {
    return new NekoBuilder(type);
  };
  CatCodeUtil.prototype.getLazyNekoBuilder = function (type, encode) {
    return new LazyNekoBuilder(type);
  };
  CatCodeUtil.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'CatCodeUtil',
    interfaces: [NekoAibo]
  };
  var CatCodeUtil_instance = null;
  function CatCodeUtil_getInstance() {
    if (CatCodeUtil_instance === null) {
      new CatCodeUtil();
    }return CatCodeUtil_instance;
  }
  function BaseCatIterator(code) {
    this.code_0 = code;
    if (!startsWith(this.code_0, CAT_HEAD) || !endsWith(this.code_0, CAT_END)) {
      throw IllegalArgumentException_init("text '" + this.code_0 + "' is not a cat code text.");
    }this.index_0 = 0;
  }
  BaseCatIterator.prototype.hasNext = function () {
    return this.index_0 >= 0 && this.nextIndex() > 0;
  };
  BaseCatIterator.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'BaseCatIterator',
    interfaces: [Iterator]
  };
  function CatTextIterator(text, type) {
    if (type === void 0)
      type = '';
    this.text_0 = text;
    this.i_0 = -1;
    this.ti_0 = 0;
    this.e_0 = 0;
    this.het_0 = CAT_HEAD + type;
    this.ent_0 = CAT_END;
    this.next_0 = null;
    this.get_0 = true;
  }
  CatTextIterator.prototype.hasNext = function () {
    if (!this.get_0) {
      return this.next_0 != null;
    }this.get_0 = false;
    do {
      this.ti_0 = indexOf(this.text_0, this.het_0, this.e_0);
      if (this.ti_0 >= 0) {
        this.e_0 = indexOf(this.text_0, this.ent_0, this.ti_0);
        if (this.e_0 >= 0) {
          this.i_0 = this.i_0 + 1 | 0;
          var $receiver = this.text_0;
          var startIndex = this.ti_0;
          var endIndex = this.e_0 + 1 | 0;
          this.next_0 = $receiver.substring(startIndex, endIndex);
        } else {
          this.e_0 = this.ti_0 + 1 | 0;
        }
      }}
     while (this.next_0 == null && (this.ti_0 >= 0 && this.e_0 >= 0));
    return this.next_0 != null;
  };
  CatTextIterator.prototype.next = function () {
    var n = this.next_0;
    this.next_0 = null;
    this.get_0 = true;
    return ensureNotNull(n);
  };
  CatTextIterator.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'CatTextIterator',
    interfaces: [Iterator]
  };
  function CatParamKeyIterator(code) {
    BaseCatIterator.call(this, code);
  }
  CatParamKeyIterator.prototype.nextIndex = function () {
    return indexOf(this.code_0, CAT_PS, this.index_0 === 0 ? 0 : this.index_0 + 1 | 0);
  };
  CatParamKeyIterator.prototype.next = function () {
    if (!this.hasNext())
      throw NoSuchElementException_init();
    this.index_0 = this.nextIndex();
    var nextKv = indexOf(this.code_0, CAT_KV, this.index_0);
    var $receiver = this.code_0;
    var startIndex = this.index_0 + 1 | 0;
    return $receiver.substring(startIndex, nextKv);
  };
  CatParamKeyIterator.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'CatParamKeyIterator',
    interfaces: [BaseCatIterator]
  };
  function CatParamValueIterator(code) {
    BaseCatIterator.call(this, code);
  }
  CatParamValueIterator.prototype.nextIndex = function () {
    return indexOf(this.code_0, CAT_KV, this.index_0 === 0 ? 0 : this.index_0 + 1 | 0);
  };
  CatParamValueIterator.prototype.hasNext = function () {
    return this.index_0 >= 0 && this.nextIndex() > 0;
  };
  CatParamValueIterator.prototype.next = function () {
    if (!this.hasNext())
      throw NoSuchElementException_init();
    this.index_0 = this.nextIndex();
    var nextSplit = indexOf(this.code_0, CAT_PS, this.index_0);
    if (nextSplit < 0) {
      nextSplit = get_lastIndex(this.code_0);
    }var tmp$ = CatDecoder_getInstance();
    var $receiver = this.code_0;
    var startIndex = this.index_0 + 1 | 0;
    var endIndex = nextSplit;
    return tmp$.decodeParams($receiver.substring(startIndex, endIndex));
  };
  CatParamValueIterator.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'CatParamValueIterator',
    interfaces: [BaseCatIterator]
  };
  function CatParamKVIterator(code) {
    BaseCatIterator.call(this, code);
  }
  CatParamKVIterator.prototype.nextIndex = function () {
    return indexOf(this.code_0, CAT_PS, this.index_0 === 0 ? 0 : this.index_0 + 1 | 0);
  };
  CatParamKVIterator.prototype.next = function () {
    if (!this.hasNext())
      throw NoSuchElementException_init();
    this.index_0 = this.nextIndex();
    var nextSplit = indexOf(this.code_0, CAT_PS, this.index_0 + 1 | 0);
    if (nextSplit < 0) {
      nextSplit = get_lastIndex(this.code_0);
    }var $receiver = this.code_0;
    var startIndex = this.index_0 + 1 | 0;
    var endIndex = nextSplit;
    var substr = $receiver.substring(startIndex, endIndex);
    var keyValue = split(substr, [CAT_KV]);
    return cTo(keyValue.get_za3lpa$(0), CatDecoder_getInstance().decodeParams(keyValue.get_za3lpa$(1)));
  };
  CatParamKVIterator.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'CatParamKVIterator',
    interfaces: [BaseCatIterator]
  };
  function CatParamEntryIterator(code) {
    BaseCatIterator.call(this, code);
  }
  CatParamEntryIterator.prototype.nextIndex = function () {
    return indexOf(this.code_0, CAT_PS, this.index_0 === 0 ? 0 : this.index_0 + 1 | 0);
  };
  CatParamEntryIterator.prototype.hasNext = function () {
    return this.index_0 >= 0 && this.nextIndex() > 0;
  };
  CatParamEntryIterator.prototype.next = function () {
    if (!this.hasNext())
      throw NoSuchElementException_init();
    this.index_0 = this.nextIndex();
    var nextSplit = indexOf(this.code_0, CAT_PS, this.index_0 + 1 | 0);
    if (nextSplit < 0) {
      nextSplit = get_lastIndex(this.code_0);
    }var $receiver = this.code_0;
    var startIndex = this.index_0 + 1 | 0;
    var endIndex = nextSplit;
    var substr = $receiver.substring(startIndex, endIndex);
    var keyValue = split(substr, [CAT_KV]);
    return new KqEntry(keyValue.get_za3lpa$(0), CatDecoder_getInstance().decodeParams(keyValue.get_za3lpa$(1)));
  };
  CatParamEntryIterator.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'CatParamEntryIterator',
    interfaces: [BaseCatIterator]
  };
  function KqEntry(key, value) {
    this.key_r7x49k$_0 = key;
    this.value_dwj0tm$_0 = value;
  }
  Object.defineProperty(KqEntry.prototype, 'key', {
    get: function () {
      return this.key_r7x49k$_0;
    }
  });
  Object.defineProperty(KqEntry.prototype, 'value', {
    get: function () {
      return this.value_dwj0tm$_0;
    }
  });
  KqEntry.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'KqEntry',
    interfaces: [Map$Entry]
  };
  KqEntry.prototype.component1 = function () {
    return this.key;
  };
  KqEntry.prototype.component2 = function () {
    return this.value;
  };
  KqEntry.prototype.copy_puj7f4$ = function (key, value) {
    return new KqEntry(key === void 0 ? this.key : key, value === void 0 ? this.value : value);
  };
  KqEntry.prototype.toString = function () {
    return 'KqEntry(key=' + Kotlin.toString(this.key) + (', value=' + Kotlin.toString(this.value)) + ')';
  };
  KqEntry.prototype.hashCode = function () {
    var result = 0;
    result = result * 31 + Kotlin.hashCode(this.key) | 0;
    result = result * 31 + Kotlin.hashCode(this.value) | 0;
    return result;
  };
  KqEntry.prototype.equals = function (other) {
    return this === other || (other !== null && (typeof other === 'object' && (Object.getPrototypeOf(this) === Object.getPrototypeOf(other) && (Kotlin.equals(this.key, other.key) && Kotlin.equals(this.value, other.value)))));
  };
  function CatKV(key, value) {
    CatKV$KV_getInstance();
    this.key = key;
    this.value = value;
  }
  CatKV.prototype.toString = function () {
    return 'KV(' + this.key + CAT_KV + this.value + ')';
  };
  function CatKV$KV() {
    CatKV$KV_instance = this;
  }
  CatKV$KV.prototype.kv_o5fpdy$ = function (k, v) {
    return new CatKV(k, v);
  };
  CatKV$KV.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'KV',
    interfaces: []
  };
  var CatKV$KV_instance = null;
  function CatKV$KV_getInstance() {
    if (CatKV$KV_instance === null) {
      new CatKV$KV();
    }return CatKV$KV_instance;
  }
  CatKV.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'CatKV',
    interfaces: []
  };
  CatKV.prototype.component1 = function () {
    return this.key;
  };
  CatKV.prototype.component2 = function () {
    return this.value;
  };
  CatKV.prototype.copy_xwzc9p$ = function (key, value) {
    return new CatKV(key === void 0 ? this.key : key, value === void 0 ? this.value : value);
  };
  CatKV.prototype.hashCode = function () {
    var result = 0;
    result = result * 31 + Kotlin.hashCode(this.key) | 0;
    result = result * 31 + Kotlin.hashCode(this.value) | 0;
    return result;
  };
  CatKV.prototype.equals = function (other) {
    return this === other || (other !== null && (typeof other === 'object' && (Object.getPrototypeOf(this) === Object.getPrototypeOf(other) && (Kotlin.equals(this.key, other.key) && Kotlin.equals(this.value, other.value)))));
  };
  function cTo($receiver, v) {
    return new CatKV($receiver, v);
  }
  function toPair($receiver) {
    return new Pair($receiver.key, $receiver.value);
  }
  function toKV($receiver) {
    return new CatKV($receiver.first, $receiver.second);
  }
  function toPair_0($receiver) {
    var array = Array_0($receiver.length);
    var tmp$;
    tmp$ = array.length - 1 | 0;
    for (var i = 0; i <= tmp$; i++) {
      array[i] = toPair($receiver[i]);
    }
    return array;
  }
  function CodeBuilder() {
  }
  function CodeBuilder$CodeBuilderKey() {
  }
  CodeBuilder$CodeBuilderKey.$metadata$ = {
    kind: Kind_INTERFACE,
    simpleName: 'CodeBuilderKey',
    interfaces: []
  };
  CodeBuilder.$metadata$ = {
    kind: Kind_INTERFACE,
    simpleName: 'CodeBuilder',
    interfaces: []
  };
  function LazyCodeBuilder() {
  }
  function LazyCodeBuilder$LazyCodeBuilderKey() {
  }
  LazyCodeBuilder$LazyCodeBuilderKey.$metadata$ = {
    kind: Kind_INTERFACE,
    simpleName: 'LazyCodeBuilderKey',
    interfaces: [CodeBuilder$CodeBuilderKey]
  };
  LazyCodeBuilder.$metadata$ = {
    kind: Kind_INTERFACE,
    simpleName: 'LazyCodeBuilder',
    interfaces: [CodeBuilder]
  };
  function StringCodeBuilder(type, encode) {
    if (encode === void 0)
      encode = true;
    this.type_o335d0$_0 = type;
    this.encode_0 = encode;
    this.appender_0 = (new StringBuilder(CAT_HEAD)).append_pdl1vj$(this.type);
    this.builderKey_0 = new StringCodeBuilder$StringCodeBuilderKey(this);
    this.key_0 = null;
  }
  Object.defineProperty(StringCodeBuilder.prototype, 'type', {
    get: function () {
      return this.type_o335d0$_0;
    }
  });
  StringCodeBuilder.prototype.key_61zpoe$ = function (key) {
    var $receiver = this.builderKey_0;
    this.key_0 = key;
    return $receiver;
  };
  StringCodeBuilder.prototype.build = function () {
    return this.appender_0.toString() + CAT_END;
  };
  function StringCodeBuilder$StringCodeBuilderKey($outer) {
    this.$outer = $outer;
  }
  StringCodeBuilder$StringCodeBuilderKey.prototype.value_s8jyv4$ = function (value) {
    var tmp$, tmp$_0, tmp$_1;
    var tmp$_2;
    if ((tmp$ = this.$outer.key_0) != null) {
      this.$outer;
      var this$StringCodeBuilder = this.$outer;
      this$StringCodeBuilder.appender_0.append_pdl1vj$(CAT_PS).append_pdl1vj$(tmp$).append_pdl1vj$(CAT_KV);
      if (value != null) {
        this$StringCodeBuilder.appender_0.append_pdl1vj$(CatEncoder_getInstance().encodeParams(value.toString()));
      }tmp$_2 = this$StringCodeBuilder;
    } else
      tmp$_2 = null;
    var tmp$_3;
    if ((tmp$_0 = tmp$_2) != null) {
      this.$outer;
      this.$outer.key_0 = null;
      tmp$_3 = tmp$_0;
    } else
      tmp$_3 = null;
    tmp$_1 = tmp$_3;
    if (tmp$_1 == null) {
      throw new NullPointerException("The 'key' has not been specified.");
    }return tmp$_1;
  };
  StringCodeBuilder$StringCodeBuilderKey.prototype.emptyValue = function () {
    return this.value_s8jyv4$(null);
  };
  StringCodeBuilder$StringCodeBuilderKey.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'StringCodeBuilderKey',
    interfaces: [CodeBuilder$CodeBuilderKey]
  };
  StringCodeBuilder.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'StringCodeBuilder',
    interfaces: [CodeBuilder]
  };
  function NekoBuilder(type) {
    this.type_pdb20p$_0 = type;
    this.params_0 = LinkedHashMap_init();
    this.key_0 = null;
    this.builderKey_0 = new NekoBuilder$NekoBuilderKey(this);
  }
  Object.defineProperty(NekoBuilder.prototype, 'type', {
    get: function () {
      return this.type_pdb20p$_0;
    }
  });
  NekoBuilder.prototype.key_61zpoe$ = function (key) {
    var $receiver = this.builderKey_0;
    this.key_0 = key;
    return $receiver;
  };
  NekoBuilder.prototype.build = function () {
    return MapNeko$Of_getInstance().byMap_8foi92$(this.type, toMap(this.params_0));
  };
  function NekoBuilder$NekoBuilderKey($outer) {
    this.$outer = $outer;
  }
  NekoBuilder$NekoBuilderKey.prototype.value_s8jyv4$ = function (value) {
    var tmp$, tmp$_0, tmp$_1;
    var tmp$_2;
    if ((tmp$ = this.$outer.key_0) != null) {
      this.$outer;
      var this$NekoBuilder = this.$outer;
      var tmp$_3;
      var $receiver = this$NekoBuilder.params_0;
      var value_0 = (tmp$_3 = value != null ? value.toString() : null) != null ? tmp$_3 : '';
      $receiver.put_xwzc9p$(tmp$, value_0);
      tmp$_2 = this$NekoBuilder;
    } else
      tmp$_2 = null;
    var tmp$_4;
    if ((tmp$_0 = tmp$_2) != null) {
      this.$outer;
      this.$outer.key_0 = null;
      tmp$_4 = tmp$_0;
    } else
      tmp$_4 = null;
    tmp$_1 = tmp$_4;
    if (tmp$_1 == null) {
      throw new NullPointerException("The 'key' has not been specified.");
    }return tmp$_1;
  };
  NekoBuilder$NekoBuilderKey.prototype.emptyValue = function () {
    return this.value_s8jyv4$('');
  };
  NekoBuilder$NekoBuilderKey.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'NekoBuilderKey',
    interfaces: [CodeBuilder$CodeBuilderKey]
  };
  NekoBuilder.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'NekoBuilder',
    interfaces: [CodeBuilder]
  };
  function LazyNekoBuilder(type, mode) {
    if (mode === void 0)
      mode = LazyThreadSafetyMode.PUBLICATION;
    this.type_xk99cd$_0 = type;
    this.params_0 = new MutableLazyMap(void 0, mode);
    this.key_0 = null;
    this.builderKey_0 = new LazyNekoBuilder$LazyNekoBuilderKey(this);
  }
  Object.defineProperty(LazyNekoBuilder.prototype, 'type', {
    get: function () {
      return this.type_xk99cd$_0;
    }
  });
  LazyNekoBuilder.prototype.key_61zpoe$ = function (key) {
    var $receiver = this.builderKey_0;
    this.key_0 = key;
    return $receiver;
  };
  LazyNekoBuilder.prototype.build = function () {
    return LazyMapNeko$Of_getInstance().byLazyMap_kkvozd$(this.type, asLazyMap(this.params_0));
  };
  function LazyNekoBuilder$LazyNekoBuilderKey($outer) {
    this.$outer = $outer;
  }
  LazyNekoBuilder$LazyNekoBuilderKey.prototype.value_s8jyv4$ = function (value) {
    var tmp$, tmp$_0, tmp$_1;
    var tmp$_2;
    if ((tmp$ = this.$outer.key_0) != null) {
      this.$outer;
      var this$LazyNekoBuilder = this.$outer;
      var tmp$_3;
      var $receiver = this$LazyNekoBuilder.params_0;
      var value_0 = (tmp$_3 = value != null ? value.toString() : null) != null ? tmp$_3 : '';
      $receiver.put_xwzc9p$(tmp$, value_0);
      tmp$_2 = this$LazyNekoBuilder;
    } else
      tmp$_2 = null;
    var tmp$_4;
    if ((tmp$_0 = tmp$_2) != null) {
      this.$outer;
      this.$outer.key_0 = null;
      tmp$_4 = tmp$_0;
    } else
      tmp$_4 = null;
    tmp$_1 = tmp$_4;
    if (tmp$_1 == null) {
      throw new NullPointerException("The 'key' has not been specified.");
    }return tmp$_1;
  };
  function LazyNekoBuilder$LazyNekoBuilderKey$value$lambda$lambda(closure$value) {
    return function () {
      var tmp$, tmp$_0;
      return (tmp$_0 = (tmp$ = closure$value()) != null ? tmp$.toString() : null) != null ? tmp$_0 : '';
    };
  }
  LazyNekoBuilder$LazyNekoBuilderKey.prototype.value_nq59yw$ = function (value) {
    var tmp$, tmp$_0, tmp$_1;
    var tmp$_2;
    if ((tmp$ = this.$outer.key_0) != null) {
      this.$outer;
      var this$LazyNekoBuilder = this.$outer;
      this$LazyNekoBuilder.params_0.put_kpg1aj$(tmp$, LazyNekoBuilder$LazyNekoBuilderKey$value$lambda$lambda(value));
      tmp$_2 = this$LazyNekoBuilder;
    } else
      tmp$_2 = null;
    var tmp$_3;
    if ((tmp$_0 = tmp$_2) != null) {
      this.$outer;
      this.$outer.key_0 = null;
      tmp$_3 = tmp$_0;
    } else
      tmp$_3 = null;
    tmp$_1 = tmp$_3;
    if (tmp$_1 == null) {
      throw new NullPointerException("The 'key' has not been specified.");
    }return tmp$_1;
  };
  LazyNekoBuilder$LazyNekoBuilderKey.prototype.emptyValue = function () {
    return this.value_s8jyv4$('');
  };
  LazyNekoBuilder$LazyNekoBuilderKey.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'LazyNekoBuilderKey',
    interfaces: [LazyCodeBuilder$LazyCodeBuilderKey]
  };
  LazyNekoBuilder.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'LazyNekoBuilder',
    interfaces: [LazyCodeBuilder]
  };
  var MAP_SPLIT_REGEX;
  function LazyMapNeko(params, type) {
    LazyMapNeko$Of_getInstance();
    this.params_c38mba$_0 = params;
    this.type_pc9nsu$_0 = type;
    this._toString_q1esct$_iihls7$_0 = lazy(LazyThreadSafetyMode.PUBLICATION, LazyMapNeko$_toString$lambda(this));
  }
  Object.defineProperty(LazyMapNeko.prototype, 'type', {
    get: function () {
      return this.type_pc9nsu$_0;
    },
    set: function (type) {
      this.type_pc9nsu$_0 = type;
    }
  });
  Object.defineProperty(LazyMapNeko.prototype, 'length', {
    configurable: true,
    get: function () {
      return this.toString().length;
    }
  });
  LazyMapNeko.prototype.getNoDecode = function (key) {
    return CatEncoder_getInstance().encodeParamsOrNull(this.get(key));
  };
  LazyMapNeko.prototype.charCodeAt = function (index) {
    return this.toString().charCodeAt(index);
  };
  LazyMapNeko.prototype.getOrDefault_xwzc9p$ = function (key, defaultValue) {
    var tmp$;
    return (tmp$ = this.params_c38mba$_0.get_11rb$(key)) != null ? tmp$ : defaultValue;
  };
  LazyMapNeko.prototype.subSequence_vux9f0$ = function (startIndex, endIndex) {
    return this.toString().substring(startIndex, endIndex);
  };
  Object.defineProperty(LazyMapNeko.prototype, '_toString_q1esct$_0', {
    configurable: true,
    get: function () {
      return this._toString_q1esct$_iihls7$_0.value;
    }
  });
  LazyMapNeko.prototype.toString = function () {
    return this._toString_q1esct$_0;
  };
  LazyMapNeko.prototype.mutable = function () {
    return MutableMapNeko_init_0(this.type, toMutableMap(this));
  };
  LazyMapNeko.prototype.immutable = function () {
    return new LazyMapNeko(this.params_c38mba$_0, this.type);
  };
  LazyMapNeko.prototype.toMap = function () {
    return this.params_c38mba$_0.copy();
  };
  LazyMapNeko.prototype.equals = function (other) {
    var tmp$;
    if (this === other)
      return true;
    Kotlin.isType(tmp$ = other, LazyMapNeko) ? tmp$ : throwCCE();
    if (!equals(this.params_c38mba$_0, other.params_c38mba$_0))
      return false;
    if (!equals(this.type, other.type))
      return false;
    return true;
  };
  LazyMapNeko.prototype.hashCode = function () {
    var result = hashCode(this.params_c38mba$_0);
    result = (31 * result | 0) + hashCode(this.type) | 0;
    return result;
  };
  function LazyMapNeko$Of() {
    LazyMapNeko$Of_instance = this;
    this.TEMP_SPLIT_REGEX_0 = Regex_init(' *, *');
  }
  LazyMapNeko$Of.prototype.splitCode_0 = wrapFunction(function () {
    var throwCCE = Kotlin.throwCCE;
    var trim = Kotlin.kotlin.text.trim_gw00vp$;
    return function (code) {
      var tmp$;
      var tempText = trim(Kotlin.isCharSequence(tmp$ = code) ? tmp$ : throwCCE()).toString();
      if (!startsWith(tempText, CAT_HEAD) || !endsWith(tempText, CAT_END)) {
        throw IllegalArgumentException_init("not starts with '[CAT:' or not ends with ']'");
      }var $receiver = tempText;
      var endIndex = get_lastIndex(tempText);
      tempText = $receiver.substring(4, endIndex);
      var $receiver_0 = tempText;
      var split = this.TEMP_SPLIT_REGEX_0.split_905azu$($receiver_0, 0);
      var type = split.get_za3lpa$(0);
      return cTo(type, split);
    };
  });
  LazyMapNeko$Of.prototype.byCode_ivxn3r$ = function (code, decode) {
    if (decode === void 0)
      decode = true;
    var tmp$;
    var tmp$_0;
    var tempText = trim(Kotlin.isCharSequence(tmp$_0 = code) ? tmp$_0 : throwCCE()).toString();
    if (!startsWith(tempText, CAT_HEAD) || !endsWith(tempText, CAT_END)) {
      throw IllegalArgumentException_init("not starts with '[CAT:' or not ends with ']'");
    }var $receiver = tempText;
    var endIndex = get_lastIndex(tempText);
    tempText = $receiver.substring(4, endIndex);
    var $receiver_0 = tempText;
    var split = this.TEMP_SPLIT_REGEX_0.split_905azu$($receiver_0, 0);
    var type = split.get_za3lpa$(0);
    var tmp$_1 = cTo(type, split);
    var type_0 = tmp$_1.component1()
    , split_0 = tmp$_1.component2();
    if (split_0.size > 1) {
      if (decode) {
        var $receiver_1 = split_0.subList_vux9f0$(1, split_0.size);
        var destination = ArrayList_init(collectionSizeOrDefault($receiver_1, 10));
        var tmp$_2;
        tmp$_2 = $receiver_1.iterator();
        while (tmp$_2.hasNext()) {
          var item = tmp$_2.next();
          var tmp$_3 = destination.add_11rb$;
          var sp = Regex_init('=').split_905azu$(item, 2);
          tmp$_3.call(destination, to(sp.get_za3lpa$(0), deCatParam(sp.get_za3lpa$(1))));
        }
        var map = toMap_0(destination);
        tmp$ = new LazyMapNeko(toLazyMap(map), type_0);
      } else {
        tmp$ = LazyMapNeko_init_2(type_0, copyToArray(split_0.subList_vux9f0$(1, split_0.size)).slice());
      }
    } else {
      tmp$ = LazyMapNeko_init(type_0);
    }
    return tmp$;
  };
  function LazyMapNeko$Of$byMap$lambda(it) {
    return it.value == null ? null : to(it.key, toString(it.value));
  }
  LazyMapNeko$Of.prototype.byMap_8foi92$ = function (type, params) {
    return MapNeko_init_0(type, toMap_1(mapNotNull(asSequence(params), LazyMapNeko$Of$byMap$lambda)));
  };
  LazyMapNeko$Of.prototype.byLazyMap_kkvozd$ = function (type, params) {
    return new LazyMapNeko(params.copy(), type);
  };
  LazyMapNeko$Of.prototype.byKV_ycbbc1$ = function (type, params) {
    var destination = ArrayList_init_0();
    var tmp$;
    for (tmp$ = 0; tmp$ !== params.length; ++tmp$) {
      var element = params[tmp$];
      var tmp$_0;
      if ((tmp$_0 = element.value == null ? null : to(element.key, element.value.toString())) != null) {
        destination.add_11rb$(tmp$_0);
      }}
    return MapNeko_init_0(type, toMap_0(destination));
  };
  LazyMapNeko$Of.prototype.byParamString_60y5e1$ = function (type, params) {
    return MapNeko_init_2(type, params.slice());
  };
  LazyMapNeko$Of.prototype.mutableByCode_ivxn3r$ = function (code, decode) {
    if (decode === void 0)
      decode = true;
    var tmp$;
    var tmp$_0;
    var tempText = trim(Kotlin.isCharSequence(tmp$_0 = code) ? tmp$_0 : throwCCE()).toString();
    if (!startsWith(tempText, CAT_HEAD) || !endsWith(tempText, CAT_END)) {
      throw IllegalArgumentException_init("not starts with '[CAT:' or not ends with ']'");
    }var $receiver = tempText;
    var endIndex = get_lastIndex(tempText);
    tempText = $receiver.substring(4, endIndex);
    var $receiver_0 = tempText;
    var split = this.TEMP_SPLIT_REGEX_0.split_905azu$($receiver_0, 0);
    var type = split.get_za3lpa$(0);
    var tmp$_1 = cTo(type, split);
    var type_0 = tmp$_1.component1()
    , split_0 = tmp$_1.component2();
    if (split_0.size > 1) {
      if (decode) {
        var $receiver_1 = split_0.subList_vux9f0$(1, split_0.size);
        var destination = ArrayList_init(collectionSizeOrDefault($receiver_1, 10));
        var tmp$_2;
        tmp$_2 = $receiver_1.iterator();
        while (tmp$_2.hasNext()) {
          var item = tmp$_2.next();
          var tmp$_3 = destination.add_11rb$;
          var sp = Regex_init('=').split_905azu$(item, 2);
          tmp$_3.call(destination, to(sp.get_za3lpa$(0), CatDecoder_getInstance().decodeParams(sp.get_za3lpa$(1))));
        }
        var map = toMutableMap(toMap_0(destination));
        tmp$ = MutableMapNeko_init_0(type_0, map);
      } else {
        tmp$ = MutableMapNeko_init_2(type_0, copyToArray(split_0.subList_vux9f0$(1, split_0.size)).slice());
      }
    } else {
      tmp$ = MutableMapNeko_init(type_0);
    }
    return tmp$;
  };
  LazyMapNeko$Of.prototype.mutableByMap_mvjluj$ = function (type, params) {
    return MutableMapNeko_init_0(type, params);
  };
  LazyMapNeko$Of.prototype.mutableByKV_cbjnkd$ = function (type, params) {
    return MutableMapNeko_init_1(type, params.slice());
  };
  LazyMapNeko$Of.prototype.mutableByParamString_60y5e1$ = function (type, params) {
    return MutableMapNeko_init_2(type, params.slice());
  };
  LazyMapNeko$Of.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'Of',
    interfaces: []
  };
  var LazyMapNeko$Of_instance = null;
  function LazyMapNeko$Of_getInstance() {
    if (LazyMapNeko$Of_instance === null) {
      new LazyMapNeko$Of();
    }return LazyMapNeko$Of_instance;
  }
  Object.defineProperty(LazyMapNeko.prototype, 'entries', {
    get: function () {
      return this.params_c38mba$_0.entries;
    }
  });
  Object.defineProperty(LazyMapNeko.prototype, 'keys', {
    get: function () {
      return this.params_c38mba$_0.keys;
    }
  });
  Object.defineProperty(LazyMapNeko.prototype, 'size', {
    get: function () {
      return this.params_c38mba$_0.size;
    }
  });
  Object.defineProperty(LazyMapNeko.prototype, 'values', {
    get: function () {
      return this.params_c38mba$_0.values;
    }
  });
  LazyMapNeko.prototype.containsKey_11rb$ = function (key) {
    return this.params_c38mba$_0.containsKey_11rb$(key);
  };
  LazyMapNeko.prototype.containsValue_11rc$ = function (value) {
    return this.params_c38mba$_0.containsValue_11rc$(value);
  };
  LazyMapNeko.prototype.get = function (key) {
    return this.params_c38mba$_0.get_11rb$(key);
  };
  LazyMapNeko.prototype.isEmpty = function () {
    return this.params_c38mba$_0.isEmpty();
  };
  function LazyMapNeko$_toString$lambda(this$LazyMapNeko) {
    return function () {
      return CatCodeUtil_getInstance().toCatByMap(this$LazyMapNeko.type, true, this$LazyMapNeko.toMap());
    };
  }
  LazyMapNeko.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'LazyMapNeko',
    interfaces: [Map, Neko]
  };
  function LazyMapNeko_init(type, $this) {
    $this = $this || Object.create(LazyMapNeko.prototype);
    LazyMapNeko.call($this, new LazyMap(emptyMap()), type);
    return $this;
  }
  function LazyMapNeko_init_0(type, params, $this) {
    $this = $this || Object.create(LazyMapNeko.prototype);
    LazyMapNeko.call($this, toLazyMap(params), type);
    return $this;
  }
  function LazyMapNeko_init_1(type, params, $this) {
    $this = $this || Object.create(LazyMapNeko.prototype);
    LazyMapNeko.call($this, toLazyMap(mapOf(toPair_0(params).slice())), type);
    return $this;
  }
  function LazyMapNeko_init_2(type, params, $this) {
    $this = $this || Object.create(LazyMapNeko.prototype);
    var destination = ArrayList_init(params.length);
    var tmp$;
    for (tmp$ = 0; tmp$ !== params.length; ++tmp$) {
      var item = params[tmp$];
      var tmp$_0 = destination.add_11rb$;
      var split_0 = split(item, CAT_KV_SPLIT_ARRAY.slice(), false, 2);
      tmp$_0.call(destination, to(split_0.get_za3lpa$(0), split_0.get_za3lpa$(1)));
    }
    LazyMapNeko.call($this, toLazyMap(mapOf(copyToArray(destination).slice())), type);
    return $this;
  }
  function LazyMutableMapNeko(params, type) {
    LazyMapNeko.call(this, asLazyMap(params), type);
    this.params_0 = params;
  }
  LazyMutableMapNeko.prototype.mutable = function () {
    return new LazyMutableMapNeko(this.params_0, this.type);
  };
  LazyMutableMapNeko.prototype.immutable = function () {
    return MapNeko_init_0(this.type, this);
  };
  LazyMutableMapNeko.prototype.toString = function () {
    return CatCodeUtil_getInstance().toCatByMap(this.type, void 0, this);
  };
  LazyMutableMapNeko.prototype.toMap = function () {
    return this.params_0.copy();
  };
  Object.defineProperty(LazyMutableMapNeko.prototype, 'entries', {
    get: function () {
      return this.params_0.entries;
    }
  });
  Object.defineProperty(LazyMutableMapNeko.prototype, 'keys', {
    get: function () {
      return this.params_0.keys;
    }
  });
  Object.defineProperty(LazyMutableMapNeko.prototype, 'size', {
    get: function () {
      return this.params_0.size;
    }
  });
  Object.defineProperty(LazyMutableMapNeko.prototype, 'values', {
    get: function () {
      return this.params_0.values;
    }
  });
  LazyMutableMapNeko.prototype.clear = function () {
    return this.params_0.clear();
  };
  LazyMutableMapNeko.prototype.containsKey_11rb$ = function (key) {
    return this.params_0.containsKey_11rb$(key);
  };
  LazyMutableMapNeko.prototype.containsValue_11rc$ = function (value) {
    return this.params_0.containsValue_11rc$(value);
  };
  LazyMutableMapNeko.prototype.get = function (key) {
    return this.params_0.get_11rb$(key);
  };
  LazyMutableMapNeko.prototype.isEmpty = function () {
    return this.params_0.isEmpty();
  };
  LazyMutableMapNeko.prototype.put_xwzc9p$ = function (key, value) {
    return this.params_0.put_xwzc9p$(key, value);
  };
  LazyMutableMapNeko.prototype.putAll_a2k3zr$ = function (from) {
    return this.params_0.putAll_a2k3zr$(from);
  };
  LazyMutableMapNeko.prototype.remove_11rb$ = function (key) {
    return this.params_0.remove_11rb$(key);
  };
  LazyMutableMapNeko.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'LazyMutableMapNeko',
    interfaces: [MutableMap, MutableNeko, LazyMapNeko]
  };
  function LazyMutableMapNeko_init(type, $this) {
    $this = $this || Object.create(LazyMutableMapNeko.prototype);
    LazyMutableMapNeko.call($this, new MutableLazyMap(), type);
    return $this;
  }
  function LazyMutableMapNeko_init_0(type, params, $this) {
    $this = $this || Object.create(LazyMutableMapNeko.prototype);
    LazyMutableMapNeko.call($this, toMutableLazyMap(params), type);
    return $this;
  }
  function LazyMutableMapNeko_init_1(type, params, $this) {
    $this = $this || Object.create(LazyMutableMapNeko.prototype);
    LazyMutableMapNeko.call($this, toMutableLazyMap(mutableMapOf(toPair_0(params).slice())), type);
    return $this;
  }
  function LazyMutableMapNeko_init_2(type, params, $this) {
    $this = $this || Object.create(LazyMutableMapNeko.prototype);
    var destination = ArrayList_init(params.length);
    var tmp$;
    for (tmp$ = 0; tmp$ !== params.length; ++tmp$) {
      var item = params[tmp$];
      var tmp$_0 = destination.add_11rb$;
      var split_0 = split(item, CAT_KV_SPLIT_ARRAY.slice(), false, 2);
      tmp$_0.call(destination, to(split_0.get_za3lpa$(0), split_0.get_za3lpa$(1)));
    }
    LazyMutableMapNeko.call($this, toMutableLazyMap(mutableMapOf(copyToArray(destination).slice())), type);
    return $this;
  }
  var MAP_SPLIT_REGEX_0;
  function LazyMapNoraNeko(codeType, params, type) {
    LazyMapNoraNeko$Of_getInstance();
    this.codeType_v9hcgr$_0 = codeType;
    this.params_5tgrlm$_0 = params;
    this.type_fij4pe$_0 = type;
    this._toString_rqe1fh$_fna863$_0 = lazy_0(LazyMapNoraNeko$_toString$lambda(this));
  }
  Object.defineProperty(LazyMapNoraNeko.prototype, 'codeType', {
    get: function () {
      return this.codeType_v9hcgr$_0;
    }
  });
  Object.defineProperty(LazyMapNoraNeko.prototype, 'type', {
    get: function () {
      return this.type_fij4pe$_0;
    },
    set: function (type) {
      this.type_fij4pe$_0 = type;
    }
  });
  Object.defineProperty(LazyMapNoraNeko.prototype, 'length', {
    configurable: true,
    get: function () {
      return this.toString().length;
    }
  });
  LazyMapNoraNeko.prototype.getNoDecode = function (key) {
    return CatEncoder_getInstance().encodeParamsOrNull(this.get(key));
  };
  LazyMapNoraNeko.prototype.charCodeAt = function (index) {
    return this.toString().charCodeAt(index);
  };
  LazyMapNoraNeko.prototype.getOrDefault_xwzc9p$ = function (key, defaultValue) {
    var tmp$;
    return (tmp$ = this.params_5tgrlm$_0.get_11rb$(key)) != null ? tmp$ : defaultValue;
  };
  LazyMapNoraNeko.prototype.subSequence_vux9f0$ = function (startIndex, endIndex) {
    return this.toString().substring(startIndex, endIndex);
  };
  Object.defineProperty(LazyMapNoraNeko.prototype, '_toString_rqe1fh$_0', {
    configurable: true,
    get: function () {
      return this._toString_rqe1fh$_fna863$_0.value;
    }
  });
  LazyMapNoraNeko.prototype.toString = function () {
    return this._toString_rqe1fh$_0;
  };
  LazyMapNoraNeko.prototype.mutable = function () {
    return MutableMapNoraNeko_init_0(this.codeType, this.type, toMutableMap(this));
  };
  LazyMapNoraNeko.prototype.immutable = function () {
    return new LazyMapNoraNeko(this.codeType, this.params_5tgrlm$_0, this.type);
  };
  LazyMapNoraNeko.prototype.toMap = function () {
    return this.params_5tgrlm$_0.copy();
  };
  LazyMapNoraNeko.prototype.equals = function (other) {
    var tmp$;
    if (this === other)
      return true;
    Kotlin.isType(tmp$ = other, LazyMapNoraNeko) ? tmp$ : throwCCE();
    if (!equals(this.params_5tgrlm$_0, other.params_5tgrlm$_0))
      return false;
    if (!equals(this.type, other.type))
      return false;
    return true;
  };
  LazyMapNoraNeko.prototype.hashCode = function () {
    var result = hashCode(this.params_5tgrlm$_0);
    result = (31 * result | 0) + hashCode(this.type) | 0;
    return result;
  };
  function LazyMapNoraNeko$Of() {
    LazyMapNoraNeko$Of_instance = this;
    this.TEMP_SPLIT_REGEX_0 = Regex_init(' *, *');
  }
  LazyMapNoraNeko$Of.prototype.splitCode_0 = wrapFunction(function () {
    var throwCCE = Kotlin.throwCCE;
    var trim = Kotlin.kotlin.text.trim_gw00vp$;
    return function (code) {
      var tmp$;
      var tempText = trim(Kotlin.isCharSequence(tmp$ = code) ? tmp$ : throwCCE()).toString();
      if (!startsWith(tempText, CAT_HEAD) || !endsWith(tempText, CAT_END)) {
        throw IllegalArgumentException_init("not starts with '[CAT:' or not ends with ']'");
      }var $receiver = tempText;
      var endIndex = get_lastIndex(tempText);
      tempText = $receiver.substring(4, endIndex);
      var $receiver_0 = tempText;
      var split = this.TEMP_SPLIT_REGEX_0.split_905azu$($receiver_0, 0);
      var type = split.get_za3lpa$(0);
      return cTo(type, split);
    };
  });
  LazyMapNoraNeko$Of.prototype.byCode_qz9155$ = function (codeType, code, decode) {
    if (decode === void 0)
      decode = true;
    var tmp$;
    var tmp$_0;
    var tempText = trim(Kotlin.isCharSequence(tmp$_0 = code) ? tmp$_0 : throwCCE()).toString();
    if (!startsWith(tempText, CAT_HEAD) || !endsWith(tempText, CAT_END)) {
      throw IllegalArgumentException_init("not starts with '[CAT:' or not ends with ']'");
    }var $receiver = tempText;
    var endIndex = get_lastIndex(tempText);
    tempText = $receiver.substring(4, endIndex);
    var $receiver_0 = tempText;
    var split = this.TEMP_SPLIT_REGEX_0.split_905azu$($receiver_0, 0);
    var type = split.get_za3lpa$(0);
    var tmp$_1 = cTo(type, split);
    var type_0 = tmp$_1.component1()
    , split_0 = tmp$_1.component2();
    if (split_0.size > 1) {
      if (decode) {
        var $receiver_1 = split_0.subList_vux9f0$(1, split_0.size);
        var destination = ArrayList_init(collectionSizeOrDefault($receiver_1, 10));
        var tmp$_2;
        tmp$_2 = $receiver_1.iterator();
        while (tmp$_2.hasNext()) {
          var item = tmp$_2.next();
          var tmp$_3 = destination.add_11rb$;
          var sp = Regex_init('=').split_905azu$(item, 2);
          tmp$_3.call(destination, to(sp.get_za3lpa$(0), CatDecoder_getInstance().decodeParams(sp.get_za3lpa$(1))));
        }
        var map = toMap_0(destination);
        tmp$ = new LazyMapNoraNeko(codeType, toLazyMap(map), type_0);
      } else {
        tmp$ = LazyMapNoraNeko_init_2(codeType, type_0, copyToArray(split_0.subList_vux9f0$(1, split_0.size)).slice());
      }
    } else {
      tmp$ = LazyMapNoraNeko_init(codeType, type_0);
    }
    return tmp$;
  };
  LazyMapNoraNeko$Of.prototype.byMap_hq2gfh$ = function (codeType, type, params) {
    return LazyMapNoraNeko_init_0(codeType, type, params);
  };
  LazyMapNoraNeko$Of.prototype.byKV_qz99sv$ = function (codeType, type, params) {
    return LazyMapNoraNeko_init_1(codeType, type, params.slice());
  };
  LazyMapNoraNeko$Of.prototype.byParamString_8m11s9$ = function (codeType, type, params) {
    return LazyMapNoraNeko_init_2(codeType, type, params.slice());
  };
  LazyMapNoraNeko$Of.prototype.mutableByCode_qz9155$ = function (codeType, code, decode) {
    if (decode === void 0)
      decode = true;
    var tmp$;
    var tmp$_0;
    var tempText = trim(Kotlin.isCharSequence(tmp$_0 = code) ? tmp$_0 : throwCCE()).toString();
    if (!startsWith(tempText, CAT_HEAD) || !endsWith(tempText, CAT_END)) {
      throw IllegalArgumentException_init("not starts with '[CAT:' or not ends with ']'");
    }var $receiver = tempText;
    var endIndex = get_lastIndex(tempText);
    tempText = $receiver.substring(4, endIndex);
    var $receiver_0 = tempText;
    var split = this.TEMP_SPLIT_REGEX_0.split_905azu$($receiver_0, 0);
    var type = split.get_za3lpa$(0);
    var tmp$_1 = cTo(type, split);
    var type_0 = tmp$_1.component1()
    , split_0 = tmp$_1.component2();
    if (split_0.size > 1) {
      if (decode) {
        var $receiver_1 = split_0.subList_vux9f0$(1, split_0.size);
        var destination = ArrayList_init(collectionSizeOrDefault($receiver_1, 10));
        var tmp$_2;
        tmp$_2 = $receiver_1.iterator();
        while (tmp$_2.hasNext()) {
          var item = tmp$_2.next();
          var tmp$_3 = destination.add_11rb$;
          var sp = Regex_init('=').split_905azu$(item, 2);
          tmp$_3.call(destination, to(sp.get_za3lpa$(0), CatDecoder_getInstance().decodeParams(sp.get_za3lpa$(1))));
        }
        var map = toMutableMap(toMap_0(destination));
        tmp$ = MutableMapNoraNeko_init_0(codeType, type_0, map);
      } else {
        tmp$ = MutableMapNoraNeko_init_2(codeType, type_0, copyToArray(split_0.subList_vux9f0$(1, split_0.size)).slice());
      }
    } else {
      tmp$ = MutableMapNoraNeko_init(codeType, type_0);
    }
    return tmp$;
  };
  LazyMapNoraNeko$Of.prototype.mutableByMap_hq2gfh$ = function (codeType, type, params) {
    return MutableMapNoraNeko_init_0(codeType, type, params);
  };
  LazyMapNoraNeko$Of.prototype.mutableByKV_qz99sv$ = function (codeType, type, params) {
    return MutableMapNoraNeko_init_1(codeType, type, params.slice());
  };
  LazyMapNoraNeko$Of.prototype.mutableByParamString_8m11s9$ = function (codeType, type, params) {
    return MutableMapNoraNeko_init_2(codeType, type, params.slice());
  };
  LazyMapNoraNeko$Of.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'Of',
    interfaces: []
  };
  var LazyMapNoraNeko$Of_instance = null;
  function LazyMapNoraNeko$Of_getInstance() {
    if (LazyMapNoraNeko$Of_instance === null) {
      new LazyMapNoraNeko$Of();
    }return LazyMapNoraNeko$Of_instance;
  }
  Object.defineProperty(LazyMapNoraNeko.prototype, 'entries', {
    get: function () {
      return this.params_5tgrlm$_0.entries;
    }
  });
  Object.defineProperty(LazyMapNoraNeko.prototype, 'keys', {
    get: function () {
      return this.params_5tgrlm$_0.keys;
    }
  });
  Object.defineProperty(LazyMapNoraNeko.prototype, 'size', {
    get: function () {
      return this.params_5tgrlm$_0.size;
    }
  });
  Object.defineProperty(LazyMapNoraNeko.prototype, 'values', {
    get: function () {
      return this.params_5tgrlm$_0.values;
    }
  });
  LazyMapNoraNeko.prototype.containsKey_11rb$ = function (key) {
    return this.params_5tgrlm$_0.containsKey_11rb$(key);
  };
  LazyMapNoraNeko.prototype.containsValue_11rc$ = function (value) {
    return this.params_5tgrlm$_0.containsValue_11rc$(value);
  };
  LazyMapNoraNeko.prototype.get = function (key) {
    return this.params_5tgrlm$_0.get_11rb$(key);
  };
  LazyMapNoraNeko.prototype.isEmpty = function () {
    return this.params_5tgrlm$_0.isEmpty();
  };
  function LazyMapNoraNeko$_toString$lambda(this$LazyMapNoraNeko) {
    return function () {
      return CatCodeUtil_getInstance().toCatByMap(this$LazyMapNoraNeko.type, void 0, this$LazyMapNoraNeko);
    };
  }
  LazyMapNoraNeko.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'LazyMapNoraNeko',
    interfaces: [Map, NoraNeko]
  };
  function LazyMapNoraNeko_init(codeType, type, $this) {
    $this = $this || Object.create(LazyMapNoraNeko.prototype);
    LazyMapNoraNeko.call($this, codeType, new LazyMap(emptyMap()), type);
    return $this;
  }
  function LazyMapNoraNeko_init_0(codeType, type, params, $this) {
    $this = $this || Object.create(LazyMapNoraNeko.prototype);
    LazyMapNoraNeko.call($this, codeType, toLazyMap(params), type);
    return $this;
  }
  function LazyMapNoraNeko_init_1(codeType, type, params, $this) {
    $this = $this || Object.create(LazyMapNoraNeko.prototype);
    LazyMapNoraNeko.call($this, codeType, toLazyMap(mapOf(toPair_0(params).slice())), type);
    return $this;
  }
  function LazyMapNoraNeko_init_2(codeType, type, params, $this) {
    $this = $this || Object.create(LazyMapNoraNeko.prototype);
    var destination = ArrayList_init(params.length);
    var tmp$;
    for (tmp$ = 0; tmp$ !== params.length; ++tmp$) {
      var item = params[tmp$];
      var tmp$_0 = destination.add_11rb$;
      var split_0 = split(item, CAT_KV_SPLIT_ARRAY.slice(), false, 2);
      tmp$_0.call(destination, to(split_0.get_za3lpa$(0), split_0.get_za3lpa$(1)));
    }
    LazyMapNoraNeko.call($this, codeType, toLazyMap(mapOf(copyToArray(destination).slice())), type);
    return $this;
  }
  function LazyMutableMapNoraNeko(codeType, params, type) {
    MapNoraNeko.call(this, codeType, params, type);
    this.params_qk3zte$_0 = params;
  }
  Object.defineProperty(LazyMutableMapNoraNeko.prototype, 'params', {
    get: function () {
      return this.params_qk3zte$_0;
    }
  });
  LazyMutableMapNoraNeko.prototype.mutable = function () {
    return new LazyMutableMapNoraNeko(this.codeType, this.params, this.type);
  };
  LazyMutableMapNoraNeko.prototype.immutable = function () {
    return LazyMapNoraNeko_init_0(this.codeType, this.type, this);
  };
  LazyMutableMapNoraNeko.prototype.toString = function () {
    return CatCodeUtil_getInstance().toCatByMap(this.type, void 0, this);
  };
  LazyMutableMapNoraNeko.prototype.toMap = function () {
    return this.params.copy();
  };
  Object.defineProperty(LazyMutableMapNoraNeko.prototype, 'entries', {
    get: function () {
      return this.params.entries;
    }
  });
  Object.defineProperty(LazyMutableMapNoraNeko.prototype, 'keys', {
    get: function () {
      return this.params.keys;
    }
  });
  Object.defineProperty(LazyMutableMapNoraNeko.prototype, 'size', {
    get: function () {
      return this.params.size;
    }
  });
  Object.defineProperty(LazyMutableMapNoraNeko.prototype, 'values', {
    get: function () {
      return this.params.values;
    }
  });
  LazyMutableMapNoraNeko.prototype.clear = function () {
    return this.params.clear();
  };
  LazyMutableMapNoraNeko.prototype.containsKey_11rb$ = function (key) {
    return this.params.containsKey_11rb$(key);
  };
  LazyMutableMapNoraNeko.prototype.containsValue_11rc$ = function (value) {
    return this.params.containsValue_11rc$(value);
  };
  LazyMutableMapNoraNeko.prototype.get = function (key) {
    return this.params.get_11rb$(key);
  };
  LazyMutableMapNoraNeko.prototype.isEmpty = function () {
    return this.params.isEmpty();
  };
  LazyMutableMapNoraNeko.prototype.put_xwzc9p$ = function (key, value) {
    return this.params.put_xwzc9p$(key, value);
  };
  LazyMutableMapNoraNeko.prototype.putAll_a2k3zr$ = function (from) {
    return this.params.putAll_a2k3zr$(from);
  };
  LazyMutableMapNoraNeko.prototype.remove_11rb$ = function (key) {
    return this.params.remove_11rb$(key);
  };
  LazyMutableMapNoraNeko.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'LazyMutableMapNoraNeko',
    interfaces: [MutableMap, MutableNeko, MapNoraNeko]
  };
  function LazyMutableMapNoraNeko_init(codeType, type, $this) {
    $this = $this || Object.create(LazyMutableMapNoraNeko.prototype);
    LazyMutableMapNoraNeko.call($this, codeType, new MutableLazyMap(), type);
    return $this;
  }
  function LazyMutableMapNoraNeko_init_0(codeType, type, params, $this) {
    $this = $this || Object.create(LazyMutableMapNoraNeko.prototype);
    LazyMutableMapNoraNeko.call($this, codeType, toMutableLazyMap(params), type);
    return $this;
  }
  function LazyMutableMapNoraNeko_init_1(codeType, type, params, $this) {
    $this = $this || Object.create(LazyMutableMapNoraNeko.prototype);
    LazyMutableMapNoraNeko.call($this, codeType, toMutableLazyMap(mutableMapOf(toPair_0(params).slice())), type);
    return $this;
  }
  function LazyMutableMapNoraNeko_init_2(codeType, type, params, $this) {
    $this = $this || Object.create(LazyMutableMapNoraNeko.prototype);
    var destination = ArrayList_init(params.length);
    var tmp$;
    for (tmp$ = 0; tmp$ !== params.length; ++tmp$) {
      var item = params[tmp$];
      var tmp$_0 = destination.add_11rb$;
      var split_0 = split(item, CAT_KV_SPLIT_ARRAY.slice(), false, 2);
      tmp$_0.call(destination, to(split_0.get_za3lpa$(0), split_0.get_za3lpa$(1)));
    }
    LazyMutableMapNoraNeko.call($this, codeType, toMutableLazyMap(mutableMapOf(copyToArray(destination).slice())), type);
    return $this;
  }
  var MAP_SPLIT_REGEX_1;
  function MapNeko(params, type) {
    MapNeko$Of_getInstance();
    this.params_hrfqu$_0 = params;
    this.type_bdpyom$_0 = type;
    this._toString_f9j8xz$_d3idnb$_0 = lazy_0(MapNeko$_toString$lambda(this));
  }
  Object.defineProperty(MapNeko.prototype, 'params', {
    get: function () {
      return this.params_hrfqu$_0;
    }
  });
  Object.defineProperty(MapNeko.prototype, 'type', {
    get: function () {
      return this.type_bdpyom$_0;
    },
    set: function (type) {
      this.type_bdpyom$_0 = type;
    }
  });
  Object.defineProperty(MapNeko.prototype, 'length', {
    configurable: true,
    get: function () {
      return this.toString().length;
    }
  });
  MapNeko.prototype.getNoDecode = function (key) {
    return CatEncoder_getInstance().encodeParamsOrNull(this.get(key));
  };
  MapNeko.prototype.charCodeAt = function (index) {
    return this.toString().charCodeAt(index);
  };
  MapNeko.prototype.getOrDefault_xwzc9p$ = function (key, defaultValue) {
    var tmp$;
    return (tmp$ = this.params.get_11rb$(key)) != null ? tmp$ : defaultValue;
  };
  MapNeko.prototype.subSequence_vux9f0$ = function (startIndex, endIndex) {
    return this.toString().substring(startIndex, endIndex);
  };
  Object.defineProperty(MapNeko.prototype, '_toString_f9j8xz$_0', {
    configurable: true,
    get: function () {
      return this._toString_f9j8xz$_d3idnb$_0.value;
    }
  });
  MapNeko.prototype.toString = function () {
    return this._toString_f9j8xz$_0;
  };
  MapNeko.prototype.mutable = function () {
    return MutableMapNeko_init_0(this.type, toMutableMap(this));
  };
  MapNeko.prototype.immutable = function () {
    return new MapNeko(this.params, this.type);
  };
  MapNeko.prototype.toMap = function () {
    return this.params;
  };
  MapNeko.prototype.equals = function (other) {
    var tmp$;
    if (this === other)
      return true;
    Kotlin.isType(tmp$ = other, MapNeko) ? tmp$ : throwCCE();
    if (!equals(this.params, other.params))
      return false;
    if (!equals(this.type, other.type))
      return false;
    return true;
  };
  MapNeko.prototype.hashCode = function () {
    var result = hashCode(this.params);
    result = (31 * result | 0) + hashCode(this.type) | 0;
    return result;
  };
  function MapNeko$Of() {
    MapNeko$Of_instance = this;
    this.TEMP_SPLIT_REGEX_0 = Regex_init(' *, *');
  }
  MapNeko$Of.prototype.splitCode_0 = wrapFunction(function () {
    var throwCCE = Kotlin.throwCCE;
    var trim = Kotlin.kotlin.text.trim_gw00vp$;
    return function (code) {
      var tmp$;
      var tempText = trim(Kotlin.isCharSequence(tmp$ = code) ? tmp$ : throwCCE()).toString();
      if (!startsWith(tempText, CAT_HEAD) || !endsWith(tempText, CAT_END)) {
        throw IllegalArgumentException_init("not starts with '[CAT:' or not ends with ']'");
      }var $receiver = tempText;
      var endIndex = get_lastIndex(tempText);
      tempText = $receiver.substring(4, endIndex);
      var $receiver_0 = tempText;
      var split = this.TEMP_SPLIT_REGEX_0.split_905azu$($receiver_0, 0);
      var type = split.get_za3lpa$(0);
      return cTo(type, split);
    };
  });
  MapNeko$Of.prototype.byCode_ivxn3r$ = function (code, decode) {
    if (decode === void 0)
      decode = true;
    var tmp$;
    var tmp$_0;
    var tempText = trim(Kotlin.isCharSequence(tmp$_0 = code) ? tmp$_0 : throwCCE()).toString();
    if (!startsWith(tempText, CAT_HEAD) || !endsWith(tempText, CAT_END)) {
      throw IllegalArgumentException_init("not starts with '[CAT:' or not ends with ']'");
    }var $receiver = tempText;
    var endIndex = get_lastIndex(tempText);
    tempText = $receiver.substring(4, endIndex);
    var $receiver_0 = tempText;
    var split = this.TEMP_SPLIT_REGEX_0.split_905azu$($receiver_0, 0);
    var type = split.get_za3lpa$(0);
    var tmp$_1 = cTo(type, split);
    var type_0 = tmp$_1.component1()
    , split_0 = tmp$_1.component2();
    if (split_0.size > 1) {
      if (decode) {
        var $receiver_1 = split_0.subList_vux9f0$(1, split_0.size);
        var destination = ArrayList_init(collectionSizeOrDefault($receiver_1, 10));
        var tmp$_2;
        tmp$_2 = $receiver_1.iterator();
        while (tmp$_2.hasNext()) {
          var item = tmp$_2.next();
          var tmp$_3 = destination.add_11rb$;
          var sp = Regex_init('=').split_905azu$(item, 2);
          tmp$_3.call(destination, to(sp.get_za3lpa$(0), deCatParam(sp.get_za3lpa$(1))));
        }
        var map = toMap_0(destination);
        tmp$ = new MapNeko(map, type_0);
      } else {
        tmp$ = MapNeko_init_2(type_0, copyToArray(split_0.subList_vux9f0$(1, split_0.size)).slice());
      }
    } else {
      tmp$ = MapNeko_init(type_0);
    }
    return tmp$;
  };
  MapNeko$Of.prototype.byMap_8foi92$ = function (type, params) {
    var destination = ArrayList_init_0();
    var tmp$;
    tmp$ = params.entries.iterator();
    while (tmp$.hasNext()) {
      var element = tmp$.next();
      var tmp$_0;
      if ((tmp$_0 = element.value == null ? null : to(element.key, toString(element.value))) != null) {
        destination.add_11rb$(tmp$_0);
      }}
    return MapNeko_init_0(type, toMap_0(destination));
  };
  MapNeko$Of.prototype.byKV_ycbbc1$ = function (type, params) {
    var destination = ArrayList_init_0();
    var tmp$;
    for (tmp$ = 0; tmp$ !== params.length; ++tmp$) {
      var element = params[tmp$];
      var tmp$_0;
      if ((tmp$_0 = element.value == null ? null : to(element.key, element.value.toString())) != null) {
        destination.add_11rb$(tmp$_0);
      }}
    return MapNeko_init_0(type, toMap_0(destination));
  };
  MapNeko$Of.prototype.byParamString_60y5e1$ = function (type, params) {
    return MapNeko_init_2(type, params.slice());
  };
  MapNeko$Of.prototype.mutableByCode_ivxn3r$ = function (code, decode) {
    if (decode === void 0)
      decode = true;
    var tmp$;
    var tmp$_0;
    var tempText = trim(Kotlin.isCharSequence(tmp$_0 = code) ? tmp$_0 : throwCCE()).toString();
    if (!startsWith(tempText, CAT_HEAD) || !endsWith(tempText, CAT_END)) {
      throw IllegalArgumentException_init("not starts with '[CAT:' or not ends with ']'");
    }var $receiver = tempText;
    var endIndex = get_lastIndex(tempText);
    tempText = $receiver.substring(4, endIndex);
    var $receiver_0 = tempText;
    var split = this.TEMP_SPLIT_REGEX_0.split_905azu$($receiver_0, 0);
    var type = split.get_za3lpa$(0);
    var tmp$_1 = cTo(type, split);
    var type_0 = tmp$_1.component1()
    , split_0 = tmp$_1.component2();
    if (split_0.size > 1) {
      if (decode) {
        var $receiver_1 = split_0.subList_vux9f0$(1, split_0.size);
        var destination = ArrayList_init(collectionSizeOrDefault($receiver_1, 10));
        var tmp$_2;
        tmp$_2 = $receiver_1.iterator();
        while (tmp$_2.hasNext()) {
          var item = tmp$_2.next();
          var tmp$_3 = destination.add_11rb$;
          var sp = Regex_init('=').split_905azu$(item, 2);
          tmp$_3.call(destination, to(sp.get_za3lpa$(0), CatDecoder_getInstance().decodeParams(sp.get_za3lpa$(1))));
        }
        var map = toMutableMap(toMap_0(destination));
        tmp$ = MutableMapNeko_init_0(type_0, map);
      } else {
        tmp$ = MutableMapNeko_init_2(type_0, copyToArray(split_0.subList_vux9f0$(1, split_0.size)).slice());
      }
    } else {
      tmp$ = MutableMapNeko_init(type_0);
    }
    return tmp$;
  };
  MapNeko$Of.prototype.mutableByMap_mvjluj$ = function (type, params) {
    return MutableMapNeko_init_0(type, params);
  };
  MapNeko$Of.prototype.mutableByKV_cbjnkd$ = function (type, params) {
    return MutableMapNeko_init_1(type, params.slice());
  };
  MapNeko$Of.prototype.mutableByParamString_60y5e1$ = function (type, params) {
    return MutableMapNeko_init_2(type, params.slice());
  };
  MapNeko$Of.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'Of',
    interfaces: []
  };
  var MapNeko$Of_instance = null;
  function MapNeko$Of_getInstance() {
    if (MapNeko$Of_instance === null) {
      new MapNeko$Of();
    }return MapNeko$Of_instance;
  }
  Object.defineProperty(MapNeko.prototype, 'entries', {
    get: function () {
      return this.params.entries;
    }
  });
  Object.defineProperty(MapNeko.prototype, 'keys', {
    get: function () {
      return this.params.keys;
    }
  });
  Object.defineProperty(MapNeko.prototype, 'size', {
    get: function () {
      return this.params.size;
    }
  });
  Object.defineProperty(MapNeko.prototype, 'values', {
    get: function () {
      return this.params.values;
    }
  });
  MapNeko.prototype.containsKey_11rb$ = function (key) {
    return this.params.containsKey_11rb$(key);
  };
  MapNeko.prototype.containsValue_11rc$ = function (value) {
    return this.params.containsValue_11rc$(value);
  };
  MapNeko.prototype.get = function (key) {
    return this.params.get_11rb$(key);
  };
  MapNeko.prototype.isEmpty = function () {
    return this.params.isEmpty();
  };
  function MapNeko$_toString$lambda(this$MapNeko) {
    return function () {
      return CatCodeUtil_getInstance().toCatByMap(this$MapNeko.type, void 0, this$MapNeko);
    };
  }
  MapNeko.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'MapNeko',
    interfaces: [Map, Neko]
  };
  function MapNeko_init(type, $this) {
    $this = $this || Object.create(MapNeko.prototype);
    MapNeko.call($this, emptyMap(), type);
    return $this;
  }
  function MapNeko_init_0(type, params, $this) {
    $this = $this || Object.create(MapNeko.prototype);
    MapNeko.call($this, toMap(params), type);
    return $this;
  }
  function MapNeko_init_1(type, params, $this) {
    $this = $this || Object.create(MapNeko.prototype);
    MapNeko.call($this, mapOf(toPair_0(params).slice()), type);
    return $this;
  }
  function MapNeko_init_2(type, params, $this) {
    $this = $this || Object.create(MapNeko.prototype);
    var destination = ArrayList_init(params.length);
    var tmp$;
    for (tmp$ = 0; tmp$ !== params.length; ++tmp$) {
      var item = params[tmp$];
      var tmp$_0 = destination.add_11rb$;
      var split_0 = split(item, CAT_KV_SPLIT_ARRAY.slice(), false, 2);
      tmp$_0.call(destination, to(split_0.get_za3lpa$(0), split_0.get_za3lpa$(1)));
    }
    MapNeko.call($this, mapOf(copyToArray(destination).slice()), type);
    return $this;
  }
  function MutableMapNeko(params, type) {
    MapNeko.call(this, params, type);
    this.params_85o8za$_0 = params;
  }
  Object.defineProperty(MutableMapNeko.prototype, 'params', {
    get: function () {
      return this.params_85o8za$_0;
    }
  });
  MutableMapNeko.prototype.mutable = function () {
    return new MutableMapNeko(this.params, this.type);
  };
  MutableMapNeko.prototype.immutable = function () {
    return MapNeko_init_0(this.type, this);
  };
  MutableMapNeko.prototype.toString = function () {
    return CatCodeUtil_getInstance().toCatByMap(this.type, void 0, this);
  };
  MutableMapNeko.prototype.toMap = function () {
    return this.params;
  };
  Object.defineProperty(MutableMapNeko.prototype, 'entries', {
    get: function () {
      return this.params.entries;
    }
  });
  Object.defineProperty(MutableMapNeko.prototype, 'keys', {
    get: function () {
      return this.params.keys;
    }
  });
  Object.defineProperty(MutableMapNeko.prototype, 'size', {
    get: function () {
      return this.params.size;
    }
  });
  Object.defineProperty(MutableMapNeko.prototype, 'values', {
    get: function () {
      return this.params.values;
    }
  });
  MutableMapNeko.prototype.clear = function () {
    return this.params.clear();
  };
  MutableMapNeko.prototype.containsKey_11rb$ = function (key) {
    return this.params.containsKey_11rb$(key);
  };
  MutableMapNeko.prototype.containsValue_11rc$ = function (value) {
    return this.params.containsValue_11rc$(value);
  };
  MutableMapNeko.prototype.get = function (key) {
    return this.params.get_11rb$(key);
  };
  MutableMapNeko.prototype.isEmpty = function () {
    return this.params.isEmpty();
  };
  MutableMapNeko.prototype.put_xwzc9p$ = function (key, value) {
    return this.params.put_xwzc9p$(key, value);
  };
  MutableMapNeko.prototype.putAll_a2k3zr$ = function (from) {
    return this.params.putAll_a2k3zr$(from);
  };
  MutableMapNeko.prototype.remove_11rb$ = function (key) {
    return this.params.remove_11rb$(key);
  };
  MutableMapNeko.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'MutableMapNeko',
    interfaces: [MutableMap, MutableNeko, MapNeko]
  };
  function MutableMapNeko_init(type, $this) {
    $this = $this || Object.create(MutableMapNeko.prototype);
    MutableMapNeko.call($this, LinkedHashMap_init(), type);
    return $this;
  }
  function MutableMapNeko_init_0(type, params, $this) {
    $this = $this || Object.create(MutableMapNeko.prototype);
    MutableMapNeko.call($this, toMutableMap(params), type);
    return $this;
  }
  function MutableMapNeko_init_1(type, params, $this) {
    $this = $this || Object.create(MutableMapNeko.prototype);
    MutableMapNeko.call($this, mutableMapOf(toPair_0(params).slice()), type);
    return $this;
  }
  function MutableMapNeko_init_2(type, params, $this) {
    $this = $this || Object.create(MutableMapNeko.prototype);
    var destination = ArrayList_init(params.length);
    var tmp$;
    for (tmp$ = 0; tmp$ !== params.length; ++tmp$) {
      var item = params[tmp$];
      var tmp$_0 = destination.add_11rb$;
      var split_0 = split(item, CAT_KV_SPLIT_ARRAY.slice(), false, 2);
      tmp$_0.call(destination, to(split_0.get_za3lpa$(0), split_0.get_za3lpa$(1)));
    }
    MutableMapNeko.call($this, mutableMapOf(copyToArray(destination).slice()), type);
    return $this;
  }
  var MAP_SPLIT_REGEX_2;
  function MapNoraNeko(codeType, params, type) {
    MapNoraNeko$Of_getInstance();
    this.codeType_jhzxvd$_0 = codeType;
    this.params_7oqwbq$_0 = params;
    this.type_1uuhui$_0 = type;
    this._toString_wbbbkn$_1mxuqa$_0 = lazy_0(MapNoraNeko$_toString$lambda(this));
  }
  Object.defineProperty(MapNoraNeko.prototype, 'codeType', {
    get: function () {
      return this.codeType_jhzxvd$_0;
    }
  });
  Object.defineProperty(MapNoraNeko.prototype, 'params', {
    get: function () {
      return this.params_7oqwbq$_0;
    }
  });
  Object.defineProperty(MapNoraNeko.prototype, 'type', {
    get: function () {
      return this.type_1uuhui$_0;
    },
    set: function (type) {
      this.type_1uuhui$_0 = type;
    }
  });
  Object.defineProperty(MapNoraNeko.prototype, 'length', {
    configurable: true,
    get: function () {
      return this.toString().length;
    }
  });
  MapNoraNeko.prototype.getNoDecode = function (key) {
    return CatEncoder_getInstance().encodeParamsOrNull(this.get(key));
  };
  MapNoraNeko.prototype.charCodeAt = function (index) {
    return this.toString().charCodeAt(index);
  };
  MapNoraNeko.prototype.getOrDefault_xwzc9p$ = function (key, defaultValue) {
    var tmp$;
    return (tmp$ = this.params.get_11rb$(key)) != null ? tmp$ : defaultValue;
  };
  MapNoraNeko.prototype.subSequence_vux9f0$ = function (startIndex, endIndex) {
    return this.toString().substring(startIndex, endIndex);
  };
  Object.defineProperty(MapNoraNeko.prototype, '_toString_wbbbkn$_0', {
    configurable: true,
    get: function () {
      return this._toString_wbbbkn$_1mxuqa$_0.value;
    }
  });
  MapNoraNeko.prototype.toString = function () {
    return this._toString_wbbbkn$_0;
  };
  MapNoraNeko.prototype.mutable = function () {
    return MutableMapNoraNeko_init_0(this.codeType, this.type, toMutableMap(this));
  };
  MapNoraNeko.prototype.immutable = function () {
    return new MapNoraNeko(this.codeType, this.params, this.type);
  };
  MapNoraNeko.prototype.toMap = function () {
    return this.params;
  };
  MapNoraNeko.prototype.equals = function (other) {
    var tmp$;
    if (this === other)
      return true;
    Kotlin.isType(tmp$ = other, MapNoraNeko) ? tmp$ : throwCCE();
    if (!equals(this.params, other.params))
      return false;
    if (!equals(this.type, other.type))
      return false;
    return true;
  };
  MapNoraNeko.prototype.hashCode = function () {
    var result = hashCode(this.params);
    result = (31 * result | 0) + hashCode(this.type) | 0;
    return result;
  };
  function MapNoraNeko$Of() {
    MapNoraNeko$Of_instance = this;
    this.TEMP_SPLIT_REGEX_0 = Regex_init(' *, *');
  }
  MapNoraNeko$Of.prototype.splitCode_0 = wrapFunction(function () {
    var throwCCE = Kotlin.throwCCE;
    var trim = Kotlin.kotlin.text.trim_gw00vp$;
    return function (code) {
      var tmp$;
      var tempText = trim(Kotlin.isCharSequence(tmp$ = code) ? tmp$ : throwCCE()).toString();
      if (!startsWith(tempText, CAT_HEAD) || !endsWith(tempText, CAT_END)) {
        throw IllegalArgumentException_init("not starts with '[CAT:' or not ends with ']'");
      }var $receiver = tempText;
      var endIndex = get_lastIndex(tempText);
      tempText = $receiver.substring(4, endIndex);
      var $receiver_0 = tempText;
      var split = this.TEMP_SPLIT_REGEX_0.split_905azu$($receiver_0, 0);
      var type = split.get_za3lpa$(0);
      return cTo(type, split);
    };
  });
  MapNoraNeko$Of.prototype.byCode_qz9155$ = function (codeType, code, decode) {
    if (decode === void 0)
      decode = true;
    var tmp$;
    var tmp$_0;
    var tempText = trim(Kotlin.isCharSequence(tmp$_0 = code) ? tmp$_0 : throwCCE()).toString();
    if (!startsWith(tempText, CAT_HEAD) || !endsWith(tempText, CAT_END)) {
      throw IllegalArgumentException_init("not starts with '[CAT:' or not ends with ']'");
    }var $receiver = tempText;
    var endIndex = get_lastIndex(tempText);
    tempText = $receiver.substring(4, endIndex);
    var $receiver_0 = tempText;
    var split = this.TEMP_SPLIT_REGEX_0.split_905azu$($receiver_0, 0);
    var type = split.get_za3lpa$(0);
    var tmp$_1 = cTo(type, split);
    var type_0 = tmp$_1.component1()
    , split_0 = tmp$_1.component2();
    if (split_0.size > 1) {
      if (decode) {
        var $receiver_1 = split_0.subList_vux9f0$(1, split_0.size);
        var destination = ArrayList_init(collectionSizeOrDefault($receiver_1, 10));
        var tmp$_2;
        tmp$_2 = $receiver_1.iterator();
        while (tmp$_2.hasNext()) {
          var item = tmp$_2.next();
          var tmp$_3 = destination.add_11rb$;
          var sp = Regex_init('=').split_905azu$(item, 2);
          tmp$_3.call(destination, to(sp.get_za3lpa$(0), CatDecoder_getInstance().decodeParams(sp.get_za3lpa$(1))));
        }
        var map = toMap_0(destination);
        tmp$ = new MapNoraNeko(codeType, map, type_0);
      } else {
        tmp$ = MapNoraNeko_init_2(codeType, type_0, copyToArray(split_0.subList_vux9f0$(1, split_0.size)).slice());
      }
    } else {
      tmp$ = MapNoraNeko_init(codeType, type_0);
    }
    return tmp$;
  };
  MapNoraNeko$Of.prototype.byMap_hq2gfh$ = function (codeType, type, params) {
    return MapNoraNeko_init_0(codeType, type, params);
  };
  MapNoraNeko$Of.prototype.byKV_qz99sv$ = function (codeType, type, params) {
    return MapNoraNeko_init_1(codeType, type, params.slice());
  };
  MapNoraNeko$Of.prototype.byParamString_8m11s9$ = function (codeType, type, params) {
    return MapNoraNeko_init_2(codeType, type, params.slice());
  };
  MapNoraNeko$Of.prototype.mutableByCode_qz9155$ = function (codeType, code, decode) {
    if (decode === void 0)
      decode = true;
    var tmp$;
    var tmp$_0;
    var tempText = trim(Kotlin.isCharSequence(tmp$_0 = code) ? tmp$_0 : throwCCE()).toString();
    if (!startsWith(tempText, CAT_HEAD) || !endsWith(tempText, CAT_END)) {
      throw IllegalArgumentException_init("not starts with '[CAT:' or not ends with ']'");
    }var $receiver = tempText;
    var endIndex = get_lastIndex(tempText);
    tempText = $receiver.substring(4, endIndex);
    var $receiver_0 = tempText;
    var split = this.TEMP_SPLIT_REGEX_0.split_905azu$($receiver_0, 0);
    var type = split.get_za3lpa$(0);
    var tmp$_1 = cTo(type, split);
    var type_0 = tmp$_1.component1()
    , split_0 = tmp$_1.component2();
    if (split_0.size > 1) {
      if (decode) {
        var $receiver_1 = split_0.subList_vux9f0$(1, split_0.size);
        var destination = ArrayList_init(collectionSizeOrDefault($receiver_1, 10));
        var tmp$_2;
        tmp$_2 = $receiver_1.iterator();
        while (tmp$_2.hasNext()) {
          var item = tmp$_2.next();
          var tmp$_3 = destination.add_11rb$;
          var sp = Regex_init('=').split_905azu$(item, 2);
          tmp$_3.call(destination, to(sp.get_za3lpa$(0), CatDecoder_getInstance().decodeParams(sp.get_za3lpa$(1))));
        }
        var map = toMutableMap(toMap_0(destination));
        tmp$ = MutableMapNoraNeko_init_0(codeType, type_0, map);
      } else {
        tmp$ = MutableMapNoraNeko_init_2(codeType, type_0, copyToArray(split_0.subList_vux9f0$(1, split_0.size)).slice());
      }
    } else {
      tmp$ = MutableMapNoraNeko_init(codeType, type_0);
    }
    return tmp$;
  };
  MapNoraNeko$Of.prototype.mutableByMap_hq2gfh$ = function (codeType, type, params) {
    return MutableMapNoraNeko_init_0(codeType, type, params);
  };
  MapNoraNeko$Of.prototype.mutableByKV_qz99sv$ = function (codeType, type, params) {
    return MutableMapNoraNeko_init_1(codeType, type, params.slice());
  };
  MapNoraNeko$Of.prototype.mutableByParamString_8m11s9$ = function (codeType, type, params) {
    return MutableMapNoraNeko_init_2(codeType, type, params.slice());
  };
  MapNoraNeko$Of.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'Of',
    interfaces: []
  };
  var MapNoraNeko$Of_instance = null;
  function MapNoraNeko$Of_getInstance() {
    if (MapNoraNeko$Of_instance === null) {
      new MapNoraNeko$Of();
    }return MapNoraNeko$Of_instance;
  }
  Object.defineProperty(MapNoraNeko.prototype, 'entries', {
    get: function () {
      return this.params.entries;
    }
  });
  Object.defineProperty(MapNoraNeko.prototype, 'keys', {
    get: function () {
      return this.params.keys;
    }
  });
  Object.defineProperty(MapNoraNeko.prototype, 'size', {
    get: function () {
      return this.params.size;
    }
  });
  Object.defineProperty(MapNoraNeko.prototype, 'values', {
    get: function () {
      return this.params.values;
    }
  });
  MapNoraNeko.prototype.containsKey_11rb$ = function (key) {
    return this.params.containsKey_11rb$(key);
  };
  MapNoraNeko.prototype.containsValue_11rc$ = function (value) {
    return this.params.containsValue_11rc$(value);
  };
  MapNoraNeko.prototype.get = function (key) {
    return this.params.get_11rb$(key);
  };
  MapNoraNeko.prototype.isEmpty = function () {
    return this.params.isEmpty();
  };
  function MapNoraNeko$_toString$lambda(this$MapNoraNeko) {
    return function () {
      return CatCodeUtil_getInstance().toCatByMap(this$MapNoraNeko.type, void 0, this$MapNoraNeko);
    };
  }
  MapNoraNeko.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'MapNoraNeko',
    interfaces: [Map, NoraNeko]
  };
  function MapNoraNeko_init(codeType, type, $this) {
    $this = $this || Object.create(MapNoraNeko.prototype);
    MapNoraNeko.call($this, codeType, emptyMap(), type);
    return $this;
  }
  function MapNoraNeko_init_0(codeType, type, params, $this) {
    $this = $this || Object.create(MapNoraNeko.prototype);
    MapNoraNeko.call($this, codeType, toMap(params), type);
    return $this;
  }
  function MapNoraNeko_init_1(codeType, type, params, $this) {
    $this = $this || Object.create(MapNoraNeko.prototype);
    MapNoraNeko.call($this, codeType, mapOf(toPair_0(params).slice()), type);
    return $this;
  }
  function MapNoraNeko_init_2(codeType, type, params, $this) {
    $this = $this || Object.create(MapNoraNeko.prototype);
    var destination = ArrayList_init(params.length);
    var tmp$;
    for (tmp$ = 0; tmp$ !== params.length; ++tmp$) {
      var item = params[tmp$];
      var tmp$_0 = destination.add_11rb$;
      var split_0 = split(item, CAT_KV_SPLIT_ARRAY.slice(), false, 2);
      tmp$_0.call(destination, to(split_0.get_za3lpa$(0), split_0.get_za3lpa$(1)));
    }
    MapNoraNeko.call($this, codeType, mapOf(copyToArray(destination).slice()), type);
    return $this;
  }
  function MutableMapNoraNeko(codeType, params, type) {
    MapNoraNeko.call(this, codeType, params, type);
    this.params_o47tui$_0 = params;
  }
  Object.defineProperty(MutableMapNoraNeko.prototype, 'params', {
    get: function () {
      return this.params_o47tui$_0;
    }
  });
  MutableMapNoraNeko.prototype.mutable = function () {
    return new MutableMapNoraNeko(this.codeType, this.params, this.type);
  };
  MutableMapNoraNeko.prototype.immutable = function () {
    return MapNoraNeko_init_0(this.codeType, this.type, this);
  };
  MutableMapNoraNeko.prototype.toString = function () {
    return CatCodeUtil_getInstance().toCatByMap(this.type, void 0, this);
  };
  MutableMapNoraNeko.prototype.toMap = function () {
    return this.params;
  };
  Object.defineProperty(MutableMapNoraNeko.prototype, 'entries', {
    get: function () {
      return this.params.entries;
    }
  });
  Object.defineProperty(MutableMapNoraNeko.prototype, 'keys', {
    get: function () {
      return this.params.keys;
    }
  });
  Object.defineProperty(MutableMapNoraNeko.prototype, 'size', {
    get: function () {
      return this.params.size;
    }
  });
  Object.defineProperty(MutableMapNoraNeko.prototype, 'values', {
    get: function () {
      return this.params.values;
    }
  });
  MutableMapNoraNeko.prototype.clear = function () {
    return this.params.clear();
  };
  MutableMapNoraNeko.prototype.containsKey_11rb$ = function (key) {
    return this.params.containsKey_11rb$(key);
  };
  MutableMapNoraNeko.prototype.containsValue_11rc$ = function (value) {
    return this.params.containsValue_11rc$(value);
  };
  MutableMapNoraNeko.prototype.get = function (key) {
    return this.params.get_11rb$(key);
  };
  MutableMapNoraNeko.prototype.isEmpty = function () {
    return this.params.isEmpty();
  };
  MutableMapNoraNeko.prototype.put_xwzc9p$ = function (key, value) {
    return this.params.put_xwzc9p$(key, value);
  };
  MutableMapNoraNeko.prototype.putAll_a2k3zr$ = function (from) {
    return this.params.putAll_a2k3zr$(from);
  };
  MutableMapNoraNeko.prototype.remove_11rb$ = function (key) {
    return this.params.remove_11rb$(key);
  };
  MutableMapNoraNeko.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'MutableMapNoraNeko',
    interfaces: [MutableMap, MutableNeko, MapNoraNeko]
  };
  function MutableMapNoraNeko_init(codeType, type, $this) {
    $this = $this || Object.create(MutableMapNoraNeko.prototype);
    MutableMapNoraNeko.call($this, codeType, LinkedHashMap_init(), type);
    return $this;
  }
  function MutableMapNoraNeko_init_0(codeType, type, params, $this) {
    $this = $this || Object.create(MutableMapNoraNeko.prototype);
    MutableMapNoraNeko.call($this, codeType, toMutableMap(params), type);
    return $this;
  }
  function MutableMapNoraNeko_init_1(codeType, type, params, $this) {
    $this = $this || Object.create(MutableMapNoraNeko.prototype);
    MutableMapNoraNeko.call($this, codeType, mutableMapOf(toPair_0(params).slice()), type);
    return $this;
  }
  function MutableMapNoraNeko_init_2(codeType, type, params, $this) {
    $this = $this || Object.create(MutableMapNoraNeko.prototype);
    var destination = ArrayList_init(params.length);
    var tmp$;
    for (tmp$ = 0; tmp$ !== params.length; ++tmp$) {
      var item = params[tmp$];
      var tmp$_0 = destination.add_11rb$;
      var split_0 = split(item, CAT_KV_SPLIT_ARRAY.slice(), false, 2);
      tmp$_0.call(destination, to(split_0.get_za3lpa$(0), split_0.get_za3lpa$(1)));
    }
    MutableMapNoraNeko.call($this, codeType, mutableMapOf(copyToArray(destination).slice()), type);
    return $this;
  }
  function NoraNyanko(code) {
    NoraNyanko$Of_getInstance();
    this.code_0 = code;
    this._type_0 = null;
    this._size_0 = 0;
    this.empty_0 = false;
    this.codeType_d5m8xo$_0 = null;
    this.catParentHead_0 = null;
    this.catHead_0 = null;
    this.startIndex_0 = 0;
    this.endIndex_0 = 0;
    if (!nekoMatchRegex.matches_6bul2c$(this.code_0)) {
      throw IllegalArgumentException_init('text ' + '"' + this.code_0 + '"' + ' is not a cat code text.');
    }var codeTypeEnd = indexOf(this.code_0, ':');
    this.codeType_d5m8xo$_0 = this.code_0.substring(1, codeTypeEnd);
    this.catParentHead_0 = catHead(this.codeType);
    this.startIndex_0 = this.catParentHead_0.length;
    this.endIndex_0 = get_lastIndex(this.code_0);
    var it = indexOf(this.code_0, CAT_PS, this.startIndex_0);
    var firstSplitIndex = it < 0 ? this.endIndex_0 : it;
    var $receiver = this.code_0;
    var startIndex = this.startIndex_0;
    this._type_0 = $receiver.substring(startIndex, firstSplitIndex);
    this.catHead_0 = this.catParentHead_0 + this._type_0;
    this.empty_0 = contains(this.code_0, CAT_PS);
    var kvChar = first(CAT_KV);
    var tmp$;
    var count = 0;
    tmp$ = iterator(this.code_0);
    while (tmp$.hasNext()) {
      var element = unboxChar(tmp$.next());
      if (unboxChar(toBoxedChar(element)) === kvChar)
        count = count + 1 | 0;
    }
    this._size_0 = count;
    this.codeText_0 = this.code_0;
    this.length_dr2nut$_0 = this.code_0.length;
    this.size_r03qk6$_0 = this._size_0;
    this.type_qz9xlb$_0 = this._type_0;
    this.paramBuffer_0 = null;
  }
  Object.defineProperty(NoraNyanko.prototype, 'codeType', {
    configurable: true,
    get: function () {
      return this.codeType_d5m8xo$_0;
    }
  });
  NoraNyanko.prototype.toString = function () {
    return this.code_0;
  };
  Object.defineProperty(NoraNyanko.prototype, 'length', {
    configurable: true,
    get: function () {
      return this.length_dr2nut$_0;
    }
  });
  Object.defineProperty(NoraNyanko.prototype, 'size', {
    configurable: true,
    get: function () {
      return this.size_r03qk6$_0;
    }
  });
  Object.defineProperty(NoraNyanko.prototype, 'type', {
    configurable: true,
    get: function () {
      return this.type_qz9xlb$_0;
    }
  });
  NoraNyanko.prototype.getNoDecode = function (key) {
    return this.getParam_0(key);
  };
  NoraNyanko.prototype.mutable = function () {
    return MapNeko$Of_getInstance().mutableByCode_ivxn3r$(this.toString());
  };
  NoraNyanko.prototype.immutable = function () {
    return new NoraNyanko(this.code_0);
  };
  NoraNyanko.prototype.toMap = function () {
    return mapDelegation(this);
  };
  NoraNyanko.prototype.containsKey_11rb$ = function (key) {
    if (this.empty_0)
      return false;
    return contains(this.codeText_0, CAT_PS + key + CAT_KV);
  };
  NoraNyanko.prototype.containsValue_11rc$ = function (value) {
    if (this.empty_0)
      return false;
    var encodeValue = CatEncoder_getInstance().encodeParams(value);
    return contains(this.codeText_0, CAT_KV + encodeValue + CAT_PS) || contains(this.codeText_0, CAT_KV + encodeValue + CAT_END);
  };
  NoraNyanko.prototype.get = function (key) {
    return CatDecoder_getInstance().decodeParamsOrNull(this.getParam_0(key));
  };
  NoraNyanko.prototype.charCodeAt = function (index) {
    return this.codeText_0.charCodeAt(index);
  };
  NoraNyanko.prototype.isEmpty = function () {
    return this.empty_0;
  };
  NoraNyanko.prototype.subSequence_vux9f0$ = function (startIndex, endIndex) {
    return this.codeText_0.substring(startIndex, endIndex);
  };
  NoraNyanko.prototype.getParam_0 = function (key) {
    var tmp$, tmp$_0;
    var bufferFirst = (tmp$ = this.paramBuffer_0) != null ? tmp$.key : null;
    var bufferSecond = (tmp$_0 = this.paramBuffer_0) != null ? tmp$_0.value : null;
    if (bufferFirst != null && equals(bufferFirst, key)) {
      return bufferSecond;
    }var paramFind = CAT_PS + key + CAT_KV;
    var phi = indexOf(this.codeText_0, paramFind, this.startIndex_0);
    if (phi < 0) {
      return null;
    }var startIndex = phi + paramFind.length | 0;
    var pei = indexOf(this.codeText_0, CAT_PS, startIndex);
    if (pei < 0 || pei > this.endIndex_0) {
      pei = this.endIndex_0;
    }if (startIndex > get_lastIndex(this.codeText_0) || startIndex > pei) {
      return null;
    }var $receiver = this.codeText_0;
    var endIndex = pei;
    var subParam = $receiver.substring(startIndex, endIndex);
    this.paramBuffer_0 = cTo(key, subParam);
    return subParam;
  };
  Object.defineProperty(NoraNyanko.prototype, 'entries', {
    configurable: true,
    get: function () {
      return new NoraNyanko$FastNoraNyankoEntrySet(this);
    }
  });
  function NoraNyanko$FastNoraNyankoEntrySet($outer) {
    this.$outer = $outer;
  }
  Object.defineProperty(NoraNyanko$FastNoraNyankoEntrySet.prototype, 'size', {
    configurable: true,
    get: function () {
      return this.$outer._size_0;
    }
  });
  NoraNyanko$FastNoraNyankoEntrySet.prototype.contains_11rb$ = function (element) {
    if (this.$outer.empty_0)
      return false;
    var kv = element.key + CAT_KV + CatEncoder_getInstance().encodeParams(element.value);
    return contains(this.$outer.code_0, kv);
  };
  NoraNyanko$FastNoraNyankoEntrySet.prototype.containsAll_brywnq$ = function (elements) {
    var tmp$;
    if (this.$outer.empty_0)
      return false;
    tmp$ = elements.iterator();
    while (tmp$.hasNext()) {
      var element = tmp$.next();
      if (!this.contains_11rb$(element))
        return false;
    }
    return true;
  };
  NoraNyanko$FastNoraNyankoEntrySet.prototype.isEmpty = function () {
    return this.$outer.empty_0;
  };
  NoraNyanko$FastNoraNyankoEntrySet.prototype.iterator = function () {
    return new CatParamEntryIterator(this.$outer.code_0);
  };
  NoraNyanko$FastNoraNyankoEntrySet.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'FastNoraNyankoEntrySet',
    interfaces: [Set]
  };
  Object.defineProperty(NoraNyanko.prototype, 'keys', {
    configurable: true,
    get: function () {
      return new NoraNyanko$FastNoraNyankoKeySet(this);
    }
  });
  function NoraNyanko$FastNoraNyankoKeySet($outer) {
    this.$outer = $outer;
  }
  Object.defineProperty(NoraNyanko$FastNoraNyankoKeySet.prototype, 'size', {
    configurable: true,
    get: function () {
      return this.$outer._size_0;
    }
  });
  NoraNyanko$FastNoraNyankoKeySet.prototype.contains_11rb$ = function (element) {
    if (this.$outer.empty_0)
      return false;
    return contains(this.$outer.code_0, element + CAT_KV);
  };
  NoraNyanko$FastNoraNyankoKeySet.prototype.containsAll_brywnq$ = function (elements) {
    var tmp$;
    if (this.$outer.empty_0)
      return false;
    tmp$ = elements.iterator();
    while (tmp$.hasNext()) {
      var element = tmp$.next();
      if (!this.contains_11rb$(element))
        return false;
    }
    return true;
  };
  NoraNyanko$FastNoraNyankoKeySet.prototype.isEmpty = function () {
    return this.$outer.empty_0;
  };
  NoraNyanko$FastNoraNyankoKeySet.prototype.iterator = function () {
    return new CatParamKeyIterator(this.$outer.code_0);
  };
  NoraNyanko$FastNoraNyankoKeySet.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'FastNoraNyankoKeySet',
    interfaces: [Set]
  };
  Object.defineProperty(NoraNyanko.prototype, 'values', {
    configurable: true,
    get: function () {
      return new NoraNyanko$FastNoraNyankoValues(this);
    }
  });
  function NoraNyanko$FastNoraNyankoValues($outer) {
    this.$outer = $outer;
  }
  Object.defineProperty(NoraNyanko$FastNoraNyankoValues.prototype, 'size', {
    configurable: true,
    get: function () {
      return this.$outer._size_0;
    }
  });
  NoraNyanko$FastNoraNyankoValues.prototype.contains_11rb$ = function (element) {
    if (this.$outer.empty_0)
      return false;
    return contains(this.$outer.code_0, CAT_KV + CatEncoder_getInstance().encodeParams(element));
  };
  NoraNyanko$FastNoraNyankoValues.prototype.containsAll_brywnq$ = function (elements) {
    var tmp$;
    if (this.$outer.empty_0)
      return false;
    tmp$ = elements.iterator();
    while (tmp$.hasNext()) {
      var element = tmp$.next();
      if (!this.contains_11rb$(element))
        return false;
    }
    return true;
  };
  NoraNyanko$FastNoraNyankoValues.prototype.isEmpty = function () {
    return this.$outer.empty_0;
  };
  NoraNyanko$FastNoraNyankoValues.prototype.iterator = function () {
    return new CatParamValueIterator(this.$outer.code_0);
  };
  NoraNyanko$FastNoraNyankoValues.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'FastNoraNyankoValues',
    interfaces: [Collection]
  };
  NoraNyanko.prototype.hashCode = function () {
    return hashCode(this.code_0);
  };
  NoraNyanko.prototype.equals = function (other) {
    var tmp$;
    if (other === this)
      return true;
    if (!Kotlin.isType(other, Neko))
      return false;
    if (Kotlin.isType(other, NoraNyanko)) {
      tmp$ = equals(this.code_0, other.code_0);
    } else {
      var sameType = equals(this.codeType, other.codeType) && equals(this.type, other.type);
      if (!sameType) {
        tmp$ = false;
      } else {
        var tmp$_0;
        tmp$_0 = this.keys.iterator();
        while (tmp$_0.hasNext()) {
          var element = tmp$_0.next();
          var thisValue = this.get(element);
          var otherValue = other.get(element);
          if (!equals(thisValue, otherValue))
            return false;
        }
        tmp$ = true;
      }
    }
    return tmp$;
  };
  function NoraNyanko$Of() {
    NoraNyanko$Of_instance = this;
  }
  NoraNyanko$Of.prototype.byCode_61zpoe$ = function (code) {
    var tmp$;
    return new NoraNyanko(trim(Kotlin.isCharSequence(tmp$ = code) ? tmp$ : throwCCE()).toString());
  };
  NoraNyanko$Of.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'Of',
    interfaces: []
  };
  var NoraNyanko$Of_instance = null;
  function NoraNyanko$Of_getInstance() {
    if (NoraNyanko$Of_instance === null) {
      new NoraNyanko$Of();
    }return NoraNyanko$Of_instance;
  }
  NoraNyanko.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'NoraNyanko',
    interfaces: [NoraNeko]
  };
  function Nyanko(code) {
    Nyanko$Of_getInstance();
    this.code_c9u5f6$_0 = code;
    this._type_r4g8u8$_0 = null;
    this._size_r5a1t3$_0 = 0;
    this.empty_oe6q2c$_0 = false;
    this.catHead_lzc87x$_0 = null;
    this.startIndex_7znaiz$_0 = 0;
    this.endIndex_wi1bek$_0 = 0;
    if (!startsWith(this.code_c9u5f6$_0, CAT_HEAD) || !endsWith(this.code_c9u5f6$_0, CAT_END)) {
      throw IllegalArgumentException_init('text ' + '"' + this.code_c9u5f6$_0 + '"' + ' is not a cat code text.');
    }this.startIndex_7znaiz$_0 = 5;
    this.endIndex_wi1bek$_0 = get_lastIndex(this.code_c9u5f6$_0);
    var it = indexOf(this.code_c9u5f6$_0, CAT_PS, this.startIndex_7znaiz$_0);
    var firstSplitIndex = it < 0 ? this.endIndex_wi1bek$_0 : it;
    var $receiver = this.code_c9u5f6$_0;
    var startIndex = this.startIndex_7znaiz$_0;
    this._type_r4g8u8$_0 = $receiver.substring(startIndex, firstSplitIndex);
    this.catHead_lzc87x$_0 = CAT_HEAD + this._type_r4g8u8$_0;
    this.empty_oe6q2c$_0 = contains(this.code_c9u5f6$_0, CAT_PS);
    var kvChar = first(CAT_KV);
    var tmp$;
    var count = 0;
    tmp$ = iterator(this.code_c9u5f6$_0);
    while (tmp$.hasNext()) {
      var element = unboxChar(tmp$.next());
      if (unboxChar(toBoxedChar(element)) === kvChar)
        count = count + 1 | 0;
    }
    this._size_r5a1t3$_0 = count;
    this.codeText_22b25b$_0 = this.code_c9u5f6$_0;
    this.length_i0owej$_0 = this.code_c9u5f6$_0.length;
    this.size_c14tja$_0 = this._size_r5a1t3$_0;
    this.type_c0b0kf$_0 = this._type_r4g8u8$_0;
    this.paramBuffer_yajbl8$_0 = null;
  }
  Nyanko.prototype.toString = function () {
    return this.code_c9u5f6$_0;
  };
  Object.defineProperty(Nyanko.prototype, 'length', {
    configurable: true,
    get: function () {
      return this.length_i0owej$_0;
    }
  });
  Object.defineProperty(Nyanko.prototype, 'size', {
    configurable: true,
    get: function () {
      return this.size_c14tja$_0;
    }
  });
  Object.defineProperty(Nyanko.prototype, 'type', {
    configurable: true,
    get: function () {
      return this.type_c0b0kf$_0;
    }
  });
  Nyanko.prototype.getNoDecode = function (key) {
    return this.getParam_atlgh2$_0(key);
  };
  Nyanko.prototype.mutable = function () {
    return MapNeko$Of_getInstance().mutableByCode_ivxn3r$(this.toString());
  };
  Nyanko.prototype.immutable = function () {
    return new Nyanko(this.code_c9u5f6$_0);
  };
  Nyanko.prototype.toMap = function () {
    return mapDelegation(this);
  };
  Nyanko.prototype.containsKey_11rb$ = function (key) {
    if (this.empty_oe6q2c$_0)
      return false;
    return contains(this.codeText_22b25b$_0, CAT_PS + key + CAT_KV);
  };
  Nyanko.prototype.containsValue_11rc$ = function (value) {
    if (this.empty_oe6q2c$_0)
      return false;
    var encodeValue = CatEncoder_getInstance().encodeParams(value);
    return contains(this.codeText_22b25b$_0, CAT_KV + encodeValue + CAT_PS) || contains(this.codeText_22b25b$_0, CAT_KV + encodeValue + CAT_END);
  };
  Nyanko.prototype.get = function (key) {
    return CatDecoder_getInstance().decodeParamsOrNull(this.getParam_atlgh2$_0(key));
  };
  Nyanko.prototype.charCodeAt = function (index) {
    return this.codeText_22b25b$_0.charCodeAt(index);
  };
  Nyanko.prototype.isEmpty = function () {
    return this.empty_oe6q2c$_0;
  };
  Nyanko.prototype.subSequence_vux9f0$ = function (startIndex, endIndex) {
    return this.codeText_22b25b$_0.substring(startIndex, endIndex);
  };
  Nyanko.prototype.getParam_atlgh2$_0 = function (key) {
    var tmp$, tmp$_0;
    var bufferFirst = (tmp$ = this.paramBuffer_yajbl8$_0) != null ? tmp$.key : null;
    var bufferSecond = (tmp$_0 = this.paramBuffer_yajbl8$_0) != null ? tmp$_0.value : null;
    if (bufferFirst != null && equals(bufferFirst, key)) {
      return bufferSecond;
    }var paramFind = CAT_PS + key + CAT_KV;
    var phi = indexOf(this.codeText_22b25b$_0, paramFind, this.startIndex_7znaiz$_0);
    if (phi < 0) {
      return null;
    }var startIndex = phi + paramFind.length | 0;
    var pei = indexOf(this.codeText_22b25b$_0, CAT_PS, startIndex);
    if (pei < 0 || pei > this.endIndex_wi1bek$_0) {
      pei = this.endIndex_wi1bek$_0;
    }if (startIndex > get_lastIndex(this.codeText_22b25b$_0) || startIndex > pei) {
      return null;
    }var $receiver = this.codeText_22b25b$_0;
    var endIndex = pei;
    var subParam = $receiver.substring(startIndex, endIndex);
    this.paramBuffer_yajbl8$_0 = cTo(key, subParam);
    return subParam;
  };
  Object.defineProperty(Nyanko.prototype, 'entries', {
    configurable: true,
    get: function () {
      return new Nyanko$FastNyankoEntrySet(this);
    }
  });
  function Nyanko$FastNyankoEntrySet($outer) {
    this.$outer = $outer;
  }
  Object.defineProperty(Nyanko$FastNyankoEntrySet.prototype, 'size', {
    configurable: true,
    get: function () {
      return this.$outer._size_r5a1t3$_0;
    }
  });
  Nyanko$FastNyankoEntrySet.prototype.contains_11rb$ = function (element) {
    if (this.$outer.empty_oe6q2c$_0)
      return false;
    var kv = element.key + CAT_KV + CatEncoder_getInstance().encodeParams(element.value);
    return contains(this.$outer.code_c9u5f6$_0, kv);
  };
  Nyanko$FastNyankoEntrySet.prototype.containsAll_brywnq$ = function (elements) {
    var tmp$;
    if (this.$outer.empty_oe6q2c$_0)
      return false;
    tmp$ = elements.iterator();
    while (tmp$.hasNext()) {
      var element = tmp$.next();
      if (!this.contains_11rb$(element))
        return false;
    }
    return true;
  };
  Nyanko$FastNyankoEntrySet.prototype.isEmpty = function () {
    return this.$outer.empty_oe6q2c$_0;
  };
  Nyanko$FastNyankoEntrySet.prototype.iterator = function () {
    return new CatParamEntryIterator(this.$outer.code_c9u5f6$_0);
  };
  Nyanko$FastNyankoEntrySet.prototype.toString = function () {
    return 'Nyanko.entries(' + this.$outer + ')';
  };
  Nyanko$FastNyankoEntrySet.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'FastNyankoEntrySet',
    interfaces: [Set]
  };
  Object.defineProperty(Nyanko.prototype, 'keys', {
    configurable: true,
    get: function () {
      return new Nyanko$FastNyankoKeySet(this);
    }
  });
  function Nyanko$FastNyankoKeySet($outer) {
    this.$outer = $outer;
  }
  Object.defineProperty(Nyanko$FastNyankoKeySet.prototype, 'size', {
    configurable: true,
    get: function () {
      return this.$outer._size_r5a1t3$_0;
    }
  });
  Nyanko$FastNyankoKeySet.prototype.contains_11rb$ = function (element) {
    if (this.$outer.empty_oe6q2c$_0)
      return false;
    return contains(this.$outer.code_c9u5f6$_0, element + CAT_KV);
  };
  Nyanko$FastNyankoKeySet.prototype.containsAll_brywnq$ = function (elements) {
    var tmp$;
    if (this.$outer.empty_oe6q2c$_0)
      return false;
    tmp$ = elements.iterator();
    while (tmp$.hasNext()) {
      var element = tmp$.next();
      if (!this.contains_11rb$(element))
        return false;
    }
    return true;
  };
  Nyanko$FastNyankoKeySet.prototype.isEmpty = function () {
    return this.$outer.empty_oe6q2c$_0;
  };
  Nyanko$FastNyankoKeySet.prototype.iterator = function () {
    return new CatParamKeyIterator(this.$outer.code_c9u5f6$_0);
  };
  Nyanko$FastNyankoKeySet.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'FastNyankoKeySet',
    interfaces: [Set]
  };
  Object.defineProperty(Nyanko.prototype, 'values', {
    configurable: true,
    get: function () {
      return new Nyanko$FastNyankoValues(this);
    }
  });
  function Nyanko$FastNyankoValues($outer) {
    this.$outer = $outer;
  }
  Object.defineProperty(Nyanko$FastNyankoValues.prototype, 'size', {
    configurable: true,
    get: function () {
      return this.$outer._size_r5a1t3$_0;
    }
  });
  Nyanko$FastNyankoValues.prototype.contains_11rb$ = function (element) {
    if (this.$outer.empty_oe6q2c$_0)
      return false;
    return contains(this.$outer.code_c9u5f6$_0, CAT_KV + CatEncoder_getInstance().encodeParams(element));
  };
  Nyanko$FastNyankoValues.prototype.containsAll_brywnq$ = function (elements) {
    var tmp$;
    if (this.$outer.empty_oe6q2c$_0)
      return false;
    tmp$ = elements.iterator();
    while (tmp$.hasNext()) {
      var element = tmp$.next();
      if (!this.contains_11rb$(element))
        return false;
    }
    return true;
  };
  Nyanko$FastNyankoValues.prototype.isEmpty = function () {
    return this.$outer.empty_oe6q2c$_0;
  };
  Nyanko$FastNyankoValues.prototype.iterator = function () {
    return new CatParamValueIterator(this.$outer.code_c9u5f6$_0);
  };
  Nyanko$FastNyankoValues.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'FastNyankoValues',
    interfaces: [Collection]
  };
  Nyanko.prototype.hashCode = function () {
    return hashCode(this.code_c9u5f6$_0);
  };
  Nyanko.prototype.equals = function (other) {
    var tmp$;
    if (other === this)
      return true;
    if (!Kotlin.isType(other, Neko))
      return false;
    if (Kotlin.isType(other, Nyanko)) {
      tmp$ = equals(this.code_c9u5f6$_0, other.code_c9u5f6$_0);
    } else {
      var sameType = equals(this.codeType, other.codeType) && equals(this.type, other.type);
      if (!sameType) {
        tmp$ = false;
      } else {
        var tmp$_0;
        tmp$_0 = this.keys.iterator();
        while (tmp$_0.hasNext()) {
          var element = tmp$_0.next();
          var thisValue = this.get(element);
          var otherValue = other.get(element);
          if (!equals(thisValue, otherValue))
            return false;
        }
        tmp$ = true;
      }
    }
    return tmp$;
  };
  function Nyanko$Of() {
    Nyanko$Of_instance = this;
  }
  Nyanko$Of.prototype.byCode_61zpoe$ = function (code) {
    var tmp$;
    return new Nyanko(trim(Kotlin.isCharSequence(tmp$ = code) ? tmp$ : throwCCE()).toString());
  };
  Nyanko$Of.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'Of',
    interfaces: []
  };
  var Nyanko$Of_instance = null;
  function Nyanko$Of_getInstance() {
    if (Nyanko$Of_instance === null) {
      new Nyanko$Of();
    }return Nyanko$Of_instance;
  }
  Nyanko.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'Nyanko',
    interfaces: [Neko]
  };
  function CodeTemplate() {
  }
  CodeTemplate.prototype.at_s8cxhz$ = function (code) {
    return this.at_61zpoe$(code.toString());
  };
  CodeTemplate.prototype.face_s8cxhz$ = function (id) {
    return this.face_61zpoe$(id.toString());
  };
  CodeTemplate.prototype.bface_s8cxhz$ = function (id) {
    return this.bface_61zpoe$(id.toString());
  };
  CodeTemplate.prototype.sface_s8cxhz$ = function (id) {
    return this.sface_61zpoe$(id.toString());
  };
  CodeTemplate.prototype.image_61zpoe$ = function (file) {
    return this.image_ivxn3r$(file, false);
  };
  CodeTemplate.prototype.record_61zpoe$ = function (file) {
    return this.record_ivxn3r$(file, false);
  };
  CodeTemplate.prototype.rps_za3lpa$ = function (type) {
    return this.rps_61zpoe$(type.toString());
  };
  CodeTemplate.prototype.dice_za3lpa$ = function (type) {
    return this.dice_61zpoe$(type.toString());
  };
  CodeTemplate.prototype.music_puj7f4$ = function (type, id) {
    return this.music_buzeal$(type, id, null);
  };
  CodeTemplate.prototype.customMusic_6hosri$ = function (url, audio, title) {
    return this.customMusic_nfi43m$(url, audio, title, null, null);
  };
  CodeTemplate.prototype.share_puj7f4$ = function (url, title) {
    return this.share_kc1kmo$(url, title, null, null);
  };
  CodeTemplate.$metadata$ = {
    kind: Kind_INTERFACE,
    simpleName: 'CodeTemplate',
    interfaces: []
  };
  function StringTemplate() {
    StringTemplate_instance = this;
    this.utils_0 = CatCodeUtil_getInstance();
    this.AT_ALL_0 = '[CAT:at,all=true]';
    this.RPS_0 = '[CAT:rps]';
    this.DICE_0 = '[CAT:dice]';
    this.SHAKE_0 = '[CAT:shake]';
  }
  Object.defineProperty(StringTemplate.prototype, 'instance', {
    configurable: true,
    get: function () {
      return this;
    }
  });
  StringTemplate.prototype.at_61zpoe$ = function (code) {
    return '[CAT:at,code=' + code + ']';
  };
  StringTemplate.prototype.atAll = function () {
    return this.AT_ALL_0;
  };
  StringTemplate.prototype.face_61zpoe$ = function (id) {
    return '[CAT:face,id=' + id + ']';
  };
  StringTemplate.prototype.bface_61zpoe$ = function (id) {
    return '[CAT:bface,id=' + id + ']';
  };
  StringTemplate.prototype.sface_61zpoe$ = function (id) {
    return '[CAT:sface,id=' + id + ']';
  };
  StringTemplate.prototype.image_ivxn3r$ = function (file, flash) {
    return '[CAT:image,file=' + file + ',flash=' + flash + ']';
  };
  StringTemplate.prototype.record_ivxn3r$ = function (file, magic) {
    return '[CAT:record,file=' + file + ',magic=' + magic + ']';
  };
  StringTemplate.prototype.rps = function () {
    return this.RPS_0;
  };
  StringTemplate.prototype.rps_61zpoe$ = function (type) {
    return '[CAT:rps,type=' + type + ']';
  };
  StringTemplate.prototype.dice = function () {
    return this.DICE_0;
  };
  StringTemplate.prototype.dice_61zpoe$ = function (type) {
    return '[CAT:dice,type=' + type + ']';
  };
  StringTemplate.prototype.shake = function () {
    return this.SHAKE_0;
  };
  StringTemplate.prototype.music_buzeal$ = function (type, id, style) {
    var tmp$;
    if (style != null) {
      tmp$ = '[CAT:music,type=' + type + ',id=' + id + ',style=' + toString(style) + ']';
    } else {
      tmp$ = '[CAT:music,type=' + type + ',id=' + id + ']';
    }
    return tmp$;
  };
  StringTemplate.prototype.customMusic_nfi43m$ = function (url, audio, title, content, image) {
    var tmp$;
    if (content != null && image != null) {
      tmp$ = '[CAT:music,type=custom,url=' + url + ',audio=' + audio + ',title=' + title + ',content=' + toString(content) + ',image=' + toString(image) + ']';
    } else {
      var list = mutableListOf([cTo('type', 'custom'), cTo('url', url), cTo('audio', audio), cTo('title', title)]);
      if (content != null) {
        list.add_11rb$(cTo('content', content));
      }if (image != null) {
        list.add_11rb$(cTo('image', image));
      }tmp$ = this.utils_0.toCatByKV('music', void 0, copyToArray(list).slice());
    }
    return tmp$;
  };
  StringTemplate.prototype.share_kc1kmo$ = function (url, title, content, image) {
    var tmp$;
    if (content != null && image != null) {
      tmp$ = '[CAT:share,url=' + url + ',title=' + title + ',content=' + toString(content) + ',image=' + toString(image) + ']';
    } else {
      var list = mutableListOf([cTo('url', url), cTo('title', title)]);
      if (content != null) {
        list.add_11rb$(cTo('content', content));
      }if (image != null) {
        list.add_11rb$(cTo('image', image));
      }tmp$ = this.utils_0.toCatByKV('share', void 0, copyToArray(list).slice());
    }
    return tmp$;
  };
  StringTemplate.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'StringTemplate',
    interfaces: [CodeTemplate]
  };
  var StringTemplate_instance = null;
  function StringTemplate_getInstance() {
    if (StringTemplate_instance === null) {
      new StringTemplate();
    }return StringTemplate_instance;
  }
  function NekoTemplate() {
    NekoTemplate_instance = this;
  }
  Object.defineProperty(NekoTemplate.prototype, 'instance', {
    configurable: true,
    get: function () {
      return this;
    }
  });
  NekoTemplate.prototype.at_61zpoe$ = function (code) {
    return Nyanko$Of_getInstance().byCode_61zpoe$(StringTemplate_getInstance().at_61zpoe$(code));
  };
  NekoTemplate.prototype.atAll = function () {
    return NekoAtAll;
  };
  NekoTemplate.prototype.face_61zpoe$ = function (id) {
    return Nyanko$Of_getInstance().byCode_61zpoe$(StringTemplate_getInstance().face_61zpoe$(id));
  };
  NekoTemplate.prototype.bface_61zpoe$ = function (id) {
    return Nyanko$Of_getInstance().byCode_61zpoe$(StringTemplate_getInstance().bface_61zpoe$(id));
  };
  NekoTemplate.prototype.sface_61zpoe$ = function (id) {
    return Nyanko$Of_getInstance().byCode_61zpoe$(StringTemplate_getInstance().sface_61zpoe$(id));
  };
  NekoTemplate.prototype.image_ivxn3r$ = function (file, flash) {
    return Nyanko$Of_getInstance().byCode_61zpoe$(StringTemplate_getInstance().image_ivxn3r$(file, flash));
  };
  NekoTemplate.prototype.record_ivxn3r$ = function (file, magic) {
    return Nyanko$Of_getInstance().byCode_61zpoe$(StringTemplate_getInstance().record_ivxn3r$(file, magic));
  };
  NekoTemplate.prototype.rps = function () {
    return NekoRps;
  };
  NekoTemplate.prototype.rps_61zpoe$ = function (type) {
    return Nyanko$Of_getInstance().byCode_61zpoe$(StringTemplate_getInstance().rps_61zpoe$(type));
  };
  NekoTemplate.prototype.dice = function () {
    return NekoDice;
  };
  NekoTemplate.prototype.dice_61zpoe$ = function (type) {
    return Nyanko$Of_getInstance().byCode_61zpoe$(StringTemplate_getInstance().dice_61zpoe$(type));
  };
  NekoTemplate.prototype.shake = function () {
    return NekoShake;
  };
  NekoTemplate.prototype.music_buzeal$ = function (type, id, style) {
    return Nyanko$Of_getInstance().byCode_61zpoe$(StringTemplate_getInstance().music_buzeal$(type, id, style));
  };
  NekoTemplate.prototype.customMusic_nfi43m$ = function (url, audio, title, content, image) {
    return Nyanko$Of_getInstance().byCode_61zpoe$(StringTemplate_getInstance().customMusic_nfi43m$(url, audio, title, content, image));
  };
  NekoTemplate.prototype.share_kc1kmo$ = function (url, title, content, image) {
    return Nyanko$Of_getInstance().byCode_61zpoe$(StringTemplate_getInstance().share_kc1kmo$(url, title, content, image));
  };
  NekoTemplate.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'NekoTemplate',
    interfaces: [CodeTemplate]
  };
  var NekoTemplate_instance = null;
  function NekoTemplate_getInstance() {
    if (NekoTemplate_instance === null) {
      new NekoTemplate();
    }return NekoTemplate_instance;
  }
  function LazyMap(map) {
    if (map === void 0) {
      map = emptyMap();
    }this.map_8be2vx$ = map;
  }
  function LazyMap$get_LazyMap$entries$lambda(it) {
    return new SimpleEntry(it.key, it.value.value);
  }
  Object.defineProperty(LazyMap.prototype, 'entries', {
    configurable: true,
    get: function () {
      return toSet(map(asSequence_0(this.map_8be2vx$.entries), LazyMap$get_LazyMap$entries$lambda));
    }
  });
  Object.defineProperty(LazyMap.prototype, 'keys', {
    configurable: true,
    get: function () {
      return this.map_8be2vx$.keys;
    }
  });
  Object.defineProperty(LazyMap.prototype, 'size', {
    configurable: true,
    get: function () {
      return this.map_8be2vx$.size;
    }
  });
  Object.defineProperty(LazyMap.prototype, 'values', {
    configurable: true,
    get: function () {
      var $receiver = this.map_8be2vx$.values;
      var destination = ArrayList_init(collectionSizeOrDefault($receiver, 10));
      var tmp$;
      tmp$ = $receiver.iterator();
      while (tmp$.hasNext()) {
        var item = tmp$.next();
        destination.add_11rb$(item.value);
      }
      return destination;
    }
  });
  LazyMap.prototype.containsKey_11rb$ = function (key) {
    return this.map_8be2vx$.containsKey_11rb$(key);
  };
  LazyMap.prototype.containsValue_11rc$ = function (value) {
    var $receiver = this.map_8be2vx$.values;
    var any$result;
    any$break: do {
      var tmp$;
      if (Kotlin.isType($receiver, Collection) && $receiver.isEmpty()) {
        any$result = false;
        break any$break;
      }tmp$ = $receiver.iterator();
      while (tmp$.hasNext()) {
        var element = tmp$.next();
        if (equals(element.value, value)) {
          any$result = true;
          break any$break;
        }}
      any$result = false;
    }
     while (false);
    return any$result;
  };
  LazyMap.prototype.get_11rb$ = function (key) {
    var tmp$;
    return (tmp$ = this.map_8be2vx$.get_11rb$(key)) != null ? tmp$.value : null;
  };
  LazyMap.prototype.isEmpty = function () {
    return this.map_8be2vx$.isEmpty();
  };
  LazyMap.prototype.copy = function () {
    return new LazyMap(this.map_8be2vx$);
  };
  LazyMap.prototype.toString = function () {
    var tmp$;
    if (this.isEmpty())
      tmp$ = '{}';
    else {
      var builder = StringBuilder_init().append_s8itvh$(123);
      var first = {v: true};
      var tmp$_0;
      tmp$_0 = this.map_8be2vx$.entries.iterator();
      while (tmp$_0.hasNext()) {
        var element = tmp$_0.next();
        var k = element.key;
        var v = element.value;
        if (!first.v) {
          builder.append_pdl1vj$(',');
        } else {
          first.v = false;
        }
        builder.append_s8jyv4$(k).append_s8itvh$(61).append_s8jyv4$(v.value);
      }
      tmp$ = builder.append_s8itvh$(125).toString();
    }
    return tmp$;
  };
  LazyMap.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'LazyMap',
    interfaces: [Map]
  };
  function toLazyMap($receiver) {
    var destination = LinkedHashMap_init_0(mapCapacity($receiver.size));
    var tmp$;
    tmp$ = $receiver.entries.iterator();
    while (tmp$.hasNext()) {
      var element = tmp$.next();
      destination.put_xwzc9p$(element.key, lazyValue(element.value));
    }
    return new LazyMap(destination);
  }
  function toMutableLazyMap($receiver) {
    var destination = LinkedHashMap_init_0(mapCapacity($receiver.size));
    var tmp$;
    tmp$ = $receiver.entries.iterator();
    while (tmp$.hasNext()) {
      var element = tmp$.next();
      destination.put_xwzc9p$(element.key, lazyValue(element.value));
    }
    return new MutableLazyMap(toMutableMap(destination));
  }
  function MutableLazyMap(map, mode) {
    if (map === void 0) {
      map = LinkedHashMap_init();
    }if (mode === void 0)
      mode = LazyThreadSafetyMode.PUBLICATION;
    this.map_8be2vx$ = map;
    this.mode_0 = mode;
  }
  Object.defineProperty(MutableLazyMap.prototype, 'size', {
    configurable: true,
    get: function () {
      return this.map_8be2vx$.size;
    }
  });
  MutableLazyMap.prototype.containsKey_11rb$ = function (key) {
    return this.map_8be2vx$.containsKey_11rb$(key);
  };
  MutableLazyMap.prototype.containsValue_11rc$ = function (value) {
    var $receiver = this.map_8be2vx$.values;
    var any$result;
    any$break: do {
      var tmp$;
      if (Kotlin.isType($receiver, Collection) && $receiver.isEmpty()) {
        any$result = false;
        break any$break;
      }tmp$ = $receiver.iterator();
      while (tmp$.hasNext()) {
        var element = tmp$.next();
        if (equals(element.value, value)) {
          any$result = true;
          break any$break;
        }}
      any$result = false;
    }
     while (false);
    return any$result;
  };
  MutableLazyMap.prototype.get_11rb$ = function (key) {
    var tmp$;
    return (tmp$ = this.map_8be2vx$.get_11rb$(key)) != null ? tmp$.value : null;
  };
  MutableLazyMap.prototype.isEmpty = function () {
    return this.map_8be2vx$.isEmpty();
  };
  Object.defineProperty(MutableLazyMap.prototype, 'keys', {
    configurable: true,
    get: function () {
      return this.map_8be2vx$.keys;
    }
  });
  function MutableLazyMap$get_MutableLazyMap$entries$lambda(it) {
    return new SimpleMutableEntry(it.key, it.value.value);
  }
  Object.defineProperty(MutableLazyMap.prototype, 'entries', {
    configurable: true,
    get: function () {
      return toMutableSet(map(asSequence_0(this.map_8be2vx$.entries), MutableLazyMap$get_MutableLazyMap$entries$lambda));
    }
  });
  function MutableLazyMap$get_MutableLazyMap$values$lambda(it) {
    return it.value;
  }
  Object.defineProperty(MutableLazyMap.prototype, 'values', {
    configurable: true,
    get: function () {
      return toMutableList(map(asSequence_0(this.map_8be2vx$.values), MutableLazyMap$get_MutableLazyMap$values$lambda));
    }
  });
  MutableLazyMap.prototype.clear = function () {
    this.map_8be2vx$.clear();
  };
  MutableLazyMap.prototype.put_xwzc9p$ = function (key, value) {
    var tmp$;
    return (tmp$ = this.map_8be2vx$.put_xwzc9p$(key, lazyValue(value))) != null ? tmp$.value : null;
  };
  MutableLazyMap.prototype.put_kpg1aj$ = function (key, initializer) {
    var tmp$;
    return (tmp$ = this.map_8be2vx$.put_xwzc9p$(key, lazy(this.mode_0, initializer))) != null ? tmp$.value : null;
  };
  MutableLazyMap.prototype.putAll_a2k3zr$ = function (from) {
    var tmp$ = this.map_8be2vx$;
    var destination = LinkedHashMap_init_0(mapCapacity(from.size));
    var tmp$_0;
    tmp$_0 = from.entries.iterator();
    while (tmp$_0.hasNext()) {
      var element = tmp$_0.next();
      destination.put_xwzc9p$(element.key, lazyValue(element.value));
    }
    tmp$.putAll_a2k3zr$(destination);
  };
  MutableLazyMap.prototype.remove_11rb$ = function (key) {
    var tmp$;
    return (tmp$ = this.map_8be2vx$.remove_11rb$(key)) != null ? tmp$.value : null;
  };
  MutableLazyMap.prototype.copy = function () {
    return new MutableLazyMap(this.map_8be2vx$, this.mode_0);
  };
  MutableLazyMap.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'MutableLazyMap',
    interfaces: [MutableMap]
  };
  MutableLazyMap.prototype.component1_8be2vx$ = function () {
    return this.map_8be2vx$;
  };
  MutableLazyMap.prototype.component2_0 = function () {
    return this.mode_0;
  };
  MutableLazyMap.prototype.copy_r6kbpt$ = function (map, mode) {
    return new MutableLazyMap(map === void 0 ? this.map_8be2vx$ : map, mode === void 0 ? this.mode_0 : mode);
  };
  MutableLazyMap.prototype.toString = function () {
    return 'MutableLazyMap(map=' + Kotlin.toString(this.map_8be2vx$) + (', mode=' + Kotlin.toString(this.mode_0)) + ')';
  };
  MutableLazyMap.prototype.hashCode = function () {
    var result = 0;
    result = result * 31 + Kotlin.hashCode(this.map_8be2vx$) | 0;
    result = result * 31 + Kotlin.hashCode(this.mode_0) | 0;
    return result;
  };
  MutableLazyMap.prototype.equals = function (other) {
    return this === other || (other !== null && (typeof other === 'object' && (Object.getPrototypeOf(this) === Object.getPrototypeOf(other) && (Kotlin.equals(this.map_8be2vx$, other.map_8be2vx$) && Kotlin.equals(this.mode_0, other.mode_0)))));
  };
  function asLazyMap($receiver) {
    return new LazyMap($receiver.map_8be2vx$);
  }
  function toLazyMap_0($receiver) {
    return new LazyMap(toMap($receiver.map_8be2vx$));
  }
  function toMutableMap_0($receiver) {
    return new MutableLazyMap(toMutableMap($receiver.map_8be2vx$));
  }
  function NekoMap() {
  }
  NekoMap.prototype.getOrDefault_xwzc9p$ = function (key, defaultValue) {
    var tmp$;
    return (tmp$ = this.get(key)) != null ? tmp$ : defaultValue;
  };
  NekoMap.prototype.forEach_15xl62$ = function (action) {
    var tmp$;
    tmp$ = this.entries.iterator();
    while (tmp$.hasNext()) {
      var element = tmp$.next();
      action(element.key, element.value);
    }
  };
  NekoMap.$metadata$ = {
    kind: Kind_INTERFACE,
    simpleName: 'NekoMap',
    interfaces: []
  };
  function set($receiver, key, value) {
    return $receiver.put_xwzc9p$(key, value);
  }
  function NekoMapDelegation(nekoMap) {
    this.nekoMap = nekoMap;
  }
  Object.defineProperty(NekoMapDelegation.prototype, 'entries', {
    configurable: true,
    get: function () {
      return this.nekoMap.entries;
    }
  });
  Object.defineProperty(NekoMapDelegation.prototype, 'keys', {
    configurable: true,
    get: function () {
      return this.nekoMap.keys;
    }
  });
  Object.defineProperty(NekoMapDelegation.prototype, 'size', {
    configurable: true,
    get: function () {
      return this.nekoMap.size;
    }
  });
  Object.defineProperty(NekoMapDelegation.prototype, 'values', {
    configurable: true,
    get: function () {
      return this.nekoMap.values;
    }
  });
  NekoMapDelegation.prototype.containsKey_11rb$ = function (key) {
    return this.nekoMap.containsKey_11rb$(key);
  };
  NekoMapDelegation.prototype.containsValue_11rc$ = function (value) {
    return this.nekoMap.containsValue_11rc$(value);
  };
  NekoMapDelegation.prototype.get_11rb$ = function (key) {
    return this.nekoMap.get(key);
  };
  NekoMapDelegation.prototype.isEmpty = function () {
    return this.nekoMap.isEmpty();
  };
  NekoMapDelegation.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'NekoMapDelegation',
    interfaces: [Map]
  };
  function nekoToMap(nekoMap) {
    return new NekoMapDelegation(nekoMap);
  }
  function mapDelegation($receiver) {
    return nekoToMap($receiver);
  }
  function MutableNekoMapDelegation(nekoMap) {
    NekoMapDelegation.call(this, nekoMap);
  }
  Object.defineProperty(MutableNekoMapDelegation.prototype, 'mutableNekoMap_67iz21$_0', {
    configurable: true,
    get: function () {
      var tmp$;
      return Kotlin.isType(tmp$ = this.nekoMap, MutableNekoMap) ? tmp$ : throwCCE();
    }
  });
  Object.defineProperty(MutableNekoMapDelegation.prototype, 'entries', {
    configurable: true,
    get: function () {
      return this.mutableNekoMap_67iz21$_0.entries;
    }
  });
  Object.defineProperty(MutableNekoMapDelegation.prototype, 'keys', {
    configurable: true,
    get: function () {
      return this.mutableNekoMap_67iz21$_0.keys;
    }
  });
  Object.defineProperty(MutableNekoMapDelegation.prototype, 'values', {
    configurable: true,
    get: function () {
      return this.mutableNekoMap_67iz21$_0.values;
    }
  });
  MutableNekoMapDelegation.prototype.clear = function () {
    this.mutableNekoMap_67iz21$_0.clear();
  };
  MutableNekoMapDelegation.prototype.put_xwzc9p$ = function (key, value) {
    return this.mutableNekoMap_67iz21$_0.put_xwzc9p$(key, value);
  };
  MutableNekoMapDelegation.prototype.putAll_a2k3zr$ = function (from) {
    var tmp$;
    tmp$ = from.entries.iterator();
    while (tmp$.hasNext()) {
      var element = tmp$.next();
      var k = element.key;
      var v = element.value;
      this.mutableNekoMap_67iz21$_0.put_xwzc9p$(k, v);
    }
  };
  MutableNekoMapDelegation.prototype.remove_11rb$ = function (key) {
    return this.mutableNekoMap_67iz21$_0.remove_11rb$(key);
  };
  MutableNekoMapDelegation.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'MutableNekoMapDelegation',
    interfaces: [MutableMap, NekoMapDelegation]
  };
  function MutableNekoMap() {
  }
  MutableNekoMap.prototype.putAll_u7olld$ = function (from) {
    this.putAll_a2k3zr$(from.toMap());
  };
  MutableNekoMap.prototype.putAll_a2k3zr$ = function (from) {
    var tmp$;
    tmp$ = from.entries.iterator();
    while (tmp$.hasNext()) {
      var element = tmp$.next();
      var k = element.key;
      var v = element.value;
      this.put_xwzc9p$(k, v);
    }
  };
  MutableNekoMap.$metadata$ = {
    kind: Kind_INTERFACE,
    simpleName: 'MutableNekoMap',
    interfaces: [NekoMap]
  };
  function NoNeedInitializeLazy(value) {
    this.value_9e6oq1$_0 = value;
  }
  Object.defineProperty(NoNeedInitializeLazy.prototype, 'value', {
    get: function () {
      return this.value_9e6oq1$_0;
    }
  });
  NoNeedInitializeLazy.prototype.isInitialized = function () {
    return true;
  };
  NoNeedInitializeLazy.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'NoNeedInitializeLazy',
    interfaces: [Lazy]
  };
  NoNeedInitializeLazy.prototype.component1 = function () {
    return this.value;
  };
  NoNeedInitializeLazy.prototype.copy_11rb$ = function (value) {
    return new NoNeedInitializeLazy(value === void 0 ? this.value : value);
  };
  NoNeedInitializeLazy.prototype.toString = function () {
    return 'NoNeedInitializeLazy(value=' + Kotlin.toString(this.value) + ')';
  };
  NoNeedInitializeLazy.prototype.hashCode = function () {
    var result = 0;
    result = result * 31 + Kotlin.hashCode(this.value) | 0;
    return result;
  };
  NoNeedInitializeLazy.prototype.equals = function (other) {
    return this === other || (other !== null && (typeof other === 'object' && (Object.getPrototypeOf(this) === Object.getPrototypeOf(other) && Kotlin.equals(this.value, other.value))));
  };
  function lazyValue(value) {
    return new NoNeedInitializeLazy(value);
  }
  function SimpleEntry(key, value) {
    this.key_el8rf2$_0 = key;
    this.value_x4sr3w$_0 = value;
  }
  Object.defineProperty(SimpleEntry.prototype, 'key', {
    get: function () {
      return this.key_el8rf2$_0;
    }
  });
  Object.defineProperty(SimpleEntry.prototype, 'value', {
    get: function () {
      return this.value_x4sr3w$_0;
    }
  });
  SimpleEntry.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'SimpleEntry',
    interfaces: [Map$Entry]
  };
  SimpleEntry.prototype.component1 = function () {
    return this.key;
  };
  SimpleEntry.prototype.component2 = function () {
    return this.value;
  };
  SimpleEntry.prototype.copy_xwzc9p$ = function (key, value) {
    return new SimpleEntry(key === void 0 ? this.key : key, value === void 0 ? this.value : value);
  };
  SimpleEntry.prototype.toString = function () {
    return 'SimpleEntry(key=' + Kotlin.toString(this.key) + (', value=' + Kotlin.toString(this.value)) + ')';
  };
  SimpleEntry.prototype.hashCode = function () {
    var result = 0;
    result = result * 31 + Kotlin.hashCode(this.key) | 0;
    result = result * 31 + Kotlin.hashCode(this.value) | 0;
    return result;
  };
  SimpleEntry.prototype.equals = function (other) {
    return this === other || (other !== null && (typeof other === 'object' && (Object.getPrototypeOf(this) === Object.getPrototypeOf(other) && (Kotlin.equals(this.key, other.key) && Kotlin.equals(this.value, other.value)))));
  };
  function SimpleMutableEntry(key, value) {
    this.key_56yre$_0 = key;
    this.value_8kdu5w$_0 = value;
  }
  Object.defineProperty(SimpleMutableEntry.prototype, 'key', {
    get: function () {
      return this.key_56yre$_0;
    }
  });
  Object.defineProperty(SimpleMutableEntry.prototype, 'value', {
    get: function () {
      return this.value_8kdu5w$_0;
    },
    set: function (value) {
      this.value_8kdu5w$_0 = value;
    }
  });
  SimpleMutableEntry.prototype.setValue_11rc$ = function (newValue) {
    var $receiver = this.value;
    this.value = newValue;
    return $receiver;
  };
  SimpleMutableEntry.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'SimpleMutableEntry',
    interfaces: [MutableMap$MutableEntry]
  };
  SimpleMutableEntry.prototype.component1 = function () {
    return this.key;
  };
  SimpleMutableEntry.prototype.component2 = function () {
    return this.value;
  };
  SimpleMutableEntry.prototype.copy_xwzc9p$ = function (key, value) {
    return new SimpleMutableEntry(key === void 0 ? this.key : key, value === void 0 ? this.value : value);
  };
  SimpleMutableEntry.prototype.toString = function () {
    return 'SimpleMutableEntry(key=' + Kotlin.toString(this.key) + (', value=' + Kotlin.toString(this.value)) + ')';
  };
  SimpleMutableEntry.prototype.hashCode = function () {
    var result = 0;
    result = result * 31 + Kotlin.hashCode(this.key) | 0;
    result = result * 31 + Kotlin.hashCode(this.value) | 0;
    return result;
  };
  SimpleMutableEntry.prototype.equals = function (other) {
    return this === other || (other !== null && (typeof other === 'object' && (Object.getPrototypeOf(this) === Object.getPrototypeOf(other) && (Kotlin.equals(this.key, other.key) && Kotlin.equals(this.value, other.value)))));
  };
  function Msgs(delimiter, delegate) {
    if (delimiter === void 0)
      delimiter = ' ';
    if (delegate === void 0)
      delegate = Msgs_init$lambda;
    this.delimiter_0 = delimiter;
    this.delegate_0 = delegate;
    this.$delegate_dejmgz$_0 = delegate();
  }
  Msgs.prototype.toString = function () {
    return joinToString(this, this.delimiter_0);
  };
  Msgs.prototype.toListString = function () {
    return joinToString(this, ', ', '[', ']');
  };
  Msgs.prototype.plus_fy01bk$ = function (other) {
    var tmp$;
    tmp$ = other.iterator();
    while (tmp$.hasNext()) {
      var element = tmp$.next();
      this.add_11rb$(element != null ? element : 'null');
    }
    return this;
  };
  Msgs.prototype.plus_gw00v9$ = function (other) {
    this.add_11rb$(other != null ? other : 'null');
    return this;
  };
  Object.defineProperty(Msgs.prototype, 'size', {
    get: function () {
      return this.$delegate_dejmgz$_0.size;
    }
  });
  Msgs.prototype.add_11rb$ = function (element) {
    return this.$delegate_dejmgz$_0.add_11rb$(element);
  };
  Msgs.prototype.add_wxm5ur$ = function (index, element) {
    return this.$delegate_dejmgz$_0.add_wxm5ur$(index, element);
  };
  Msgs.prototype.addAll_u57x28$ = function (index, elements) {
    return this.$delegate_dejmgz$_0.addAll_u57x28$(index, elements);
  };
  Msgs.prototype.addAll_brywnq$ = function (elements) {
    return this.$delegate_dejmgz$_0.addAll_brywnq$(elements);
  };
  Msgs.prototype.clear = function () {
    return this.$delegate_dejmgz$_0.clear();
  };
  Msgs.prototype.contains_11rb$ = function (element) {
    return this.$delegate_dejmgz$_0.contains_11rb$(element);
  };
  Msgs.prototype.containsAll_brywnq$ = function (elements) {
    return this.$delegate_dejmgz$_0.containsAll_brywnq$(elements);
  };
  Msgs.prototype.get_za3lpa$ = function (index) {
    return this.$delegate_dejmgz$_0.get_za3lpa$(index);
  };
  Msgs.prototype.indexOf_11rb$ = function (element) {
    return this.$delegate_dejmgz$_0.indexOf_11rb$(element);
  };
  Msgs.prototype.isEmpty = function () {
    return this.$delegate_dejmgz$_0.isEmpty();
  };
  Msgs.prototype.iterator = function () {
    return this.$delegate_dejmgz$_0.iterator();
  };
  Msgs.prototype.lastIndexOf_11rb$ = function (element) {
    return this.$delegate_dejmgz$_0.lastIndexOf_11rb$(element);
  };
  Msgs.prototype.listIterator = function () {
    return this.$delegate_dejmgz$_0.listIterator();
  };
  Msgs.prototype.listIterator_za3lpa$ = function (index) {
    return this.$delegate_dejmgz$_0.listIterator_za3lpa$(index);
  };
  Msgs.prototype.remove_11rb$ = function (element) {
    return this.$delegate_dejmgz$_0.remove_11rb$(element);
  };
  Msgs.prototype.removeAll_brywnq$ = function (elements) {
    return this.$delegate_dejmgz$_0.removeAll_brywnq$(elements);
  };
  Msgs.prototype.removeAt_za3lpa$ = function (index) {
    return this.$delegate_dejmgz$_0.removeAt_za3lpa$(index);
  };
  Msgs.prototype.retainAll_brywnq$ = function (elements) {
    return this.$delegate_dejmgz$_0.retainAll_brywnq$(elements);
  };
  Msgs.prototype.set_wxm5ur$ = function (index, element) {
    return this.$delegate_dejmgz$_0.set_wxm5ur$(index, element);
  };
  Msgs.prototype.subList_vux9f0$ = function (fromIndex, toIndex) {
    return this.$delegate_dejmgz$_0.subList_vux9f0$(fromIndex, toIndex);
  };
  function Msgs_init$lambda() {
    return ArrayList_init_0();
  }
  Msgs.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'Msgs',
    interfaces: [MutableList]
  };
  function Msgs_init(delimiter, collection, $this) {
    if (delimiter === void 0)
      delimiter = ' ';
    $this = $this || Object.create(Msgs.prototype);
    Msgs.call($this, delimiter);
    mutableListOf([collection]);
    return $this;
  }
  var CAT_TYPE;
  var CAT_HEAD;
  var CAT_END;
  var CAT_PS;
  var CAT_KV;
  var nekoMatchRegex;
  function catHead(codeType) {
    return '[' + codeType + ':';
  }
  function Neko() {
    Neko$Of_getInstance();
  }
  Object.defineProperty(Neko.prototype, 'codeType', {
    configurable: true,
    get: function () {
      return CAT_TYPE;
    }
  });
  Neko.prototype.plus = function (other) {
    return Msgs_init(void 0, listOf([this, other]));
  };
  function Neko$Of() {
    Neko$Of_instance = this;
  }
  Neko$Of.prototype.ofType = function (type) {
    return new EmptyNeko(type);
  };
  Neko$Of.prototype.of = function (code) {
    return Nyanko$Of_getInstance().byCode_61zpoe$(code);
  };
  Neko$Of.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'Of',
    interfaces: []
  };
  var Neko$Of_instance = null;
  function Neko$Of_getInstance() {
    if (Neko$Of_instance === null) {
      new Neko$Of();
    }return Neko$Of_instance;
  }
  Neko.$metadata$ = {
    kind: Kind_INTERFACE,
    simpleName: 'Neko',
    interfaces: [CharSequence, NekoMap]
  };
  function MutableNeko() {
  }
  MutableNeko.$metadata$ = {
    kind: Kind_INTERFACE,
    simpleName: 'MutableNeko',
    interfaces: [MutableNekoMap, Neko]
  };
  function NoraNeko() {
  }
  NoraNeko.$metadata$ = {
    kind: Kind_INTERFACE,
    simpleName: 'NoraNeko',
    interfaces: [Neko]
  };
  function MutableNoraNeko() {
  }
  MutableNoraNeko.$metadata$ = {
    kind: Kind_INTERFACE,
    simpleName: 'MutableNoraNeko',
    interfaces: [MutableNeko]
  };
  function BaseMutableNoraNeko() {
  }
  BaseMutableNoraNeko.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'BaseMutableNoraNeko',
    interfaces: [MutableNoraNeko]
  };
  function EmptyNeko(type) {
    this.type_y22sb3$_0 = type;
    this.codeText_0 = CAT_HEAD + this.type + CAT_END;
    this.entries_fsq0qt$_0 = emptySet();
    this.keys_xws28l$_0 = emptySet();
    this.size_y18zc8$_0 = 0;
    this.values_25a0br$_0 = emptyList();
    this.length_nfa59$_0 = this.codeText_0.length;
  }
  Object.defineProperty(EmptyNeko.prototype, 'type', {
    get: function () {
      return this.type_y22sb3$_0;
    }
  });
  EmptyNeko.prototype.toString = function () {
    return this.codeText_0;
  };
  EmptyNeko.prototype.mutable = function () {
    return MapNeko$Of_getInstance().mutableByCode_ivxn3r$(this.codeText_0);
  };
  EmptyNeko.prototype.immutable = function () {
    return this.copy_61zpoe$();
  };
  EmptyNeko.prototype.toMap = function () {
    return emptyMap();
  };
  Object.defineProperty(EmptyNeko.prototype, 'entries', {
    configurable: true,
    get: function () {
      return this.entries_fsq0qt$_0;
    }
  });
  Object.defineProperty(EmptyNeko.prototype, 'keys', {
    configurable: true,
    get: function () {
      return this.keys_xws28l$_0;
    }
  });
  Object.defineProperty(EmptyNeko.prototype, 'size', {
    configurable: true,
    get: function () {
      return this.size_y18zc8$_0;
    }
  });
  Object.defineProperty(EmptyNeko.prototype, 'values', {
    configurable: true,
    get: function () {
      return this.values_25a0br$_0;
    }
  });
  EmptyNeko.prototype.containsKey_11rb$ = function (key) {
    return false;
  };
  EmptyNeko.prototype.containsValue_11rc$ = function (value) {
    return false;
  };
  EmptyNeko.prototype.get = function (key) {
    return null;
  };
  EmptyNeko.prototype.getNoDecode = function (key) {
    return null;
  };
  Object.defineProperty(EmptyNeko.prototype, 'length', {
    configurable: true,
    get: function () {
      return this.length_nfa59$_0;
    }
  });
  EmptyNeko.prototype.charCodeAt = function (index) {
    return this.codeText_0.charCodeAt(index);
  };
  EmptyNeko.prototype.isEmpty = function () {
    return true;
  };
  EmptyNeko.prototype.subSequence_vux9f0$ = function (startIndex, endIndex) {
    return this.codeText_0.substring(startIndex, endIndex);
  };
  EmptyNeko.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'EmptyNeko',
    interfaces: [Neko]
  };
  EmptyNeko.prototype.component1 = function () {
    return this.type;
  };
  EmptyNeko.prototype.copy_61zpoe$ = function (type) {
    return new EmptyNeko(type === void 0 ? this.type : type);
  };
  EmptyNeko.prototype.hashCode = function () {
    var result = 0;
    result = result * 31 + Kotlin.hashCode(this.type) | 0;
    return result;
  };
  EmptyNeko.prototype.equals = function (other) {
    return this === other || (other !== null && (typeof other === 'object' && (Object.getPrototypeOf(this) === Object.getPrototypeOf(other) && Kotlin.equals(this.type, other.type))));
  };
  function EmptyNoraNeko(codeType, type) {
    this.codeType_baz0su$_0 = codeType;
    this.type_n1x50f$_0 = type;
    this.codeText_0 = catHead(this.codeType) + this.type + CAT_END;
    this.entries_w21xbf$_0 = emptySet();
    this.keys_mwmexx$_0 = emptySet();
    this.size_n13c1k$_0 = 0;
    this.values_akbawn$_0 = emptyList();
    this.length_7rm0fn$_0 = this.codeText_0.length;
  }
  Object.defineProperty(EmptyNoraNeko.prototype, 'codeType', {
    get: function () {
      return this.codeType_baz0su$_0;
    }
  });
  Object.defineProperty(EmptyNoraNeko.prototype, 'type', {
    get: function () {
      return this.type_n1x50f$_0;
    }
  });
  EmptyNoraNeko.prototype.toString = function () {
    return this.codeText_0;
  };
  EmptyNoraNeko.prototype.mutable = function () {
    return MapNeko$Of_getInstance().mutableByCode_ivxn3r$(this.codeText_0);
  };
  EmptyNoraNeko.prototype.immutable = function () {
    return this.copy_puj7f4$();
  };
  EmptyNoraNeko.prototype.toMap = function () {
    return emptyMap();
  };
  Object.defineProperty(EmptyNoraNeko.prototype, 'entries', {
    configurable: true,
    get: function () {
      return this.entries_w21xbf$_0;
    }
  });
  Object.defineProperty(EmptyNoraNeko.prototype, 'keys', {
    configurable: true,
    get: function () {
      return this.keys_mwmexx$_0;
    }
  });
  Object.defineProperty(EmptyNoraNeko.prototype, 'size', {
    configurable: true,
    get: function () {
      return this.size_n13c1k$_0;
    }
  });
  Object.defineProperty(EmptyNoraNeko.prototype, 'values', {
    configurable: true,
    get: function () {
      return this.values_akbawn$_0;
    }
  });
  EmptyNoraNeko.prototype.containsKey_11rb$ = function (key) {
    return false;
  };
  EmptyNoraNeko.prototype.containsValue_11rc$ = function (value) {
    return false;
  };
  EmptyNoraNeko.prototype.get = function (key) {
    return null;
  };
  EmptyNoraNeko.prototype.getNoDecode = function (key) {
    return null;
  };
  Object.defineProperty(EmptyNoraNeko.prototype, 'length', {
    configurable: true,
    get: function () {
      return this.length_7rm0fn$_0;
    }
  });
  EmptyNoraNeko.prototype.charCodeAt = function (index) {
    return this.codeText_0.charCodeAt(index);
  };
  EmptyNoraNeko.prototype.isEmpty = function () {
    return true;
  };
  EmptyNoraNeko.prototype.subSequence_vux9f0$ = function (startIndex, endIndex) {
    return this.codeText_0.substring(startIndex, endIndex);
  };
  EmptyNoraNeko.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'EmptyNoraNeko',
    interfaces: [NoraNeko]
  };
  EmptyNoraNeko.prototype.component1 = function () {
    return this.codeType;
  };
  EmptyNoraNeko.prototype.component2 = function () {
    return this.type;
  };
  EmptyNoraNeko.prototype.copy_puj7f4$ = function (codeType, type) {
    return new EmptyNoraNeko(codeType === void 0 ? this.codeType : codeType, type === void 0 ? this.type : type);
  };
  EmptyNoraNeko.prototype.hashCode = function () {
    var result = 0;
    result = result * 31 + Kotlin.hashCode(this.codeType) | 0;
    result = result * 31 + Kotlin.hashCode(this.type) | 0;
    return result;
  };
  EmptyNoraNeko.prototype.equals = function (other) {
    return this === other || (other !== null && (typeof other === 'object' && (Object.getPrototypeOf(this) === Object.getPrototypeOf(other) && (Kotlin.equals(this.codeType, other.codeType) && Kotlin.equals(this.type, other.type)))));
  };
  function NekoAibo(codeType) {
    this.codeType = codeType;
    this.catCodeHead_26qqy$_0 = catHead(this.codeType);
  }
  Object.defineProperty(NekoAibo.prototype, 'catCodeHead', {
    configurable: true,
    get: function () {
      return this.catCodeHead_26qqy$_0;
    }
  });
  NekoAibo.prototype.getStringCodeBuilder = function (type, encode, callback$default) {
    if (encode === void 0)
      encode = true;
    return callback$default ? callback$default(type, encode) : this.getStringCodeBuilder$default(type, encode);
  };
  NekoAibo.prototype.toCat = function (type) {
    return this.catCodeHead + type + CAT_END;
  };
  function NekoAibo$toCat$lambda(it) {
    var v = it.key;
    var tmp$ = v != null;
    if (tmp$) {
      tmp$ = Kotlin.isCharSequence(v) ? !isBlank(v) : true;
    }return tmp$;
  }
  function NekoAibo$toCat$lambda_0(closure$encode) {
    return function (it) {
      return it.key + CAT_KV + toString(closure$encode ? enCatParam(toString(it.value)) : it.value);
    };
  }
  NekoAibo.prototype.toCatByKV = function (type, encode, kv) {
    if (encode === void 0)
      encode = true;
    var tmp$;
    var pre = this.catCodeHead + type;
    if (!(kv.length === 0)) {
      tmp$ = joinToString_0(filter(asSequence_1(kv), NekoAibo$toCat$lambda), CAT_PS, pre + CAT_PS, CAT_END, void 0, void 0, NekoAibo$toCat$lambda_0(encode));
    } else {
      tmp$ = pre + CAT_END;
    }
    return tmp$;
  };
  function NekoAibo$toCat$lambda_1(it) {
    var v = it.value;
    var tmp$ = v != null;
    if (tmp$) {
      tmp$ = Kotlin.isCharSequence(v) ? !isBlank(v) : true;
    }return tmp$;
  }
  function NekoAibo$toCat$lambda_2(closure$encode) {
    return function (it) {
      return it.key + CAT_KV + toString(closure$encode ? enCatParam(toString(it.value)) : it.value);
    };
  }
  NekoAibo.prototype.toCatByMap = function (type, encode, map) {
    if (encode === void 0)
      encode = true;
    var tmp$;
    var pre = this.catCodeHead + type;
    if (!map.isEmpty()) {
      tmp$ = joinToString_0(filter(asSequence(map), NekoAibo$toCat$lambda_1), CAT_PS, pre + CAT_PS, CAT_END, void 0, void 0, NekoAibo$toCat$lambda_2(encode));
    } else {
      tmp$ = pre + CAT_END;
    }
    return tmp$;
  };
  NekoAibo.prototype.toCatByParams = function (type, encode, params) {
    if (encode === void 0)
      encode = true;
    var tmp$, tmp$_0, tmp$_1;
    if (!(params.length === 0)) {
      if (encode) {
        var destination = ArrayList_init_0();
        var tmp$_2;
        for (tmp$_2 = 0; tmp$_2 !== params.length; ++tmp$_2) {
          var element = params[tmp$_2];
          var tmp$_0_0;
          var split_0 = split(element, CAT_KV_SPLIT_ARRAY.slice(), false, 2);
          var k = split_0.get_za3lpa$(0);
          var v = split_0.get_za3lpa$(1);
          if ((tmp$_0_0 = !isBlank(v) ? cTo(k, v) : null) != null) {
            destination.add_11rb$(tmp$_0_0);
          }}
        tmp$_1 = this.toCatByKV(type, encode, copyToArray(destination).slice());
      } else {
        var destination_0 = ArrayList_init_0();
        var tmp$_3;
        for (tmp$_3 = 0; tmp$_3 !== params.length; ++tmp$_3) {
          var element_0 = params[tmp$_3];
          if (!endsWith(element_0, CAT_KV))
            destination_0.add_11rb$(element_0);
        }
        tmp$_1 = (tmp$_0 = (tmp$ = !destination_0.isEmpty() ? destination_0 : null) != null ? this.catCodeHead + type + CAT_PS + joinToString(tmp$, CAT_PS) + CAT_END : null) != null ? tmp$_0 : this.catCodeHead + type + CAT_END;
      }
    } else {
      tmp$_1 = this.catCodeHead + type + CAT_END;
    }
    return tmp$_1;
  };
  NekoAibo.prototype.toNeko = function (type) {
    return new EmptyNeko(type);
  };
  NekoAibo.prototype.toNekoByMap = function (type, params) {
    var tmp$;
    if (params.isEmpty()) {
      tmp$ = this.toNeko(type);
    } else {
      tmp$ = MapNeko$Of_getInstance().byMap_8foi92$(type, params);
    }
    return tmp$;
  };
  NekoAibo.prototype.toNekoByKV = function (type, params) {
    var tmp$;
    if (params.length === 0) {
      tmp$ = this.toNeko(type);
    } else {
      tmp$ = MapNeko$Of_getInstance().byKV_ycbbc1$(type, params.slice());
    }
    return tmp$;
  };
  NekoAibo.prototype.toNekoByParams$default = function (type, encode, paramText) {
    var tmp$;
    if (paramText.length === 0) {
      tmp$ = this.toNeko(type);
    } else {
      tmp$ = Nyanko$Of_getInstance().byCode_61zpoe$(this.toCatByParams(type, encode, paramText.slice()));
    }
    return tmp$;
  };
  NekoAibo.prototype.toNekoByParams = function (type, encode, paramText, callback$default) {
    if (encode === void 0)
      encode = false;
    return callback$default ? callback$default(type, encode, paramText) : this.toNekoByParams$default(type, encode, paramText);
  };
  function NekoAibo$split$lambda($receiver) {
    return $receiver;
  }
  NekoAibo.prototype.split = function (text) {
    return this.splitWithMapper(text, NekoAibo$split$lambda);
  };
  NekoAibo.prototype.splitWithMapper = function (text, postMap) {
    var tmp$;
    var list = ArrayList_init_0();
    var het = this.catCodeHead;
    var ent = CAT_END;
    var h = indexOf(text, het);
    var le = -1;
    var e = -1;
    while (h >= 0) {
      if (e !== -1) {
        le = e;
      }e = indexOf(text, ent, h);
      if (e < 0) {
        tmp$ = indexOf(text, het, h + 1 | 0);
      } else {
        if (h > 0 && (le + 1 | 0) !== h) {
          var startIndex = le + 1 | 0;
          var endIndex = h;
          list.add_11rb$(postMap(text.substring(startIndex, endIndex)));
        }var startIndex_0 = h;
        var endIndex_0 = e + 1 | 0;
        list.add_11rb$(postMap(text.substring(startIndex_0, endIndex_0)));
        tmp$ = indexOf(text, het, e);
      }
      h = tmp$;
    }
    if (list.isEmpty()) {
      list.add_11rb$(postMap(text));
    }if (e !== (text.length - 1 | 0)) {
      if (e >= 0) {
        var startIndex_1 = e + 1 | 0;
        var endIndex_1 = text.length;
        list.add_11rb$(postMap(text.substring(startIndex_1, endIndex_1)));
      }}return list;
  };
  NekoAibo.prototype.getCatWithType = function (text, type, index) {
    if (type === void 0)
      type = '';
    if (index === void 0)
      index = 0;
    var tmp$;
    if (index < 0) {
      throw new IndexOutOfBoundsException(index.toString());
    }var i = -1;
    var ti;
    var e = 0;
    var het = this.catCodeHead + type;
    var ent = CAT_END;
    do {
      ti = indexOf(text, het, e);
      if (ti >= 0) {
        e = indexOf(text, ent, ti);
        if (e >= 0) {
          i = i + 1 | 0;
        } else {
          e = ti + 1 | 0;
        }
      }}
     while (ti >= 0 && i < index);
    if (i === index) {
      var startIndex = ti;
      var endIndex = e + 1 | 0;
      tmp$ = text.substring(startIndex, endIndex);
    } else {
      tmp$ = null;
    }
    return tmp$;
  };
  NekoAibo.prototype.getCat = function (text, index) {
    if (index === void 0)
      index = 0;
    return this.getCatWithType(text, '', index);
  };
  function NekoAibo$getCats$lambda(it) {
    return it;
  }
  NekoAibo.prototype.getCats = function (text, type) {
    if (type === void 0)
      type = '';
    return this.getCatsWithMapper(text, type, NekoAibo$getCats$lambda);
  };
  NekoAibo.prototype.getCatsWithMapper = function (text, type, map) {
    if (type === void 0)
      type = '';
    var ti;
    var e = 0;
    var het = this.catCodeHead + type;
    var ent = CAT_END;
    var list = ArrayList_init_0();
    do {
      ti = indexOf(text, het, e);
      if (ti >= 0) {
        e = indexOf(text, ent, ti);
        if (e >= 0) {
          var startIndex = ti;
          var endIndex = e + 1 | 0;
          list.add_11rb$(map(text.substring(startIndex, endIndex)));
        } else {
          e = ti + 1 | 0;
        }
      }}
     while (ti >= 0 && e >= 0);
    return list;
  };
  NekoAibo.prototype.getParam = function (text, paramKey, index) {
    if (index === void 0)
      index = 0;
    return this.getParamWithType(text, '', paramKey, index);
  };
  NekoAibo.prototype.getParamWithType = function (text, type, paramKey, index) {
    if (type === void 0)
      type = '';
    if (index === void 0)
      index = 0;
    var catHead = this.catCodeHead + type;
    var catEnd = CAT_END;
    var catSpl = CAT_PS;
    var from = -1;
    var end = -1;
    var i = -1;
    do {
      from = indexOf(text, catHead, from + 1 | 0);
      if (from >= 0) {
        end = indexOf(text, catEnd, from);
        if (end >= 0) {
          i = i + 1 | 0;
        }}}
     while (from >= 0 && i < index);
    if (i === index) {
      var paramFind = ',' + paramKey + '=';
      var phi = indexOf(text, paramFind, from);
      if (phi < 0) {
        return null;
      }var startIndex = phi + paramFind.length | 0;
      var pei = indexOf(text, catSpl, startIndex);
      if (pei < 0 || pei > end) {
        pei = end;
      }if (startIndex > get_lastIndex(text) || startIndex > pei) {
        return null;
      }var endIndex = pei;
      return text.substring(startIndex, endIndex);
    } else {
      return null;
    }
  };
  NekoAibo.prototype.getCatIterWithType = function (text, type) {
    if (type === void 0)
      type = '';
    return new CatTextIterator(text, type);
  };
  NekoAibo.prototype.getCatKeyIter = function (code) {
    return new CatParamKeyIterator(code);
  };
  NekoAibo.prototype.getCatValueIter = function (code) {
    return new CatParamValueIterator(code);
  };
  NekoAibo.prototype.getCatKVIter = function (code) {
    return new CatParamKVIterator(code);
  };
  NekoAibo.prototype.getNekoList$default = function (text, type) {
    var iter = this.getCatIterWithType(text, type);
    var list = ArrayList_init_0();
    while (iter.hasNext()) {
      var element = iter.next();
      list.add_11rb$(Neko$Of_getInstance().of(element));
    }
    return list;
  };
  NekoAibo.prototype.getNekoList = function (text, type, callback$default) {
    if (type === void 0)
      type = '';
    return callback$default ? callback$default(text, type) : this.getNekoList$default(text, type);
  };
  NekoAibo.prototype.getNekoWithType$default = function (text, type, index) {
    var tmp$;
    tmp$ = this.getCatWithType(text, type, index);
    if (tmp$ == null) {
      return null;
    }var cat = tmp$;
    return Neko$Of_getInstance().of(cat);
  };
  NekoAibo.prototype.getNekoWithType = function (text, type, index, callback$default) {
    if (type === void 0)
      type = '';
    if (index === void 0)
      index = 0;
    return callback$default ? callback$default(text, type, index) : this.getNekoWithType$default(text, type, index);
  };
  NekoAibo.prototype.getNeko$default = function (text, index) {
    return this.getNekoWithType(text, '', index);
  };
  NekoAibo.prototype.getNeko = function (text, index, callback$default) {
    if (index === void 0)
      index = 0;
    return callback$default ? callback$default(text, index) : this.getNeko$default(text, index);
  };
  NekoAibo.prototype.removeCode_s8zq42$_0 = function (text, type, trim_0, ignoreEmpty, delimiter) {
    if (trim_0 === void 0)
      trim_0 = true;
    if (ignoreEmpty === void 0)
      ignoreEmpty = true;
    if (delimiter === void 0)
      delimiter = '';
    if (text.length === 0)
      return text;
    else {
      var sb = StringBuilder_init_0(text.length);
      var head = this.catCodeHead + type;
      var end = CAT_END;
      var hi = -1;
      var ei = -1;
      var nextHi;
      var sps = 0;
      var sub;
      var next;
      if (text.length < (head.length + end.length | 0)) {
        return text;
      }if (!contains(text, head)) {
        return text;
      }do {
        hi = hi + 1 | 0;
        hi = indexOf(text, head, hi);
        next = text.charCodeAt(hi + head.length | 0);
        if (type.length > 0 && (next !== 44 && !equals(String.fromCharCode(next), end))) {
          continue;
        }if (hi >= 0) {
          ei = indexOf(text, end, hi);
          if (ei > 0) {
            nextHi = indexOf(text, head, hi + 1 | 0);
            if (0 <= nextHi && nextHi < ei) {
              hi = nextHi;
            }if (hi > 0) {
              if (sps > 0) {
                sps = sps + 1 | 0;
              }var startIndex = sps;
              var endIndex = hi;
              sub = text.substring(startIndex, endIndex);
              var tmp$ = !ignoreEmpty;
              if (!tmp$) {
                var tmp$_0 = ignoreEmpty;
                if (tmp$_0) {
                  tmp$_0 = !isBlank(sub);
                }tmp$ = tmp$_0;
              }if (tmp$) {
                if (trim_0) {
                  var $receiver = sub;
                  var tmp$_1;
                  sub = trim(Kotlin.isCharSequence(tmp$_1 = $receiver) ? tmp$_1 : throwCCE()).toString();
                }if (sb.length > 0) {
                  sb.append_gw00v9$(delimiter);
                }sb.append_pdl1vj$(sub);
              }sps = ei;
            } else if (hi === 0) {
              sps = ei;
            }}}}
       while (hi >= 0 && ei > 0);
      if (sps !== get_lastIndex(text)) {
        var startIndex_0 = sps + 1 | 0;
        sub = text.substring(startIndex_0);
        var tmp$_2 = !ignoreEmpty;
        if (!tmp$_2) {
          var tmp$_3 = ignoreEmpty;
          if (tmp$_3) {
            tmp$_3 = !isBlank(sub);
          }tmp$_2 = tmp$_3;
        }if (tmp$_2) {
          if (trim_0) {
            var $receiver_0 = sub;
            var tmp$_4;
            sub = trim(Kotlin.isCharSequence(tmp$_4 = $receiver_0) ? tmp$_4 : throwCCE()).toString();
          }if (sb.length > 0) {
            sb.append_gw00v9$(delimiter);
          }sb.append_pdl1vj$(sub);
        }}return sb.toString();
    }
  };
  NekoAibo.prototype.remove = function (text, trim, ignoreEmpty, delimiter) {
    if (trim === void 0)
      trim = true;
    if (ignoreEmpty === void 0)
      ignoreEmpty = true;
    if (delimiter === void 0)
      delimiter = '';
    return this.removeCode_s8zq42$_0(text, '', trim, ignoreEmpty, delimiter);
  };
  NekoAibo.prototype.removeByType = function (text, type, trim, ignoreEmpty, delimiter) {
    if (trim === void 0)
      trim = true;
    if (ignoreEmpty === void 0)
      ignoreEmpty = true;
    if (delimiter === void 0)
      delimiter = '';
    return this.removeCode_s8zq42$_0(text, type, trim, ignoreEmpty, delimiter);
  };
  NekoAibo.prototype.containsFromText_phuumg$_0 = function (text, type, params) {
    var tmp$, tmp$_0;
    var head = this.catCodeHead + type;
    var end = CAT_END;
    if (text.length === 0)
      tmp$_0 = false;
    else {
      if (params.length === 0)
        tmp$_0 = contains(text, head);
      else {
        var startIndex = indexOf(text, head);
        while (startIndex >= 0) {
          var endIndex = indexOf(text, end, startIndex + 1 | 0);
          var startIndex_0 = startIndex;
          var subText = text.substring(startIndex_0, endIndex);
          var allFound = true;
          for (tmp$ = 0; tmp$ !== params.length; ++tmp$) {
            var param = params[tmp$];
            if (!contains(subText, param)) {
              allFound = false;
              break;
            }}
          if (allFound)
            return true;
          startIndex = indexOf(text, head, startIndex + 1 | 0);
        }
        tmp$_0 = false;
      }
    }
    return tmp$_0;
  };
  NekoAibo.prototype.contains = function (text, type, params) {
    return this.containsByParams(text, type, true, params.slice());
  };
  NekoAibo.prototype.containsByParams = function (text, type, encode, params) {
    if (type === void 0)
      type = '';
    if (encode === void 0)
      encode = true;
    if (params === void 0) {
      params = [];
    }var tmp$;
    if (!(params.length === 0)) {
      if (params.length % 2 !== 0) {
        throw IllegalArgumentException_init('params.size % 2 != 0, params must be key-value type, but size: ' + params.length);
      } else {
        var array = Array_0(params.length / 2 | 0);
        var tmp$_0;
        tmp$_0 = array.length - 1 | 0;
        for (var i = 0; i <= tmp$_0; i++) {
          var index = i * 2 | 0;
          var k = params[index];
          var receiver = params[index + 1 | 0];
          var v = encode ? enCatParam(receiver) : receiver;
          array[i] = k + CAT_KV + v;
        }
        tmp$ = array;
      }
    } else {
      tmp$ = [];
    }
    var paramArray = tmp$;
    return this.containsFromText_phuumg$_0(text, type, paramArray.slice());
  };
  NekoAibo.prototype.containsByKV = function (text, type, encode, params) {
    if (type === void 0)
      type = '';
    if (encode === void 0)
      encode = true;
    if (params === void 0) {
      params = [];
    }var tmp$;
    if (!(params.length === 0)) {
      var array = Array_0(params.length);
      var tmp$_0;
      tmp$_0 = array.length - 1 | 0;
      for (var i = 0; i <= tmp$_0; i++) {
        var k = params[i].key;
        var v = encode ? enCatParam(params[i].value) : params[i].value;
        array[i] = k + CAT_KV + v;
      }
      tmp$ = array;
    } else {
      tmp$ = [];
    }
    var paramArray = tmp$;
    return this.containsFromText_phuumg$_0(text, type, paramArray.slice());
  };
  NekoAibo.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'NekoAibo',
    interfaces: []
  };
  function NekoDsl() {
  }
  NekoDsl.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'NekoDsl',
    interfaces: [Annotation]
  };
  var NekoAtAll;
  var NekoRps;
  var NekoDice;
  var NekoShake;
  function WildcatCodeBuilder() {
  }
  function WildcatCodeBuilder$WildcatCodeBuilderKey() {
  }
  WildcatCodeBuilder$WildcatCodeBuilderKey.$metadata$ = {
    kind: Kind_INTERFACE,
    simpleName: 'WildcatCodeBuilderKey',
    interfaces: [CodeBuilder$CodeBuilderKey]
  };
  WildcatCodeBuilder.$metadata$ = {
    kind: Kind_INTERFACE,
    simpleName: 'WildcatCodeBuilder',
    interfaces: [CodeBuilder]
  };
  function LazyWildcatCodeBuilder() {
  }
  function LazyWildcatCodeBuilder$LazyWildcatCodeBuilderKey() {
  }
  LazyWildcatCodeBuilder$LazyWildcatCodeBuilderKey.$metadata$ = {
    kind: Kind_INTERFACE,
    simpleName: 'LazyWildcatCodeBuilderKey',
    interfaces: [LazyCodeBuilder$LazyCodeBuilderKey, WildcatCodeBuilder$WildcatCodeBuilderKey]
  };
  LazyWildcatCodeBuilder.$metadata$ = {
    kind: Kind_INTERFACE,
    simpleName: 'LazyWildcatCodeBuilder',
    interfaces: [LazyCodeBuilder, WildcatCodeBuilder]
  };
  function WildcatStringCodeBuilder(codeType, type, encode) {
    if (encode === void 0)
      encode = true;
    this.codeType_48ek5d$_0 = codeType;
    this.type_25tcia$_0 = type;
    this.encode_0 = encode;
    this.appender_0 = (new StringBuilder(CAT_HEAD)).append_pdl1vj$(this.type);
    this.builderKey_0 = new WildcatStringCodeBuilder$StringCodeBuilderKey(this);
    this.key_0 = null;
  }
  Object.defineProperty(WildcatStringCodeBuilder.prototype, 'codeType', {
    get: function () {
      return this.codeType_48ek5d$_0;
    }
  });
  Object.defineProperty(WildcatStringCodeBuilder.prototype, 'type', {
    get: function () {
      return this.type_25tcia$_0;
    }
  });
  WildcatStringCodeBuilder.prototype.key_61zpoe$ = function (key) {
    var $receiver = this.builderKey_0;
    this.key_0 = key;
    return $receiver;
  };
  WildcatStringCodeBuilder.prototype.build = function () {
    return this.appender_0.toString() + CAT_END;
  };
  function WildcatStringCodeBuilder$StringCodeBuilderKey($outer) {
    this.$outer = $outer;
  }
  WildcatStringCodeBuilder$StringCodeBuilderKey.prototype.value_s8jyv4$ = function (value) {
    var tmp$, tmp$_0, tmp$_1;
    var tmp$_2;
    if ((tmp$ = this.$outer.key_0) != null) {
      this.$outer;
      var this$WildcatStringCodeBuilder = this.$outer;
      var tmp$_3;
      this$WildcatStringCodeBuilder.appender_0.append_pdl1vj$(CAT_PS).append_pdl1vj$(tmp$).append_pdl1vj$(CAT_KV);
      if (value != null) {
        if (this$WildcatStringCodeBuilder.encode_0) {
          tmp$_3 = CatEncoder_getInstance().encodeParams(value.toString());
        } else
          tmp$_3 = value.toString();
        var valueString = tmp$_3;
        this$WildcatStringCodeBuilder.appender_0.append_pdl1vj$(valueString);
      }tmp$_2 = this$WildcatStringCodeBuilder;
    } else
      tmp$_2 = null;
    var tmp$_4;
    if ((tmp$_0 = tmp$_2) != null) {
      this.$outer;
      this.$outer.key_0 = null;
      tmp$_4 = tmp$_0;
    } else
      tmp$_4 = null;
    tmp$_1 = tmp$_4;
    if (tmp$_1 == null) {
      throw new NullPointerException("The 'key' has not been specified.");
    }return tmp$_1;
  };
  WildcatStringCodeBuilder$StringCodeBuilderKey.prototype.emptyValue = function () {
    return this.value_s8jyv4$(null);
  };
  WildcatStringCodeBuilder$StringCodeBuilderKey.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'StringCodeBuilderKey',
    interfaces: [WildcatCodeBuilder$WildcatCodeBuilderKey]
  };
  WildcatStringCodeBuilder.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'WildcatStringCodeBuilder',
    interfaces: [WildcatCodeBuilder]
  };
  function NoraNekoBuilder(codeType, type) {
    this.codeType_58zkga$_0 = codeType;
    this.type_v3k4on$_0 = type;
    this.params_0 = LinkedHashMap_init();
    this.key_0 = null;
    this.builderKey_0 = new NoraNekoBuilder$NoraNekoBuilderKey(this);
  }
  Object.defineProperty(NoraNekoBuilder.prototype, 'codeType', {
    get: function () {
      return this.codeType_58zkga$_0;
    }
  });
  Object.defineProperty(NoraNekoBuilder.prototype, 'type', {
    get: function () {
      return this.type_v3k4on$_0;
    }
  });
  NoraNekoBuilder.prototype.key_61zpoe$ = function (key) {
    var $receiver = this.builderKey_0;
    this.key_0 = key;
    return $receiver;
  };
  NoraNekoBuilder.prototype.build = function () {
    return MapNeko$Of_getInstance().byMap_8foi92$(this.type, toMap(this.params_0));
  };
  function NoraNekoBuilder$NoraNekoBuilderKey($outer) {
    this.$outer = $outer;
  }
  NoraNekoBuilder$NoraNekoBuilderKey.prototype.value_s8jyv4$ = function (value) {
    var tmp$, tmp$_0, tmp$_1;
    var tmp$_2;
    if ((tmp$ = this.$outer.key_0) != null) {
      this.$outer;
      var this$NoraNekoBuilder = this.$outer;
      var tmp$_3;
      var $receiver = this$NoraNekoBuilder.params_0;
      var value_0 = (tmp$_3 = value != null ? value.toString() : null) != null ? tmp$_3 : '';
      $receiver.put_xwzc9p$(tmp$, value_0);
      tmp$_2 = this$NoraNekoBuilder;
    } else
      tmp$_2 = null;
    var tmp$_4;
    if ((tmp$_0 = tmp$_2) != null) {
      this.$outer;
      this.$outer.key_0 = null;
      tmp$_4 = tmp$_0;
    } else
      tmp$_4 = null;
    tmp$_1 = tmp$_4;
    if (tmp$_1 == null) {
      throw new NullPointerException("The 'key' has not been specified.");
    }return tmp$_1;
  };
  NoraNekoBuilder$NoraNekoBuilderKey.prototype.emptyValue = function () {
    return this.value_s8jyv4$('');
  };
  NoraNekoBuilder$NoraNekoBuilderKey.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'NoraNekoBuilderKey',
    interfaces: [WildcatCodeBuilder$WildcatCodeBuilderKey]
  };
  NoraNekoBuilder.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'NoraNekoBuilder',
    interfaces: [WildcatCodeBuilder]
  };
  function LazyNoraNekoBuilder(codeType, type) {
    this.codeType_9khl56$_0 = codeType;
    this.type_4yk3q5$_0 = type;
    this.params_0 = new MutableLazyMap();
    this.key_0 = null;
    this.builderKey_0 = new LazyNoraNekoBuilder$LazyNoraNekoBuilderKey(this);
  }
  Object.defineProperty(LazyNoraNekoBuilder.prototype, 'codeType', {
    get: function () {
      return this.codeType_9khl56$_0;
    }
  });
  Object.defineProperty(LazyNoraNekoBuilder.prototype, 'type', {
    get: function () {
      return this.type_4yk3q5$_0;
    }
  });
  LazyNoraNekoBuilder.prototype.key_61zpoe$ = function (key) {
    var $receiver = this.builderKey_0;
    this.key_0 = key;
    return $receiver;
  };
  LazyNoraNekoBuilder.prototype.build = function () {
    return MapNeko$Of_getInstance().byMap_8foi92$(this.type, toMap(this.params_0));
  };
  function LazyNoraNekoBuilder$LazyNoraNekoBuilderKey($outer) {
    this.$outer = $outer;
  }
  LazyNoraNekoBuilder$LazyNoraNekoBuilderKey.prototype.value_s8jyv4$ = function (value) {
    var tmp$, tmp$_0, tmp$_1;
    var tmp$_2;
    if ((tmp$ = this.$outer.key_0) != null) {
      this.$outer;
      var this$LazyNoraNekoBuilder = this.$outer;
      var tmp$_3;
      var $receiver = this$LazyNoraNekoBuilder.params_0;
      var value_0 = (tmp$_3 = value != null ? value.toString() : null) != null ? tmp$_3 : '';
      $receiver.put_xwzc9p$(tmp$, value_0);
      tmp$_2 = this$LazyNoraNekoBuilder;
    } else
      tmp$_2 = null;
    var tmp$_4;
    if ((tmp$_0 = tmp$_2) != null) {
      this.$outer;
      this.$outer.key_0 = null;
      tmp$_4 = tmp$_0;
    } else
      tmp$_4 = null;
    tmp$_1 = tmp$_4;
    if (tmp$_1 == null) {
      throw new NullPointerException("The 'key' has not been specified.");
    }return tmp$_1;
  };
  function LazyNoraNekoBuilder$LazyNoraNekoBuilderKey$value$lambda$lambda(closure$value) {
    return function () {
      var tmp$, tmp$_0;
      return (tmp$_0 = (tmp$ = closure$value()) != null ? tmp$.toString() : null) != null ? tmp$_0 : '';
    };
  }
  LazyNoraNekoBuilder$LazyNoraNekoBuilderKey.prototype.value_nq59yw$ = function (value) {
    var tmp$, tmp$_0, tmp$_1;
    var tmp$_2;
    if ((tmp$ = this.$outer.key_0) != null) {
      this.$outer;
      var this$LazyNoraNekoBuilder = this.$outer;
      this$LazyNoraNekoBuilder.params_0.put_kpg1aj$(tmp$, LazyNoraNekoBuilder$LazyNoraNekoBuilderKey$value$lambda$lambda(value));
      tmp$_2 = this$LazyNoraNekoBuilder;
    } else
      tmp$_2 = null;
    var tmp$_3;
    if ((tmp$_0 = tmp$_2) != null) {
      this.$outer;
      this.$outer.key_0 = null;
      tmp$_3 = tmp$_0;
    } else
      tmp$_3 = null;
    tmp$_1 = tmp$_3;
    if (tmp$_1 == null) {
      throw new NullPointerException("The 'key' has not been specified.");
    }return tmp$_1;
  };
  LazyNoraNekoBuilder$LazyNoraNekoBuilderKey.prototype.emptyValue = function () {
    return this.value_s8jyv4$('');
  };
  LazyNoraNekoBuilder$LazyNoraNekoBuilderKey.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'LazyNoraNekoBuilderKey',
    interfaces: [LazyWildcatCodeBuilder$LazyWildcatCodeBuilderKey]
  };
  LazyNoraNekoBuilder.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'LazyNoraNekoBuilder',
    interfaces: [LazyWildcatCodeBuilder]
  };
  function WildcatCodeUtil(codeType) {
    WildcatCodeUtil$Companion_getInstance();
    NekoAibo.call(this, codeType);
    this.stringTemplate_6nkoun$_0 = new WildcatStringTemplate(codeType, this);
    this.nekoTemplate_m5s28p$_0 = new NoraNekoTemplate(codeType, this.stringTemplate);
  }
  function WildcatCodeUtil$Companion() {
    WildcatCodeUtil$Companion_instance = this;
  }
  WildcatCodeUtil$Companion.prototype.getInstance_61zpoe$ = function (codeType) {
    return new WildcatCodeUtil(codeType);
  };
  WildcatCodeUtil$Companion.$metadata$ = {
    kind: Kind_OBJECT,
    simpleName: 'Companion',
    interfaces: []
  };
  var WildcatCodeUtil$Companion_instance = null;
  function WildcatCodeUtil$Companion_getInstance() {
    if (WildcatCodeUtil$Companion_instance === null) {
      new WildcatCodeUtil$Companion();
    }return WildcatCodeUtil$Companion_instance;
  }
  Object.defineProperty(WildcatCodeUtil.prototype, 'stringTemplate', {
    configurable: true,
    get: function () {
      return this.stringTemplate_6nkoun$_0;
    }
  });
  Object.defineProperty(WildcatCodeUtil.prototype, 'nekoTemplate', {
    configurable: true,
    get: function () {
      return this.nekoTemplate_m5s28p$_0;
    }
  });
  WildcatCodeUtil.prototype.getStringCodeBuilder$default = function (type, encode) {
    return new WildcatStringCodeBuilder(this.codeType, type, encode);
  };
  WildcatCodeUtil.prototype.getNekoBuilder = function (type, encode) {
    return new NoraNekoBuilder(this.codeType, type);
  };
  WildcatCodeUtil.prototype.getLazyNekoBuilder = function (type, encode) {
    return new LazyNoraNekoBuilder(this.codeType, type);
  };
  WildcatCodeUtil.prototype.toNeko = function (type) {
    return new EmptyNoraNeko(this.codeType, type);
  };
  function WildcatCodeUtil$toNeko$lambda(it) {
    return to(it.key, toString(it.value));
  }
  WildcatCodeUtil.prototype.toNekoByMap = function (type, params) {
    var tmp$;
    if (params.isEmpty()) {
      tmp$ = this.toNeko(type);
    } else {
      tmp$ = MapNoraNeko$Of_getInstance().byMap_hq2gfh$(this.codeType, type, toMap_1(map(asSequence(params), WildcatCodeUtil$toNeko$lambda)));
    }
    return tmp$;
  };
  function WildcatCodeUtil$toNeko$lambda_0(it) {
    return to(it.key, toString(it.value));
  }
  WildcatCodeUtil.prototype.toNekoByKV = function (type, params) {
    var tmp$;
    if (params.length === 0) {
      tmp$ = this.toNeko(type);
    } else {
      tmp$ = MapNoraNeko$Of_getInstance().byMap_hq2gfh$(this.codeType, type, toMap_1(map(asSequence_1(params), WildcatCodeUtil$toNeko$lambda_0)));
    }
    return tmp$;
  };
  WildcatCodeUtil.prototype.toNekoByParams$default = function (type, encode, paramText) {
    var tmp$;
    if (paramText.length === 0) {
      tmp$ = this.toNeko(type);
    } else {
      if (encode) {
        tmp$ = NoraNyanko$Of_getInstance().byCode_61zpoe$(this.toCatByParams(type, encode, paramText.slice()));
      } else {
        tmp$ = MapNoraNeko$Of_getInstance().byParamString_8m11s9$(this.codeType, type, paramText.slice());
      }
    }
    return tmp$;
  };
  WildcatCodeUtil.prototype.getNekoWithType$default = function (text, type, index) {
    var tmp$;
    tmp$ = this.getCatWithType(text, type, index);
    if (tmp$ == null) {
      return null;
    }var cat = tmp$;
    return Neko$Of_getInstance().of(cat);
  };
  WildcatCodeUtil.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'WildcatCodeUtil',
    interfaces: [NekoAibo]
  };
  function WildcatTemplate() {
  }
  WildcatTemplate.$metadata$ = {
    kind: Kind_INTERFACE,
    simpleName: 'WildcatTemplate',
    interfaces: [CodeTemplate]
  };
  function WildcatStringTemplate(codeType, utilInstance) {
    this.codeType = codeType;
    this.utilInstance_0 = utilInstance;
    this.atAll_rl7xv2$_0 = lazy(LazyThreadSafetyMode.PUBLICATION, WildcatStringTemplate$atAll$lambda(this));
    this.rps_v08lq1$_0 = lazy(LazyThreadSafetyMode.PUBLICATION, WildcatStringTemplate$rps$lambda(this));
    this.dice_x0c68h$_0 = lazy(LazyThreadSafetyMode.PUBLICATION, WildcatStringTemplate$dice$lambda(this));
    this.shake_z341gq$_0 = lazy(LazyThreadSafetyMode.PUBLICATION, WildcatStringTemplate$shake$lambda(this));
  }
  WildcatStringTemplate.prototype.at_61zpoe$ = function (code) {
    return this.utilInstance_0.toCatByParams('at', false, ['code=' + enCatParam(code)]);
  };
  WildcatStringTemplate.prototype.at_s8cxhz$ = function (code) {
    return this.utilInstance_0.toCatByParams('at', false, ['code=' + code.toString()]);
  };
  Object.defineProperty(WildcatStringTemplate.prototype, 'atAll_0', {
    configurable: true,
    get: function () {
      return this.atAll_rl7xv2$_0.value;
    }
  });
  WildcatStringTemplate.prototype.atAll = function () {
    return this.atAll_0;
  };
  WildcatStringTemplate.prototype.face_61zpoe$ = function (id) {
    return this.utilInstance_0.toCatByParams('face', false, ['id=' + enCatParam(id)]);
  };
  WildcatStringTemplate.prototype.face_s8cxhz$ = function (id) {
    return this.utilInstance_0.toCatByParams('face', false, ['id=' + id.toString()]);
  };
  WildcatStringTemplate.prototype.bface_61zpoe$ = function (id) {
    return this.utilInstance_0.toCatByParams('bface', false, ['id=' + enCatParam(id)]);
  };
  WildcatStringTemplate.prototype.bface_s8cxhz$ = function (id) {
    return this.utilInstance_0.toCatByParams('bface', false, ['id=' + id.toString()]);
  };
  WildcatStringTemplate.prototype.sface_61zpoe$ = function (id) {
    return this.utilInstance_0.toCatByParams('sface', false, ['id=' + enCatParam(id)]);
  };
  WildcatStringTemplate.prototype.sface_s8cxhz$ = function (id) {
    return this.utilInstance_0.toCatByParams('sface', false, ['id=' + id.toString()]);
  };
  WildcatStringTemplate.prototype.image_ivxn3r$ = function (file, flash) {
    return this.utilInstance_0.toCatByParams('image', false, ['file=' + enCatParam(file), 'flash=' + flash]);
  };
  WildcatStringTemplate.prototype.image_61zpoe$ = function (file) {
    return this.utilInstance_0.toCatByParams('image', false, ['file=' + enCatParam(file)]);
  };
  WildcatStringTemplate.prototype.record_ivxn3r$ = function (file, magic) {
    return this.utilInstance_0.toCatByParams('record', false, ['file=' + enCatParam(file), 'magic=' + magic]);
  };
  WildcatStringTemplate.prototype.record_61zpoe$ = function (file) {
    return this.utilInstance_0.toCatByParams('record', false, ['file=' + enCatParam(file)]);
  };
  WildcatStringTemplate.prototype.rps_61zpoe$ = function (type) {
    return this.utilInstance_0.toCatByParams('rps', false, ['type=' + enCatParam(type)]);
  };
  WildcatStringTemplate.prototype.rps_za3lpa$ = function (type) {
    return this.utilInstance_0.toCatByParams('rps', false, ['type=' + type]);
  };
  Object.defineProperty(WildcatStringTemplate.prototype, 'rps_0', {
    configurable: true,
    get: function () {
      return this.rps_v08lq1$_0.value;
    }
  });
  WildcatStringTemplate.prototype.rps = function () {
    return this.rps_0;
  };
  Object.defineProperty(WildcatStringTemplate.prototype, 'dice_0', {
    configurable: true,
    get: function () {
      return this.dice_x0c68h$_0.value;
    }
  });
  WildcatStringTemplate.prototype.dice = function () {
    return this.dice_0;
  };
  WildcatStringTemplate.prototype.dice_61zpoe$ = function (type) {
    return this.utilInstance_0.toCatByParams('dice', false, ['type=' + enCatParam(type)]);
  };
  WildcatStringTemplate.prototype.dice_za3lpa$ = function (type) {
    return this.utilInstance_0.toCatByParams('dice', false, ['type=' + type]);
  };
  WildcatStringTemplate.prototype.shake = function () {
    return this.shake_0;
  };
  Object.defineProperty(WildcatStringTemplate.prototype, 'shake_0', {
    configurable: true,
    get: function () {
      return this.shake_z341gq$_0.value;
    }
  });
  WildcatStringTemplate.prototype.music_buzeal$ = function (type, id, style) {
    var tmp$;
    return this.utilInstance_0.toCatByParams('music', false, ['type=' + enCatParam(type), 'id=' + enCatParam(id), 'style=' + ((tmp$ = style != null ? enCatParam(style) : null) != null ? tmp$ : '')]);
  };
  WildcatStringTemplate.prototype.music_puj7f4$ = function (type, id) {
    return this.utilInstance_0.toCatByParams('music', false, ['type=' + enCatParam(type), 'id=' + enCatParam(id)]);
  };
  WildcatStringTemplate.prototype.customMusic_nfi43m$ = function (url, audio, title, content, image) {
    var tmp$, tmp$_0;
    return this.utilInstance_0.toCatByParams('music', false, ['type=custom', 'url=' + enCatParam(url), 'audio=' + enCatParam(audio), 'title=' + enCatParam(title), 'content=' + ((tmp$ = content != null ? enCatParam(content) : null) != null ? tmp$ : ''), 'image=' + ((tmp$_0 = image != null ? enCatParam(image) : null) != null ? tmp$_0 : '')]);
  };
  WildcatStringTemplate.prototype.customMusic_6hosri$ = function (url, audio, title) {
    return this.utilInstance_0.toCatByParams('music', false, ['type=custom', 'url=' + enCatParam(url), 'audio=' + enCatParam(audio), 'title=' + enCatParam(title)]);
  };
  WildcatStringTemplate.prototype.share_kc1kmo$ = function (url, title, content, image) {
    var tmp$, tmp$_0;
    return this.utilInstance_0.toCatByParams('share', false, ['url=' + enCatParam(url), 'title=' + enCatParam(title), 'content=' + ((tmp$ = content != null ? enCatParam(content) : null) != null ? tmp$ : ''), 'image=' + ((tmp$_0 = image != null ? enCatParam(image) : null) != null ? tmp$_0 : '')]);
  };
  WildcatStringTemplate.prototype.share_puj7f4$ = function (url, title) {
    return this.utilInstance_0.toCatByParams('share', false, ['url=' + enCatParam(url), 'title=' + enCatParam(title)]);
  };
  function WildcatStringTemplate$atAll$lambda(this$WildcatStringTemplate) {
    return function () {
      return this$WildcatStringTemplate.utilInstance_0.toCatByParams('at', false, ['all=true']);
    };
  }
  function WildcatStringTemplate$rps$lambda(this$WildcatStringTemplate) {
    return function () {
      return this$WildcatStringTemplate.utilInstance_0.toCat('rps');
    };
  }
  function WildcatStringTemplate$dice$lambda(this$WildcatStringTemplate) {
    return function () {
      return this$WildcatStringTemplate.utilInstance_0.toCat('dice');
    };
  }
  function WildcatStringTemplate$shake$lambda(this$WildcatStringTemplate) {
    return function () {
      return this$WildcatStringTemplate.utilInstance_0.toCat('shake');
    };
  }
  WildcatStringTemplate.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'WildcatStringTemplate',
    interfaces: [WildcatTemplate]
  };
  function NoraNekoTemplate(codeType, wildcatStringTemplate) {
    this.codeType = codeType;
    this.wildcatStringTemplate_0 = wildcatStringTemplate;
    this.atAll_ybbw5m$_0 = lazy(LazyThreadSafetyMode.PUBLICATION, NoraNekoTemplate$atAll$lambda(this));
    this.rps_p5ryxp$_0 = lazy(LazyThreadSafetyMode.PUBLICATION, NoraNekoTemplate$rps$lambda(this));
    this.dice_15bmph$_0 = lazy(LazyThreadSafetyMode.PUBLICATION, NoraNekoTemplate$dice$lambda(this));
    this.shake_sd0366$_0 = lazy(LazyThreadSafetyMode.PUBLICATION, NoraNekoTemplate$shake$lambda(this));
  }
  NoraNekoTemplate.prototype.at_61zpoe$ = function (code) {
    return NoraNyanko$Of_getInstance().byCode_61zpoe$(this.wildcatStringTemplate_0.at_61zpoe$(code));
  };
  NoraNekoTemplate.prototype.at_s8cxhz$ = function (code) {
    return NoraNyanko$Of_getInstance().byCode_61zpoe$(this.wildcatStringTemplate_0.at_s8cxhz$(code));
  };
  Object.defineProperty(NoraNekoTemplate.prototype, 'atAll_0', {
    configurable: true,
    get: function () {
      return this.atAll_ybbw5m$_0.value;
    }
  });
  NoraNekoTemplate.prototype.atAll = function () {
    return this.atAll_0;
  };
  NoraNekoTemplate.prototype.face_61zpoe$ = function (id) {
    return NoraNyanko$Of_getInstance().byCode_61zpoe$(this.wildcatStringTemplate_0.face_61zpoe$(id));
  };
  NoraNekoTemplate.prototype.face_s8cxhz$ = function (id) {
    return NoraNyanko$Of_getInstance().byCode_61zpoe$(this.wildcatStringTemplate_0.face_s8cxhz$(id));
  };
  NoraNekoTemplate.prototype.bface_61zpoe$ = function (id) {
    return NoraNyanko$Of_getInstance().byCode_61zpoe$(this.wildcatStringTemplate_0.bface_61zpoe$(id));
  };
  NoraNekoTemplate.prototype.bface_s8cxhz$ = function (id) {
    return NoraNyanko$Of_getInstance().byCode_61zpoe$(this.wildcatStringTemplate_0.bface_s8cxhz$(id));
  };
  NoraNekoTemplate.prototype.sface_61zpoe$ = function (id) {
    return NoraNyanko$Of_getInstance().byCode_61zpoe$(this.wildcatStringTemplate_0.sface_61zpoe$(id));
  };
  NoraNekoTemplate.prototype.sface_s8cxhz$ = function (id) {
    return NoraNyanko$Of_getInstance().byCode_61zpoe$(this.wildcatStringTemplate_0.sface_s8cxhz$(id));
  };
  NoraNekoTemplate.prototype.image_ivxn3r$ = function (file, flash) {
    return NoraNyanko$Of_getInstance().byCode_61zpoe$(this.wildcatStringTemplate_0.image_ivxn3r$(file, flash));
  };
  NoraNekoTemplate.prototype.image_61zpoe$ = function (file) {
    return NoraNyanko$Of_getInstance().byCode_61zpoe$(this.wildcatStringTemplate_0.image_61zpoe$(file));
  };
  NoraNekoTemplate.prototype.record_ivxn3r$ = function (file, magic) {
    return NoraNyanko$Of_getInstance().byCode_61zpoe$(this.wildcatStringTemplate_0.record_ivxn3r$(file, magic));
  };
  NoraNekoTemplate.prototype.record_61zpoe$ = function (file) {
    return NoraNyanko$Of_getInstance().byCode_61zpoe$(this.wildcatStringTemplate_0.record_61zpoe$(file));
  };
  NoraNekoTemplate.prototype.rps_61zpoe$ = function (type) {
    return NoraNyanko$Of_getInstance().byCode_61zpoe$(this.wildcatStringTemplate_0.rps_61zpoe$(type));
  };
  NoraNekoTemplate.prototype.rps_za3lpa$ = function (type) {
    return NoraNyanko$Of_getInstance().byCode_61zpoe$(this.wildcatStringTemplate_0.rps_za3lpa$(type));
  };
  Object.defineProperty(NoraNekoTemplate.prototype, 'rps_0', {
    configurable: true,
    get: function () {
      return this.rps_p5ryxp$_0.value;
    }
  });
  NoraNekoTemplate.prototype.rps = function () {
    return this.rps_0;
  };
  Object.defineProperty(NoraNekoTemplate.prototype, 'dice_0', {
    configurable: true,
    get: function () {
      return this.dice_15bmph$_0.value;
    }
  });
  NoraNekoTemplate.prototype.dice = function () {
    return this.dice_0;
  };
  NoraNekoTemplate.prototype.dice_61zpoe$ = function (type) {
    return NoraNyanko$Of_getInstance().byCode_61zpoe$(this.wildcatStringTemplate_0.dice_61zpoe$(type));
  };
  NoraNekoTemplate.prototype.dice_za3lpa$ = function (type) {
    return NoraNyanko$Of_getInstance().byCode_61zpoe$(this.wildcatStringTemplate_0.dice_za3lpa$(type));
  };
  Object.defineProperty(NoraNekoTemplate.prototype, 'shake_0', {
    configurable: true,
    get: function () {
      return this.shake_sd0366$_0.value;
    }
  });
  NoraNekoTemplate.prototype.shake = function () {
    return this.shake_0;
  };
  NoraNekoTemplate.prototype.music_buzeal$ = function (type, id, style) {
    return NoraNyanko$Of_getInstance().byCode_61zpoe$(this.wildcatStringTemplate_0.music_buzeal$(type, id, style));
  };
  NoraNekoTemplate.prototype.customMusic_nfi43m$ = function (url, audio, title, content, image) {
    return NoraNyanko$Of_getInstance().byCode_61zpoe$(this.wildcatStringTemplate_0.customMusic_nfi43m$(url, audio, title, content, image));
  };
  NoraNekoTemplate.prototype.customMusic_6hosri$ = function (url, audio, title) {
    return NoraNyanko$Of_getInstance().byCode_61zpoe$(this.wildcatStringTemplate_0.customMusic_6hosri$(url, audio, title));
  };
  NoraNekoTemplate.prototype.share_kc1kmo$ = function (url, title, content, image) {
    return NoraNyanko$Of_getInstance().byCode_61zpoe$(this.wildcatStringTemplate_0.share_kc1kmo$(url, title, content, image));
  };
  NoraNekoTemplate.prototype.share_puj7f4$ = function (url, title) {
    return NoraNyanko$Of_getInstance().byCode_61zpoe$(this.wildcatStringTemplate_0.share_puj7f4$(url, title));
  };
  function NoraNekoTemplate$atAll$lambda(this$NoraNekoTemplate) {
    return function () {
      return NoraNyanko$Of_getInstance().byCode_61zpoe$(this$NoraNekoTemplate.wildcatStringTemplate_0.atAll());
    };
  }
  function NoraNekoTemplate$rps$lambda(this$NoraNekoTemplate) {
    return function () {
      return NoraNyanko$Of_getInstance().byCode_61zpoe$(this$NoraNekoTemplate.wildcatStringTemplate_0.rps());
    };
  }
  function NoraNekoTemplate$dice$lambda(this$NoraNekoTemplate) {
    return function () {
      return NoraNyanko$Of_getInstance().byCode_61zpoe$(this$NoraNekoTemplate.wildcatStringTemplate_0.dice());
    };
  }
  function NoraNekoTemplate$shake$lambda(this$NoraNekoTemplate) {
    return function () {
      return NoraNyanko$Of_getInstance().byCode_61zpoe$(this$NoraNekoTemplate.wildcatStringTemplate_0.shake());
    };
  }
  NoraNekoTemplate.$metadata$ = {
    kind: Kind_CLASS,
    simpleName: 'NoraNekoTemplate',
    interfaces: [WildcatTemplate]
  };
  var package$catcode = _.catcode || (_.catcode = {});
  Object.defineProperty(package$catcode, 'CAT_KV_SPLIT_ARRAY_8be2vx$', {
    get: function () {
      return CAT_KV_SPLIT_ARRAY;
    }
  });
  Object.defineProperty(package$catcode, 'CAT_PS_SPLIT_ARRAY_8be2vx$', {
    get: function () {
      return CAT_PS_SPLIT_ARRAY;
    }
  });
  Object.defineProperty(package$catcode, 'CatDecoder', {
    get: CatDecoder_getInstance
  });
  package$catcode.deCatParam_pdl1vz$ = deCatParam;
  package$catcode.deCatText_pdl1vz$ = deCatText;
  Object.defineProperty(package$catcode, 'CatEncoder', {
    get: CatEncoder_getInstance
  });
  package$catcode.enCatParam_pdl1vz$ = enCatParam;
  package$catcode.enCatText_pdl1vz$ = enCatText;
  Object.defineProperty(package$catcode, 'CatCodeUtil', {
    get: CatCodeUtil_getInstance
  });
  package$catcode.BaseCatIterator = BaseCatIterator;
  package$catcode.CatTextIterator = CatTextIterator;
  package$catcode.CatParamKeyIterator = CatParamKeyIterator;
  package$catcode.CatParamValueIterator = CatParamValueIterator;
  package$catcode.CatParamKVIterator = CatParamKVIterator;
  package$catcode.CatParamEntryIterator = CatParamEntryIterator;
  package$catcode.KqEntry = KqEntry;
  Object.defineProperty(CatKV, 'KV', {
    get: CatKV$KV_getInstance
  });
  package$catcode.CatKV = CatKV;
  package$catcode.cTo_ujzrz7$ = cTo;
  package$catcode.toPair_e2eipd$ = toPair;
  package$catcode.toKV_n48mvm$ = toKV;
  package$catcode.toPair_nqltyk$ = toPair_0;
  CodeBuilder.CodeBuilderKey = CodeBuilder$CodeBuilderKey;
  package$catcode.CodeBuilder = CodeBuilder;
  LazyCodeBuilder.LazyCodeBuilderKey = LazyCodeBuilder$LazyCodeBuilderKey;
  package$catcode.LazyCodeBuilder = LazyCodeBuilder;
  package$catcode.StringCodeBuilder = StringCodeBuilder;
  package$catcode.NekoBuilder = NekoBuilder;
  package$catcode.LazyNekoBuilder = LazyNekoBuilder;
  $$importsForInline$$.CatCode = _;
  Object.defineProperty(LazyMapNeko, 'Of', {
    get: LazyMapNeko$Of_getInstance
  });
  var package$codes = package$catcode.codes || (package$catcode.codes = {});
  package$codes.LazyMapNeko_init_61zpoe$ = LazyMapNeko_init;
  package$codes.LazyMapNeko_init_mvjluj$ = LazyMapNeko_init_0;
  package$codes.LazyMapNeko_init_cbjnkd$ = LazyMapNeko_init_1;
  package$codes.LazyMapNeko_init_60y5e1$ = LazyMapNeko_init_2;
  package$codes.LazyMapNeko = LazyMapNeko;
  package$codes.LazyMutableMapNeko_init_61zpoe$ = LazyMutableMapNeko_init;
  package$codes.LazyMutableMapNeko_init_mvjluj$ = LazyMutableMapNeko_init_0;
  package$codes.LazyMutableMapNeko_init_cbjnkd$ = LazyMutableMapNeko_init_1;
  package$codes.LazyMutableMapNeko_init_60y5e1$ = LazyMutableMapNeko_init_2;
  package$codes.LazyMutableMapNeko = LazyMutableMapNeko;
  Object.defineProperty(LazyMapNoraNeko, 'Of', {
    get: LazyMapNoraNeko$Of_getInstance
  });
  package$codes.LazyMapNoraNeko_init_puj7f4$ = LazyMapNoraNeko_init;
  package$codes.LazyMapNoraNeko_init_hq2gfh$ = LazyMapNoraNeko_init_0;
  package$codes.LazyMapNoraNeko_init_qz99sv$ = LazyMapNoraNeko_init_1;
  package$codes.LazyMapNoraNeko_init_8m11s9$ = LazyMapNoraNeko_init_2;
  package$codes.LazyMapNoraNeko = LazyMapNoraNeko;
  package$codes.LazyMutableMapNoraNeko_init_puj7f4$ = LazyMutableMapNoraNeko_init;
  package$codes.LazyMutableMapNoraNeko_init_hq2gfh$ = LazyMutableMapNoraNeko_init_0;
  package$codes.LazyMutableMapNoraNeko_init_qz99sv$ = LazyMutableMapNoraNeko_init_1;
  package$codes.LazyMutableMapNoraNeko_init_8m11s9$ = LazyMutableMapNoraNeko_init_2;
  package$codes.LazyMutableMapNoraNeko = LazyMutableMapNoraNeko;
  Object.defineProperty(MapNeko, 'Of', {
    get: MapNeko$Of_getInstance
  });
  package$codes.MapNeko_init_61zpoe$ = MapNeko_init;
  package$codes.MapNeko_init_mvjluj$ = MapNeko_init_0;
  package$codes.MapNeko_init_cbjnkd$ = MapNeko_init_1;
  package$codes.MapNeko_init_60y5e1$ = MapNeko_init_2;
  package$codes.MapNeko = MapNeko;
  package$codes.MutableMapNeko_init_61zpoe$ = MutableMapNeko_init;
  package$codes.MutableMapNeko_init_mvjluj$ = MutableMapNeko_init_0;
  package$codes.MutableMapNeko_init_cbjnkd$ = MutableMapNeko_init_1;
  package$codes.MutableMapNeko_init_60y5e1$ = MutableMapNeko_init_2;
  package$codes.MutableMapNeko = MutableMapNeko;
  Object.defineProperty(MapNoraNeko, 'Of', {
    get: MapNoraNeko$Of_getInstance
  });
  package$codes.MapNoraNeko_init_puj7f4$ = MapNoraNeko_init;
  package$codes.MapNoraNeko_init_hq2gfh$ = MapNoraNeko_init_0;
  package$codes.MapNoraNeko_init_qz99sv$ = MapNoraNeko_init_1;
  package$codes.MapNoraNeko_init_8m11s9$ = MapNoraNeko_init_2;
  package$codes.MapNoraNeko = MapNoraNeko;
  package$codes.MutableMapNoraNeko_init_puj7f4$ = MutableMapNoraNeko_init;
  package$codes.MutableMapNoraNeko_init_hq2gfh$ = MutableMapNoraNeko_init_0;
  package$codes.MutableMapNoraNeko_init_qz99sv$ = MutableMapNoraNeko_init_1;
  package$codes.MutableMapNoraNeko_init_8m11s9$ = MutableMapNoraNeko_init_2;
  package$codes.MutableMapNoraNeko = MutableMapNoraNeko;
  Object.defineProperty(NoraNyanko, 'Of', {
    get: NoraNyanko$Of_getInstance
  });
  package$codes.NoraNyanko = NoraNyanko;
  Object.defineProperty(Nyanko, 'Of', {
    get: Nyanko$Of_getInstance
  });
  package$codes.Nyanko = Nyanko;
  package$catcode.CodeTemplate = CodeTemplate;
  Object.defineProperty(package$catcode, 'StringTemplate', {
    get: StringTemplate_getInstance
  });
  Object.defineProperty(package$catcode, 'NekoTemplate', {
    get: NekoTemplate_getInstance
  });
  var package$collection = package$catcode.collection || (package$catcode.collection = {});
  package$collection.LazyMap = LazyMap;
  package$collection.toLazyMap_go3l1a$ = toLazyMap;
  package$collection.toMutableLazyMap_go3l1a$ = toMutableLazyMap;
  package$collection.MutableLazyMap = MutableLazyMap;
  package$collection.asLazyMap_66tjem$ = asLazyMap;
  package$collection.toLazyMap_66tjem$ = toLazyMap_0;
  package$collection.toMutableMap_fxkise$ = toMutableMap_0;
  package$collection.NekoMap = NekoMap;
  package$collection.set_hbgz0w$ = set;
  package$collection.NekoMapDelegation = NekoMapDelegation;
  package$collection.nekoToMap_aopz8h$ = nekoToMap;
  package$collection.mapDelegation_6ieroo$ = mapDelegation;
  package$collection.MutableNekoMapDelegation = MutableNekoMapDelegation;
  package$collection.MutableNekoMap = MutableNekoMap;
  package$collection.lazyValue_mh5how$ = lazyValue;
  package$collection.SimpleEntry = SimpleEntry;
  package$collection.SimpleMutableEntry = SimpleMutableEntry;
  package$catcode.Msgs_init_1cg4aj$ = Msgs_init;
  package$catcode.Msgs = Msgs;
  Object.defineProperty(package$catcode, 'CAT_TYPE', {
    get: function () {
      return CAT_TYPE;
    }
  });
  Object.defineProperty(package$catcode, 'CAT_HEAD', {
    get: function () {
      return CAT_HEAD;
    }
  });
  Object.defineProperty(package$catcode, 'CAT_END', {
    get: function () {
      return CAT_END;
    }
  });
  Object.defineProperty(package$catcode, 'CAT_PS', {
    get: function () {
      return CAT_PS;
    }
  });
  Object.defineProperty(package$catcode, 'CAT_KV', {
    get: function () {
      return CAT_KV;
    }
  });
  Object.defineProperty(package$catcode, 'nekoMatchRegex', {
    get: function () {
      return nekoMatchRegex;
    }
  });
  package$catcode.catHead_61zpoe$ = catHead;
  Object.defineProperty(Neko, 'Of', {
    get: Neko$Of_getInstance
  });
  package$catcode.Neko = Neko;
  package$catcode.MutableNeko = MutableNeko;
  package$catcode.NoraNeko = NoraNeko;
  package$catcode.MutableNoraNeko = MutableNoraNeko;
  package$catcode.BaseMutableNoraNeko = BaseMutableNoraNeko;
  package$catcode.EmptyNeko = EmptyNeko;
  package$catcode.EmptyNoraNeko = EmptyNoraNeko;
  package$catcode.NekoAibo = NekoAibo;
  package$catcode.NekoDsl = NekoDsl;
  Object.defineProperty(package$catcode, 'NekoAtAll', {
    get: function () {
      return NekoAtAll;
    }
  });
  Object.defineProperty(package$catcode, 'NekoRps', {
    get: function () {
      return NekoRps;
    }
  });
  Object.defineProperty(package$catcode, 'NekoDice', {
    get: function () {
      return NekoDice;
    }
  });
  Object.defineProperty(package$catcode, 'NekoShake', {
    get: function () {
      return NekoShake;
    }
  });
  WildcatCodeBuilder.WildcatCodeBuilderKey = WildcatCodeBuilder$WildcatCodeBuilderKey;
  package$catcode.WildcatCodeBuilder = WildcatCodeBuilder;
  LazyWildcatCodeBuilder.LazyWildcatCodeBuilderKey = LazyWildcatCodeBuilder$LazyWildcatCodeBuilderKey;
  package$catcode.LazyWildcatCodeBuilder = LazyWildcatCodeBuilder;
  package$catcode.WildcatStringCodeBuilder = WildcatStringCodeBuilder;
  package$catcode.NoraNekoBuilder = NoraNekoBuilder;
  package$catcode.LazyNoraNekoBuilder = LazyNoraNekoBuilder;
  Object.defineProperty(WildcatCodeUtil, 'Companion', {
    get: WildcatCodeUtil$Companion_getInstance
  });
  package$catcode.WildcatCodeUtil = WildcatCodeUtil;
  package$catcode.WildcatTemplate = WildcatTemplate;
  package$catcode.WildcatStringTemplate = WildcatStringTemplate;
  package$catcode.NoraNekoTemplate = NoraNekoTemplate;
  Neko.prototype.forEach_15xl62$ = NekoMap.prototype.forEach_15xl62$;
  Neko.prototype.getOrDefault_xwzc9p$ = NekoMap.prototype.getOrDefault_xwzc9p$;
  Object.defineProperty(LazyMapNeko.prototype, 'codeType', Object.getOwnPropertyDescriptor(Neko.prototype, 'codeType'));
  LazyMapNeko.prototype.plus = Neko.prototype.plus;
  LazyMapNeko.prototype.forEach_15xl62$ = Neko.prototype.forEach_15xl62$;
  LazyMapNeko.prototype.get_11rb$ = function (key) {
    return this.get(key);
  };
  MutableNekoMap.prototype.getOrDefault_xwzc9p$ = NekoMap.prototype.getOrDefault_xwzc9p$;
  MutableNekoMap.prototype.forEach_15xl62$ = NekoMap.prototype.forEach_15xl62$;
  Object.defineProperty(MutableNeko.prototype, 'codeType', Object.getOwnPropertyDescriptor(Neko.prototype, 'codeType'));
  MutableNeko.prototype.plus = Neko.prototype.plus;
  MutableNeko.prototype.forEach_15xl62$ = Neko.prototype.forEach_15xl62$;
  MutableNeko.prototype.getOrDefault_xwzc9p$ = Neko.prototype.getOrDefault_xwzc9p$;
  MutableNeko.prototype.putAll_u7olld$ = MutableNekoMap.prototype.putAll_u7olld$;
  MutableNeko.prototype.putAll_a2k3zr$ = MutableNekoMap.prototype.putAll_a2k3zr$;
  LazyMutableMapNeko.prototype.putAll_u7olld$ = MutableNeko.prototype.putAll_u7olld$;
  LazyMutableMapNeko.prototype.get_11rb$ = function (key) {
    return this.get(key);
  };
  NoraNeko.prototype.plus = Neko.prototype.plus;
  NoraNeko.prototype.forEach_15xl62$ = Neko.prototype.forEach_15xl62$;
  NoraNeko.prototype.getOrDefault_xwzc9p$ = Neko.prototype.getOrDefault_xwzc9p$;
  LazyMapNoraNeko.prototype.plus = NoraNeko.prototype.plus;
  LazyMapNoraNeko.prototype.forEach_15xl62$ = NoraNeko.prototype.forEach_15xl62$;
  LazyMapNoraNeko.prototype.get_11rb$ = function (key) {
    return this.get(key);
  };
  MapNoraNeko.prototype.plus = NoraNeko.prototype.plus;
  MapNoraNeko.prototype.forEach_15xl62$ = NoraNeko.prototype.forEach_15xl62$;
  MapNoraNeko.prototype.get_11rb$ = function (key) {
    return this.get(key);
  };
  LazyMutableMapNoraNeko.prototype.putAll_u7olld$ = MutableNeko.prototype.putAll_u7olld$;
  LazyMutableMapNoraNeko.prototype.get_11rb$ = function (key) {
    return this.get(key);
  };
  Object.defineProperty(MapNeko.prototype, 'codeType', Object.getOwnPropertyDescriptor(Neko.prototype, 'codeType'));
  MapNeko.prototype.plus = Neko.prototype.plus;
  MapNeko.prototype.forEach_15xl62$ = Neko.prototype.forEach_15xl62$;
  MapNeko.prototype.get_11rb$ = function (key) {
    return this.get(key);
  };
  MutableMapNeko.prototype.putAll_u7olld$ = MutableNeko.prototype.putAll_u7olld$;
  MutableMapNeko.prototype.get_11rb$ = function (key) {
    return this.get(key);
  };
  MutableMapNoraNeko.prototype.putAll_u7olld$ = MutableNeko.prototype.putAll_u7olld$;
  MutableMapNoraNeko.prototype.get_11rb$ = function (key) {
    return this.get(key);
  };
  NoraNyanko.prototype.plus = NoraNeko.prototype.plus;
  NoraNyanko.prototype.getOrDefault_xwzc9p$ = NoraNeko.prototype.getOrDefault_xwzc9p$;
  NoraNyanko.prototype.forEach_15xl62$ = NoraNeko.prototype.forEach_15xl62$;
  Object.defineProperty(Nyanko.prototype, 'codeType', Object.getOwnPropertyDescriptor(Neko.prototype, 'codeType'));
  Nyanko.prototype.plus = Neko.prototype.plus;
  Nyanko.prototype.getOrDefault_xwzc9p$ = Neko.prototype.getOrDefault_xwzc9p$;
  Nyanko.prototype.forEach_15xl62$ = Neko.prototype.forEach_15xl62$;
  StringTemplate.prototype.at_s8cxhz$ = CodeTemplate.prototype.at_s8cxhz$;
  StringTemplate.prototype.face_s8cxhz$ = CodeTemplate.prototype.face_s8cxhz$;
  StringTemplate.prototype.bface_s8cxhz$ = CodeTemplate.prototype.bface_s8cxhz$;
  StringTemplate.prototype.sface_s8cxhz$ = CodeTemplate.prototype.sface_s8cxhz$;
  StringTemplate.prototype.image_61zpoe$ = CodeTemplate.prototype.image_61zpoe$;
  StringTemplate.prototype.record_61zpoe$ = CodeTemplate.prototype.record_61zpoe$;
  StringTemplate.prototype.rps_za3lpa$ = CodeTemplate.prototype.rps_za3lpa$;
  StringTemplate.prototype.dice_za3lpa$ = CodeTemplate.prototype.dice_za3lpa$;
  StringTemplate.prototype.music_puj7f4$ = CodeTemplate.prototype.music_puj7f4$;
  StringTemplate.prototype.customMusic_6hosri$ = CodeTemplate.prototype.customMusic_6hosri$;
  StringTemplate.prototype.share_puj7f4$ = CodeTemplate.prototype.share_puj7f4$;
  NekoTemplate.prototype.at_s8cxhz$ = CodeTemplate.prototype.at_s8cxhz$;
  NekoTemplate.prototype.face_s8cxhz$ = CodeTemplate.prototype.face_s8cxhz$;
  NekoTemplate.prototype.bface_s8cxhz$ = CodeTemplate.prototype.bface_s8cxhz$;
  NekoTemplate.prototype.sface_s8cxhz$ = CodeTemplate.prototype.sface_s8cxhz$;
  NekoTemplate.prototype.image_61zpoe$ = CodeTemplate.prototype.image_61zpoe$;
  NekoTemplate.prototype.record_61zpoe$ = CodeTemplate.prototype.record_61zpoe$;
  NekoTemplate.prototype.rps_za3lpa$ = CodeTemplate.prototype.rps_za3lpa$;
  NekoTemplate.prototype.dice_za3lpa$ = CodeTemplate.prototype.dice_za3lpa$;
  NekoTemplate.prototype.music_puj7f4$ = CodeTemplate.prototype.music_puj7f4$;
  NekoTemplate.prototype.customMusic_6hosri$ = CodeTemplate.prototype.customMusic_6hosri$;
  NekoTemplate.prototype.share_puj7f4$ = CodeTemplate.prototype.share_puj7f4$;
  MutableNoraNeko.prototype.plus = MutableNeko.prototype.plus;
  MutableNoraNeko.prototype.forEach_15xl62$ = MutableNeko.prototype.forEach_15xl62$;
  MutableNoraNeko.prototype.getOrDefault_xwzc9p$ = MutableNeko.prototype.getOrDefault_xwzc9p$;
  MutableNoraNeko.prototype.putAll_u7olld$ = MutableNeko.prototype.putAll_u7olld$;
  MutableNoraNeko.prototype.putAll_a2k3zr$ = MutableNeko.prototype.putAll_a2k3zr$;
  BaseMutableNoraNeko.prototype.plus = MutableNoraNeko.prototype.plus;
  BaseMutableNoraNeko.prototype.forEach_15xl62$ = MutableNoraNeko.prototype.forEach_15xl62$;
  BaseMutableNoraNeko.prototype.getOrDefault_xwzc9p$ = MutableNoraNeko.prototype.getOrDefault_xwzc9p$;
  BaseMutableNoraNeko.prototype.putAll_u7olld$ = MutableNoraNeko.prototype.putAll_u7olld$;
  BaseMutableNoraNeko.prototype.putAll_a2k3zr$ = MutableNoraNeko.prototype.putAll_a2k3zr$;
  Object.defineProperty(EmptyNeko.prototype, 'codeType', Object.getOwnPropertyDescriptor(Neko.prototype, 'codeType'));
  EmptyNeko.prototype.plus = Neko.prototype.plus;
  EmptyNeko.prototype.forEach_15xl62$ = Neko.prototype.forEach_15xl62$;
  EmptyNeko.prototype.getOrDefault_xwzc9p$ = Neko.prototype.getOrDefault_xwzc9p$;
  EmptyNoraNeko.prototype.plus = NoraNeko.prototype.plus;
  EmptyNoraNeko.prototype.forEach_15xl62$ = NoraNeko.prototype.forEach_15xl62$;
  EmptyNoraNeko.prototype.getOrDefault_xwzc9p$ = NoraNeko.prototype.getOrDefault_xwzc9p$;
  WildcatTemplate.prototype.at_s8cxhz$ = CodeTemplate.prototype.at_s8cxhz$;
  WildcatTemplate.prototype.face_s8cxhz$ = CodeTemplate.prototype.face_s8cxhz$;
  WildcatTemplate.prototype.bface_s8cxhz$ = CodeTemplate.prototype.bface_s8cxhz$;
  WildcatTemplate.prototype.sface_s8cxhz$ = CodeTemplate.prototype.sface_s8cxhz$;
  WildcatTemplate.prototype.image_61zpoe$ = CodeTemplate.prototype.image_61zpoe$;
  WildcatTemplate.prototype.record_61zpoe$ = CodeTemplate.prototype.record_61zpoe$;
  WildcatTemplate.prototype.rps_za3lpa$ = CodeTemplate.prototype.rps_za3lpa$;
  WildcatTemplate.prototype.dice_za3lpa$ = CodeTemplate.prototype.dice_za3lpa$;
  WildcatTemplate.prototype.music_puj7f4$ = CodeTemplate.prototype.music_puj7f4$;
  WildcatTemplate.prototype.customMusic_6hosri$ = CodeTemplate.prototype.customMusic_6hosri$;
  WildcatTemplate.prototype.share_puj7f4$ = CodeTemplate.prototype.share_puj7f4$;
  NoraNekoTemplate.prototype.music_puj7f4$ = WildcatTemplate.prototype.music_puj7f4$;
  CAT_KV_SPLIT_ARRAY = [CAT_KV];
  CAT_PS_SPLIT_ARRAY = [CAT_PS];
  MAP_SPLIT_REGEX = Regex_init(CAT_KV);
  MAP_SPLIT_REGEX_0 = Regex_init(CAT_KV);
  MAP_SPLIT_REGEX_1 = Regex_init(CAT_KV);
  MAP_SPLIT_REGEX_2 = Regex_init(CAT_KV);
  CAT_TYPE = 'CAT';
  CAT_HEAD = '[CAT:';
  CAT_END = ']';
  CAT_PS = ',';
  CAT_KV = '=';
  nekoMatchRegex = Regex_init('\\[(\\w+:\\w+(,((?![\\[\\]]).)+?)*)]');
  NekoAtAll = Nyanko$Of_getInstance().byCode_61zpoe$('[CAT:at,all=true]');
  NekoRps = new EmptyNeko('rps');
  NekoDice = new EmptyNeko('dice');
  NekoShake = new EmptyNeko('shake');
  Kotlin.defineModule('CatCode', _);
  return _;
}));

//# sourceMappingURL=CatCode.js.map
