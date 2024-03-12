#include <stdio.h>
int main() {
    int N,i,sum=0;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%1d", &A[i]);
        sum += A[i];
    }
    printf("%d",sum);
}
