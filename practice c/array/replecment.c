#include <stdio.h>
int main()
{
    int N, A[100], i;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    for (i = 0; i < N; i++)
    {
        if (A[i] > 0)
            printf("1 ");
        else if (A[i] < 0)
            printf("2 ");
        else
            printf("0 ");
    }
}