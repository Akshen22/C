#include<stdio.h>

void main()
{   
   int n1,temp,rem;
   scanf("%d",&n1);
   temp=n1;
   int s=0;
   while(temp!=0)
   {
    rem= temp%10;
    s=s*10+rem;
    temp=temp/10;
   }
   printf("reverse %d is %d",n1,s);
}
