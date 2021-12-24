#include<stdio.h>
int gcd(int x,int n)
{
    int i,gcd,max;
    if(x>n)
    {
        max=x;
    }
    else{max=n;}
    for(i=1;i<=max;i++)
    {
        if(x%i==0 && n%i==0)
        {
            gcd=i;
        }
    }
    return gcd;
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int d=gcd(a,b);
    int e=gcd(d,c);
    printf("GCD: %d",e);
}
