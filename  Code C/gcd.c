#include<stdio.h>
int main()
{
int num1,num2,n1,n2,r,gcd;
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
printf("gcd=%d ",gcd);
}
