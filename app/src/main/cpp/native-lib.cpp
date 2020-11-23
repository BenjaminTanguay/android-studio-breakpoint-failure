#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_myapplication_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    // These lines are mostly here to have something to stop on in the debugger.
    std::string hello = "Hello";
    int initialValue = 34;
    int trololo = 34857;
    int printValue = trololo * initialValue;
    std::string world = " World! #:" + std::to_string(printValue);
    return env->NewStringUTF((hello + world).c_str());
}