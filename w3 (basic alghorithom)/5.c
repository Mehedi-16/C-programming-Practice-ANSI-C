#include<stdio.h>
int main()
{
 int n;
 printf("Enter Number: ");
 scanf("%d",&n);
 if(n%3==0 || n%7==0)
 printf("True");
 else
 printf("false");
}