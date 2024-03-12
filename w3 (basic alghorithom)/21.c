#include<stdio.h>
int main()
{
 int n;
 printf("Enter the value: ");
 scanf("%d",&n);
if(n%10<=2 || n%10>=8 )
printf("true");
else
printf("False");
}