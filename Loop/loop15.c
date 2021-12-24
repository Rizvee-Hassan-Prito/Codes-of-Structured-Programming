#include<stdio.h>
int main()
{
    int n,i,p=1,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+p*5;
        p=p*5;
    }
        printf("%d",sum);

}
