#include <bits/stdc++.h>
using namespace std;

int main(){
  string message = "Insecure Cryptographic Storage Challenge";
  string text;
  cin>>text;
  int temp;
  for(int i=0;i<message.length();i++){
    int text_index = i%text.length();
    char tem = message[i]^(text[text_index]+32);
    cout<<tem;
  }
}
