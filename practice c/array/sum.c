#include <stdio.h>
int main() {
    long long int  N;
    int A[100],i, sum = 0;
    scanf("%lld", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);   
        sum = sum + A[i];
    }
    if (sum < 0)
        printf("%d", -sum);
    else
        printf("%d", sum);
}
