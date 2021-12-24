#include<stdio.h>
int main()
{
    int i,a,n,cnt;
    scanf("%d",&n);
    for(a=2;a<=n;a++)
    {
        int cnt=0;
        for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
           cnt++;
        }
    }
        if(cnt==0)
        {
            printf("%d is a prime\n",a);
        }
    }
}

