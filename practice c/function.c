#include<stdio.h>
int sum(int x,int y)
{
return x+y;

}



int main()
{
int X,Y,p;
scanf("%d%d",&X,&Y);
p=sum(X,Y);
printf("%d",p);
}