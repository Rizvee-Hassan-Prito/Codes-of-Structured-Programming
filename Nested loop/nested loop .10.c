#include <stdio.h>
int main()
{
    int n,i,a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(a=1;a<=i;a++)
        {
            if(a%2==0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf ("\n");
    }
}
