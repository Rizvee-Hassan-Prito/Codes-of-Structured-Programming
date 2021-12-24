#include<stdio.h>
int main()
{
    int a[50][50];
    int i,j,n,m,k;
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
        for(k=0;k<i;k++)
        {
            printf(" ");
        }
        for(j=i;j<m;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}
