#include <bits/stdc++.h>
using namespace std;
#include "Rectangle.h"
//template examples
template <class T>
T sum(T,T);
int main(){
	int i1=5,i2=5;
	float f1 =0.1, f2=0.3;
	cout<<"Template\n\n";
	
	cout<<"Call function template with int and float\n";
	cout<<"int "<<i1<<" + "<<i2<<" = "<<sum(i1,i2)<<endl;
	cout<<"float "<<f1<<" + "<<f2<<" = "<<sum(f1,f2)<<endl;
	cout<<endl;
	
	//class template 
	cout<<"Create class object with int and float\n";
	Rectangle<int> a(i1,i2);
	cout<<"create int Rect\n";
	a.print();
	
	cout<<endl;
	Rectangle<float> b(f1,f2);
	cout<<"create float Rect\n";
	b.print();
	
	
	return 0;
}
template <class T>
T sum(T a, T b){
	return a+b;
}