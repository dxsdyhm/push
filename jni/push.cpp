#include <stdlib.h>
//#include <string.h>
//#include <unistd.h>

#include "push.h"
#include "PushInterface.h"
#include "listen.h"

static void initCallBack(const char* initcallback)
{
    vpushinitListner(initcallback);
}

//inline char* getexefiledir( char* buf, int buf_len, char** ppfname = 0 )
//{
//#if defined(_WIN32)
//  GetModuleFileName(NULL,buf,buf_len);
//  char *p = strrchr(buf, '\\');
//  if ( p )
//  {
//    *p++ = 0;
//    if (ppfname)
//    {
//      char* tmp = p;
//      char *p = strrchr(tmp, '.');
//      if (p) *p = 0;
//      *ppfname = tmp;
//    }
//    return buf;
//  }
//  return NULL;
//#endif
//
//#if defined(linux)
//
//  if ( readlink("/proc/self/exe", buf, buf_len ) < 0 )
//    return NULL;
//
//  char *p = strrchr(buf, '/');
//  if (p)
//    *p = 0;
//  else
//    buf[0] = 0;
//
//  if (ppfname)
//    *ppfname = p+1;
//
//  return buf;
//#endif
//
//  return NULL;
//}

int push_init(){
   return cpush_init(initCallBack);
}

void push_uninit(){
    cpush_uninit();
    vjniListnerexite();
}