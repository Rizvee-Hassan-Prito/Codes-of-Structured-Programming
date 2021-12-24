#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,p=3,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+p*p*p;
        p=p+3;
    }
        printf("%d",sum);

}

