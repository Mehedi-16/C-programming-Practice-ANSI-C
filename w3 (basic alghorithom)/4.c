#include<stdio.h>
#include<stdlib.h>
int main()
{
 int x;
 printf("Enter value: ");
 scanf("%d",&x);
 if(abs(x-100<=10) || abs(x-200<=10))
 printf("True");
 else
 printf("False");
}