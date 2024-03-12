#include <stdio.h>
int main() {
    int num1, num2,sum;
    printf("Enter two integer: ");
    scanf("%d%d", &num1,&num2);
    if (num1+num2 >= 10 && num1+num2 <= 20) 
    {
    sum= 30;
    }
    printf("Result: %d\n", num1+num2);
}
