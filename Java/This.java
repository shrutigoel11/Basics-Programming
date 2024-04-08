public class This {
  void show(){
    System.out.println(this);
  }
  public static void main(String[] args){
    This T=new This();
    System.out.println(T);
    T.show();

  }
    //Every class upon creation has generated a unique reference id that an object of same class and this keyword refers to.
}
