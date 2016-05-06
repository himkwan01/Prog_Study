//class template

#include <bits/stdc++.h>
using namespace std;

template <class T>
class Rectangle{
	private:
		T width;
		T length;
	public:
		//default constructor
		Rectangle(){}
		//width,length
		Rectangle(T,T);
		T getlength()const {return length;}
		T getwidth()const {return width;}
		void setwidth(T w){width=w;}
		void setlength(T l){length=l;}
		void print();
};
template <class T>
Rectangle<T>::Rectangle(T width, T length){
	this->width=width;
	this->length=length;
}
template <class T>
void Rectangle<T>::print(){
	cout<<"Width = "<<width<<endl;
	cout<<"Length = "<<length<<endl;
}