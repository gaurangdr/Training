#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	int i,j;
	srand((unsigned)time(NULL));
	j=rand();
	cout<<"random number "<<j<<endl;
	j=rand();
	cout<<"random number "<<j<<endl;
	return 0;
}
