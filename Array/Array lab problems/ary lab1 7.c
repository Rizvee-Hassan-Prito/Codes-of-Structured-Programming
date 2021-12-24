#include<stdio.h>
int main()
{
    int a[50];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=-99999,idx;
     for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    int scndmax=-9999,sidx;
     for(i=0;i<n;i++)
    {
        if(a[i]>scndmax && max!=a[i])
        {
            scndmax=a[i];
            sidx=i;
        }
    }
    printf("%d\n",scndmax);
    printf("%d",sidx);
}
