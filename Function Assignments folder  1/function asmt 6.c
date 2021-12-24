#include<stdio.h>
int sumOdd (int x)
{
    int i,sum=0,a=1;
    for(i=1;i<=x;i++)
    {
        sum=sum+a;
        a=a+2;
    }
    return sum;
}
int main ()
{
    int n,d;
    scanf("%d",&n);
    d=sumOdd(n);
    printf("Sum of first %d odd integers:\n%d",n,d);
}
