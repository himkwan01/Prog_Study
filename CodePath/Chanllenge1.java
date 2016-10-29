import  java.util.*;

class Chanllenge1{
    Scanner cin = new Scanner(System.in);
    public static int func(int[] arr){
        int count=0;
        for(int i=1;i<arr.length;i++){
            if(arr[i-1]!=arr[i]){
                arr[count++]=arr[i];
        }
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        return count;
    }
    public static void main(String[] args){
        int arr = new int[5];
        for(int i=0;i<arr.length;i++){
            arr[i] = cin.nextInt();
        }
    }
}
