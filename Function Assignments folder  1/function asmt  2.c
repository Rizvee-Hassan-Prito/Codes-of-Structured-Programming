#include<stdio.h>
int getSum(int n,int x)
{
    int i;
    i=n+x;
    return i;
}
int main()
{
    int a,b,d;
    scanf("%d%d",&a,&b);
    d=getSum(a,b);
    if(d%2==0)
    {
       printf("sum is even");
    }
    else
    {
       printf("sum is odd");
    }
}
