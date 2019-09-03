#include<stdio.h>
#include<string.h>
void main()
{
	int i=0,j=0,a=0,b=0,k,c;	
	char str[100],rev[100];
	printf("Enter a string to reverse : ");
	gets(str);
	c=strlen(str);
	for(i=0;i<=c;i++)
	{	
		k=i-1;
	}
	for(j=0;j<i;j++)
	{
		rev[j]=str[k];
		k--;	
	}
	printf("Reversed String : %s\n",rev);
	for(j=0;j<c;j++)
	{	
		if(rev[j]==str[k])
		{
			a=1;
		}	
	}
	if(a==1)
	{
		printf("It is a palindrome\n");
	}
	else
	{
		b=b+1;
		printf("It is not a palindrome\n");
	}
}	
