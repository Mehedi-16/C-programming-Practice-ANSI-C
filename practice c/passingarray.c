#include<stdio.h>
void pass(int num[])
{
int i;
for ( i = 0; i < 3; i++)
{
    printf("%d ",num[i]);
}


}



int main()
{
int num[]={10,20,30};
pass(num);
}