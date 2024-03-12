#include<stdio.h>
int main()
{
char s1[100];
scanf("%s",s1);
char s2[100];
int i=0,len=0,j;
while (s1[i]!='\0')
{
    i++;
    len++;
}
for(j=0,i=len-1;i>=0;i--,j++)
{
    s2[j]=s1[i];
}
printf("%s",s2);


}