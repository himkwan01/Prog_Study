/* 
 * File:   main.cpp
 * Author: Himkw_000
 *
 * Created on July 9, 2015, 5:35 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

string first(int a){
  if(a==0){return "";}
  if(a==1){return "ten";}
  if(a==2){return "twenty";}
  if(a==3){return "thirty";}
  if(a==4){return "forty";}
  if(a==5){return "fifty";}
  if(a==6){return "sixty";}
  if(a==7){return "seventy";}
  if(a==8){return "eighty";}
  if(a==9){return "ninety";}
}
string second(int a){
  if(a==0){return "";}
  if(a==1){return "one";}
  if(a==2){return "two";}
  if(a==3){return "three";}
  if(a==4){return "four";}
  if(a==5){return "five";}
  if(a==6){return "six";}
  if(a==7){return "seven";}
  if(a==8){return "eight";}
  if(a==9){return "nine";}
}
string special(int a){
  if(a==11){return "eleven";}
  if(a==12){return "twelve";}
  if(a==13){return "thirteen";}
  if(a==14){return "fourteen";}
  if(a==15){return "fifteen";}
  if(a==16){return "sixteen";}
  if(a==17){return "seventeen";}
  if(a==18){return "eighteen";}
  if(a==19){return "nineteen";}
}
int main(int argc, char** argv) {
  int a=99;
  //cin>>a;
  for(a;a>1;){
    if(a>=11 && a<=19){
      cout<<special(a);
    }
    else if(a>=20 || a==10){
      cout<<first(a/10);
      if(a%10!=0)cout<<"-";
    }
    if(a>=20 ||a<=10)
    cout<<second(a%10);
    cout<<"\n";
    a--;
    if(a>=11 && a<=19){
      cout<<special(a);
    }
    else if(a>=20 || a==10){
      cout<<first(a/10);
      if(a%10!=0)cout<<"-";
    }
    if(a>=20 ||a<=10)
    cout<<second(a%10);
    cout<<"\n\n";
  }
  return 0;
}

