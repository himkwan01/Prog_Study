#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int d,n;
    float res = 0;
    cin>>d>>n;
    vector<pair<float, float> > a;
    float k1,s1;
    cin>>k1>>s1;
    res  = (d-k1)/s1;
    for(int j=1;j<n;j++){
      int k2,s2;
      cin>>k2>>s2;
      int meet = (k1-k2)/(s2-s1);
      if(meet>0)
        k1 = k1*meet;
      else{
        k1=k2;
        s1=s2;
      }
    }
    res  = (d-k1)/s1;
    cout<<setprecision(5)<<showpoint<<fixed;
    cout<<"Case #"<<i+1<<": "<<d/res<<endl;
  }
  return 0;
}