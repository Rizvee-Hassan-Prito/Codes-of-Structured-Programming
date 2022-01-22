#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int x,i=0;
    scanf("%d",&x);
    while(x!=0)
    {
        str[i]=(x%2)+48;
        i++;
        x=x/2;
    }
   str[i]='\0';
    strrev(str);
    printf("%s",str);
}
