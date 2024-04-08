class Static{
    int a=10;
    static int b=4;
    static{
        System.out.println("static block");
        System.out.println(b);//we can't access instance variable by sttatic block;
    }
    public static void main(String[] args){
        
    }
}