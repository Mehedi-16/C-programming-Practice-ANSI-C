#include <stdio.h>
int main()
{
    int N, A[10], i;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d ", &A[i]);
    }
    for (i = 0; i < N; i++)
    {
    if(A[i]<=10)
    {
       printf("A[%d] = %d\n",i,A[i]);
    }

    }
}