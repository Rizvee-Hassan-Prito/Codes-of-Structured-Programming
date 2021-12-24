#include<stdio.h>
int main()
{
    int i,n,f1=0,f2=1,fn;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        fn=f1+f2;
        f2=f1;
        f1=fn;
    }
    printf ("%d",fn);
}

