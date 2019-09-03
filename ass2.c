#include<stdio.h>
void main()
{
int iem[4]={71005,71006,71007,71008};
int isal[4]={25000,10000,15000,40000};
int iall[4]={15000,2000,5000,20000};
printf("Employee ID\t\tBasic Salary\t\tAllowances\n");
printf("===========\t\t==========\t\t==========\n");
for(int i=0;i<4;i++)
{
	printf("%d       \t\t%d      \t\t%d\n",iem[i],isal[i],iall[i]);
}}
