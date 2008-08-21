/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class nitf_RESubheader */

#ifndef _Included_nitf_RESubheader
#define _Included_nitf_RESubheader
#ifdef __cplusplus
extern "C" {
#endif
#undef nitf_RESubheader_INVALID_ADDRESS
#define nitf_RESubheader_INVALID_ADDRESS 0L
/*
 * Class:     nitf_RESubheader
 * Method:    getFilePartType
 * Signature: ()Lnitf/Field;
 */
JNIEXPORT jobject JNICALL Java_nitf_RESubheader_getFilePartType
  (JNIEnv *, jobject);

/*
 * Class:     nitf_RESubheader
 * Method:    getTypeID
 * Signature: ()Lnitf/Field;
 */
JNIEXPORT jobject JNICALL Java_nitf_RESubheader_getTypeID
  (JNIEnv *, jobject);

/*
 * Class:     nitf_RESubheader
 * Method:    getSecurityClass
 * Signature: ()Lnitf/Field;
 */
JNIEXPORT jobject JNICALL Java_nitf_RESubheader_getSecurityClass
  (JNIEnv *, jobject);

/*
 * Class:     nitf_RESubheader
 * Method:    getSecurityGroup
 * Signature: ()Lnitf/FileSecurity;
 */
JNIEXPORT jobject JNICALL Java_nitf_RESubheader_getSecurityGroup
  (JNIEnv *, jobject);

/*
 * Class:     nitf_RESubheader
 * Method:    getVersion
 * Signature: ()Lnitf/Field;
 */
JNIEXPORT jobject JNICALL Java_nitf_RESubheader_getVersion
  (JNIEnv *, jobject);

/*
 * Class:     nitf_RESubheader
 * Method:    getSubheaderFieldsLength
 * Signature: ()Lnitf/Field;
 */
JNIEXPORT jobject JNICALL Java_nitf_RESubheader_getSubheaderFieldsLength
  (JNIEnv *, jobject);

/*
 * Class:     nitf_RESubheader
 * Method:    getSubheaderFields
 * Signature: ()[C
 */
JNIEXPORT jcharArray JNICALL Java_nitf_RESubheader_getSubheaderFields
  (JNIEnv *, jobject);

/*
 * Class:     nitf_RESubheader
 * Method:    getDataLength
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_nitf_RESubheader_getDataLength
  (JNIEnv *, jobject);

/*
 * Class:     nitf_RESubheader
 * Method:    setDataLength
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_nitf_RESubheader_setDataLength
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
