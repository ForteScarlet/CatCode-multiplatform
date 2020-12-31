package love.forte.test;

import catcode.WildcatCodeUtil;

/**
 * @author ForteScarlet
 */
public class Test1 {
    public static void main(String[] args) {
        // 获取CQ工具类。
        WildcatCodeUtil cqCodeUtil = WildcatCodeUtil.getInstance("CQ");

        // 构建一个参数为 code=123的at类型的CQ码
        String cqCode = cqCodeUtil.toCat("at", "code=123");

        // [CQ:at,code=123]
        System.out.println(cqCode);


    }
}
