#include <stdio.h>

int fib(int n) 

{
    if (n == 1) 
    {
        return 0;
    }
     else if (n == 2) 
     {
        return 1;
    } 
    else 
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int result = fib(N);
    printf("%d", result);

    return 0;
}
