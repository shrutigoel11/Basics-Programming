public class Ternary_op {
    public static void main(String [] args)
    {
        int a=10, b=20, c=5 ;
        int r= (a>b) ? (a>c ? a:c) : (b>c ? b:c);
        System.out.println(r);
    
    }
}
