#include<iostream>
using namespace std;
class A
{
protected:	int data1;
public:		void setdata(int);
		void dis(void);
};
class B : A
{
		int data2;
public:		void setdata(int,int);
		void dis();
};
void A::setdata(int d)
{
	data1=d;
}
void B::setdata(int d1, int d2)
{
	data1=d1;
	data2=d2;
}
void A::dis()
{
	cout<<"Class A member fun"<<endl;
	cout<<"data1 : "<<data1<<endl;
}
void B::dis()
{
	cout<<"class B member fun"<<endl;
	cout<<"data1 : "<<data1<<endl;
	cout<<"data2 : "<<data2<<endl;
}
int main()
{
	class A a;
	class B b;
	a.setdata(10);
	a.dis();
	b.setdata(80,90);
	b.dis();
	return 0;
}
