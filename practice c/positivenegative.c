#include <stdio.h>

int main() 
{

    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    if (num >0) 
            printf("You entered a positive number");
        else
            printf("You entered a negative number.");
}