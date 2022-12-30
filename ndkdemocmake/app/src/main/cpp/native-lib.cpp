#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_lsx_ndkdemocmake_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++ 隔壁老李头";
    return env->NewStringUTF(hello.c_str());
}