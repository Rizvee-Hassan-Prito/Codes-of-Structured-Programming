#include<stdio.h>
int main()
{
    int a[5000],b[5000],c[5000];
    int i,j,k,n,l;
    scanf("%d",&n);
    scanf("%d",&l);
    if(n>l)
{
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        if(j<n-l)
        {
            while(n-l!=j)
            {
                b[j]=0;
                j++;
            }
        }
        scanf("%d",&b[j]);
    }
    for(k=0;k<n;k++)
    {
      c[n-1-k]=a[n-1-k]+b[n-1-k];
      if(c[n-1-k]>=10 && n-1-k!=0)
      {
          c[n-1-k]=c[n-1-k]-10;
          a[n-2-k]=a[n-2-k]+1;
      }
    }
    for(k=0;k<n;k++)
    {
        printf("%d",c[k]);
    }
}
/*else
{
    for(i=0;i<l;i++)
    {
        if(l>n && i<l-n)
        {
            while(l-n!=i)
            {
                a[i]=0;
                i++;
            }
        }
        scanf("%d",&a[i]);
    }
    for(j=0;j<l;j++)
    {
        scanf("%d",&b[j]);
    }
    for(k=0;k<n;k++)
    {
      c[n-1-k]=a[n-1-k]+b[n-1-k];
      if(c[n-1-k]>=10 && n-1-k!=0)
      {
          c[n-1-k]=c[n-1-k]-10;
          a[n-2-k]=a[n-2-k]+1;
      }
    }
    for(k=0;k<n;k++)
    {
        printf("%d",c[k]);
    }
}*/
}

