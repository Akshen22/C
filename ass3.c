#include<stdio.h>
 
int main()
{
	int a[50],i,n,great,small;
	printf("How many elements:");
	scanf("%d",&n);
	printf("Enter the Numbers:\n");
 
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
	
	great=small=a[0];
	for(i=1;i<n;++i)
	{
		if(a[i]>great)
			great=a[i];
		if(a[i]<small)
			small=a[i];
	}
	
	printf("The Greatest element is %d",great);
	printf("\nThe Smallest element is %d",small);
 
	
}
