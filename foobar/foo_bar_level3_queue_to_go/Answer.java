import java.util.*;
public class Answer {   
    public static void main(String[] args){
      Scanner input = new Scanner(System.in);
      int start = input.nextInt();
      int length = input.nextInt();
      System.out.println(answer(start,length));
    }
    public static int answer(int start, int length) { 
        int checksum = 0;
        int begin = start;
        for(int i=0;i<length;i++, begin+=length){
            checksum ^= xor_range(begin, begin + length - i);
        }
        return checksum;
    } 
    public static int xor_range(int begin, int end){
        int res = 0;
        for(int i=begin;i<end;i++){
            res ^= i;
        }
        return res;
    }
}

