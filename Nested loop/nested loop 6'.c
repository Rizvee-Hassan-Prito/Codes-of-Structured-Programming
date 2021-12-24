#include <stdio.h>
int main()
{
    int n,i,a,b,c;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(c=1;c<=n-i;c++)
        {
            printf(" ");
        }
        for(a=i;a>=1;a--)
        {
            printf("*");
        }
        printf("\n");
    }
}

