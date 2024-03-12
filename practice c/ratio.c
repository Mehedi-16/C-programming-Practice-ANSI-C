#include<stdio.h>
int main()
{
int a,b,c,d;
float ratio;
printf("enter four integer value: ");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(c-d!=0)
{
ratio=((a+b)/(c-d));
}
printf("ratio is= %f",ratio);
}