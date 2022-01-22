#include<stdio.h>
#include<string.h>
int pow(int x,int n)
{
   int i,fct=1;
   for(i=0;i<n;i++)
   {
       fct=fct*x;
   }
   return fct;
}
int main()
{
     char str[30],qtr[30];
     gets(str);
     int l=strlen(str),i,sum=0;
     for(i=0;i<l;i++)
     {
         sum=sum+(str[i]-48)*pow(2,l-1-i);
     }
     printf("%d",sum);
}
