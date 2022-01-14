#include<stdio.h>
int main()
{
    int i,n,m,a[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    int c=0;
    for(i=0;i<n;i++)
    {
        m=i;
        while(m<n)
        {
        if(a[i]==a[m+1])
        {
            c++;
        }
        m++;
        }
    }
    printf("%d",c);
}
