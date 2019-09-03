#include<stdio.h>

void main()
{   int c=0;
   for(int i=1; i<=100; i++)
   {
     for(int j=1; j<=i-1;j++)
     {
        if(i%j==0)
        {
          c=c+1;
        } 
       
      }
    }
 printf("%d\n",c);
 }
          
