#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],a;
	int i,k;
	int v=0,c=0,s=0;
	printf("Enter a String :\n");
	gets(str);
	k=strlen(str);
	for(i=0;i<k;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			v=v+1;
		}
		if(str[i]==' ')
		{
			s=s+1;
		}	
		else
		{
			c=c+1;
		}
	}
	printf("Number of vowels : %d\n",v);
	printf("Number of consonants : %d\n",c);
	printf("Number of blank spaces : %d\n",s);
}
