//
// Created by apple on 2022/12/30.
//

#include <jni.h>
#include <string>

extern "C"

JNIEXPORT jstring JNICALL Java_com_lsx_ndkdemocmakehandy_NDKTools_getStringFromNDK(JNIEnv *env, jobject obj) {

  std::string hello = "(*^__^*) 嘻嘻……~Hello from C++ 隔壁老李头";

  return env->NewStringUTF(hello.c_str());
}