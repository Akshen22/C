#include<stdio.h>
void display_str(char *cptr)
{
           while(*cptr !='\0')
           {
           printf("%c ",*cptr);
           cptr=cptr+1;
           }
}

void main()
{
display_str("hello world demo APSIT");
}

