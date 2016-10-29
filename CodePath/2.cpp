#include <bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    size++;
    int *arr = new int[size];
    if(size>3)arr[2]=0;
    for(int i=3;i<size;i++){
        //1 is not prime
        arr[i]=!(i%2)?1:0;
    }
    for(int i=3;i<size;i+=2){
        if(arr[i]==0){
            for(int j=2;j*i<size;j++){
                arr[j*i]=1;
            }
        }
    }
    for(int i=2;i<size;i++){
        if(!arr[i])cout<<i<<" ";
    }
    delete[] arr;
}
