#include<stdio.h>
int main()
{
    int n,i,sum=0,p=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*3*p;
        p=p*3;
    }
        printf("%d",sum);

}
