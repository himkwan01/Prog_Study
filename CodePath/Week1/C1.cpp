#include <bits/stdc++.h>
using namespace std;
int func(int arr[], int size){
    int count=1;
    for(int i=1;i<size;i++){
        if(arr[i-1]!=arr[i])
            arr[count++]=arr[i];
    }
    for(int i=count;i<size;i++)
        arr[i]=0;
    return count;
}
int main(){
    int arr[5];
    for(int i=0;i<5;i++)
        cin>>arr[i];
    cout<<func(arr,5)<<endl;
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
    return 0;
}
