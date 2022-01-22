#include<stdio.h>
#include<string.h>
int main()
{
    char str[30],gtr[30];
    gets(str);
    gets(gtr);
    int l=strlen(str),ln=strlen(gtr),i;
    for(i=0;i<=ln;i++)
    {
        str[l]=gtr[i];
        l++;
    }
    printf("%s",str);
}
