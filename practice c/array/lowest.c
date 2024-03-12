#include <stdio.h>
int main() 
{
    int N;
    scanf("%d", &N);

    int A[N], lowest = 0, position = 0;
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &A[i]);

        if (i == 0 || A[i] < lowest)
         {
            lowest = A[i];
            position = i + 1;
        }
    }

    printf("%d %d", lowest,position);

    return 0;
}
