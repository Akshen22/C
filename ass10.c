#include <stdio.h>
void main()
{
 int A[10] [10], t[10] [10], r, c, i, j;
 printf("Enter rows and columns of matrix: ");
 scanf("%d %d", &r, &c);
 
 printf("\nEnter elements of matrix:\n");
 for(i=0; i<r; i++)
    for(j=0; j<c; j++)
    {
    	printf("Enter the value of A[%d] [%d]: ",i,j);
    	scanf("%d", &A[i] [j]);
    }
 printf("Entered Arrays is ::\n");
 for(i=0;i<r;i++)
 {
 	for(j=0;j<c;j++)
 	{
 		printf("%d ",A[i] [j]);
 	}
 	printf("\n");
  }
  for(i=0; i<r; i++)
     for(j=0; j<c; j++)
     {
     	t[j] [i] = A[i] [j];
     }
  printf("\nTranspose of Matrix;\n");
  for(i=0; i<c; i++)
  {
	printf("\n");
	for(j=0; j<r; j++)
	    for(i=0; i<c; i++)
            {
              t[i] [j] =A[j] [i];
            }
        printf("\nTranspose of Matrix;\n");
        for(j=0; j<c; j++)
        {
              printf("\n");
        }
  }
}
