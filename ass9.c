#include<stdio.h>
void main()
{
  int A[3] [3];
  int i,j; 
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
       printf("Enter the value of A[%d] [%d]:",i,j);
       scanf("%d",&A[i] [j]);
     }
  }
  printf("Entered Arrays is :: \n");
  for(i=0;i<3;i++)
  {  
        for(j=0;i<3;j++)
	{
	   printf("%d  ",A[i] [j]);
	}
        printf("\n");
  }
  printf("Left top Corner:%d\n",A[0] [0]);
  printf("Right top Corner:%d\n",A[0] [2]);
  printf("Left bottom Corner:%d\n",A[2] [0]);
  printf("Right bottom Corner:%d\n",A[2] [2]);
}
