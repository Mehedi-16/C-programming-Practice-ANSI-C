#include<stdio.h>
int main()
{
    int i;
float num[100],n,sum;
printf("How mamny number:\n" );
scanf("%f",&n);
for(i=0;i<n;i++)
{
    scanf("%f",&num[i]);
}
for(i=0;i<n;i++)
{
    sum=sum+num[i]*num[i];
}
printf("sum= %f\n",sum);
}