#include<stdio.h>
#include<string.h>
int main()
{
     char str[30],qtr[30];
     gets(str);
     int l=strlen(str),i;
     for(i=0;i<l;i++)
     {
         if(str[i]>=65 && str[i]<=90)
         {
             str[i]=str[i]+32;
         }
     }
     printf("%s",str);
}
