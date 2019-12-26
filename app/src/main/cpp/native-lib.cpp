#include <jni.h>
#include <string>
#include <iostream>
#include "Circle.hpp"
 using namespace std;
extern "C" JNIEXPORT jstring JNICALL
Java_com_rextron_myapplication_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {

    Circle circle(3);

    auto str = std::to_string(circle.Area());
    auto str2 = to_string(circle.squre());
    //std::string varAsString = sstream.str();
    std::string hello = "Hello from C++:"+str+":"+str2;
    return env->NewStringUTF(hello.c_str());
}
