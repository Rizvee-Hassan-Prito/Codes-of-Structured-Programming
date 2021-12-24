#include<stdio.h>
int main()
{
    int i,n,a,b,fac=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=0;
        for(b=1;b<=i;b++)
        {
            a=a+b;
        }
        fac=fac*a;
    }
    printf("%d",fac);
}
