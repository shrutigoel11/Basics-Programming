class A{

    int age ;
    String name;

    A(){
        age=0;
        name=null;
    }
    void show(){
        System.out.println(age +" "+name);
    }
}


public class Constructor {

    public static void main(String[] args){

A ref=new A();
ref.show();    
}
}
