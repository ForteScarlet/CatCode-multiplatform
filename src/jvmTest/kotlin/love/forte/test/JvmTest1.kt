package love.forte.test

import catcode.WildcatCodeUtil
import org.junit.Test


class JvmTest1 {
    @Test
    fun cqAtTest() {
        val cqcode = WildcatCodeUtil.getInstance("CQ")
        val cqAt = cqcode.stringTemplate.at("2333333")
        println(cqAt)
    }
}


