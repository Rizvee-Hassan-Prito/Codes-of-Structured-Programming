#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],gtr[50];
    gets(str);
    gets(gtr);
    int len=strlen(str);
    int len2=strlen(gtr);
    int i,c;
    int f=len;
    for(i=0;i<=len+len2;i++)
    {
       str[f]=gtr[i];
       f++;
    }
    printf("%s",str);
}



