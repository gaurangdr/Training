#include<iostream>
using namespace std;
int sum(int,int);
int main()
{
//	cout<<sum(100)<<endl;	// this gives error of too less arguments
	cout<<sum(10,20)<<endl;	// works well
	return 0;
}
int sum(int a,int b=0)
{
	return a+b;
}
