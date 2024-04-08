class A{

    int a;
    String b;
    A(){
        a=10;
        b="JAVA";
        System.out.println(a+" "+b);
    }
    A(A ref){
        a=ref.a;
        b=ref.b;}
        void show(){
        System.out.println(a+" "+b);
    }
}
//value of  one object is copied to other object using copy constructor; object is passed as a reference in constructor as a parameter.


public class CopyConstructor {

    public static void main(String[] args){

      A r1=new A();
      A r2=new A(r1);  
      r2.show();
    }
    
}
