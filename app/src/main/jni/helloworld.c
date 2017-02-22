//
// Created by neopi on 17-2-22.
//
#include "com_neopi_demo_jni_JniUtils.h"

JNIEXPORT jstring JNICALL Java_com_neopi_demo_jni_JniUtils_sayHello
        (JNIEnv *env, jobject obj) {
    return (*env)->NewStringUTF(env, "Hello World !");
}
