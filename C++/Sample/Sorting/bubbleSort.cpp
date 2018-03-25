#include <bits/stdc++.h>
using namespace std;

void print_arr(int *arr, int len){
  for(int i=0;i<len;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

void bubbleSort(int *arr, int len){
  bool swap = false;
  do{
    swap = false;
    for(int i=0;i<len-1;i++){
      if(arr[i] > arr[i+1]){
        arr[i] = arr[i] ^ arr[i+1];
        arr[i+1] = arr[i] ^ arr[i+1];
        arr[i] = arr[i] ^ arr[i+1];
        swap = true;
      }
    }
  }while(swap);

}

int main(int argc, char *argv[]){
  int len = 10;
  int arr[] = {1,3,2,4,7,9,5,6,10,8};
  cout<<"Selection sort exmaple\n";
  cout<<"array length = 10\n";
  
  cout<<"Before bubbleSort : ";
  print_arr(arr, len);

  bubbleSort(arr, len);

  cout<<"After Merge Sort : ";
  print_arr(arr, len);

  return 0;
}
