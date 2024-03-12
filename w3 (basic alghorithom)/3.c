#include<stdio.h>
int main()
{
 int x,y;
 printf("Enter two value: ");
 scanf("%d%d",&x,&y);
 if(x==30 || y==30 || x+y==30) {
 printf("True");}
 else{
 printf("False");}
}