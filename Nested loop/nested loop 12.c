#include <stdio.h>
int main()
{
    int n,i,a,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(c=1;c<i;c++)
        {
            printf(" ");
        }
        for(a=i;a<=n;a++)
        {
            printf("%d",a);
        }
        printf("\n");
    }
}

