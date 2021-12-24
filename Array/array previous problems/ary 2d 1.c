#include<stdio.h>
int main()
{
    int a[50][50];
    int n,i,j,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i][n-1-i];
    }
    printf("%d",sum);

}
