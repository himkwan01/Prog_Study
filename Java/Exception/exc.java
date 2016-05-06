import java.util.*;		//import all util
public class exc{
	public static void main(String args[]){
		Scanner cin = new Scanner(System.in);
		try{
			System.out.println("Exception Sameple");
			System.out.println("Input 2 numbers, first divided by second");
			System.out.print("Please input first num: ");
			int a = cin.nextInt();
			System.out.print("Please input second num: ");
			int b = cin.nextInt();
			System.out.println(a+"/"+b+" = "+a/b);
		}catch(Exception e){
			System.out.println("Denomintor cannot be zero");
			e.printStackTrace();
		}
	}	//main ends
}