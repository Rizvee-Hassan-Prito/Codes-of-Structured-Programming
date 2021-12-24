#include<stdio.h>
int sumSQR (int x)
{
    int i,sum=0;
    for(i=1;i<=x;i++)
    {
        sum=sum+i*i;
    }
    return sum;
}
int main ()
{
    int n,d;
    scanf("%d",&n);
    d=sumSQR(n);
    printf("Sum of squares of first %d integers:\n%d",n,d);
}
