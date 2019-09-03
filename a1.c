#include<stdio.h>
void main()
{
//declaring an array and variables
int a[12]={10,10,10,7,4,4,7,7,9,9,12,12};
int b[20];
int i,k=0;

//for loop
for(i=0;i<12;i++)
{
   if(a[i]!=a[i+1])
   {
          b[k]=a[i];
          k=k+1;
   }
}
for(i=0;i<k;i++)
{
   printf("%d\t",b[i]);
}
}

