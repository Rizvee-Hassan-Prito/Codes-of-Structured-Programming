#include<stdio.h>
#include<string.h>
int main()
{
     char str[30];
     gets(str);
     int c=0;
     int l=strlen(str),i;
     for(i=0;i<l;i++)
     {
         if(str[i]==32)
         {
             c++;
         }
     }
     printf("%d",c+1);
}
