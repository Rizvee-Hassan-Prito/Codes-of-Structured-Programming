#include<stdio.h>
int main()
{
    int i,n,a,b,c,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(c=1;c<=n-i;c++)
            {
                printf(" ");
            }

            for(b=1;b<=i;b++)
            {
                 printf("*");
            }

          printf("\n");
    }
}
