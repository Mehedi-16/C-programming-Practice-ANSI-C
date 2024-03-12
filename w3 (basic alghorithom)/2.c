#include<stdio.h>
int main()
{
int n,x=51,sum;
printf("enter the value: ");
scanf("%d",&n);
if(n>x)
{
sum=(n-x)*3;
printf("sum is: %d",sum);}
else
printf("if x>n: %d",x-n);
}