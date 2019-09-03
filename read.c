#include<stdio.h>
#include<string.h>
void main()
{
     FILE *fptr;
     char c;
     // opening the file
     fptr = fopen("demo_file_first.txt","r");
     do
     {
           c=fgetc(fptr);//writing char by char in the file
           printf("%c ",c);
     }while(c!=EOF);
     fclose(fptr);
     printf("data read in file successfully");
}
