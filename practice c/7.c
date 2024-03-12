#include <stdio.h>

int main()
{
  int i,n=200,sum=0;
        for(i =100; i<=n; i++){
          if(i % 7 == 0)
           {
            printf("%d ", i);
            sum=sum+ i;
          }
        }
        printf("Sum of All Divisor by 7 %d\n", sum);
    return 0;
}