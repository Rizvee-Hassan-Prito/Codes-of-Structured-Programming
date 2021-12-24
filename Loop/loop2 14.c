#include<stdio.h>
int main()
{
    int n,a=0;
    for( ;1; )
    {
        printf("give number= \n");
        scanf("%d",&n);
        if(n==-1)
        {
            break;
        }
        a++;
    }
    printf ("total numbers given=%d",a);
}
