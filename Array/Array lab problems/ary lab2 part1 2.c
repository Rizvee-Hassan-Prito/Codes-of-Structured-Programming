#include<stdio.h>
int main()
{
    int a[50],b[50];
    int i,n,size=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            b[size]=a[i];
            size++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            b[size]=a[i];
            size++;
        }
    }

     for(i=0;i<size;i++)
    {
        printf(" %d ",b[i]);
    }
}
