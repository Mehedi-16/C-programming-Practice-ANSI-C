#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, x1, x2;
    printf("Enter (abc) number ");
    scanf("%lf%lf%lf", &a, &b, &c);
    x1 = (-b + sqrt((b * b) - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt((b * b) - 4 * a * c)) / (2 * a);
    printf("x1=%lf x2=%lf", x1, x2);
}