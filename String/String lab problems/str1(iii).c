#include<stdio.h>
int main()
{
    char str[50],qtr[50];
    gets(str);
    int l=0,i;
    while(str[l]!='\0')
    {
        l++;
    }
    for(i=0;i<=l;i++)
    {
        qtr[i]=str[i];
    }
    printf("%s",qtr);
}
