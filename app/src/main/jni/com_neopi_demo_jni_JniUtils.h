/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_neopi_demo_jni_JniUtils */

#ifndef _Included_com_neopi_demo_jni_JniUtils
#define _Included_com_neopi_demo_jni_JniUtils
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_neopi_demo_jni_JniUtils
 * Method:    secondTest
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_neopi_demo_jni_JniUtils_secondTest
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_neopi_demo_jni_JniUtils
 * Method:    sayHello
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_neopi_demo_jni_JniUtils_sayHello
  (JNIEnv *, jobject);

/*
 * Class:     com_neopi_demo_jni_JniUtils
 * Method:    encriptyMap
 * Signature: (Ljava/net/URL;Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_neopi_demo_jni_JniUtils_encriptyMap
  (JNIEnv *, jobject, jobject, jobject, jstring);

/*
 * Class:     com_neopi_demo_jni_JniUtils
 * Method:    encriptyMaps
 * Signature: (Ljava/net/URL;Ljava/util/Map;Ljava/util/Map;Ljava/lang/String;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com_neopi_demo_jni_JniUtils_encriptyMaps
  (JNIEnv *, jobject, jobject, jobject, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif
