#include<stdio.h>
void main()
{
int A[10];
int i;
int s=0;
printf("Enter\n");
for(i=0;i<10;i++)
{
scanf("%d\n",&A[i]);
s=s+A[i];
}
printf("The sum is=%d\n",s);
}
