#include<stdio.h>
int isPrime(int n)
{
    int i,cnt=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cnt++;
        }
    }
    if(cnt==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a[50];
    int i,n,d,cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
    {
        d=isPrime(a[i]);
        if(d==1)
        {
            cnt++;
        }
    }
    printf("%d",cnt);
}
