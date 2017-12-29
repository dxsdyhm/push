#pragma once
#include <jni.h>

int vjniListnerinit(JNIEnv* env, jclass thiz);
void vjniListnerexite();
void vpushinitListner(const char* initcallback);