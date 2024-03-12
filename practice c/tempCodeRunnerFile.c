#include <stdio.h>
int main() 
{
    int N,M,i,sum=0;
    scanf("%d%d",&N,&M);
    for(i=M; i<=N; i++)
    {
        sum=sum+i;
        printf("%d ",i);
    }
    printf("sum =%d\n",sum);
}