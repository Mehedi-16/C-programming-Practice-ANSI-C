#include <stdio.h>
#include <math.h>

int main() {
   double a, b, c, d, x1, x2;

   printf("Enter coefficients a, b, and c: ");
   scanf("%lf %lf %lf", &a, &b, &c);

   d = b * b - 4 * a * c;

   if (d < 0) {
      printf("Roots are imaginary.\n");
   }
   else {
      x1 = (-b + sqrt(d)) / (2 * a);
      x2 = (-b - sqrt(d)) / (2 * a);

      printf("Roots are: %.2lf and %.2lf\n", x1, x2);
   }
}
