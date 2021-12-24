#include<stdio.h>
int main()
{
    int a[50][50],b[50][50];
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
            b[i][j]=a[j][i];
        }
    }
    int flag=1;
   for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]!=b[i][j])
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("yes");
    }
    else{ printf("no");}
}

