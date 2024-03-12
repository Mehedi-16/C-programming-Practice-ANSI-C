#include<stdio.h>
int main()
{
int n,i,sum;
printf("Enter the number: ");
scanf("%d",&n);
for ( i = 1; i <=10; i++)
{
sum=n*i;
printf("%d*%d=%d\n",n,i,n*i);
}
}