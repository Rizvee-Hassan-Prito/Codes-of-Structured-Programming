#include<stdio.h>
#include<string.h>
int main()
{
  char s[5],b[1000],c[1000];
  gets(s);
  gets(b);
   int i=0,n=0,d=0;
   while(b[i]!='\0')
   {
      if(b[i]!=s[n])
      {
          c[d]=b[i];
          d++;
      }
      i++;
   }
   c[d]='\0',d=0;
   while(c[d]!='\0')
   {
       if(c[d]!='0')
       {
            printf("%s",c);
            return 0;
       }
       d++;
   }
   printf("0");
}
