//
// Created by neopi on 17-2-22.
//
#include "com_neopi_demo_jni_JniUtils.h"

JNIEXPORT jint JNICALL Java_com_neopi_demo_jni_JniUtils_secondTest
        (JNIEnv *env, jobject jobject1, jint int1, jint int2) {
    return (int1+int2);
}
