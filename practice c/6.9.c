#include <stdio.h>
int main() {
    int a, b, c;

    printf("Enter three integer values: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b) {
        printf("%d, %d, and %d are the sides of a right-angled triangle.\n", a, b, c);
    } else {
        printf("%d, %d, and %d do not form the sides of a right-angled triangle.\n", a, b, c);
    }

}
