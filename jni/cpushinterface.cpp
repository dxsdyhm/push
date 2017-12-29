#include <stdlib.h>
#include <jni.h>
#include "push.h"
#include "push_pushinterface.h"
#include "listen.h"

/*
 * Class:     push_pushinterface
 * Method:    cpush_init
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_push_pushinterface_cpushinit
  (JNIEnv *env, jclass clas)
{
    int res=vjniListnerinit(env,clas);
    if(res){
        return push_init();
    }
    return -1;
}

/*
 * Class:     push_pushinterface
 * Method:    cpush_uninit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_push_pushinterface_cpushuninit
  (JNIEnv *env, jclass clas)
{
    push_uninit();
}
