#include <stdio.h>
#include<string.h>
int main()
{
    char s[50],q[50];
    gets(s);
    int i,j,m;
    int len=strlen(s);
   for(j=0;j<=len;j++)
   {
    for(m=0;m<=len;m++)
       {
    if(s[j]!=' '&& s[j]!=NULL && s[j]!='.')
    {
        q[m]=s[j];
        j++;
    }
    else{break;}
       }
    q[m]='\0';
    printf("%s",q);
    if(s[j]!='.')
    {
         printf("\n");
    }
  }
}

