#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    gets(str);
    int i=0,n;
    printf("%c",str[0]);
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            printf("%c",str[i+1]);
        }
        i++;
    }
}
