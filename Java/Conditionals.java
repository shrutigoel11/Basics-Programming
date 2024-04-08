import java.util.Scanner;

public class Conditionals {

    public static void main(String[] args)
    {
        int n;
        System.out.print("Enter a number:");
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        if(n>0)
        {
            System.out.print("Positive number");
        }
        else if(n==0)
        {
            System.out.print("Zero");
        }
        else
        {
            System.out.print("Negative number");
        }
        sc.close();
    }
    
}
