#include<stdio.h>
int main()
{
int a,b,sum;
printf("Enter two value: ");
scanf("%d%d",&a,&b);
if(a==b)
{
 sum=(a+b)*3;
printf("sum is %d",sum);
}
else
printf("Not same value");
}