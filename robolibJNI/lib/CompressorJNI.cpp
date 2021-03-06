#include "Log.hpp"
#include "io_github_robolib_jni_CompressorJNI.h"
#include "HAL/HAL.hpp"

typedef void *VoidPointer;

/*
 * Class:     io_github_robolib_jni_CompressorJNI
 * Method:    initializeCompressor
 * Signature: (B)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_io_github_robolib_jni_CompressorJNI_initializeCompressor
  (JNIEnv *env, jclass, jbyte module)
{
	VoidPointer *pcm_pointer = new VoidPointer;
	*pcm_pointer = initializeCompressor(module);
	
	return env->NewDirectByteBuffer(pcm_pointer, 4);
}

/*
 * Class:     io_github_robolib_jni_CompressorJNI
 * Method:    checkCompressorModule
 * Signature: (B)Z
 */
JNIEXPORT jboolean JNICALL Java_io_github_robolib_jni_CompressorJNI_checkCompressorModule
  (JNIEnv *env, jclass, jbyte module)
{
	return checkCompressorModule(module);
}


/*
 * Class:     io_github_robolib_jni_CompressorJNI
 * Method:    getCompressor
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/IntBuffer;)Z
 */
JNIEXPORT jboolean JNICALL Java_io_github_robolib_jni_CompressorJNI_getCompressor
  (JNIEnv *env, jclass, jobject pcm_pointer_object, jobject status)
{
	VoidPointer *pcm_pointer = (VoidPointer *)env->GetDirectBufferAddress(pcm_pointer_object);
	jint *status_pointer = (jint *)env->GetDirectBufferAddress(status);
	
	return getCompressor(*pcm_pointer, status_pointer);
}

/*
 * Class:     io_github_robolib_jni_CompressorJNI
 * Method:    setClosedLoopControl
 * Signature: (Ljava/nio/ByteBuffer;ZLjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_io_github_robolib_jni_CompressorJNI_setClosedLoopControl
  (JNIEnv *env, jclass, jobject pcm_pointer_object, jboolean value, jobject status)
{
	VoidPointer *pcm_pointer = (VoidPointer *)env->GetDirectBufferAddress(pcm_pointer_object);
	jint *status_pointer = (jint *)env->GetDirectBufferAddress(status);
	
	setClosedLoopControl(*pcm_pointer, value, status_pointer);
}

/*
 * Class:     io_github_robolib_jni_CompressorJNI
 * Method:    getClosedLoopControl
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/IntBuffer;)Z
 */
JNIEXPORT jboolean JNICALL Java_io_github_robolib_jni_CompressorJNI_getClosedLoopControl
  (JNIEnv *env, jclass, jobject pcm_pointer_object, jobject status)
{
	VoidPointer *pcm_pointer = (VoidPointer *)env->GetDirectBufferAddress(pcm_pointer_object);
	jint *status_pointer = (jint *)env->GetDirectBufferAddress(status);
	
	return getClosedLoopControl(*pcm_pointer, status_pointer);
}

/*
 * Class:     io_github_robolib_jni_CompressorJNI
 * Method:    getPressureSwitch
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/IntBuffer;)Z
 */
JNIEXPORT jboolean JNICALL Java_io_github_robolib_jni_CompressorJNI_getPressureSwitch
  (JNIEnv *env, jclass, jobject pcm_pointer_object, jobject status)
{
	VoidPointer *pcm_pointer = (VoidPointer *)env->GetDirectBufferAddress(pcm_pointer_object);
	jint *status_pointer = (jint *)env->GetDirectBufferAddress(status);
	
	return getPressureSwitch(*pcm_pointer, status_pointer);
}

/*
 * Class:     io_github_robolib_jni_CompressorJNI
 * Method:    getCompressorCurrent
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/IntBuffer;)F
 */
JNIEXPORT jfloat JNICALL Java_io_github_robolib_jni_CompressorJNI_getCompressorCurrent
  (JNIEnv *env, jclass, jobject pcm_pointer_object, jobject status)
{
	VoidPointer *pcm_pointer = (VoidPointer *)env->GetDirectBufferAddress(pcm_pointer_object);
	jint *status_pointer = (jint *)env->GetDirectBufferAddress(status);
	
	return getCompressorCurrent(*pcm_pointer, status_pointer);
}

/*
 * Class:     io_github_robolib_jni_CompressorJNI
 * Method:    getCompressorCurrentTooHighFault
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/IntBuffer;)Z
 */
JNIEXPORT jboolean JNICALL Java_io_github_robolib_jni_CompressorJNI_getCompressorCurrentTooHighFault
  (JNIEnv *env, jclass, jobject pcm_pointer_object, jobject status)
{
	VoidPointer *pcm_pointer = (VoidPointer *)env->GetDirectBufferAddress(pcm_pointer_object);
	jint *status_pointer = (jint *)env->GetDirectBufferAddress(status);
	
	return getCompressorCurrentTooHighFault(*pcm_pointer, status_pointer);
}

/*
 * Class:     io_github_robolib_jni_CompressorJNI
 * Method:    getCompressorCurrentTooHighStickyFault
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/IntBuffer;)Z
 */
JNIEXPORT jboolean JNICALL Java_io_github_robolib_jni_CompressorJNI_getCompressorCurrentTooHighStickyFault
  (JNIEnv *env, jclass, jobject pcm_pointer_object, jobject status)
{
	VoidPointer *pcm_pointer = (VoidPointer *)env->GetDirectBufferAddress(pcm_pointer_object);
	jint *status_pointer = (jint *)env->GetDirectBufferAddress(status);
	
	return getCompressorCurrentTooHighStickyFault(*pcm_pointer, status_pointer);
}

/*
 * Class:     io_github_robolib_jni_CompressorJNI
 * Method:    getCompressorShortedStickyFault
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/IntBuffer;)Z
 */
JNIEXPORT jboolean JNICALL Java_io_github_robolib_jni_CompressorJNI_getCompressorShortedStickyFault
  (JNIEnv *env, jclass, jobject pcm_pointer_object, jobject status)
{
	VoidPointer *pcm_pointer = (VoidPointer *)env->GetDirectBufferAddress(pcm_pointer_object);
	jint *status_pointer = (jint *)env->GetDirectBufferAddress(status);
	
	return getCompressorShortedStickyFault(*pcm_pointer, status_pointer);
}

/*
 * Class:     io_github_robolib_jni_CompressorJNI
 * Method:    getCompressorShortedFault
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/IntBuffer;)Z
 */
JNIEXPORT jboolean JNICALL Java_io_github_robolib_jni_CompressorJNI_getCompressorShortedFault
  (JNIEnv *env, jclass, jobject pcm_pointer_object, jobject status)
{
	VoidPointer *pcm_pointer = (VoidPointer *)env->GetDirectBufferAddress(pcm_pointer_object);
	jint *status_pointer = (jint *)env->GetDirectBufferAddress(status);
	
	return getCompressorShortedFault(*pcm_pointer, status_pointer);
}

/*
 * Class:     io_github_robolib_jni_CompressorJNI
 * Method:    getCompressorNotConnectedStickyFault
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/IntBuffer;)Z
 */
JNIEXPORT jboolean JNICALL Java_io_github_robolib_jni_CompressorJNI_getCompressorNotConnectedStickyFault
  (JNIEnv *env, jclass, jobject pcm_pointer_object, jobject status)
{
	VoidPointer *pcm_pointer = (VoidPointer *)env->GetDirectBufferAddress(pcm_pointer_object);
	jint *status_pointer = (jint *)env->GetDirectBufferAddress(status);
	
	return getCompressorNotConnectedStickyFault(*pcm_pointer, status_pointer);
}

/*
 * Class:     io_github_robolib_jni_CompressorJNI
 * Method:    getCompressorNotConnectedFault
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/IntBuffer;)Z
 */
JNIEXPORT jboolean JNICALL Java_io_github_robolib_jni_CompressorJNI_getCompressorNotConnectedFault
  (JNIEnv *env, jclass, jobject pcm_pointer_object, jobject status)
{
	VoidPointer *pcm_pointer = (VoidPointer *)env->GetDirectBufferAddress(pcm_pointer_object);
	jint *status_pointer = (jint *)env->GetDirectBufferAddress(status);
	
	return getCompressorNotConnectedFault(*pcm_pointer, status_pointer);
}
/*
 * Class:     io_github_robolib_jni_CompressorJNI
 * Method:    clearAllPCMStickyFaults
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_io_github_robolib_jni_CompressorJNI_clearAllPCMStickyFaults
  (JNIEnv *env, jclass, jobject pcm_pointer_object, jobject status)
{
	VoidPointer *pcm_pointer = (VoidPointer *)env->GetDirectBufferAddress(pcm_pointer_object);
	jint *status_pointer = (jint *)env->GetDirectBufferAddress(status);
	
	clearAllPCMStickyFaults(*pcm_pointer, status_pointer);
}
