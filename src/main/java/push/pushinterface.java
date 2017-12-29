package push;

public class pushinterface {
    static {
        System.loadLibrary("Dll1");
        System.loadLibrary("Entry");
    }
    //gcc -shared -o Entry listen.cpp cpushinterface.cpp push.cpp -fPIC -I"C:\Program Files\Java\jdk1.8.0_121\include" -I"C:\Program Files\Java\jdk1.8.0_121\include\win32"
    //gcc -shared -o Entry.dll -L F:\JavaWorkSpace\jniproject\jni listen.cpp cpushinterface.cpp push.cpp -lDll1 -fPIC -I"C:\Program Files\Java\jdk1.8.0_121\include" -I"C:\Program Files\Java\jdk1.8.0_121\include\win32" -I"F:\JavaWorkSpace\jniproject\jni"
    public static native int cpushinit();
    public static native void cpushuninit();

    public static void initListner(byte[] str){

    }
}
