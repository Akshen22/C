#include<stdio.h>
#include<string.h>
struct student{
	char name[20];
	int roll;
	int sub[3];
};
struct student s[3]; // array of structure
float per[3];
int topper;

void database_creation(void)
{
int i,j;
	printf("Enter the database:: \n");
	for(j=0;j<3;j++)	
	{
		printf("\nName: ");
		scanf(" %s",&s[j].name);
		printf("\n Roll no. ");
		scanf(" %d",&s[j].roll);
		for(i=0;i<3;i++)
		{
		printf("\nEnter sub %d marks: ",i+1);
		scanf(" %d",&s[j].sub[i]);
		}
	}
	printf("=============================");
	printf("Information display \n");
	printf("Name	Roll no.	S1	s2	s3\n");
	for(j=0;j<3;j++)
	{
		printf("%s	%d	",s[j].name,s[j].roll);
		for(i=0;i<3;i++)
		{
		printf(" %d	",s[j].sub[i]);
		}
		printf("\n");
	}		

}

void percentage_calculation(void)
{
	int i,j;	
	for (i=0;i<3;i++) // this loop will traverse the students
	{	
		per[i]=0;
		for(j=0;j<3;j++)
		{
		per[i]=per[i]+s[i].sub[j];
		}
		per[i]=per[i]/3;
	}

	printf("student name	Percentage	/n");
	for(i=0;i<3;i++)
	{
	printf("%s	%f\n",s[i].name,per[i]);	
	}
}

void topper_calculation(void)
{

}

void main()
{
int ch,f=1;
while(f==1)
{
	printf("Enter your choice : ");
	scanf(" %d",&ch);
	if (ch==1)
	{database_creation();}
	else if(ch==2)
	{percentage_calculation();}
	else if (ch==3)
	{
	printf("program exited");
	f=0;
	}
}
}









