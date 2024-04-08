import java.util.Scanner;

public class For_loop {

    public static void main(String[] args){
        int num;
        System.out.print("Enter any number:");
        Scanner sc=new Scanner(System.in);
        num=sc.nextInt();
        for(int i=1;i<=10;i++)
        {
            System.out.println(num*i);
        }
        sc.close();
    }

    
}
