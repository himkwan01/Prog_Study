#include <bits/stdc++.h>
using namespace std;
template <class T>
T absolute(T n){
	return (n<0?n*-1:n);
}
int main(){
	int i;
	float f;
	i=1;
	f=0.1;
	cout<<"integer i = "<<i<<endl;
	cout<<"absolute(i) = "<<absolute(i)<<endl;
	cout<<"float f = "<<f<<endl;
	cout<<"absolute(f) = "<<absolute(f)<<endl;
	
	i=-1;
	f=0.1;
	cout<<"integer i = "<<i<<endl;
	cout<<"absolute(i) = "<<absolute(i)<<endl;
	cout<<"float f = "<<f<<endl;
	cout<<"absolute(f) = "<<absolute(f)<<endl;
	
	return 0;
}