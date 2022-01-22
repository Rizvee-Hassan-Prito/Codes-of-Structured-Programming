#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,sum=0,t,*p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    while(sum<n)
    {
 for(i=0;i<n-1;i++)
    {
        if(*(p+i)<*(p+i+1))
        {
            continue;
        }
        else
        {
           t=*(p+i);
           *(p+i)=*(p+i+1);
           *(p+i+1)=t;
        }
    }
    sum++;
    }
    for(i=0;i<n;i++)
    {
       printf(" %d ",*(p+i));
    }
}
