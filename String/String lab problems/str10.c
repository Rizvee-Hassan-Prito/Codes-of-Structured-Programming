#include<stdio.h>
#include<string.h>
int count_char(char str[],char ch)
{
    int i,f,k=0;
    int l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]==ch)
        {
            k++;
        }
    }
    return k;
}
int main()
{
    char str[50],e;
    gets(str);
    int l=strlen(str);
    int i,j,max=-9999;
    for(i=0; i<l; i++)
    {
        if(count_char(str,str[i])>max && str[i]!=' ')
        {
            max=count_char(str,str[i]);
            e=str[i];
        }
    }
    printf("%c",e);
}
