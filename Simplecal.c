#include<stdio.h>
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

void main()
{
int i, num1, num2, choice,z;
while(z!=0){
printf(" [1] Add\n [2] Subtract\n [3] Multiply\n [4] Divide\n [0] Exit ");
scanf("%d", &i);

if (i==1){
        
    
       
        printf("Enter 1st number:\n");
        scanf("%d", &num1);
        printf("Enter 2nd number:\n");
        scanf("%d", &num2);
        printf("%d\n", add(num1,num2));}
        else if(i==2)
{
    
        printf("Enter 1st number:\n");
        scanf("%d", &num1);
        printf("Enter 2nd number:\n");
        scanf("%d", &num2);
        printf("%d\n", sub(num1,num2));}
        else if(i==3){
    
        printf("Enter 1st number:\n");
        scanf("%d", &num1);
        printf("Enter 2nd number:\n");
        scanf("%d", &num2);
        printf("%d\n", mul(num1,num2));}
        else if(i==4){
   
        printf("Enter 1st number:\n");
        scanf("%d", &num1);
        printf("Enter 2nd number:\n");
        scanf("%d", &num2);
        printf("%d\n", div(num1,num2));}
        else {
    
        printf("That is not a valid choice.");
        
	}
	printf("Press 0 to exit or else continue");
	scanf("%d",&z);
	}


}
    	//Addition
int add(int x,int y)
{
    int z = x + y;
    return z;
}   
	//Subtraction
int sub(int a,int b)
{
    int c = a - b;
    return  c;
}   
	//Multiplication
int mul(int d,int e)
{
    int f = d * e;
    return f;
    }
	//Division
int div(int g,int h)
{
    int i = g / h;
    return i;
}

