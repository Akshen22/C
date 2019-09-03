#include<stdio.h>
void main()
{  
int i,j,row;
printf("Enter number of rows:");
scanf("%d",&row);
for(i=row;i>=0;i--)
{
for(j=i;j>=0;j--)
{
printf("*");
}
printf("\n");
}
}
