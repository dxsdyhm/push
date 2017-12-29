#include <stdlib.h>

#include "push.h"
#include <PushInterface.h>
#include "listen.h"

static void initCallBack(const char* initcallback)
{
    vpushinitListner(initcallback);
}

int push_init(){
   return cpush_init(initCallBack);
}

void push_uninit(){
    cpush_uninit();
    vjniListnerexite();
}