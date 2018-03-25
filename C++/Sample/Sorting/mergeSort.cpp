#include <bits/stdc++.h>
using namespace std;

void print_arr(int *arr, int len){
  for(int i=0;i<len;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
/**
MergeSort(arr[], l,  r)
If r > l
     1. Find the middle point to divide the array into two halves:  
             middle m = (l+r)/2
     2. Call mergeSort for first half:   
             Call mergeSort(arr, l, m)
     3. Call mergeSort for second half:
             Call mergeSort(arr, m+1, r)
     4. Merge the two halves sorted in step 2 and 3:
             Call merge(arr, l, m, r)
*/
void merge(int *arr, int l, int m, int r){
  int ll = m-l+1; // left len
  int rl = r-m;   // right len
  // create temp L and R
  int L[ll], R[rl];

  // int 4 bytes 
  memcpy(L, arr + l, sizeof(int) * ll);
  memcpy(R, arr + (m+1), sizeof(int) * rl);
  int li = 0;
  int ri = 0;
  for(int i=l;i<=r;i++){
    if(li == ll){
      arr[i] = R[ri++];
    }
    else if(ri == rl){
      arr[i] = L[li++];
    }
    else if(L[li] <= R[ri]){
      arr[i] = L[li++];
    }
    else{
      arr[i] = R[ri++];
    }
  }
}

void mergeSort(int *arr, int l, int r){
  if(l<r){
    int m = (l+r)/2;
    mergeSort(arr, l, m);
    mergeSort(arr, m+1, r);
    merge(arr, l, m, r);
  }
}

int main(int argc, char *argv[]){
  int len = 10;
  int arr[] = {1,3,2,4,7,9,5,6,10,8};
  cout<<"Merge sort exmaple\n";
  cout<<"array length = 10\n";
  
  cout<<"Before Merge Sort : ";
  print_arr(arr, len);

  mergeSort(arr, 0, len-1);

  cout<<"After Merge Sort : ";
  print_arr(arr, len);

  return 0;
}
