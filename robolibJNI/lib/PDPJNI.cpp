#include "io_github_robolib_hal_PDPJNI.h"
#include "HAL/PDP.hpp"

/*
 * Class:     io_github_robolib_hal_PDPJNI
 * Method:    getPDPTemperature
 * Signature: (Ljava/nio/IntBuffer;)D
 */
JNIEXPORT jdouble JNICALL Java_io_github_robolib_hal_PDPJNI_getPDPTemperature
  (JNIEnv *env, jclass, jobject status)
{
	jint *status_ptr = (jint *)env->GetDirectBufferAddress(status);
	
	return getPDPTemperature(status_ptr);
}

/*
 * Class:     io_github_robolib_hal_PDPJNI
 * Method:    getPDPVoltage
 * Signature: (Ljava/nio/IntBuffer;)D
 */
JNIEXPORT jdouble JNICALL Java_io_github_robolib_hal_PDPJNI_getPDPVoltage
  (JNIEnv *env, jclass, jobject status)
{
	jint *status_ptr = (jint *)env->GetDirectBufferAddress(status);
	
	return getPDPVoltage(status_ptr);
}

/*
 * Class:     io_github_robolib_hal_PDPJNI
 * Method:    getPDPChannelCurrent
 * Signature: (BLjava/nio/IntBuffer;)D
 */
JNIEXPORT jdouble JNICALL Java_io_github_robolib_hal_PDPJNI_getPDPChannelCurrent
  (JNIEnv *env, jclass, jbyte channel, jobject status)
{
	jint *status_ptr = (jint *)env->GetDirectBufferAddress(status);
	
	return getPDPChannelCurrent(channel, status_ptr);
}

/*
 * Class:     io_github_robolib_hal_PDPJNI
 * Method:    getPDPTotalCurrent
 * Signature: (BLjava/nio/IntBuffer;)D
 */
JNIEXPORT jdouble JNICALL Java_io_github_robolib_hal_PDPJNI_getPDPTotalCurrent
  (JNIEnv *env, jclass, jobject status)
{
	jint *status_ptr = (jint *)env->GetDirectBufferAddress(status);
	
	return getPDPTotalCurrent(status_ptr);
}

/*
 * Class:     io_github_robolib_hal_PDPJNI
 * Method:    getPDPTotalPower
 * Signature: (BLjava/nio/IntBuffer;)D
 */
JNIEXPORT jdouble JNICALL Java_io_github_robolib_hal_PDPJNI_getPDPTotalPower
  (JNIEnv *env, jclass, jobject status)
{
	jint *status_ptr = (jint *)env->GetDirectBufferAddress(status);
	
	return getPDPTotalPower(status_ptr);
}

/*
 * Class:     io_github_robolib_hal_PDPJNI
 * Method:    resetPDPTotalEnergy
 * Signature: (BLjava/nio/IntBuffer;)D
 */
JNIEXPORT jdouble JNICALL Java_io_github_robolib_hal_PDPJNI_getPDPTotalEnergy
  (JNIEnv *env, jclass, jobject status)
{
	jint *status_ptr = (jint *)env->GetDirectBufferAddress(status);
	
	return getPDPTotalEnergy(status_ptr);
}


/*
 * Class:     io_github_robolib_hal_PDPJNI
 * Method:    resetPDPTotalEnergy
 * Signature: (BLjava/nio/IntBuffer;)D
 */
JNIEXPORT void JNICALL Java_io_github_robolib_hal_PDPJNI_resetPDPTotalEnergy
  (JNIEnv *env, jclass, jobject status)
{
	jint *status_ptr = (jint *)env->GetDirectBufferAddress(status);
	
	resetPDPTotalEnergy(status_ptr);
}

/*
 * Class:     io_github_robolib_hal_PDPJNI
 * Method:    clearStickyFaults
 * Signature: (BLjava/nio/IntBuffer;)D
 */
JNIEXPORT void JNICALL Java_io_github_robolib_hal_PDPJNI_clearPDPStickyFaults
  (JNIEnv *env, jclass, jobject status)
{
	jint *status_ptr = (jint *)env->GetDirectBufferAddress(status);
	
	clearPDPStickyFaults(status_ptr);
}