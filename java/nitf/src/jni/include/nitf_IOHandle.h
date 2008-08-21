/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class nitf_IOHandle */

#ifndef _Included_nitf_IOHandle
#define _Included_nitf_IOHandle
#ifdef __cplusplus
extern "C" {
#endif
#undef nitf_IOHandle_INVALID_ADDRESS
#define nitf_IOHandle_INVALID_ADDRESS 0L
#undef nitf_IOHandle_NITF_CREATE
#define nitf_IOHandle_NITF_CREATE 10L
#undef nitf_IOHandle_NITF_TRUNCATE
#define nitf_IOHandle_NITF_TRUNCATE 11L
#undef nitf_IOHandle_NITF_OPEN_EXISTING
#define nitf_IOHandle_NITF_OPEN_EXISTING 12L
#undef nitf_IOHandle_NITF_ACCESS_READONLY
#define nitf_IOHandle_NITF_ACCESS_READONLY 1L
#undef nitf_IOHandle_NITF_ACCESS_WRITEONLY
#define nitf_IOHandle_NITF_ACCESS_WRITEONLY 2L
#undef nitf_IOHandle_NITF_ACCESS_READWRITE
#define nitf_IOHandle_NITF_ACCESS_READWRITE 3L
#undef nitf_IOHandle_SEEK_CUR
#define nitf_IOHandle_SEEK_CUR 10L
#undef nitf_IOHandle_SEEK_SET
#define nitf_IOHandle_SEEK_SET 20L
#undef nitf_IOHandle_SEEK_END
#define nitf_IOHandle_SEEK_END 30L
/*
 * Class:     nitf_IOHandle
 * Method:    read
 * Signature: ([BI)V
 */
JNIEXPORT void JNICALL Java_nitf_IOHandle_read
  (JNIEnv *, jobject, jbyteArray, jint);

/*
 * Class:     nitf_IOHandle
 * Method:    write
 * Signature: ([BI)V
 */
JNIEXPORT void JNICALL Java_nitf_IOHandle_write
  (JNIEnv *, jobject, jbyteArray, jint);

/*
 * Class:     nitf_IOHandle
 * Method:    seek
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_nitf_IOHandle_seek
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     nitf_IOHandle
 * Method:    tell
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_nitf_IOHandle_tell
  (JNIEnv *, jobject);

/*
 * Class:     nitf_IOHandle
 * Method:    getSize
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_nitf_IOHandle_getSize
  (JNIEnv *, jobject);

/*
 * Class:     nitf_IOHandle
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_nitf_IOHandle_close
  (JNIEnv *, jobject);

/*
 * Class:     nitf_IOHandle
 * Method:    createHandle
 * Signature: (Ljava/lang/String;II)J
 */
JNIEXPORT jlong JNICALL Java_nitf_IOHandle_createHandle
  (JNIEnv *, jobject, jstring, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
