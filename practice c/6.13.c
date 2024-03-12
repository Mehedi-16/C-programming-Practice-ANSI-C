#include <stdio.h>

int main() {
    int sum = 0, count = 0,i;
    for (int i = 0; i <= 100; i++)
     {
        if (i % 6 == 0 && i % 4 != 0) {
            sum = sum + i;
            count++;
            printf("%d\n",i);
        }
        
    }
    printf("sum  is: %d\n", sum);
    printf("The number of such values is: %d\n", count);
   
}