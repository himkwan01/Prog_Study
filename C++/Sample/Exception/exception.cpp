//exception example
#include <bits/stdc++.h>
using namespace std;
float validation(int a, int b){
	if(b==0)throw a;
	return static_cast<float>(a)/b;
}
class invalidN{
	public:
		invalidN(){}
};
int main(){
	int a=5,b=0;
	cout<<"Exception example\n";
	cout<<"a/b\n";
	cout<<"a = "<<a<<", b = "<<b<<endl<<endl;
	try{
		cout<<"try nested exceptions \n";
		float c=validation(a,b);
		cout<<"a/b = "<<c<<endl;
	}catch(int a){
		try{
			cout<<"catch integer exception\n";
			string str="ERROR: Denominator cannot be zero\n";
			throw str;
		}catch(string str){
			cout<<"catch exception\n";
			cout<<str;
		}
	}
	cout<<endl;
	cout<<"throwing exception class\n";
	try{
		if(b==0)throw invalidN();
	}catch(invalidN a){
		cout<<"caught invalid class\n";
	}
	
	return 0;
}