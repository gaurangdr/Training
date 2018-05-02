#include<iostream>
using namespace std;
template <class type1,class type2 > type1 sum (type1 a, type2 b)
{
//	type1 result;	// for return type of type1
	type2 result;	// for return type of type2
	result=a+b;
	return result;
}
int main()
{
	cout<<sum<int,int>(10,20)<<endl;
	cout<<sum<double,int>(10.5,100)<<endl;
	return 0;
}
