#include<stdio.h>
int function(int a[],int n,int x,int y)
{
    int i,cnt=0,max,min;
    if (x>y)
    {
        max=x;
        min=y;
    }
    else{max=y;
         min=x;
        }
    for(i=0;i<n;i++)
    {
        if(min<=a[i] && a[i]<=max)
        {
            cnt++;
        }
    }
    return cnt;
}
int main()
{
    int a[50];
    int i,n,c,b,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter range:");
    scanf("%d%d",&c,&b);
    d=function(a,n,c,b);
    printf("%d",d);
}
