#include<stdio.h>
int getDivisorSum(int n)
{
 int i,sum=0;
 for(i=1;i<=n;i++)
 {
     if(n%i==0)
     {
         sum=sum+i;
     }
 }
 return sum;
}
int isPerfect(int n)
{
    int c=getDivisorSum(n);
    int d=n*2;
    if(c==d)
    {
        return 1;
    }
    else{return 0;}
}
int main()
{
    int a[50],n,i,c,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=isPerfect(a[i]);
        if(c==1)
        {
            count++;
        }
    }
    printf("%d",count);
}
