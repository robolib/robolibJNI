#include <jni.h>
#include <assert.h>
#include "Log.hpp"

#include "io_github_robolib_jni_UsageReporting.h"
#include "HAL/HAL.hpp"
/*
 * Class:     io_github_robolib_jni_FRC_NetworkCommunicationsLibrary
 * Method:    FRC_NetworkCommunication_nUsageReporting_report
 * Signature: (BBBLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_io_github_robolib_jni_UsageReporting_UsageReportingReport
  (JNIEnv * paramEnv, jclass, jbyte paramResource, jbyte paramInstanceNumber, jbyte paramContext, jstring paramFeature)
{
	const char * featureStr = paramEnv->GetStringUTFChars(paramFeature, NULL);
	jint returnValue = HALReport(paramResource, paramInstanceNumber, paramContext, featureStr);
	paramEnv->ReleaseStringUTFChars(paramFeature,featureStr);
	return returnValue;
}