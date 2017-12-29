import push.pushinterface;

public class test {
    public static void main(String[] args) {
        testDll();
    }

    private static void testDll() {
        int res=pushinterface.cpushinit();
        System.out.println("res:"+res);
    }
}
