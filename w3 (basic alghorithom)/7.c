#include<stdio.h>
int main()
{
 int a,b;
 printf("Enter two value: ");
 scanf("%d%d",&a,&b);
if(a>=100 && a<=200 || b>=100 && b<=200)
printf("Output: 1");
else
printf("Output: 0");
}