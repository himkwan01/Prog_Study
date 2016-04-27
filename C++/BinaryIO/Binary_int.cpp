#include <bits/stdc++.h>
using namespace std;
int main(){
	fstream io;
	int var=123;
	
	//input
	io.open("output.dat", ios::out | ios::binary);
	if(io.is_open()){
		cout<<"open\n";
		//fstream.write(address in char type, size)
		io.write(reinterpret_cast<char *>(&var), sizeof(var));
		io.close();
	}
	else
		cout<<"open failed\n";
	
	//output
	io.open("output.dat", ios::in | ios::binary);
	if(io.is_open()){
		cout<<"open\n";
		io.read(reinterpret_cast<char *>(&var), sizeof(var));
		cout<<"read\n";
		io.close();
		cout<<"close\n";
		cout<<"print str\n";
		cout<<var;
	}
	else
		cout<<"open failed\n";
		
	return 0;
}