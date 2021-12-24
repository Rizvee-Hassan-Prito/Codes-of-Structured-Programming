#include<stdio.h>
int main()
{
   int a[50],b[50],i,n;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   int t,j,idx;
   for(i=0;i<n;i++)
   {
       int min=99999;
       t=a[i];
       for(j=i;j<=n-1;j++)
       {
           if(a[j]<min)
           {
               min=a[j];
               idx=j;
           }
       }
       b[i]=min;
       a[idx]=t;
   }
   for(i=0;i<n;i++)
   {
       printf("%d",b[i]);
   }
}
