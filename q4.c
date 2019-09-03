#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],a;
	int i,k;
	int freq=0;
	printf("Enter a String :\n");
	gets(str);
	k=strlen(str);
	printf("Enter a character whose frequency you want :\n");
	scanf("%c",&a);
	for(i=0;i<k;i++)
	{
		if(str[i]==a)
		{
			freq=freq+1;
		}
	}
	printf("%d\n",freq);
}
	
