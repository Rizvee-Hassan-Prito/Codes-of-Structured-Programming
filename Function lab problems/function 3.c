#include<stdio.h>
int countdigit(int x)
{
    int cnt=0,d;
    while(x!=0)
    {
       d=x%10;
       x=x/10;
       cnt++;
    }
    return cnt;
}
int power(int x,int n)
{
    int i,mul=1;
    for(i=1;i<=n;i++)
    {
        mul=mul*x;
    }
    return mul;
}
int main()
{
    int i,n,k,c,sum=0;
    scanf("%d",&n);
    int d=n;
    int m=countdigit(n);
    while(n!=0)
    {
        k=n%10;
        n=n/10;
        c=power(k,m);
        sum=sum+c;
    }
    if(d==sum)
    {
          printf("Armstrong number");
    }
    else{printf("Not armstrong number");}
}
