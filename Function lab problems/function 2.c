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
    int i,n,z,d,sum=0;
    scanf("%d",&n);
    int k=n;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        z=fact(d);
        sum=sum+z;
    }
    if(k==sum)
    {
        printf("strong number");
    }
    else{ printf("not strong number");}
}
