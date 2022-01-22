#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],gtr[50];
    gets(str);
    int len=strlen(str);
    int i,c;
    for(i=0;i<len;i++)
    {
       gtr[i]=str[i];
    }
    gtr[len]='\0';
    printf("%s",gtr);
}


