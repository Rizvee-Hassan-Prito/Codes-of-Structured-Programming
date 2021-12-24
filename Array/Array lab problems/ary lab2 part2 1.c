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
    for(i=0;i<n;i++)
    {
        int min=99999;
        for(j=0;j<m;j++)
        {
          if(a[i][j]<min)
          {
              min=a[i][j];
          }
        }
        printf("minimum of row %d is %d",(i+1),min);
        printf("\n");
    }
}
