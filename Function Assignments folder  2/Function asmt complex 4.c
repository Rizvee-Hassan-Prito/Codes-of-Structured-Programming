#include<stdio.h>
int printArrayRange(int start_pos,int end_pos,int a[])
{
    int i,min,max;
    for(i=start_pos;i<=end_pos;i++)
    {
        printf("%d",a[i]);
    }
}
int main()
{
    int a[50],n,i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }
    int l=0;
    for(i=0;i<n;i++)
    {
        for(k=i;k<n;k++)
    {
        printArrayRange(i,k,a);
        printf("\n");
    }
    }
}

