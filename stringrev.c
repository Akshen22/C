#include<stdio.h>
#include<string.h>
void main()
{
	int i,k,p;
	k=0;	
	char string[50],string1[50];
	printf( " Enter a string\n");
	gets(string);
	p=strlen(string);
	for(i=p-1;i>=0;i--)
	{
		string1[k++]=string[i];
	}
	printf("\n String after reversing =%s",string1);
	
	
}

