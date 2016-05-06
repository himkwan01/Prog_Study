//conversion program
//float,dec,bin,oct,hex

#include <bits/stdc++.h>
using namespace std;
//stop line 192-195 float 2 dec, shifting part

string Hex[16]={"0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F"};
//function prototypes
string dec2bin(float,int);			//float num, int bit
string dec2binI(float &,int &);	//integer part
string dec2binF(float,int);			//decimal part
string bin2hex(string);
int bin2dec(string ="",int =8);						//only 8 bit
string dec2float(float);
string floatExp(int);
string float2dec(string);
void neg2pos(string &);
int hex2dec(char);							//single conversion
void  pos2neg(string &);
template <class T>
bool isInt(T);
int main(){
	string str="F12345FC";
	// cin>>str;
	cout<<float2dec(str);
	// cout<<bin2dec(str)<<endl;
	// cout<<bin2hex(str)<<endl;
	return 0;
}
template <class T>
bool isInt(T n){
	return (n-static_cast<int>(n)==0?true:false);
}
string dec2bin(float n, int bit){
	string str=dec2binI(n,bit);
	str+=dec2binF(n,bit);
	return str;
}
string dec2binI(float &n,int &bit){
	string str="";
	int temp;
	//negative
	if(n<0){
		str+="-";	
		n*=-1;
	}
	//decimal
	if(n<1)str+="0";
	//integer part
	int p=log2(n);		//power
	while(p>=0){
		bit--;
		temp=pow(2,p);
		str+=(n>=temp?"1":"0");
		if(n>=temp)n-=temp;
		p--;
	}
	return str;
}
string dec2binF(float n, int bit){
	string str="";
	int temp;
	//decimal part
	if(n){
		str+=".";
		while(bit && n){
			temp=static_cast<int>(n*2);
			str+=(temp?"1":"0");
			n*=2;
			n-=temp;
			bit--;
		}
	}
	return str;
}

string bin2hex(string str){
	return Hex[bin2dec(str)];
}

//function:	converse binary to decimal
//para		:	string type of binary
//					int last bit weight (2^(str.size()-1)
//return	:	int type decimal
//process	:	loop from last bit to first bit 
int bin2dec(string str, int temp){
	int ttl=0;
	for(int i=0;i<str.size();i++,temp/=2)
		ttl+=(temp*(str[i]-48));
	return ttl;
}
string dec2float(float n){
	bool neg=n<0;
	bool dec=(abs(n))<1;
	int bit=23;
	int shift;
	string str;
	if(!dec){
		str=dec2binI(n,bit);
		shift=(neg?str.size()-1:str.size());
		if(n){
			str+=dec2binF(n,bit);
			str.erase(str.begin()+str.find("."));
		}
	}
	else{
		str=dec2binF(n,bit);
		shift=str.find("1");
		str.erase(0,shift);
		shift*=-1;
	}
	if(neg)str[0]='0';
	else str+="0";
	while(str.size()<24)str+="0";
	if(neg){
		pos2neg(str);
	}
	str+=floatExp(shift);
	string output="";
	for(int i=0;i<str.size();i+=4){
		output+=bin2hex(str.substr(i,4));
	}
	return output;
}

//function:	get float exponential part
//Para		: integer type of exponential part
//return	: string type
//process	: change int type to string type binary
//					add zero in front if size less than 8
string floatExp(int n){
	bool neg=n<0;
	int bit=7;
	string str=dec2bin(abs(n),bit);
	while(str.size()<=bit)str="0"+str;
	if(neg)pos2neg(str);
	return str;
}


//change positive to negative
void pos2neg(string &str){
	bool carry=true;
	//not
	for(int i=0;i<str.size();i++)
		str[i]=(str[i]=='1'?'0':'1');
	//+1
	for(int i=str.size()-1;carry;i--){
		carry=false;	
		if(str[i]=='1'){str[i]='0';carry=true;}
		else str[i]='1';
	}
}
int hex2dec(char c){
	return (c>64?c-55:c-48);
}

//change float to decimal
string float2dec(string str){
	//declare variables
	string bin="";
	string exp;
	int dum=100;
	int shift;
	bool neg;
	//change hex to bin
	for(int i=0;i<str.size();i++){
		float dec=hex2dec(str[i]);
		string binP=dec2binI(dec,dum);	//only 4 bits
		//refill "0" if less than 4 bits
		while(binP.size()<4)binP="0"+binP;
		bin+=binP;
	}
	//exponent part
	exp=bin.substr(24,8);
	//set exp neg flag
	neg=exp[0]=='1';
	//change to positive
	if(neg)neg2pos(exp);
	shift=bin2dec(exp,pow(2,exp.size()-1));
	if(neg)shift*=-1;
	cout<<"shift =  "<<shift<<endl;
	bin.erase(24,8);			//erase exp part
	//set fact neg flag
	neg=bin[0]=='1';
	//change positive
	if(neg)neg2pos(bin);
	bin.erase(bin.begin());
	//shift
	//only float, no integer
	if(shift<=0){
		shift*=-1;
		for(int i=0;i<shift;i++)
			bin="0"+bin;
	}
	//has integer
	else{
	
	}
	return bin;
}//end float2dec func

//function:	change negative to positive
//para		:	string type binary that need to change
//return	:	void (pass by reference)
//process	:	minus 1 then not whole string
void neg2pos(string &str){
	bool carry=true;
	for(int i=str.size()-1;carry;i--){
		carry=false;
		if(str[i]=='0'){str[i]='1';carry=true;}
		else str[i]='0';
	}
	for(int i=0;i<str.size();i++)
		str[i]=(str[i]=='1'?'0':'1');
}//end neg2pos func