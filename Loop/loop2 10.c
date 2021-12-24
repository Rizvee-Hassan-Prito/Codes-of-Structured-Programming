#include <stdio.h>
int main()
{
    int i=1,n1,n2;
    scanf("%d %d", &n1, &n2);
    while(1)
    {
        if( i%n1==0 && i%n2==0 )
        {
            printf("%d", i);
            break;
        }
        i++;
    }
    return 0;
}

