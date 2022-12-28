//
// Created by apple on 2022/12/28.
//

#include "com_lsx_ndkdemo_NDKTools.h"

JNIEXPORT jstring JNICALL Java_com_lsx_ndkdemo_NDKTools_getStringFromNDK(JNIEnv *env, jobject obj) {

   return (*env)->NewStringUTF(env, "Hello World，这是隔壁老李头的NDK的第一行代码");

}