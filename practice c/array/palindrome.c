#include <stdio.h>

int Pal(int A[], int N) {
    int i, j;
    for (i = 0, j = N - 1; i < j; i++, j--) {
        if (A[i] != A[j]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int N,A[100];
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    if (Pal(A, N)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
