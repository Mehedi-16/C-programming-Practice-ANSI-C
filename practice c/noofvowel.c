#include <stdio.h>

int main()
{
    char s1[100] = "mehedi";
    int i, vowel;
    
    i = 0, vowel = 0;
    
    while (s1[i] != '\0')
    {
        char ch = s1[i];
        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowel++;
        }
        
        i++;
    }

    printf("Number of vowels: %d\n", vowel);
    
    return 0;
}
