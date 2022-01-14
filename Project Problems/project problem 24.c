#include<stdio.h>
#include<conio.h>
#include<string.h>
int main ()
{
    int a[100];
    char str[100];
    gets(str);
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int cnt=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==1 || a[i]==2)
        {
            if(str[i]=='s')
            {
            cnt++;
            printf("hit\n");
            }
        }
        if(a[i]>2)
        {
           if((str[i]=='j'))
           {
               cnt++;
             printf("hit\n");
           }
        }
        else
        {
            printf("not hit\n");
        }
    }
    printf("%d",cnt);
}

