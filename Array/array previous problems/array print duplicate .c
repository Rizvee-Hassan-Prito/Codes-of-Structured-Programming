#include<stdio.h>
int main()
{
    int a[50],b[50],c[50];
    int i,n,m,j;
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
    int size=0;
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
           if(b[i]==a[j])
           {
               c[size]=a[j];
               size++;
           }
       }
   }
   for(i=0;i<size;i++)
    {
        printf("%d",c[i]);
    }
}
