class A{

    int age ;
    String name;

    A(){
        age=1000;
        name="java";
    }
    void show(){
        System.out.println(age +" "+name);
    }
}


public class DefaultConstructor {

    public static void main(String[] args){

A ref=new A();
ref.show();    
}
}