package com.ndk.senssun.www.zjndklibrary;

/**
 * Created by zhangj on 2017/8/24.
 */

public class NativeZJ {

    private static final String SELF_LIB_NAME = "native_zj";

    static {
        System.loadLibrary(SELF_LIB_NAME);
    }

    public native int addition(int a, int b);

    public native int subtraction(int a, int b);
}


