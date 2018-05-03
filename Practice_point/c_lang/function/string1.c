#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10],s2[10],c;
	scanf("%s",s1);
	int i,j,len;
	len=strlen(s1);
	printf("%d\n",len);
	j=len;
	i=0;
	while(len/2!=i)
	{
	c=*(s1+len-i-1);
	*(s1+len-i-1)=*(s1+i);
//	printf("c= %c, i %d\n",c,i);
	*(s1+i)=c;
	i++;
	}
	printf("%s\n",s1);
	return 0;
}
