#include<iostream>
using namespace std;
namespace scope1
{
	int a=10,b=20;
}

using namespace scope1;	// to make scope1 global

void dis()
{
	cout<<a<<endl;
}
int main()
{
//	using namespace scope1;		//
	dis();
	a=5;
	cout<<a<<endl;
	dis();
	return 0;
}	
