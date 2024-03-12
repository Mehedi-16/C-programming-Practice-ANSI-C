#include <stdio.h>
int main()
{
    char month[30][12] = {"january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december"};
    int i;
    printf("Enter the month value: ");
    scanf("%d", &i);
    if (i < 1 || i > 12)
        printf("Incorrect value!!\n");
    if (i != 12)
        printf("%s followed by %s", month[i - 1], month[i]);
    else
        printf("%s followed by %s", month[i - 1], month[0]);
}