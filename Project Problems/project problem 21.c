#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],qtr[100];
    gets(str);
    gets(qtr);
    int i,k,t,j;
    int ln=strlen(str);
    int flag;
    for(k=0;k<=ln;k++)
    {
    flag=0;
    t=str[0];
    for (i=0;i<ln-1;i++)
    {
       str[i]=str[i+1];
    }
    str[ln-1]=t;
    for(i=0;i<ln;i++)
    {
        if(str[i]!=qtr[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Same sequence");
        return 0;
    }
    }
    if (flag==1)
    {
        printf("Not Same sequence");
    }
}
