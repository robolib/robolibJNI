#include <jni.h>
#include "io_github_robolib_hal_AccelerometerJNI.h"
#include "HAL/Accelerometer.hpp"

/*
 * Class:     io_github_robolib_hal_AccelerometerJNI
 * Method:    setAccelerometerActive
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_io_github_robolib_hal_AccelerometerJNI_setAccelerometerActive
  (JNIEnv *, jclass, jboolean active)
{
	setAccelerometerActive(active);
}

/*
 * Class:     io_github_robolib_hal_AccelerometerJNI
 * Method:    setAccelerometerRange
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_io_github_robolib_hal_AccelerometerJNI_setAccelerometerRange
  (JNIEnv *, jclass, jint range)
{
	setAccelerometerRange((AccelerometerRange)range);
}

/*
 * Class:     io_github_robolib_hal_AccelerometerJNI
 * Method:    getAccelerometerX
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_io_github_robolib_hal_AccelerometerJNI_getAccelerometerX
  (JNIEnv *, jclass)
{
	return getAccelerometerX();
}

/*
 * Class:     io_github_robolib_hal_AccelerometerJNI
 * Method:    getAccelerometerY
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_io_github_robolib_hal_AccelerometerJNI_getAccelerometerY
  (JNIEnv *, jclass)
{
	return getAccelerometerY();
}

/*
 * Class:     io_github_robolib_hal_AccelerometerJNI
 * Method:    getAccelerometerZ
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_io_github_robolib_hal_AccelerometerJNI_getAccelerometerZ
  (JNIEnv *, jclass)
{
	return getAccelerometerZ();
}
