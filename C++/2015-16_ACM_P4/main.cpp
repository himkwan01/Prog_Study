#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<string> str;
	set<pair<int,int> > seta;
	set<int> setb;
	string temp;
	while(getline(cin, temp)){
		str.push_back(temp);
	}
	int row=str.size();
	int col=str[0].size();
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(str[i][j]=='x')seta.insert(make_pair(i,j));
		}
	}
	set<pair<int,int> >::iterator it1=seta.begin();
	set<pair<int,int> >::iterator it2;
	
	for(int i=0;i<seta.size()-1;i++){
		it2=it1;
		for(int j=i+1;j<seta.size();j++){
			it2++;
			setb.insert(abs(it1->first-it2->first)+abs(it1->second-it2->second));
		}
		it1++;
	}
	cout<<setb.size();
	return 0;
}