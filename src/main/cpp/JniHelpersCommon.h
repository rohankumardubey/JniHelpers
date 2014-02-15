#ifndef __JniHelpersCommon_h__
#define __JniHelpersCommon_h__

#if WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

#include <jni.h>

#define kTypeInt "I"
#define kTypeLong "J"
#define kTypeFloat "F"
#define kTypeDouble "D"
#define kTypeBool "Z"
#define kTypeByte "B"
#define kTypeVoid "V"

// Common Java classes
#define kTypeJavaClass(x) "Ljava/lang/" #x ";"
#define kTypeJavaException "L/java/lang/Exception"
#define kTypeJavaString "Ljava/lang/String"

// Array builder macro
#define kTypeArray(x) "[" x

#endif // __JniHelpersCommon_h__