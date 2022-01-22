#include<stdio.h>
#include<string.h>
int main()
{
     char str[30];
     gets(str);
     int l=strlen(str),i,t;
     for(i=0;i<l/2;i++)
     {
         t=str[i];
         str[i]=str[l-1-i];
         str[l-1-i]=t;
     }
printf("%s",str);
}
