#include <bits/stdc++.h>
using namespace std;

int main(){
  string message = "Insecurb Cryptograpoic Stzxkqb0EYtk`iu~i";
  string text;
  int temp;
  while(cin>>temp){
    text+=(char)temp;
  }
  for(int i=0;i<message.length();i++){
    char tem = message[i]^text[i];
    cout<<char(tem-32);
  }
}
