class Sample{
    int a=10;
    void display(){
        System.out.println("HELLO SUPER");
    }
    Sample(){
        System.out.println("CONSTRUCTOR OF SUPER");
    }
}
class B extends Sample{
    int a=20;
    void show(){
        System.out.println(a);
        System.out.println(super.a);
          //super is used to initialise value to super class's; and avoid confusion.
        //without super value is initialised with object of same class but with super it is initialsed with super class's;
    }
        void display(){
        super.display();    
        System.out.println("HELLO SUB");
    }
    B(){
     System.out.println("CONSTRUCTOR OF SUB");
    }
}

public class Super {
    public static void main(String[] args){
    B ref=new B();
    ref.show();
    ref.display();
    }
}
//IN CASE OF PARAMETERIZED CONSTRUCTOR WRITE super() IN SUB CLASS.
//IN VARIABLE: super.var_name;
//IN METHOD: super.method_name();
//IN CONSTRUCTOR: super();
