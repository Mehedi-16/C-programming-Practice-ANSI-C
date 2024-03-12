#include <stdio.h>
int sum(int P, int Q);
int main()
{
    int X, Y,result;
    scanf("%d%d", &X, &Y);
    result = sum(X, Y);
    printf("%d",result);
}
int sum(int P, int Q)
{
    int S;
    S = P + Q;
    return S;
}