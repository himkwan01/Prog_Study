public class obj_func{
    public static class Test{
        public int x;
        Test(int x){
            this.x=x;
        }
    }
    
    public static void func(Test obj){
        obj.x++;
    }
    
    public static void main(String[] args){
        Test obj = new Test(4);
        System.out.println(obj.x);
        func(obj);
        System.out.println(obj.x);
    }


}
