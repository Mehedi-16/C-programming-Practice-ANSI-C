#include <stdio.h>

int main() {
    int days, years, months, weeks, remainingDays;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    years = days / 365;
    months = (days%365)/ 30;
    weeks = (days%12) / 7;

    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);

    return 0;
}
