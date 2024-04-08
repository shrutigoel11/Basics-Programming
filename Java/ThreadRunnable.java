class MyThread implements Runnable{
    public void run(){
        System.out.println("I am implementing runnable interface");
    }
}
public class ThreadRunnable {
    public static void main(String[] args)
    {
    MyThread m1=new MyThread();
    Thread t1=new Thread(m1);
    t1.start();
    }
    //here execution starts when run is found and body is executed of run and it all happens when start is found.
}
