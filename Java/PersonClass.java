public class PersonClass {

    int age=30;
    String color="Yellow";
    
    void eat(){
        System.out.println("I love to eat");
    }
    public static void main(String[] args){

        PersonClass p=new PersonClass();
        System.out.println(p.age);
        System.out.println(p.color);
        p.eat();
    }
}
