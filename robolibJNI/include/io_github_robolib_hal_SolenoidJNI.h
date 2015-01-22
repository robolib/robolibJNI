/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class io_github_robolib_hal_SolenoidJNI */

#ifndef _Included_io_github_robolib_hal_SolenoidJNI
#define _Included_io_github_robolib_hal_SolenoidJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     io_github_robolib_hal_SolenoidJNI
 * Method:    initializeSolenoidPort
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/IntBuffer;)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_io_github_robolib_hal_SolenoidJNI_initializeSolenoidPort
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     io_github_robolib_hal_SolenoidJNI
 * Method:    getPortWithModule
 * Signature: (BB)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_io_github_robolib_hal_SolenoidJNI_getPortWithModule
  (JNIEnv *, jclass, jbyte, jbyte);

/*
 * Class:     io_github_robolib_hal_SolenoidJNI
 * Method:    setSolenoid
 * Signature: (Ljava/nio/ByteBuffer;BLjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_io_github_robolib_hal_SolenoidJNI_setSolenoid
  (JNIEnv *, jclass, jobject, jbyte, jobject);

/*
 * Class:     io_github_robolib_hal_SolenoidJNI
 * Method:    getSolenoid
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/IntBuffer;)B
 */
JNIEXPORT jbyte JNICALL Java_io_github_robolib_hal_SolenoidJNI_getSolenoid
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     io_github_robolib_hal_SolenoidJNI
 * Method:    getPCMSolenoidBlackList
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/IntBuffer;)B
 */
JNIEXPORT jbyte JNICALL Java_io_github_robolib_hal_SolenoidJNI_getPCMSolenoidBlackList
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     io_github_robolib_hal_SolenoidJNI
 * Method:    getPCMSolenoidVoltageStickyFault
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/IntBuffer;)Z
 */
JNIEXPORT jboolean JNICALL Java_io_github_robolib_hal_SolenoidJNI_getPCMSolenoidVoltageStickyFault
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     io_github_robolib_hal_SolenoidJNI
 * Method:    getPCMSolenoidVoltageFault
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/IntBuffer;)Z
 */
JNIEXPORT jboolean JNICALL Java_io_github_robolib_hal_SolenoidJNI_getPCMSolenoidVoltageFault
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     io_github_robolib_hal_SolenoidJNI
 * Method:    clearAllPCMStickyFaults
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_io_github_robolib_hal_SolenoidJNI_clearAllPCMStickyFaults
  (JNIEnv *, jclass, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
