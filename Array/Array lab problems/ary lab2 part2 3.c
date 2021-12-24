#include<stdio.h>
int main()
{
    int a[50][50],b[50][50],c[50][50];
    int i,j,n,m;
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
        for(j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           c[i][j]=a[i][j]+b[i][j];
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           printf("%d",c[i][j]);
        }
        printf("\n");
    }
}

