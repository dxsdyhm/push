#include <jni.h>
#include "listen.h"

static     jclass      mClass;     // Reference to MediaPlayer class
static     jobject     mObject;    // Weak ref to MediaPlayer Java object to call on
static     JavaVM      *mJvm;
static     bool  fgHasInit = false;

int vjniListnerinit(JNIEnv* env, jclass thiz){
    jclass clazz = thiz;
    if (clazz == NULL) {
        return 0;
    }
    mClass = (jclass)env->NewGlobalRef(clazz);
    env->GetJavaVM(&mJvm);
    fgHasInit = true;
    return 1;
}

void vpushinitListner(const char* initcallback)
{
    if(mJvm != NULL && fgHasInit)
	{
	    JNIEnv* env = NULL;
	    //(*mJvm)->GetEnv(mJvm, (void**)&env, JNI_VERSION_1_4);
	    mJvm->AttachCurrentThread((void **)&env, NULL);
	    if(env != NULL)
	    {

	    }
	}
	mJvm->DetachCurrentThread();
}

void vjniListnerexite(){
    fgHasInit = false;
    // remove global references
    if(mJvm != NULL && fgHasInit)
    {
    	JNIEnv* env = NULL;
        mJvm->AttachCurrentThread((void **)&env, NULL);
    	if(env != NULL)
    	{
            env->DeleteGlobalRef(mObject);
            env->DeleteGlobalRef(mClass);
    	}
    }
    mJvm->DetachCurrentThread();
}