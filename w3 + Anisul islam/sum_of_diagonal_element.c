#include<stdio.h>
int main()
{
int A[3][3],i,j,sum=0;

printf("Enter the value of A Matrix:\n ");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("A[%d][%d]=",i,j);
scanf("%d",&A[i][j]);
}
}


for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(i==j)
sum=sum+A[i][j];
}
}
printf("sum of diagonal element= %d\n",sum);
}