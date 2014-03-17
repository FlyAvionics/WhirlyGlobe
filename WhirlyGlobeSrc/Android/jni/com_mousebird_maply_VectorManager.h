/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_mousebird_maply_VectorManager */

#ifndef _Included_com_mousebird_maply_VectorManager
#define _Included_com_mousebird_maply_VectorManager
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_mousebird_maply_VectorManager
 * Method:    addVectors
 * Signature: (Ljava/util/List;Lcom/mousebird/maply/VectorInfo;Lcom/mousebird/maply/ChangeSet;)J
 */
JNIEXPORT jlong JNICALL Java_com_mousebird_maply_VectorManager_addVectors
  (JNIEnv *, jobject, jobject, jobject, jobject);

/*
 * Class:     com_mousebird_maply_VectorManager
 * Method:    removeVectors
 * Signature: ([JLcom/mousebird/maply/ChangeSet;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_VectorManager_removeVectors
  (JNIEnv *, jobject, jlongArray, jobject);

/*
 * Class:     com_mousebird_maply_VectorManager
 * Method:    enableVectors
 * Signature: ([JZLcom/mousebird/maply/ChangeSet;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_VectorManager_enableVectors
  (JNIEnv *, jobject, jlongArray, jboolean, jobject);

/*
 * Class:     com_mousebird_maply_VectorManager
 * Method:    nativeInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_VectorManager_nativeInit
  (JNIEnv *, jclass);

/*
 * Class:     com_mousebird_maply_VectorManager
 * Method:    initialise
 * Signature: (Lcom/mousebird/maply/MapScene;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_VectorManager_initialise
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_mousebird_maply_VectorManager
 * Method:    dispose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_VectorManager_dispose
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
