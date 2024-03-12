#include <stdio.h>
void ttpow(double base, double exp)
{
    int result = 1, i;
    for (i = 1; i <  exp+1; i++)
    {
        result = result*base ;
    }
    printf("%d", result);
}

int main()
{
    double base, exp;
    scanf("%lf%lf", &base, &exp);
    ttpow(base, exp);
}