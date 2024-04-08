class A{
    int x,y;
    A(int a, int b){
        x=a;
        y=b;
    }
    void display(){
        System.out.println(x+" "+y);
    }
}


public class ParameterizedConstructor {
    public static void main(String[] args){
    A obj=new A(50, 40);
    obj.display();
    }
}
