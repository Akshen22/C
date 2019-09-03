#include<stdio.h>
void main()
{
int a[4]={1,3,2,3};
int b[4]={10,20,12,13};
int c[20];
int k=0;
for (int i=0;i<4;i++)
  {
   for(int j=0;j<a[i];j++)
    {
     c[k]=b[i];
     k=k+1;
    }
   }
for(int i=0;i<k;i++)
 {
  printf("%d\t",c[i]);
  }

}
