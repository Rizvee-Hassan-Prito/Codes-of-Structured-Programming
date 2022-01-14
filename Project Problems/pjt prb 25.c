#include<stdio.h>
#include<string.h>
int main()
{
    char s[500];
    int i,m,c=0;
    gets(s);
    i=0,m=i+1;
    while(s[i]!='\0')
    {
        if(s[i]==s[m])
        {
        while(s[i]==s[m])
        {
            c++;
            m++;
        }
        i=m;
        m++;
        }
        else
        {
            i++;
            m++;
        }
    }
    printf("%d",c);
}
