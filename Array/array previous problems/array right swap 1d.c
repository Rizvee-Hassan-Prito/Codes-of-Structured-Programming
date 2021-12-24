#include<stdio.h>
int main()
{
    int a[50];
    int i,n,t,c,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    k=a[n-1];
    c=a[0];
    for(i=0;i<n;i++)
    {
       t=a[i+1];
       a[i+1]=c;
       c=t;
    }
    a[0]=k;
   for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}
