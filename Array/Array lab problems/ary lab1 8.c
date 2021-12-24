#include<stdio.h>
int main()
{
    int a[50];
    int i,n,m,cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
     for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            cnt++;
        }
    }
    printf("%d",cnt);
}
