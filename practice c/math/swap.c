#include<stdio.h>
void swap(int *P,int *Q);
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    swap(&X,&Y);
    printf("%d ",X);
    printf("%d",Y);
}
void swap(int *P,int *Q)
{
int temp=*P;
*P=*Q;
*Q=temp;
}