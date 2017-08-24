//
// Created by zhangj on 2017/8/24.
//

#include <jni.h>


// com.ndk.senssun.www.zjndklibrary   NativeZJ
extern "C"
JNIEXPORT jint JNICALL
Java_com_ndk_senssun_www_zjndklibrary_NativeZJ_addition(JNIEnv *env, jobject instance, jint a, jint b) {
    return a + b;
}

extern "C"
JNIEXPORT jint JNICALL
Java_com_ndk_senssun_www_zjndklibrary_NativeZJ_subtraction(JNIEnv *env, jobject instance,  jint a, jint b) {
    return a - b;
}
