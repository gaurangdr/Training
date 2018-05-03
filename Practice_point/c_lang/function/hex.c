#include<stdio.h>
#include<string.h>
int main()
{
	int n,rem,i=0;
	char ans[10],c;
	scanf("%d",&n);
	while(n)
	{
		rem=n%16;
		if(rem>9)
		{
			ans[i]=rem+'A'-10;
		}
		else
		{
			ans[i]=rem + '0';
		}
		i++;	
		n=n/16;
	}
	ans[i]='\0';
	strrev(ans);
	printf(" %s \n",ans);
	return 0;
}

		
