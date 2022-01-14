#include<stdio.h>
int main()
{
    int i,n,a[50],d,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&d);
    int t;
    for(i=0;i<n-1;i++)
    {
        for(t=i+1;t<=n-1;t++)
        {
        if(a[i]+a[t]==d)
        {
            printf("YES.Can be done by merging %d and %d rod",i+1,t+1);
            return 1;
        }
        }
    }
    printf ("No");
}
