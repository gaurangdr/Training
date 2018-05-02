#include<iostream>	//input-output stream header file
using namespace std; //use std lib
class Box //class that give info about how it is
{

public:		//by default private so have to write public
	void area();	//prototype
	int h,l,d;	//member variables
	int v,a;	
	void volume(void) 	//class member function
	{
		v=h*l*d;
	}
};
void Box::area(void)	//use of scope resolution
{
	a=l*d;
}
int main()
{
	Box b1;		//object declare
	b1.h=2;
	b1.l=3;
	b1.d=4;
	b1.volume();	//using object and function class data can be manipulate
	b1.area();
	cout<<"volume is "<<b1.v<<endl;
	cout<<"area "<<b1.a<<endl;
	b1.area();		//give not within the scope error
	return 0;
}
