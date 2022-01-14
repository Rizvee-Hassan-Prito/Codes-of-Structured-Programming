#include<stdio.h>
int main()
{
    int a[50],i,n,b,c,m,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    i=0,m=i+1;
    while(m!=n-1)
    {
        b=0,c=0,i=0,d=m+1;
        while(i!=m)
        {
            b=b+a[i];
            i++;
        }
        while(d<=n-1)
        {
            c=c+a[d];
            d++;
        }
        if(c==b)
        {printf("%d",a[m]);}
        m++;
    }
}
