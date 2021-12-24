#include<stdio.h>
int printEvens (int n)
{
    int i,a=2;
    for (i=1;i<=n;i++)
    {
        printf("%d",a);
        a=a+2;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printEvens(n);
}
