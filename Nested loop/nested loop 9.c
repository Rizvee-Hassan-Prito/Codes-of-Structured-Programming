#include <stdio.h>
int main()
{
    int n,i,a,b,c,e;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(c=1;c<=n-i;c++)
        {
            printf(" ");
        }
        for(a=1;a<=i;a++)
        {
            printf("*");
        }
         for(a=1;a<=i-1;a++)
        {
            printf("*");
        }

        printf("\n");
    }
     for(i=n-1;i>=1;i--)
    {
        for(c=1;c<=n-i;c++)
        {
            printf(" ");
        }
        for(a=i;a>=1;a--)
        {
            printf("*");
        }
          for(a=i;a>=2;a--)
        {
            printf("*");
        }

        printf("\n");
    }
}



