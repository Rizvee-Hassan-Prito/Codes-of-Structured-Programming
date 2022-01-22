#include<stdio.h>
#include<string.h>
int main()
{
     char str[30],qtr[30];
     gets(str);
     int l=strlen(str),i,t=0;
     for(i=0;i<=l;i++)
     {
         qtr[i]=str[l-1-i];
     }
     for(i=0;i<l;i++)
     {
         if(qtr[i]!=str[i])
         {
             t=1;
             break;
         }
     }
     if(t==0)
     {
         printf("palindrome");
     }
     else{printf("not pal.");}
}

