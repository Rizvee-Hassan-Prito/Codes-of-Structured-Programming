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
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            a[i]=a[i]+2;
        }
        else
        {
            a[i]=a[i]+3;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
