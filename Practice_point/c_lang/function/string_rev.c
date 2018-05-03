void strrev(char *s1)
{
	int len=0,i=0;
	char c;
	while(*(s1+len))
		len++;
	while(len/2!=i)
	{
		c=*(s1+len-i-1);
		*(s1+len-i-1)=*(s1+i);
//		printf("c= %c, i %d\n",c,i);
		*(s1+i)=c;
		i++;
	}
}
