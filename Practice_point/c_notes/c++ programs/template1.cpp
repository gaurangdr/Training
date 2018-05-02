#include <iostream>
using namespace std;

template <class T> T sum (T a, T b)
{
	T result;
	result = a + b;
	return result;
}
int main()
{
	int k;
	double h;
	k=sum<int>(10,20);	//good practice
	h=sum<double>(9,19.5);	//good practice
	cout << k << '\n';
	cout << h << '\n';
	h=sum(9.2,19.5);	//valid
//	h=sum(9,19.5);	//invalid give error bcs confusion of int and double
	cout << h << '\n';
	return 0;
}
