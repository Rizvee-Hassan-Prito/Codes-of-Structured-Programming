#include<stdio.h>
int main()
{
    while(1)
    {
    int h1,m1,h2,m2,h3,m3,t;
    scanf("%d",&h1);
    printf(":");
    scanf("%d",&m1);
    scanf("%d",&h2);
    printf(":");
    scanf("%d",&m2);
    scanf("%d",&h3);
    printf(":");
    scanf("%d",&m3);
    int sum1,sum2,sum3;
    if(h1==00)
    {
        sum1=(24*60)+m1;
    }
    else
        {
    sum1=(h1*60)+m1;
        }
    if(h2==00)
    {
        sum2=24*60+m2;
    }
    else
    {
        sum2=(h2*60)+m2+1440;
    }
    if(h3==00)
    {
        sum3=24*60+m3;
    }
    else
    {
        sum3=(h3*60)+m3+1440;
    }
    if(h1!=0 && h2!=0 && h3!=0)
    {
        sum2=sum2-1440;
        sum3=sum3-1440;
    }
    if(h3==0 && h2!=0)
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
    if(min1>min2)
    {
        printf("%d mins",min1);
    }
    else
    {
        printf("%d mins",min2);
    }
    }
}




