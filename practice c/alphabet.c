#include<stdio.h>
int main()
{
int i,j,row;
printf("Enter the row: ");
scanf("%d",&row);
for(i=1;i<=row;i++)
{
for(j=1;j<=i;j++)
{
printf("%c",64+j);
}
printf("\n");
}
}
