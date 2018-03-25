#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,c,p;
  int t;
  cin>>n>>c>>p;
  int curr = 1;
  int count =0;
  for(int i=0;i<c;i++){
    if(curr==p)count++;
    cin>>t;
    curr+=t;
  }
  cout<<count;
  return 0;
}