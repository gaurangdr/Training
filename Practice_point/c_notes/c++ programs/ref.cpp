#include<iostream>
using namespace std;
void swap(int& a,int& b)
//void swap(int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"address of a "<<&a<<endl;
	cout<<"address of b "<<&b<<endl;
}
int main()
{
	int p=10,q=20;
	swap(p,q);
	cout<<"address of p "<<&p<<endl;
	cout<<"address of q "<<&q<<endl;
	cout<<p<<endl;
	cout<<q<<endl;
	return 0;
}
