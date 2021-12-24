#include<stdio.h>
int Ldigit(int n)
{
    int d;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
    }
    return d;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int c=Ldigit(n);
    int d=n%10;
    if(c==d)
    {
        printf("EQUAL");
    }
    else
    {
        printf("NOT EQUAL");
    }
}
