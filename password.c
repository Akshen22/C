#include<stdio.h>
#include<string.h>
void main()
{
	char password[20]="APSIT123";
	char curr[100];
	int c;
	printf("Please Enter The Password:\n");
	scanf("%s",&curr);
	c=strcmp(password,curr);
	if(c==0)
	{
		printf("Correct Password\n Welcome to Apsit");
	}
	else
	{ 
		printf("wrong password entered");
	}
}

