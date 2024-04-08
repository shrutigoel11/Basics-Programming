public class Strings {

    public static void main(String[] args){

    String str="SHRUTI GOEL"; //space also considered as a character
    String str2=new String("SHRUTI GOEL");//strings created with same value but different methods are different

    //Checking string length
    int len=str.length();
    System.out.println(len+" ");

    //Conversion to Uppercase
    System.out.println(str.toUpperCase());

    //Conversion to Lowercase
    System.out.println(str.toLowerCase()); 

    //Comparing values
    if(str==str2){
    System.out.println("Both are equal");
    }
    else{
    System.out.println("Both aren't equal");
    }
    if(str.equals(str2)){
    System.out.println("Both are equal");
    }
    else{
    System.out.println("Both aren't equal");
    }
    }  
}
