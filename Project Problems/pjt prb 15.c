#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    gets(s);
    int i=0,a=0,b=0;
    while(s[i]!='\0')
    {
        if(s[i]=='(')
        {
            a++;
        }
        else
        {
            b++;
        }
        i++;
    }
    if(a==b)
    {
        printf("Balanced");
    }
    else
    {
        printf("Not Balanced");
    }
}
