#include<stdio.h>
int main()
{
    int a[50][50],b[50][50];
    int i,j,n,t,m;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m/2;j++)
        {
            t=a[i][j];
            a[i][j]=a[i][m-1-j];
            a[i][m-1-j]=t;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("/n");
    }
}
