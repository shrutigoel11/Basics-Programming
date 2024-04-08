import java.util.Scanner;

public class Calculator {

    public static void main(String [] args){
        int a,b,c,ch;
        System.out.print("Enter two numbers:");
        Scanner sc =new Scanner(System.in);
         a=sc.nextInt();
         b=sc.nextInt(); 
        System.out.print("Enter Choice:"); 
         ch=sc.nextInt();
        switch(ch){
           case 1: c=a+b;
                System.out.print("Sum is:"+c);
                break;
           case 2: c=a-b;
                System.out.print("Difference is:"+c); 
                break;
           case 3: c=a*b;
                System.out.print("Multiplication is:"+c);
                break;
           case 4: c=a/b;
                System.out.print("Division is:"+c);  
                break; 
               default: System.out.print("INVALID CHOICE");                                             
                }
              
        sc.close();    
    }
    
}
