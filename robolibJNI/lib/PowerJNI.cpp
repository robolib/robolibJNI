#include <jni.h>
#include "io_github_robolib_jni_PowerJNI.h"
#include "HAL/Power.hpp"

/*
 * Class:     io_github_robolib_jni_PowerJNI
 * Method:    getVinVoltage
 * Signature: (Ljava/nio/IntBuffer;)F
 */
JNIEXPORT jfloat JNICALL Java_io_github_robolib_jni_PowerJNI_getVinVoltage
  (JNIEnv * env, jclass, jobject status)
{
	jint * statusPtr = (jint*)env->GetDirectBufferAddress(status);
	return getVinVoltage(statusPtr);
}

/*
 * Class:     io_github_robolib_jni_PowerJNI
 * Method:    getVinCurrent
 * Signature: (Ljava/nio/IntBuffer;)F
 */
JNIEXPORT jfloat JNICALL Java_io_github_robolib_jni_PowerJNI_getVinCurrent
  (JNIEnv * env, jclass, jobject status)
{
	jint * statusPtr = (jint*)env->GetDirectBufferAddress(status);
	return getVinCurrent(statusPtr);
}

/*
 * Class:     io_github_robolib_jni_PowerJNI
 * Method:    getUserVoltage6V
 * Signature: (Ljava/nio/IntBuffer;)F
 */
JNIEXPORT jfloat JNICALL Java_io_github_robolib_jni_PowerJNI_getUserVoltage6V
  (JNIEnv * env, jclass, jobject status)
{
	jint * statusPtr = (jint*)env->GetDirectBufferAddress(status);
	return getUserVoltage6V(statusPtr);
}

/*
 * Class:     io_github_robolib_jni_PowerJNI
 * Method:    getUserCurrent6V
 * Signature: (Ljava/nio/IntBuffer;)F
 */
JNIEXPORT jfloat JNICALL Java_io_github_robolib_jni_PowerJNI_getUserCurrent6V
  (JNIEnv * env, jclass, jobject status)
{
	jint * statusPtr = (jint*)env->GetDirectBufferAddress(status);
	return getUserCurrent6V(statusPtr);
}

/*
 * Class:     io_github_robolib_jni_PowerJNI
 * Method:    getUserActive6V
 * Signature: (Ljava/nio/IntBuffer;)Z
 */
JNIEXPORT jboolean JNICALL Java_io_github_robolib_jni_PowerJNI_getUserActive6V
  (JNIEnv * env, jclass, jobject status)
{
	jint * statusPtr = (jint*)env->GetDirectBufferAddress(status);
	return getUserActive6V(statusPtr);
}

/*
 * Class:     io_github_robolib_jni_PowerJNI
 * Method:    getUserCurrentFaults6V
 * Signature: (Ljava/nio/IntBuffer;)I
 */
JNIEXPORT jint JNICALL Java_io_github_robolib_jni_PowerJNI_getUserCurrentFaults6V
  (JNIEnv * env, jclass, jobject status)
{
	jint * statusPtr = (jint*)env->GetDirectBufferAddress(status);
	return getUserCurrentFaults6V(statusPtr);
}

/*
 * Class:     io_github_robolib_jni_PowerJNI
 * Method:    getUserVoltage5V
 * Signature: (Ljava/nio/IntBuffer;)F
 */
JNIEXPORT jfloat JNICALL Java_io_github_robolib_jni_PowerJNI_getUserVoltage5V
  (JNIEnv * env, jclass, jobject status)
{
	jint * statusPtr = (jint*)env->GetDirectBufferAddress(status);
	return getUserVoltage5V(statusPtr);
}

/*
 * Class:     io_github_robolib_jni_PowerJNI
 * Method:    getUserCurrent5V
 * Signature: (Ljava/nio/IntBuffer;)F
 */
JNIEXPORT jfloat JNICALL Java_io_github_robolib_jni_PowerJNI_getUserCurrent5V
  (JNIEnv * env, jclass, jobject status)
{
	jint * statusPtr = (jint*)env->GetDirectBufferAddress(status);
	return getUserCurrent5V(statusPtr);
}

/*
 * Class:     io_github_robolib_jni_PowerJNI
 * Method:    getUserActive5V
 * Signature: (Ljava/nio/IntBuffer;)Z
 */
JNIEXPORT jboolean JNICALL Java_io_github_robolib_jni_PowerJNI_getUserActive5V
  (JNIEnv * env, jclass, jobject status)
{
	jint * statusPtr = (jint*)env->GetDirectBufferAddress(status);
	return getUserActive5V(statusPtr);
}

/*
 * Class:     io_github_robolib_jni_PowerJNI
 * Method:    getUserCurrentFaults5V
 * Signature: (Ljava/nio/IntBuffer;)I
 */
JNIEXPORT jint JNICALL Java_io_github_robolib_jni_PowerJNI_getUserCurrentFaults5V
  (JNIEnv * env, jclass, jobject status)
{
	jint * statusPtr = (jint*)env->GetDirectBufferAddress(status);
	return getUserCurrentFaults5V(statusPtr);
}

/*
 * Class:     io_github_robolib_jni_PowerJNI
 * Method:    getUserVoltage3V3
 * Signature: (Ljava/nio/IntBuffer;)F
 */
JNIEXPORT jfloat JNICALL Java_io_github_robolib_jni_PowerJNI_getUserVoltage3V3
  (JNIEnv * env, jclass, jobject status)
{
	jint * statusPtr = (jint*)env->GetDirectBufferAddress(status);
	return getUserVoltage3V3(statusPtr);
}

/*
 * Class:     io_github_robolib_jni_PowerJNI
 * Method:    getUserCurrent3V3
 * Signature: (Ljava/nio/IntBuffer;)F
 */
JNIEXPORT jfloat JNICALL Java_io_github_robolib_jni_PowerJNI_getUserCurrent3V3
  (JNIEnv * env, jclass, jobject status)
{
	jint * statusPtr = (jint*)env->GetDirectBufferAddress(status);
	return getUserCurrent3V3(statusPtr);
}

/*
 * Class:     io_github_robolib_jni_PowerJNI
 * Method:    getUserActive3V3
 * Signature: (Ljava/nio/IntBuffer;)Z
 */
JNIEXPORT jboolean JNICALL Java_io_github_robolib_jni_PowerJNI_getUserActive3V3
  (JNIEnv * env, jclass, jobject status)
{
	jint * statusPtr = (jint*)env->GetDirectBufferAddress(status);
	return getUserActive3V3(statusPtr);
}

/*
 * Class:     io_github_robolib_jni_PowerJNI
 * Method:    getUserCurrentFaults3V3
 * Signature: (Ljava/nio/IntBuffer;)I
 */
JNIEXPORT jint JNICALL Java_io_github_robolib_jni_PowerJNI_getUserCurrentFaults3V3
  (JNIEnv * env, jclass, jobject status)
{
	jint * statusPtr = (jint*)env->GetDirectBufferAddress(status);
	return getUserCurrentFaults3V3(statusPtr);
}

