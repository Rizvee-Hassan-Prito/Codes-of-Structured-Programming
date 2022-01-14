#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000],qtr[1000];
    gets(str);
    gets(qtr);
    int i,ln=strlen(str);
    for(i=0;i<ln;i=i+2)
    {
        int m=0,flag=0;
        while(str[i]!='.')
        {
            if(str[i]!=qtr[m])
            {
                flag=1;
                break;
            }
            i++;
            m++;
        }
        while(str[i]!='.')
        {
            i++;
        }
        if(flag==0)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
}
