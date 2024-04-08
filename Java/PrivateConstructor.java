

class PrivateConstructor {
    private PrivateConstructor(){
       System.out.println("PRIVATE CONSTRUCTOR");
    }
      // create a public static method
    public static void instanceMethod() {
    // create an instance of class
    //PrivateConstructor obj = new PrivateConstructor();
    }
    public static void main(String[] args)
   {
   PrivateConstructor.instanceMethod();
   }    
}
