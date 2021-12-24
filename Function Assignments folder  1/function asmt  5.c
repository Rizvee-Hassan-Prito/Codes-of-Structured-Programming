#include<stdio.h>
int isPrime(int n)
{
    int i,cnt=0;
    for(i=1;i<=n;i++)
    {
       if(n%i==0)
       {
           cnt++;
       }
    }
    if(cnt==2)
    {
        return 1;
    }
    else{return 0;}
}
int main()
{
    int n,i,d;
    scanf("%d",&n);
    printf("All prime numbers of 1 to %d:\n",n);
    for(i=1;i<=n;i++)
    {
        d=isPrime(i);
        if(d==1)
        {
            printf("%d\n",i);
        }
    }
}
