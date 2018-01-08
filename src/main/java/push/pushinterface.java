package push;

import java.util.Arrays;

public class pushinterface {
    static {
        System.loadLibrary("boost_system");
        System.loadLibrary("event_core");
        System.loadLibrary("boost_chrono");
        System.loadLibrary("boost_thread");
        System.loadLibrary("event");
        System.loadLibrary("event_pthreads");
        System.loadLibrary("Push");
        System.loadLibrary("pushjava");
    }
    //gcc -shared -o Entry listen.cpp cpushinterface.cpp push.cpp -fPIC -I"C:\Program Files\Java\jdk1.8.0_121\include" -I"C:\Program Files\Java\jdk1.8.0_121\include\win32"
    //gcc -shared -o Entry.dll -L F:\JavaWorkSpace\jniproject\jni listen.cpp cpushinterface.cpp push.cpp -lDll1 -fPIC -I"C:\Program Files\Java\jdk1.8.0_121\include" -I"C:\Program Files\Java\jdk1.8.0_121\include\win32" -I"F:\JavaWorkSpace\jniproject\jni"
    public static native int cpushinit();
    public static native void cpushuninit();

    public static void initListner(byte[] str){
        System.out.print("str:"+ Arrays.toString(str));
    }
}
