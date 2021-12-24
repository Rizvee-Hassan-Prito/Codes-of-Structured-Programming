#include <stdio.h>
int main()
{
    int i,x,n,a=1,fac=1,sum=0;
    scanf("%d%d",&x,&n);
    while(a<=x)
        {
            int fac=1;
    for(i=1;i<=n;i++)
    {
        fac=fac*a;
    }
    sum=sum+fac;

    a++;
    }
    printf("%d",sum);
}
