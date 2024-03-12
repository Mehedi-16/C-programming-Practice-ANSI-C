#include <stdio.h>

int main()
{
    int n, temp, sum = 0, i, r;
    scanf("%d", &n);

    for (i = 1; i <= 100; i++)
    {
        temp = i;
        sum = 0;

        while (temp != 0)
        {
            r = temp % 10;
            sum = sum + r * r * r;
            temp = temp / 10;
        }

        if (sum == i)
        {
            printf("%d\n", i);
        }
    }
}
