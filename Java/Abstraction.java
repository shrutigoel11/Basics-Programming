//In java abstraction is achieved by abstract classes and interfaces.


abstract class Animal{
    void legs(){
        System.out.println("Animals have legs");
    }
        public abstract void sound();
    }
class Dog extends Animal{
    @Override 
    public void sound(){
       System.out.println("Bark"); 
    }
}

public class Abstraction {

    public static void main(String[] args){
    Dog d=new Dog();
    d.sound();
    d.legs();;
    }
    
}
//Abstraction
