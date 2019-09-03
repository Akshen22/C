#include<stdio.h>

void main()
{  
   int num=145;
   int rem=0, n=num, sum=0;
   while(num>0)
   {
     rem=num%10;
     sum=sum+(rem*rem*rem);
     num=num/10;
   }
   if(sum==n)
   {
     printf("%d is an armstrong no.\n",n);
   }
   else
   {
    printf("%d is not an armstrong no. \n",n);
   }
}
