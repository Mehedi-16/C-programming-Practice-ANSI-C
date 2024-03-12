#include<stdio.h>
int main()
{
int N,A[100],i,even,odd;
scanf("%d",&N);
for(i=0;i<N;i++)
{
scanf("%d",&A[i]);
}
for(i=0;i<N;i++)
{
if(A[i]%2==0)
{
A[i]=even;
}
if(A[i]%2!=0)
{
A[i]=odd;
}
}
if(even>odd)
printf("Lucky");
else
printf("Unlucky");
}