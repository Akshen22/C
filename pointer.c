#include<stdio.h>
void main()
{
int val=40;
int *iptr=NULL;
// storing the address of val in pointer
iptr=&val;
printf("value is%d,%d\n",val,*iptr);
printf("address is %x,%x\n",&val,iptr);
}
