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
    int i,j,n,t;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d",ncr(i,j));
        }
        printf("\n");
    }
}
