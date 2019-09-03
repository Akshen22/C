#include<stdio.h>

void main()
{
   int num=13;
   int c=0;
   for(int i=1; i<=num;i++)
   {
     if(num%i==0)
     { 
       c++;
     }
   }
   if(c==2)
   {
     printf("it is a prime no. \n");
   }
   else
   {
     printf("it is not a prime no. \n");
   }
}
