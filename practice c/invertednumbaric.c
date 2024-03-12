#include<stdio.h>
int main()
{
int i,j,row;
printf("Enter the row: ");
scanf("%d",&row);
for(i=row;i>=1;i--)
{
for(j=1;j<=i;j++)
{
printf("%d",j);
}
printf("\n");
}
}
