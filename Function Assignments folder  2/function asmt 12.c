#include<stdio.h>
int power(int x, int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*x;
    }
    return f;
}
int main()
{
 int a,n,i,b,f=0,flag=0,c;
 scanf("%d%d",&a,&b);
 for(i=1;i<=b;i++)
 {
     c=power(a,i);
     f++;
     if(c==b)
     {
        flag=1;
        break;
     }
 }
 if(flag==1)
 {
     printf("%d",f);
 }
 else
    {
        printf("not power");
    }
}
