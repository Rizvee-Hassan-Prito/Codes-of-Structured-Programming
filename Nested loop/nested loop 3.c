#include<stdio.h>
int main()
{
    int i,n,a,b,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=0;
        for(b=1;b<=i;b++)
        {
            a=a+b;
        }
        sum=sum+a;
    }
    printf("%d",sum);
}
