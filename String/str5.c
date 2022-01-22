#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],gtr[50];
    gets(str);
    gets(gtr);
    int len=strlen(str);
    int len2=strlen(gtr);
    int flag=0,i;
    if(len==len2)
    {
        for(i=0;i<len;i++)
        {
            if(str[i]!=gtr[i])
            {
                flag=1;
                break;
            }
        }
    }
    else{flag=1;}
    if(flag==0)
    {
        return 0;
    }
    else{printf("not same");}
}
