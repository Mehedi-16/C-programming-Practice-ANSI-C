#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter the first positive integer: ");
    scanf("%d", &num1);

    printf("Enter the second positive integer: ");
    scanf("%d", &num2);

    if ((num1 >= 20 && num1 <= 30) || (num2 >= 20 && num2 <= 30)) 
    {
        if(num1>num2)
        printf("%d",num1);
        else
        printf("%d",num2);
    }
}
