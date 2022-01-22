#include<stdio.h>
#include<string.h>
int main()
{
    char str[30],qtr[30];
    gets(str);
    int l=strlen(str),i;
    for(i=0;i<l;i++)
    {
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
    {
        str[i]='e';
    }
    }
    printf("%s",str);
}

