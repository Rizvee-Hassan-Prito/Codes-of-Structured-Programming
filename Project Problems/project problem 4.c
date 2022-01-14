#include<stdio.h>
int oddeven(int n)
{
    int a=2,c,flag=0;
    while(a<n)
    {
        int b=3;
        while(b<n)
        {
        c=a*b;
        b=b+2;
        if(c==n)
        {
            flag=1;
            break;
        }
        }
        a=a+2;
        if(flag==1)
         {
             return 1;
         }
    }
            return 0;
}
int main()
{
    int a[50];
    int i,cnt=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
     {
         if(oddeven(a[i])==1)
         {
             cnt++;
         }
     }
     printf("%d",cnt);
}
