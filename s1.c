#include<stdio.h>
#include<string.h>
struct student{
       char name[20];
       int roll;
       int sub[3];
};
struct student s1;
void main()
{
       int i;
       printf("Enter the database:: \n");
       printf(" \nName: ");
       scanf(" %s",&s1.name);
       printf(" \n Roll no. ");
       scanf(" %d",&s1.roll);
       for(i=0;i<3;i++)
       (
       printf("	\nEntere sub %d marks: ",i+1);
       scanf(" %d,&n1,sub[i]);
       )
       printf("______________________________");
       printf("Information display \n");
       printf("Name	Roll no.	S1	a2	a3\n");
       printf("%s	%d	",a1.name,s1.roll);
       for(i=0;i<3;i++)
       {
       printf(" %d	",s1.sub[i]);
       }
       printf("\n");
}






















