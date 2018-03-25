#include <bits/stdc++.h>
using namespace std;

void print_arr(int *arr, int len){
  for(int i=0;i<len;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}


// aka min sort
void selectionSort(int *arr, int len){
  for(int i=0;i<len;i++){
    int min_index = i;
    for(int j=i+1;j<len;j++){
      if(arr[j] < arr[min_index]){
        min_index = j;
      }
    }
    // swap
    int t = arr[i];
    arr[i] = arr[min_index];
    arr[min_index] = t;
  }
}

int main(int argc, char *argv[]){
  int len = 10;
  int arr[] = {1,3,2,4,7,9,5,6,10,8};
  cout<<"Selection sort exmaple\n";
  cout<<"array length = 10\n";
  
  cout<<"Before selection Sort : ";
  print_arr(arr, len);

  selectionSort(arr, len);

  cout<<"After Merge Sort : ";
  print_arr(arr, len);

  return 0;
}
