/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_monetdb_embedded_MonetDBEmbedded */

#ifndef _Included_org_monetdb_embedded_MonetDBEmbedded
#define _Included_org_monetdb_embedded_MonetDBEmbedded
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_monetdb_embedded_MonetDBEmbedded
 * Method:    startupNative
 * Signature: (Ljava/lang/String;Z)I
 */
JNIEXPORT jint JNICALL Java_org_monetdb_embedded_MonetDBEmbedded_startupNative
  (JNIEnv *, jobject, jstring, jboolean);

/*
 * Class:     org_monetdb_embedded_MonetDBEmbedded
 * Method:    query
 * Signature: (Ljava/lang/String;)Lorg/monetdb/embedded/result/EmbeddedQueryResult;
 */
JNIEXPORT jobject JNICALL Java_org_monetdb_embedded_MonetDBEmbedded_query
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_monetdb_embedded_MonetDBEmbedded
 * Method:    append
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/reflect/Array;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_monetdb_embedded_MonetDBEmbedded_append
  (JNIEnv *, jobject, jstring, jstring, jobject);

#ifdef __cplusplus
}
#endif
#endif
