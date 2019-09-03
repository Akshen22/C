#include<stdio.h>

char Arr[9]={'0','0','0','0','0','0','0','0','0'};

int a()
{if ((Arr[0] == 'X' && Arr[1] == 'X' && Arr[2] == 'X') || (Arr[3] == 'X' && Arr[4] == 'X' && Arr[5] == 'X') || (Arr[6] == 'X' && Arr[7] == 'X' && Arr[8] == 'X') || (Arr[0] == 'X' && Arr[3] == 'X' && Arr[6] == 'X') || (Arr[1] == 'X' && Arr[4] == 'X' && Arr[7] == 'X' )|| (Arr[2] == 'X' && Arr[5] == 'X' && Arr[8] == 'X') || (Arr[0] == 'X' && Arr[4] == 'X' && Arr[8] == 'X') || (Arr[2] == 'X' && Arr[4] == 'X' && Arr[6] == 'X'))
        return 1;

else if ((Arr[0] == 'o' && Arr[1] == 'o' && Arr[2] == 'o') || (Arr[3] == 'o' && Arr[4] == 'o' && Arr[5] == 'o') || (Arr[6] == 'o' && Arr[7] == 'o' && Arr[8] == 'o') || (Arr[0] == 'o' && Arr[3] == 'o' && Arr[6] == 'o') || (Arr[1] == 'o' && Arr[4] == 'o' && Arr[7] == 'o')|| (Arr[2] == 'o' && Arr[5] == 'o' && Arr[8] == 'o') || (Arr[0] == 'o' && Arr[4] == 'o' && Arr[8] == 'o') || (Arr[2] == 'o' && Arr[4] == 'o' && Arr[6] == 'o'))
        return 0;
}
void display(void)

{
int count=0,i,j,z;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%c | ",Arr[count]);
count=count+1;
}
printf("\n--------");
printf("\n");
}
}
void main()
{
int ch,i,c=0;
display();
for(i=1;i<=9;i++)
{
if(i%2!=0)
{
printf("\nPlayer 1:");
scanf("%d",&ch);
Arr[ch-1]='X';
}
if(i%2==0)
{
printf("\nPlayer 2:");
scanf("%d",&ch);
Arr[ch-1]='o';
}

display();
int e=a();
if(e==1)
{
	printf("Player 1 wins\n");
c++;
	break;
}
else if(e==0)
{
	printf("Player 2 wins\n");
c++;
	break;
}
}
if(c==0)
	printf("Draw\n");
}

 	 

 

