class A{
	private int a;
	public A(int a){this.a = a;}
	public int geta(){return a;}
}
public class SameFile{
	public static void main(String args[]){
		A a = new A(5);
		System.out.println(a.geta());
	}
}