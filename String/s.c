#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    gets(str);
    int t=0,i;
    int d=strlen(str);
    for(i=0;i<d;i++)
    {
         if(str[i]==32)
        {
            t++;
        }
    }
    printf("%d",t+1);
}

