#include<stdio.h>
int main()
{
    int a[50];
    int i,n,cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i+1]>a[i])
        {
            cnt++;
        }
    }
    if(cnt==n-1)
    {
        printf("monotonic");
    }
    else
        {
            printf("not monotonic");
        }
}
