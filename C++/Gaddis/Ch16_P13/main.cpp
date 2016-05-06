#include <bits/stdc++.h>
using namespace std;
// Input: double 12 months rainfall
// Output: total, average, highest, lowest
typedef vector<double>::iterator it;
int main(){
	vector<double> r;
	double ttl,temp;
	for(int i=0;i<12;i++){
		cin>>temp;
		r.push_back(temp);
	}
	//accumulate(iterator, iterator, initial value)
	ttl=accumulate(r.begin(),r.end(),0);
	cout<<"Total rainfall: "<<ttl<<endl;
	cout<<"Average rainfall: "<<ttl/r.size()<<endl;
	//max_element and min_element return iterator
	cout<<"Highest rainfall: "<<*max_element(r.begin(),r.end())<<endl;
	cout<<"Lowest rainfall: "<<*min_element(r.begin(),r.end())<<endl;
	
	return 0;
}