#include<stdio.h>
int i,a,c,d,e,f,val,num,n1,n2,n3,b,result;
void prime(int);
void armst(int);
void main()
{
	printf("Enter a positive Integer\n");
	scanf("%d",&c);
	printf("Enter '1' for Prime number\nEnter '2' for Armstrong number");
	scanf("%d",&e);
	if(e==1)
	{	
		prime(c);
	}
	else if(e==2)
	{
		armst(c);
	}
}

	void prime(int num)
	{	
		for(i=2;i<=num/2;i++)
		{
			if(num%i==0)
			{
				f=1;
			}
		}	
			if(f==1)
			{
				printf("%d is not a prime number\n",num);
							
			}
	
		
			else if(f==0)
			{
				d=d+1;
				printf("%d is a prime number\n",num);	
			}
			else
			{
				printf("error\n");	
				
			}
		
	}
	void armst(int a)
	{
		n1=a%10;
		b=a/10;
		n2=b%10;
		n3=b/10;
		result=(n1*n1*n1)+(n2*n2*n2)+(n3*n3*n3);
		if(result==a)
		{
			printf("%d is an armstrong number\n",a);
		}
		else
		{
			printf("%d is not an armstrong number\n",a);
		}
	}


	


		
