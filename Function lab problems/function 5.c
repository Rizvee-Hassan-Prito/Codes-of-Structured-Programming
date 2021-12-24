#include<stdio.h>
int fact(int x)
{
    int i,fac=1;
    for(i=1;i<=x;i++)
    {
       fac=fac*i;
    }
    return fac;
}
int ncr(int n,int r)
{
    int a=fact(n);
    int b=fact(r);
    int c=fact(n-r);
    int f;
    f=a/(b*c);
    return f;
}
int main()
{
    int n,r;
    scanf("%d%d",&n,&r);
    printf("%d",ncr(n,r));
}

