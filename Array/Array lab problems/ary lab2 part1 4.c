#include<stdio.h>
int main()
{
    int a[50],b[50];
    int i,n,m,size=0;
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
    int flag=0;
    if(n==m)
    {
         for(i=0;i<n;i++)
         {
             if(a[i]!=b[i])
             {
                 flag=1;
                 break;
             }
         }
    }
    else{flag=1;}
    if(flag==0)
    {
        printf("equal");
    }
    else
    {
        printf("not equal");
    }
    }
