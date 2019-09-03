#include<stdio.h>
void main()
{  
int i,j,row;
printf("Enter number of rows:");
scanf("%d",&row);
for(j=1;j<=row;j++)
{
for(i=1;i<=row-j;i++)
{
printf(" ");
}
for(i=1;i<=j;i++)
{
printf("*");
}
printf("\n");
}
}
