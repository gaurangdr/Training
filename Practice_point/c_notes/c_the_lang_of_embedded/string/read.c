//#include<stdio.h>
int main()
{
	char s[30]="India";
	int n1,n2;
	n1=read(0,s,29);	
	n2=write(1,s,30);
//	printf("read :%s\nnumber of characters read: %d\nnumber of characters write : %d\n",s,n1,n2);
	return 0;
}
