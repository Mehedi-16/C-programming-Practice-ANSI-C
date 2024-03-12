#include<stdio.h>
int main()
{
    int num,count,prime;
     for (num=100; num<=200; num++)
    {
        prime=1;
        for (count=2; count<num; count++)
        {
            if (num%count==0)
            {
                prime=0;
                break;
            }    
        }
        if (prime)
            {
                printf("%d \t",num);
            }
    }
    
}