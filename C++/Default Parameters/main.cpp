//default parameters example
#include <bits/stdc++.h>
using namespace std;
//function prototypes
void func(int =0, float =0, string ="");
int main(){
	cout<<"Default parameters example\n";
	cout<<"func(int,float,example)\n\n";
	
	cout<<"call func without passing any paras\n";
	func();
	cout<<"call func wiht i=5,f=1.2,s=!default\n";
	func(5,1.2,"!default");
	return 0;
}
//function declaration
void func(int i, float f, string s){
	cout<<"i = "<<i<<endl;
	cout<<"f = "<<f<<endl;
	cout<<"s = "<<s<<endl;
}