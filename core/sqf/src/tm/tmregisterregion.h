/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_apache_hadoop_hbase_client_transactional_TransactionState */

#ifndef _Included_org_apache_hadoop_hbase_client_transactional_TransactionState
#define _Included_org_apache_hadoop_hbase_client_transactional_TransactionState
#ifdef __cplusplus
extern "C" {
#endif
#undef org_apache_hadoop_hbase_client_transactional_TransactionState_DOPUT_WB_CHECK
#define org_apache_hadoop_hbase_client_transactional_TransactionState_DOPUT_WB_CHECK 10L

/*
 * Class:     org_apache_hadoop_hbase_client_transactional_TransactionState
 * Method:    registerRegion2
 * Signature: (I[B[B)V   
 */
JNIEXPORT void JNICALL Java_org_apache_hadoop_hbase_client_transactional_TransactionState_registerRegion
(JNIEnv *pp_env, jobject pv_object, jlong pv_transid, jint pv_port, jbyteArray pv_hostname, jlong pv_startcode, jbyteArray pv_dos);

#ifdef __cplusplus
}
#endif
#endif
