#include<stdio.h>
int main()
{
    int a[50],b[50],c[50];
    int i,n,m,size=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&c[i]);
    }
     for(i=0;i<n;i++)
    {
            b[size]=a[i];
            size++;
    }
    for(i=0;i<m;i++)
    {
            b[size]=c[i];
            size++;
    }

     for(i=0;i<size;i++)
    {
        printf(" %d ",b[i]);
    }
}

