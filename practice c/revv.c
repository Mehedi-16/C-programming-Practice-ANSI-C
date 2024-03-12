#include<stdio.h>
#include<string.h>
int main()
{
char s1[20];
gets(s1);
//scanf("%s",s1);
int i=0,len=0;
while (s1[i]!='\0')
{
    len++;
    i++;
}
//printf("length= %d\n\n",len);
int j;
char s2[20];
for ( j = 0,i=len-1; i>=0; i--,j++)
{
    s2[j]=s1[i];
}
printf("%s\n",s2);


}