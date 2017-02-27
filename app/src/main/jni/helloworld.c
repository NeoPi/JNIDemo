//
// Created by neopi on 17-2-22.
//
#include "com_neopi_demo_jni_JniUtils.h"
#include <syslog.h>
#include <stdlib.h>
#include <openssl/md5.h>

JNIEXPORT jstring JNICALL Java_com_neopi_demo_jni_JniUtils_sayHello
        (JNIEnv *env, jobject obj) {
    return (*env)->NewStringUTF(env, "Hello World !");
}


JNIEXPORT jstring JNICALL Java_com_neopi_demo_jni_JniUtils_encriptyMap
        (JNIEnv *env, jobject jobject1, jobject jurl, jobject paramsmap, jstring securityKey) {
    syslog(1,"%s","SSSSSSS");

    const char *str = "sdasdadasgasg";
    return (*env)->NewStringUTF(env,str);
}

/*
 * Class:     com_neopi_demo_jni_JniUtils
 * Method:    encriptyMap
 * Signature: (Ljava/net/URL;Ljava/util/Map;Ljava/util/Map;Ljava/lang/String;)Ljava/util/Map;
 */
JNIEXPORT jobject JNICALL Java_com_neopi_demo_jni_JniUtils_encriptyMaps
        (JNIEnv *env, jobject jobject1, jobject url, jobject paramsmap, jobject newMap, jstring securityKey) {

    jclass params = (*env) -> GetObjectClass(env,paramsmap);
    jmethodID mapPutAll = (*env) -> GetMethodID(env,params,"putAll","(Ljava/util/Map;)V");
    (*env) -> CallVoidMethod(env,newMap,mapPutAll,paramsmap);

    jmethodID mapPut = (*env) -> GetMethodID(env,params,"put","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    jstring key3 = (*env)->NewStringUTF(env, "3");
    jstring value3 = (*env)->NewStringUTF(env, "pen");


    unsigned char *sMd5 = MD5(securityKey,32,NULL);
    jstring key4 = (*env)->NewStringUTF(env, "4");
    jstring value4 = (*env)->NewStringUTF(env, sMd5);

    (*env) -> CallObjectMethod(env, newMap, mapPut, key3, value3);
    (*env) -> CallObjectMethod(env, newMap, mapPut, key4, value4);
//    free(key3);
//    free(value3);
    return newMap ;
}