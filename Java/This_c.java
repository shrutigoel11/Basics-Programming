public class This_c {

    This_c()
    {
    System.out.println("hello java");
    }
    This_c(int a){

        this(); // calls default constructor of its own class;
        System.out.println(a);
    }
    public static void main(String[] args){
    //This_c T=new This_c(200);
    }
}
