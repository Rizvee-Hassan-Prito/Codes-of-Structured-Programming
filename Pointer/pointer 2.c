#include<stdio.h>
#include<string.h>
int main()
{
   char *str="prito";
   while(*str!='\0')
   {
      printf("%c",*str);
      str=str+2;
   }
}
