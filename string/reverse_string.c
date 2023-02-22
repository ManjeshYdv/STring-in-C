#include<stdio.h>
void main()
{
	char name[50];
	int i=0,len=0,temp=0;
	printf("enter your name:");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
		len++;
	}
	len=len-1;
	i=0;
	while(i<len)
	{
		temp=name[i];
		name[i]=name[len];
		name[len]=temp;
		i++;
		len--;
	}
	printf("\n the reverse of you name is:%s",name);
}
