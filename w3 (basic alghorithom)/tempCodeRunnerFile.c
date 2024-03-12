#include <stdio.h>
int main()
{
 int x,y;
 printf("Enter two value: ");
 scanf("%d%d",&x,&y);
  if (x >= 20 && x <= 30 && y >= 20 && y <= 30) {
    if (x >= y) {
      return x;
    } else {
      return y;
    }
  } else if (x >= 20 && x <= 30) {
    return x;
  } else if (y >= 20 && y <= 30) {
    return y;
  } else {
    return 0;
  }
}
