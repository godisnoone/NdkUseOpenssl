//
// Created by areful on 2020/9/2.
//

#ifndef ANDROID_EXTENSION_LIBRARY_RSA_LIB_H
#define ANDROID_EXTENSION_LIBRARY_RSA_LIB_H

#ifdef __cplusplus
extern "C" {
#endif

#include <jni.h>
#define JNI_CRYPTO(x) Java_cn_areful_openssl_PaymentSecureManager_##x


/**
 * nativeEncrypt
 */
jstring JNI_CRYPTO(nativeEncrypt)(JNIEnv *env, jclass thiz,
                                  jstring jKey, jstring jContent);


/**
 * nativeVerify
 */
jboolean JNI_CRYPTO (nativeVerify)(JNIEnv *env, jclass thiz,
                                   jstring jKey, jstring jContent, jbyteArray jSignBytes);


#ifdef __cplusplus
}
#endif

#endif //ANDROID_EXTENSION_LIBRARY_RSA_LIB_H