#include<iostream>
using namespace std;
class Ind
{
public:	Ind()
	{
		cout<<"parameterless contructor"<<endl;
	}
private:int value;
public:	Ind(int temp)
	{
		value=temp;
	}
public: void dis()
	{
		cout<<"value is "<<value<<endl;
	}
};
int main()
{
	Ind guj;
	Ind raj(10);
	raj.dis();
	return 0;
}
