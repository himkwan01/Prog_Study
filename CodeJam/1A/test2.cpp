#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int a,b;
  for(int i=0;i<n;i++){
    cin>>a>>b;
    vector<int> need;
    map<int,vector<int> > s;
    bool done=false;
    int res=0;
    for(int j=0;j<a;j++){
      int temp;
      cin>>temp;
      //temp = static_cast<float>(temp)*0.9;
      need.push_back(temp);
    }
    for(int j=0;j<a;j++){
      for(int l=0;l<b;l++){
        int temp;
        cin>>temp;
        s[j].push_back(temp);
      }
    }
    for(int j=0;j<b;j++){
      sort(s[j].begin(),s[j].end());
    }
    for(int k=0;k<b;k++){
      int q=1000000000;
      for(int j=0;j<a;j++){
       if(s[j][k]/(0.9*need[j]) < q) q=s[j][k]/(0.9*need[j]);
      }
      cout<<q<<endl;
      for(int j=0;j<a;j++){
        done=false;
       if(! (s[j][k]>=0.9*need[j]*q && s[j][k]<=1.1*need[j]*q)){
         done=true;
         break;
       }
      }
      if(!done){
       res++;
      }
    }
    cout<<"Case #"<<i+1<<": "<<res<<endl;
  }
  return 0;
}