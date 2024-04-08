class A implements Runnable{

    public void run(){
        System.out.println("This is A's run method");
    }

}


public class ImplementingRunnable {
    public static void main(String[] args){
        A a=new A();
        Thread t=new Thread(a);
        t.start();
        System.out.println("Executed by main thread");
    }
}
