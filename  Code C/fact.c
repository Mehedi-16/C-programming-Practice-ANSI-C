#include <stdio.h>
int main()
{
    int fact = 1, N, T, i;
    scanf("%d", &T);
for (i = 1; i <= T; i++)
    {
        scanf("%d", &N);
    }
for (i = 1; i <= N; i++)
    {
          fact = fact * i;  
    }

    printf("%d", fact);
}