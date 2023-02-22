#include<stdio.h>
void main()
{
	char a[50],b[50];
	int i=0,len=0,tem;
	printf("enter your name:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	b[i]='\n';
	printf("\n the 1^st array is %s",a);
	printf("\n the 2^nd array is %s",b);
	
}
