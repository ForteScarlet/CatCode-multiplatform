/*
 * Copyright (c) 2020. ForteScarlet
 *
 * catCode库相关代码使用 MIT License 开源，请遵守协议相关条款。
 *
 * about MIT: https://opensource.org/licenses/MIT
 *
 *
 *
 *
 */

package catcode

import catcode.codes.MapNeko
import catcode.codes.Nyanko




public interface TemplateAble {

    /**
     *  获取一个String为载体的[模板][CodeTemplate]
     *  @see StringTemplate
     */
    @kotlin.js.JsName("stringTemplate")
    val stringTemplate: CodeTemplate<String>

    /**
     *  获取[Neko]为载体的[模板][CodeTemplate]
     *  @see NekoTemplate
     */
    @kotlin.js.JsName("nekoTemplate")
    val nekoTemplate: CodeTemplate<Neko>



}


public interface BuilderAble {

    /**
     * 构建一个String为载体类型的[构建器][CodeBuilder]
     */
    @kotlin.js.JsName("getStringCodeBuilder")
    fun getStringCodeBuilder(type: String, encode: Boolean = true): CodeBuilder<String>


    /**
     * 构建一个[Neko]为载体类型的[构建器][CodeBuilder]
     * @param encode 时候对value参数进行转义。
     * @param lazy 构建结果是否为 lazy neko。
     */
    @kotlin.js.JsName("getNekoBuilder")
    fun getNekoBuilder(type: String, encode: Boolean): CodeBuilder<Neko>

    /**
     * 构建一个[Neko]为载体类型的[构建器][CodeBuilder]
     * @param encode 时候对value参数进行转义。
     * @param lazy 构建结果是否为 lazy neko。
     */
    @kotlin.js.JsName("getLazyNekoBuilder")
    fun getLazyNekoBuilder(type: String, encode: Boolean): LazyCodeBuilder<Neko>
}


/**
 * 构建 cat时用的统一参数实例。为js提供的便利性最大。
 */
public data class ToCatParam(
    val type: String,
    val encode: Boolean = false,
    val params: Array<CatKV<String, *>> = emptyArray()
) {
    override fun equals(other: Any?): Boolean {
        if (this === other) return true
        if (other == null || this::class != other::class) return false

        other as ToCatParam

        if (type != other.type) return false
        if (encode != other.encode) return false
        if (!params.contentEquals(other.params)) return false

        return true
    }

    override fun hashCode(): Int {
        var result = type.hashCode()
        result = 31 * result + encode.hashCode()
        result = 31 * result + params.contentHashCode()
        return result
    }

}




/**
 *
 * 猫猫伙伴。定义CatCodeUtil的相关操作。
 *
 * > Aibo -> 相棒 -> 伙伴
 *
 *
 */
public interface NekoAibo
{

    @kotlin.js.JsName("catCodeHead")
    val catCodeHead: String


    /**
     * 通过完整参数构建一个猫猫码。参数中，[ToCatParam.type] 不可忽略。
     */
    @kotlin.js.JsName("toCat")
    fun toCat(typeParam: ToCatParam): String


    /**
     * 仅通过一个类型获取一个猫猫码。例如`\[Cat:hi]`
     */
    @kotlin.js.JsName("toCatEmpty")
    fun toCat(type: String): String

    /**
     * 将参数转化为猫猫码字符串.
     * 如果[encode] == true, 则会对[kv]的值进行[转义][CatEncoder.encodeParams]
     *
     * @since 1.0-1.11
     */
    @kotlin.js.JsName("toCatByKV")
    fun toCat(type: String, encode: Boolean = false, vararg kv: CatKV<String, *>): String


    /**
     * 将参数转化为猫猫码字符串.
     * 默认 `encode` == false
     */
    @kotlin.js.JsName("toCatByNoEncodeKV")
    fun toCat(type: String, vararg key: CatKV<String, *>): String


    /**
     * 将参数转化为猫猫码字符串
     * @since 1.0-1.11
     */
    // @kotlin.jvm.JvmOverloads
    @kotlin.js.JsName("toCatByMap")
    fun toCat(type: String, encode: Boolean = false, map: Map<String, *>): String


    /**
     * 将参数转化为猫猫码字符串
     * 默认 `encode` == false
     *
     * @since 1.0-1.11
     */
    // @kotlin.jvm.JvmOverloads
    @kotlin.js.JsName("toCatByNoEncodeMap")
    fun toCat(type: String, map: Map<String, *>): String



    /**
     * 将参数转化为猫猫码字符串, [params]的格式应当是`xxx=xxx`
     * 如果[encode] == true, 则说明需要对`=`后的值进行转义。
     * 如果[encode] == false, 则不会对参数值进行转义，直接拼接为Cat字符串
     * @since 1.8.0
     */
    // @kotlin.jvm.JvmOverloads
    @kotlin.js.JsName("toCatByParams")
    fun toCat(type: String, encode: Boolean = false, vararg params: String): String


    /**
     * 将参数转化为猫猫码字符串, [params]的格式应当是`xxx=xxx`
     * 默认`encode` == false
     * @since 1.8.0
     */
    // @kotlin.jvm.JvmOverloads
    @kotlin.js.JsName("toCatByNoEncodeParams")
    fun toCat(type: String, vararg params: String): String


    /**
     * 通过完整参数构建一个 [Neko] 实例。
     */
    @kotlin.js.JsName("toNeko")
    fun toNeko(typeParam: ToCatParam): Neko

    /**
     * 获取无参数的[Neko]
     * @param type 猫猫码的类型
     */
    @kotlin.js.JsName("toNekoEmpty")
    fun toNeko(type: String): Neko

    /**
     * 根据[Map]类型参数转化为[Neko]实例
     *
     * @param type 猫猫码的类型
     * @param params 参数列表
     */
    @kotlin.js.JsName("toNekoByMap")
    fun toNeko(type: String, params: Map<String, *>): Neko


    /**
     * 根据参数转化为[Neko]实例
     * @param type 猫猫码的类型
     * @param params 参数列表
     */
    @kotlin.js.JsName("toNekoByKV")
    fun toNeko(type: String, vararg params: CatKV<String, *>): Neko


    /**
     * 根据参数转化为[Neko]实例
     * @param type 猫猫码的类型
     * @param paramText 参数列表, 例如："code=123"
     */
    // @kotlin.jvm.JvmOverloads
    @kotlin.js.JsName("toNekoByParams")
    fun toNeko(type: String, encode: Boolean = false, vararg paramText: String): Neko


    /**
     * 根据参数转化为[Neko]实例
     * @param type 猫猫码的类型
     * @param paramText 参数列表, 例如："code=123"
     */
    // @kotlin.jvm.JvmOverloads
    @kotlin.js.JsName("toNekoByNoEncodeParams")
    fun toNeko(type: String, vararg paramText: String): Neko

    /**
     * 将一段字符串根据字符串与猫猫码来进行切割。
     * 不会有任何转义操作。
     * @since 1.1-1.11
     */
    @kotlin.js.JsName("split")
    fun split(text: String): List<String> = split(text) { this }

    /**
     * 将一段字符串根据字符串与猫猫码来进行切割,
     * 并可以通过[postMap]对切割后的每条字符串进行后置处理。
     *
     * 不会有任何转义操作。
     *
     * @param text 文本字符串
     * @param postMap 后置转化函数
     * @since 1.8.0
     */
    @kotlin.js.JsName("splitWithMapper")
    fun <T> split(text: String, postMap: String.() -> T): List<T>

    /**
     * 从消息字符串中提取出猫猫码字符串
     * @param text 消息字符串
     * @param index 第几个索引位的猫猫码，默认为0，即第一个
     * @since 1.1-1.11
     */
    // @kotlin.jvm.JvmOverloads
    @kotlin.js.JsName("getCatWithType")
    fun getCat(text: String, type: String = "", index: Int = 0): String?

    /**
     * 从消息字符串中提取出猫猫码字符串
     * @param text 消息字符串
     * @param index 第几个索引位的猫猫码，默认为0，即第一个
     * @since 1.1-1.11
     */
    @kotlin.js.JsName("getCat")
    fun getCat(text: String, index: Int = 0): String? = getCat(text = text, type = "", index = index)


    /**
     * 提取字符串中的全部猫猫码字符串
     * @since 1.1-1.11
     */
    // @kotlin.jvm.JvmOverloads
    @kotlin.js.JsName("getCats")
    fun getCats(text: String, type: String = ""): List<String> = getCats(text, type) { it }

    /**
     * 提取字符串中的全部猫猫码字符串
     * @since 1.8.0
     */
    // @kotlin.jvm.JvmOverloads
    @kotlin.js.JsName("getCatsWithMapper")
    fun <T> getCats(text: String, type: String = "", map: (String) -> T): List<T>

    /**
     * 获取文本中的猫猫码的参数。
     * 如果文本为null、找不到对应索引的猫猫码、找不到此key，返回null；如果找到了key但是无参数，返回空字符串
     *
     * 默认情况下获取第一个猫猫码的参数
     * @since 1.1-1.11
     */
    @kotlin.js.JsName("getParam")
    fun getParam(text: String, paramKey: String, index: Int = 0): String? =
        getParam(text = text, paramKey = paramKey, type = "", index = index)

    /**
     * 获取文本中的猫猫码的参数。
     * 如果文本为null、找不到对应索引的猫猫码、找不到此key，返回null；如果找到了key但是无参数，返回空字符串
     *
     * 默认情况下获取第一个猫猫码的参数
     *
     * @param text 正文
     * @param type 猫猫码小类型。默认为任意类型。
     * @param paramKey 参数的key
     * @param index 第几个CAT码。默认为第一个。
     *
     */
    // @kotlin.jvm.JvmOverloads
    @kotlin.js.JsName("getParamWithType")
    fun getParam(text: String, type: String = "", paramKey: String, index: Int = 0): String?

    /**
     * 获取文本字符串中猫猫码字符串的迭代器
     * @since 1.1-1.11
     * @param text 存在猫猫码正文的文本
     * @param type 要获取的猫猫码的类型，如果为空字符串则视为所有，默认为所有。
     */
    // @kotlin.jvm.JvmOverloads
    @kotlin.js.JsName("getCatIterWithType")
    fun getCatIter(text: String, type: String = ""): Iterator<String>


    /**
     * 为一个猫猫码字符串得到他的key迭代器
     * @param code 猫猫码字符串
     * @since 1.8.0
     */
    @kotlin.js.JsName("getCatKeyIter")
    fun getCatKeyIter(code: String): Iterator<String>

    /**
     * 为一个猫猫码字符串得到他的value迭代器
     * @param code 猫猫码字符串
     * @since 1.8.0
     */
    @kotlin.js.JsName("getCatValueIter")
    fun getCatValueIter(code: String): Iterator<String>


    /**
     * 为一个猫猫码字符串得到他的key-value的键值对迭代器
     * @param code 猫猫码字符串
     * @since 1.8.0
     */
    @kotlin.js.JsName("getCatKVIter")
    fun getCatKVIter(code: String): Iterator<CatKV<String, String>>


    /**
     * 以[getCatIter]方法为基础获取字符串中全部的[Neko]对象
     * @since 1.1-1.11
     * @param text 存在猫猫码正文的文本
     * @param type 要获取的猫猫码的类型，如果为空字符串则视为所有，默认为所有。
     */
    // @kotlin.jvm.JvmOverloads
    @kotlin.js.JsName("getNekoList")
    fun getNekoList(text: String, type: String = ""): List<Neko>


    /**
     * 提取出文本中的猫猫码，并封装为[Neko]实例。
     * @param text 存在猫猫码的正文
     * @param type 要获取的猫猫码的类型，默认为所有类型
     * @param index 获取的索引位的猫猫码，默认为0，即第一个
     */
    // @kotlin.jvm.JvmOverloads
    @kotlin.js.JsName("getNekoWithType")
    fun getNeko(text: String, type: String = "", index: Int = 0): Neko?

    /**
     * 获取指定索引位的猫猫码，并封装为[Neko]实例。
     */
    @kotlin.js.JsName("getNeko")
    fun getNeko(text: String, index: Int = 0): Neko? = getNeko(text = text, type = "", index = index)
    //
    // /**
    //  * 移除猫猫码，可指定类型
    //  * 具体使用参考[remove] 和 [removeByType]
    //  * @since 1.2-1.12
    //  */
    // private fun removeCode(
    //     text: String,
    //     type: String,
    //     trim: Boolean = true,
    //     ignoreEmpty: Boolean = true,
    //     delimiter: CharSequence = ""
    // ): String {
    //     when {
    //         text.isEmpty() -> {
    //             return text
    //         }
    //         else -> {
    //             val sb = StringBuilder(text.length)
    //             // 移除所有的猫猫码
    //             val head = catCodeHead + type
    //             val end = CAT_END
    //
    //             var hi: Int = -1
    //             var ei = -1
    //             var nextHi: Int
    //             var sps = 0
    //             var sub: String
    //             var next: Char
    //
    //             if (text.length < head.length + end.length) {
    //                 return text
    //             }
    //
    //             if (!text.contains(head)) {
    //                 return text
    //             }
    //
    //             do {
    //                 hi++
    //                 hi = text.indexOf(head, hi)
    //                 next = text[hi + head.length]
    //                 // 如果text存在内容，则判断：下一个不是逗号或者结尾
    //                 if (type.isNotEmpty() && (next != ',' && next.toString() != end)) {
    //                     continue
    //                 }
    //                 if (hi >= 0) {
    //                     // 有一个头
    //                     // 寻找下一个尾
    //                     ei = text.indexOf(end, hi)
    //                     if (ei > 0) {
    //                         // 有一个尾，看看下一个头是不是在下一个尾之后
    //                         nextHi = text.indexOf(head, hi + 1)
    //                         // 如果中间包着一个头，则这个头作为当前头
    //                         if (nextHi in 0 until ei) {
    //                             hi = nextHi
    //                         }
    //                         if (hi > 0) {
    //                             if (sps > 0) {
    //                                 sps++
    //                             }
    //                             sub = text.substring(sps, hi)
    //                             if (!ignoreEmpty || (ignoreEmpty && sub.isNotBlank())) {
    //                                 if (trim) {
    //                                     sub = sub.trim()
    //                                 }
    //                                 if (sb.isNotEmpty()) {
    //                                     sb.append(delimiter)
    //                                 }
    //                                 sb.append(sub)
    //                             }
    //                             sps = ei
    //                         } else if (hi == 0) {
    //                             sps = ei
    //
    //                         }
    //                     }
    //                 }
    //             } while (hi >= 0 && ei > 0)
    //
    //             // 没有头了
    //             if (sps != text.lastIndex) {
    //                 sub = text.substring(sps + 1)
    //                 if (!ignoreEmpty || (ignoreEmpty && sub.isNotBlank())) {
    //                     if (trim) {
    //                         sub = sub.trim()
    //                     }
    //                     if (sb.isNotEmpty()) {
    //                         sb.append(delimiter)
    //                     }
    //                     sb.append(sub)
    //                 }
    //             }
    //             return sb.toString()
    //         }
    //     }
    // }

    /**
     * 移除字符串中的所有的猫猫码，返回字符串。
     * 必须是完整的\[Cat:...]。
     * @param text 文本正文
     * @param trim 是否对文本执行trim，默认为true
     * @param ignoreEmpty 如果字符为纯空白字符，是否忽略
     * @param delimiter 切割字符串
     */
    // @kotlin.jvm.JvmOverloads
    @kotlin.js.JsName("remove")
    fun remove(
        text: String,
        trim: Boolean = true,
        ignoreEmpty: Boolean = true,
        delimiter: CharSequence = ""
    ): String

    /**
     * 移除某个类型的字符串中的所有的猫猫码，返回字符串。
     * 必须是完整的\[Cat...]。
     * @param type 猫猫码的类型
     * @param text 文本正文
     * @param trim 是否对文本执行trim，默认为true
     * @param ignoreEmpty 如果字符为纯空白字符，是否忽略
     * @param delimiter 切割字符串
     */
    // @kotlin.jvm.JvmOverloads
    @kotlin.js.JsName("removeByType")
    fun removeByType(
        text: String,
        type: String,
        trim: Boolean = true,
        ignoreEmpty: Boolean = true,
        delimiter: CharSequence = ""
    ): String

    //
    // /**
    //  * 判断某个文本中是否包含了指定条件的猫猫码。
    //  * @param type 猫猫码小类型，例如at, 或者空字符串。
    //  * @param text 正文文本。
    //  * @param params 要匹配的参数列表。只会用于匹配，不会进行转义等操作。
    //  */
    // private fun containsFromText(
    //     text: String,
    //     type: String,
    //     vararg params: String
    // ): Boolean {
    //     val head = catCodeHead + type
    //     val end = CAT_END
    //     return when {
    //         // 文本为空
    //         text.isEmpty() -> false
    //         // 不需要匹配参数
    //         params.isEmpty() -> text.contains(head)
    //         // 需要匹配参数
    //         else -> {
    //             // 头
    //             var startIndex = text.indexOf(head)
    //             // find
    //             while (startIndex >= 0) {
    //                 // 尾
    //                 val endIndex: Int = text.indexOf(end, startIndex + 1)
    //                 // sub text.
    //                 val subText: String = text.substring(startIndex, endIndex)
    //
    //                 var allFound = true
    //
    //                 // 寻找其中的参数
    //                 for (param in params) {
    //                     if (!subText.contains(param)) {
    //                         allFound = false
    //                         break
    //                     }
    //                 }
    //
    //                 // 全部都能匹配，则说明存在，return true.
    //                 if (allFound) return true
    //
    //                 // 本轮没有找到，找下一轮
    //                 startIndex = text.indexOf(head, startIndex + 1)
    //             }
    //             false
    //         }
    //     }
    // }

    /**
     * 判断某个文本中是否包含了指定条件的猫猫码。其中 [params] 参数代表了键值对，因此必须是2的倍数。
     * 例如 ` contains("at", text, true, "code", "123456") ` 则代表匹配at类型的猫猫码，其中有一个参数为"code=123456"。
     *
     * 默认会对参数进行转义。
     *
     * @see contains
     */
    @kotlin.js.JsName("contains")
    fun contains(
        text: String,
        type: String,
        vararg params: String
    ): Boolean


    /**
     * 判断某个文本中是否包含了指定条件的猫猫码。其中 [params] 参数代表了键值对，因此必须是2的倍数。
     * 例如 ` contains("at", text, true, "code", "123456") ` 则代表匹配at类型的猫猫码，其中有一个参数为"code=123456"。
     * @param type 猫猫码小类型，例如at, 或者空字符串。
     * @param text 正文文本。
     * @param params 要匹配的参数列表。由于是键值对，因此必须是2的倍数。
     */
    // @kotlin.jvm.JvmOverloads
    @kotlin.js.JsName("containsByParams")
    fun contains(
        text: String,
        type: String = "",
        encode: Boolean = true,
        vararg params: String = emptyArray()
    ): Boolean


    /**
     * 判断某个文本中是否包含了指定条件的猫猫码。其中 [params] 参数代表了键值对，因此必须是2的倍数。
     * 例如 ` contains("at", text, true, "code", "123456") ` 则代表匹配at类型的猫猫码，其中有一个参数为"code=123456"。
     * @param type 猫猫码小类型，例如at, 或者空字符串。
     * @param text 正文文本。
     * @param params 要匹配的参数列表。
     */
    @kotlin.js.JsName("containsByKV")
    fun contains(
        text: String,
        type: String = "",
        encode: Boolean = true,
        vararg params: CatKV<String, String> = emptyArray()
    ): Boolean


}








internal class NekoAiboImpl(codeType: String) : NekoAibo {

    override val catCodeHead: String = catHead(codeType)

    /**
     * 通过完整参数构建一个猫猫码。参数中，[ToCatParam.type] 不可忽略。
     */
    override fun toCat(typeParam: ToCatParam): String {
        return with(typeParam) {
            if (params.isEmpty()) {
                toCat(type)
            } else {
                toCat(type, encode, *params)
            }
        }
    }


    /**
     * 仅通过一个类型获取一个猫猫码。例如`\[Cat:hi]`
     */
    override fun toCat(type: String): String {
        return "$catCodeHead$type$CAT_END"
    }

    /**
     * 将参数转化为猫猫码字符串.
     * 如果[encode] == true, 则会对[kv]的值进行[转义][CatEncoder.encodeParams]
     *
     * @since 1.0-1.11
     */
    override fun toCat(type: String, encode: Boolean, vararg kv: CatKV<String, *>): String {
        val pre = "$catCodeHead$type"
        return if (kv.isNotEmpty()) {
            kv.asSequence().filter {
                val v: Any? = it.key
                v != null && if (v is CharSequence) v.isNotBlank() else true
            }.joinToString(CAT_PS, "$pre$CAT_PS", CAT_END) {
                "${it.key}$CAT_KV${
                    if (encode) it.value.toString().enCatParam() else it.value
                }"
            }
        } else {
            pre + CAT_END
        }
    }


    /**
     * 将参数转化为猫猫码字符串.
     * 默认 `encode` == true
     */
    override fun toCat(type: String, vararg key: CatKV<String, *>): String {
        return toCat(type, false, *key)
    }

    /**
     * 将参数转化为猫猫码字符串
     * @since 1.0-1.11
     */
    override fun toCat(type: String, encode: Boolean, map: Map<String, *>): String {
        val pre = "$catCodeHead$type"
        return if (map.isNotEmpty()) {
            map.asSequence().filter {
                val v: Any? = it.value
                v != null && if (v is CharSequence) v.isNotBlank() else true
            }.joinToString(
                CAT_PS,
                "$pre$CAT_PS",
                CAT_END
            ) {
                "${it.key}$CAT_KV${
                    if (encode) it.value.toString().enCatParam() else it.value
                }"
            }
        } else {
            pre + CAT_END
        }
    }


    /**
     * 将参数转化为猫猫码字符串
     * 默认 `encode` == true
     *
     * @since 1.0-1.11
     */
    override fun toCat(type: String, map: Map<String, *>): String {
        return toCat(type, false, map)
    }

    /**
     * 将参数转化为猫猫码字符串, [params]的格式应当是`xxx=xxx`
     * 如果[encode] == true, 则说明需要对`=`后的值进行转义。
     * 如果[encode] == false, 则不会对参数值进行转义，直接拼接为Cat字符串
     * @since 1.8.0
     */
    override fun toCat(type: String, encode: Boolean, vararg params: String): String {
        // 如果参数为空
        return if (params.isNotEmpty()) {
            if (encode) {
                toCat(type, encode, *params.mapNotNull {
                    val split: List<String> = it.split(ignoreCase = false, limit = 2, delimiters = CAT_KV_SPLIT_ARRAY)
                    val k: String = split[0]
                    val v: String = split[1]
                    if (v.isNotBlank()) k cTo v else null
                }.toTypedArray())
            } else {
                // 不需要转义, 直接进行字符串拼接
                params
                    .filter { !it.endsWith(CAT_KV) }
                    .takeIf { it.isNotEmpty() }
                    // if not empty,
                    ?.let { "$catCodeHead$type$CAT_PS${it.joinToString(CAT_PS)}$CAT_END" }
                    ?: "$catCodeHead$type$CAT_END"
            }
        } else {
            "$catCodeHead$type$CAT_END"
        }
    }

    /**
     * 将参数转化为猫猫码字符串, [params]的格式应当是`xxx=xxx`
     * 默认`encode` == false
     * @since 1.8.0
     */
    override fun toCat(type: String, vararg params: String): String {
        return toCat(type, false, *params)
    }


    /**
     * 通过完整参数构建一个 [Neko] 实例。
     */
    override fun toNeko(typeParam: ToCatParam): Neko {
        return with(typeParam) {
            if (params.isEmpty()) {
                toNeko(type)
            } else {
                toNeko(type, *params)
            }
        }
    }

    /**
     * 获取无参数的[Neko]
     * @param type 猫猫码的类型
     */
    override fun toNeko(type: String): Neko = EmptyNeko(type)

    /**
     * 根据[Map]类型参数转化为[Neko]实例
     *
     * @param type 猫猫码的类型
     * @param params 参数列表
     */
    override fun toNeko(type: String, params: Map<String, *>): Neko {
        return if (params.isEmpty()) {
            toNeko(type)
        } else {
            MapNeko.byMap(type, params)
        }
    }


    /**
     * 根据参数转化为[Neko]实例
     * @param type 猫猫码的类型
     * @param params 参数列表
     */
    override fun toNeko(type: String, vararg params: CatKV<String, *>): Neko {
        return if (params.isEmpty()) {
            toNeko(type)
        } else {
            MapNeko.byKV(type, *params)
        }
    }


    /**
     * 根据参数转化为[Neko]实例
     * @param type 猫猫码的类型
     * @param paramText 参数列表, 例如："code=123"
     */
    override fun toNeko(type: String, encode: Boolean, vararg paramText: String): Neko {
        return if (paramText.isEmpty()) {
            toNeko(type)
        } else {
            Nyanko.byCode(toCat(type, encode, *paramText))
        }
    }


    /**
     * 根据参数转化为[Neko]实例
     * @param type 猫猫码的类型
     * @param paramText 参数列表, 例如："code=123"
     */
    override fun toNeko(type: String, vararg paramText: String): Neko {
        return toNeko(type, false, *paramText)
    }

    /**
     * 将一段字符串根据字符串与猫猫码来进行切割。
     * 不会有任何转义操作。
     * @since 1.1-1.11
     */
    override fun split(text: String): List<String> = split(text) { this }

    /**
     * 将一段字符串根据字符串与猫猫码来进行切割,
     * 并可以通过[postMap]对切割后的每条字符串进行后置处理。
     *
     * 不会有任何转义操作。
     *
     * @param text 文本字符串
     * @param postMap 后置转化函数
     * @since 1.8.0
     */
    override fun <T> split(text: String, postMap: String.() -> T): List<T> {
        // 准备list
        val list: MutableList<T> = mutableListOf()

        val het = catCodeHead
        val ent = CAT_END

        // 查找最近一个[Cat:字符
        var h = text.indexOf(het)
        var le = -1
        var e = -1
        while (h >= 0) {
            // 从头部开始查询尾部
            if (e != -1) {
                le = e
            }
            e = text.indexOf(ent, h)
            h = if (e < 0) {
                // 没找到，查找下一个[Cat:
                text.indexOf(het, h + 1)
            } else {
                // 找到了，截取。
                // 首先截取前一段
                if (h > 0 && (le + 1) != h) {
                    list.add(text.substring(le + 1, h).postMap())
                }
                // 截取猫猫码
                list.add(text.substring(h, e + 1).postMap())
                // 重新查询
                text.indexOf(het, e)
            }
        }
        if (list.isEmpty()) {
            list.add(text.postMap())
        }
        if (e != text.length - 1) {
            if (e >= 0) {
                list.add(text.substring(e + 1, text.length).postMap())
            }
        }
        return list
    }

    /**
     * 从消息字符串中提取出猫猫码字符串
     * @param text 消息字符串
     * @param index 第几个索引位的猫猫码，默认为0，即第一个
     * @since 1.1-1.11
     */
    override fun getCat(text: String, type: String, index: Int): String? {
        if (index < 0) {
            throw IndexOutOfBoundsException("$index")
        }

        var i = -1
        var ti: Int
        var e = 0
        val het = catCodeHead + type
        val ent = CAT_END

        do {
            ti = text.indexOf(het, e)
            if (ti >= 0) {
                e = text.indexOf(ent, ti)
                if (e >= 0) {
                    i++
                } else {
                    e = ti + 1
                }
            }
        } while (ti >= 0 && i < index)
        return if (i == index) {
            text.substring(ti, e + 1)
        } else {
            null
        }
    }

    /**
     * 从消息字符串中提取出猫猫码字符串
     * @param text 消息字符串
     * @param index 第几个索引位的猫猫码，默认为0，即第一个
     * @since 1.1-1.11
     */
    override fun getCat(text: String, index: Int): String? = getCat(text = text, type = "", index = index)


    /**
     * 提取字符串中的全部猫猫码字符串
     * @since 1.1-1.11
     */
    override fun getCats(text: String, type: String): List<String> = getCats(text, type) { it }

    /**
     * 提取字符串中的全部猫猫码字符串
     * @since 1.8.0
     */
    override fun <T> getCats(text: String, type: String, map: (String) -> T): List<T> {
        var ti: Int
        var e = 0
        val het = catCodeHead + type
        val ent = CAT_END
        // temp list
        val list: MutableList<T> = mutableListOf()

        do {
            ti = text.indexOf(het, e)
            if (ti >= 0) {
                e = text.indexOf(ent, ti)
                if (e >= 0) {
                    list.add(map(text.substring(ti, e + 1)))
                } else {
                    e = ti + 1
                }
            }
        } while (ti >= 0 && e >= 0)

        return list
    }

    /**
     * 获取文本中的猫猫码的参数。
     * 如果文本为null、找不到对应索引的猫猫码、找不到此key，返回null；如果找到了key但是无参数，返回空字符串
     *
     * 默认情况下获取第一个猫猫码的参数
     * @since 1.1-1.11
     */
    override fun getParam(text: String, paramKey: String, index: Int): String? =
        getParam(text = text, paramKey = paramKey, type = "", index = index)

    /**
     * 获取文本中的猫猫码的参数。
     * 如果文本为null、找不到对应索引的猫猫码、找不到此key，返回null；如果找到了key但是无参数，返回空字符串
     *
     * 默认情况下获取第一个猫猫码的参数
     *
     * @param text 正文
     * @param type 猫猫码小类型。默认为任意类型。
     * @param paramKey 参数的key
     * @param index 第几个CAT码。默认为第一个。
     *
     */
    override fun getParam(text: String, type: String, paramKey: String, index: Int): String? {
        val catHead = catCodeHead + type
        val catEnd = CAT_END
        val catSpl = CAT_PS

        var from = -1
        var end = -1
        var i = -1
        do {
            from = text.indexOf(catHead, from + 1)
            if (from >= 0) {
                // 寻找结尾
                end = text.indexOf(catEnd, from)
                if (end >= 0) {
                    i++
                }
            }
        } while (from >= 0 && i < index)

        // 索引对上了
        if (i == index) {
            // 从from开始找参数
            val paramFind = ",$paramKey="
            val phi = text.indexOf(paramFind, from)
            if (phi < 0) {
                return null
            }
            // 找到了之后，找下一个逗号，如果没有，就用最终结尾的位置
            val startIndex = phi + paramFind.length
            var pei = text.indexOf(catSpl, startIndex)
            // 超出去了
            if (pei < 0 || pei > end) {
                pei = end
            }
            if (startIndex > text.lastIndex || startIndex > pei) {
                return null
            }
            return text.substring(startIndex, pei)
        } else {
            return null
        }
    }

    /**
     * 获取文本字符串中猫猫码字符串的迭代器
     * @since 1.1-1.11
     * @param text 存在猫猫码正文的文本
     * @param type 要获取的猫猫码的类型，如果为空字符串则视为所有，默认为所有。
     */
    override fun getCatIter(text: String, type: String): Iterator<String> = CatTextIterator(text, type)


    /**
     * 为一个猫猫码字符串得到他的key迭代器
     * @param code 猫猫码字符串
     * @since 1.8.0
     */
    override fun getCatKeyIter(code: String): Iterator<String> = CatParamKeyIterator(code)

    /**
     * 为一个猫猫码字符串得到他的value迭代器
     * @param code 猫猫码字符串
     * @since 1.8.0
     */
    override fun getCatValueIter(code: String): Iterator<String> = CatParamValueIterator(code)


    /**
     * 为一个猫猫码字符串得到他的key-value的键值对迭代器
     * @param code 猫猫码字符串
     * @since 1.8.0
     */
    override fun getCatKVIter(code: String): Iterator<CatKV<String, String>> = CatParamKVIterator(code)


    /**
     * 以[getCatIter]方法为基础获取字符串中全部的[Neko]对象
     * @since 1.1-1.11
     * @param text 存在猫猫码正文的文本
     * @param type 要获取的猫猫码的类型，如果为空字符串则视为所有，默认为所有。
     */
    override fun getNekoList(text: String, type: String): List<Neko> {
        val iter: Iterator<String> = getCatIter(text, type)
        val list: MutableList<Neko> = mutableListOf()
        iter.forEach { list.add(Neko.byCode(it)) }
        return list
    }


    /**
     * 提取出文本中的猫猫码，并封装为[Neko]实例。
     * @param text 存在猫猫码的正文
     * @param type 要获取的猫猫码的类型，默认为所有类型
     * @param index 获取的索引位的猫猫码，默认为0，即第一个
     */
    override fun getNeko(text: String, type: String, index: Int): Neko? {
        val cat: String = getCat(text, type, index) ?: return null
        return Neko.byCode(cat)
    }

    /**
     * 获取指定索引位的猫猫码，并封装为[Neko]实例。
     */
    override fun getNeko(text: String, index: Int): Neko? = getNeko(text = text, type = "", index = index)

    /**
     * 移除猫猫码，可指定类型
     * 具体使用参考[remove] 和 [removeByType]
     * @since 1.2-1.12
     */
    private fun removeCode(
        text: String,
        type: String,
        trim: Boolean = true,
        ignoreEmpty: Boolean = true,
        delimiter: CharSequence = ""
    ): String {
        when {
            text.isEmpty() -> {
                return text
            }
            else -> {
                val sb = StringBuilder(text.length)
                // 移除所有的猫猫码
                val head = catCodeHead + type
                val end = CAT_END

                var hi: Int = -1
                var ei = -1
                var nextHi: Int
                var sps = 0
                var sub: String
                var next: Char

                if (text.length < head.length + end.length) {
                    return text
                }

                if (!text.contains(head)) {
                    return text
                }

                do {
                    hi++
                    hi = text.indexOf(head, hi)
                    next = text[hi + head.length]
                    // 如果text存在内容，则判断：下一个不是逗号或者结尾
                    if (type.isNotEmpty() && (next != ',' && next.toString() != end)) {
                        continue
                    }
                    if (hi >= 0) {
                        // 有一个头
                        // 寻找下一个尾
                        ei = text.indexOf(end, hi)
                        if (ei > 0) {
                            // 有一个尾，看看下一个头是不是在下一个尾之后
                            nextHi = text.indexOf(head, hi + 1)
                            // 如果中间包着一个头，则这个头作为当前头
                            if (nextHi in 0 until ei) {
                                hi = nextHi
                            }
                            if (hi > 0) {
                                if (sps > 0) {
                                    sps++
                                }
                                sub = text.substring(sps, hi)
                                if (!ignoreEmpty || (ignoreEmpty && sub.isNotBlank())) {
                                    if (trim) {
                                        sub = sub.trim()
                                    }
                                    if (sb.isNotEmpty()) {
                                        sb.append(delimiter)
                                    }
                                    sb.append(sub)
                                }
                                sps = ei
                            } else if (hi == 0) {
                                sps = ei

                            }
                        }
                    }
                } while (hi >= 0 && ei > 0)

                // 没有头了
                if (sps != text.lastIndex) {
                    sub = text.substring(sps + 1)
                    if (!ignoreEmpty || (ignoreEmpty && sub.isNotBlank())) {
                        if (trim) {
                            sub = sub.trim()
                        }
                        if (sb.isNotEmpty()) {
                            sb.append(delimiter)
                        }
                        sb.append(sub)
                    }
                }
                return sb.toString()
            }
        }
    }

    /**
     * 移除字符串中的所有的猫猫码，返回字符串。
     * 必须是完整的\[Cat:...]。
     * @param text 文本正文
     * @param trim 是否对文本执行trim，默认为true
     * @param ignoreEmpty 如果字符为纯空白字符，是否忽略
     * @param delimiter 切割字符串
     */
    override fun remove(
        text: String,
        trim: Boolean,
        ignoreEmpty: Boolean,
        delimiter: CharSequence
    ): String {
        return removeCode(text = text, type = "", trim, ignoreEmpty, delimiter)
    }

    /**
     * 移除某个类型的字符串中的所有的猫猫码，返回字符串。
     * 必须是完整的\[Cat...]。
     * @param type 猫猫码的类型
     * @param text 文本正文
     * @param trim 是否对文本执行trim，默认为true
     * @param ignoreEmpty 如果字符为纯空白字符，是否忽略
     * @param delimiter 切割字符串
     */
    override fun removeByType(
        text: String,
        type: String,
        trim: Boolean,
        ignoreEmpty: Boolean,
        delimiter: CharSequence
    ): String {
        return removeCode(text, type, trim, ignoreEmpty, delimiter)
    }


    /**
     * 判断某个文本中是否包含了指定条件的猫猫码。
     * @param type 猫猫码小类型，例如at, 或者空字符串。
     * @param text 正文文本。
     * @param params 要匹配的参数列表。只会用于匹配，不会进行转义等操作。
     */
    private fun containsFromText(
        text: String,
        type: String,
        vararg params: String
    ): Boolean {
        val head = catCodeHead + type
        val end = CAT_END
        return when {
            // 文本为空
            text.isEmpty() -> false
            // 不需要匹配参数
            params.isEmpty() -> text.contains(head)
            // 需要匹配参数
            else -> {
                // 头
                var startIndex = text.indexOf(head)
                // find
                while (startIndex >= 0) {
                    // 尾
                    val endIndex: Int = text.indexOf(end, startIndex + 1)
                    // sub text.
                    val subText: String = text.substring(startIndex, endIndex)

                    var allFound = true

                    // 寻找其中的参数
                    for (param in params) {
                        if (!subText.contains(param)) {
                            allFound = false
                            break
                        }
                    }

                    // 全部都能匹配，则说明存在，return true.
                    if (allFound) return true

                    // 本轮没有找到，找下一轮
                    startIndex = text.indexOf(head, startIndex + 1)
                }
                false
            }
        }
    }

    /**
     * 判断某个文本中是否包含了指定条件的猫猫码。其中 [params] 参数代表了键值对，因此必须是2的倍数。
     * 例如 ` contains("at", text, true, "code", "123456") ` 则代表匹配at类型的猫猫码，其中有一个参数为"code=123456"。
     *
     * 默认会对参数进行转义。
     *
     * @see contains
     */
    override fun contains(
        text: String,
        type: String,
        vararg params: String
    ): Boolean = contains(text, type, true, *params)


    /**
     * 判断某个文本中是否包含了指定条件的猫猫码。其中 [params] 参数代表了键值对，因此必须是2的倍数。
     * 例如 ` contains("at", text, true, "code", "123456") ` 则代表匹配at类型的猫猫码，其中有一个参数为"code=123456"。
     * @param type 猫猫码小类型，例如at, 或者空字符串。
     * @param text 正文文本。
     * @param params 要匹配的参数列表。由于是键值对，因此必须是2的倍数。
     */
    override fun contains(
        text: String,
        type: String,
        encode: Boolean,
        vararg params: String
    ): Boolean {
        val paramArray: Array<String> = if (params.isNotEmpty()) {
            if (params.size % 2 != 0) {
                throw IllegalArgumentException("params.size % 2 != 0, params must be key-value type, but size: ${params.size}")
            } else {
                Array(params.size / 2) { i ->
                    val index = i * 2
                    val k: String = params[index]
                    val v: String = with(params[index + 1]) {
                        if (encode) this.enCatParam()
                        else this
                    }
                    "$k$CAT_KV$v"
                }
            }
        } else emptyArray()

        // contains
        return containsFromText(text = text, type = type, *paramArray)
    }


    /**
     * 判断某个文本中是否包含了指定条件的猫猫码。其中 [params] 参数代表了键值对，因此必须是2的倍数。
     * 例如 ` contains("at", text, true, "code", "123456") ` 则代表匹配at类型的猫猫码，其中有一个参数为"code=123456"。
     * @param type 猫猫码小类型，例如at, 或者空字符串。
     * @param text 正文文本。
     * @param params 要匹配的参数列表。
     */
    override fun contains(
        text: String,
        type: String,
        encode: Boolean,
        vararg params: CatKV<String, String>
    ): Boolean {
        val paramArray: Array<String> = if (params.isNotEmpty()) {
            Array(params.size) { i ->
                val k: String = params[i].key
                val v: String = if (encode) params[i].value.enCatParam()
                else params[i].value

                "$k$CAT_KV$v"
            }

        } else emptyArray()

        // contains.
        return containsFromText(text, type, *paramArray)
    }


}