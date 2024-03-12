#include<stdio.h>
int main()
{
int days,year,month,week;
scanf("%d",&days);
year=days/365;
month=(days%365)/30;
days=(days-((year*365)+(month*30)));

printf("%d\n%d\n%d\n",year,month,days);

}
