//
// Created by ASUS on 2019/12/24.
//

#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_rextron_myapplication_MainActivity_stringFromJNItest(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "test";
    return env->NewStringUTF(hello.c_str());
}
