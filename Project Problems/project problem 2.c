#include<stdio.h>
int main()
{
    int a[50][50];
    int i,j,n,sum,sum1,sum2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }
    sum=0;
       for(j=0;j<n;j++)
     {
        sum=sum+a[0][j];
     }
     for(i=0;i<n;i++)
    { sum1=0;
       for(j=0;j<n;j++)
        {
          sum1=sum1+a[i][j];
        }
        if(sum1!=sum)
        {
            printf("Not magic square matrix");
            return 0;
        }
    }
      for(j=0;j<n;j++)
    { sum2=0;
       for(i=0;i<n;i++)
        {
          sum2=sum2+a[i][j];
        }
        if(sum2!=sum)
        {
            printf("Not magic square matrix");
            return 0;
        }
    }
    int sum3=0;
    int sum4=0;
    for(i=0;i<n;i++)
        {
          sum3=sum3+a[i][n-1-i];
        }
        for(i=0;i<n;i++)
        {
          sum4=sum4+a[i][i];
        }
        if(sum3!=sum || sum4!=sum)
        {
            printf("Not magic square matrix");
            return 0;
        }
    printf("Magic square matrix");
}
