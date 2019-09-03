#include<stdio.h>
int c,d,n,i;
int val1,val2;
void main()
{
	printf("Enter Start position:");
	scanf("%d",&val1);
	printf("Enter End position:");
	scanf("%d",&val2);
	printf("The prime numbers between %d and %d are : \n",val1,val2);
	d=0;
	for(n=val1;n<=val2;n++)
	{
		c=0;
		for(i=2;i<=n-1;i++)
		{
			if(n%i==0)
			{
				c=1;
			}
		}
		if(c==0)
		{
			printf("%d, \t",n);
		}
	}
}

