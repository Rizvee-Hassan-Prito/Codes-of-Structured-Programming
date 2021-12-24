#include<stdio.h>
int getMin(int a[],int start_pos,int end_pos)
{
    int i,min=99999,idx;
    for(i=start_pos;i<=end_pos;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            idx=i;
        }
    }
    return idx;
}
int main()
{
    int a[50],i,n,d,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
       d=getMin(a,i,n-1);
       t=a[i];
       a[i]=a[d];
       a[d]=t;
    }
    for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
}
