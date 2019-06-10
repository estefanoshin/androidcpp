#include <jni.h>
#include <string>
#include "/inc/Persona.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_tpcpp_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}