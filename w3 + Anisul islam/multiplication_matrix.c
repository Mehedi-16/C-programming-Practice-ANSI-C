#include<stdio.h>
int main()
{
int first[10][10],secend[10][10],result[10][10],r1,r2,c1,c2,i,j,k,sum;
printf("Enter the row and column for first matrix: ");
scanf("%d %d",&r1,&c1);

printf("Enter the row and column for secend matrix:\n ");
scanf("%d %d",&r2,&c2);

while(c1!=r2)
{
printf("Erorr !! first column and secend rows number are not equal.\n");

printf("Enter the row and column for first matrix:\n ");
scanf("%d %d",&r1,&c1);

printf("Enter the row and column for secend matrix: ");
scanf("%d %d",&r2,&c2);
}


printf("Enter the first matrix value:\n ");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("first[%d][%d]=",i,j);
scanf("%d",&first[i][j]);
}
printf("\n");
}

printf("Enter the secend matrix value:\n ");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("secend[%d][%d]=",i,j);
scanf("%d",&secend[i][j]);
}
printf("\n");
}

printf("Enter the result matrix :\n ");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
for(k=0;k<c1;k++)
{
sum=sum+first[i][k]*secend[k][j];
}
result[i][j]=sum;
sum=0;
}
printf("\n");
}

printf("First Matrix: \n ");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d ",first[i][j]);
}
printf("\n");
}

printf("Secend Matrix: \n ");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("%d ",secend[i][j]);
}
printf("\n");
}
printf("Result Matrix: \n ");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
printf("%d ",result[i][j]);
}
printf("\n");
}


}