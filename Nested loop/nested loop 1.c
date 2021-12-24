#include<stdio.h>
int main()
{
    int i,x,n,a=1,c=1;
    scanf("%d",&n);
    while(a<=n)
    {

        x=1;
        if(c<=n)
        {
            i=1;
        while(i<=c)
        {
            x=x*c;
            i++;
        }
        c++;
        }
        printf("%d:%d\n",a,x);
        a++;
    }
}
