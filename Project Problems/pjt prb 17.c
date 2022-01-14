#include<stdio.h>
int main()
{
    int i,n,max=99999,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-6;i++)
    {
    int sum1,sum2,sum3;
    if(a[i]==00)
    {
        sum1=(24*60)+a[i+1];
    }
    else
        {
    sum1=(a[i]*60)+a[i+1];
        }
    if(a[i+2]==00)
    {
        sum2=24*60+a[i+3];
    }
    else
    {
        sum2=(a[i+2]*60)+a[i+3]+1440;
    }
    if(a[i+4]==00)
    {
        sum3=24*60+a[i+5];
    }
    else
    {
        sum3=(a[i+4]*60)+a[i+5]+1440;
    }
    if(a[i]!=0 && a[i+2]!=0 && a[i+4]!=0)
    {
        sum2=sum2-1440;
        sum3=sum3-1440;
    }
    if(a[i+4]==0 && a[i+2]!=0)
    {
        sum2=sum2-1440;
    }
    int min1,min2;
    if(sum1>sum2)
    {
        min1=sum1-sum2;
    }
    else
    {
        min1=sum2-sum1;
    }
    if(sum2>sum3)
    {
        min2=sum2-sum3;
    }
    else
    {
        min2=sum3-sum2;
    }
    if(min1>min2 && min2<max)
    {
        max=min2;
    }
    else if(min1<min2 && min1<max)
    {
        max=min1;
    }
   }
   printf("%d mins",max);
}



