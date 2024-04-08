// METHOD WITH SAME NAME BUT DIFFERENT TYPES OF PARAMETERS;
public class MethodOverloading {
    
        void add(){
        int a=10;
        int b=20;
        int c=a+b;
        System.out.println(c);
    }
    void add(int x, int y){
        int c=x+y;
        System.out.println(c);
    }
    public static void main(String[] args) {
        MethodOverloading o=new MethodOverloading();
        o.add();
        o.add(40, 06);
    }
}
