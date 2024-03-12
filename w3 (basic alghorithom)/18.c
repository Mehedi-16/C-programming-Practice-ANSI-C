#include<stdio.h>
int main()
{
 int a,b;
 printf("Enter two value: ");
 scanf("%d%d",&a,&b);
 if(a==5 || b==5 || (a+b)==5 || (a-b)==5)
 printf("True");
 else
printf("False");
}