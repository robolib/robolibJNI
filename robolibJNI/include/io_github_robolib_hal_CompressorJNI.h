/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class io_github_robolib_hal_CompressorJNI */

#ifndef _Included_io_github_robolib_hal_CompressorJNI
#define _Included_io_github_robolib_hal_CompressorJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     io_github_robolib_hal_CompressorJNI
 * Method:    initializeCompressor
 * Signature: (B)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_io_github_robolib_hal_CompressorJNI_initializeCompressor
  (JNIEnv *, jclass, jbyte);

/*
 * Class:     io_github_robolib_hal_CompressorJNI
 * Method:    checkCompressorModule
 * Signature: (B)Z
 */
JNIEXPORT jboolean JNICALL Java_io_github_robolib_hal_CompressorJNI_checkCompressorModule
  (JNIEnv *, jclass, jbyte);

/*
 * Class:     io_github_robolib_hal_CompressorJNI
 * Method:    getCompressor
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/IntBuffer;)Z
 */
JNIEXPORT jboolean JNICALL Java_io_github_robolib_hal_CompressorJNI_getCompressor
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     io_github_robolib_hal_CompressorJNI
 * Method:    setClosedLoopControl
 * Signature: (Ljava/nio/ByteBuffer;ZLjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_io_github_robolib_hal_CompressorJNI_setClosedLoopControl
  (JNIEnv *, jclass, jobject, jboolean, jobject);

/*
 * Class:     io_github_robolib_hal_CompressorJNI
 * Method:    getClosedLoopControl
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/IntBuffer;)Z
 */
JNIEXPORT jboolean JNICALL Java_io_github_robolib_hal_CompressorJNI_getClosedLoopControl
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     io_github_robolib_hal_CompressorJNI
 * Method:    getPressureSwitch
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/IntBuffer;)Z
 */
JNIEXPORT jboolean JNICALL Java_io_github_robolib_hal_CompressorJNI_getPressureSwitch
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     io_github_robolib_hal_CompressorJNI
 * Method:    getCompressorCurrent
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/IntBuffer;)F
 */
JNIEXPORT jfloat JNICALL Java_io_github_robolib_hal_CompressorJNI_getCompressorCurrent
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     io_github_robolib_hal_CompressorJNI
 * Method:    getCompressorCurrentTooHighFault
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/IntBuffer;)Z
 */
JNIEXPORT jboolean JNICALL Java_io_github_robolib_hal_CompressorJNI_getCompressorCurrentTooHighFault
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     io_github_robolib_hal_CompressorJNI
 * Method:    getCompressorCurrentTooHighStickyFault
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/IntBuffer;)Z
 */
JNIEXPORT jboolean JNICALL Java_io_github_robolib_hal_CompressorJNI_getCompressorCurrentTooHighStickyFault
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     io_github_robolib_hal_CompressorJNI
 * Method:    getCompressorShortedStickyFault
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/IntBuffer;)Z
 */
JNIEXPORT jboolean JNICALL Java_io_github_robolib_hal_CompressorJNI_getCompressorShortedStickyFault
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     io_github_robolib_hal_CompressorJNI
 * Method:    getCompressorShortedFault
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/IntBuffer;)Z
 */
JNIEXPORT jboolean JNICALL Java_io_github_robolib_hal_CompressorJNI_getCompressorShortedFault
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     io_github_robolib_hal_CompressorJNI
 * Method:    getCompressorNotConnectedStickyFault
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/IntBuffer;)Z
 */
JNIEXPORT jboolean JNICALL Java_io_github_robolib_hal_CompressorJNI_getCompressorNotConnectedStickyFault
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     io_github_robolib_hal_CompressorJNI
 * Method:    getCompressorNotConnectedFault
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/IntBuffer;)Z
 */
JNIEXPORT jboolean JNICALL Java_io_github_robolib_hal_CompressorJNI_getCompressorNotConnectedFault
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     io_github_robolib_hal_CompressorJNI
 * Method:    clearAllPCMStickyFaults
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_io_github_robolib_hal_CompressorJNI_clearAllPCMStickyFaults
  (JNIEnv *, jclass, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
