#include<iostream>
using namespace std;
class A
{
protected:
//private:	this line generate error
	int iprot;
};
class B:A 	// derive class
{
public:
	void set(int);
	void get();
};
void B::set(int a)
{
	iprot=a;
}
void B::get()
{
	cout<<"Value is "<<iprot<<endl;
}
int main()
{
	B b;
//	b.iprot=10;	give error
	b.set(20);
	b.get();
	return 0;
}
