#include<stdio.h>
#include<string.h>
int main()
{
    char str[30],qtr[30];
    gets(str);
    int l=strlen(str),i;
    for(i=0;i<=l;i++)
    {
        qtr[i]=str[i];
    }
    printf("%s",qtr);
}

