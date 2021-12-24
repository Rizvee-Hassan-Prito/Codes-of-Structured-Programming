#include<stdio.h>
int main()
{
    int a[50];
    int i,n,c,m,t,z;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(z=0;z<m;z++)
    {
    t=a[n-1];
    int k=a[0];
    for(i=0;i<n;i++)
    {
        c=a[i+1];
        a[i+1]=k;
        k=c;
    }
    a[0]=t;
    }
     for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
}
