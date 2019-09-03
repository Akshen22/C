#include<stdio.h>
#include<string.h>
void main()
{
     FILE *fptr;
     char buffer[400],i=0;
     printf("Enter the content to be saved in file \n");
     gets(buffer);
     // opening the file
     fptr = fopen("demo_file_first.txt","w");
     while(buffer[i]!='\0')
     {
           fputc(buffer[i],fptr);//writing char by chaar in the file
           i=i+1;
     }
     fclose(fptr);
     printf("data written in file successfully");
}
