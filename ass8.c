 #include<stdio.h>
void main()
{
int k,i,j;
k=0;
int a[5]={0,1,2,3,4};
int b[5]={5,6,7,8,9};
int c[20];
for(i=0;i<5;i++)
{
c[k]=a[i];
c[k+1]=b[i];

k=k+2;

}
for(j=0;j<k;j++)
{
	printf("%d\t",c[j]);
}
}
