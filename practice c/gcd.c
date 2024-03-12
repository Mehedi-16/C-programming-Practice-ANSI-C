#include <stdio.h>
int main()
{
    int A, B, i, gcd;
    printf("Enter two number: ");
    scanf("%d%d", &A, &B);
    for (i = 1; i <= A && i <= B; i++)
    {
        if (A % i == 0 && B % i == 0)
            gcd = i;
    }
    printf("%d",gcd);
}