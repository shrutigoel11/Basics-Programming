public class This_b {
    int a;
    This_b(int a){
        this.a=a; // this.instance_var=local_var;
    }
    void show(){
        System.out.println(a);
    }
    public static void main(String[] args) {
        This_b t=new This_b(100);
        t.show();
    }
}
