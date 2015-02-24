#include <jni.h>
#include <assert.h>
#include "Log.hpp"
#include "io_github_robolib_jni_HALUtil.h"
#include "HAL/HAL.hpp"
#include "errno.h"
#include <string.h>

// set the logging level
TLogLevel halUtilLogLevel = logWARNING;

#define HALUTIL_LOG(level) \
    if (level > halUtilLogLevel) ; \
    else Log().Get(level)


//
// indicate JNI version support desired
//
JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *reserved)
{
	// set our logging level
	Log::ReportingLevel() = logDEBUG;
	return JNI_VERSION_1_6;
}

/*
 * Class:     io_github_robolib_jni_HALUtil
 * Method:    initializeMutex
 * Signature: (I)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_io_github_robolib_jni_HALUtil_initializeMutexNormal
(JNIEnv * env, jclass)
{
	HALUTIL_LOG(logDEBUG) << "Calling HALUtil initializeMutex";
	MUTEX_ID* mutexPtr = (MUTEX_ID*)new unsigned char[4];
	*mutexPtr = initializeMutexNormal();
	HALUTIL_LOG(logDEBUG) << "Mutex Ptr = " << *mutexPtr;
	return env->NewDirectByteBuffer( mutexPtr, 4);
}

/*
 * Class:     io_github_robolib_jni_HALUtil
 * Method:    deleteMutex
 * Signature: (Ljava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_io_github_robolib_jni_HALUtil_deleteMutex
(JNIEnv * env, jclass, jobject id )
{
	HALUTIL_LOG(logDEBUG) << "Calling HALUtil deleteMutex";
	MUTEX_ID* javaId = (MUTEX_ID*)env->GetDirectBufferAddress(id);
	HALUTIL_LOG(logDEBUG) << "Mutex Ptr = " << *javaId;
	deleteMutex( *javaId );
}

/*
 * Class:     io_github_robolib_jni_HALUtil
 * Method:    takeMutex
 * Signature: (Ljava/nio/ByteBuffer;I)B
 */
JNIEXPORT jbyte JNICALL Java_io_github_robolib_jni_HALUtil_takeMutex
(JNIEnv * env, jclass, jobject id)
{
	//HALUTIL_LOG(logDEBUG) << "Calling HALUtil takeMutex";
	MUTEX_ID* javaId = (MUTEX_ID*)env->GetDirectBufferAddress(id);
	//HALUTIL_LOG(logDEBUG) << "Mutex Ptr = " << *javaId;
	jbyte returnValue = takeMutex(*javaId);
	//HALUTIL_LOG(logDEBUG) << "Take Result = " << (void*)returnValue;
	return returnValue;
}

/*
 * Class:     io_github_robolib_jni_HALUtil
 * Method:    initializeMultiWait
 * Signature: ()Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_io_github_robolib_jni_HALUtil_initializeMultiWait
(JNIEnv * env, jclass)
{
	HALUTIL_LOG(logDEBUG) << "Calling HALUtil initializeMultiWait";
	MULTIWAIT_ID* multiWaitPtr = (MULTIWAIT_ID*)new unsigned char[4];
	*multiWaitPtr = initializeMultiWait();
	HALUTIL_LOG(logDEBUG) << "MultiWait Ptr = " << *multiWaitPtr;
	return env->NewDirectByteBuffer( multiWaitPtr, 4);
}

/*
 * Class:     io_github_robolib_jni_HALUtil
 * Method:    deleteMultiWait
 * Signature: (Ljava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_io_github_robolib_jni_HALUtil_deleteMultiWait
(JNIEnv * env, jclass, jobject id)
{
	HALUTIL_LOG(logDEBUG) << "Calling HALUtil deleteMultiWait";
	MULTIWAIT_ID* javaId = (MULTIWAIT_ID*)env->GetDirectBufferAddress(id);
	HALUTIL_LOG(logDEBUG) << "MultiWait Ptr = " << *javaId;
	deleteMultiWait( *javaId );
}

/*
 * Class:     io_github_robolib_jni_HALUtil
 * Method:    takeMultiWait
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;I)B
 */
JNIEXPORT jbyte JNICALL Java_io_github_robolib_jni_HALUtil_takeMultiWait
  (JNIEnv * env, jclass, jobject multiWaitId, jobject mutexId, jint timeout)
{
 	MULTIWAIT_ID* javaMultiWaitId = (MULTIWAIT_ID*)env->GetDirectBufferAddress(multiWaitId);
	MUTEX_ID* javaMutexId = (MUTEX_ID*)env->GetDirectBufferAddress(mutexId);
	jbyte returnValue = takeMultiWait(*javaMultiWaitId, *javaMutexId, (int32_t) timeout);
	return returnValue;
}

/*
 * Class:     io_github_robolib_jni_HALUtil
 * Method:    getFPGAVersion
 * Signature: (Ljava/nio/IntBuffer;)S
 */
JNIEXPORT jshort JNICALL Java_io_github_robolib_jni_HALUtil_getFPGAVersion
  (JNIEnv * env, jclass, jobject status)
{
	HALUTIL_LOG(logDEBUG) << "Calling HALUtil getFPGAVersion";
	jint * statusPtr = (jint*)env->GetDirectBufferAddress(status);
	jshort returnValue = getFPGAVersion( statusPtr );
	HALUTIL_LOG(logDEBUG) << "Status = " << *statusPtr;
	HALUTIL_LOG(logDEBUG) << "FPGAVersion = " << returnValue;
	return returnValue;
}

/*
 * Class:     io_github_robolib_jni_HALUtil
 * Method:    getFPGARevision
 * Signature: (Ljava/nio/IntBuffer;)I
 */
JNIEXPORT jint JNICALL Java_io_github_robolib_jni_HALUtil_getFPGARevision
  (JNIEnv * env, jclass, jobject status)
{
	HALUTIL_LOG(logDEBUG) << "Calling HALUtil getFPGARevision";
	jint * statusPtr = (jint*)env->GetDirectBufferAddress(status);
	jint returnValue = getFPGARevision( statusPtr );
	HALUTIL_LOG(logDEBUG) << "Status = " << *statusPtr;
	HALUTIL_LOG(logDEBUG) << "FPGARevision = " << returnValue;
	return returnValue;
}

/*
 * Class:     io_github_robolib_jni_HALUtil
 * Method:    getFPGATime
 * Signature: (Ljava/nio/IntBuffer;)I
 */
JNIEXPORT jlong JNICALL Java_io_github_robolib_jni_HALUtil_getFPGATime
  (JNIEnv * env, jclass, jobject status)
{
	//HALUTIL_LOG(logDEBUG) << "Calling HALUtil getFPGATime";
	jint * statusPtr = (jint*)env->GetDirectBufferAddress(status);
	jlong returnValue = getFPGATime( statusPtr );
	//HALUTIL_LOG(logDEBUG) << "Status = " << *statusPtr;
	//HALUTIL_LOG(logDEBUG) << "FPGATime = " << returnValue;
	return returnValue;

}

/*
 * Class:     io_github_robolib_jni_HALUtil
 * Method:    getFPGAButton
 * Signature: (Ljava/nio/IntBuffer;)I
 */
JNIEXPORT jboolean JNICALL Java_io_github_robolib_jni_HALUtil_getFPGAButton
  (JNIEnv * env, jclass, jobject status)
{
	//HALUTIL_LOG(logDEBUG) << "Calling HALUtil getFPGATime";
	jint * statusPtr = (jint*)env->GetDirectBufferAddress(status);
	jboolean returnValue = getFPGAButton( statusPtr );
	//HALUTIL_LOG(logDEBUG) << "Status = " << *statusPtr;
	//HALUTIL_LOG(logDEBUG) << "FPGATime = " << returnValue;
	return returnValue;

}

/*
 * Class:     io_github_robolib_jni_HALUtil
 * Method:    getHALErrorMessage
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_io_github_robolib_jni_HALUtil_getHALErrorMessage
  (JNIEnv * paramEnv, jclass, jint paramId)
{
	const char * msg = getHALErrorMessage(paramId);
	HALUTIL_LOG(logDEBUG) << "Calling HALUtil getHALErrorMessage id=" << paramId << " msg=" << msg;
	return paramEnv->NewStringUTF(msg);
}

/*
 * Class:     io_github_robolib_jni_HALUtil
 * Method:    getHALErrno
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_io_github_robolib_jni_HALUtil_getHALErrno
  (JNIEnv *, jclass)
{
	return errno;
}

/*
 * Class:     io_github_robolib_jni_HALUtil
 * Method:    getHALstrerror
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_io_github_robolib_jni_HALUtil_getHALstrerror
  (JNIEnv * env, jclass, jint errorCode)
{
	const char * msg = strerror(errno);
	HALUTIL_LOG(logDEBUG) << "Calling HALUtil getHALstrerror errorCode=" << errorCode << " msg=" << msg;
	return env->NewStringUTF(msg);
}

JNIEXPORT void JNICALL Java_io_github_robolib_jni_HALUtil_setRadioLED
  (JNIEnv * env, jclass, jchar value, jobject status)
{
    jint * statusPtr = (jint*)env->GetDirectBufferAddress(status);
    setRadioLED(value, statusPtr);

}

JNIEXPORT void JNICALL Java_io_github_robolib_jni_HALUtil_setCommLED
  (JNIEnv * env, jclass, jchar value, jobject status)
{
    jint * statusPtr = (jint*)env->GetDirectBufferAddress(status);
    setCommLED(value, statusPtr);

}

JNIEXPORT void JNICALL Java_io_github_robolib_jni_HALUtil_setModeLED
  (JNIEnv * env, jclass, jchar value, jobject status)
{
    jint * statusPtr = (jint*)env->GetDirectBufferAddress(status);
    setModeLED(value, statusPtr);

}

JNIEXPORT void JNICALL Java_io_github_robolib_jni_HALUtil_setRSLLED
  (JNIEnv * env, jclass, jboolean value, jobject status)
{
    jint * statusPtr = (jint*)env->GetDirectBufferAddress(status);
    setRSLLED(value, statusPtr);

}
