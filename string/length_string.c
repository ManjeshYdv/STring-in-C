#include<stdio.h>
void main()
{
	char name[50];
	int i,len=0;
	printf("enter your name :");
	gets(name);
	for(i=0;name[i]!='\0';i++)

	printf("\n length of string is %d",i);
}
