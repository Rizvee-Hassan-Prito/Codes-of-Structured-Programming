#include<stdio.h>
int getGCD(int x,int y)
{
    int i,gcd,min;
    if(x>y)
    {
        min=y;
    }
    else{min=x;}
    for(i=1;i<=min;i++)
    {
        if(x%i==0 && y%i==0)
        {
            gcd=i;
        }
    }
    return gcd;
}
int main ()
{
    int a[50],i,n,c,t;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     t=a[0];
     for (i=0;i<n;i++)
    {
        if(i!=n-1)
        {
            c=getGCD(t,a[i+1]);
            t=c;
        }
        else{break;}
    }
    printf("%d",c);
}
