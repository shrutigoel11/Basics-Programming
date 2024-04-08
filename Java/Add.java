import java.util.Scanner;
public class Add {

    public static void main(String[] args)
    {
        int a,b,c;
        System.out.print("Enter two numbers:");
        Scanner sc =new Scanner(System.in);
        a=sc.nextInt();
        b=sc.nextInt();
        c=a+b;
        System.out.println("Sum is: "+c);
        sc.close();//close the object of scanner to prevent leakage of resource
    }
    
}
//Java program to add two nos.
