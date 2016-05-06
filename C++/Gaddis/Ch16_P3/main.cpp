#include <bits/stdc++.h>
using namespace std;
template <class T>
T minimum(T a, T b){return (a>b?b:a);}
template <class T>
T maximum(T a, T b){return (a>b?a:b);}

int main(){
	int a,b;
	float c,d;
	char e,f;
	cout<<"Please input two integers: ";
	cin>>a>>b;
	cout<<"Minimum = "<<mimimum(a,b)<<endl;
	cout<<"Maximum = "<<maximum(a,b)<<endl;
	cout<<"Please input two floats: ";
	cin>>c>>d;
	cout<<"Minimum = "<<mimimum(c,d)<<endl;
	cout<<"Maximum = "<<maximum(c,d)<<endl;
	cout<<"Please input two characters: ";
	cin>>e>>f;
	cout<<"Minimum = "<<mimimum(e,f)<<endl;
	cout<<"Maximum = "<<maximum(e,f)<<endl;
	return 0;
}