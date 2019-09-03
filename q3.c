#include<stdio.h>
#include<string.h>
void main()
{
	int i=0,j,k,n,l;
	int a[10];
	printf("Enter the number (decimal) : ");
	scanf("%d",&n);
	while (n!=0)
	{
		l=n%2;
		a[i]=l;
		i=i+1;
		n=n/2;
	}
	printf("The number in Binary form : ");
	for(k=i-1;k>=0;k--)
	{
		printf("%d",a[k]);
	}
}
