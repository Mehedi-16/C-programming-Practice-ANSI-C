#include<stdio.h>
int main()
{
int days,year,m;
scanf("%d",&days);
year=days/365;
m=(days%360)/30;
days=(days%365)%30;



printf("Year: %d\n",year);
printf("month: %d\n",m);
printf("days: %d\n",days);

}