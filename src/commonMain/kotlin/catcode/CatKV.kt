/*
 * Copyright (c) 2020. ForteScarlet All rights reserved.
 * Project  parent
 * File     Bridging.kt
 *
 * You can contact the author through the following channels:
 * github https://github.com/ForteScarlet
 * gitee  https://gitee.com/ForteScarlet
 * email  ForteScarlet@163.com
 * QQ     1149159218
 */
@file:kotlin.jvm.JvmName("CatKVs")
package catcode


/**
 * data class like [Pair].
 */
public data class CatKV<K, V>(
    @kotlin.js.JsName("key")
    val key: K,
    @kotlin.js.JsName("value")
    val value: V
    ) {
    override fun toString(): String = "KV($key$CAT_KV$value)"

    /**
     * kv companion.
     */
    companion object Construct {
        @kotlin.jvm.JvmStatic
        @kotlin.js.JsName("by")
        fun <K, V> by(k: K, v: V) = CatKV(k, v)
    }
}

/**
 * create [CatKV] instance.
 */
public infix fun <K, V> K.cTo(v: V) = CatKV(this, v)

/**
 * [CatKV] to [Pair].
 */
public fun <K, V> CatKV<K, V>.toPair() = Pair(this.key, this.value)

/**
 * [Pair] to [CatKV].
 */
public fun <K, V> Pair<K, V>.toKV() = CatKV(this.first, this.second)

/**
 * CatKV array to pair array.
 */
public fun <K, V> Array<out CatKV<K, V>>.toPair() = Array(this.size) { i -> this[i].toPair()}
