#include <bits/stdc++.h>
using namespace std;

void print_arr(int *arr, int len){
  for(int i=0;i<len;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

// return the index that arr[index] == elm or arr[index] 
int bSearch(int **arr, int l, int r, int elm){
  
}
void binaryTreeSort(int *arr, int len){
  
}

int main(int argc, char *argv[]){
  int len = 10;
  int arr[] = {1,3,2,4,7,9,5,6,10,8};
  cout<<"Selection sort exmaple\n";
  cout<<"array length = 10\n";
  
  cout<<"Before binaryTreeSort : ";
  print_arr(arr, len);

  bubbleSort(arr, len);

  cout<<"After binaryTreeSort : ";
  print_arr(arr, len);

  return 0;
}
