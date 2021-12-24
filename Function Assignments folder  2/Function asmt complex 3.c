#include<stdio.h>
int isPresent(int a[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            return 1;
        }
    }
        return 0;
}
int main()
{
    int i,n,d,m,size=0,a[50],b[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
     for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
     for(i=0;i<m;i++)
    {
        d=isPresent(a,n,b[i]);
        if(d==1)
        {
            continue;
        }
        else
            {
                a[n+size]=b[i];
                size++;
            }
    }
      for(i=0;i<n+size;i++)
      {
          printf("%d",a[i]);
      }
}
