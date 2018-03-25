#include <bits/stdc++.h>
using namespace std;

void swap(char &x, char &y){
  char t = x;
  x = y;
  y = t;
}

void permute(char *a, int l, int r, int &i){
  if(i==1){
    for(int j=0;j<strlen(a);j++){
      cout<<a[j]<<endl;
    }
    return;
  }
  if(i<1 || i>strlen(a)){
    cout<<"Error: r cannot be negative or larger than the string length\n";
    return;
  }
  if(l==r){
    for(int j=0;j<i;j++)
      cout<<a[j];
    cout<<endl;
  }
  else{
    for(int j=l;j<=r;j++){
      swap(a[l], a[j]);
      permute(a, l+1, r, i);
      swap(a[l], a[j]);
    }
  }
}
int main(){
  char str[256];

  int r;

  scanf("%256s", str);
  cin>>r;
  printf("str = %s\n", str);
  permute(str, 0, strlen(str)-1, r);
  return 0;
}
