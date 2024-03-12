#include<stdio.h>
int main()
{
int temp,n,r,sum=0;
scanf("%d",&n);
temp=n;
while (temp!=0)
{
   r=temp%10;
   sum=sum+r;
   temp=temp/10;
}

printf("Sum %d",sum);

}