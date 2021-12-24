#include<stdio.h>
int main()
{
    int a[50];
    int i,n,z,f;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d",a[i]);
        }
    }
}
