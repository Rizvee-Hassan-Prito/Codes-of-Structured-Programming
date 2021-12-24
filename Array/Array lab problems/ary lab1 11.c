#include<stdio.h>
int main()
{
    int a[50];
    int i,n,m,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    t=a[0];
    for(i=0;i<n;i++)
    {
        a[i]=a[i+1];
    }
    a[n]=t;
     for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
}
