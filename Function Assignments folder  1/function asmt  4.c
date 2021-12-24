#include<stdio.h>
int isMultiple(int x ,int n)
{
    if(x%n==0)
    {
        return 1;
    }
    else{return 0;}
}
int main()
{
    int a,b,x,i,min,max;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        min=b;
        max=a;
    }
    else
    {
        min=a;
        max=b;
    }
    for(i=min;i<=max;i++)
    {
        x=isMultiple(i,3);
        if(x==1)
        {
        printf("%d",i);
        }
    }
}
