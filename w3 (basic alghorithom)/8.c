#include<stdio.h>
int main()
{
 int a,b,c;
 printf("Enter three value: ");
 scanf("%d%d%d",&a,&b,&c);
 if(a>=20 && a<=50 ||b>=20 && b<=50 || c>=20 && c<=50)
 printf("True");
 else
 printf("false");}