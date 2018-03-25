#include <bits/stdc++.h>
using namespace std;
int main(){
  string alpha="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
  string key = "KPOISAIJDIEYJAF";
  string str="DwsDagmwhziArpmogWaSmmckwhMoEsmgmxlivpDttfjbjdxqBwxbKbCwgwgUyam";
  for(int i=0;i<str.length();i++){
    int key_index = i%key.length();
    int str_index = alpha.find(str[i]);
    bool lower=false;
    if(str_index>25){
      lower=true;
      str_index-=26;
    }
    int original = (str_index+26-alpha.find(key[key_index]))%26;
    if(lower)original+=26;
    cout<<alpha[original];
  }
  return 0;
}
