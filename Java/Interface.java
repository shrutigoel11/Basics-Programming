interface Vehicle{
    String Name="TVS";//PUBLIC+STATIC+FINAL
    int Speed = 100;

    void start();// ABSTRACT+PUBLIC
    void stop();
    //NOW deafult and static methods are also existable;

    default void color(){
        System.out.println("Red color");
    }
    static void launch(){
        System.out.println("Launched recently");
    }
}


public class Interface implements Vehicle {

    @Override
    public void start(){
        System.out.println("Start by inserting key");
    }
        @Override
    public void stop(){
        System.out.println("Stop by removing key");
    }
    public static void main(String[] args)
    {
        Interface i=new Interface();
        i.start();
        i.start();
        i.color();
        Vehicle.launch();
    }
}
