class Shape{
    void show(){
        System.out.println("All have different one.");
    }
}
class Square extends Shape{
    @Override
    void show(){
        super.show(); 
        System.out.println("I am square");
    }
}

public class Overriding {

    public static void main(String[] args){
     Shape s=new Square();
     s.show();
    }
    
}
