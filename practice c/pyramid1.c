#include <stdio.h>
int main() {
    int N, i, j, space;
    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        for (j = 1; j <N-space; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }
}
