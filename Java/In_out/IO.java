//need to import Scanner class 
//java.util.*
import java.util.Scanner;
public class IO{
	public static void main(String args[]){
		//Scanner is a class for input(cin)
		//the obj cin is for System.in
		Scanner cin = new Scanner(System.in);
		//wait for the input
		int a = cin.nextInt();
		System.out.println(a);
	}
}