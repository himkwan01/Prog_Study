import java.io.*; 	//all file io dir
import java.util.Scanner;
public class FileIO{
	public static void main(String args[]){
		//declare file stream
		FileInputStream in=null;		//ifstream
		FileOutputStream out=null;	//ofstream
		Scanner cin = new Scanner(System.in);
		String str;
	
		try{
			//import
			System.out.print("Import file name:");
			//get file name
			str= cin.nextLine();
			//echo 
			System.out.println(str);
			//create file io object base on input
			in = new FileInputStream(str);
			
			//export
			System.out.print("Export file name:");
			str= cin.nextLine();
			System.out.println(str);
			out = new FileOutputStream(str);
		}
		catch(IOException e){
			e.printStackTrace();
		}
		// finally{
			if file is open
			// if(out!=null)out.close();
			// if(in!=null)in.close();
		// }
	}
}