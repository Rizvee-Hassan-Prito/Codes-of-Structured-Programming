#include<stdio.h>
int main()
{
    int a[50];
    int b[50];
    int n,i,d,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int c=0;
    for(d=1;d<=a[i];d++)
    {
        if(a[i]%d==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        sum=sum+a[i];
    }
    }
    printf("%d",sum);
}


