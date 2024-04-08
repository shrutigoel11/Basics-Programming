import java.util.Scanner;

class Calculator2{
    public static void main(String args[]){
        int ch,a,b;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter any two numbers:");
        a=sc.nextInt();
        b=sc.nextInt();
        System.out.println("Enter choice:\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division");
        ch=sc.nextInt();

        try {
            switch(ch){
                case 1: System.out.println(a+b);
                        break;
                case 2: System.out.println(a-b);
                        break;
                case 3: System.out.println(a*b);
                        break;
                case 4: System.out.println(a/b);
                        break;
                default: System.out.println("Invalid Choice");
                        
            }
        }
        catch(Exception e){
            System.out.println("Divison by zero");
        }

    }
}