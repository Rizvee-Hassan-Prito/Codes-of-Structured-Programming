#include<stdio.h>
int main()
{
    int n,sum=0,x=2,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sum=sum+x;
       x=x+2;
    }
    printf("%d",sum);
}




