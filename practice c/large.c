#include<stdint.h>
#include<math.h>
int main()
{
float a,b,c,x1,x2;
printf("Enter (abc) number ");
scanf("%f%f%f",&a,&b,&c);
x1=(-b+sqrt(b*b-4*a*c))/(2*a);
x2=(-b-sqrt(b*b-4*a*c))/(2*a);
printf("x1=%f x2=%f",x1,x2);
}