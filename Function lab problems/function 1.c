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
int main()
{
    int i,n,z;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        z=fact(i);
        printf("factorial of %d:%d",i,z);
        printf("\n");
    }
}
