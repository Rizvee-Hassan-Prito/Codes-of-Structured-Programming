#include <stdio.h>
int main()
{
      int n1, n2,i,g,min;
    scanf("%d %d",&n1,&n2);
    if(n1>n2)
    {
        min=n2;
    }
    else
        {
            min=n1;
        }
        for(i=1;i<=min;i++)
        {
            if(n1%i==0 && n2%i==0)
            {
                g=i;
            }
        }
         printf("%d",g);
}
