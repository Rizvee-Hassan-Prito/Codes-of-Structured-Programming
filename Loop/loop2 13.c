#include<stdio.h>
int main()
{
    int i,a,b,n=0,p=1;
    scanf("%d%d",&a,&b);
    while(1)
    {
        p=p*a;
        n++;
        if(p==b)
        {
          break;
        }
        else if(p>b)
        {
          break;
        }
    }
    if(p==b)
    {
        printf("%d",n);
    }
    else{
            printf("not power");
    }
}
