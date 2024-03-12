#include<stdio.h>
int main()
{
int num1,num2,n1,n2,temp,r,sum=0,gcd,lcm;
scanf("%d%d",&num1,&num2);
n1=num1;
n2=num2;
while (n2!=0)
{
    r=n1%n2;
    n1=n2;
    n2=r;
}
gcd=n1;
lcm=(num1*num2)/gcd;
printf("%d\n",gcd);
printf("%d",lcm);
}