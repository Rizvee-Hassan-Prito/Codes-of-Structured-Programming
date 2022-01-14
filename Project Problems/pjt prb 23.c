#include<stdio.h>
int main()
{
    int a[500],i,n,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            c++;
        }
    }
        printf("%d Jumps",c);
}
