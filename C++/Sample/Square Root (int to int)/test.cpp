#include <bits/stdc++.h>
using namespace std;
int func(int n){
int start=1;
int end=n;
int mid;
while(start<end){
    mid=(start+end)/2;
    if(mid*mid==n)return mid;
    if(mid*mid>n)end=mid-1;
    else start=mid+1;
    }
return mid;
}

int main(){
    int n;
    cin>>n;
    cout<<func(n);
    return 0;
}
