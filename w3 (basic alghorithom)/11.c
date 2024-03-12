#include<stdio.h>
int main()
{
 int a,b;
 printf("Enter two value: ");
 scanf("%d%d",&a,&b);
 if(a>=40 && a<=50 && b>=40 && b<=50 && a>=50 && a<=60 && b>=50 && b<=60)
 printf("true");
 else
 printf("false");
}