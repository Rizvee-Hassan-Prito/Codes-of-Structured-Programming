#include<stdio.h>
int main()
{
    int a[50][50];
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
    for(j=0;j<m;j++)
    {
        int max=-99999;
        for(i=0;i<n;i++)
        {
          if(a[i][j]>max)
          {
              max=a[i][j];
          }
        }
        printf("minimum of column %d is %d",(j+1),max);
        printf("\n");
    }
}

