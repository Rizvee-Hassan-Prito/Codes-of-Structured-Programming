#include<stdio.h>
int main()
{
    int x,n,sum=0,fac=1,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sum=sum+i*i;
    }
    printf("%d",sum);
}


