/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class io_github_robolib_hal_PDPJNI */

#ifndef _Included_io_github_robolib_hal_PDPJNI
#define _Included_io_github_robolib_hal_PDPJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     io_github_robolib_hal_PDPJNI
 * Method:    getPDPTemperature
 * Signature: (Ljava/nio/IntBuffer;)D
 */
JNIEXPORT jdouble JNICALL Java_io_github_robolib_hal_PDPJNI_getPDPTemperature
  (JNIEnv *, jclass, jobject);

/*
 * Class:     io_github_robolib_hal_PDPJNI
 * Method:    getPDPVoltage
 * Signature: (Ljava/nio/IntBuffer;)D
 */
JNIEXPORT jdouble JNICALL Java_io_github_robolib_hal_PDPJNI_getPDPVoltage
  (JNIEnv *, jclass, jobject);

/*
 * Class:     io_github_robolib_hal_PDPJNI
 * Method:    getPDPChannelCurrent
 * Signature: (BLjava/nio/IntBuffer;)D
 */
JNIEXPORT jdouble JNICALL Java_io_github_robolib_hal_PDPJNI_getPDPChannelCurrent
  (JNIEnv *, jclass, jbyte, jobject);

/*
 * Class:     io_github_robolib_hal_PDPJNI
 * Method:    getPDPTotalCurrent
 * Signature: (Ljava/nio/IntBuffer;)D
 */
JNIEXPORT jdouble JNICALL Java_io_github_robolib_hal_PDPJNI_getPDPTotalCurrent
  (JNIEnv *, jclass, jobject);

/*
 * Class:     io_github_robolib_hal_PDPJNI
 * Method:    getPDPTotalPower
 * Signature: (Ljava/nio/IntBuffer;)D
 */
JNIEXPORT jdouble JNICALL Java_io_github_robolib_hal_PDPJNI_getPDPTotalPower
  (JNIEnv *, jclass, jobject);

/*
 * Class:     io_github_robolib_hal_PDPJNI
 * Method:    getPDPTotalEnergy
 * Signature: (Ljava/nio/IntBuffer;)D
 */
JNIEXPORT jdouble JNICALL Java_io_github_robolib_hal_PDPJNI_getPDPTotalEnergy
  (JNIEnv *, jclass, jobject);

/*
 * Class:     io_github_robolib_hal_PDPJNI
 * Method:    resetPDPTotalEnergy
 * Signature: (Ljava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_io_github_robolib_hal_PDPJNI_resetPDPTotalEnergy
  (JNIEnv *, jclass, jobject);

/*
 * Class:     io_github_robolib_hal_PDPJNI
 * Method:    clearPDPStickyFaults
 * Signature: (Ljava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_io_github_robolib_hal_PDPJNI_clearPDPStickyFaults
  (JNIEnv *, jclass, jobject);

#ifdef __cplusplus
}
#endif
#endif