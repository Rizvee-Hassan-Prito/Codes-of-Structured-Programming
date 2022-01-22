#include<stdio.h>
int main()
{
    char str[50];
    gets(str);
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    printf("%d",len);
}

