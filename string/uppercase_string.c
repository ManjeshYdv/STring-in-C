#include<stdio.h>
#include<string.h>
void main()
{
	char name[50];
	int i;
	printf("enter your name:");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
		name[i]=name[i]-32;
	}
	printf("\n the uppercase=%s",name);
}
