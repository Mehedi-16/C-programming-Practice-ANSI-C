#include<stdio.h>
int main()
{
int n,temp,r,sum=0;
scanf("%d",&n);
temp=n;
while (temp!=0)
{
  r=temp%10;
sum=sum+r*r*r;
temp=temp/10;
}
if(n==sum)
printf("ams");
else
printf("not ams");
}
