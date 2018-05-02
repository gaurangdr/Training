#include<stdio.h>
void dec2bin(char *ptr,int num);
int  main()
{
	int num,i;
	char hex[]="1234abcd",bin[32],ctemp[4];
	for(i=0;i<8;i++)
	{
		num=hex2dec(hex+i);
		dec2bin(bin+4*i,num);
	}
//	for(i=0;i<32;++i)
	printf("%s = %s\n",hex,bin);
	return 0;
}
int hex2num(char *ptr)
{
	int a='a',f='f',a0='0',a9='9',temp=(int)*ptr;
	if(a0<=temp<=a9)
		return temp-a0;
	else if(a<=temp<=f)
		return temp-a;
	else
		exit(0);
}
void dec2bin(char *ptr,int num)
{
	int i;
	char temp[4];
	for(i=3;i>=0;--i)
	{
		if(num%2==0)
			temp[i]='0';
		else
			temp[i]='1';
		num=num/2;
	}
	for(i=0;i<3;++i)
		*(ptr+i)=temp[i];
}
