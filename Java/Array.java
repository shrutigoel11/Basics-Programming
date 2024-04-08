import java.util.Scanner;
import java.util.Arrays;

public class Array {

    public static void main(String[] args){
    
        //int a[]={1,2,3,4}
        int a[]= new int[5];
        Scanner s=new Scanner(System.in);
        System.out.print("Enter Array elements:");                
        for(int i=0;i<5;i++){

            a[i] =s.nextInt();
        }   
        
        System.out.println("Array elements:");

        for(int b:a){

            System.out.println(b+" ");
        }
        Arrays.sort(a);
        System.out.println("Sorted Array elements:");

        for(int b:a){

            System.out.println(b+" ");
        }
        s.close();
    }
    
}
