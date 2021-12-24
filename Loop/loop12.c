#include<stdio.h>
int main()
{
    int x,n,fac=1,i;
    scanf("%d%d",&x,&n);
    for(i=1;i<=n;i++)
    {
       fac=fac*x;
    }
    printf("%d",fac);
}


