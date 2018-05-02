#include<iostream>
using namespace std;
namespace scope1
{
	int sum(int a, int b)
	{
		return a+b;
	}
}
namespace scope2
{
	double sum(double a,double b)
	{
		return a+b;
	}
}
int main()
{
	cout<<scope1::sum(10.5,20.25)<<endl;
	cout<<scope2::sum(10.5,10.25)<<endl;
	return 0;
}
