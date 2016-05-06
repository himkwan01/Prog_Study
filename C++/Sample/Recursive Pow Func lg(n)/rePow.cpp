#include <bits/stdc++.h>
using namespace std;
int rePow(int base, int exp){
	if(exp==0)return 1;
	else if(exp==1)return base;
	int temp=rePow(base,exp/2);
	temp*=temp;
	return (exp%2?temp*base:temp);
}
int main(){
	int base, exp;
	cin>>base>>exp;
	cout<<base<<" "<<exp<<endl;
	cout<<rePow(base,exp);
	return 0;
}