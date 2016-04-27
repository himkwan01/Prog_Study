#include <bits/stdc++.h>
using namespace std;
struct Test{
	string str;
	int n;
	float f;
};

int main(){
	fstream io;
	Test *varp = new Test;
	Test var;
	var.str = "static struct";
	var.n=1;
	var.f=0.1;
	varp->str="dynamic struct";
	varp->n=2;
	varp->f=0.2;
	//input
	io.open("output.dat", ios::out | ios::binary);
	if(io.is_open()){
		cout<<"open to write\n";
		//fstream.write(address in char type, size)
		io.write(reinterpret_cast<char *>(&var), sizeof(var));
		io.write(reinterpret_cast<char *>(varp), sizeof(&varp));
		io.close();
		cout<<"file close\n";
	}
	else
		cout<<"open failed\n";
	
	//output
	io.open("output.dat", ios::in | ios::binary);
	if(io.is_open()){
		cout<<"open to read\n";
		io.read(reinterpret_cast<char *>(&var), sizeof(var));
		io.read(reinterpret_cast<char *>(varp), sizeof(&varp));
		cout<<"read\n";
		io.close();
		cout<<"file close\n";
		cout<<"print struct var\n";
		cout<<var.str<<endl;
		cout<<var.n<<endl;
		cout<<var.f<<endl;
		cout<<"print struct varp\n";
		cout<<varp->str<<endl;
		cout<<varp->n<<endl;
		cout<<varp->f<<endl;
	}
	else
		cout<<"open failed\n";
	delete varp;
	return 0; 	
}