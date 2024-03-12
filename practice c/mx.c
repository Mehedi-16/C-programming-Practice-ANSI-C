#include <stdio.h>

void maxii(int n[4])
{
    int i, max = n[0];
    for (i = 0; i <= 4; i++)
    {

        if (max < n[i])
            max = n[i];
    }
        printf("max number is :  %d", max);
    
}

    int main()
    {
        int num[30]={1,2,3,4,5};
        maxii(num);
    }