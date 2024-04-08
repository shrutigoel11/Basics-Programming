class A extends Thread{
 public void run(){
    try{
    System.out.println("This class is run bt t thread");
    Thread.sleep(1000);}

    catch(InterruptedException e){

    }
 }

}

public class ExtendingThread {

    public static void main(String[] args) throws InterruptedException{
        A t=new A();
        t.start();
        System.out.println("This main() is executed by main thread");
        Thread.sleep(1000);
        
    }
    
}
