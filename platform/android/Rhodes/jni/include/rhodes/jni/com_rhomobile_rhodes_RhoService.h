/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_rhomobile_rhodes_RhoService */

#ifndef _Included_com_rhomobile_rhodes_RhoService
#define _Included_com_rhomobile_rhodes_RhoService
#ifdef __cplusplus
extern "C" {
#endif
#undef com_rhomobile_rhodes_RhoService_DOWNLOAD_PACKAGE_ID
#define com_rhomobile_rhodes_RhoService_DOWNLOAD_PACKAGE_ID 1L
#undef com_rhomobile_rhodes_RhoService_RHO_SPLASH_VIEW
#define com_rhomobile_rhodes_RhoService_RHO_SPLASH_VIEW 1L
#undef com_rhomobile_rhodes_RhoService_RHO_MAIN_VIEW
#define com_rhomobile_rhodes_RhoService_RHO_MAIN_VIEW 2L
#undef com_rhomobile_rhodes_RhoService_RHO_TOOLBAR_VIEW
#define com_rhomobile_rhodes_RhoService_RHO_TOOLBAR_VIEW 3L
/*
 * Class:     com_rhomobile_rhodes_RhoService
 * Method:    initClassLoader
 * Signature: (Ljava/lang/ClassLoader;)V
 */
JNIEXPORT void JNICALL Java_com_rhomobile_rhodes_RhoService_initClassLoader
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_rhomobile_rhodes_RhoService
 * Method:    createRhodesApp
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_rhomobile_rhodes_RhoService_createRhodesApp
  (JNIEnv *, jobject);

/*
 * Class:     com_rhomobile_rhodes_RhoService
 * Method:    startRhodesApp
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_rhomobile_rhodes_RhoService_startRhodesApp
  (JNIEnv *, jobject);

/*
 * Class:     com_rhomobile_rhodes_RhoService
 * Method:    doSyncAllSources
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_rhomobile_rhodes_RhoService_doSyncAllSources
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_rhomobile_rhodes_RhoService
 * Method:    doSyncSource
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_rhomobile_rhodes_RhoService_doSyncSource
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_rhomobile_rhodes_RhoService
 * Method:    getOptionsUrl
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_rhomobile_rhodes_RhoService_getOptionsUrl
  (JNIEnv *, jobject);

/*
 * Class:     com_rhomobile_rhodes_RhoService
 * Method:    getStartUrl
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_rhomobile_rhodes_RhoService_getStartUrl
  (JNIEnv *, jobject);

/*
 * Class:     com_rhomobile_rhodes_RhoService
 * Method:    getCurrentUrl
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_rhomobile_rhodes_RhoService_getCurrentUrl
  (JNIEnv *, jobject);

/*
 * Class:     com_rhomobile_rhodes_RhoService
 * Method:    getAppBackUrl
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_rhomobile_rhodes_RhoService_getAppBackUrl
  (JNIEnv *, jobject);

/*
 * Class:     com_rhomobile_rhodes_RhoService
 * Method:    getBlobPath
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_rhomobile_rhodes_RhoService_getBlobPath
  (JNIEnv *, jclass);

/*
 * Class:     com_rhomobile_rhodes_RhoService
 * Method:    normalizeUrl
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_rhomobile_rhodes_RhoService_normalizeUrl
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_rhomobile_rhodes_RhoService
 * Method:    getBuildConfig
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_rhomobile_rhodes_RhoService_getBuildConfig
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_rhomobile_rhodes_RhoService
 * Method:    loadUrl
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_rhomobile_rhodes_RhoService_loadUrl
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_rhomobile_rhodes_RhoService
 * Method:    navigateBack
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_rhomobile_rhodes_RhoService_navigateBack
  (JNIEnv *, jclass);

/*
 * Class:     com_rhomobile_rhodes_RhoService
 * Method:    doRequest
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_rhomobile_rhodes_RhoService_doRequest
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_rhomobile_rhodes_RhoService
 * Method:    callActivationCallback
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_rhomobile_rhodes_RhoService_callActivationCallback
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_rhomobile_rhodes_RhoService
 * Method:    makeLink
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_rhomobile_rhodes_RhoService_makeLink
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     com_rhomobile_rhodes_RhoService
 * Method:    onScreenOrientationChanged
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_rhomobile_rhodes_RhoService_onScreenOrientationChanged
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_rhomobile_rhodes_RhoService
 * Method:    nativeInitPath
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_rhomobile_rhodes_RhoService_nativeInitPath
  (JNIEnv *, jobject, jstring, jstring, jstring);

/*
 * Class:     com_rhomobile_rhodes_RhoService
 * Method:    setPushRegistrationId
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_rhomobile_rhodes_RhoService_setPushRegistrationId
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_rhomobile_rhodes_RhoService
 * Method:    callPushCallback
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_rhomobile_rhodes_RhoService_callPushCallback
  (JNIEnv *, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif