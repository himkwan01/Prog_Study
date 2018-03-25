#include <bits/stdc++.h>
using namespace std;

string func(char r, char g, char b){
  char *t = new char[6];
  sprintf(t, "%02x%02x%02x", r, g, b);
  string str = t;
  delete[] t;
  return str;
}
int main(int argc, char **argv){
  cout<<func(10,11,12)<<endl;
  return 0;
}
