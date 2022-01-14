#include<stdio.h>
#include<math.h>
int main()
{
    int i=0,n;
    scanf("%d",&n);
    while(i!=n)
    {
        if((pow(2,pow(2,i)))+1==n)
        {
            printf("Fermat number");
            return 0;
        }
        i++;
    }
    printf("Not Fermat number");
}
