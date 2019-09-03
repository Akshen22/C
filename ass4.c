#include<stdio.h>
void main()
{
int m[5];
printf("Enter marks of5 students from  0-25;\n");
for(int i=0;i<5;i++)
{
scanf("%d",&m[i]);
}
for(int i=0;i<=25;i++)
{
int n=0;
for(int j=0;j<5;j++)
{
if(m[j]==i)
{
n++;
}
}
printf("No of Students Scorng %d marks= %d\n",i,n);
}
}
