#include<stdio.h>
int main()
{
    int row,col,n,tri=1;
    printf("Enter the Number: ");
scanf("%d",&n);
for (row= 1; row <= n; row++)
{
for  (col = 1; col <= row; col++)
{
    printf("%d",tri);
    tri++;
}
printf(" \n"); 
}
}