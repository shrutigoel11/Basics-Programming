public class Instance {
    Instance(){
        System.out.println("DEFAULT CONSTRUCTOR");
    }
    {
        System.out.println("INSTANCE BLOCK");
    }
    public static void main(String[] args){
        //Instance i=new Instance();
    }
    
}
//Instance block is a part of object hence it can't be accessed without object;
//it is called before constructor; 