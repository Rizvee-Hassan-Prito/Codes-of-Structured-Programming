#include<stdio.h>
int main()
{
    int i=1,x=0,b,count,n;
    scanf("%d",&n);
    int a[100];
    while(i<=n)
    {
        int b=1;
        count=0;
        while(b<=i)
        {
            if(i%b==0)
            {
                count++;
            }
            b++;
        }
        if(count==2)
        {
            a[x]=i;
            x++;
        }
        i++;
    }
    int r;
    for(r=0;r<x-1;r++)
    {
        if((a[r+1]-a[r])==2)
        {
            printf("%d,%d ",a[r],a[r+1]);
        }
    }
}
