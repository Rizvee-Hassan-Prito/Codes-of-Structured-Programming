#include<stdio.h>
int main()
{
   int a[50],b[50];
   int n,i;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       b[i]=a[n-1-i];
   }
   for(i=0;i<n;i++)
   {
       printf("%d",b[i]);
   }
}
