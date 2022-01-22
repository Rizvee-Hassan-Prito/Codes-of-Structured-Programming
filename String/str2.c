#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    gets(str);
    int len=strlen(str);
    int i,c;
    for(i=0;i<len/2;i++)
    {
       c=str[i];
       str[i]=str[len-1-i];
       str[len-1-i]=c;
    }
    printf("%s",str);
}

