#include<iostream>
using namespace std;
class A
{
public:	int ipub;	//data may private or public but function shold be public
	void setpub(int);
private: int ipri;
public:	void setpri(int);
	void dis();
};
void A::setpub(int t)
{
	ipub=t;
}
void A::setpri(int t)
{
	ipri=t;
}
void A::dis()
{
	cout<<"ipri is "<<ipri<<endl;
}
int main()
{
	A a;
	int i,j;
	cin>>i>>j;
	a.setpri(i);
	a.setpub(j);
	a.dis();
	cout<<"ipub is "<<a.ipub<<endl;
	
	return 0;
}

