#include <stdio.h>
long int sumInRange(long int L,long int R);
int main() 
{
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        long long int L, R;
        scanf("%ld %ld", &L, &R);

        long int result = sumInRange(L, R);
        printf("%ld\n", result);
    }

    return 0;
}
long int sumInRange(long int L,long int R) 
{
    long long int sum = 0;
    for (long long int i = L; i <= R; i++) 
    {
        sum += i;
    }
    return sum;
}
