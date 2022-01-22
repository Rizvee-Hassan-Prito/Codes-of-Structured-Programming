#include <stdio.h>
#include<string.h>
int main()
{
    char s[50],q[50];
    gets(s);
    int i=0,n,m;
    int len=strlen(s);
    while(i<len)
    {
        m=0;
    while(s[i]!=' '&& s[i]!=NULL && s[i]!='.')
    {
        q[m]=s[i];
        m++;
        i++;
    }

    q[m]='\0';
    printf("%s",q);
    if(s[i]!='.')
    {
         printf("\n");
    }
    i++;
   }
}
