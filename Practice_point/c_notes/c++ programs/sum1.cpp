#include<iostream>
using namespace std;
int sum(int a,int b=0,int c=0)	// works for less argumets also
{
        return a+b+c;
}
int main()
{
	int ans;
	ans=sum(10);	//works well
	cout<<"10+0="<<ans<<endl;
	cout<<"10+20="<<sum(10,20)<<endl;
	cout<<"10+20+30="<<sum(10,20,30)<<endl;
	return 0;
}
