#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*(i+1)*(i+2);

    }
        printf("%d",sum);

}

