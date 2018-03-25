package com.google.challenges; 
import java.util.*;
public class Answer {   
    public static int answer(int n) { 
        /* if most stair, then the stairs will be m, m-1,...,1
         * n = m + m-1 + ... + 1 = m*(m-1)/2
         * n = m*(m-1)/2 >= m*m /2 
         * m <= sqrt(2n) for m be the first stair
         */
         int [][]table = new int[n][n];
         for(int i=0;i<n;i++){
             for(int j=0;j<n;j++){
                 table[i][j] = -1;
             }
         }
         int way = 0;
         for(int m=(int)Math.sqrt(2*n); m<n;m++){
             way += helper(n-m, m, table);
         }
         return way;
    }
    public static int helper(int left, int first, int[][] table){
        if(left==0 || first == 1) return 0;
        if(table[left][first]!=-1) return table[left][first];
        int way = first>left?1:0;
        for(int m=(int)Math.sqrt(2*left);m<left && m<first;m++){
            way += helper(left-m,m,table);
        }
        // store for furture use
        table[left][first]=way;
        return way;
    }
}