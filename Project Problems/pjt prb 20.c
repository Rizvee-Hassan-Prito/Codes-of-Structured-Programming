#include<stdio.h>
int main()
{
    int a[500],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-3;i++)
    {
        if(a[i+1]<a[i] && a[i+1]<a[i+3] && a[i+2]<a[i] && a[i+2]<a[i+3] )
        {
            printf("Index %d: %d\nIndex %d: %d\n",i,a[i],i+3,a[i+3]);
        }
    }
}
